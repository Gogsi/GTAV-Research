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
	struct<2> Local_48[10];
	struct<15> Local_69[7];
	struct<44> Local_175[29];
	struct<7> Local_1452[4];
	struct<2> Local_1481[7];
	var uLocal_1496 = 16;
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
	struct<6> Local_1661 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_1667 = 0;
	var uLocal_1668 = 1092616192;
	var uLocal_1669 = 1101004800;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 3;
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
	int iLocal_1709 = 0;
	int iLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712[3] = { 0, 0, 0 };
	var uLocal_1716[1] = { 0 };
	var uLocal_1718 = 0;
	int iLocal_1719 = 0;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	int iLocal_1722 = 0;
	int iLocal_1723 = 0;
	int iLocal_1724 = 0;
	int iLocal_1725 = 0;
	int iLocal_1726 = 0;
	int iLocal_1727 = 0;
	int iLocal_1728[3] = { 0, 0, 0 };
	int iLocal_1732 = 0;
	int iLocal_1733 = 0;
	int iLocal_1734 = 0;
	var uLocal_1735 = 0;
	float fLocal_1736 = 0f;
	float fLocal_1737 = 0f;
	float fLocal_1738 = 0f;
	int iLocal_1739 = 0;
	int iLocal_1740 = 0;
	int iLocal_1741 = 0;
	int iLocal_1742 = 0;
	int iLocal_1743 = 0;
	int iLocal_1744 = 0;
	int iLocal_1745 = 0;
	bool bLocal_1746 = 0;
	int iLocal_1747 = 0;
	int iLocal_1748 = 0;
	int iLocal_1749 = 0;
	int iLocal_1750 = 0;
	var uLocal_1751 = 0;
	int iLocal_1752 = 0;
	int iLocal_1753 = 0;
	var uLocal_1754 = 0;
	int iLocal_1755 = 0;
	int iLocal_1756 = 0;
	int iLocal_1757 = 0;
	int iLocal_1758 = 0;
	int iLocal_1759 = 0;
	int iLocal_1760 = 0;
	int iLocal_1761 = 0;
	int iLocal_1762 = 0;
	struct<3> Local_1763 = { 0, 0, 0 } ;
	float fLocal_1766 = 0f;
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
	int iLocal_1778 = 0;
	int iLocal_1779 = 0;
	bool bLocal_1780 = 0;
	bool bLocal_1781 = 0;
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
	int iLocal_1796 = 0;
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
	int iLocal_1818[2] = { 0, 0 };
	int iLocal_1821[3] = { 0, 0, 0 };
	int iLocal_1825[3] = { 0, 0, 0 };
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	bool bLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	char* sLocal_1834 = NULL;
	int iLocal_1835 = 0;
	bool bLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	bool bLocal_1839 = 0;
	struct<3> Local_1840 = { 0, 0, 0 } ;
	int iLocal_1843 = 0;
	int iLocal_1844 = 0;
	int iLocal_1845 = 0;
	int iLocal_1846 = 0;
	int iLocal_1847 = 0;
	int iLocal_1848 = 0;
	int iLocal_1849 = 0;
	int iLocal_1850 = 0;
	int iLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 21;
	var uLocal_1860 = 6;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	int iLocal_1864 = 0;
	int iLocal_1865 = 0;
	int iLocal_1866 = 0;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	int iLocal_1869 = 0;
	struct<3> Local_1870 = { 0, 0, 0 } ;
	int iLocal_1873 = 0;
	bool bLocal_1874 = 0;
	int iLocal_1875 = 0;
	int iLocal_1876 = 0;
	int iLocal_1877 = 0;
	int iLocal_1878 = 0;
	int iLocal_1879 = 0;
	int iLocal_1880 = 0;
	int iLocal_1881 = 0;
	int iLocal_1882 = 0;
	int iLocal_1883 = 0;
	int iLocal_1884 = 0;
	var uLocal_1885 = 0;
	int iLocal_1886 = 0;
	int iLocal_1887 = 0;
	int iLocal_1888 = 0;
	int iLocal_1889 = 0;
	int iLocal_1890 = 0;
	int iLocal_1891 = 0;
	int iLocal_1892 = 0;
	int iLocal_1893 = 0;
	int iLocal_1894 = 0;
	int iLocal_1895 = 0;
	int iLocal_1896 = 0;
	int iLocal_1897 = 0;
	int iLocal_1898 = 0;
	int iLocal_1899 = 0;
	var uLocal_1900[2] = { 0, 0 };
	int iLocal_1903 = 4;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 4;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 4;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 4;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 4;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 4;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 4;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	struct<21> Local_1947 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	int iLocal_1983 = 0;
	int iLocal_1984 = 0;
	int iLocal_1985 = 0;
	float fLocal_1986 = 0f;
	float fLocal_1987 = 0f;
	float fLocal_1988 = 0f;
	struct<3> Local_1989 = { 0, 0, 0 } ;
	struct<3> Local_1992 = { 0, 0, 0 } ;
	struct<3> Local_1995 = { 0, 0, 0 } ;
	bool bLocal_1998 = 0;
	bool bLocal_1999 = 0;
	float fLocal_2000 = 0f;
	float fLocal_2001 = 0f;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	float fLocal_2006 = 0f;
	bool bLocal_2007 = 0;
	float fLocal_2008 = 0f;
	int iLocal_2009 = 0;
	var uLocal_2010 = 30;
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
	var uLocal_2161 = 10;
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
	var uLocal_2200 = 0;
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
	var uLocal_2212 = 10;
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
	var uLocal_2283 = 20;
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
	var uLocal_2322 = 0;
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
	var uLocal_2384 = 20;
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
	var uLocal_2485 = 30;
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
	var uLocal_2524 = 0;
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
	var uLocal_2666 = 5;
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
	var uLocal_2697 = 7;
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
	var uLocal_2747 = 5;
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
	var uLocal_2773 = 3;
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
	var uLocal_2789 = 15;
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
	var uLocal_2884 = 10;
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
	var uLocal_2923 = 0;
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
	var uLocal_2935 = 5;
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
	var uLocal_2961 = 5;
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
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 7;
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
	var uLocal_3008 = 12;
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
	var uLocal_3021 = 12;
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
	var uLocal_3034 = 12;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 9;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 9;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
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
	var uLocal_3090 = 12;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 12;
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
	var uLocal_3116 = 12;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 9;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 9;
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
	var uLocal_3152 = 0;
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
	var uLocal_3172 = 12;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 12;
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
	var uLocal_3198 = 12;
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
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 9;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 9;
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
	var uLocal_3236 = 0;
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
	var uLocal_3254 = 12;
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
	var uLocal_3266 = 0;
	var uLocal_3267 = 12;
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
	var uLocal_3280 = 12;
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
	var uLocal_3293 = 9;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 9;
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
	var uLocal_3323 = 0;
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
	var uLocal_3336 = 12;
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
	var uLocal_3349 = 12;
	var uLocal_3350 = 0;
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
	var uLocal_3362 = 12;
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
	var uLocal_3375 = 9;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 9;
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
	var uLocal_3407 = 0;
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
	var uLocal_3418 = 12;
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
	var uLocal_3431 = 12;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 12;
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
	var uLocal_3457 = 9;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 9;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 12;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 12;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 12;
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
	var uLocal_3539 = 9;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 9;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	int iLocal_3566 = 0;
	struct<7> Local_3567[21];
	int iLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 2;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 2;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 20;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = -1;
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
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 1065353216;
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
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = -1;
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
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 1065353216;
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
	var uLocal_3844 = -1;
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
	var uLocal_3874 = 1065353216;
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
	var uLocal_3901 = -1;
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
	var uLocal_3931 = 1065353216;
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
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = -1;
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
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 1065353216;
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
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = -1;
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
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 1065353216;
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
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = -1;
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
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 1065353216;
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
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = -1;
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
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 1065353216;
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
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = -1;
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
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 1065353216;
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
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = -1;
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
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 1065353216;
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
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = -1;
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
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 1065353216;
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
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = -1;
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
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 1065353216;
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
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = -1;
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
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 1065353216;
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
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = -1;
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
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 1065353216;
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
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = -1;
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
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 1065353216;
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
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = -1;
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
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 1065353216;
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
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = -1;
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
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 1065353216;
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
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = -1;
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
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 1065353216;
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
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = -1;
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
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 1065353216;
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
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = -1;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 1065353216;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 16;
	var uLocal_4868 = 0;
	var uLocal_4869 = -1082130432;
	var uLocal_4870 = 0;
	var uLocal_4871 = -1082130432;
	var uLocal_4872 = 0;
	var uLocal_4873 = -1082130432;
	var uLocal_4874 = 0;
	var uLocal_4875 = -1082130432;
	var uLocal_4876 = 0;
	var uLocal_4877 = -1082130432;
	var uLocal_4878 = 0;
	var uLocal_4879 = -1082130432;
	var uLocal_4880 = 0;
	var uLocal_4881 = -1082130432;
	var uLocal_4882 = 0;
	var uLocal_4883 = -1082130432;
	var uLocal_4884 = 0;
	var uLocal_4885 = -1082130432;
	var uLocal_4886 = 0;
	var uLocal_4887 = -1082130432;
	var uLocal_4888 = 0;
	var uLocal_4889 = -1082130432;
	var uLocal_4890 = 0;
	var uLocal_4891 = -1082130432;
	var uLocal_4892 = 0;
	var uLocal_4893 = -1082130432;
	var uLocal_4894 = 0;
	var uLocal_4895 = -1082130432;
	var uLocal_4896 = 0;
	var uLocal_4897 = -1082130432;
	var uLocal_4898 = 0;
	var uLocal_4899 = -1082130432;
	var uLocal_4900 = 16;
	var uLocal_4901 = 0;
	var uLocal_4902 = -1082130432;
	var uLocal_4903 = 0;
	var uLocal_4904 = -1082130432;
	var uLocal_4905 = 0;
	var uLocal_4906 = -1082130432;
	var uLocal_4907 = 0;
	var uLocal_4908 = -1082130432;
	var uLocal_4909 = 0;
	var uLocal_4910 = -1082130432;
	var uLocal_4911 = 0;
	var uLocal_4912 = -1082130432;
	var uLocal_4913 = 0;
	var uLocal_4914 = -1082130432;
	var uLocal_4915 = 0;
	var uLocal_4916 = -1082130432;
	var uLocal_4917 = 0;
	var uLocal_4918 = -1082130432;
	var uLocal_4919 = 0;
	var uLocal_4920 = -1082130432;
	var uLocal_4921 = 0;
	var uLocal_4922 = -1082130432;
	var uLocal_4923 = 0;
	var uLocal_4924 = -1082130432;
	var uLocal_4925 = 0;
	var uLocal_4926 = -1082130432;
	var uLocal_4927 = 0;
	var uLocal_4928 = -1082130432;
	var uLocal_4929 = 0;
	var uLocal_4930 = -1082130432;
	var uLocal_4931 = 0;
	var uLocal_4932 = -1082130432;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = -1082130432;
	var uLocal_4950 = -1082130432;
	var uLocal_4951 = 1;
	var uLocal_4952 = 1;
	var uLocal_4953 = 1;
	var uLocal_4954 = -1;
	var uLocal_4955 = -1;
	var uLocal_4956 = -1;
	int iLocal_4957 = 0;
	int iLocal_4958 = 0;
	int iLocal_4959 = 0;
	int iLocal_4960 = 0;
	int iLocal_4961 = 0;
	int iLocal_4962 = 0;
	float fLocal_4963 = 0f;
	float fLocal_4964 = 0f;
	float fLocal_4965 = 0f;
	float fLocal_4966 = 0f;
	int iLocal_4967 = 0;
	int iLocal_4968 = 0;
	int iLocal_4969 = 0;
	var uLocal_4970 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	
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
	iLocal_1739 = 1;
	iLocal_1747 = -1;
	sLocal_1834 = "alert_gunshot";
	iLocal_1850 = -1;
	iLocal_1876 = AUDIO::GET_SOUND_ID();
	iLocal_1877 = AUDIO::GET_SOUND_ID();
	iLocal_1878 = AUDIO::GET_SOUND_ID();
	iLocal_1879 = AUDIO::GET_SOUND_ID();
	iLocal_1882 = AUDIO::GET_SOUND_ID();
	iLocal_1883 = AUDIO::GET_SOUND_ID();
	iLocal_1886 = joaat("weapon_assaultrifle");
	iLocal_1887 = joaat("weapon_sniperrifle");
	iLocal_1888 = joaat("weapon_stickybomb");
	iLocal_1889 = joaat("weapon_combatpistol");
	iLocal_1890 = joaat("weapon_combatpistol");
	iLocal_1984 = -1;
	iLocal_1985 = 1000;
	fLocal_1986 = 500f;
	fLocal_1987 = 0.2f;
	fLocal_1988 = -1f;
	Local_1989 = { 0f, -2.2f, -2.9f };
	Local_1992 = { 0f, 0f, 0f };
	Local_1995 = { 0f, 0f, -90f };
	bLocal_1998 = true;
	fLocal_2000 = 0.787f;
	fLocal_2001 = 1f;
	iLocal_2002 = 1000;
	iLocal_2003 = 600;
	iLocal_2004 = 300;
	iLocal_2005 = 450;
	fLocal_2006 = 0.25f;
	bLocal_2007 = true;
	fLocal_2008 = 0.65f;
	fLocal_4963 = 0.00142f;
	fLocal_4964 = 0.125f;
	fLocal_4965 = 0.5f;
	fLocal_4966 = 0.195f;
	iLocal_4967 = 1000;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (!Local_1947.f_20)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("dh2a_dead");
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				Global_Mission_Fail_State.f_12[0] = 1;
			}
			else if (PLAYER::PLAYER_PED_ID() == func_886())
			{
				Global_Mission_Fail_State.f_12[0] = 0;
			}
			GlobalFunc_10632();
			func_881(1);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(1);
	}
	func_877();
	func_875();
	if (GlobalFunc_Is_Mission_Retry())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_1898 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			iLocal_1898++;
		}
		bVar4 = false;
		bVar5 = false;
		switch (iLocal_1898)
		{
			case 0:
				Var0 = { -1151.634f, -1519.498f, 9.6327f };
				fVar3 = 215f;
				break;
			
			case 1:
				Var0 = { -93.3159f, -2368.917f, 13.296f };
				fVar3 = 337.5851f;
				bVar4 = true;
				break;
			
			case 2:
				Var0 = { -83.5905f, -2361.798f, 13.2963f };
				fVar3 = 119.7045f;
				bVar5 = true;
				break;
			
			case 3:
				Var0 = { -94.9569f, -2371.877f, 13.2969f };
				fVar3 = 97.3018f;
				bVar5 = true;
				break;
			
			case 4:
				Var0 = { -129.6871f, -2366.897f, 8.3193f };
				fVar3 = 183.9491f;
				bVar5 = true;
				break;
			
			case 5:
				Var0 = { -191.4221f, -2365.476f, 8.3193f };
				fVar3 = 176.1654f;
				bVar5 = true;
				break;
			
			case 6:
				Var0 = { -221.8633f, -2376.619f, 12.3329f };
				fVar3 = 35.7369f;
				bVar4 = true;
				break;
			
			case 7:
				Var0 = { -143.8203f, -2488.261f, 43.4412f };
				fVar3 = 35.7369f;
				bVar4 = true;
				break;
			
			case 8:
				Var0 = { -143.8203f, -2488.261f, 43.4412f };
				fVar3 = 10.7369f;
				bVar4 = true;
				break;
			
			case 9:
			case 10:
				Var0 = { -90.4927f, -2288.003f, -1.3081f };
				fVar3 = 130.4705f;
				bVar5 = true;
				break;
			
			case 11:
				Var0 = { -332.2139f, -2570.991f, 5.001f };
				fVar3 = 97.2111f;
				break;
		}
		if (bVar4)
		{
			if (func_869(1, 1, 1))
			{
				GlobalFunc_4972(Var0, fVar3, 1, 0);
			}
		}
		else if (bVar5)
		{
			if (func_869(0, 1, 1))
			{
				GlobalFunc_4972(Var0, fVar3, 1, 0);
			}
		}
		else if (func_869(2, 1, 1))
		{
			GlobalFunc_4972(Var0, fVar3, 1, 0);
		}
		if (iLocal_1898 == 7)
		{
			iLocal_1897 = 6;
		}
		else if (iLocal_1898 == 8)
		{
			iLocal_1897 = 7;
		}
		else if (iLocal_1898 == 9)
		{
			iLocal_1897 = 8;
		}
		else if (iLocal_1898 == 10)
		{
			iLocal_1897 = 9;
		}
		else if (iLocal_1898 == 11)
		{
			iLocal_1897 = 10;
		}
		else
		{
			iLocal_1897 = iLocal_1898;
		}
		iLocal_1896 = 1;
		iLocal_1899 = 0;
		func_867(iLocal_1897);
	}
	else
	{
		GlobalFunc_Checkpoint2(0, "stage 0: drive to bridge", 0, 0, 0, 1);
		iLocal_1892 = 0;
		func_867(iLocal_1892);
		func_820();
		iLocal_1899 = 0;
	}
	iLocal_1893 = 0;
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TheMerryweatherHeistFreight", 0);
		GlobalFunc_8012(&uLocal_2010);
		GlobalFunc_5195(&uLocal_2990);
		func_816();
		func_792();
		func_727();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x4CB
{
	if (iLocal_1896)
	{
		return;
	}
	switch (iLocal_1892)
	{
		case 0:
			func_662();
			break;
		
		case 1:
			func_651();
			break;
		
		case 2:
			func_650();
			break;
		
		case 3:
			func_649();
			break;
		
		case 4:
			func_647();
			break;
		
		case 5:
			func_624();
			break;
		
		case 6:
			func_602();
			break;
		
		case 7:
			func_590();
			break;
		
		case 8:
			func_582();
			break;
		
		case 9:
			func_233();
			break;
		
		case 10:
			func_2();
			break;
	}
}

void func_2()//Position - 0x573
{
	struct<2> Var0;
	
	switch (iLocal_1893)
	{
		case 0:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_10914("MICHAEL", joaat("player_zero"), 11);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TREVOR", PLAYER::PLAYER_PED_ID(), 0);
			}
			if ((GlobalFunc_Has_Cutscene_Loaded() && SCRIPT::HAS_SCRIPT_LOADED("docks2ASubHandler")) && func_166(&(Local_48[0 /*2*/]), -329.75f, -2577.94f, 5.64f, 128.25f))
			{
				STREAMING::REMOVE_PTFX_ASSET();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1720))
				{
					ENTITY::DETACH_ENTITY(iLocal_1720, 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1720, "Miltary_Pickup", 1, 0, 0);
				}
				if (GlobalFunc_234(Local_48[3 /*2*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_48[3 /*2*/], "submersible", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Sub_Rope_complete", 2, joaat("prop_cs_sub_rope_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "DOM_Flatbed_truck", 2, joaat("flatbed"), 0);
				if (GlobalFunc_234(Local_69[1 /*15*/]))
				{
					GlobalFunc_8011(Local_69[1 /*15*/], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_69[1 /*15*/], "MICHAEL", 0, GlobalFunc_4917(0), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_69[1 /*15*/], "MICHAEL", 2, GlobalFunc_4917(0), 0);
				}
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				}
				GlobalFunc_6685(0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_1893++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::STOP_AUDIO_SCENES();
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_MISSION_COMPLETE");
				MISC::CLEAR_AREA(-332.2429f, -2571.744f, 5.00101f, 50f, 1, 0, 0, 0);
				iLocal_1734 = 0;
				iLocal_1893++;
			}
			break;
		
		case 2:
			if (GlobalFunc_2773(func_147()))
			{
				if (GlobalFunc_7614(func_147(), 1) == 88)
				{
					GlobalFunc_11257(func_147(), 14, Local_69[2 /*15*/].f_12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_11257(func_147(), 14, Local_69[2 /*15*/].f_13, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_11257(func_147(), 8, Local_69[2 /*15*/].f_14, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1733))
			{
				iLocal_1733 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Sub_Rope_complete", joaat("prop_cs_sub_rope_01"));
			}
			if (iLocal_1734 == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_69[1 /*15*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0)))
					{
						Local_69[1 /*15*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0));
						GlobalFunc_10914("MICHAEL", joaat("player_zero"), 11);
					}
				}
				else if (GlobalFunc_2773(Local_69[1 /*15*/]))
				{
					if (!GlobalFunc_10915(Local_69[1 /*15*/], 12, 11))
					{
						GlobalFunc_11257(Local_69[1 /*15*/], 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (PED::GET_PED_PROP_INDEX(Local_69[1 /*15*/], 1) > -1)
					{
						GlobalFunc_11257(Local_69[1 /*15*/], 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iLocal_1734 = 1;
				}
			}
			if (GlobalFunc_2773(Local_48[3 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(Local_48[3 /*2*/], 0);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_48[3 /*2*/], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_48[5 /*2*/]))
			{
				Local_48[5 /*2*/] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", joaat("flatbed")));
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 112000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[5 /*2*/], 0))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_48[5 /*2*/], 2);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", joaat("player_two")))
			{
				iLocal_1772 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_1773 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Sub_Rope_complete", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1733))
				{
					iLocal_1775 = 1;
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1733, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("submersible", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[3 /*2*/]))
				{
					iLocal_1774 = 1;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_48[3 /*2*/], 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 1);
				}
			}
			if ((iLocal_1774 && iLocal_1775) && !iLocal_1776)
			{
				Var0 = Local_48[3 /*2*/];
				Var0.f_1 = iLocal_1733;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("docks2ASubHandler", &Var0, 2, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("docks2ASubHandler");
				iLocal_1776 = 1;
			}
			if ((iLocal_1772 && iLocal_1773) && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[5 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_48[5 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_69[1 /*15*/]))
				{
					PED::DELETE_PED(&(Local_69[1 /*15*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_48[0 /*2*/]));
				}
				RECORDING::_0x81CBAE94390F9F89();
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x9B3
{
	int iVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("dh2a_mission_complete");
	iVar0 = 0;
	while (iVar0 < GlobalFunc_5882(1))
	{
		GlobalFunc_5156(1, GlobalFunc_5133(1, iVar0), 1);
		iVar0++;
	}
	GlobalFunc_2772(0);
	GlobalFunc_706(1, 10000000);
	GlobalFunc_2771(1, 10000000);
	GlobalFunc_9804(7, 0);
	GlobalFunc_5103(0, 0);
	func_881(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}
















































































































































int func_147()//Position - 0x1D0D7
{
	return Local_69[2 /*15*/];
}



















int func_166(int iParam0, struct<3> Param1, float fParam4)//Position - 0x1E738
{
	if (GlobalFunc_7984())
	{
		if (GlobalFunc_7091(0f, 0f, 0f, 1) && VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()))
		{
			GlobalFunc_8574();
			if (GlobalFunc_8573())
			{
				*iParam0 = func_201(Param1, fParam4);
				return 1;
			}
		}
		else if (GlobalFunc_9748(iParam0, 1, Param1, fParam4, 1, 1))
		{
			return 1;
		}
	}
	else if (GlobalFunc_9748(iParam0, 1, Param1, fParam4, 1, 1))
	{
		return 1;
	}
	return 0;
}



































int func_201(struct<3> Param0, float fParam3)//Position - 0x2308A
{
	return GlobalFunc_9192(&(Global_91351.f_2167), Param0, fParam3, 0);
}
































void func_233()//Position - 0x259AB
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_580();
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1sunk"), -165.34f, -2350.03f, 0, 0);
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	}
	else
	{
		HUD::SET_RADAR_ZOOM_PRECISE(85f);
	}
	if (iLocal_1893 < 9)
	{
		if (GlobalFunc_2773(func_887()))
		{
			if (PED::IS_PED_SWIMMING(func_887()))
			{
				if (GlobalFunc_11038(func_887(), 8, -1) != 22)
				{
					GlobalFunc_11257(func_887(), 8, 22, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
		}
	}
	Var0 = { -191.0846f, -2330.059f, -19.2324f };
	Var3 = { 0f, 0f, 180f };
	switch (iLocal_1893)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_1807 = 0;
			iLocal_1808 = 0;
			GlobalFunc_Checkpoint2(10, "Stage 9: the goods", 1, 0, 0, 1);
			if (GlobalFunc_2773(Local_48[3 /*2*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_48[3 /*2*/], -466.7967f, -2381.379f, -12.1213f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_48[3 /*2*/], 279.5468f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 1);
			}
			else
			{
				Local_48[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), -466.7967f, -2381.379f, -12.1213f, 279.5468f, 1, 1);
				GlobalFunc_743(Local_48[3 /*2*/], 0);
				GlobalFunc_790(Local_48[3 /*2*/]);
				ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 1);
			}
			iLocal_1720 = OBJECT::CREATE_OBJECT(joaat("prop_military_pickup_01"), -191.1227f, -2331.338f, -19.40053f, 1, 1, 0);
			func_577(func_887(), 1, 1);
			PED::SET_PED_DIES_IN_WATER(func_887(), 0);
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@swimtocontainer");
			GlobalFunc_173(&uLocal_1496, 1, func_887(), "MICHAEL", 0, 1);
			GlobalFunc_1998(1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SWIM_TO_CONTAINER"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_SWIM_TO_CONTAINER");
			}
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
			if (ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*2*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_48[0 /*2*/]));
			}
			if (GlobalFunc_234(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_1748))
			{
				uLocal_1748 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -75.1f, -2286.4f, 1.5f, 3.1f, 0f, 132.1f, 50f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_1748, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				if (GlobalFunc_2773(Local_48[6 /*2*/]))
				{
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_1748, Local_48[6 /*2*/], 3.6348f, -1.745f, 1.15f, 1);
				}
				iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1747, "missheistdocks2aswitchig_8", "ig_8_switch", 1000f, -4f, 4, 0, 1148846080, 0);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1747, Local_48[6 /*2*/], 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747, 0.35f);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BODY_FALL_DIVE_WATER_MASTER", PLAYER::PLAYER_PED_ID(), "docks_heist_finale_2a_sounds", 0, 0);
			}
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1786 = 0;
			iLocal_1787 = 0;
			iLocal_1782 = 0;
			iLocal_1783 = 0;
			iLocal_1784 = 0;
			iLocal_1785 = 0;
			iLocal_1739 = 1;
			iLocal_1740 = 0;
			iLocal_3566 = 0;
			iLocal_2009 = 0;
			GlobalFunc_574(616, 0);
			GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_ROLL", 7, 0, 0, 0);
			iLocal_1893++;
			break;
		
		case 1:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.99f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1747))
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1751))
				{
					iLocal_1750 = OBJECT::CREATE_OBJECT(joaat("prop_flare_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1750, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0.07f, 0f, 0.03f, -90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					uLocal_1751 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", iLocal_1750, 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DIVER");
				}
				if (CAM::DOES_CAM_EXIST(uLocal_1748))
				{
					if (CAM::IS_CAM_RENDERING(uLocal_1748))
					{
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					}
					CAM::DESTROY_CAM(uLocal_1748, 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_1749))
				{
					CAM::DESTROY_CAM(uLocal_1749, 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_PLAY_ANIM(0, "SWIMMING@scuba", "dive_run", 4f, -2f, 1000, 1, 0, 0, 0, 0);
				TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_48[6 /*2*/], 0);
				MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("PORT_heist_underwater", 0.5f);
				iLocal_1740 = 1;
				iLocal_1893++;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.675f)
			{
				if (CAM::IS_CAM_RENDERING(uLocal_1748))
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					RECORDING::_0x81CBAE94390F9F89();
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.65f)
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1751))
				{
					iLocal_1750 = OBJECT::CREATE_OBJECT(joaat("prop_flare_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1750, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0.07f, 0f, 0.03f, -90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					uLocal_1751 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", iLocal_1750, 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DIVER");
				}
				if (!iLocal_3566)
				{
					if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3565))
					{
						uLocal_3565 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-159.7051f, -2374.318f, 5.0459f, 50f, "des_shipsink");
					}
					else
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3565, 9);
						STREAMING::REQUEST_IPL("sunkcargoship");
						iLocal_3566 = 1;
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1747))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > fLocal_2008)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (iLocal_2009 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY(GlobalFunc_1078(GlobalFunc_Is_Mission_Retry(), "CamPushInNeutral", "CamPushInMichael"), 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_2009 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_11337(&(Local_69[2 /*15*/]), 2, Local_48[3 /*2*/], -1, 1, 0, 0))
			{
				iLocal_1903[2] = Local_69[2 /*15*/];
				GlobalFunc_5175(&uLocal_2010, "missheistdocks2aswitchig_8");
				GlobalFunc_5175(&uLocal_2010, "SWIMMING@scuba");
				GlobalFunc_5174(&uLocal_2010, joaat("prop_flare_01"));
				GlobalFunc_173(&uLocal_1496, 2, Local_69[2 /*15*/], "TREVOR", 0, 1);
				iLocal_1893++;
			}
			break;
		
		case 3:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_FRCRT", 7, 0, 0, 0))
				{
					iLocal_1893++;
				}
			}
			break;
		
		case 4:
			if (!iLocal_1783)
			{
				if (!iLocal_1786)
				{
					if (GlobalFunc_5171())
					{
						GlobalFunc_164("DCKH_LOCCARGO", 7500, 1);
						iLocal_1786 = 1;
					}
				}
				else if (!iLocal_1782)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_LOOK", 7, 0, 0, 0))
						{
							iLocal_1782 = 1;
						}
					}
				}
				else if (!iLocal_1785)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_HOLDUP", 7, 0, 0, 0))
						{
							iLocal_1785 = 1;
						}
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), 1) < 15f)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_1718))
				{
					uLocal_1718 = GlobalFunc_6799(iLocal_1720);
				}
				if (!iLocal_1783)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DEVICE", 7, 0, 0, 0))
						{
							iLocal_1783 = 1;
						}
					}
				}
				else if (!iLocal_1784)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GO", 7, 0, 0, 0))
						{
							iLocal_1784 = 1;
						}
					}
				}
			}
			if (!GlobalFunc_74("DCKH_SCUBH"))
			{
				if (!iLocal_1794)
				{
					GlobalFunc_159("DCKH_SONARH", -1);
					iLocal_1794 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_887(), ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), 5f, 5f, 4f, 0, 1, 0))
			{
				iLocal_1880 = 1;
				iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
				uLocal_1707 = CAM::CREATE_CAMERA(964613260, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(func_887(), iLocal_1747, "missheistdocks2a@swimtocontainer", "Michael_Swim_to_Container", 1000f, -8f, 0, 0, 1148846080, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1707, iLocal_1747, "CAM_Swim_to_Container", "missheistdocks2a@swimtocontainer");
				CAM::SET_CAM_ACTIVE(uLocal_1707, 1);
				func_403(0, -195.9108f, -2318.393f, -18.6068f, 1, 0, 1, 3000, 0);
				if (HUD::DOES_BLIP_EXIST(uLocal_1718))
				{
					HUD::REMOVE_BLIP(&uLocal_1718);
				}
				RECORDING::_0x293220DA1B46CEBC(3f, 10f, 3);
				iLocal_1744 = MISC::GET_GAME_TIMER();
				GlobalFunc_571(0, -1);
				if (GlobalFunc_2773(Local_48[3 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*2*/], 4);
					VEHICLE::SET_VEHICLE_FULLBEAM(Local_48[3 /*2*/], 1);
				}
				func_401();
				iLocal_1786 = 0;
				iLocal_1787 = 0;
				iLocal_1782 = 0;
				iLocal_1783 = 0;
				iLocal_1784 = 0;
				iLocal_1785 = 0;
				iLocal_1893++;
				iLocal_3715 = 1;
				func_381(&uLocal_3716, 1);
			}
			break;
		
		case 5:
			if (!iLocal_1782)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CONF", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.43f)
			{
				iLocal_1782 = 0;
				iLocal_1783 = 0;
				func_378(0, 1, 0, 0, 0, 0);
				iLocal_3715 = 2;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1750))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1750))
					{
						ENTITY::DETACH_ENTITY(iLocal_1750, 1, 1);
					}
				}
				if (GlobalFunc_9019(&iLocal_1903, 2))
				{
					if (GlobalFunc_10980(&iLocal_1903, 1, 1, 0))
					{
						iLocal_1893++;
					}
				}
			}
			break;
		
		case 6:
			if (func_381(&uLocal_3716, 1))
			{
				if (PLAYER::PLAYER_PED_ID() == func_147())
				{
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_MINISUB");
					ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 0);
					AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
					TASK::CLEAR_PED_TASKS(func_887());
					ENTITY::SET_ENTITY_COORDS(func_887(), -231.6731f, -2309.195f, -24.9887f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_887(), 95.642f);
					ENTITY::FREEZE_ENTITY_POSITION(func_887(), 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_887(), 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_1720, -231.2176f, -2301.244f, -26.59173f, 1, 0, 0, 1);
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1720, 40f, 1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, 0f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1720, 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CONTROL_SUB"))
					{
						AUDIO::START_AUDIO_SCENE("DH2A_CONTROL_SUB");
					}
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_INC", 7, 0, 0, 0);
					iLocal_1981 = 0;
					func_304(1, 0, 1, 3000, 0);
					iLocal_1744 = MISC::GET_GAME_TIMER();
					GlobalFunc_5175(&uLocal_2010, "missheistdocks2a@swimtocontainer");
					iLocal_1786 = 0;
					iLocal_1893++;
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SWIM_TO_CONTAINER"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_SWIM_TO_CONTAINER");
			}
			break;
		
		case 7:
			if (!iLocal_1786)
			{
				if (GlobalFunc_5171())
				{
					iLocal_1786 = 1;
					GlobalFunc_527("DCKH_PICK", 7500, 1);
					GlobalFunc_159("DCKH_SUB_HELP", -1);
					RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
				}
			}
			if (!iLocal_1782)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DRIVE", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			if (!iLocal_1788)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_147(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1)) < 400f)
				{
					GlobalFunc_159("DCKH_PCKUPH", -1);
					iLocal_1788 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_887()) && ENTITY::DOES_ENTITY_EXIST(iLocal_1720))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_147(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1)) < 1600f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_887(), 0);
					if (TASK::GET_SCRIPT_TASK_STATUS(func_887(), -875674219) > 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_887(), func_147(), 0);
					}
					if (!iLocal_1783)
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_1720))
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_SEES", 7, 0, 0, 0))
								{
									iLocal_1783 = 1;
								}
							}
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_48[3 /*2*/], 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[3 /*2*/], func_887()))
					{
						if (GlobalFunc_5170())
						{
							GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_SMACK", 7, 0, 0, 0);
						}
					}
				}
			}
			if (iLocal_1783)
			{
				if (!iLocal_1784)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_EASY", 7, 0, 0, 0))
						{
							iLocal_1744 = MISC::GET_GAME_TIMER() + 15000;
							iLocal_1784 = 1;
						}
					}
				}
				else if (!iLocal_1785)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_1744)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CRT", 7, 0, 0, 0))
						{
							iLocal_1785 = 1;
						}
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_1718))
			{
				uLocal_1718 = GlobalFunc_6799(iLocal_1720);
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_48[3 /*2*/], 0))
			{
				Local_69[2 /*15*/].f_12 = GlobalFunc_11038(func_147(), 14, 0);
				Local_69[2 /*15*/].f_13 = GlobalFunc_11038(func_147(), 14, 1);
				Local_69[2 /*15*/].f_14 = GlobalFunc_11038(func_147(), 8, -1);
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[3 /*2*/], iLocal_1720))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_48[3 /*2*/], 2f, 2, 0);
					if (HUD::DOES_BLIP_EXIST(uLocal_1705))
					{
						HUD::REMOVE_BLIP(&uLocal_1705);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_887(), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_887(), 1);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1751))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1751, 0);
					}
					TASK::CLEAR_PED_TASKS(func_887());
					iLocal_1786 = 0;
					iLocal_1787 = 0;
					iLocal_1782 = 0;
					iLocal_1783 = 0;
					iLocal_1784 = 0;
					iLocal_1893++;
				}
				else if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_48[3 /*2*/]))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_48[3 /*2*/]) > 2f)
					{
						if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[3 /*2*/], func_887()))
						{
							if (GlobalFunc_5170())
							{
								GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BANG", 7, 0, 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1720))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
				if (HUD::DOES_BLIP_EXIST(uLocal_1718))
				{
					HUD::REMOVE_BLIP(&uLocal_1718);
				}
				iLocal_1782 = 0;
				GlobalFunc_718(&uLocal_2010, joaat("p_cs_sub_hook_01_s"));
				GlobalFunc_718(&uLocal_2010, joaat("prop_rope_hook_01"));
				iLocal_1893++;
			}
			else if (!iLocal_1881)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_ATTACH_CARGO", 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
					TASK::CLEAR_PED_TASKS(func_147());
					iLocal_1881 = 1;
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1720, 0);
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1720, fLocal_1986, fLocal_1987, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, fLocal_1988);
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1720, Local_48[3 /*2*/], -1, 1, Local_1989, Local_1992, Local_1995, -1f, 1, 1, 0, 1, 2);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1882, "Attach_Cargo", Local_48[3 /*2*/], "docks_heist_finale_2a_sounds", 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -261.1416f, -2328.532f, -17.0984f, 2f, -1, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -278.5093f, -2378.835f, -2.3485f, 2f, -1, 1193033728, 1056964608);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				}
			}
			break;
		
		case 9:
			if (!iLocal_1784)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -348.9003f, -2573.659f, 2.997342f, -468.7079f, -2471.864f, -23.98975f, 100f, 0, 1, 0))
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_FLOYD", 7, 0, 0, 0))
						{
							iLocal_1784 = 1;
						}
					}
				}
			}
			if (GlobalFunc_2773(Local_48[3 /*2*/]))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_48[3 /*2*/]) > 2f)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_48[3 /*2*/]))
					{
						if (GlobalFunc_5170())
						{
							GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BANG2", 7, 0, 0, 0);
						}
					}
				}
			}
			if (!iLocal_1782)
			{
				if (GlobalFunc_5170() && !GlobalFunc_5172(&Local_1661, 0))
				{
					GlobalFunc_173(&uLocal_1496, 4, 0, "FLOYD", 0, 1);
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DONE", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			else if (!iLocal_1783)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_RADIO", 7, 0, 0, 0))
					{
						iLocal_1783 = 1;
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_1661.f_5))
			{
				HUD::SET_BLIP_ROUTE(Local_1661.f_5, 0);
				if (HUD::GET_BLIP_COLOUR(Local_1661.f_5) != 5)
				{
					HUD::SET_BLIP_COLOUR(Local_1661.f_5, 5);
				}
			}
			if (!iLocal_1770)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -358.5919f, -2560.922f, -5f, 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("LSDH_2A_EXT", 8);
					SCRIPT::REQUEST_SCRIPT("docks2ASubHandler");
					iLocal_1770 = 1;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -358.5919f, -2560.922f, -5f, 1) > 120f)
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_1770 = 0;
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_2773(func_887()))
				{
					GlobalFunc_11257(func_887(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				GlobalFunc_10914("MICHAEL", joaat("player_zero"), 11);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TREVOR", PLAYER::PLAYER_PED_ID(), 0);
			}
			if (GlobalFunc_9194(&Local_1661, -358.5919f, -2560.922f, -5f, 0.1f, 0.1f, 0.1f, 0, Local_48[3 /*2*/], "DCKH_RETCARGO", "", "DCKH_GETBK", 0, 0, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_1661.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), -358.5919f, -2560.922f, -12.90297f, 1) < 20f))
			{
				GlobalFunc_4956();
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_THERE", 7, 0, 0, 0);
				iLocal_1744 = MISC::GET_GAME_TIMER();
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("PORT_OF_LS_ATTACH_CARGO");
				GlobalFunc_1998(0);
				RECORDING::_0x293220DA1B46CEBC(8f, 2f, 4);
				iLocal_1893++;
			}
			else
			{
				GRAPHICS::DRAW_MARKER(6, -358.5919f, -2560.922f, -6f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, 0, 0, 2, 0, 0, 0, 0);
			}
			break;
		
		case 10:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_2773(func_887()))
				{
					GlobalFunc_11257(func_887(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				GlobalFunc_10914("MICHAEL", joaat("player_zero"), 11);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TREVOR", PLAYER::PLAYER_PED_ID(), 0);
			}
			if (GlobalFunc_644(Local_48[3 /*2*/]) && !GlobalFunc_111())
			{
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
				func_867(10);
				iLocal_1893 = 0;
			}
			else
			{
				GlobalFunc_530(Local_48[3 /*2*/], 10.5f, 10, 1056964608, 0, 1);
				if (HUD::DOES_BLIP_EXIST(Local_1661.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_1661.f_5));
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 240f)
		{
			if (iLocal_1787 == 0)
			{
				GlobalFunc_164("DCKH_LEAVEA", 7500, 1);
				iLocal_1787 = 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 250f)
			{
				func_234(9);
			}
		}
		else
		{
			iLocal_1787 = 0;
		}
	}
	if (((GlobalFunc_2773(Local_48[3 /*2*/]) && GlobalFunc_2773(func_147())) && iLocal_1893 > 6) && iLocal_1893 < 11)
	{
		if (PLAYER::PLAYER_PED_ID() == func_147())
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_48[3 /*2*/], 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_48[3 /*2*/], 3, 15000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_48[3 /*2*/], 2, 15000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_48[3 /*2*/], 1, 15000))
			{
				func_234(12);
			}
		}
	}
}

void func_234(int iParam0)//Position - 0x26D0C
{
	char* sVar0;
	
	if (!Local_1947.f_20)
	{
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "dckh_fail";
				break;
			
			case 2:
				sVar0 = "cmn_fdied";
				break;
			
			case 3:
				sVar0 = "cmn_mdied";
				break;
			
			case 4:
				sVar0 = "cmn_tdied";
				break;
			
			case 5:
				sVar0 = "CMN_FLEFT";
				break;
			
			case 6:
				sVar0 = "cmn_mleft";
				break;
			
			case 9:
				sVar0 = "dckh_mfla";
				break;
			
			case 7:
				sVar0 = "dckh_mfoutpos";
				break;
			
			case 8:
				sVar0 = "DCKH_TFLA";
				break;
			
			case 10:
				sVar0 = "cmn_fdest";
				break;
			
			case 13:
				sVar0 = "dckh_mfspo";
				break;
			
			case 11:
				sVar0 = "dckh_mfds";
				break;
			
			case 12:
				sVar0 = "DCKH_MFDS2";
				break;
			
			case 14:
				if (PLAYER::PLAYER_PED_ID() == func_887())
				{
					sVar0 = "dckh_flemt";
				}
				else
				{
					sVar0 = "DCKH_FLEFT";
				}
				break;
			
			case 15:
				sVar0 = "dckh_ammo";
				break;
			
			case 16:
				sVar0 = "dckh_ammob";
				break;
			
			case 17:
				sVar0 = "dckh_Fdingy";
				break;
			
			case 18:
				sVar0 = "dckh_Fdingy2";
				break;
			
			case 19:
				sVar0 = "dckh_polf";
				break;
			
			case 20:
				sVar0 = "DCKH_MFBOMB";
				break;
			
			default:
				sVar0 = "dckh_fail";
				break;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("dh2a_dead");
		if (PLAYER::PLAYER_PED_ID() == func_886() && iLocal_1892 > 0)
		{
			Global_Mission_Fail_State.f_12[0] = 0;
			GlobalFunc_5129(-143.7584f, -2488.746f, 43.4355f, 5.5522f);
			GlobalFunc_5166(-148.316f, -2498.048f, 47.2429f, 54.9127f);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_887())
		{
			Global_Mission_Fail_State.f_12[0] = 1;
			GlobalFunc_5129(14.6669f, -2543.385f, 5.0503f, 32.847f);
			GlobalFunc_5166(17.0702f, -2542.623f, 5.05f, 235.9222f);
		}
		GlobalFunc_10835(sVar0);
		while (!GlobalFunc_145())
		{
			SYSTEM::WAIT(0);
		}
		func_881(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}






































































void func_304(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2ACB7
{
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam0, iParam4);
	CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	iLocal_1982 = bParam1;
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(0);
	}
}










































































void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x31D88
{
	if (GlobalFunc_2773(Local_69[0 /*15*/]))
	{
		iLocal_1903[1] = Local_69[0 /*15*/];
		GlobalFunc_2774(&iLocal_1903, 1, iParam1);
		func_379(&iLocal_1903, 1, iParam4);
	}
	else
	{
		GlobalFunc_2774(&iLocal_1903, 1, 1);
	}
	if (GlobalFunc_2773(Local_69[2 /*15*/]))
	{
		iLocal_1903[2] = Local_69[2 /*15*/];
		GlobalFunc_2774(&iLocal_1903, 2, iParam2);
		func_379(&iLocal_1903, 2, iParam5);
	}
	else
	{
		GlobalFunc_2774(&iLocal_1903, 2, 1);
	}
	if (GlobalFunc_2773(Local_69[1 /*15*/]))
	{
		iLocal_1903[0] = Local_69[1 /*15*/];
		GlobalFunc_2774(&iLocal_1903, 0, iParam0);
		func_379(&iLocal_1903, 0, iParam3);
	}
	else
	{
		GlobalFunc_2774(&iLocal_1903, 0, 1);
	}
}

void func_379(int iParam0, int iParam1, var uParam2)//Position - 0x31E35
{
	if (iParam1 != 4)
	{
		iParam0->f_8[iParam1] = uParam2;
	}
}


int func_381(var uParam0, bool bParam1)//Position - 0x31E65
{
	int iVar0;
	
	CAM::_0x59424BD75174C9B1();
	switch (iLocal_3715)
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_746(&uLocal_2010, 4, "dh2arec");
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			func_399(uParam0, func_887(), Local_48[3 /*2*/]);
			GlobalFunc_5163(uParam0);
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			GlobalFunc_746(&uLocal_2010, 4, "dh2arec");
			func_399(uParam0, func_887(), Local_48[3 /*2*/]);
			if (GlobalFunc_5163(uParam0) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch"))
			{
				CAM::DESTROY_ALL_CAMS(0);
				GlobalFunc_7718(uParam0);
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_1, 0.1f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				iLocal_4957 = 0;
				VEHICLE::SET_VEHICLE_LIGHTS(Local_48[3 /*2*/], 3);
				iLocal_4959 = 0;
				iLocal_4960 = 0;
				iLocal_4961 = 0;
				iLocal_4962 = 0;
				iLocal_3715 = 3;
			}
			break;
		
		case 3:
			iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					if (!iLocal_4958)
					{
						if (GlobalFunc_9019(&iLocal_1903, 2))
						{
							GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
							iLocal_4958 = 1;
						}
					}
				}
				if (!iLocal_4961)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_4963)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, 0);
						iLocal_4961 = 1;
					}
				}
				if (!iLocal_4962)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_4964)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorMid", 0, 0);
						iLocal_4962 = 1;
					}
				}
				if (!iLocal_4959)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_4966)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 0);
						TASK::TASK_PLAY_ANIM(func_147(), "missswitch", "mid_mission_inside_helicopter_trevor", 1000f, -8f, -1, 8, 0, 0, 0, 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_48[3 /*2*/], 4, "dh2arec", 0);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_48[3 /*2*/], 3800f);
						iLocal_4959 = 1;
					}
				}
				if (!iLocal_4960)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_4965)
					{
						VEHICLE::_0x99CAD8E7AFDB60FA(Local_48[3 /*2*/], 1f, 5f);
						iLocal_4960 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					iLocal_3715 = 5;
				}
				else
				{
					return 0;
				}
			}
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, 1, iLocal_4967, 0, 0, 0);
			if (!iLocal_4957)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_4957 = 1;
			}
			SYSTEM::SETTIMERA(0);
			STREAMING::NEW_LOAD_SCENE_STOP();
			TASK::CLEAR_PED_TASKS(func_147());
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[3 /*2*/]);
			VEHICLE::REMOVE_VEHICLE_RECORDING(4, "dh2arec");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			VEHICLE::_0x99CAD8E7AFDB60FA(Local_48[3 /*2*/], 1f, 0.5f);
			STREAMING::REMOVE_ANIM_DICT("missswitch");
			iLocal_3715 = 6;
			return 0;
			break;
		
		case 6:
			if (!CAM::_0x3044240D2E0FA842())
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
					CAM::DESTROY_CAM(uParam0->f_1, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				uParam0->f_1232 = 1;
				Local_1947.f_20 = 0;
				iLocal_3715 = 0;
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}


















void func_399(var uParam0, int iParam1, var uParam2)//Position - 0x33322
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 2.1696f, -2.5168f, 0.0412f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.5515f, 0.2998f, 0.2401f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 35f;
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
		uParam0->f_10[1 /*57*/].f_5 = 1500;
		uParam0->f_10[1 /*57*/].f_6 = { 2.1018f, -2.5559f, 0.0412f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.4967f, 0.238f, 0.3844f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 35f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 0.9f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
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
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -6.3518f, -7.3249f, 0.0389f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -7.9352f, -4.5686f, 0.1894f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 35f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.3f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
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
		uParam0->f_10[2 /*57*/].f_38 = 0.9f;
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
		uParam0->f_10[4 /*57*/].f_6 = { 5.9623f, 9.3726f, 0.3272f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -7.3216f, 0f, 85.1943f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
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
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 500;
		uParam0->f_10[5 /*57*/].f_6 = { 6.9998f, 3.8269f, 0.5564f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -7.3216f, 0f, 97.1138f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 30f;
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
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 500;
		uParam0->f_10[6 /*57*/].f_6 = { 3.0225f, 6.4558f, 0.5031f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 0.1229f, 0.002f, -0.4059f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 30f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 1f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 1;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 200f;
		uParam0->f_10[6 /*57*/].f_40 = 200f;
		uParam0->f_10[6 /*57*/].f_41 = 50;
		uParam0->f_10[6 /*57*/].f_42 = 50;
		uParam0->f_10[6 /*57*/].f_43 = 100;
		uParam0->f_10[6 /*57*/].f_38 = 0.95f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 3000;
		uParam0->f_10[7 /*57*/].f_6 = { 7.0921f, -0.5832f, 1.1157f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 0.1416f, -1.1054f, -0.2735f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 30f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 1f;
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
		uParam0->f_10[8 /*57*/].f_2 = 0;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 1;
		uParam0->f_10[8 /*57*/].f_5 = 2000;
		uParam0->f_10[8 /*57*/].f_6 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_18 = 1;
		uParam0->f_10[8 /*57*/].f_19 = 1;
		uParam0->f_10[8 /*57*/].f_20 = 1;
		uParam0->f_10[8 /*57*/].f_21 = 52.5f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0.3f;
		uParam0->f_10[8 /*57*/].f_53 = 2;
		uParam0->f_10[8 /*57*/].f_23 = 0.2f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 0f;
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
		uParam0->f_1151[0 /*2*/] = 0f;
		uParam0->f_1151[0 /*2*/].f_1 = 0.05f;
		uParam0->f_1151[1 /*2*/] = 0.9f;
		uParam0->f_1151[1 /*2*/].f_1 = 0.05f;
		uParam0->f_1151[2 /*2*/] = 1f;
		uParam0->f_1151[2 /*2*/].f_1 = 19f;
		uParam0->f_1151[3 /*2*/] = 4f;
		uParam0->f_1151[3 /*2*/].f_1 = 19f;
		uParam0->f_1151[4 /*2*/] = 4.3f;
		uParam0->f_1151[4 /*2*/].f_1 = 19f;
		uParam0->f_1151[5 /*2*/] = 5.35f;
		uParam0->f_1151[5 /*2*/].f_1 = 2.5f;
		uParam0->f_1151[6 /*2*/] = 5.6f;
		uParam0->f_1151[6 /*2*/].f_1 = 2.5f;
		uParam0->f_1151[7 /*2*/] = 6.3f;
		uParam0->f_1151[7 /*2*/].f_1 = 25f;
		uParam0->f_1151[8 /*2*/] = 7.8f;
		uParam0->f_1151[8 /*2*/].f_1 = 25f;
		uParam0->f_1151[9 /*2*/] = 7.9f;
		uParam0->f_1151[9 /*2*/].f_1 = 3f;
		uParam0->f_1151[10 /*2*/] = 8f;
		uParam0->f_1151[10 /*2*/].f_1 = 0.7f;
		uParam0->f_1184[0 /*2*/] = 0f;
		uParam0->f_1184[0 /*2*/].f_1 = 0f;
		uParam0->f_1184[1 /*2*/] = 2.8f;
		uParam0->f_1184[1 /*2*/].f_1 = 1f;
		uParam0->f_1184[2 /*2*/] = 3.2f;
		uParam0->f_1184[2 /*2*/].f_1 = 1f;
		uParam0->f_1184[3 /*2*/] = 4f;
		uParam0->f_1184[3 /*2*/].f_1 = 1f;
		uParam0->f_1184[4 /*2*/] = 4.8f;
		uParam0->f_1184[4 /*2*/].f_1 = 0f;
		uParam0->f_1184[5 /*2*/] = 5.8f;
		uParam0->f_1184[5 /*2*/].f_1 = 1f;
		uParam0->f_1184[6 /*2*/] = 6f;
		uParam0->f_1184[6 /*2*/].f_1 = 1f;
		uParam0->f_1184[7 /*2*/] = 7f;
		uParam0->f_1184[7 /*2*/].f_1 = 1f;
		uParam0->f_1184[8 /*2*/] = 8f;
		uParam0->f_1184[8 /*2*/].f_1 = 0f;
		uParam0->f_1217 = 9;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 800;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine.txt";
		uParam0->f_1225 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_4[1] = uParam2;
}


void func_401()//Position - 0x345D5
{
	if (HUD::DOES_BLIP_EXIST(uLocal_1735))
	{
		HUD::REMOVE_BLIP(&uLocal_1735);
	}
}


void func_403(bool bParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x34688
{
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam0, iParam8);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(iParam4, iParam5, iParam7, 1, 0, 0);
	if (bParam6)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	GlobalFunc_6685(0);
	iLocal_1982 = bParam4;
}














































































































































































void func_577(int iParam0, bool bParam1, bool bParam2)//Position - 0x6144A
{
	if (GlobalFunc_2773(iParam0))
	{
		if (bParam1)
		{
			GlobalFunc_11257(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			PED::SET_ENABLE_SCUBA(iParam0, 1);
			PED::SET_PED_DIES_IN_WATER(iParam0, 0);
		}
		else
		{
			GlobalFunc_11257(iParam0, 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (!bParam2)
		{
			GlobalFunc_11257(iParam0, 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
}



void func_580()//Position - 0x614F4
{
	if (iLocal_1893 == 10)
	{
		if (GlobalFunc_2773(Local_48[9 /*2*/]) && GlobalFunc_2773(Local_69[3 /*15*/]))
		{
			iLocal_1804 = 100;
		}
	}
	switch (iLocal_1804)
	{
		case 0:
			GlobalFunc_718(&uLocal_2010, joaat("polmav"));
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_swat_01"));
			iLocal_1804++;
			break;
		
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("polmav")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_swat_01")))
			{
				iLocal_1804++;
			}
			break;
		
		case 2:
			Local_48[9 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), -92.8689f, -2015.042f, 17.0169f, 214.9528f, 1, 1);
			func_581(&(Local_69[3 /*15*/]), joaat("s_m_y_swat_01"), -89.4357f, -2014.389f, 17.0169f, 190.5788f, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[3 /*15*/], 1);
			PED::SET_PED_INTO_VEHICLE(Local_69[3 /*15*/], Local_48[9 /*2*/], -1);
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_48[9 /*2*/], 1, 1);
			VEHICLE::SET_VEHICLE_LIVERY(Local_48[9 /*2*/], 0);
			TASK::TASK_HELI_MISSION(Local_69[3 /*15*/], Local_48[9 /*2*/], 0, 0, -85.5841f, -2281.509f, 57.3485f, 4, 30f, 10f, -1f, 55, 20, -1f, 0);
			GlobalFunc_5174(&uLocal_2010, joaat("polmav"));
			GlobalFunc_5174(&uLocal_2010, joaat("s_m_y_swat_01"));
			iLocal_1804++;
			break;
		
		case 3:
			if (GlobalFunc_2773(Local_48[9 /*2*/]) && GlobalFunc_2773(Local_69[3 /*15*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_69[3 /*15*/], -85.5841f, -2281.509f, 57.3485f, 30f, 30f, 30f, 0, 1, 0))
				{
					iLocal_1804++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_2773(Local_48[9 /*2*/]) && GlobalFunc_2773(Local_69[3 /*15*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_69[3 /*15*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_HELI_MISSION(0, Local_48[9 /*2*/], 0, 0, -97.1803f, -2340.789f, 26.452f, 4, 20f, 10f, 96.0322f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_48[9 /*2*/], 0, 0, -157.1283f, -2400.237f, 38.6996f, 4, 20f, 10f, 6.1374f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_48[9 /*2*/], 0, 0, -255.1758f, -2371.672f, 30.6111f, 4, 20f, 10f, 303.2508f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_48[9 /*2*/], 0, 0, -266.8602f, -2297.838f, 26.4934f, 4, 20f, 10f, -132.2165f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_48[9 /*2*/], 0, 0, -157.1116f, -2301.186f, 19.5018f, 4, 20f, 10f, 174.5608f, 40, 20, -1f, 1);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_69[3 /*15*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				iLocal_1804++;
			}
			break;
		
		case 5:
			if (GlobalFunc_2773(Local_69[3 /*15*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_69[3 /*15*/], 242628503) > 1)
				{
					iLocal_1804 = 4;
				}
			}
			break;
		
		case 100:
			if (GlobalFunc_2773(Local_48[9 /*2*/]) && GlobalFunc_2773(Local_69[3 /*15*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_69[3 /*15*/]);
				TASK::TASK_HELI_MISSION(Local_69[3 /*15*/], Local_48[9 /*2*/], 0, 0, 723.2252f, -1478.726f, 119.2312f, 4, 30f, 10f, -1f, 55, 20, -1f, 0);
				PED::SET_PED_KEEP_TASK(Local_69[3 /*15*/], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[3 /*15*/]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[9 /*2*/]));
				iLocal_1804++;
			}
			break;
	}
}

void func_581(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x618AF
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		}
	}
	else if (GlobalFunc_2773(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
	}
}

void func_582()//Position - 0x61907
{
	int iVar0;
	
	switch (iLocal_1893)
	{
		case 0:
			HUD::DISPLAY_RADAR(0);
			GlobalFunc_Checkpoint2(9, "Stage 8: explosion cutscene", 0, 0, 0, 1);
			if (GlobalFunc_2773(func_887()))
			{
				func_577(func_887(), 1, 1);
				ENTITY::SET_ENTITY_COORDS(func_887(), -180f, -2320f, 0f, 1, 0, 0, 1);
				if (GlobalFunc_2773(Local_48[6 /*2*/]))
				{
					VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
					VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_48[6 /*2*/], 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_48[6 /*2*/], 0);
				}
				ENTITY::SET_ENTITY_VISIBLE(func_887(), 0);
				STREAMING::SET_FOCUS_ENTITY(func_887());
			}
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
			iLocal_4968 = 0;
			iLocal_1893++;
			break;
		
		case 1:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				SYSTEM::SETTIMERA(0);
				GlobalFunc_6685(0);
				if (GlobalFunc_2773(func_887()))
				{
					iLocal_1903[0] = Local_69[1 /*15*/];
					GlobalFunc_2774(&iLocal_1903, 0, 0);
					if (GlobalFunc_9019(&iLocal_1903, 0))
					{
						GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(func_886());
					}
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_ORIGIN(8.885f, -2526.579f, 5.046f, 0f, 0);
				AUDIO::STOP_AUDIO_SCENES();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_RAYFIRE"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_RAYFIRE");
				}
				AUDIO::PLAY_STREAM_FRONTEND();
				iLocal_1981 = 0;
				iLocal_4969 = 0;
				iLocal_1893++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_718(&uLocal_2010, joaat("submersible"));
				GlobalFunc_718(&uLocal_2010, joaat("prop_military_pickup_01"));
				STREAMING::REQUEST_PTFX_ASSET();
				GlobalFunc_718(&uLocal_2010, joaat("prop_flare_01"));
				GlobalFunc_719(&uLocal_2010, "missheistdocks2aswitchig_8");
				GlobalFunc_719(&uLocal_2010, "swimming@scuba");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1721))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1721);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1722))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1722);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1723))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1723);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1724))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1724);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1725))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1725);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[7 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_48[7 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[8 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_48[8 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[1 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_48[1 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[2 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_48[2 /*2*/]));
				}
				STREAMING::_0xEF39EE20C537E98C(-75.1f, -2286.4f, 2.1f, 3.1f, 0f, 132.1f);
				ENTITY::SET_ENTITY_VISIBLE(func_887(), 0);
				if (CAM::DOES_CAM_EXIST(uLocal_1748))
				{
					CAM::DESTROY_CAM(uLocal_1748, 0);
				}
				iLocal_1782 = 0;
				iLocal_1783 = 0;
				iLocal_1893++;
			}
			break;
		
		case 3:
			if (!iLocal_1779)
			{
				if (((((STREAMING::HAS_MODEL_LOADED(joaat("submersible")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_military_pickup_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_flare_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2aswitchig_8")) && STREAMING::HAS_ANIM_DICT_LOADED("swimming@scuba")) && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					iLocal_1779 = 1;
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(1);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!iLocal_1782)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17500)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("DH2A_FINAL_EXP");
						iLocal_1782 = 1;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 22300)
				{
					STREAMING::REQUEST_IPL("SUNK_SHIP_FIRE");
				}
				if (!iLocal_1777)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 21000)
					{
						GlobalFunc_7621(13, 1, 0, 1, 0);
						iLocal_1777 = 1;
					}
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_4970))
				{
					uLocal_4970 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_PARAMS(uLocal_4970, -122.3561f, -2297.995f, 21.02972f, -19.65989f, 1.225318f, 134.0421f, 40f, 0, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				func_584();
			}
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3565))
			{
				uLocal_3565 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-159.7051f, -2374.318f, 5.0459f, 50f, "des_shipsink");
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1747))
				{
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3565) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3565) == 10)
					{
						if (GlobalFunc_2773(Local_48[6 /*2*/]) && GlobalFunc_2773(func_887()))
						{
							ENTITY::SET_ENTITY_COORDS(Local_48[6 /*2*/], -78.1857f, -2287.653f, 0f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_48[6 /*2*/], 56.7927f);
							ENTITY::SET_ENTITY_VISIBLE(Local_48[6 /*2*/], 1);
							ENTITY::SET_ENTITY_VISIBLE(func_887(), 1);
							PED::SET_PED_INTO_VEHICLE(func_887(), Local_48[6 /*2*/], -1);
							VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_48[6 /*2*/], 1);
							VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
						}
						if (iLocal_4969 == 1)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							FIRE::STOP_FIRE_IN_RANGE(-78.1857f, -2287.653f, 0f, 1000f);
							GRAPHICS::REMOVE_DECALS_IN_RANGE(-78.1857f, -2287.653f, 0f, 1000f);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-78.1857f, -2287.653f, 0f, 1000f);
						}
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2aswitchig_8"))
						{
							if (!CAM::DOES_CAM_EXIST(uLocal_1748))
							{
								uLocal_1748 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -75.1f, -2286.4f, 1.5f, 3.1f, 0f, 132.1f, 50f, 0, 2);
								CAM::SET_CAM_ACTIVE(uLocal_1748, 1);
								CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
								if (GlobalFunc_2773(Local_48[6 /*2*/]))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uLocal_1748, Local_48[6 /*2*/], 3.6348f, -1.745f, 1.15f, 1);
								}
								iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1747, "missheistdocks2aswitchig_8", "ig_8_switch", 1000f, -4f, 4, 0, 1148846080, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1747, Local_48[6 /*2*/], 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747, 0.35f);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BODY_FALL_DIVE_WATER_MASTER", PLAYER::PLAYER_PED_ID(), "docks_heist_finale_2a_sounds", 0, 0);
							}
						}
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BODY_FALL_DIVE_WATER_MASTER", PLAYER::PLAYER_PED_ID(), "docks_heist_finale_2a_sounds", 0, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, 0);
						}
					}
				}
				else
				{
					STREAMING::CLEAR_FOCUS();
					AUDIO::STOP_STREAM();
					STREAMING::REQUEST_IPL("SUNK_SHIP_FIRE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("DH2A_RAYFIRE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SWIM_TO_CONTAINER"))
					{
						AUDIO::STOP_AUDIO_SCENES();
						AUDIO::START_AUDIO_SCENE("DH2A_SWIM_TO_CONTAINER");
					}
					iVar0 = 0;
					while (iVar0 <= (29 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
						{
							PED::DELETE_PED(&(Local_175[iVar0 /*44*/]));
						}
						iVar0++;
					}
					iLocal_1981 = 0;
					HUD::DISPLAY_RADAR(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_583(1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_1893++;
				}
			}
			else if (iLocal_4969 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					AUDIO::STOP_STREAM();
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_4969 = 1;
				}
			}
			break;
		
		case 4:
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_1779 = 0;
			func_867(9);
			iLocal_1893 = 0;
			break;
	}
}

void func_583(int iParam0)//Position - 0x62000
{
	GlobalFunc_7621(12, iParam0, 0, 1, 0);
	GlobalFunc_7621(13, iParam0, 0, 1, 0);
}

void func_584()//Position - 0x6201E
{
	int iVar0;
	
	switch (iLocal_4968)
	{
		case 0:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 13250)
			{
				iLocal_4968++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
			{
				iVar0 = -86;
				while (iVar0 >= -246)
				{
					WATER::MODIFY_WATER(SYSTEM::TO_FLOAT(iVar0), -2347f, 4f, 0.5f);
					iVar0 -= 10;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 15250)
			{
				iLocal_4968++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 15000)
			{
				iVar0 = -81;
				while (iVar0 >= -241)
				{
					WATER::MODIFY_WATER(SYSTEM::TO_FLOAT(iVar0), -2345f, 4f, 0.5f);
					iVar0 -= 10;
				}
			}
			break;
		
		case 2:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 19000)
			{
				iLocal_4968++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 18700)
			{
				WATER::MODIFY_WATER(-132f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-137f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-142f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2338f, 4f, 0.5f);
			}
			break;
		
		case 3:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 19400)
			{
				iLocal_4968++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 19200)
			{
				WATER::MODIFY_WATER(-122f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-134f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-143f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2338f, 5f, 0.5f);
			}
			break;
		
		case 4:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 20666)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("ship_explosion_underwater", 0.2f);
				iLocal_4968++;
			}
			break;
		
		case 5:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 21666 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::_0x1CBA05AE7BD7EE05(0.2f);
				iLocal_4968++;
			}
			break;
		
		case 6:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 22166 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("ship_explosion_underwater", 0.2f);
				iLocal_4968++;
			}
			break;
		
		case 7:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 22666 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::_0x1CBA05AE7BD7EE05(0.2f);
				iLocal_4968++;
			}
			break;
		
		case 8:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 23000 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("ship_explosion_underwater", 0.2f);
				iLocal_4968++;
			}
			break;
		
		case 9:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 23500 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::_0x1CBA05AE7BD7EE05(0.2f);
				iLocal_4968++;
			}
			break;
		
		case 10:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 24000)
			{
				iLocal_4968++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 23500)
			{
				WATER::MODIFY_WATER(-105f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-109f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-114f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-119f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-126f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-127f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-137f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-142f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2336f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2331f, 5f, 0.5f);
				WATER::MODIFY_WATER(-151f, -2329.5f, 3f, 0.5f);
				WATER::MODIFY_WATER(-153f, -2331f, 5f, 0.5f);
				WATER::MODIFY_WATER(-157f, -2329.5f, 3f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2331f, 5f, 0.5f);
				WATER::MODIFY_WATER(-168f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-173f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-178f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-186f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-194f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-199f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-204f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-213f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-214f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-219f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-224f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-229f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-172f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-167f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-162f, -2339f, 5f, 0.5f);
			}
			break;
		
		case 11:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 25500)
			{
				iLocal_4968++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 24800)
			{
				WATER::MODIFY_WATER(-124f, -2319f, 5f, 0.5f);
				WATER::MODIFY_WATER(-126f, -2343f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-133f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-137f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-142f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-145f, -2343f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2337f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-152f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-156f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-162f, -2343f, 5f, 0.5f);
				WATER::MODIFY_WATER(-165f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-168f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-173f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-178f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-179f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-187f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-186f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-180f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-185f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-194f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-194f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-199f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-204f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-213f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-214f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-214f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-219f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-224f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-229f, -2333f, 5f, 0.5f);
			}
			break;
	}
}






void func_590()//Position - 0x66CFD
{
	int iVar0;
	
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
	}
	if (iLocal_1893 < 2)
	{
		GlobalFunc_7629();
	}
	switch (iLocal_1893)
	{
		case 0:
			AUDIO::STOP_AUDIO_SCENES();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PREPARE_DETONATION"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_PREPARE_DETONATION");
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (HUD::DOES_BLIP_EXIST(Local_69[1 /*15*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_69[1 /*15*/].f_1));
			}
			GlobalFunc_Checkpoint2(8, "Stage 7: detonate", 0, 0, 0, 1);
			GlobalFunc_173(&uLocal_1496, 3, func_886(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_1496, 1, 0, "MICHAEL", 0, 1);
			GlobalFunc_9621(128, 1, 0);
			func_598(128);
			CUTSCENE::REQUEST_CUTSCENE("lsdh_2a_rf_01", 8);
			iLocal_1893++;
			break;
		
		case 1:
			if (AUDIO::LOAD_STREAM("PORT_OF_LS_SHIP_BLOW_UP_MASTER", 0))
			{
				iLocal_1893++;
			}
			break;
		
		case 2:
			if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_07", 7, 0, 0, 0))
			{
				iLocal_1786 = 0;
				iLocal_1893++;
			}
			break;
		
		case 3:
			if (GlobalFunc_666())
			{
				GlobalFunc_2775(128);
			}
			if (GlobalFunc_665(128))
			{
				if (GlobalFunc_2773(Local_48[6 /*2*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_48[6 /*2*/], -80.2056f, -2288.283f, 0f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_48[6 /*2*/], 21f);
					VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				}
				if (GlobalFunc_2773(func_887()))
				{
					ENTITY::SET_ENTITY_COORDS(func_887(), -90.4927f, -2288.003f, -1.3081f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_887(), 130.4705f);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DETONATE");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
				iLocal_1744 = MISC::GET_GAME_TIMER();
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				iLocal_1782 = 0;
				iLocal_1893++;
			}
			if (!iLocal_1786)
			{
				if (GlobalFunc_5171())
				{
					GlobalFunc_164("DCKH_DETONATE", 7500, 1);
					GlobalFunc_159("DCKH_BOMBH", -1);
					iLocal_1744 = MISC::GET_GAME_TIMER() + 10000;
					iLocal_1782 = 0;
					iLocal_1786 = 1;
				}
			}
			else if (!iLocal_1782)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1744)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_NOBLO", 7, 0, 0, 0))
						{
							iLocal_1782 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 1000)
			{
				iLocal_1893 = -1;
			}
			break;
		
		case -1:
			iLocal_1808 = 0;
			iLocal_1807 = 0;
			GlobalFunc_495(128, 1);
			GlobalFunc_5186(&uLocal_2010, "docksheist2A01");
			GlobalFunc_5186(&uLocal_2010, "docksheist2A02");
			GlobalFunc_5186(&uLocal_2010, "docksheist2A03");
			GlobalFunc_5185(&uLocal_2010, 1, "DH2AREC");
			GlobalFunc_5185(&uLocal_2010, 2, "DH2AREC");
			GlobalFunc_5185(&uLocal_2010, 3, "DH2AREC");
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2a@crouch");
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_5174(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_5174(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_5174(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_5174(&uLocal_2010, joaat("buzzard"));
			iVar0 = 0;
			while (iVar0 < iLocal_1728)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1728[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_1728[iVar0]));
				}
				iVar0++;
			}
			func_591();
			func_867(8);
			break;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (GlobalFunc_666())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2A_DETONATE_BOMBS"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2A_DETONATE_BOMBS");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2A_DETONATE_BOMBS"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_2A_DETONATE_BOMBS");
		}
	}
}

void func_591()//Position - 0x670A7
{
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_1716[0]))
	{
		OBJECT::REMOVE_PICKUP(uLocal_1716[0]);
	}
}







void func_598(int iParam0)//Position - 0x672A0
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_1 = 1;
	}
}




void func_602()//Position - 0x67519
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	func_623();
	func_622();
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
	}
	bVar0 = false;
	if (!GlobalFunc_2773(Local_48[4 /*2*/]))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_ARRIVES"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH2A_CHOPPER_ARRIVES");
		}
	}
	switch (iLocal_1893)
	{
		case 0:
			if (GlobalFunc_234(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			}
			iLocal_1837 = 0;
			bLocal_1839 = false;
			iLocal_1782 = 0;
			iLocal_1783 = 0;
			iLocal_1838 = 0;
			GlobalFunc_173(&uLocal_1496, 3, func_886(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_1496, 1, 0, "MICHAEL", 0, 1);
			Local_1840 = { 0f, 0f, 0f };
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SNIPING_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
			}
			if (bLocal_1836)
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_621(-222.02f, -2375.396f, 14.2843f));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_620(-222.02f, -2375.396f, 14.2843f), 1065353216);
				TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -222.02f, -2375.396f, 14.2843f, 10, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			}
			if (GlobalFunc_Is_Mission_Retry() && iLocal_1899 == 0)
			{
				if (iLocal_1898 == 7)
				{
					GlobalFunc_Checkpoint2(7, "Stage 6: way out- B escape", 0, 0, 0, 1);
					Local_48[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -200.3281f, -2398.225f, 5.0012f, 98.1005f, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(Local_48[2 /*2*/], 300);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[2 /*2*/], 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[2 /*2*/], 0);
					Local_48[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -213.6754f, -2399.792f, 5.0012f, 317.573f, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(Local_48[1 /*2*/], 300);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[1 /*2*/], 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[1 /*2*/], 0);
					iLocal_1782 = 1;
					iLocal_1893 = 10;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
				else
				{
					iLocal_1893++;
				}
			}
			else if (!GlobalFunc_Is_Mission_Retry() || iLocal_1899)
			{
				iLocal_1893++;
			}
			break;
		
		case 1:
			GlobalFunc_Checkpoint2(6, "Stage 6: way out- A trucks", 0, 0, 0, 1);
			func_616(26, 150f, 1, 0);
			if (GlobalFunc_2773(Local_175[26 /*44*/]))
			{
				PED::SET_PED_DIES_WHEN_INJURED(Local_175[26 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[26 /*44*/], -209.392f, -2367.155f, 8.31911f, 1, 0, 0, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[26 /*44*/], -212.0108f, -2386.458f, 5.00033f, 1f, 0, 0);
				PED::SET_COMBAT_FLOAT(Local_175[26 /*44*/], 3, 0.5f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -210.4364f, -2378.108f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.444f, 12.3329f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[26 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
			}
			func_616(27, 150f, 1, 0);
			if (GlobalFunc_2773(Local_175[27 /*44*/]))
			{
				PED::SET_PED_DIES_WHEN_INJURED(Local_175[27 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[27 /*44*/], -209.2853f, -2375.949f, 8.3191f, 1, 0, 0, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[27 /*44*/], -217.4184f, -2391.906f, 5.00033f, 1f, 0, 0);
				PED::SET_COMBAT_FLOAT(Local_175[27 /*44*/], 3, 0.5f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -230.6206f, -2376.178f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.444f, 12.3329f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[27 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
			}
			iLocal_1744 = MISC::GET_GAME_TIMER();
			iLocal_1893++;
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				if (iLocal_1807)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_OUT_NS", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_1893++;
					}
				}
				else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_ALRM", 7, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_1893++;
				}
			}
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 8000)
			{
				if (func_615(0))
				{
					if (!iLocal_1783)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
						{
							iLocal_1783 = 1;
						}
					}
					iLocal_1782 = 0;
					iLocal_1744 = MISC::GET_GAME_TIMER();
					iLocal_1893++;
				}
			}
			if (func_614(0))
			{
				iLocal_1744 = MISC::GET_GAME_TIMER();
				iLocal_1893 = 4;
			}
			break;
		
		case 4:
			if (func_614(1))
			{
				iLocal_1744 = MISC::GET_GAME_TIMER();
				iLocal_1893++;
			}
			else if (!bLocal_1839)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 10000)
				{
					if (GlobalFunc_2773(Local_175[23 /*44*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -208.0867f, -2403.121f, 5.0012f, 1f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_LOOK_AT_ENTITY(0, func_886(), 100, 0, 2);
						TASK::TASK_PAUSE(0, 100);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 2000, 0);
						TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", "spot_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(Local_175[23 /*44*/], uLocal_1708);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						bLocal_1839 = true;
					}
				}
			}
			else if (GlobalFunc_2773(Local_175[23 /*44*/]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_175[23 /*44*/], "missheistdocks2a@alert", "spot_high", 3))
				{
					GlobalFunc_173(&uLocal_1496, 8, Local_175[23 /*44*/], "MERRYWEATHER5", 1, 1);
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CARS", 7, 0, 0, 0);
					iLocal_1838 = Local_175[23 /*44*/];
				}
			}
			break;
		
		case 5:
			if (func_615(1))
			{
				if (!iLocal_1783)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_1783 = 1;
					}
				}
			}
			iVar1 = 18;
			while (iVar1 <= 27)
			{
				if (Local_175[iVar1 /*44*/] == iLocal_1838)
				{
					if (!bLocal_1839)
					{
						if (GlobalFunc_2773(Local_175[iVar1 /*44*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar1 /*44*/], 242628503) > 1)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar1 /*44*/], Local_175[iVar1 /*44*/].f_12, 2f, 1, 0);
								TASK::CLEAR_PED_TASKS(Local_175[iVar1 /*44*/]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
								TASK::TASK_PAUSE(0, 50);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 2000, 0);
								TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", "spot_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
								TASK::TASK_PERFORM_SEQUENCE(Local_175[iVar1 /*44*/], uLocal_1708);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							}
						}
					}
					else if (!iVar1 == 23)
					{
						if (GlobalFunc_2773(Local_175[iVar1 /*44*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar1 /*44*/], 242628503) > 1)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar1 /*44*/], Local_175[iVar1 /*44*/].f_12, 2f, 1, 0);
								TASK::CLEAR_PED_TASKS(Local_175[iVar1 /*44*/]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
								TASK::TASK_PAUSE(0, 50);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 2000, 0);
								TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", "spot_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
								TASK::TASK_PERFORM_SEQUENCE(Local_175[iVar1 /*44*/], uLocal_1708);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							}
						}
					}
				}
				else if (GlobalFunc_2773(Local_175[iVar1 /*44*/]))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_175[iVar1 /*44*/], 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar1 /*44*/], 242628503) > 1)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar1 /*44*/], Local_175[iVar1 /*44*/].f_12, 2f, 1, 0);
							TASK::CLEAR_PED_TASKS(Local_175[iVar1 /*44*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 1000));
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_886(), 1) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), 0, 0);
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_886(), 1) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), 0, 0);
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_886(), 1) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), 0, 0);
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_886(), 1) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), 0, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), 0);
							TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(Local_175[iVar1 /*44*/], uLocal_1708);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						}
					}
				}
				iVar1++;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 3500)
			{
				iLocal_1893++;
			}
			break;
		
		case 6:
			if (func_615(1))
			{
				if (!iLocal_1783)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_1783 = 1;
					}
				}
			}
			if (!(iLocal_1838 == Local_175[23 /*44*/] && bLocal_1839))
			{
				if (GlobalFunc_5170())
				{
					bVar0 = false;
					iVar1 = 18;
					while (iVar1 <= 25)
					{
						if (GlobalFunc_2773(Local_175[iVar1 /*44*/]))
						{
							bVar0 = true;
						}
						iVar1++;
					}
					if (bVar0)
					{
						GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CARS", 7, 0, 0, 0);
					}
					iLocal_1782 = 0;
					iLocal_1893++;
				}
			}
			else
			{
				iLocal_1782 = 0;
				iLocal_1893++;
			}
			break;
		
		case 7:
			if (func_615(1))
			{
				if (!iLocal_1783)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_1783 = 1;
					}
				}
				iVar1 = 18;
				while (iVar1 <= 27)
				{
					func_613(iVar1);
					iVar1++;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 10000)
			{
				if (func_612(1))
				{
					iLocal_1744 = MISC::GET_GAME_TIMER();
					iLocal_1893++;
				}
			}
			break;
		
		case 8:
			if (!iLocal_1782 && GlobalFunc_5170())
			{
				GlobalFunc_173(&uLocal_1496, 1, 0, "Michael", 0, 1);
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_PLANT", 7, 0, 0, 0))
				{
					iLocal_1782 = 1;
				}
			}
			if (func_615(1))
			{
				if (!iLocal_1783)
				{
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0);
					iLocal_1783 = 1;
				}
				iVar1 = 18;
				while (iVar1 <= 27)
				{
					func_613(iVar1);
					iVar1++;
				}
			}
			if (func_611())
			{
				iLocal_1806 = 1;
			}
			func_610();
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 10000)
			{
				if (func_607() && iLocal_1806)
				{
					iLocal_1782 = 0;
					iLocal_1783 = 0;
					iLocal_1893++;
				}
			}
			break;
		
		case 9:
			bVar2 = false;
			func_610();
			iVar1 = 18;
			while (iVar1 <= 27)
			{
				if (GlobalFunc_2773(Local_175[iVar1 /*44*/]))
				{
					bVar2 = true;
					func_613(iVar1);
				}
				iVar1++;
			}
			if (!bVar2)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_4GO", 7, 0, 0, 0))
					{
						GlobalFunc_Checkpoint2(7, "Stage 6: way out- B escape", 0, 0, 0, 1);
						iLocal_1893++;
					}
				}
			}
			else if (!iLocal_1782)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_CLEAR2", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			break;
		
		case 10:
			if (func_606(&(Local_69[1 /*15*/]), 0, -220.89f, -2369.92f, 24.335f, 111.776f, 1, 0, 0))
			{
				PED::SET_PED_HEATSCALE_OVERRIDE(func_887(), 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(func_887(), 1);
				ENTITY::SET_ENTITY_VISIBLE(func_887(), 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(func_887(), 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 0, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 30, 1);
				PED::SET_PED_ACCURACY(func_887(), 15);
				PED::SET_PED_COMBAT_MOVEMENT(func_887(), 1);
				PED::SET_PED_COMBAT_RANGE(func_887(), 2);
				ENTITY::SET_ENTITY_HEALTH(func_887(), 1500);
				WEAPON::GIVE_WEAPON_TO_PED(func_887(), iLocal_1886, -1, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_887(), iLocal_1742);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_69[1 /*15*/], 1);
				PED::SET_PED_DIES_IN_WATER(Local_69[1 /*15*/], 0);
				if (GlobalFunc_234(Local_69[1 /*15*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[1 /*15*/], 1);
				}
				func_577(func_887(), 0, 0);
				GlobalFunc_173(&uLocal_1496, 1, Local_69[1 /*15*/], "Michael", 0, 1);
				iLocal_1744 = MISC::GET_GAME_TIMER();
				iLocal_1864 = 0;
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_1893++;
			}
			break;
		
		case 11:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_H1", 7, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
					iLocal_1893++;
				}
			}
			break;
		
		case 12:
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 5000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_CHOPPER_DEAD");
				iLocal_1782 = 0;
				iLocal_1814 = 0;
				iLocal_1893++;
			}
			break;
		
		case 13:
			func_605();
			if (func_603())
			{
				iLocal_1893++;
			}
			break;
		
		case 14:
			func_605();
			if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -210.2508f, -2357.449f, 8.507f, 3f, 3f, 2f, 0, 1, 0) || PED::IS_PED_SWIMMING(func_887()))
			{
				GRAPHICS::SET_SEETHROUGH(0);
				iLocal_1873 = 0;
				iVar1 = 0;
				while (iVar1 <= 25)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar1 /*44*/]))
					{
						PED::DELETE_PED(&(Local_175[iVar1 /*44*/]));
					}
					iVar1++;
				}
				WEAPON::SET_CURRENT_PED_WEAPON(func_887(), joaat("weapon_unarmed"), 1);
				uLocal_1707 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::SET_CAM_ACTIVE(uLocal_1707, 1);
				CAM::PLAY_CAM_ANIM(uLocal_1707, "michael_jumpsoff_boat_cam", "missheistdocks2a", -206.703f, -2354.962f, 8.354f, 0f, 0f, 0f, 0, 2);
				AUDIO::START_AUDIO_SCENE("DH2A_MICHAEL_DASH_AND_DIVE");
				func_403(0, -206.703f, -2354.962f, 8.354f, 1, 0, 1, 3000, 0);
				iLocal_1744 = MISC::GET_GAME_TIMER();
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				if (GlobalFunc_2773(func_886()))
				{
					TASK::TASK_AIM_GUN_AT_COORD(func_886(), -209.3837f, -2352.421f, 8.3192f, -1, 0, 0);
				}
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_1782 = 0;
				iLocal_1893++;
			}
			break;
		
		case 15:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_1707) > 0.99f || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
			{
				if (GlobalFunc_2773(func_886()))
				{
					TASK::CLEAR_PED_TASKS(func_886());
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_FRANK_JUMPS");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dh2a_shootout_sniping_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dh2a_shootout_sniping_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_MICHAEL_DASH_AND_DIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_MICHAEL_DASH_AND_DIVE");
				}
				RECORDING::_0x81CBAE94390F9F89();
				func_304(1, 0, 0, 3000, 0);
				func_577(func_887(), 1, 1);
				iLocal_1782 = 0;
				iLocal_1893++;
			}
			else if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_1707) > 0.7f)
			{
				if (!iLocal_1782)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DIVE", 7, 0, 0, 0))
						{
							iLocal_1782 = 1;
						}
					}
				}
			}
			break;
		
		case 16:
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2a");
			func_867(7);
			iLocal_1893 = 0;
			break;
	}
}

int func_603()//Position - 0x68489
{
	func_604(&(Local_69[1 /*15*/]), 0);
	switch (iLocal_1814)
	{
		case 0:
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-227.321f, -2359.71f, 25.23554f, 3f, 2f, 2f, 0f, 0, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-236.8192f, -2359.234f, 17.23182f, 6f, 3f, 2f, 0f, 0, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-213.4488f, -2375.129f, 10.31921f, 2.5f, 1f, 2f, 0f, 0, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-222.074f, -2374.518f, 14.05122f, 2f, 1f, 2f, 0f, 0, 7);
			ENTITY::SET_ENTITY_VISIBLE(func_887(), 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -225.4856f, -2377.796f, 16.3326f, 2f, 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "docksheist2A02", 0, 0, -1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -225.4856f, -2377.796f, 16.3326f, -1, 1, 0.25f, 0, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
			TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
			iLocal_1744 = MISC::GET_GAME_TIMER() + 4000;
			iLocal_1814++;
			break;
		
		case 1:
			if (iLocal_1801 == 3 && MISC::GET_GAME_TIMER() > iLocal_1744)
			{
				func_616(12, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_175[12 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[12 /*44*/], -214.5043f, -2355.671f, 16.33203f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_175[12 /*44*/], 285.8376f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[12 /*44*/], -213.2486f, -2374.956f, 16.33176f, 2f, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_175[12 /*44*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_175[12 /*44*/], 0);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -213.2486f, -2374.956f, 16.33176f, 2f, 20000, 0.25f, 0, 1193033728);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -213.2486f, -2374.956f, 16.33176f, 2000, 1, 0.25f, 0, 0, 0, 1);
				TASK::TASK_COMBAT_PED(0, func_887(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[12 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				func_616(13, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_175[13 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[13 /*44*/], -220.89f, -2369.92f, 24.335f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_175[13 /*44*/], 111.776f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[13 /*44*/], -231.0662f, -2374.595f, 16.33076f, 2f, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_175[13 /*44*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_175[13 /*44*/], 0);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "docksheist2A03", 0, 0, -1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -231.0662f, -2374.595f, 16.33076f, 2000, 1, 0.25f, 0, 0, 0, 1);
				TASK::TASK_COMBAT_PED(0, func_887(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[13 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				iLocal_1801 = 4;
				iLocal_1814++;
			}
			break;
		
		case 2:
			if ((!GlobalFunc_2773(Local_175[12 /*44*/]) && !GlobalFunc_2773(Local_175[13 /*44*/])) && !ENTITY::IS_ENTITY_OCCLUDED(func_887()))
			{
				func_616(15, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_175[15 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[15 /*44*/], -250.5471f, -2363.422f, 8.3192f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_175[15 /*44*/], 186.5092f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[15 /*44*/], -248.8481f, -2375.29f, 8.3192f, 2f, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_175[15 /*44*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_175[15 /*44*/], 0);
				TASK::TASK_COMBAT_PED(Local_175[15 /*44*/], func_887(), 0, 16);
				func_616(14, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_175[14 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[14 /*44*/], -250.6802f, -2364.606f, 8.3192f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_175[14 /*44*/], 197.7292f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[14 /*44*/], -245.8635f, -2376.99f, 8.31911f, 2f, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_175[14 /*44*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_175[14 /*44*/], 0);
				TASK::TASK_COMBAT_PED(Local_175[14 /*44*/], func_887(), 0, 16);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -229.8989f, -2379.29f, 12.33288f, 5f, 1, 0);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.8989f, -2379.29f, 12.33288f, 2f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				iLocal_1801 = 6;
				iLocal_1814++;
			}
			else
			{
				func_604(&(Local_175[12 /*44*/]), 1);
				func_604(&(Local_175[13 /*44*/]), 2);
			}
			break;
		
		case 3:
			if ((!GlobalFunc_2773(Local_175[15 /*44*/]) && !GlobalFunc_2773(Local_175[14 /*44*/])) && !ENTITY::IS_ENTITY_OCCLUDED(func_887()))
			{
				func_616(16, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_175[16 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[16 /*44*/], -209.4031f, -2362.736f, 8.31911f, 1, 0, 0, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[16 /*44*/], -210.74f, -2375.153f, 8.31911f, 2f, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_175[16 /*44*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_175[16 /*44*/], 0);
				TASK::TASK_COMBAT_PED(Local_175[16 /*44*/], func_887(), 0, 16);
				func_616(17, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_175[17 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_175[17 /*44*/], -207.8438f, -2363.502f, 8.31911f, 1, 0, 0, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[17 /*44*/], -211.0528f, -2377.403f, 8.31911f, 2f, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_175[17 /*44*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_175[17 /*44*/], 0);
				TASK::TASK_COMBAT_PED(Local_175[17 /*44*/], func_887(), 0, 16);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -218.3119f, -2377.135f, 8.31911f, 2f, 1, 0);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -222.175f, -2376.24f, 12.3329f, 2f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -218.3119f, -2377.135f, 8.31911f, 2f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				iLocal_1801 = 9;
				iLocal_1814++;
			}
			else
			{
				func_604(&(Local_175[15 /*44*/]), 3);
				func_604(&(Local_175[14 /*44*/]), 4);
			}
			break;
		
		case 4:
			if ((!GlobalFunc_2773(Local_175[16 /*44*/]) && !GlobalFunc_2773(Local_175[17 /*44*/])) && !ENTITY::IS_ENTITY_OCCLUDED(func_887()))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("dh2a_clear_path");
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				if (!ENTITY::IS_ENTITY_AT_COORD(func_887(), -218.3119f, -2377.135f, 8.31911f, 8f, 8f, 2f, 0, 1, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -218.3119f, -2377.135f, 8.31911f, 2f, -1, 0.25f, 0, 1193033728);
				}
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "docksheist2a01", 0, 520, -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				iLocal_1801 = 12;
				return 1;
			}
			else
			{
				func_604(&(Local_175[16 /*44*/]), 5);
				func_604(&(Local_175[17 /*44*/]), 6);
			}
			break;
	}
	return 0;
}

void func_604(var uParam0, int iParam1)//Position - 0x68C33
{
	if (!GlobalFunc_2773(*uParam0))
	{
		return;
	}
	switch (Local_1481[iParam1 /*2*/].f_1)
	{
		case 0:
			if (Local_1481[iParam1 /*2*/] < 255)
			{
				Local_1481[iParam1 /*2*/] += 10;
				if (Local_1481[iParam1 /*2*/] > 255)
				{
					Local_1481[iParam1 /*2*/] = 255;
				}
				ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1);
				PED::SET_PED_HEATSCALE_OVERRIDE(*uParam0, Local_1481[iParam1 /*2*/]);
			}
			else
			{
				Local_1481[iParam1 /*2*/].f_1++;
			}
			break;
		
		case 1:
			PED::DISABLE_PED_HEATSCALE_OVERRIDE(*uParam0);
			Local_1481[iParam1 /*2*/].f_1++;
			break;
		
		case 2:
			break;
	}
}

void func_605()//Position - 0x68CEB
{
	switch (iLocal_1801)
	{
		case 0:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_COVER", 7, 0, 0, 0))
				{
					iLocal_1801++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GOUP", 7, 0, 0, 0))
				{
					iLocal_1801++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GUYON", 7, 0, 0, 0))
				{
					iLocal_1801++;
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_2773(func_887()) && GlobalFunc_2773(Local_175[12 /*44*/]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -225.4856f, -2377.796f, 16.3326f, 6f, 6f, 4f, 0, 1, 0))
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GUYMORE", 7, 0, 0, 0))
						{
							iLocal_1801++;
						}
					}
				}
				else
				{
					iLocal_1801++;
				}
			}
			break;
		
		case 5:
			break;
		
		case 6:
			if (GlobalFunc_5170())
			{
				if (iLocal_1848 && iLocal_1849)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_TAKEOUT", 7, 0, 0, 0))
					{
						iLocal_1801++;
					}
				}
				else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_4H", 7, 0, 0, 0))
				{
					iLocal_1801++;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_2773(func_887()))
				{
					if (GlobalFunc_2773(Local_175[14 /*44*/]) || GlobalFunc_2773(Local_175[15 /*44*/]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -229.8989f, -2379.29f, 12.33288f, 6f, 6f, 3f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MORE2", 7, 0, 0, 0))
							{
								iLocal_1801++;
							}
						}
					}
					else
					{
						iLocal_1801++;
					}
				}
			}
			break;
		
		case 8:
			break;
		
		case 9:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DEAD", 7, 0, 0, 0))
				{
					iLocal_1801++;
				}
			}
			break;
		
		case 10:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_2773(func_887()))
				{
					if (GlobalFunc_2773(Local_175[16 /*44*/]) || GlobalFunc_2773(Local_175[17 /*44*/]))
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MAIN", 7, 0, 0, 0))
						{
							iLocal_1801++;
						}
					}
					else
					{
						iLocal_1801++;
					}
				}
			}
			break;
		
		case 11:
			break;
		
		case 12:
			if (GlobalFunc_5170())
			{
				if (!GlobalFunc_2773(Local_175[16 /*44*/]) && !GlobalFunc_2773(Local_175[17 /*44*/]))
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_4H", 7, 0, 0, 0))
					{
						iLocal_1801++;
					}
				}
			}
			break;
		
		case 13:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_NORTH", 7, 0, 0, 0))
				{
					iLocal_1801++;
				}
			}
			break;
	}
}

int func_606(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x6900E
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
			GlobalFunc_11318(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11333(*uParam0, bParam8);
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

int func_607()//Position - 0x690AD
{
	switch (iLocal_1845)
	{
		case 0:
			Local_48[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -51.4938f, -2587.003f, 5.0052f, 0f, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_48[4 /*2*/], 300);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[4 /*2*/], 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[4 /*2*/], 0);
			func_616(28, 150f, 1, 1);
			HUD::SET_BLIP_SCALE(Local_175[28 /*44*/].f_1, 1f);
			PED::SET_PED_PROP_INDEX(Local_175[28 /*44*/], 0, 2, 0, false);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[28 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[28 /*44*/], Local_48[4 /*2*/], -1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_48[4 /*2*/], 3, "DH2AREC", 1);
			VEHICLE::SET_PLAYBACK_SPEED(Local_48[4 /*2*/], 1f);
			PED::SET_PED_SHOOT_RATE(Local_175[28 /*44*/], 100);
			PED::SET_PED_FIRING_PATTERN(Local_175[28 /*44*/], -1857128337);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_175[28 /*44*/], joaat("vehicle_weapon_player_buzzard"));
			PED::SET_PED_ACCURACY(Local_175[28 /*44*/], 4);
			iLocal_1845++;
			break;
		
		case 1:
			if (GlobalFunc_2773(Local_48[4 /*2*/]) && GlobalFunc_2773(Local_175[28 /*44*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[4 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_48[4 /*2*/]) > 12000f)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_ARRIVES"))
						{
							AUDIO::START_AUDIO_SCENE("DH2A_CHOPPER_ARRIVES");
						}
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_48[4 /*2*/], "DH2A_CHOPPER_group", 0);
						iLocal_1805 = 1;
						iLocal_1845++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_2773(Local_48[4 /*2*/]) && GlobalFunc_2773(Local_175[28 /*44*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[4 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_48[4 /*2*/]) > 15000f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[4 /*2*/]);
						iLocal_1805 = 3;
						iLocal_1845++;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_2773(Local_48[4 /*2*/]) && GlobalFunc_2773(Local_175[28 /*44*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[28 /*44*/], -1273030092) > 1 || (MISC::GET_GAME_TIMER() - iLocal_1846) > 1000)
				{
					TASK::TASK_HELI_MISSION(Local_175[28 /*44*/], Local_48[4 /*2*/], 0, 0, -168.6174f, -2454.938f, 34.2428f, 4, 40f, 5f, GlobalFunc_5821(Local_48[4 /*2*/], func_886(), 1), 34, 10, -1f, 1);
					iLocal_1845++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_2773(Local_48[4 /*2*/]) && GlobalFunc_2773(Local_175[28 /*44*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[28 /*44*/], -1273030092) == 1 && ENTITY::IS_ENTITY_AT_COORD(Local_48[4 /*2*/], -168.6174f, -2454.938f, 34.2428f, 10f, 10f, 10f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_175[28 /*44*/]);
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_175[28 /*44*/], joaat("vehicle_weapon_player_buzzard"));
					TASK::TASK_HELI_MISSION(Local_175[28 /*44*/], Local_48[4 /*2*/], 0, func_886(), ENTITY::GET_ENTITY_COORDS(func_886(), 1), 6, 40f, 40f, -1f, 36, 10, -1082130432, 0);
					iLocal_1846 = MISC::GET_GAME_TIMER();
					iLocal_1850 = AUDIO::GET_SOUND_ID();
					iLocal_1851 = 0;
					iLocal_1845++;
				}
			}
			break;
	}
	if (!GlobalFunc_2773(Local_48[4 /*2*/]) || !GlobalFunc_2773(Local_175[28 /*44*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[4 /*2*/]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[4 /*2*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[4 /*2*/]);
			}
		}
		if (iLocal_1805 < 7)
		{
			iLocal_1805 = 7;
		}
		return 1;
	}
	return 0;
}



void func_610()//Position - 0x694A7
{
	if (iLocal_1845 <= 4)
	{
		return;
	}
	if (GlobalFunc_2773(Local_48[4 /*2*/]) && GlobalFunc_2773(Local_175[28 /*44*/]))
	{
		if (!iLocal_1851)
		{
			if (PED::IS_PED_SHOOTING(Local_175[28 /*44*/]))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_SHOOTING"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_CHOPPER_SHOOTING");
				}
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_1850))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1850, "CONDUCTORS_PORT_OF_LS_2A_LOOP", Local_48[4 /*2*/], 0, 0, 0);
				}
				iLocal_1851 = 1;
			}
		}
		else if (!PED::IS_PED_SHOOTING(Local_175[28 /*44*/]))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_SHOOTING"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_CHOPPER_SHOOTING");
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1850))
			{
				AUDIO::STOP_SOUND(iLocal_1850);
			}
			iLocal_1851 = 0;
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_SHOOTING"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH2A_CHOPPER_SHOOTING");
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1850))
		{
			AUDIO::STOP_SOUND(iLocal_1850);
		}
	}
}

int func_611()//Position - 0x69587
{
	switch (iLocal_1805)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_H2", 7, 0, 0, 0))
				{
					iLocal_1805++;
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_H3", 7, 0, 0, 0))
				{
					iLocal_1805++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DEAL", 7, 0, 0, 0))
				{
					iLocal_1805++;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOAN", 7, 0, 0, 0))
				{
					iLocal_1805++;
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_H4", 7, 0, 0, 0))
				{
					iLocal_1805++;
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_4E", 7, 0, 0, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_612(bool bParam0)//Position - 0x696C9
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_1843)
	{
		case 0:
			Local_48[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), 14.969f, -2524.423f, 5.5353f, 0f, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_48[1 /*2*/], 300);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[1 /*2*/], 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[1 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[1 /*2*/], 1);
			func_616(18, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[18 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[18 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[18 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[18 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[18 /*44*/], Local_48[1 /*2*/], -1);
			func_616(19, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[19 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[19 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[19 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[19 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[19 /*44*/], Local_48[1 /*2*/], 0);
			func_616(20, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[20 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[20 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[20 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[20 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[20 /*44*/], Local_48[1 /*2*/], 1);
			func_616(21, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[21 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[21 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[21 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[21 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[21 /*44*/], Local_48[1 /*2*/], 2);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_48[1 /*2*/], 2, "DH2AREC", 1);
			VEHICLE::SET_PLAYBACK_SPEED(Local_48[1 /*2*/], 0.8f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_48[1 /*2*/], "DH2A_ENEMY_VEHICLES", 0);
			iLocal_1843++;
			break;
		
		case 1:
			if (GlobalFunc_2773(Local_48[1 /*2*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[1 /*2*/]) && GlobalFunc_644(Local_48[1 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_48[1 /*2*/], 0);
					iVar0 = 18;
					while (iVar0 <= 21)
					{
						if (iVar0 == 19)
						{
							iVar1 = 0;
						}
						else if (iVar0 == 20)
						{
							iVar1 = 200;
						}
						else if (iVar0 == 21)
						{
							iVar1 = 800;
						}
						else
						{
							iVar1 = 1000;
						}
						if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_175[iVar0 /*44*/].f_1))
							{
								HUD::SET_BLIP_SCALE(Local_175[iVar0 /*44*/].f_1, 0.7f);
							}
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar0 /*44*/], Local_175[iVar0 /*44*/].f_15, 10f, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar0 /*44*/], 6, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar0 /*44*/], 1, 0);
							PED::SET_PED_ACCURACY(Local_175[iVar0 /*44*/], 4);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar1, 0);
							TASK::TASK_SWAP_WEAPON(0, 1);
							if (bParam0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar0 /*44*/], Local_175[iVar0 /*44*/].f_12, 2f, 1, 0);
								TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_175[iVar0 /*44*/].f_15, 2f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.444f, 12.3329f, -1, 0, 0);
							}
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(Local_175[iVar0 /*44*/], uLocal_1708);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						}
						iVar0++;
					}
					iLocal_1843++;
				}
			}
			else
			{
				iLocal_1843++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_613(int iParam0)//Position - 0x69A40
{
	if (!GlobalFunc_2773(Local_175[iParam0 /*44*/]))
	{
		return;
	}
	switch (iLocal_1800)
	{
		case 0:
			if (GlobalFunc_5170())
			{
				GlobalFunc_173(&uLocal_1496, 8, Local_175[iParam0 /*44*/], "MERRYWEATHER5", 1, 1);
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MWPOS5", 7, 0, 0, 0);
				iLocal_1800++;
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				GlobalFunc_173(&uLocal_1496, 8, Local_175[iParam0 /*44*/], "MERRYWEATHER5", 1, 1);
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MWGO5", 7, 0, 0, 0);
				iLocal_1800++;
			}
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_SHOTAT", 7, 0, 0, 0);
				iLocal_1800++;
			}
			break;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_175[iParam0 /*44*/], 0))
	{
		return;
	}
	if (!PED::IS_PED_IN_COMBAT(Local_175[iParam0 /*44*/], 0))
	{
		TASK::TASK_COMBAT_PED(Local_175[iParam0 /*44*/], func_886(), 0, 16);
	}
	switch (Local_175[iParam0 /*44*/].f_31)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_175[iParam0 /*44*/], Local_175[iParam0 /*44*/].f_12, 4f, 4f, 4f, 0, 1, 0))
			{
				if (Local_175[iParam0 /*44*/].f_30 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Local_175[iParam0 /*44*/].f_30) > Local_175[iParam0 /*44*/].f_32)
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iParam0 /*44*/], Local_175[iParam0 /*44*/].f_9, 2f, 1, 0);
						Local_175[iParam0 /*44*/].f_30 = 0;
						Local_175[iParam0 /*44*/].f_31++;
					}
				}
				else
				{
					Local_175[iParam0 /*44*/].f_30 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iParam0 /*44*/], Local_175[iParam0 /*44*/].f_12, 2f, 1, 0);
			}
			break;
		
		case 1:
			break;
	}
}

int func_614(bool bParam0)//Position - 0x69C00
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 1000f;
	if (bParam0)
	{
		iVar2 = 22;
	}
	else
	{
		iVar2 = 26;
	}
	if (!iLocal_1837)
	{
		if (iLocal_1838 == 0)
		{
			iVar0 = iVar2;
			while (iVar0 <= 27)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
				{
					if (MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[iVar0 /*44*/], -5f, -5f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[iVar0 /*44*/], 5f, 5f, 1f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[iVar0 /*44*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_175[iVar0 /*44*/], 0))
							{
								iLocal_1838 = Local_175[iVar0 /*44*/];
							}
						}
						else
						{
							iLocal_1837 = 1;
							Local_1840 = { Local_175[iVar0 /*44*/].f_15 };
						}
					}
				}
				else
				{
					iLocal_1837 = 1;
					Local_1840 = { Local_175[iVar0 /*44*/].f_15 };
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 18;
		while (iVar0 <= 27)
		{
			if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_175[iVar0 /*44*/], 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar0 /*44*/], 1), Local_1840, 1) < fVar1)
					{
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar0 /*44*/], 1), Local_1840, 1);
						iLocal_1838 = Local_175[iVar0 /*44*/];
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_1838 != 0)
	{
		iVar0 = 18;
		while (iVar0 <= 27)
		{
			if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_175[iVar0 /*44*/], 1))
				{
					if (!bLocal_1839)
					{
						TASK::CLEAR_PED_TASKS(Local_175[iVar0 /*44*/]);
					}
					else if (!iVar0 == 23)
					{
						TASK::CLEAR_PED_TASKS(Local_175[iVar0 /*44*/]);
					}
				}
			}
			iVar0++;
		}
		GlobalFunc_173(&uLocal_1496, 8, iLocal_1838, "MERRYWEATHER5", 1, 1);
		iLocal_1744 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

int func_615(bool bParam0)//Position - 0x69DC8
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_1844)
	{
		case 0:
			Local_48[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), 14.969f, -2524.423f, 5.5353f, 0f, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_48[2 /*2*/], 300);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[2 /*2*/], 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[2 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[2 /*2*/], 1);
			func_616(22, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[22 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[22 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[22 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[22 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[22 /*44*/], Local_48[2 /*2*/], -1);
			func_616(23, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[23 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[23 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[23 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[23 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[23 /*44*/], Local_48[2 /*2*/], 0);
			func_616(24, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[24 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[24 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[24 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[24 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[24 /*44*/], Local_48[2 /*2*/], 1);
			func_616(25, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_175[25 /*44*/], 1);
			PED::SET_COMBAT_FLOAT(Local_175[25 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_175[25 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_175[25 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_175[25 /*44*/], Local_48[2 /*2*/], 2);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_48[2 /*2*/], 1, "DH2AREC", 1);
			VEHICLE::SET_PLAYBACK_SPEED(Local_48[2 /*2*/], 1f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_48[2 /*2*/], "DH2A_ENEMY_VEHICLES", 0);
			iLocal_1844++;
			break;
		
		case 1:
			if (GlobalFunc_2773(Local_48[2 /*2*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[2 /*2*/]) && GlobalFunc_644(Local_48[2 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_48[2 /*2*/], 0);
					iVar0 = 22;
					while (iVar0 <= 25)
					{
						if (iVar0 == 23)
						{
							iVar1 = 0;
						}
						else if (iVar0 == 24)
						{
							iVar1 = 200;
						}
						else if (iVar0 == 25)
						{
							iVar1 = 400;
						}
						else
						{
							iVar1 = 600;
						}
						if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_175[iVar0 /*44*/].f_1))
							{
								HUD::SET_BLIP_SCALE(Local_175[iVar0 /*44*/].f_1, 0.7f);
							}
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar0 /*44*/], Local_175[iVar0 /*44*/].f_15, 10f, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar0 /*44*/], 6, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar0 /*44*/], 1, 0);
							PED::SET_PED_ACCURACY(Local_175[iVar0 /*44*/], 4);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar1, 0);
							TASK::TASK_SWAP_WEAPON(0, 1);
							if (bParam0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar0 /*44*/], Local_175[iVar0 /*44*/].f_12, 2f, 1, 0);
								TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_175[iVar0 /*44*/].f_15, 2f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.444f, 12.3329f, -1, 0, 0);
							}
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(Local_175[iVar0 /*44*/], uLocal_1708);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						}
						iVar0++;
					}
					iLocal_1844++;
				}
			}
			else
			{
				iLocal_1844++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_616(int iParam0, float fParam1, bool bParam2, int iParam3)//Position - 0x6A13B
{
	GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
	func_581(&(Local_175[iParam0 /*44*/]), joaat("s_m_y_blackops_01"), Local_175[iParam0 /*44*/].f_3, Local_175[iParam0 /*44*/].f_21, 0);
	if (GlobalFunc_2773(Local_175[iParam0 /*44*/]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_175[iParam0 /*44*/], iLocal_1743);
		PED::SET_PED_AS_ENEMY(Local_175[iParam0 /*44*/], 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_175[iParam0 /*44*/], iLocal_1886, -1, 1, 1);
		PED::SET_PED_DIES_INSTANTLY_IN_WATER(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_MONEY(Local_175[iParam0 /*44*/], 0);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_ALERTNESS(Local_175[iParam0 /*44*/], 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_175[iParam0 /*44*/], 512, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 30, iParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 14, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 1, 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_175[iParam0 /*44*/], 1);
		AUDIO::STOP_PED_SPEAKING(Local_175[iParam0 /*44*/], 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_HEARING_RANGE(Local_175[iParam0 /*44*/], 10f);
		PED::SET_PED_SEEING_RANGE(Local_175[iParam0 /*44*/], fParam1);
		PED::SET_PED_CONFIG_FLAG(Local_175[iParam0 /*44*/], 118, 0);
		PED::SET_PED_ACCURACY(Local_175[iParam0 /*44*/], 30);
		PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_175[iParam0 /*44*/]);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_175[iParam0 /*44*/], 1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_175[iParam0 /*44*/], 1);
		}
		Local_175[iParam0 /*44*/].f_37 = 1;
		Local_175[iParam0 /*44*/].f_38 = 0;
		Local_175[iParam0 /*44*/].f_39 = 0;
		Local_175[iParam0 /*44*/].f_40 = 0;
		Local_175[iParam0 /*44*/].f_28 = 0;
		Local_175[iParam0 /*44*/].f_42 = 0;
		Local_175[iParam0 /*44*/].f_43 = 0;
		Local_175[iParam0 /*44*/].f_41 = 0;
		Local_175[iParam0 /*44*/].f_29 = -1;
		Local_175[iParam0 /*44*/].f_34 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 20000));
		Local_175[iParam0 /*44*/].f_35 = 0;
		if (iLocal_1892 < 6)
		{
			func_619(iParam0);
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_175[iParam0 /*44*/].f_1))
		{
			Local_175[iParam0 /*44*/].f_1 = GlobalFunc_6797(Local_175[iParam0 /*44*/], 1, 145);
		}
		GlobalFunc_593(Local_175[iParam0 /*44*/], 1);
	}
}



void func_619(int iParam0)//Position - 0x6A435
{
	if (!GlobalFunc_2773(Local_175[iParam0 /*44*/]))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
	switch (iParam0)
	{
		case 2:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -110.7773f, -2374.619f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -123.3457f, -2366.25f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -113.7629f, -2357.551f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -99.3139f, -2365.439f, 8.322f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 3:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_175[3 /*44*/].f_3, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_ACHIEVE_HEADING(0, 180f, 0);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 2f, 2f, -1, 1, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 4:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -129.9954f, -2365.669f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.6747f, -2377.901f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.1642f, -2365.759f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.5969f, -2354.177f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 5:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -129.9954f, -2365.669f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.6747f, -2377.901f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.1642f, -2365.759f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.5969f, -2354.177f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 6:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -129.9954f, -2365.669f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.6747f, -2377.901f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.1642f, -2365.759f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.5969f, -2354.177f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 7:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_175[7 /*44*/].f_3, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_PATROL(0, "MISS_PATROL_6", 1, 0, 1);
			break;
		
		case 8:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -155.3885f, -2353.877f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.7102f, -2364.968f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -154.9743f, -2377.957f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -163.6116f, -2367.869f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 9:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -181.9512f, -2367.64f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5216f, -2353.967f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -163.9121f, -2364.619f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5004f, -2378.131f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 10:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -181.9512f, -2367.64f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5216f, -2353.967f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -163.9121f, -2364.619f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5004f, -2378.131f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 11:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -193.5307f, -2378.2f, 10.9717f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -193.6108f, -2375.892f, 10.9717f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 12:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_175[12 /*44*/].f_3, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_ACHIEVE_HEADING(0, 180f, 0);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 2f, 2f, -1, 1, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 13:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.7796f, -2377.952f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -209.5825f, -2368.084f, 8.3192f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.6789f, -2353.786f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -190.3428f, -2365.73f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 14:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.7796f, -2377.952f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -209.5825f, -2368.084f, 8.3192f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.6789f, -2353.786f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -190.3428f, -2365.73f, 8.3191f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 15:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -221.3304f, -2377.01f, 12.3329f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_STAND_STILL(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -230.3291f, -2377.703f, 12.3329f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -222.6653f, -2375.996f, 16.3326f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -215.1669f, -2377.699f, 16.3326f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_STAND_STILL(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -222.6653f, -2375.996f, 16.3326f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -230.3291f, -2377.703f, 12.3329f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		case 16:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_175[16 /*44*/].f_3, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_PATROL(0, "MISS_PATROL_8", 1, 0, 1);
			break;
		
		case 17:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -250.5147f, -2375.538f, 8.3192f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -252.1649f, -2363.835f, 8.3192f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1708, 1);
			break;
		
		default:
			TASK::TASK_STAND_STILL(0, -1);
			break;
	}
	TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
	TASK::TASK_PERFORM_SEQUENCE(Local_175[iParam0 /*44*/], uLocal_1708);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
}

var func_620(struct<3> Param0)//Position - 0x6ACC6
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	Var3 = { GlobalFunc_107(Var0) };
	return MISC::ATAN2(Var3.f_2, SYSTEM::VMAG(Var3.x, Var3.f_1, 0f));
}

float func_621(struct<3> Param0)//Position - 0x6AD0A
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
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

void func_622()//Position - 0x6AD65
{
	if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_7629();
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	}
}

void func_623()//Position - 0x6ADA8
{
	if (GlobalFunc_2773(Local_48[1 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[1 /*2*/]))
		{
			if (!GlobalFunc_2773(Local_175[18 /*44*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[1 /*2*/]);
				if (GlobalFunc_2773(Local_175[19 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[19 /*44*/], -165.7794f, -2421.983f, 5.648f, 2f, 0, 0);
				}
				if (GlobalFunc_2773(Local_175[21 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[21 /*44*/], -163.9438f, -2416.174f, 5.4341f, 2f, 0, 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[1 /*2*/], 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[1 /*2*/], 4, 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[1 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_48[1 /*2*/], 10, 4000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[18 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				if (GlobalFunc_2773(Local_175[19 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[19 /*44*/], -165.7794f, -2421.983f, 5.648f, 2f, 0, 0);
				}
				if (GlobalFunc_2773(Local_175[21 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[21 /*44*/], -163.9438f, -2416.174f, 5.4341f, 2f, 0, 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[1 /*2*/], 1, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[1 /*2*/], 5, 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[1 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_48[1 /*2*/], 11, 4000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[18 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				if (GlobalFunc_2773(Local_175[19 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[19 /*44*/], -165.7794f, -2421.983f, 5.648f, 2f, 0, 0);
				}
				if (GlobalFunc_2773(Local_175[21 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[21 /*44*/], -163.9438f, -2416.174f, 5.4341f, 2f, 0, 0);
				}
			}
		}
	}
	if (GlobalFunc_2773(Local_48[2 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[2 /*2*/]))
		{
			if (!GlobalFunc_2773(Local_175[22 /*44*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[2 /*2*/]);
				if (GlobalFunc_2773(Local_175[24 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[24 /*44*/], -112.3173f, -2426.484f, 5.3646f, 2f, 0, 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[2 /*2*/], 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[2 /*2*/], 4, 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[2 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_48[2 /*2*/], 10, 4000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[22 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				if (GlobalFunc_2773(Local_175[22 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[22 /*44*/], -105.7819f, -2427.784f, 5.8586f, 2f, 0, 0);
				}
				if (GlobalFunc_2773(Local_175[24 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[24 /*44*/], -112.3173f, -2426.484f, 5.3646f, 2f, 0, 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[2 /*2*/], 1, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_48[2 /*2*/], 5, 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[2 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_48[2 /*2*/], 11, 4000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(Local_175[22 /*44*/], uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				if (GlobalFunc_2773(Local_175[22 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[22 /*44*/], -105.7819f, -2427.784f, 5.8586f, 2f, 0, 0);
				}
				if (GlobalFunc_2773(Local_175[24 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[24 /*44*/], -112.3173f, -2426.484f, 5.3646f, 2f, 0, 0);
				}
			}
		}
	}
}

void func_624()//Position - 0x6B141
{
	int iVar0;
	
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_1893 < 3)
	{
		func_646();
	}
	func_622();
	switch (iLocal_1893)
	{
		case 0:
			if (GlobalFunc_234(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_1756 = 0;
			GlobalFunc_719(&uLocal_2010, "missheistdocks2aswitchig_7");
			if (GlobalFunc_2773(func_887()))
			{
				GlobalFunc_11257(func_887(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			GlobalFunc_Checkpoint2(5, "Stage 5: fourth bomb", 0, 0, 0, 1);
			iLocal_1782 = 0;
			iLocal_1783 = 0;
			iLocal_1744 = MISC::GET_GAME_TIMER();
			iLocal_1893++;
			break;
		
		case 1:
			if ((!iLocal_1808 && GlobalFunc_5170()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_TK3", 7, 0, 0, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_1452[3 /*7*/].f_1))
					{
						Local_1452[3 /*7*/].f_1 = GlobalFunc_5104(Local_1452[3 /*7*/].f_2, 0);
					}
					GlobalFunc_727(&uLocal_2010, "docksheist2A01");
					GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
					GlobalFunc_718(&uLocal_2010, joaat("p_po1_01_doorm_s"));
					GlobalFunc_719(&uLocal_2010, "missheistdocks2aig_1");
					iLocal_1744 = MISC::GET_GAME_TIMER();
					iLocal_1893++;
				}
			}
			else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_ENT_NS", 7, 0, 0, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_1452[3 /*7*/].f_1))
				{
					Local_1452[3 /*7*/].f_1 = GlobalFunc_5104(Local_1452[3 /*7*/].f_2, 0);
				}
				GlobalFunc_718(&uLocal_2010, joaat("p_po1_01_doorm_s"));
				GlobalFunc_719(&uLocal_2010, "missheistdocks2aig_1");
				GlobalFunc_727(&uLocal_2010, "docksheist2A01");
				GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
				iLocal_1744 = MISC::GET_GAME_TIMER();
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(-219.36f, -2381.92f, 14.26f, GlobalFunc_107(-0.39f, 0.92f, -0.08f), 50f, 0);
				}
				iLocal_1783 = 0;
				iLocal_1893++;
			}
			break;
		
		case 2:
			if ((ENTITY::IS_ENTITY_AT_COORD(func_887(), Local_1452[3 /*7*/].f_2, 2f, 2f, 2f, 0, 1, 0) && !Local_1947.f_20) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_SHIP_DOOR", 0))
			{
				if (GlobalFunc_2773(Local_175[15 /*44*/]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_175[15 /*44*/], func_887()) || PED::IS_PED_IN_COMBAT(Local_175[15 /*44*/], func_887()))
					{
						if (!iLocal_1783)
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_HLP_NS", 7, 0, 0, 0))
								{
									iLocal_1783 = 1;
								}
							}
						}
					}
					else
					{
						Local_1452[3 /*7*/].f_6 = 1;
						if (!Local_1947.f_20)
						{
							iLocal_1981 = 0;
						}
						GlobalFunc_746(&uLocal_2010, 1, "DH2AREC");
						GlobalFunc_746(&uLocal_2010, 2, "DH2AREC");
						GlobalFunc_746(&uLocal_2010, 3, "DH2AREC");
						GlobalFunc_727(&uLocal_2010, "docksheist2a02");
						GlobalFunc_727(&uLocal_2010, "docksheist2a03");
						GlobalFunc_718(&uLocal_2010, joaat("buzzard"));
						iLocal_1769 = 0;
						AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS");
						iLocal_1893++;
					}
				}
				else
				{
					Local_1452[3 /*7*/].f_6 = 1;
					if (!Local_1947.f_20)
					{
						iLocal_1981 = 0;
					}
					GlobalFunc_746(&uLocal_2010, 1, "DH2AREC");
					GlobalFunc_746(&uLocal_2010, 2, "DH2AREC");
					GlobalFunc_746(&uLocal_2010, 3, "DH2AREC");
					GlobalFunc_727(&uLocal_2010, "docksheist2a02");
					GlobalFunc_727(&uLocal_2010, "docksheist2a03");
					GlobalFunc_718(&uLocal_2010, joaat("buzzard"));
					iLocal_1769 = 0;
					AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS");
					iLocal_1893++;
				}
			}
			else if (!iLocal_1799)
			{
				if (PLAYER::PLAYER_PED_ID() == func_887())
				{
					if (GlobalFunc_5171())
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_164("DCKH_PLB3", 7500, 1);
						iLocal_1799 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (func_643())
			{
				iLocal_1744 = MISC::GET_GAME_TIMER();
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1900[0]))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1900[0]);
				}
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1900[1]))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1900[1]);
				}
				iLocal_1981 = 0;
				iLocal_1893 = -1;
			}
			break;
		
		case -1:
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
				{
					PED::DELETE_PED(&(Local_175[iVar0 /*44*/]));
				}
				iVar0++;
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("PORT_OF_LS_SHIP_DOOR");
			if (GlobalFunc_2773(func_887()))
			{
				PED::DELETE_PED(&(Local_69[1 /*15*/]));
			}
			GlobalFunc_5174(&uLocal_2010, joaat("p_po1_01_doorm_s"));
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2aig_1");
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2aswitchig_7");
			func_867(6);
			break;
	}
	if (iLocal_1893 < 3)
	{
		func_626();
		if ((((!GlobalFunc_2773(Local_175[13 /*44*/]) && !GlobalFunc_2773(Local_175[12 /*44*/])) && !GlobalFunc_2773(Local_175[15 /*44*/])) && GlobalFunc_5170()) && !iLocal_1782)
		{
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				if (iLocal_1808)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_UP_NS", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
				else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_INVIEW", 7, 0, 0, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ALL_CLEAR");
					iLocal_1782 = 1;
				}
			}
			else if (iLocal_1808)
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_UPM_NS", 7, 0, 0, 0))
				{
					iLocal_1782 = 1;
				}
			}
			else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_UP", 7, 0, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ALL_CLEAR");
				iLocal_1782 = 1;
			}
		}
		if (PLAYER::PLAYER_PED_ID() == func_886())
		{
			GlobalFunc_703(&(Local_1452[3 /*7*/].f_1));
			if (!iLocal_1795 && !Local_1947.f_20)
			{
				if (GlobalFunc_5171())
				{
					GlobalFunc_164("DCKH_PROTECT", 7500, 1);
					iLocal_1795 = 1;
				}
			}
		}
		else if (!Local_1452[3 /*7*/].f_6)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_1452[3 /*7*/].f_1))
			{
				Local_1452[3 /*7*/].f_1 = GlobalFunc_5104(Local_1452[3 /*7*/].f_2, 0);
			}
		}
	}
}


void func_626()//Position - 0x6B7A9
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		GlobalFunc_703(&(Local_1452[0 /*7*/].f_1));
		GlobalFunc_703(&(Local_1452[1 /*7*/].f_1));
		GlobalFunc_703(&(Local_1452[2 /*7*/].f_1));
	}
	else
	{
		if (iLocal_1892 == 2)
		{
			if (!Local_1452[0 /*7*/].f_6)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_1452[0 /*7*/].f_1))
				{
					Local_1452[0 /*7*/].f_1 = GlobalFunc_5104(Local_1452[0 /*7*/].f_2, 0);
				}
			}
			else
			{
				GlobalFunc_703(&(Local_1452[0 /*7*/].f_1));
			}
		}
		else
		{
			GlobalFunc_703(&(Local_1452[0 /*7*/].f_1));
		}
		if (iLocal_1892 == 3)
		{
			if (!Local_1452[1 /*7*/].f_6)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_1452[1 /*7*/].f_1))
				{
					Local_1452[1 /*7*/].f_1 = GlobalFunc_5104(Local_1452[1 /*7*/].f_2, 0);
				}
			}
			else
			{
				GlobalFunc_703(&(Local_1452[1 /*7*/].f_1));
			}
		}
		else
		{
			GlobalFunc_703(&(Local_1452[1 /*7*/].f_1));
		}
		if (iLocal_1892 == 4)
		{
			if (!Local_1452[2 /*7*/].f_6)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_1452[2 /*7*/].f_1))
				{
					Local_1452[2 /*7*/].f_1 = GlobalFunc_5104(Local_1452[2 /*7*/].f_2, 0);
				}
			}
			else
			{
				GlobalFunc_703(&(Local_1452[2 /*7*/].f_1));
			}
		}
		else
		{
			GlobalFunc_703(&(Local_1452[2 /*7*/].f_1));
		}
	}
	iVar1 = 5000;
	if (!iLocal_1808)
	{
		iVar0 = 2;
		while (iVar0 <= 17)
		{
			if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_175[iVar0 /*44*/], func_887()))
				{
					Local_175[iVar0 /*44*/].f_38 = 1;
					iVar1 = 5000;
				}
				else if (Local_175[iVar0 /*44*/].f_28 == 1)
				{
					Local_175[iVar0 /*44*/].f_38 = 1;
					iVar1 = 15000;
				}
				else if (Local_175[iVar0 /*44*/].f_42)
				{
					Local_175[iVar0 /*44*/].f_38 = 1;
					iVar1 = 15000;
				}
				else
				{
					Local_175[iVar0 /*44*/].f_38 = 0;
				}
			}
			else
			{
				Local_175[iVar0 /*44*/].f_38 = 0;
			}
			iVar0++;
		}
		bLocal_1831 = false;
		iVar0 = 2;
		while (iVar0 <= 17)
		{
			if (Local_175[iVar0 /*44*/].f_38 && GlobalFunc_2773(Local_175[iVar0 /*44*/]))
			{
				bLocal_1831 = true;
			}
			iVar0++;
		}
		if (bLocal_1831)
		{
			if (!iLocal_1810)
			{
				iLocal_1745 = MISC::GET_GAME_TIMER();
				iLocal_1810 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1745) > iVar1)
			{
				if (PLAYER::PLAYER_PED_ID() == func_887())
				{
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_ALRF_NS", 7, 0, 0, 0);
				}
				else
				{
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_ALRM_NS", 7, 0, 0, 0);
				}
				GlobalFunc_565(619, 1, 0);
				iLocal_1808 = 1;
			}
		}
		else
		{
			iLocal_1810 = 0;
		}
	}
	if (iLocal_1808)
	{
		if (iLocal_1809 == 0)
		{
			iLocal_1809 = 1;
			AUDIO::TRIGGER_MUSIC_EVENT("dh2a_early_alarm");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dh2a_plant_bombs_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("dh2a_plant_bombs_scene");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dh2a_sniping_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("dh2a_sniping_scene");
			}
			if (PLAYER::PLAYER_PED_ID() == func_886())
			{
				AUDIO::START_AUDIO_SCENE("dh2a_shootout_sniping_scene");
			}
			else if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				AUDIO::START_AUDIO_SCENE("dh2a_shootout_scene");
			}
			GlobalFunc_10618(&uLocal_1496, "d2aaud", "dh2a_alrm", 7, 0, 0, 0);
			iLocal_1981 = 1;
			func_378(0, 0, 1, 0, 0, 0);
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				TASK::CLEAR_PED_TASKS(func_886());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(func_887());
			}
			func_304(1, 0, 0, 3000, 0);
			CAM::DESTROY_ALL_CAMS(0);
		}
		func_641();
		if (PLAYER::PLAYER_PED_ID() == func_886())
		{
			func_640();
		}
		else
		{
			func_639();
			PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 23, 0);
			GlobalFunc_703(&(Local_69[1 /*15*/].f_1));
		}
		func_636();
	}
	else
	{
		if (PLAYER::PLAYER_PED_ID() == func_887())
		{
			PED::SET_PED_RESET_FLAG(func_887(), 311, 1);
		}
		func_635();
		if (GlobalFunc_2773(func_886()))
		{
			iVar0 = 2;
			while (iVar0 <= 17)
			{
				if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
				{
					if (PLAYER::PLAYER_PED_ID() == func_886())
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iVar0 /*44*/], Local_175[iVar0 /*44*/].f_18, 2f, 0, 0);
					}
					else
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar0 /*44*/], 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1947.f_20)
		{
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				func_633();
				func_632(&(Local_175[3 /*44*/]));
				func_632(&(Local_175[12 /*44*/]));
			}
			else if (func_631())
			{
				func_630();
			}
			else
			{
				func_627();
			}
		}
	}
}

void func_627()//Position - 0x6BBE1
{
	int iVar0;
	
	if (GlobalFunc_2773(func_887()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(func_887(), &iVar0, 1))
		{
			if (iVar0 != iLocal_1890)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1890, 1);
			}
		}
		PED::SET_PED_ACCURACY(func_887(), 100);
		switch (iLocal_1892)
		{
			case 2:
				switch (iLocal_1756)
				{
					case 0:
						if (!Local_1452[0 /*7*/].f_6)
						{
							iLocal_1890 = iLocal_1888;
							WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1888, 1);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.92709f, -2366.118f, 13.29613f, 2f, -1, 0.25f, 0, 1193033728);
							TASK::TASK_PLANT_BOMB(0, -83.92709f, -2366.118f, 13.29613f, 90f);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							iLocal_1756++;
						}
						break;
					
					case 1:
						if (Local_1452[0 /*7*/].f_6 == 1)
						{
							iLocal_1890 = iLocal_1889;
							GlobalFunc_703(&(Local_1452[0 /*7*/].f_1));
							iLocal_1744 = MISC::GET_GAME_TIMER();
							iLocal_1756++;
						}
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 1000)
						{
							Local_1452[0 /*7*/].f_6 = 1;
							iLocal_1756++;
						}
						break;
					
					case 3:
						break;
				}
				break;
			
			case 3:
				switch (iLocal_1756)
				{
					case 0:
						iLocal_1890 = iLocal_1889;
						if (func_629(func_887(), Local_3567[8 /*7*/]))
						{
							Local_1763 = { -95.5662f, -2375.627f, 13.2963f };
							fLocal_1766 = 87.6044f;
							iLocal_1756++;
						}
						else if (func_629(func_887(), Local_3567[9 /*7*/]) || func_629(func_887(), Local_3567[10 /*7*/]))
						{
							Local_1763 = { -124.3208f, -2373.903f, 8.3191f };
							fLocal_1766 = 87.6044f;
							iLocal_1756 = 3;
						}
						else
						{
							Local_1763 = { -132.6543f, -2377.249f, 8.3191f };
							fLocal_1766 = 358.0533f;
							TASK::REMOVE_COVER_POINT(uLocal_1709);
							uLocal_1709 = TASK::ADD_COVER_POINT(Local_1763, fLocal_1766, 0, 2, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1763, 2f, -1, 0.25f, 0, 1193033728);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1763, -1, 0, 0.25f, 1, 0, uLocal_1709, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
							iLocal_1756 = 4;
						}
						break;
					
					case 1:
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(Local_1763, fLocal_1766, 3, 0, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1763, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1763, -1, 0, 0.25f, 1, 0, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						iLocal_1756++;
						break;
					
					case 2:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[2 /*44*/]) || (!func_629(Local_175[2 /*44*/], Local_3567[3 /*7*/]) && GlobalFunc_5170()))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_887(), -124.5024f, -2374.039f, 8.3189f, 2f, -1, 0.25f, 0, 1193033728);
									GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_LADDER", 7, 0, 0, 0);
									iLocal_1759 = 0;
									iLocal_1760 = 0;
									iLocal_1756++;
								}
								else
								{
									if (GlobalFunc_2773(Local_175[2 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_175[2 /*44*/].f_1))
										{
											Local_175[2 /*44*/].f_1 = GlobalFunc_6797(Local_175[2 /*44*/], 1, 145);
										}
									}
									if (!iLocal_1760)
									{
										if (GlobalFunc_5170())
										{
											if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK", 7, 0, 0, 0))
											{
												iLocal_1760 = 1;
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -95.5662f, -2375.627f, 13.2963f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 3:
						Local_1763 = { -124.5024f, -2374.039f, 8.3189f };
						fLocal_1766 = 87.6044f;
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(Local_1763, fLocal_1766, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1763, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1763, -1, 0, 0.25f, 1, 1, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						iLocal_1756++;
						break;
					
					case 4:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[4 /*44*/]) || !func_629(Local_175[4 /*44*/], Local_3567[4 /*7*/]))
								{
									if (GlobalFunc_2773(Local_175[3 /*44*/]) && GlobalFunc_5170())
									{
										GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_STEPS1M", 7, 0, 0, 0);
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(func_887(), Local_175[3 /*44*/], 0f, -0.1f, 0f, 1f, -1, 1036831949, 1);
										iLocal_1759 = 0;
										iLocal_1797 = 0;
										iLocal_1756++;
									}
									else
									{
										iLocal_1759 = 0;
										iLocal_1756 = 6;
									}
								}
								else if (GlobalFunc_2773(Local_175[4 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_175[4 /*44*/].f_1))
									{
										Local_175[4 /*44*/].f_1 = GlobalFunc_6797(Local_175[4 /*44*/], 1, 145);
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -124.5024f, -2374.039f, 8.3189f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 5:
						if (func_628(&(Local_175[3 /*44*/])))
						{
							iLocal_1890 = iLocal_1889;
							GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GUY1M", 7, 0, 0, 0);
							iLocal_1756++;
						}
						break;
					
					case 6:
						Local_1763 = { -132.6543f, -2377.249f, 8.3191f };
						fLocal_1766 = 358.0533f;
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(Local_1763, fLocal_1766, 0, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1763, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1763, -1, 0, 0.25f, 1, 0, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						iLocal_1756++;
						break;
					
					case 7:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[4 /*44*/]) || !func_629(Local_175[4 /*44*/], Local_3567[4 /*7*/]))
								{
									iLocal_1890 = iLocal_1888;
									WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1888, 1);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -128.7057f, -2367.179f, 8.31891f, 2f, -1, 0.25f, 0, 1193033728);
									TASK::TASK_PLANT_BOMB(0, -128.6962f, -2366.828f, 9.2213f, 270f);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
									TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
									iLocal_1759 = 0;
									if (iLocal_1797)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[4 /*44*/], func_886(), 1))
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
										else
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
										}
									}
									iLocal_1797 = 0;
									iLocal_1756++;
								}
								else if (GlobalFunc_2773(Local_175[4 /*44*/]))
								{
									if (!iLocal_1797)
									{
										if (GlobalFunc_5170())
										{
											if (func_629(Local_175[8 /*44*/], Local_3567[5 /*7*/]))
											{
												if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_1797 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -132.6543f, -2377.249f, 8.3191f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 8:
						if (Local_1452[1 /*7*/].f_6 == 1)
						{
							iLocal_1890 = iLocal_1889;
							GlobalFunc_703(&(Local_1452[1 /*7*/].f_1));
							iLocal_1744 = MISC::GET_GAME_TIMER();
							iLocal_1756++;
						}
						break;
					
					case 9:
						if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 1000)
						{
							Local_1452[1 /*7*/].f_6 = 1;
							iLocal_1756++;
						}
						break;
					
					case 10:
						break;
				}
				break;
			
			case 4:
				switch (iLocal_1756)
				{
					case 0:
						iLocal_1890 = iLocal_1889;
						if ((func_629(func_887(), Local_3567[8 /*7*/]) || func_629(func_887(), Local_3567[9 /*7*/])) || func_629(func_887(), Local_3567[10 /*7*/]))
						{
							iLocal_1756++;
						}
						else if (func_629(func_887(), Local_3567[11 /*7*/]))
						{
							iLocal_1756 = 3;
						}
						else if (func_629(func_887(), Local_3567[12 /*7*/]))
						{
							Local_1763 = { -161.0396f, -2377.504f, 8.3191f };
							fLocal_1766 = 356.7672f;
							iLocal_1756 = 5;
						}
						else if (func_629(func_887(), Local_3567[13 /*7*/]))
						{
							Local_1763 = { -177.2718f, -2377.504f, 8.3191f };
							iLocal_1756 = 7;
						}
						else
						{
							func_629(func_887(), Local_3567[14 /*7*/]);
							iLocal_1756 = 9;
						}
						break;
					
					case 1:
						Local_1763 = { -132.0189f, -2376.58f, 8.31907f };
						fLocal_1766 = 89.7021f;
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(Local_1763, fLocal_1766, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1763, 2f, -1, 0.7f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1763, -1, 0, 0.25f, 1, 1, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						iLocal_1756++;
						break;
					
					case 2:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[8 /*44*/]) || !func_629(Local_175[8 /*44*/], Local_3567[5 /*7*/]))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_887(), -144.5449f, -2377.504f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
									iLocal_1759 = 0;
									if (iLocal_1797)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[8 /*44*/], func_886(), 1))
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
										else
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
										}
									}
									iLocal_1797 = 0;
									iLocal_1756++;
								}
								else if (GlobalFunc_2773(Local_175[8 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_175[8 /*44*/].f_1))
									{
										Local_175[8 /*44*/].f_1 = GlobalFunc_6797(Local_175[8 /*44*/], 1, 145);
									}
									if (!iLocal_1797)
									{
										if (GlobalFunc_5170())
										{
											if (func_629(Local_175[8 /*44*/], Local_3567[5 /*7*/]))
											{
												if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_1797 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -132.0189f, -2376.58f, 8.31907f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 3:
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(-144.5449f, -2377.504f, 8.3191f, 354.7062f, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -144.5449f, -2377.504f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -144.5449f, -2377.504f, 8.3191f, -1, 0, 0.25f, 1, 1, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_1759 = 0;
						iLocal_1756++;
						break;
					
					case 4:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[8 /*44*/]) || !func_629(Local_175[8 /*44*/], Local_3567[5 /*7*/]))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_887(), -161.0396f, -2377.504f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
									iLocal_1759 = 0;
									if (iLocal_1797)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[8 /*44*/], func_886(), 1))
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_1797 = 0;
									iLocal_1756++;
								}
								else if (GlobalFunc_2773(Local_175[8 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_175[8 /*44*/].f_1))
									{
										Local_175[8 /*44*/].f_1 = GlobalFunc_6797(Local_175[8 /*44*/], 1, 145);
									}
									if (!iLocal_1797)
									{
										if (GlobalFunc_5170())
										{
											if (func_629(Local_175[8 /*44*/], Local_3567[5 /*7*/]))
											{
												if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_1797 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -144.5449f, -2377.504f, 8.3191f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 5:
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(-161.0396f, -2377.504f, 8.3191f, 354.7062f, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -161.0396f, -2377.504f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -161.0396f, -2377.504f, 8.3191f, -1, 0, 0.25f, 1, 1, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_1759 = 0;
						iLocal_1797 = 0;
						iLocal_1756++;
						break;
					
					case 6:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[10 /*44*/]) || !func_629(Local_175[10 /*44*/], Local_3567[6 /*7*/]))
								{
									if (!iLocal_1752)
									{
										AUDIO::TRIGGER_MUSIC_EVENT("dh2a_double_guards");
										iLocal_1752 = 1;
									}
									WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_887(), -177.2718f, -2377.504f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
									if (iLocal_1797)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[10 /*44*/], func_886(), 1))
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_1797 = 0;
									iLocal_1759 = 0;
									iLocal_1756++;
								}
								else if (GlobalFunc_2773(Local_175[10 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_175[10 /*44*/].f_1))
									{
										Local_175[10 /*44*/].f_1 = GlobalFunc_6797(Local_175[10 /*44*/], 1, 145);
									}
									if (!iLocal_1797)
									{
										if (GlobalFunc_5170())
										{
											if (func_629(Local_175[10 /*44*/], Local_3567[6 /*7*/]))
											{
												if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_1797 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -161.0396f, -2377.504f, 8.3191f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 7:
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(-177.2718f, -2377.504f, 8.3191f, 354.7062f, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -177.2718f, -2377.504f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -177.2718f, -2377.504f, 8.3191f, -1, 0, 0.25f, 1, 1, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_1759 = 0;
						iLocal_1756++;
						break;
					
					case 8:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[13 /*44*/]) || !func_629(Local_175[13 /*44*/], Local_3567[7 /*7*/]))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_887(), -187.2977f, -2374.778f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
									if (iLocal_1797)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[13 /*44*/], func_886(), 1))
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_1797 = 0;
									iLocal_1759 = 0;
									iLocal_1756++;
								}
								else
								{
									if (GlobalFunc_2773(Local_175[11 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_175[11 /*44*/].f_1))
										{
											Local_175[11 /*44*/].f_1 = GlobalFunc_6797(Local_175[11 /*44*/], 1, 145);
										}
									}
									if (GlobalFunc_2773(Local_175[13 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_175[13 /*44*/].f_1))
										{
											Local_175[13 /*44*/].f_1 = GlobalFunc_6797(Local_175[13 /*44*/], 1, 145);
										}
										if (!iLocal_1797)
										{
											if (GlobalFunc_5170())
											{
												if (func_629(Local_175[13 /*44*/], Local_3567[7 /*7*/]))
												{
													if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
													{
														iLocal_1797 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -177.2718f, -2377.504f, 8.3191f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 9:
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(-187.2977f, -2374.778f, 8.3191f, 354.7062f, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -187.2977f, -2374.778f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -187.2977f, -2374.778f, 8.3191f, -1, 0, 0.25f, 1, 1, iLocal_1709, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_1759 = 0;
						iLocal_1756++;
						break;
					
					case 10:
						if (iLocal_1759 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1759) > 1000)
							{
								if (!GlobalFunc_2773(Local_175[13 /*44*/]) || !func_629(Local_175[13 /*44*/], Local_3567[7 /*7*/]))
								{
									iLocal_1890 = iLocal_1888;
									WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1888, 1);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -188.1089f, -2365.51f, 8.3194f, 1f, -1, 0.25f, 0, 1193033728);
									TASK::TASK_PLANT_BOMB(0, -188.1089f, -2365.51f, 8.3194f, 270f);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
									TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
									if (iLocal_1797)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[13 /*44*/], func_886(), 1))
										{
											GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_1759 = 0;
									iLocal_1797 = 0;
									iLocal_1756++;
								}
								else
								{
									if (GlobalFunc_2773(Local_175[11 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_175[11 /*44*/].f_1))
										{
											Local_175[11 /*44*/].f_1 = GlobalFunc_6797(Local_175[11 /*44*/], 1, 145);
										}
									}
									if (GlobalFunc_2773(Local_175[13 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_175[13 /*44*/].f_1))
										{
											Local_175[13 /*44*/].f_1 = GlobalFunc_6797(Local_175[13 /*44*/], 1, 145);
										}
										if (!iLocal_1797)
										{
											if (GlobalFunc_5170())
											{
												if (func_629(Local_175[13 /*44*/], Local_3567[7 /*7*/]))
												{
													if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
													{
														iLocal_1797 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_887(), -187.2977f, -2374.778f, 8.3191f, 2f, 2f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(func_887(), 0))
						{
							iLocal_1759 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 11:
						if (Local_1452[2 /*7*/].f_6 == 1)
						{
							iLocal_1890 = iLocal_1889;
							GlobalFunc_703(&(Local_1452[2 /*7*/].f_1));
							iLocal_1744 = MISC::GET_GAME_TIMER();
							iLocal_1756++;
						}
						break;
					
					case 12:
						if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 1000)
						{
							Local_1452[2 /*7*/].f_6 = 1;
							iLocal_1756++;
						}
						break;
					
					case 13:
						break;
				}
				break;
			
			case 5:
				switch (iLocal_1756)
				{
					case 0:
						iLocal_1890 = iLocal_1889;
						if (iLocal_1892 == 5)
						{
							TASK::REMOVE_COVER_POINT(iLocal_1709);
							iLocal_1709 = TASK::ADD_COVER_POINT(-193.7045f, -2376.395f, 8.3186f, 88.3441f, 1, 2, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -193.7045f, -2376.395f, 8.3186f, 2f, -1, 0.25f, 0, 1193033728);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -193.7045f, -2376.395f, 8.3186f, -1, 0, 0.25f, 1, 1, 0, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
							iLocal_1756++;
						}
						break;
					
					case 1:
						if (GlobalFunc_2773(Local_175[12 /*44*/]))
						{
							if (GlobalFunc_5170() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_STEPS2M", 7, 0, 0, 0);
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(func_887(), Local_175[12 /*44*/], 0f, 0.25f, 0f, 2f, -1, 1036831949, 1);
								iLocal_1757 = 0;
								iLocal_1756++;
							}
						}
						else
						{
							iLocal_1756 = 3;
						}
						break;
					
					case 2:
						if (func_628(&(Local_175[12 /*44*/])) && (MISC::GET_GAME_TIMER() - iLocal_1758) > 2000)
						{
							iLocal_1890 = iLocal_1889;
							GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GUY2M", 7, 0, 0, 0);
							iLocal_1756++;
						}
						break;
					
					case 3:
						TASK::REMOVE_COVER_POINT(iLocal_1709);
						iLocal_1709 = TASK::ADD_COVER_POINT(-210.9928f, -2375.654f, 8.3191f, 88.3441f, 1, 2, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -210.9928f, -2375.654f, 8.3191f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -210.9928f, -2375.654f, 8.3191f, -1, 0, 0.25f, 1, 1, 0, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
						iLocal_1756++;
						break;
					
					case 4:
						if (!GlobalFunc_2773(Local_175[15 /*44*/]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1452[3 /*7*/].f_2, 2f, -1, 0.25f, 0, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
							TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
							GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
							iLocal_1756++;
						}
						else if (!HUD::DOES_BLIP_EXIST(Local_175[15 /*44*/].f_1))
						{
							Local_175[15 /*44*/].f_1 = GlobalFunc_6797(Local_175[15 /*44*/], 1, 145);
						}
						break;
				}
				break;
		}
		PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
	}
}

int func_628(var uParam0)//Position - 0x6D36A
{
	if (GlobalFunc_2773(*uParam0))
	{
		switch (iLocal_1757)
		{
			case 0:
				if (PED::IS_PED_IN_COMBAT(*uParam0, 0) || uParam0->f_27 != 0)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_887());
					iLocal_1890 = iLocal_1889;
					TASK::TASK_COMBAT_PED(func_887(), *uParam0, 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 2.2f, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 27, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 23, 1);
					iLocal_1757++;
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(func_887(), *uParam0, 1f, 1f, 1f, 0, 1, 0))
				{
					iLocal_1890 = joaat("weapon_knife");
					uParam0->f_40 = 1;
					iLocal_1741 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*uParam0), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_887(), iLocal_1741, "missheistdocks2a", "stabbing_guard_michael", 4f, -8f, 0, 0, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, iLocal_1741, "missheistdocks2a", "stabbing_guard_guard", 8f, -8f, 0, 0, 1148846080, 0);
					iLocal_1757++;
				}
				break;
			
			case 1:
				if (PED::IS_PED_IN_COMBAT(*uParam0, 0) || uParam0->f_27 != 0)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, func_887(), 1))
					{
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
						iLocal_1757 = 0;
						iLocal_1768 = 1;
						return 1;
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1741) > 0.99f)
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_1741);
					ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
					iLocal_1768 = 1;
					iLocal_1757 = 0;
					return 1;
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_1758) > 1000)
				{
					iLocal_1757 = 0;
					return 1;
				}
				break;
		}
	}
	else
	{
		return 1;
		iLocal_1757 = 0;
		iLocal_1758 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

int func_629(int iParam0, struct<7> Param1)//Position - 0x6D522
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param1.f_3, Param1.f_6, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_630()//Position - 0x6D55E
{
	int iVar0;
	
	if (!GlobalFunc_2773(func_887()))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(func_887(), &iVar0, 1))
	{
		if (iVar0 != iLocal_1889)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
		}
	}
	if (!PED::IS_PED_IN_COMBAT(func_887(), 0))
	{
		TASK::CLEAR_PED_TASKS(func_887());
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_887(), 20f, 0);
	}
}

int func_631()//Position - 0x6D5BA
{
	int iVar0;
	
	iVar0 = 2;
	while (iVar0 <= 17)
	{
		if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
		{
			if (PED::IS_PED_IN_COMBAT(Local_175[iVar0 /*44*/], func_887()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_632(var uParam0)//Position - 0x6D5F8
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1741))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missheistdocks2a", "stabbing_guard_guard", 2))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1741) > 0.99f)
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_1741);
					ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
					iLocal_1768 = 1;
					iLocal_1757 = 0;
				}
			}
		}
	}
}

void func_633()//Position - 0x6D65D
{
	if (!iLocal_1866)
	{
		if (GlobalFunc_2773(iLocal_1869))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_887(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_1869, 1)) < 121f)
			{
				if (iLocal_1813 > 0)
				{
					if (PED::IS_PED_IN_COMBAT(iLocal_1869, func_887()))
					{
						if (MISC::GET_GAME_TIMER() > (iLocal_1813 - 2000))
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_1869))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_886(), iLocal_1869, 17))
								{
									Local_1870 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1869, 0f, 0f, 0.4f) };
									TASK::TASK_SHOOT_AT_COORD(func_886(), Local_1870, 1000, 0);
									PED::EXPLODE_PED_HEAD(iLocal_1869, joaat("weapon_sniperrifle"));
									GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_3C", 7, 0, 0, 0);
									iLocal_1867 = MISC::GET_GAME_TIMER();
									iLocal_1866 = 1;
									iLocal_1813 = -1;
								}
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_1813)
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_1869))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_886(), iLocal_1869, 17))
							{
								Local_1870 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1869, 0f, 0f, 0.4f) };
								TASK::TASK_SHOOT_AT_COORD(func_886(), Local_1870, 1000, 0);
								PED::EXPLODE_PED_HEAD(iLocal_1869, joaat("weapon_sniperrifle"));
								GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_3C", 7, 0, 0, 0);
								iLocal_1867 = MISC::GET_GAME_TIMER();
								iLocal_1866 = 1;
								iLocal_1813 = -1;
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_1869))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1741))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1869, "missheistdocks2a", "stabbing_guard_guard", 2))
						{
							GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0);
							iLocal_1813 = MISC::GET_GAME_TIMER() + 4500;
						}
					}
				}
			}
			else
			{
				iLocal_1813 = -1;
			}
		}
		else
		{
			PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(func_887(), 1), 50f, 0, 1, &iLocal_1869, 0, 1, -1);
			iLocal_1813 = -1;
		}
	}
	if (GlobalFunc_2773(Local_175[3 /*44*/]))
	{
		if (func_634(Local_3567[0 /*7*/]) && GlobalFunc_2773(func_887()))
		{
			if ((!ENTITY::IS_ENTITY_OCCLUDED(Local_175[3 /*44*/]) && !iLocal_1829) && GlobalFunc_5170())
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1741) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_175[3 /*44*/], "missheistdocks2a", "stabbing_guard_guard", 2))
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_STEPS1F", 7, 0, 0, 0))
					{
						iLocal_1829 = 1;
					}
				}
			}
			if ((iLocal_1829 && GlobalFunc_5170()) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_886(), Local_175[3 /*44*/], 17))
			{
				iLocal_1869 = Local_175[3 /*44*/];
				Local_1870 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1869, 0f, 0f, 0.4f) };
				iLocal_1866 = 1;
				iLocal_1867 = MISC::GET_GAME_TIMER();
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_175[3 /*44*/], 1, 10f, 0f, 0f, 1f, 0f, 0f, 0, 0, 1, 1, 0, 1);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-125.6115f, -2380.908f, 12.046f, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[3 /*44*/], 0f, 0f, 0.4f), 1000, 1, iLocal_1887, 0, 1, 1, -1082130432);
				PED::EXPLODE_PED_HEAD(Local_175[3 /*44*/], joaat("weapon_sniperrifle"));
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GUY1F", 7, 0, 0, 0);
				iLocal_1768 = 1;
				iLocal_1829 = 0;
			}
		}
	}
	if (GlobalFunc_2773(Local_175[11 /*44*/]))
	{
		if (func_634(Local_3567[1 /*7*/]) && GlobalFunc_2773(func_887()))
		{
			if ((!ENTITY::IS_ENTITY_OCCLUDED(Local_175[11 /*44*/]) && !iLocal_1829) && GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BALC", 7, 0, 0, 0))
				{
					iLocal_1829 = 1;
				}
			}
			if ((iLocal_1829 && GlobalFunc_5170()) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_886(), Local_175[11 /*44*/], 17))
			{
				iLocal_1869 = Local_175[11 /*44*/];
				Local_1870 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1869, 0f, 0f, 0.4f) };
				iLocal_1866 = 1;
				iLocal_1867 = MISC::GET_GAME_TIMER();
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-143.1764f, -2487.5f, 45.44402f, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[11 /*44*/], 0f, 0f, 0.4f), 1000, 1, iLocal_1887, 0, 1, 1, -1082130432);
				PED::EXPLODE_PED_HEAD(Local_175[11 /*44*/], joaat("weapon_sniperrifle"));
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_3D", 7, 0, 0, 0);
				iLocal_1768 = 1;
				iLocal_1829 = 0;
			}
		}
	}
	if (GlobalFunc_2773(Local_175[12 /*44*/]))
	{
		if (func_634(Local_3567[2 /*7*/]) && GlobalFunc_2773(func_887()))
		{
			if ((!ENTITY::IS_ENTITY_OCCLUDED(Local_175[12 /*44*/]) && !iLocal_1829) && GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_STEPS2F", 7, 0, 0, 0))
				{
					iLocal_1829 = 1;
				}
			}
			if ((iLocal_1829 && GlobalFunc_5170()) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_886(), Local_175[12 /*44*/], 17))
			{
				iLocal_1869 = Local_175[12 /*44*/];
				Local_1870 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1869, 0f, 0f, 0.4f) };
				iLocal_1866 = 1;
				iLocal_1867 = MISC::GET_GAME_TIMER();
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_175[12 /*44*/], 1, 10f, 0f, 0f, 1f, 0f, 0f, 0, 0, 1, 1, 0, 1);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-204.6591f, -2381.002f, 11.9054f, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[12 /*44*/], 0f, 0f, 0.4f), 1000, 1, iLocal_1887, 0, 1, 1, -1082130432);
				PED::EXPLODE_PED_HEAD(Local_175[12 /*44*/], joaat("weapon_sniperrifle"));
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_3A", 7, 0, 0, 0);
				iLocal_1768 = 1;
				iLocal_1829 = 0;
			}
		}
	}
	if (iLocal_1866 && (MISC::GET_GAME_TIMER() - iLocal_1867) > 1000)
	{
		iLocal_1866 = 0;
	}
}

int func_634(struct<7> Param0)//Position - 0x6DBB2
{
	return func_629(PLAYER::PLAYER_PED_ID(), Param0);
}

void func_635()//Position - 0x6DBC6
{
	int iVar0;
	int iVar1[29];
	
	iVar0 = 2;
	while (iVar0 <= 17)
	{
		if (Local_175[iVar0 /*44*/].f_43)
		{
			iVar1[iVar0] = 1;
		}
		iVar0++;
	}
	if (func_629(func_887(), Local_3567[8 /*7*/]))
	{
		iVar0 = 2;
		while (iVar0 <= 3)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_629(func_887(), Local_3567[9 /*7*/]))
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_629(func_887(), Local_3567[10 /*7*/]))
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_629(func_887(), Local_3567[11 /*7*/]))
	{
		iVar0 = 3;
		while (iVar0 <= 8)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_629(func_887(), Local_3567[12 /*7*/]))
	{
		iVar0 = 3;
		while (iVar0 <= 10)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_629(func_887(), Local_3567[13 /*7*/]))
	{
		iVar0 = 8;
		while (iVar0 <= 11)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
		iVar1[13] = 1;
		iVar1[14] = 1;
		iVar1[15] = 1;
	}
	if (func_629(func_887(), Local_3567[14 /*7*/]))
	{
		iVar0 = 9;
		while (iVar0 <= 11)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
		iVar1[13] = 1;
		iVar1[14] = 1;
		iVar1[15] = 1;
	}
	if (func_629(func_887(), Local_3567[15 /*7*/]))
	{
		iVar0 = 9;
		while (iVar0 <= 16)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_629(func_887(), Local_3567[16 /*7*/]))
	{
		iVar0 = 12;
		while (iVar0 <= 17)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	iVar0 = 2;
	while (iVar0 <= 17)
	{
		if (iVar1[iVar0])
		{
			if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_175[iVar0 /*44*/].f_1))
				{
					Local_175[iVar0 /*44*/].f_1 = GlobalFunc_6797(Local_175[iVar0 /*44*/], 1, 145);
				}
				else if (PLAYER::PLAYER_PED_ID() == func_887())
				{
					HUD::SET_BLIP_SHOW_CONE(Local_175[iVar0 /*44*/].f_1, 1);
				}
				else
				{
					HUD::SET_BLIP_SHOW_CONE(Local_175[iVar0 /*44*/].f_1, 0);
				}
			}
			else
			{
				GlobalFunc_703(&(Local_175[iVar0 /*44*/].f_1));
			}
		}
		else
		{
			GlobalFunc_703(&(Local_175[iVar0 /*44*/].f_1));
		}
		iVar0++;
	}
}

void func_636()//Position - 0x6DE59
{
	int iVar0;
	
	if (!Local_1452[1 /*7*/].f_6 && func_629(func_887(), Local_3567[8 /*7*/]))
	{
		if (iLocal_1815 < 2)
		{
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
				{
					switch (iLocal_1815)
					{
						case 0:
							if (func_638(iVar0, -129.0482f, -2361.196f, 8.3191f, 356.6929f, -128.6367f, -2357.487f, 8.3191f))
							{
								iLocal_1818[iLocal_1815] = iVar0;
								iLocal_1815++;
							}
							break;
						
						case 1:
							if (func_638(iVar0, -128.9855f, -2362.312f, 8.3191f, 189.357f, -128.6614f, -2373.987f, 8.3191f))
							{
								iLocal_1818[iLocal_1815] = iVar0;
								iLocal_1815++;
							}
							break;
						}
				}
				iVar0++;
			}
		}
	}
	else if (func_629(func_887(), Local_3567[10 /*7*/]))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1815)
		{
			func_637(iLocal_1818[iVar0]);
			iVar0++;
		}
	}
	if (((!Local_1452[2 /*7*/].f_6 && !func_629(func_887(), Local_3567[14 /*7*/])) && !func_629(func_887(), Local_3567[15 /*7*/])) && !func_629(func_887(), Local_3567[16 /*7*/]))
	{
		if (iLocal_1816 < 3)
		{
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
				{
					switch (iLocal_1816)
					{
						case 0:
							if (func_638(iVar0, -189.0334f, -2360.926f, 8.3191f, 7.7789f, -188.0162f, -2373.903f, 8.3191f))
							{
								iLocal_1821[iLocal_1816] = iVar0;
								iLocal_1816++;
							}
							break;
						
						case 1:
							if (func_638(iVar0, -188.9252f, -2362.543f, 8.3191f, 166.6817f, -188.0314f, -2368.537f, 8.3191f))
							{
								iLocal_1821[iLocal_1816] = iVar0;
								iLocal_1816++;
							}
							break;
						
						case 2:
							if (func_638(iVar0, -190.5101f, -2362.828f, 8.3191f, 150.3902f, -178.0869f, -2355.4f, 8.3191f))
							{
								iLocal_1821[iLocal_1816] = iVar0;
								iLocal_1816++;
							}
							break;
						}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1816)
		{
			func_637(iLocal_1821[iVar0]);
			iVar0++;
		}
	}
	if (!func_629(func_887(), Local_3567[16 /*7*/]))
	{
		if (iLocal_1817 < 3)
		{
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
				{
					switch (iLocal_1817)
					{
						case 0:
							if (func_638(iVar0, -221.0331f, -2376.231f, 8.3192f, 236.8918f, -209.0507f, -2376.477f, 8.3192f))
							{
								iLocal_1825[iLocal_1817] = iVar0;
								iLocal_1817++;
							}
							break;
						
						case 1:
							if (func_638(iVar0, -222.0928f, -2375.888f, 12.3329f, 188.8545f, -221.2283f, -2377.743f, 12.3329f))
							{
								iLocal_1825[iLocal_1817] = iVar0;
								iLocal_1817++;
							}
							break;
						
						case 2:
							if (func_638(iVar0, -221.7503f, -2355.773f, 8.3192f, 356.4612f, -207.132f, -2355.456f, 8.3191f))
							{
								iLocal_1825[iLocal_1817] = iVar0;
								iLocal_1817++;
							}
							break;
						}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1817)
		{
			func_637(iLocal_1825[iVar0]);
			iVar0++;
		}
	}
}

void func_637(int iParam0)//Position - 0x6E22B
{
	if (!GlobalFunc_2773(Local_175[iParam0 /*44*/]))
	{
		return;
	}
	if (PED::GET_PED_COMBAT_MOVEMENT(Local_175[iParam0 /*44*/]) == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_175[iParam0 /*44*/], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 50, 1);
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iParam0 /*44*/], 0);
	}
	if (!PED::IS_PED_IN_COMBAT(Local_175[iParam0 /*44*/], 0))
	{
		if (GlobalFunc_2773(func_887()))
		{
			TASK::TASK_COMBAT_PED(Local_175[iParam0 /*44*/], func_887(), 0, 16);
		}
	}
}

int func_638(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5)//Position - 0x6E2A0
{
	GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("s_m_y_blackops_01"), Param1, 1))
	{
		func_581(&(Local_175[iParam0 /*44*/]), joaat("s_m_y_blackops_01"), Param1, fParam4, 0);
	}
	else
	{
		return 0;
	}
	if (GlobalFunc_2773(Local_175[iParam0 /*44*/]))
	{
		Local_175[iParam0 /*44*/].f_35 = 1;
		PED::SET_PED_FLEE_ATTRIBUTES(Local_175[iParam0 /*44*/], 512, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iParam0 /*44*/], 0, 1);
		PED::SET_PED_COMBAT_MOVEMENT(Local_175[iParam0 /*44*/], 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_175[iParam0 /*44*/], iLocal_1886, -1, 1, 1);
		PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Local_175[iParam0 /*44*/], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_175[iParam0 /*44*/], iLocal_1743);
		PED::SET_PED_AS_ENEMY(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_DIES_INSTANTLY_IN_WATER(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_MONEY(Local_175[iParam0 /*44*/], 0);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_175[iParam0 /*44*/], 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_175[iParam0 /*44*/], 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_HEARING_RANGE(Local_175[iParam0 /*44*/], 200f);
		PED::SET_PED_SEEING_RANGE(Local_175[iParam0 /*44*/], 300f);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_175[iParam0 /*44*/], 1);
		PED::SET_PED_CONFIG_FLAG(Local_175[iParam0 /*44*/], 118, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_175[iParam0 /*44*/], Param5, 10f, 1, 0);
		TASK::TASK_COMBAT_PED(Local_175[iParam0 /*44*/], func_887(), 0, 16);
	}
	return 1;
}

void func_639()//Position - 0x6E413
{
	if (GlobalFunc_2773(func_886()))
	{
		if (!iLocal_1866)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1813)
			{
				PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(func_887(), 1), 20f, 0, 1, &iLocal_1869, 0, 1, -1);
				if (GlobalFunc_2773(iLocal_1869))
				{
					Local_1870 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1869, 0f, 0f, 0.4f) };
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), Local_1870, 1) < 15f)
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_1869))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_886(), iLocal_1869, 17))
							{
								TASK::TASK_SHOOT_AT_COORD(func_886(), Local_1870, 1000, 0);
								PED::EXPLODE_PED_HEAD(iLocal_1869, joaat("weapon_sniperrifle"));
								GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_4C", 7, 0, 0, 0);
								iLocal_1867 = MISC::GET_GAME_TIMER();
								iLocal_1813 = MISC::GET_GAME_TIMER() + 4500;
								iLocal_1866 = 1;
							}
						}
					}
				}
				else if (!iLocal_1796)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_1A", 7, 0, 0, 0))
						{
							iLocal_1796 = 1;
						}
					}
				}
			}
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(func_886(), iLocal_1887, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(func_886(), iLocal_1887, 200, 1, 1);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_886(), iLocal_1887, joaat("component_at_scope_max"));
		}
		else if (!WEAPON::GET_CURRENT_PED_WEAPON(func_886(), &iLocal_1887, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_886(), iLocal_1887, 1);
		}
	}
	if (iLocal_1866 && (MISC::GET_GAME_TIMER() - iLocal_1867) > 1000)
	{
		iLocal_1866 = 0;
	}
}

void func_640()//Position - 0x6E582
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (GlobalFunc_2773(func_887()))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 13, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_887(), 30, 0);
		PED::SET_PED_COMBAT_ABILITY(func_887(), 2);
		PED::SET_PED_COMBAT_MOVEMENT(func_887(), 2);
		PED::SET_PED_COMBAT_RANGE(func_887(), 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_887(), 1);
		if (!iLocal_1761)
		{
			if (GlobalFunc_2773(func_887()))
			{
				if (ENTITY::GET_ENTITY_HEALTH(func_887()) < 120)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_DIE_NS", 8, 0, 0, 0))
						{
							iLocal_1761 = 1;
						}
					}
				}
			}
		}
		if (!iLocal_1762)
		{
			if (func_631())
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_HLP_NS", 7, 0, 0, 0))
					{
						iLocal_1762 = 1;
					}
				}
			}
		}
		else if (!func_631())
		{
			iLocal_1762 = 0;
		}
		if (iLocal_1892 == 2)
		{
			if (Local_1452[0 /*7*/].f_6 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -86.0638f, -2366.25f, 13.8644f, 10f, 0, 0);
				if (func_631())
				{
					if (!PED::IS_PED_IN_COMBAT(func_887(), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_887(), WEAPON::GET_BEST_PED_WEAPON(func_887(), 0), 1);
						TASK::CLEAR_PED_TASKS(func_887());
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_887(), 40f, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_887(), 242628503) > 1)
				{
					TASK::CLEAR_PED_TASKS(func_887());
					WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1888, 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.92709f, -2366.118f, 13.29613f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_PLANT_BOMB(0, -83.92709f, -2366.118f, 13.29613f, 90f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -126.6504f, -2375.792f, 9.6284f, 10f, 0, 0);
			}
		}
		else if (iLocal_1892 == 3)
		{
			if (Local_1452[1 /*7*/].f_6 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -126.6504f, -2375.792f, 9.6284f, 10f, 0, 0);
				if (func_631())
				{
					if (!PED::IS_PED_IN_COMBAT(func_887(), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_887(), WEAPON::GET_BEST_PED_WEAPON(func_887(), 0), 1);
						TASK::CLEAR_PED_TASKS(func_887());
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_887(), 40f, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_887(), 242628503) > 1)
				{
					TASK::CLEAR_PED_TASKS(func_887());
					WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1888, 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -128.7057f, -2367.179f, 8.31891f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_PLANT_BOMB(0, -128.6962f, -2366.828f, 9.2213f, 270f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -186.4871f, -2375.806f, 9.7455f, 10f, 0, 0);
			}
		}
		else if (iLocal_1892 == 4)
		{
			if (Local_1452[2 /*7*/].f_6 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -186.4871f, -2375.806f, 9.7455f, 10f, 0, 0);
				if (func_631())
				{
					if (!PED::IS_PED_IN_COMBAT(func_887(), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_887(), WEAPON::GET_BEST_PED_WEAPON(func_887(), 0), 1);
						TASK::CLEAR_PED_TASKS(func_887());
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_887(), 40f, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_887(), 242628503) > 1)
				{
					TASK::CLEAR_PED_TASKS(func_887());
					WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1888, 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -188.1089f, -2365.51f, 8.3194f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_PLANT_BOMB(0, -188.1089f, -2365.51f, 8.3194f, 270f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -211.9178f, -2377.058f, 9.1952f, 10f, 0, 0);
			}
		}
		else if (iLocal_1892 == 5)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -216.4087f, -2377.58f, 8.6987f, 10f, 0, 0);
			if (func_631())
			{
				if (!PED::IS_PED_IN_COMBAT(func_887(), 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_887(), WEAPON::GET_BEST_PED_WEAPON(func_887(), 0), 1);
					TASK::CLEAR_PED_TASKS(func_887());
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_887(), 40f, 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(func_887(), 242628503) > 1)
			{
				TASK::CLEAR_PED_TASKS(func_887());
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1452[3 /*7*/].f_2, 2f, -1, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(func_887(), uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
			}
		}
		else if (iLocal_1892 == 6)
		{
			iVar0 = 0;
			fVar1 = 15f;
			iVar2 = 0;
			while (iVar2 <= 25)
			{
				if (GlobalFunc_2773(Local_175[iVar2 /*44*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), ENTITY::GET_ENTITY_COORDS(Local_175[iVar2 /*44*/], 1), 1) < fVar1)
					{
						iVar0 = Local_175[iVar2 /*44*/];
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), ENTITY::GET_ENTITY_COORDS(Local_175[iVar2 /*44*/], 1), 1);
					}
				}
				iVar2++;
			}
			if (fVar1 < 15f)
			{
				if (GlobalFunc_2773(iVar0))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 2f, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1f, 0, 0);
			}
		}
		else
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_887(), -216.4087f, -2377.58f, 8.6987f, 2f, 0, 0);
		}
	}
}

void func_641()//Position - 0x6EB96
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (GlobalFunc_2773(func_887()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -116f, -2366f, 12f, 1);
		iVar1 = 0;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -154f, -2366f, 12f, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -154f, -2366f, 12f, 1);
			iVar1 = 1;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -186f, -2366f, 12f, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -186f, -2366f, 12f, 1);
			iVar1 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -223f, -2365f, 12f, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -223f, -2365f, 12f, 1);
			iVar1 = 3;
		}
		iVar3 = 0;
		while (iVar3 <= 17)
		{
			if (GlobalFunc_2773(Local_175[iVar3 /*44*/]))
			{
				if (!Local_175[iVar3 /*44*/].f_35)
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
					if (PED::GET_PED_COMBAT_MOVEMENT(Local_175[iVar3 /*44*/]) == 1)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar3 /*44*/], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_175[iVar3 /*44*/], 2);
					}
					if (PED::GET_PED_COMBAT_RANGE(Local_175[iVar3 /*44*/]) != 0)
					{
						PED::SET_PED_COMBAT_RANGE(Local_175[iVar3 /*44*/], 0);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_175[iVar3 /*44*/].f_1))
					{
						Local_175[iVar3 /*44*/].f_1 = GlobalFunc_6797(Local_175[iVar3 /*44*/], 1, 145);
					}
					else
					{
						HUD::SET_BLIP_SHOW_CONE(Local_175[iVar3 /*44*/].f_1, 0);
					}
					if (PLAYER::PLAYER_PED_ID() == func_887())
					{
						if (PED::IS_PED_IN_COMBAT(Local_175[iVar3 /*44*/], func_886()))
						{
							TASK::CLEAR_PED_TASKS(Local_175[iVar3 /*44*/]);
						}
					}
					if (!PED::IS_PED_IN_COMBAT(Local_175[iVar3 /*44*/], 0))
					{
						switch (iVar1)
						{
							case 0:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), Local_175[iVar3 /*44*/].f_6, 1);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_175[iVar3 /*44*/], Local_175[iVar3 /*44*/].f_6, 2f, -1, 0.25f, 0, 1193033728);
									}
									if (iVar3 == 17)
									{
										if (fVar2 < 2f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 35f)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar3 /*44*/], 50, 1);
											TASK::TASK_COMBAT_PED(Local_175[iVar3 /*44*/], func_887(), 134217728, 16);
										}
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_175[iVar3 /*44*/], func_887()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar3 /*44*/], 50, 1);
									TASK::TASK_COMBAT_PED(Local_175[iVar3 /*44*/], func_887(), 134217728, 16);
								}
								break;
							
							case 1:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), Local_175[iVar3 /*44*/].f_9, 1);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_175[iVar3 /*44*/], Local_175[iVar3 /*44*/].f_9, 2f, -1, 0.25f, 0, 1193033728);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_175[iVar3 /*44*/], func_887()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar3 /*44*/], 50, 1);
									TASK::TASK_COMBAT_PED(Local_175[iVar3 /*44*/], func_887(), 134217728, 16);
								}
								break;
							
							case 2:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), Local_175[iVar3 /*44*/].f_12, 1);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_175[iVar3 /*44*/], Local_175[iVar3 /*44*/].f_12, 2f, -1, 0.25f, 0, 1193033728);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_175[iVar3 /*44*/], func_887()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar3 /*44*/], 50, 1);
									TASK::TASK_COMBAT_PED(Local_175[iVar3 /*44*/], func_887(), 134217728, 16);
								}
								break;
							
							case 3:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), Local_175[iVar3 /*44*/].f_15, 1);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar3 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_175[iVar3 /*44*/], 713668775) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_175[iVar3 /*44*/], Local_175[iVar3 /*44*/].f_15, 2f, -1, 0.25f, 0, 1193033728);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_175[iVar3 /*44*/], func_887()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_175[iVar3 /*44*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_175[iVar3 /*44*/], 50, 1);
									TASK::TASK_COMBAT_PED(Local_175[iVar3 /*44*/], func_887(), 134217728, 16);
								}
								break;
							}
						}
					}
			}
			iVar3++;
		}
	}
}


int func_643()//Position - 0x6F23E
{
	int iVar0;
	
	switch (iLocal_1769)
	{
		case 0:
			if (iLocal_1808)
			{
				iLocal_1807 = 1;
				iLocal_1808 = 0;
			}
			iLocal_1782 = 0;
			TASK::CLEAR_PED_TASKS(func_886());
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
				{
					PED::DELETE_PED(&(Local_175[iVar0 /*44*/]));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			uLocal_1707 = CAM::CREATE_CAMERA(964613260, 1);
			CAM::SET_CAM_ACTIVE(uLocal_1707, 1);
			func_403(0, -209.5674f, -2386.869f, 15.0927f, 1, 0, 1, 3000, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1727))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1727, 0);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_1727, 0);
			}
			else
			{
				iLocal_1727 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-222.02f, -2375.355f, 13.5443f, 2f, joaat("port_xr_door_05"), 1, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1727, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1727, 0);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_1727, 0);
			}
			iLocal_1726 = OBJECT::CREATE_OBJECT(joaat("p_po1_01_doorm_s"), -222.02f, -2375.396f, 12.327f, 1, 1, 0);
			iLocal_1732 = PED::CREATE_SYNCHRONIZED_SCENE(-222.02f, -2375.396f, 13.2843f, 0f, 0f, 0f, 2);
			ENTITY::SET_ENTITY_INVINCIBLE(func_887(), 1);
			WEAPON::SET_CURRENT_PED_WEAPON(func_887(), joaat("weapon_combatpistol"), 1);
			if (iLocal_1807)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_887(), iLocal_1732, "missheistdocks2aig_1", "IG_1_MichaelEnterBoat_Action", 1000f, -8f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_1726, "IG_1_MichaelEnterBoat_Action_DOOR", "missheistdocks2aig_1", 1000f, 0, 0, 0, 0.025f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1707, iLocal_1732, "IG_1_MichaelEnterBoat_Action_cam", "missheistdocks2aig_1");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1732, 0.025f);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_887(), iLocal_1732, "missheistdocks2aig_1", "IG_1_MichaelEnterBoat_Stealth", 1000f, -8f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_1726, "IG_1_MichaelEnterBoat_Stealth_DOOR", "missheistdocks2aig_1", 1000f, 0, 0, 0, 0.035f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1707, iLocal_1732, "IG_1_MichaelEnterBoat_stealth_cam", "missheistdocks2aig_1");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1732, 0.035f);
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GOIN", 7, 0, 0, 0);
			}
			GRAPHICS::SET_SEETHROUGH(0);
			CAM::SET_CAM_ACTIVE(uLocal_1707, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			ENTITY::SET_ENTITY_COORDS(func_886(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
			RECORDING::_0x48621C9FCA3EBD28(4);
			func_644(1);
			iLocal_1744 = MISC::GET_GAME_TIMER();
			iLocal_1769++;
			break;
		
		case 1:
			if (iLocal_1807)
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_IN_NS", 7, 0, 0, 0))
				{
					iLocal_1769++;
				}
			}
			else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_GOIN", 7, 0, 0, 0))
			{
				iLocal_1769++;
			}
			break;
		
		case 2:
			if (!PLAYER::PLAYER_PED_ID() == func_886())
			{
				if (GlobalFunc_9019(&iLocal_1903, 1))
				{
					GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
					bLocal_1780 = true;
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-143.8203f, -2488.261f, 43.4412f, 25f, 0);
				}
			}
			else if (iLocal_1807)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1732) >= 0.7f)
				{
					iLocal_1744 = MISC::GET_GAME_TIMER();
					iLocal_1769++;
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1732) >= 0.72f)
			{
				iLocal_1744 = MISC::GET_GAME_TIMER();
				iLocal_1769++;
			}
			if (GlobalFunc_5170())
			{
				if (!iLocal_1782)
				{
					GlobalFunc_173(&uLocal_1496, 1, 0, "MICHAEL", 0, 1);
					if (iLocal_1807)
					{
						if (GlobalFunc_10618(&uLocal_1496, "d2aaud", "DH2A_WTCH_NS", 7, 0, 0, 0))
						{
							iLocal_1782 = 1;
						}
					}
					else if (GlobalFunc_10618(&uLocal_1496, "d2aaud", "DH2A_FMB", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			break;
		
		case 3:
			iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8f, -2487.555f, 43.45f, 0f, 0f, -34.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_886(), iLocal_1747, "missheistdocks2aswitchig_7", "IG_7_m_door_f_sniping_franklin", 1000f, -1000f, 16384, 0, 1148846080, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1707, iLocal_1747, "IG_7_m_door_f_sniping_cam", "missheistdocks2aswitchig_7");
			if (bLocal_1780)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 1000, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
			}
			iLocal_1782 = 0;
			iLocal_1769++;
			break;
		
		case 4:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.999f)
			{
				iLocal_1744 = MISC::GET_GAME_TIMER();
				if (ENTITY::DOES_ENTITY_EXIST(func_887()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_887(), 0);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PLANT_BOMBS_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_PLANT_BOMBS_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPING_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPING_SCENE");
				}
				AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
				AUDIO::TRIGGER_MUSIC_EVENT("dh2a_main_alarm");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1727))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1727, 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1727);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1726))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1726);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_1887, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_621(-222.02f, -2375.396f, 14.2843f));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_620(-222.02f, -2375.396f, 14.2843f), 1065353216);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				func_304(1, 0, 0, 3000, 0);
				iLocal_1808 = 1;
				iLocal_1782 = 0;
				iLocal_1744 = MISC::GET_GAME_TIMER();
				return 1;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.3f)
			{
				if (!iLocal_1782)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START(-143.73f, -2488.6f, 45.02f, GlobalFunc_107(-0.56f, 0.8f, -0.22f), 300f, 0);
					iLocal_1782 = 1;
				}
			}
			break;
	}
	if (SYSTEM::TIMERA() > 1500)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 18))
		{
			RECORDING::_0x13B350B8AD0EEE10();
			if (!PLAYER::PLAYER_PED_ID() == func_886())
			{
				GlobalFunc_9019(&iLocal_1903, 1);
				GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_621(-222.02f, -2375.396f, 14.2843f));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_620(-222.02f, -2375.396f, 14.2843f), 1065353216);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
			CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PLANT_BOMBS_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_PLANT_BOMBS_scene");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPING_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPING_SCENE");
			}
			AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
			iLocal_1896 = 1;
			iLocal_1897 = 6;
		}
	}
	return 0;
}

void func_644(bool bParam0)//Position - 0x6F941
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_1746)
	{
		if (GlobalFunc_2773(func_887()))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(func_887(), 1);
			WEAPON::GIVE_WEAPON_TO_PED(func_887(), iLocal_1888, 0, 0, 1);
			iVar0 = 10;
			iVar1 = (iVar0 - WEAPON::GET_AMMO_IN_PED_WEAPON(func_887(), iLocal_1888));
			if (iVar1 > 0)
			{
				WEAPON::ADD_AMMO_TO_PED(func_887(), iLocal_1888, iVar1);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_887(), joaat("weapon_knife"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_887(), joaat("weapon_knife"), -1, 1, 1);
			}
			WEAPON::GIVE_WEAPON_TO_PED(func_887(), iLocal_1889, 0, 1, 1);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_887(), iLocal_1889, joaat("component_at_pi_supp"));
			WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
			iVar0 = 50;
			iVar1 = (iVar0 - WEAPON::GET_AMMO_IN_PED_WEAPON(func_887(), iLocal_1889));
			if (iVar1 > 0)
			{
				WEAPON::ADD_AMMO_TO_PED(func_887(), iLocal_1889, iVar1);
			}
			GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(iLocal_1889);
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(iLocal_1888);
		}
		if (GlobalFunc_2773(func_886()))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_886(), iLocal_1887, 0))
			{
				if (bParam0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_886(), iLocal_1887, 250, 1, 1);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_886(), iLocal_1887, 250, 0, 0);
				}
			}
			else
			{
				if (bParam0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_886(), iLocal_1887, 1);
				}
				WEAPON::ADD_AMMO_TO_PED(func_886(), iLocal_1887, 250);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_886(), iLocal_1887, joaat("component_at_scope_max")))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_886(), iLocal_1887, joaat("component_at_scope_max"));
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_886(), iLocal_1887, joaat("component_at_ar_supp_02")))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_886(), iLocal_1887, joaat("component_at_ar_supp_02"));
			}
		}
		bLocal_1746 = true;
	}
}


void func_646()//Position - 0x6FBA4
{
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(-143.8203f, -2488.261f, 43.4412f, 18f, 0);
	}
}

void func_647()//Position - 0x6FBCE
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
	}
	func_646();
	func_626();
	func_622();
	switch (iLocal_1893)
	{
		case 0:
			if (GlobalFunc_234(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (GlobalFunc_2773(func_887()))
			{
				GlobalFunc_11257(func_887(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			iLocal_1756 = 0;
			iLocal_1782 = 0;
			iLocal_1783 = 0;
			iLocal_1784 = 0;
			iLocal_1786 = 0;
			GlobalFunc_Checkpoint2(4, "stage 4: third bomb", 0, 0, 0, 1);
			iLocal_1893++;
			break;
		
		case 1:
			if (GlobalFunc_663("DCKH_BOMB2", 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1452[2 /*7*/].f_2, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				HUD::CLEAR_THIS_PRINT("DCKH_BOMB2");
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1452[2 /*7*/].f_2, 1.5f, 1.5f, 2f, 0, 1, 0) && Local_1452[2 /*7*/].f_6 == 0) && !Local_1947.f_20)
			{
				if (GlobalFunc_5170() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (!iLocal_1783)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_06", 7, 0, 0, 0))
						{
							iLocal_1783 = 1;
						}
					}
				}
				if (GlobalFunc_5171())
				{
					GlobalFunc_164("DCKH_BOMB2", 7500, 1);
				}
			}
			if (Local_1452[2 /*7*/].f_6 == 0)
			{
				if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_1452[2 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_1452[2 /*7*/].f_2 + Vector(-2f, -3f, -0.75f), 10f, iLocal_1888, 0) || Local_1452[2 /*7*/].f_6 == 1)
				{
					if (iLocal_1808)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BMB3_NS", 8, 0, 0, 0))
						{
							GlobalFunc_703(&(Local_1452[2 /*7*/].f_1));
							Local_1452[2 /*7*/].f_6 = 1;
							if (!iLocal_1808)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("dh2a_3rd_bomb_planted");
							}
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							func_867(5);
							iLocal_1893 = 0;
						}
					}
					else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BMB3", 8, 0, 0, 0))
					{
						GlobalFunc_703(&(Local_1452[2 /*7*/].f_1));
						Local_1452[2 /*7*/].f_6 = 1;
						if (!iLocal_1808)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("dh2a_3rd_bomb_planted");
						}
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_1784 = 0;
						func_867(5);
						iLocal_1893 = 0;
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					}
				}
				if (!iLocal_1786 && !iLocal_1808)
				{
					if (GlobalFunc_5171())
					{
						if (PLAYER::PLAYER_PED_ID() == func_887())
						{
							GlobalFunc_164("DCKH_PLB4", 7500, 1);
							iLocal_1786 = 1;
						}
					}
				}
				if (!iLocal_1784 && !iLocal_1808)
				{
					if (GlobalFunc_5170() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_SCHAT2", 7, 0, 0, 0))
						{
							iLocal_1784 = 1;
						}
					}
				}
			}
			if (((!GlobalFunc_2773(Local_175[11 /*44*/]) && !GlobalFunc_2773(Local_175[13 /*44*/])) && iLocal_1782 == 0) && !iLocal_1808)
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_09", 7, 0, 0, 0))
				{
					iLocal_1782 = 1;
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		if (!iLocal_1795 && !Local_1947.f_20)
		{
			if (GlobalFunc_5171())
			{
				GlobalFunc_164("DCKH_PROTECT", 7500, 1);
				iLocal_1795 = 1;
			}
		}
	}
}


void func_649()//Position - 0x6FF8E
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
	}
	func_646();
	func_626();
	func_622();
	switch (iLocal_1893)
	{
		case 0:
			if (GlobalFunc_234(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (GlobalFunc_2773(func_887()))
			{
				GlobalFunc_11257(func_887(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			iLocal_1756 = 0;
			iLocal_1782 = 0;
			iLocal_1783 = 0;
			iLocal_1784 = 0;
			iLocal_1786 = 0;
			GlobalFunc_Checkpoint2(3, "stage 3: second bomb", 0, 0, 0, 1);
			iLocal_1893++;
			break;
		
		case 1:
			if (GlobalFunc_663("DCKH_BOMB2", 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1452[1 /*7*/].f_2, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				HUD::CLEAR_THIS_PRINT("DCKH_BOMB2");
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1452[1 /*7*/].f_2, 1.5f, 1.5f, 2f, 0, 1, 0) && Local_1452[1 /*7*/].f_6 == 0) && !Local_1947.f_20)
			{
				if (GlobalFunc_5170())
				{
					if (!iLocal_1783)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_06", 7, 0, 0, 0))
						{
							iLocal_1783 = 1;
						}
					}
				}
				if (GlobalFunc_5171())
				{
					GlobalFunc_164("DCKH_BOMB2", 7500, 1);
				}
			}
			if (Local_1452[1 /*7*/].f_6 == 0)
			{
				if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_1452[1 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_1452[1 /*7*/].f_2 + Vector(-2f, -3f, -0.75f), 10f, iLocal_1888, 0) || Local_1452[1 /*7*/].f_6 == 1)
				{
					if (iLocal_1808)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BMB2_NS", 8, 0, 0, 0))
						{
							GlobalFunc_703(&(Local_1452[1 /*7*/].f_1));
							Local_1452[1 /*7*/].f_6 = 1;
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							if (!iLocal_1808)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("dh2a_2nd_bomb_planted");
							}
							iLocal_1782 = 0;
							iLocal_1783 = 0;
							iLocal_1784 = 0;
							iLocal_1786 = 0;
							func_867(4);
							iLocal_1893 = 0;
						}
					}
					else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_04", 8, 0, 0, 0))
					{
						GlobalFunc_703(&(Local_1452[1 /*7*/].f_1));
						Local_1452[1 /*7*/].f_6 = 1;
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						if (!iLocal_1808)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("dh2a_2nd_bomb_planted");
						}
						iLocal_1782 = 0;
						iLocal_1783 = 0;
						iLocal_1786 = 0;
						func_867(4);
						iLocal_1893 = 0;
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					}
				}
				if (!iLocal_1786)
				{
					if (GlobalFunc_5171())
					{
						if (PLAYER::PLAYER_PED_ID() == func_887())
						{
							GlobalFunc_164("DCKH_PLB2", 7500, 1);
							iLocal_1786 = 1;
						}
					}
				}
				if (!iLocal_1784 && !iLocal_1808)
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_SCHAT1", 7, 0, 0, 0))
						{
							iLocal_1784 = 1;
						}
					}
				}
			}
			if ((((!GlobalFunc_2773(Local_175[2 /*44*/]) && !GlobalFunc_2773(Local_175[3 /*44*/])) && !GlobalFunc_2773(Local_175[4 /*44*/])) && iLocal_1782 == 0) && !iLocal_1808)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_09", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		if (!iLocal_1795 && !Local_1947.f_20)
		{
			if (GlobalFunc_5171())
			{
				GlobalFunc_164("DCKH_PROTECT", 7500, 1);
				iLocal_1795 = 1;
			}
		}
	}
}

void func_650()//Position - 0x7033F
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
	}
	func_646();
	func_626();
	func_622();
	switch (iLocal_1893)
	{
		case 0:
			if (GlobalFunc_234(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_1756 = 0;
			if (GlobalFunc_2773(func_887()))
			{
				GlobalFunc_11257(func_887(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				if (GlobalFunc_2773(func_886()))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(func_886(), func_887(), -1, 0);
				}
			}
			iLocal_1782 = 0;
			iLocal_1786 = 0;
			iLocal_1893++;
			break;
		
		case 1:
			if (GlobalFunc_5171())
			{
				if (Local_1452[0 /*7*/].f_6 == 0)
				{
					GlobalFunc_164("DCKH_PLB1", 7500, 1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(func_887(), joaat("weapon_stickybomb"), 0);
				iLocal_1893++;
			}
			break;
		
		case 2:
			if (GlobalFunc_663("DCKH_BOMB1", 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1452[0 /*7*/].f_2, 3f, 1.5f, 2f, 0, 1, 0))
			{
				HUD::CLEAR_THIS_PRINT("DCKH_BOMB1");
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1452[0 /*7*/].f_2, 3f, 1.5f, 2f, 0, 1, 0) && Local_1452[0 /*7*/].f_6 == 0)
			{
				if (!GlobalFunc_663("DCKH_PLB1", 0, 0))
				{
					if (GlobalFunc_5170())
					{
						if (!iLocal_1786)
						{
							if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_06", 7, 0, 0, 0))
							{
								iLocal_1786 = 1;
							}
						}
					}
					if (GlobalFunc_5171())
					{
						GlobalFunc_164("DCKH_BOMB1", 7500, 1);
					}
				}
			}
			if (Local_1452[0 /*7*/].f_6 == 0)
			{
				if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-87.44234f, -2365.911f, 12.79692f, -82.76716f, -2365.917f, 15.29692f, 2.5f, iLocal_1888, 0) || Local_1452[0 /*7*/].f_6 == 1)
				{
					if (iLocal_1808)
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_BMB1_NS", 8, 0, 0, 0))
						{
							GlobalFunc_703(&(Local_1452[0 /*7*/].f_1));
							Local_1452[0 /*7*/].f_6 = 1;
							iLocal_1782 = 0;
							iLocal_1786 = 0;
							func_867(3);
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							iLocal_1893 = 0;
						}
					}
					else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_03", 8, 0, 0, 0))
					{
						GlobalFunc_703(&(Local_1452[0 /*7*/].f_1));
						Local_1452[0 /*7*/].f_6 = 1;
						iLocal_1782 = 0;
						iLocal_1786 = 0;
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						func_867(3);
						iLocal_1893 = 0;
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					}
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		if (!iLocal_1795 && !Local_1947.f_20)
		{
			if (GlobalFunc_5171())
			{
				GlobalFunc_164("DCKH_PROTECT", 7500, 1);
				iLocal_1795 = 1;
			}
		}
	}
}

void func_651()//Position - 0x70641
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
	}
	switch (iLocal_1893)
	{
		case 0:
			OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
			func_644(1);
			GlobalFunc_Checkpoint2(1, "Stage 1: Snipe Guards", 0, 0, 0, 1);
			if (!HUD::DOES_BLIP_EXIST(Local_175[0 /*44*/].f_1))
			{
				Local_175[0 /*44*/].f_1 = GlobalFunc_6797(Local_175[0 /*44*/], 1, 145);
			}
			if (!HUD::DOES_BLIP_EXIST(Local_175[1 /*44*/].f_1))
			{
				Local_175[1 /*44*/].f_1 = GlobalFunc_6797(Local_175[1 /*44*/], 1, 145);
			}
			if (GlobalFunc_2773(Local_175[0 /*44*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_175[0 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0, 0, 0, 0);
				if (GlobalFunc_234(Local_175[0 /*44*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_175[0 /*44*/], 1);
				}
			}
			if (GlobalFunc_2773(Local_175[1 /*44*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_175[1 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0, 0, 0, 0);
				if (GlobalFunc_234(Local_175[1 /*44*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_175[1 /*44*/], 1);
				}
			}
			if (GlobalFunc_234(func_887()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
				TASK::CLEAR_PED_TASKS(func_887());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1721))
			{
				iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1722))
			{
				iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1723))
			{
				iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1724))
			{
				iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1725))
			{
				iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
			}
			iLocal_1864 = 1;
			if (GlobalFunc_2773(Local_69[2 /*15*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[2 /*15*/]));
			}
			if (GlobalFunc_2773(Local_48[0 /*2*/]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[0 /*2*/]));
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
			}
			iLocal_1782 = 0;
			iLocal_1783 = 0;
			iLocal_1786 = 0;
			uLocal_1900[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
			uLocal_1900[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
			iLocal_1893++;
			break;
		
		case 1:
			func_622();
			if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
			{
				if (!GlobalFunc_74("SNIPE_HLP0"))
				{
					HUD::CLEAR_HELP(1);
					GlobalFunc_Display_Help_Text("SNIPE_HLP0");
				}
			}
			else if (!GlobalFunc_74("SNIPE_HLP1"))
			{
				HUD::CLEAR_HELP(1);
				GlobalFunc_Display_Help_Text("SNIPE_HLP1");
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (GlobalFunc_2773(Local_175[0 /*44*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[0 /*44*/], func_886(), 1))
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
					ENTITY::SET_ENTITY_HEALTH(Local_175[0 /*44*/], 0);
				}
			}
			if (GlobalFunc_2773(Local_175[1 /*44*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[1 /*44*/], func_886(), 1))
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
					ENTITY::SET_ENTITY_HEALTH(Local_175[1 /*44*/], 0);
				}
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if (!iLocal_1782)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_GO2", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			else if (!iLocal_1783)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_SHADY", 7, 0, 0, 0))
					{
						iLocal_1783 = 1;
					}
				}
			}
			else if (!iLocal_1786)
			{
				if (GlobalFunc_5171())
				{
					GlobalFunc_527("DCKH_SNIPER", 7500, 1);
					iLocal_1786 = 1;
				}
			}
			if (!GlobalFunc_2773(Local_175[0 /*44*/]) && !GlobalFunc_2773(Local_175[1 /*44*/]))
			{
				iLocal_1782 = 0;
				iLocal_1783 = 0;
				iLocal_1786 = 0;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(-93.05f, -2367.14f, 14.99f, GlobalFunc_107(0.91f, 0.42f, 0.03f), 500f, 0);
				}
				if (GlobalFunc_663("DCKH_SNIPER", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("DCKH_SNIPER");
				}
				iLocal_1893++;
			}
			else if (!GlobalFunc_2773(Local_175[0 /*44*/]) && GlobalFunc_2773(Local_175[1 /*44*/]))
			{
				if (iLocal_1830 == 0)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", sLocal_1834, 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 1000, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_886(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(Local_175[1 /*44*/], uLocal_1708);
					iLocal_1830 = 1;
				}
			}
			else if (GlobalFunc_2773(Local_175[0 /*44*/]) && !GlobalFunc_2773(Local_175[1 /*44*/]))
			{
				if (iLocal_1830 == 0)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "enter_crouch_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "crouching_idle_a", 8f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 1000, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_886(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(Local_175[0 /*44*/], uLocal_1708);
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
					iLocal_1830 = 1;
				}
			}
			else if ((MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_175[0 /*44*/], 1), 5f, 5f, 5f) || PED::HAS_PED_RECEIVED_EVENT(Local_175[0 /*44*/], 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_175[1 /*44*/], 123))
			{
				if (iLocal_1830 == 0)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "enter_crouch_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "crouching_idle_a", 8f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 1000, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_886(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(Local_175[0 /*44*/], uLocal_1708);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", sLocal_1834, 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_886(), 1000, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_886(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
					TASK::TASK_PERFORM_SEQUENCE(Local_175[1 /*44*/], uLocal_1708);
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
					iLocal_1830 = 1;
				}
			}
			break;
		
		case 2:
			iLocal_1744 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("DH2A_START");
			func_644(1);
			if (WEAPON::HAS_PED_GOT_WEAPON(func_887(), iLocal_1889, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
			}
			iLocal_1769 = 0;
			func_577(func_887(), 0, 0);
			iLocal_1893++;
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 2000)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_SUPP", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
						iLocal_1893++;
					}
				}
			}
			break;
		
		case 4:
			HUD::CLEAR_HELP(1);
			GRAPHICS::SET_SEETHROUGH(0);
			iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8203f, -2488.261f, 43.4412f, 0f, 0f, -34.5f, 2);
			uLocal_1707 = CAM::CREATE_CAMERA(964613260, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(func_886(), iLocal_1747, "missheistdocks2aswitchig_7", "IG_7_F_SNIPING_M_CLIMBING_FRANKLIN", 1000f, -8f, 16384, 0, 1148846080, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1707, iLocal_1747, "IG_7_F_SNIPING_M_CLIMBING_CAM", "missheistdocks2aswitchig_7");
			func_403(0, -143.3857f, -2488.554f, 43.4383f, 1, 0, 1, 3000, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1893++;
			break;
		
		case 5:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.99f)
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_1744 = MISC::GET_GAME_TIMER();
				iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(-79.7377f, -2359.452f, 14.2669f, 0f, 0f, 155.7045f, 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_887());
				func_577(func_887(), 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(func_887(), joaat("weapon_unarmed"), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(func_887(), iLocal_1747, "missheistdocks2aig_1", "ig_1_michaelclimboverboat", 1000f, -2f, 4, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_887(), 0, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1707, iLocal_1747, "ig_1_michaelclimboverboat_cam", "missheistdocks2aig_1");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747, 0.2f);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
				}
				AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
				iLocal_1903[0] = Local_69[1 /*15*/];
				iLocal_1783 = 0;
				iLocal_1893++;
			}
			break;
		
		case 6:
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > GlobalFunc_512(func_660(), fLocal_2000, 0.8f))
			{
				if (GlobalFunc_9019(&iLocal_1903, 0))
				{
					if (GlobalFunc_10980(&iLocal_1903, 1, 1, 0))
					{
						if (GlobalFunc_2773(func_886()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_886(), 1630799643) > 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(func_886(), func_887(), -1, 0);
							}
						}
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_1782 = 0;
						iLocal_1783 = 0;
						if (func_660())
						{
							func_659(&uLocal_1686, func_887(), 0, fLocal_2001, iLocal_2002, iLocal_2003, iLocal_2004, iLocal_2005, fLocal_2006);
							iLocal_1893 = 70;
						}
						else
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							TASK::CLEAR_PED_TASKS(func_887());
							PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
							PED::FORCE_PED_MOTION_STATE(func_887(), 1110276645, 0, 0, 0);
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
							func_304(1, 0, 1, 3000, 0);
							iLocal_1893++;
						}
					}
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.5f)
			{
				if (!iLocal_1782)
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_TK1", 7, 0, 0, 0))
					{
						iLocal_1782 = 1;
					}
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.1f)
			{
				if (!iLocal_1783)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START(-79.51f, -2362.08f, 14.38f, GlobalFunc_107(-1f, 0.07f, 0f), 500f, 0);
					iLocal_1783 = 1;
				}
			}
			break;
		
		case 70:
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (func_655(&uLocal_1686, bLocal_1998, 1, 1, bLocal_1999, bLocal_2007, 0))
				{
					TASK::CLEAR_PED_TASKS(func_887());
					PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
					PED::FORCE_PED_MOTION_STATE(func_887(), 1110276645, 0, 0, 0);
					func_304(1, 0, 0, 3000, 0);
					iLocal_1893 = 7;
				}
			}
			break;
		
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("DH2A_READY_FOR_2ND"))
			{
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
				iLocal_1875 = 1;
				func_654();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_304(1, 0, 1, 3000, 0);
				GlobalFunc_4935();
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_02", 7, 0, 0, 0);
				func_378(0, 0, 1, 0, 0, 0);
				iLocal_1981 = 1;
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
				iLocal_1893++;
			}
			break;
		
		case 8:
			func_652();
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2aig_1");
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2aswitchig_7");
			GlobalFunc_Checkpoint2(2, "Stage 2: first bomb", 0, 0, 0, 1);
			GlobalFunc_159("DCKH_SWHELP", -1);
			func_867(2);
			iLocal_1893 = 0;
			break;
	}
}

void func_652()//Position - 0x71271
{
	int iVar0;
	
	func_591();
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 5);
	uLocal_1716[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), -125.2354f, -2357.386f, 9.676947f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
}


void func_654()//Position - 0x712C5
{
	uLocal_1712[0] = TASK::ADD_COVER_POINT(-184.09f, -2374.014f, 8.3191f, 90f, 1, 2, 0, 0);
	uLocal_1712[1] = TASK::ADD_COVER_POINT(-127.6602f, -2374.7f, 8.3191f, 0f, 1, 2, 0, 0);
	uLocal_1712[2] = TASK::ADD_COVER_POINT(-120.2045f, -2378.959f, 8.3191f, 90f, 0, 2, 0, 0);
}

int func_655(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7132F
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
				CAM::SET_CAM_FOV(uParam0->f_2, uVar21);
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
					CAM::SET_CAM_FOV(uParam0->f_4, uVar21);
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
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
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
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
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




void func_659(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)//Position - 0x71749
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = fParam8;
}

bool func_660()//Position - 0x71781
{
	return CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
}


void func_662()//Position - 0x717A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	char* sVar10;
	var uVar11;
	struct<3> Var12;
	int iVar15;
	
	switch (iLocal_1893)
	{
		case 0:
			if (GlobalFunc_Is_Mission_Retry() || iLocal_1771)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1893 = 2;
			}
			else
			{
				iLocal_1893++;
			}
			break;
		
		case 1:
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			func_726(1);
			func_820();
			if (iLocal_1770)
			{
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_1893++;
			}
			break;
		
		case 2:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			if (GlobalFunc_8315() != 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1903[1]))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						iLocal_1903[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1903[1], 1);
				}
			}
			if (GlobalFunc_8315() != 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1903[2]))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_1903[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
			}
			if (GlobalFunc_8315() != 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1903[0]))
				{
					iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						iLocal_1903[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1903[0], 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1719))
			{
				iLocal_1719 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1158.581f, -1519.247f, 9.6308f, 2f, joaat("v_res_tre_sofa_mess_c"), 1, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1719, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (GlobalFunc_234(iLocal_1903[1]))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_1903[1], -668482597, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_1903[1], -1154.663f, -1518.243f, 9.6327f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1903[1], 306.3135f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1903[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1903[0]))
					{
						GlobalFunc_7963(iLocal_1903[0]);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1903[2]))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_1903[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
				if (GlobalFunc_8315() != 2)
				{
					if (GlobalFunc_9019(&iLocal_1903, 2))
					{
						GlobalFunc_10980(&iLocal_1903, 1, 0, 0);
					}
				}
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1151.634f, -1519.498f, 9.6327f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 215f);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uVar11);
						TASK::OPEN_SEQUENCE_TASK(&uVar11);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1150.757f, -1520.947f, 9.6327f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1149.51f, -1522.468f, 9.6331f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1147.391f, -1522.717f, 9.413f, 1f, 20000, 0.25f, 512, 312.1079f);
						TASK::CLOSE_SEQUENCE_TASK(uVar11);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar11);
						TASK::CLEAR_SEQUENCE_TASK(&uVar11);
					}
					else
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3500, 0, 1, 0);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (bLocal_1781)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 1000, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					}
				}
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if ((!CUTSCENE::IS_CUTSCENE_PLAYING() || GlobalFunc_Is_Mission_Retry()) || iLocal_1771)
			{
				if (GlobalFunc_8315() != 2)
				{
					if (GlobalFunc_9019(&iLocal_1903, 2))
					{
						GlobalFunc_10980(&iLocal_1903, 1, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
						HUD::SET_RADAR_ZOOM_PRECISE(1f);
					}
				}
				else
				{
					if (GlobalFunc_2773(iLocal_1903[0]))
					{
						Local_69[1 /*15*/] = iLocal_1903[0];
						PED::DELETE_PED(&(Local_69[1 /*15*/]));
					}
					if (GlobalFunc_2773(iLocal_1903[1]))
					{
						Local_69[0 /*15*/] = iLocal_1903[1];
					}
					Local_69[2 /*15*/] = PLAYER::PLAYER_PED_ID();
					HUD::SET_RADAR_ZOOM_PRECISE(1f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1719))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1719, 1);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1719);
					}
					if (GlobalFunc_2203(3))
					{
						GlobalFunc_7063(1, 3);
					}
					iLocal_1893++;
				}
			}
			break;
		
		case 3:
			func_726(0);
			if (GlobalFunc_2773(func_147()))
			{
				GlobalFunc_173(&uLocal_1496, 2, func_147(), "TREVOR", 0, 1);
			}
			if (GlobalFunc_2773(func_886()))
			{
				GlobalFunc_173(&uLocal_1496, 3, func_886(), "FRANKLIN", 0, 1);
				PED::SET_PED_CONFIG_FLAG(func_886(), 206, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_886(), -1151.335f, -1520.32f, 3.3653f, 1f, -1, 0.25f, 0, 1193033728);
			}
			GlobalFunc_8316(0, 1, 1, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			GlobalFunc_5168(1, 3, 1);
			func_712();
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_1893++;
			break;
		
		case 4:
			if (!GlobalFunc_2773(Local_48[0 /*2*/]))
			{
				func_703(&(Local_48[0 /*2*/]), -1154.612f, -1520.07f, 3.3456f, 33.0431f);
			}
			else
			{
				iLocal_1893++;
			}
			break;
		
		case 5:
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_147()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_886()))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("DH2A_START"))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_886(), iLocal_1742);
					func_583(0);
					iLocal_1793 = 0;
					iLocal_1782 = 0;
					iLocal_1783 = 0;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::SET_RADAR_ZOOM_PRECISE(0f);
					iLocal_1893++;
				}
			}
			break;
		
		case 6:
			func_701();
			Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var12.f_2 < 5f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1142.68f, -1518.526f, 3.279745f, -1148.989f, -1522.986f, 9.34103f, 6f, 0, 1, 0))
			{
				iLocal_1893++;
			}
			break;
		
		case 7:
			func_701();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(func_886(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_1704))
					{
						HUD::REMOVE_BLIP(&uLocal_1704);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_147(), 1), -160.5122f, -2502.883f, 47.93985f, 1) < 125f && !iLocal_1783)
					{
						GlobalFunc_5105();
						TASK::TASK_LOOK_AT_ENTITY(func_886(), func_147(), -1, 0, 2);
						func_583(0);
						GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
						GlobalFunc_719(&uLocal_2010, "missheistdocks2aig_1");
						GlobalFunc_719(&uLocal_2010, "missheistdocks2a@crouch");
						GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
						GlobalFunc_719(&uLocal_2010, "missheistdocks2aswitchig_6");
						GlobalFunc_719(&uLocal_2010, "missheistdocks2aswitchig_7");
						GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
						GlobalFunc_718(&uLocal_2010, joaat("prop_military_pickup_01"));
						GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
						GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
						GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
						GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
						GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
						iLocal_1783 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_1744) > 10000 && !iLocal_1782)
					{
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_1710))
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_1710);
						}
						GlobalFunc_10639(53, 1);
						GlobalFunc_5168(1, 3, 0);
						iLocal_1782 = 1;
					}
					if (!iLocal_1793)
					{
						GlobalFunc_619(0);
						iLocal_1793 = 1;
					}
				}
				else if (iLocal_1793)
				{
					Var4 = { GlobalFunc_560() };
					sVar10 = GlobalFunc_217(&Var4);
					if ((MISC::ARE_STRINGS_EQUAL(sVar10, "DS2A_01") || MISC::ARE_STRINGS_EQUAL(sVar10, "DS2A_02")) || MISC::ARE_STRINGS_EQUAL(sVar10, "DS2A_03"))
					{
						GlobalFunc_619(1);
						iLocal_1793 = 0;
					}
				}
				if (!PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == Local_48[0 /*2*/])
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[0 /*2*/]));
					Local_48[0 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_48[0 /*2*/], 1, 1);
				}
			}
			else if (iLocal_1793)
			{
				Var4 = { GlobalFunc_560() };
				sVar10 = GlobalFunc_217(&Var4);
				if ((MISC::ARE_STRINGS_EQUAL(sVar10, "DS2A_01") || MISC::ARE_STRINGS_EQUAL(sVar10, "DS2A_02")) || MISC::ARE_STRINGS_EQUAL(sVar10, "DS2A_03"))
				{
					GlobalFunc_619(1);
					iLocal_1793 = 0;
				}
			}
			if (PED::IS_PED_IN_ANY_HELI(func_147()))
			{
				if (func_694(&Local_1661, -160.5122f, -2502.883f, 47.93985f, 0.1f, 0.1f, 2f, 1, func_886(), 0, 0, "DCKH_DRIVE", "DCKH_DONT_L_T", "", "", "DCKH_P_UP_B", "DCKH_CAR", "DCKH_CARBK", 0, 0, 0, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_1661.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_886(), -168.0191f, -2497.729f, 44.1933f, -146.6672f, -2512.52f, 54.0683f, 10f, 0, 1, 0)) && PED::IS_PED_IN_VEHICLE(func_886(), Local_48[0 /*2*/], 0)))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[0 /*2*/]));
					Local_48[0 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_48[0 /*2*/], 1, 0);
					iLocal_1782 = 0;
					iLocal_1783 = 0;
					GlobalFunc_6685(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					GlobalFunc_5652(&Local_1661, 1, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ON_BRIDGE");
					GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
					iLocal_1893++;
				}
			}
			else if (func_694(&Local_1661, -160.5122f, -2502.883f, 47.93985f, 0.1f, 0.1f, 2f, 1, func_886(), 0, 0, "DCKH_DRIVE", "DCKH_DONT_L_T", "", "", "DCKH_P_UP_B", "DCKH_CAR", "DCKH_CARBK", 0, 0, 0, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_1661.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_886(), -168.0191f, -2497.729f, 44.1933f, -146.6672f, -2512.52f, 52.0683f, 4f, 0, 1, 0)) && PED::IS_PED_IN_VEHICLE(func_886(), Local_48[0 /*2*/], 0)))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[0 /*2*/]));
				Local_48[0 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_48[0 /*2*/], 1, 0);
				iLocal_1782 = 0;
				iLocal_1783 = 0;
				GlobalFunc_6685(0);
				GlobalFunc_530(Local_48[0 /*2*/], 10f, 1, 1056964608, 0, 1);
				GlobalFunc_5652(&Local_1661, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ON_BRIDGE");
				GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
				iLocal_1893++;
			}
			break;
		
		case 8:
			func_701();
			if (GlobalFunc_644(Local_48[0 /*2*/]))
			{
				uLocal_1705 = GlobalFunc_5104(-143.8537f, -2488.403f, 43.4098f, 0);
				if (GlobalFunc_9019(&iLocal_1903, 1))
				{
					GlobalFunc_10980(&iLocal_1903, 1, 0, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 1000, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_48[0 /*2*/], 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -77.9618f, -2359.083f, 0f, 232.375f, 1, 1);
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
				STREAMING::NEW_LOAD_SCENE_START(-142.35f, -2487.92f, 44.8f, GlobalFunc_107(-100f, -0.03f, 0.06f), 400f, 0);
				RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
				iLocal_1893++;
			}
			else if (PED::IS_PED_IN_ANY_HELI(func_147()))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(func_147(), -1273030092) > 1)
				{
					TASK::TASK_HELI_MISSION(func_147(), PED::GET_VEHICLE_PED_IS_IN(func_147(), 0), 0, 0, -160.5122f, -2502.883f, 47.93985f, 19, 10f, 1f, -1f, 48, 0, -1082130432, 0);
				}
			}
			else
			{
				GlobalFunc_530(Local_48[0 /*2*/], 10f, 1, 1056964608, 0, 1);
			}
			break;
		
		case 9:
			func_701();
			if (!PED::IS_PED_IN_VEHICLE(func_886(), Local_48[0 /*2*/], 0))
			{
				if (GlobalFunc_11337(&(Local_69[1 /*15*/]), 0, Local_48[6 /*2*/], -1, 1, 0, 0))
				{
					GlobalFunc_173(&uLocal_1496, 1, Local_69[1 /*15*/], "MICHAEL", 0, 1);
					func_577(func_887(), 0, 0);
					GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_DIES_IN_WATER(func_887(), 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_887(), iLocal_1742);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
					func_644(0);
					if (WEAPON::HAS_PED_GOT_WEAPON(func_886(), iLocal_1887, 0))
					{
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(func_886(), iLocal_1887, 200, 0, 0);
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_GET_TO_VANTAGE_POINT"))
					{
						AUDIO::START_AUDIO_SCENE("DH2A_GET_TO_VANTAGE_POINT");
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iVar15 = 0;
					while (iVar15 <= 17)
					{
						if (((((iVar15 != 7 && iVar15 != 6) && iVar15 != 5) && iVar15 != 9) && iVar15 != 14) && iVar15 != 16)
						{
							func_616(iVar15, 8f, 1, 0);
						}
						iVar15++;
					}
					Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
					Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
					TASK::TASK_PLAY_ANIM(Local_175[0 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(Local_175[1 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0, 0, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_175[0 /*44*/], joaat("weapon_heavysniper"), -1, 1, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_175[1 /*44*/], joaat("weapon_heavysniper"), -1, 1, 1);
					PED::SET_PED_ALERTNESS(Local_175[0 /*44*/], 1);
					PED::SET_PED_ALERTNESS(Local_175[1 /*44*/], 1);
					iLocal_1893++;
				}
			}
			break;
		
		case 10:
			func_701();
			if (ENTITY::IS_ENTITY_AT_COORD(func_886(), -142.7872f, -2489.052f, 43.433f, 8f, 8f, 10f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_886(), -142.7872f, -2489.052f, 43.533f, 1f, 1f, 2f, 1, 1, 0) && !PED::IS_PED_RAGDOLL(func_886()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_1705))
				{
					HUD::REMOVE_BLIP(&uLocal_1705);
				}
				MISC::CLEAR_AREA(-147.072f, -2495.369f, 47.6477f, 50f, 1, 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_GET_TO_VANTAGE_POINT"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_GET_TO_VANTAGE_POINT");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
				}
				GlobalFunc_6685(0);
				if (WEAPON::HAS_PED_GOT_WEAPON(func_886(), iLocal_1887, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_886(), iLocal_1887, 0);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_886(), iLocal_1887, 200, 0, 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -143.8061f, -2488.306f, 43.4408f, 1f, 20000, 1193033728, 1056964608);
				TASK::TASK_ACHIEVE_HEADING(0, GlobalFunc_5821(func_886(), Local_175[0 /*44*/], 1), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
				TASK::TASK_PERFORM_SEQUENCE(func_886(), uLocal_1708);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
				if (!iLocal_1798)
				{
					if (GlobalFunc_2773(func_147()))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[2 /*15*/]));
					}
					if (GlobalFunc_2773(Local_48[0 /*2*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[0 /*2*/]));
					}
				}
				RECORDING::_0x293220DA1B46CEBC(4f, 0f, 4);
				iLocal_1893++;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(func_886(), -142.7872f, -2489.052f, 43.433f, 80f, 80f, 80f, 0, 1, 0))
				{
					GlobalFunc_164("DCKH_VANTAGE", 7500, 1);
					if (!ENTITY::IS_ENTITY_AT_COORD(func_886(), -142.7872f, -2489.052f, 43.433f, 100f, 100f, 100f, 0, 1, 0))
					{
						func_234(14);
					}
				}
				if (!GlobalFunc_111())
				{
					if (!iLocal_1798)
					{
						GlobalFunc_164("DCKH_VANTAGE", 7500, 1);
						iLocal_1798 = 1;
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_48[0 /*2*/], 188.8807f, -2988.6f, 4.7541f, 25f, 0, ENTITY::GET_ENTITY_MODEL(Local_48[0 /*2*/]), 786599, 4f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						TASK::TASK_PERFORM_SEQUENCE(func_147(), uLocal_1708);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						if (GlobalFunc_2773(func_147()))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[2 /*15*/]));
						}
						if (GlobalFunc_2773(Local_48[0 /*2*/]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[0 /*2*/]));
						}
					}
				}
			}
			break;
		
		case 11:
			if (GlobalFunc_2773(Local_48[6 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_48[6 /*2*/], 5f);
				VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 0);
				VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_48[6 /*2*/], 0);
			}
			uLocal_1748 = CAM::CREATE_CAMERA(964613260, 1);
			CAM::SET_CAM_ACTIVE(uLocal_1748, 1);
			func_403(0, -209.5674f, -2386.869f, 15.0927f, 1, 0, 1, 3000, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(func_886(), 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_886());
			WEAPON::SET_CURRENT_PED_WEAPON(func_886(), iLocal_1887, 0);
			iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8203f, -2488.261f, 43.4412f, 0f, 0f, -34.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_886(), iLocal_1747, "missheistdocks2aswitchig_6", "IG_6_f_sniping_m_dingy_franklin", 1000f, -8f, 16384, 0, 1148846080, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1748, iLocal_1747, "IG_6_f_sniping_m_dingy_franklin_cam", "missheistdocks2aswitchig_6");
			CAM::SET_CAM_ACTIVE(uLocal_1748, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_886(), 1, 0);
			iLocal_1783 = 0;
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1893++;
			break;
		
		case 12:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1747))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_886(), iLocal_1887, 1);
				iVar3 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_886());
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar3));
				}
				WEAPON::REQUEST_WEAPON_ASSET(iLocal_1887, 31, 26);
			}
			if (GlobalFunc_2773(Local_48[6 /*2*/]))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_48[6 /*2*/]);
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.95f)
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_886(), 0);
				func_668();
				iLocal_1893++;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.5f)
			{
				if (!iLocal_1783)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (GlobalFunc_5183(Global_81155[74 /*34*/].f_13, Global_81155[74 /*34*/].f_14))
					{
						STREAMING::NEW_LOAD_SCENE_START(-79.16f, -2355.64f, 1.87f, GlobalFunc_107(0.69f, -0.72f, 0.11f), 300f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START(-24.19f, -2417.54f, 7.8f, GlobalFunc_107(-0.97f, 0.16f, 0.18f), 500f, 0);
					}
					iLocal_1783 = 1;
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.2f)
			{
				if (!iLocal_1782)
				{
					GlobalFunc_4935();
					if (GlobalFunc_10630(&uLocal_1496, "D2AAUD", "DS2A_DING", "DS2A_DING_1", 7, 0, 0))
					{
						if (GlobalFunc_2773(Local_48[6 /*2*/]))
						{
							VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 0);
						}
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
						STREAMING::NEW_LOAD_SCENE_START(-143.55f, -2489.59f, 45.58f, GlobalFunc_107(0.02f, 0.97f, -0.23f), 1000f, 0);
						iLocal_1782 = 1;
					}
				}
			}
			break;
		
		case 13:
			if (GlobalFunc_2773(func_886()))
			{
				iVar3 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_886());
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar3));
					WEAPON::REQUEST_WEAPON_ASSET(iLocal_1887, 31, 26);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.99f)
			{
				STREAMING::CLEAR_FOCUS();
				iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8203f, -2488.261f, 43.4412f, 0f, 0f, -34.5f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_886(), iLocal_1747, "missheistdocks2aswitchig_7", "IG_7_f_sniping_franklin", 1000f, -1000f, 16384, 0, 1148846080, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1748, iLocal_1747, "IG_7_f_sniping_cam", "missheistdocks2aswitchig_7");
				iLocal_1782 = 0;
				iLocal_1893++;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.5f)
			{
				if (!iLocal_1782)
				{
					iLocal_1782 = 1;
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START(-139.22f, -2486.47f, 44.71f, GlobalFunc_107(-0.83f, -0.56f, 0.06f), 300f, 0);
				}
			}
			break;
		
		case 14:
			if (GlobalFunc_2773(func_886()))
			{
				iVar3 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_886());
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar3));
					WEAPON::REQUEST_WEAPON_ASSET(iLocal_1887, 31, 26);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1747) > 0.999f)
			{
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_1887, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_664(Local_175[0 /*44*/]));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_663(Local_175[0 /*44*/]), 1065353216);
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
					CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
				}
				func_304(1, 0, 0, 3000, 0);
				RECORDING::_0x81CBAE94390F9F89();
				if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_887(), iLocal_1889, joaat("component_at_pi_supp")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_887(), iLocal_1889, joaat("component_at_pi_supp"));
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				if (GlobalFunc_2773(Local_48[6 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_48[6 /*2*/], 1f);
				}
				iLocal_1782 = 0;
				iLocal_1893++;
			}
			else if (!iLocal_1782)
			{
				iLocal_1782 = 1;
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-95.3159f, -2370.917f, 13.296f, 25f, 0);
			}
			break;
		
		case 15:
			GlobalFunc_5175(&uLocal_2010, "missheistdocks2aswitchig_6");
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 0);
			iLocal_1782 = 0;
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			func_867(1);
			iLocal_1893 = 0;
			break;
	}
	if (GlobalFunc_2773(func_886()) && iLocal_1893 > 6)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_886(), 29.3069f, -2545.384f, 1.2836f, -266.0822f, -2313.208f, 20f, 170f, 0, 1, 0) && !PED::IS_PED_RAGDOLL(func_886()))
		{
			func_234(7);
		}
	}
	if (GlobalFunc_2773(func_886()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_886(), -874.0031f, -1981.004f, 23.5805f, 10.8306f, -2628.968f, 81.1363f, 80f, 0, 1, 0))
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.01f);
		}
		else
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		}
	}
}

var func_663(int iParam0)//Position - 0x72E96
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (GlobalFunc_2773(iParam0) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	Var3 = { GlobalFunc_107(Var0) };
	return MISC::ATAN2(Var3.f_2, SYSTEM::VMAG(Var3.x, Var3.f_1, 0f));
}

float func_664(int iParam0)//Position - 0x72EE8
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_2773(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
		if (fVar3 > 180f)
		{
			fVar3 = (fVar3 - 360f);
		}
		if (fVar3 < -180f)
		{
			fVar3 = (fVar3 + 360f);
		}
	}
	return fVar3;
}




void func_668()//Position - 0x73060
{
	int iVar0;
	
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	while (!func_671(74, &uLocal_1852, 0, 1, 1, 1, 0))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START(-79.16f, -2355.64f, 1.87f, GlobalFunc_107(0.69f, -0.72f, 0.11f), 300f, 0);
		}
		SYSTEM::WAIT(0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(func_886(), 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_9140(&uLocal_1852, 0, 0, 2000, 0, 0, 0, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	STREAMING::SET_FOCUS_ENTITY(func_887());
	iLocal_1747 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	if (GlobalFunc_234(Local_48[6 /*2*/]))
	{
		VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
	}
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_48[6 /*2*/], 1) + Vector(0.3f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_48[6 /*2*/], 2), 2);
	if (!PED::IS_PED_INJURED(func_887()))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(func_887(), iLocal_1747, "missheistdocks2aswitchig_7", "IG_7_m_dinghy_f_sniping_michael", 1000f, -8f, 5, 0, 1148846080, 0);
	}
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1748, iVar0, "IG_7_m_dinghy_f_sniping_cam", "missheistdocks2aswitchig_7");
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1747, Local_48[6 /*2*/], 0);
	CAM::SET_CAM_ACTIVE(uLocal_1748, 1);
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
	iLocal_1782 = 0;
	iLocal_1783 = 0;
	GlobalFunc_4935();
	GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_GO", 7, 0, 0, 0);
}



bool func_671(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x73373
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_672(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_672(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x733A1
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
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
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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






















int func_694(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, bool bParam18, bool bParam19, int iParam20, bool bParam21, int iParam22)//Position - 0x75560
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, sParam16, bParam18, bParam19, sParam17, 0, iParam20, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}







void func_701()//Position - 0x75744
{
	switch (iLocal_1802)
	{
		case 0:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_COMON1", 7, 0, 0, 0))
				{
					iLocal_1802++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_FRESP", 7, 0, 0, 0))
				{
					iLocal_1803 = MISC::GET_GAME_TIMER() + 15000;
					iLocal_1802++;
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_1802++;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1803)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_FRGO", 7, 0, 0, 0))
					{
						iLocal_1802++;
					}
				}
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == GlobalFunc_4931(1, 1))
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_FRCAR", 7, 0, 0, 0))
						{
							iLocal_1802++;
						}
					}
				}
				else if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == GlobalFunc_4931(1, 2))
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_FRBIKE", 7, 0, 0, 0))
						{
							iLocal_1802++;
						}
					}
				}
				else
				{
					iLocal_1802++;
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_WHERE", 7, 0, 0, 0))
					{
						iLocal_1802++;
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_1783)
			{
				iLocal_1802++;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(func_886(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_230(41))
						{
							if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_01", 7, 0, 0, 0))
							{
								iLocal_1802++;
							}
						}
						else if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_02", 7, 0, 0, 0))
						{
							iLocal_1802++;
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_1783)
			{
				iLocal_1802++;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(func_886(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (GlobalFunc_5170())
					{
						if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_03", 7, 0, 0, 0))
						{
							iLocal_1802++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_1783)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_PARK", 7, 0, 0, 0))
					{
						iLocal_1802++;
					}
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DS2A_COOL", 7, 0, 0, 0))
				{
					iLocal_1802++;
				}
			}
			break;
		
		case 9:
			break;
	}
}


int func_703(int iParam0, struct<3> Param1, float fParam4)//Position - 0x75A68
{
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_7984())
		{
			if (GlobalFunc_7091(0f, 0f, 0f, 1))
			{
				GlobalFunc_10717(iParam0, Param1, fParam4, 0, 0, 0, 0, 1, joaat("buffalo2"), 0, 1);
				return 1;
			}
			else
			{
				GlobalFunc_10717(iParam0, -1161.404f, -1504.921f, 3.3707f, 318.8535f, 0, 0, 0, 0, 1, joaat("buffalo2"), 0, 1);
				return 1;
			}
		}
		else if (GlobalFunc_9748(iParam0, 1, Param1, fParam4, 1, 1))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 0), 1);
			return 1;
		}
	}
	else if (GlobalFunc_9748(iParam0, 1, Param1, fParam4, 1, 1))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 0), 1);
		return 1;
	}
	return 0;
}









void func_712()//Position - 0x75E33
{
	if (GlobalFunc_2773(func_886()))
	{
		GlobalFunc_173(&uLocal_1496, 3, func_886(), "FRANKLIN", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_886(), 1);
		GlobalFunc_11257(func_886(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_CONFIG_FLAG(func_886(), 32, 0);
		if (PLAYER::PLAYER_PED_ID() != func_886())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_886(), iLocal_1742);
		}
	}
	if (GlobalFunc_2773(func_147()))
	{
		GlobalFunc_173(&uLocal_1496, 2, func_147(), "TREVOR", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_147(), 1);
		GlobalFunc_11257(func_147(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_CONFIG_FLAG(func_147(), 32, 0);
		if (PLAYER::PLAYER_PED_ID() != func_147())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_147(), iLocal_1742);
		}
	}
	if (GlobalFunc_2773(func_887()))
	{
		func_577(func_887(), 0, 1);
		GlobalFunc_173(&uLocal_1496, 1, func_887(), "MICHAEL", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_887(), 1);
		GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_CONFIG_FLAG(func_887(), 32, 0);
		if (PLAYER::PLAYER_PED_ID() != func_887())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_887(), iLocal_1742);
		}
	}
}














void func_726(bool bParam0)//Position - 0x76360
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

void func_727()//Position - 0x76384
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iLocal_1893 == 0)
	{
		return;
	}
	if (GlobalFunc_188())
	{
		return;
	}
	if (iLocal_1892 == 0 || iLocal_1892 == 9)
	{
		GlobalFunc_2362(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		GlobalFunc_2362(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	}
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*15*/]))
		{
			if (!GlobalFunc_2773(Local_69[iVar0 /*15*/]))
			{
				if (Local_69[iVar0 /*15*/] == Local_69[0 /*15*/])
				{
					func_234(2);
				}
				if (Local_69[iVar0 /*15*/] == Local_69[1 /*15*/])
				{
					func_234(3);
				}
				if (Local_69[iVar0 /*15*/] == Local_69[2 /*15*/])
				{
					func_234(4);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[iVar0 /*15*/]));
			}
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		if (iLocal_1892 < 6)
		{
			func_789(&(Local_175[iVar0 /*44*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
		{
			if (PED::IS_PED_INJURED(Local_175[iVar0 /*44*/]))
			{
				GlobalFunc_703(&(Local_175[iVar0 /*44*/].f_1));
				if ((Local_175[iVar0 /*44*/].f_35 || iLocal_1808) || iLocal_1807)
				{
					if (iLocal_1892 == 6)
					{
						if (iVar0 == 12)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[iVar0 /*44*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_1848 = 1;
							}
						}
						if (iVar0 == 13)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[iVar0 /*44*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_1849 = 1;
							}
						}
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_175[iVar0 /*44*/]));
				}
				else if (!Local_175[iVar0 /*44*/].f_36)
				{
					GlobalFunc_565(613, 1, 0);
					Local_175[iVar0 /*44*/].f_36 = 1;
				}
				if (Local_175[iVar0 /*44*/].f_43)
				{
					Local_175[iVar0 /*44*/].f_43 = 0;
				}
			}
			if (Local_175[iVar0 /*44*/].f_43)
			{
				bVar1 = true;
			}
		}
		else
		{
			GlobalFunc_703(&(Local_175[iVar0 /*44*/].f_1));
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (GlobalFunc_74("DCKH_QUICK"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iVar0 /*2*/], 0))
			{
				if (Local_48[iVar0 /*2*/] == Local_48[3 /*2*/] && iLocal_1892 == 9)
				{
					func_234(11);
				}
				if (Local_48[iVar0 /*2*/] == Local_48[6 /*2*/] && iLocal_1892 == 0)
				{
					func_234(17);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (iLocal_1892 > 1 && iLocal_1892 < 8)
	{
		if ((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_1452[0 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_1452[0 /*7*/].f_2 + Vector(-2f, 3f, -0.75f), 10f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_1452[1 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_1452[1 /*7*/].f_2 + Vector(-2f, 3f, -0.75f), 10f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_1452[2 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_1452[2 /*7*/].f_2 + Vector(-2f, 3f, -0.75f), 10f))
		{
			func_234(20);
		}
	}
	if (iLocal_1892 > 0 && iLocal_1892 < 8)
	{
		if (GlobalFunc_2773(func_886()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_886())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				if (!ENTITY::IS_ENTITY_AT_COORD(func_886(), -142.1772f, -2494.121f, 45.5379f, 20f, 20f, 20f, 0, 1, 0))
				{
					if (!iLocal_1789 && !Local_1947.f_20)
					{
						GlobalFunc_164("dckh_retvant", 7500, 1);
						iLocal_1789 = 1;
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_1706))
					{
						uLocal_1706 = GlobalFunc_5104(-147.1491f, -2495.439f, 48.9368f, 0);
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(func_886(), -142.1772f, -2494.121f, 45.5379f, 40f, 40f, 40f, 0, 1, 0))
					{
						func_234(6);
					}
				}
				else
				{
					iLocal_1789 = 0;
					if (ENTITY::IS_ENTITY_AT_COORD(func_886(), -147.1491f, -2495.439f, 48.9368f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_1706))
						{
							HUD::REMOVE_BLIP(&uLocal_1706);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_1706))
			{
				HUD::REMOVE_BLIP(&uLocal_1706);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_1706))
	{
		HUD::REMOVE_BLIP(&uLocal_1706);
	}
	if (((iLocal_1892 == 0 && iLocal_1893 == 7) && GlobalFunc_2773(func_147())) && GlobalFunc_2773(func_886()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_886(), 1), ENTITY::GET_ENTITY_COORDS(func_147(), 1), 1) > 150f)
		{
			func_234(5);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_886(), 1), ENTITY::GET_ENTITY_COORDS(func_147(), 1), 1) > 100f)
		{
			if (!iLocal_1790)
			{
				GlobalFunc_164("CMN_FLEAVE", 7500, 1);
				iLocal_1790 = 1;
			}
		}
		else
		{
			iLocal_1790 = 0;
		}
	}
	if (iLocal_1892 < 7 && iLocal_1892 > 0)
	{
		if (GlobalFunc_2773(func_887()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(func_887(), -171.1301f, -2366.42f, 13.081f, 120f, 60f, 50f, 0, 1, 0))
				{
					if (!iLocal_1791)
					{
						GlobalFunc_164("dckh_retship", 7500, 1);
						iLocal_1791 = 1;
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(func_887(), -171.1301f, -2366.42f, 13.081f, 130f, 70f, 50f, 0, 1, 0))
					{
						func_234(14);
					}
				}
				else
				{
					iLocal_1791 = 0;
				}
				if (iLocal_1892 < 6)
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(func_887(), 1) };
					if (Var2.f_2 < 8f)
					{
						func_234(14);
					}
				}
			}
		}
	}
	else if (iLocal_1892 == 0)
	{
		if (GlobalFunc_2773(func_887()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -163.5593f, -2367.289f, 8.31906f, 1) > 1100f)
				{
					func_234(14);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_887(), 1), -163.5593f, -2367.289f, 8.31906f, 1) > 1000f)
				{
					if (!iLocal_1791)
					{
						GlobalFunc_164("DCKH_RET", 7500, 1);
						iLocal_1791 = 1;
					}
				}
				else
				{
					iLocal_1791 = 0;
				}
			}
		}
	}
	if (iLocal_1892 == 9)
	{
		if (GlobalFunc_2773(func_147()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_147())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_147(), 1), -163.5593f, -2367.289f, 8.31906f, 1) > 1100f)
				{
					func_234(8);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_147(), 1), -163.5593f, -2367.289f, 8.31906f, 1) > 1000f)
				{
					if (!iLocal_1792)
					{
						GlobalFunc_164("DCKH_RET", 7500, 1);
						iLocal_1792 = 1;
					}
				}
				else
				{
					iLocal_1792 = 0;
				}
			}
		}
	}
	if (bLocal_1746)
	{
		if (PLAYER::PLAYER_PED_ID() == func_887())
		{
			if (iLocal_1892 > 1 && iLocal_1892 <= 5)
			{
				if (((!Local_1452[0 /*7*/].f_6 || !Local_1452[1 /*7*/].f_6) || !Local_1452[2 /*7*/].f_6) || !Local_1452[3 /*7*/].f_6)
				{
					bVar5 = true;
					if (WEAPON::HAS_PED_GOT_WEAPON(func_887(), iLocal_1888, 0))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_887(), iLocal_1888) > 0)
						{
							bVar5 = false;
						}
					}
					if (bVar5)
					{
						func_234(16);
					}
				}
			}
		}
	}
	if (bLocal_1746)
	{
		if (iLocal_1892 < 7)
		{
			if (PLAYER::PLAYER_PED_ID() == func_886())
			{
				if (!(iLocal_1892 == 0 && iLocal_1893 < 10) && !iLocal_1893 == 0)
				{
					bVar6 = true;
					if (WEAPON::HAS_PED_GOT_WEAPON(func_886(), joaat("weapon_sniperrifle"), 0))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_886(), joaat("weapon_sniperrifle")) > 0)
						{
							bVar6 = false;
						}
					}
					if (WEAPON::HAS_PED_GOT_WEAPON(func_886(), joaat("weapon_heavysniper"), 0))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_886(), joaat("weapon_heavysniper")) > 0)
						{
							bVar6 = false;
						}
					}
					if (bVar6)
					{
						func_234(15);
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_234(19);
	}
	if (iLocal_1892 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
			{
				if (GlobalFunc_2773(func_886()))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[iVar0 /*44*/], func_886(), 1))
					{
						func_234(7);
					}
				}
				if (!PED::IS_PED_INJURED(Local_175[iVar0 /*44*/]))
				{
					if (PED::IS_PED_IN_COMBAT(Local_175[iVar0 /*44*/], 0))
					{
						func_234(7);
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_1892 == 0 || (iLocal_1892 == 1 && iLocal_1893 == 1))
	{
		if (iLocal_1808)
		{
			if (iLocal_1811)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1812)
				{
					func_234(7);
				}
			}
			else if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_NOSHT", 7, 0, 0, 0))
				{
					iLocal_1811 = 1;
					iLocal_1812 = MISC::GET_GAME_TIMER() + 5000;
				}
			}
		}
		if (!iLocal_1808)
		{
			iVar0 = 2;
			while (iVar0 <= 17)
			{
				if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
				{
					if (PED::IS_PED_IN_COMBAT(Local_175[iVar0 /*44*/], 0))
					{
						Local_175[iVar0 /*44*/].f_38 = 1;
						iVar7 = 2500;
					}
					else if (Local_175[iVar0 /*44*/].f_28 == 1)
					{
						Local_175[iVar0 /*44*/].f_38 = 1;
						iVar7 = 2500;
					}
					else if (Local_175[iVar0 /*44*/].f_42)
					{
						Local_175[iVar0 /*44*/].f_38 = 1;
						iVar7 = 2500;
					}
					else if (Local_175[iVar0 /*44*/].f_27 != 0)
					{
						Local_175[iVar0 /*44*/].f_38 = 1;
						iVar7 = 2500;
					}
					else
					{
						Local_175[iVar0 /*44*/].f_38 = 0;
					}
				}
				else
				{
					Local_175[iVar0 /*44*/].f_38 = 0;
				}
				iVar0++;
			}
			bLocal_1831 = false;
			iVar0 = 2;
			while (iVar0 <= 17)
			{
				if (Local_175[iVar0 /*44*/].f_38 && GlobalFunc_2773(Local_175[iVar0 /*44*/]))
				{
					bLocal_1831 = true;
				}
				iVar0++;
			}
			if (bLocal_1831)
			{
				if (!iLocal_1810)
				{
					iLocal_1745 = MISC::GET_GAME_TIMER();
					iLocal_1810 = 1;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_1745) > iVar7)
				{
					GlobalFunc_565(619, 1, 0);
					iLocal_1808 = 1;
				}
			}
			else
			{
				iLocal_1810 = 0;
			}
		}
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::PLAYER_PED_ID() == func_887())
		{
			if (iLocal_1892 < 6)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			}
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 23, 0);
	}
	if (iLocal_1892 >= 1 && iLocal_1892 <= 7)
	{
		if (((PLAYER::PLAYER_PED_ID() == func_886() && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) && !Local_1947.f_20) && !iLocal_1982)
		{
			bLocal_1874 = true;
		}
		else
		{
			bLocal_1874 = false;
		}
	}
	else
	{
		if (GRAPHICS::GET_USINGSEETHROUGH())
		{
			GRAPHICS::SET_SEETHROUGH(0);
		}
		iLocal_1873 = 0;
		bLocal_1874 = false;
	}
	if (bLocal_1874)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 54))
		{
			if (iLocal_1873)
			{
				iLocal_1873 = 0;
			}
			else
			{
				iLocal_1873 = 1;
			}
		}
	}
	if (iLocal_1873 && bLocal_1874)
	{
		GlobalFunc_5077();
		GRAPHICS::SET_SEETHROUGH(1);
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(0);
	}
	if (iLocal_1808 || iLocal_1807)
	{
		if (AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS"))
		{
			if (!AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
			{
				AUDIO::START_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", 0);
			}
		}
		if (iLocal_1892 > 1 && iLocal_1892 < 6)
		{
			func_787();
		}
	}
	else
	{
		if (AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
		{
			AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", 1);
		}
		if (iLocal_1892 > 1 && iLocal_1892 < 6)
		{
			func_781();
		}
	}
	if (!iLocal_1808 && !iLocal_1807)
	{
		if (iLocal_1892 > 1 && iLocal_1892 < 6)
		{
			if (GlobalFunc_2773(func_887()))
			{
				Var8 = { ENTITY::GET_ENTITY_COORDS(func_887(), 1) };
				iVar11 = 2;
				while (iVar11 <= 17)
				{
					if (GlobalFunc_2773(Local_175[iVar11 /*44*/]))
					{
						if (Local_175[iVar11 /*44*/].f_27 == 0)
						{
							if (PLAYER::PLAYER_PED_ID() == func_886())
							{
								if (Local_175[iVar11 /*44*/].f_28 == 1 || PED::IS_PED_IN_COMBAT(Local_175[iVar11 /*44*/], func_886()))
								{
									PED::SET_PED_SEEING_RANGE(Local_175[iVar11 /*44*/], 200f);
								}
								else
								{
									if (Var8.f_2 < 12f)
									{
										PED::SET_PED_SEEING_RANGE(Local_175[iVar11 /*44*/], 11f);
										PED::SET_PED_HEARING_RANGE(Local_175[iVar11 /*44*/], 11f);
										PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_175[iVar11 /*44*/], 2f);
									}
									else
									{
										PED::SET_PED_SEEING_RANGE(Local_175[iVar11 /*44*/], 8f);
										PED::SET_PED_HEARING_RANGE(Local_175[iVar11 /*44*/], 8f);
										PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_175[iVar11 /*44*/], 2f);
									}
									PED::SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Local_175[iVar11 /*44*/], -75f);
									PED::SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Local_175[iVar11 /*44*/], 60f);
								}
							}
							else
							{
								if (Var8.f_2 < 12f)
								{
									PED::SET_PED_SEEING_RANGE(Local_175[iVar11 /*44*/], 11f);
									PED::SET_PED_HEARING_RANGE(Local_175[iVar11 /*44*/], 11f);
								}
								else
								{
									PED::SET_PED_SEEING_RANGE(Local_175[iVar11 /*44*/], 8f);
									PED::SET_PED_HEARING_RANGE(Local_175[iVar11 /*44*/], 8f);
								}
								if (TASK::IS_PED_STILL(func_887()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_175[iVar11 /*44*/], 2f);
								}
								else if (TASK::IS_PED_WALKING(func_887()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_175[iVar11 /*44*/], 3f);
								}
								else if (TASK::IS_PED_RUNNING(func_887()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_175[iVar11 /*44*/], 4f);
								}
								else if (TASK::IS_PED_SPRINTING(func_887()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_175[iVar11 /*44*/], 5f);
								}
								PED::SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Local_175[iVar11 /*44*/], -30f);
								PED::SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Local_175[iVar11 /*44*/], 30f);
								if (SYSTEM::VDIST2(Var8, ENTITY::GET_ENTITY_COORDS(Local_175[iVar11 /*44*/], 1)) <= 225f)
								{
									PED::SET_PED_RESET_FLAG(Local_175[iVar11 /*44*/], 282, 1);
								}
							}
						}
					}
					iVar11++;
				}
			}
		}
		else
		{
			iVar12 = 0;
			while (iVar12 <= 25)
			{
				if (GlobalFunc_2773(Local_175[iVar12 /*44*/]))
				{
					PED::SET_PED_SEEING_RANGE(Local_175[iVar12 /*44*/], 200f);
					PED::SET_PED_HEARING_RANGE(Local_175[iVar12 /*44*/], 60f);
				}
				iVar12++;
			}
		}
	}
	else
	{
		iVar13 = 0;
		while (iVar13 <= 25)
		{
			if (GlobalFunc_2773(Local_175[iVar13 /*44*/]))
			{
				PED::SET_PED_SEEING_RANGE(Local_175[iVar13 /*44*/], 200f);
				PED::SET_PED_HEARING_RANGE(Local_175[iVar13 /*44*/], 60f);
			}
			iVar13++;
		}
	}
	if (iLocal_1892 < 6)
	{
		if (GlobalFunc_2773(func_887()) && PLAYER::PLAYER_PED_ID() != func_887())
		{
			if (iLocal_1808 || iLocal_1807)
			{
				PED::SET_PED_USING_ACTION_MODE(func_887(), 1, -1, 0);
			}
			else
			{
				PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
			}
		}
	}
	iVar14 = 0;
	while (iVar14 <= 25)
	{
		if (GlobalFunc_2773(Local_175[iVar14 /*44*/]))
		{
			if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				TASK::TASK_WANDER_STANDARD(Local_175[iVar0 /*44*/], 1193033728, 0);
			}
			if (PED::IS_PED_IN_COMBAT(Local_175[iVar14 /*44*/], 0) && PLAYER::PLAYER_PED_ID() == func_887())
			{
			}
		}
		iVar14++;
	}
	func_735();
	if (iLocal_1892 > 8)
	{
		func_733();
	}
	if (GlobalFunc_2773(func_887()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(func_887()))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_887(), joaat("weapon_unarmed"), 1);
		}
	}
	func_732();
	if (iLocal_1892 <= 6)
	{
		if (PLAYER::PLAYER_PED_ID() == func_886())
		{
			if (iLocal_1864)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (iLocal_1892 <= 1)
					{
						if (GlobalFunc_2773(Local_175[0 /*44*/]))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_664(Local_175[0 /*44*/]));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_663(Local_175[0 /*44*/]), 1065353216);
							CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(10f);
							iLocal_1864 = 0;
						}
					}
					else if (GlobalFunc_2773(func_887()))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_664(func_887()));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_663(func_887()), 1065353216);
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(10f);
						iLocal_1864 = 0;
					}
				}
			}
		}
	}
	if (GlobalFunc_2773(func_886()))
	{
		iVar15 = 0;
		while (iVar15 <= 25)
		{
			if (GlobalFunc_2773(Local_175[iVar15 /*44*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[iVar15 /*44*/], func_886(), 1))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_175[iVar15 /*44*/], 50);
				}
			}
			iVar15++;
		}
	}
	if ((iLocal_1892 < 6 && !iLocal_1808) && !iLocal_1807)
	{
		func_730();
	}
	if (((iLocal_1892 > 1 && iLocal_1892 < 7) && GlobalFunc_2773(func_886())) && GlobalFunc_2773(func_887()))
	{
		if (PLAYER::PLAYER_PED_ID() == func_886())
		{
			if (!HUD::DOES_BLIP_EXIST(Local_69[1 /*15*/].f_1))
			{
				Local_69[1 /*15*/].f_1 = GlobalFunc_6797(func_887(), 0, 145);
				HUD::SET_BLIP_PRIORITY(Local_69[1 /*15*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_69[1 /*15*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_69[1 /*15*/].f_1));
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_69[1 /*15*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_69[1 /*15*/].f_1));
	}
	if ((iLocal_1892 > 1 && iLocal_1892 < 6) && PLAYER::PLAYER_PED_ID() == func_887())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_886()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(func_886(), 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_886()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_886(), 0);
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 608);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 614);
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
		}
		else
		{
			GlobalFunc_504(0, 614);
			GlobalFunc_503(0, -1);
		}
	}
}



void func_730()//Position - 0x77502
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return;
	}
	iVar1 = 2;
	while (iVar1 <= 17)
	{
		if ((GlobalFunc_2773(Local_175[iVar1 /*44*/]) && GlobalFunc_2773(func_887())) && GlobalFunc_2773(func_886()))
		{
			if (Local_175[iVar1 /*44*/].f_40)
			{
				return;
			}
			if (!PED::IS_PED_IN_COMBAT(Local_175[iVar1 /*44*/], 0))
			{
				if (iVar0 == 5)
				{
					iVar0 = 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_175[iVar1 /*44*/], func_887(), 1))
				{
					iVar0 = 5;
				}
				if (iVar0 == 3)
				{
					iVar0 = 0;
				}
				if (PED::CAN_PED_SEE_HATED_PED(Local_175[iVar1 /*44*/], func_887()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_175[iVar1 /*44*/]))
				{
					iVar0 = 3;
				}
				if (iVar0 == 2)
				{
					iVar0 = 0;
				}
				if (iLocal_1892 > 1)
				{
					if (iVar0 == 0)
					{
						if (PED::HAS_PED_RECEIVED_EVENT(Local_175[iVar1 /*44*/], 122) || PED::HAS_PED_RECEIVED_EVENT(Local_175[iVar1 /*44*/], 89))
						{
							iVar0 = 2;
						}
						if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(func_887()))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(func_887(), &iVar3, 1))
							{
								if (PED::IS_PED_SHOOTING(func_887()))
								{
									if (iVar3 != joaat("weapon_stickybomb"))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1)) < 2025f)
										{
											iVar0 = 2;
										}
									}
								}
							}
						}
					}
				}
				if (iVar0 == 1)
				{
					iVar0 = 0;
				}
				if (iVar0 == 0 || iVar0 == 2)
				{
					if (PLAYER::PLAYER_PED_ID() == func_886())
					{
						if (MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[iVar1 /*44*/], -5f, -5f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_175[iVar1 /*44*/], 5f, 5f, 1f)))
						{
							iVar0 = 1;
							if (iLocal_1797)
							{
								if (GlobalFunc_5170())
								{
									GlobalFunc_10618(&uLocal_1496, "D2AAUD", "DH2A_MISS", 7, 0, 0, 0);
								}
							}
						}
					}
					else if (PLAYER::PLAYER_PED_ID() == func_887())
					{
						if (iLocal_1866)
						{
							iVar0 = 0;
						}
						else if (PED::HAS_PED_RECEIVED_EVENT(Local_175[iVar1 /*44*/], 123))
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 4)
				{
					iVar0 = 0;
				}
				if (Local_175[iVar1 /*44*/].f_27 == 0)
				{
					if (iVar0 == 0)
					{
						if (PED::HAS_PED_RECEIVED_EVENT(Local_175[iVar1 /*44*/], 5))
						{
							iVar0 = 4;
						}
						if (iLocal_1892 < 2)
						{
							iVar8 = 2;
						}
						else
						{
							iVar8 = 0;
						}
						iVar7 = iVar8;
						while (iVar7 <= 17)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar7 /*44*/]) && !iVar7 == 15)
							{
								if (PED::IS_PED_INJURED(Local_175[iVar7 /*44*/]))
								{
									Var4 = { ENTITY::GET_ENTITY_COORDS(Local_175[iVar7 /*44*/], 0) };
									if ((Var4.f_2 < 10.5f && Var4.f_2 > 8.3f) || func_629(Local_175[iVar1 /*44*/], Local_3567[8 /*7*/]))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1), Var4, 1) < 15f)
										{
											if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_175[iVar1 /*44*/], Local_175[iVar7 /*44*/]))
											{
												iVar0 = 4;
												Local_175[iVar1 /*44*/].f_42 = 1;
												iVar2 = iVar7;
											}
										}
									}
								}
								else if (PED::IS_PED_SHOOTING(Local_175[iVar7 /*44*/]))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_175[iVar7 /*44*/], 1), ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1)) < 900f)
									{
										if (!ENTITY::IS_ENTITY_OCCLUDED(Local_175[iVar1 /*44*/]))
										{
											iVar0 = 2;
										}
									}
								}
							}
							iVar7++;
						}
					}
				}
				if (iVar0 != 0)
				{
					if (Local_175[iVar1 /*44*/].f_27 != iVar0)
					{
						iLocal_1835 = -1;
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1708);
						switch (iVar0)
						{
							case 5:
								PED::SET_PED_SEEING_RANGE(Local_175[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_175[iVar1 /*44*/], 16f);
								TASK::TASK_COMBAT_PED(0, func_887(), 0, 16);
								break;
							
							case 3:
								iLocal_1835 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
								PED::SET_PED_SEEING_RANGE(Local_175[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_175[iVar1 /*44*/], 16f);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_887(), 1500, 0);
								TASK::TASK_COMBAT_PED(0, func_887(), 0, 16);
								if (!Local_175[iVar1 /*44*/].f_43)
								{
									if (!GlobalFunc_74("DCKH_QUICK"))
									{
										GlobalFunc_159("DCKH_QUICK", -1);
									}
									Local_175[iVar1 /*44*/].f_43 = 1;
								}
								break;
							
							case 2:
								PED::SET_PED_SEEING_RANGE(Local_175[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_175[iVar1 /*44*/], 16f);
								iLocal_1835 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_887(), 1000, 0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_887(), 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 2f, 0, 1f, 1082130432, 1, 0, 0, -957453492);
								if (!Local_175[iVar1 /*44*/].f_43)
								{
									if (!GlobalFunc_74("DCKH_QUICK"))
									{
										GlobalFunc_159("DCKH_QUICK", -1);
									}
									Local_175[iVar1 /*44*/].f_43 = 1;
								}
								break;
							
							case 4:
								PED::SET_PED_SEEING_RANGE(Local_175[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_175[iVar1 /*44*/], 16f);
								PED::SET_PED_ALERTNESS(Local_175[iVar1 /*44*/], 2);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar2 /*44*/], 0), ENTITY::GET_ENTITY_COORDS(Local_175[iVar2 /*44*/], 0), 2f, 0, 3f, 1082130432, 1, 0, 0, -957453492);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_175[iVar1 /*44*/], 1) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 0, 0);
								iLocal_1835 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
								if (!Local_175[iVar1 /*44*/].f_43)
								{
									if (!GlobalFunc_74("DCKH_QUICK"))
									{
										GlobalFunc_159("DCKH_QUICK", -1);
									}
									Local_175[iVar1 /*44*/].f_43 = 1;
								}
								break;
							
							case 1:
								if (PLAYER::PLAYER_PED_ID() == func_887())
								{
									PED::SET_PED_SEEING_RANGE(Local_175[iVar1 /*44*/], 16f);
									PED::SET_PED_HEARING_RANGE(Local_175[iVar1 /*44*/], 16f);
									iLocal_1835 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, func_887(), 1000, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_887(), 1), ENTITY::GET_ENTITY_COORDS(func_887(), 1), 1f, 0, 1f, 1082130432, 1, 0, 0, -957453492);
									if (!Local_175[iVar1 /*44*/].f_43)
									{
										if (!GlobalFunc_74("DCKH_QUICK"))
										{
											GlobalFunc_159("DCKH_QUICK", -1);
										}
										Local_175[iVar1 /*44*/].f_43 = 1;
									}
								}
								else
								{
									switch (Local_175[iVar1 /*44*/].f_28)
									{
										case 1:
											func_731(iVar1);
											if (!Local_175[iVar1 /*44*/].f_43)
											{
												if (!GlobalFunc_74("DCKH_QUICK"))
												{
													GlobalFunc_159("DCKH_QUICK", -1);
												}
												Local_175[iVar1 /*44*/].f_43 = 1;
											}
											break;
										
										case 0:
											Local_175[iVar1 /*44*/].f_28 = 1;
											func_731(iVar1);
											iLocal_1835 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
											if (!HUD::DOES_BLIP_EXIST(Local_175[iVar1 /*44*/].f_1))
											{
												Local_175[iVar1 /*44*/].f_1 = GlobalFunc_6797(Local_175[iVar1 /*44*/], 1, 145);
											}
											if (!Local_175[iVar1 /*44*/].f_43)
											{
												if (!GlobalFunc_74("DCKH_QUICK"))
												{
													GlobalFunc_159("DCKH_QUICK", -1);
												}
												Local_175[iVar1 /*44*/].f_43 = 1;
											}
											break;
										}
								}
								break;
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1708);
						if (GlobalFunc_2773(Local_175[iVar1 /*44*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_175[iVar1 /*44*/]);
							TASK::TASK_PERFORM_SEQUENCE(Local_175[iVar1 /*44*/], uLocal_1708);
						}
						Local_175[iVar1 /*44*/].f_27 = iVar0;
						if (iLocal_1835 >= 0)
						{
							Local_175[iVar1 /*44*/].f_29 = (MISC::GET_GAME_TIMER() + iLocal_1835);
						}
						else
						{
							Local_175[iVar1 /*44*/].f_29 = -1;
						}
					}
				}
				else if (Local_175[iVar1 /*44*/].f_29 >= 0)
				{
					if (MISC::GET_GAME_TIMER() >= Local_175[iVar1 /*44*/].f_29)
					{
						if (Local_175[iVar1 /*44*/].f_28 != 1)
						{
							if (!PED::IS_PED_INJURED(Local_175[iVar1 /*44*/]))
							{
								func_619(iVar1);
							}
						}
						Local_175[iVar1 /*44*/].f_27 = 0;
						Local_175[iVar1 /*44*/].f_29 = -1;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_731(int iParam0)//Position - 0x77DA6
{
	switch ((iParam0 % 2))
	{
		case 0:
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "enter_crouch_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "crouching_idle_a", 8f, -2f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", sLocal_1834, 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
	TASK::TASK_COMBAT_PED(0, func_886(), 0, 16);
}

void func_732()//Position - 0x77E30
{
	float fVar0;
	
	fVar0 = 0.1f;
	if (!iLocal_1865)
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_SNIPING", 0))
		{
			iLocal_1865 = 1;
		}
	}
	switch (iLocal_1868)
	{
		case 0:
			if (iLocal_1866)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_ZIP", ENTITY::GET_ENTITY_COORDS(func_886(), 1) * Vector(fVar0, fVar0, fVar0) + Local_1870 * FtoV((1f - fVar0)), "DOCKS_HEIST_FINALE_2A_SOUNDS", 0, 0, 0);
				if (GlobalFunc_2773(iLocal_1869))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1869, iLocal_1887, 0))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPLAT", Local_1870, "DOCKS_HEIST_FINALE_2A_SOUNDS", 0, 0, 0);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPRAY", ENTITY::GET_ENTITY_COORDS(func_886(), 1) * FtoV((-1f * fVar0)) + Local_1870 * FtoV((1f + fVar0)), "DOCKS_HEIST_FINALE_2A_SOUNDS", 0, 0, 0);
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPLAT", Local_1870, "DOCKS_HEIST_FINALE_2A_SOUNDS", 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPRAY", ENTITY::GET_ENTITY_COORDS(func_886(), 1) * FtoV((-1f * fVar0)) + Local_1870 * FtoV((1f + fVar0)), "DOCKS_HEIST_FINALE_2A_SOUNDS", 0, 0, 0);
				}
				iLocal_1868++;
			}
			break;
		
		case 1:
			if (!iLocal_1866)
			{
				iLocal_1868 = 0;
			}
			break;
	}
}

void func_733()//Position - 0x77F58
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (PLAYER::PLAYER_PED_ID() == func_887())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1720))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_1883, "bombdistance", fVar6);
				if (!iLocal_1880)
				{
					if (PLAYER::PLAYER_PED_ID() == func_887() && !Local_1947.f_20)
					{
						if (iLocal_1740)
						{
							func_734();
						}
					}
				}
			}
			if (PED::IS_PED_SWIMMING(func_887()))
			{
				HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
			}
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_1877))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1877, "rebreather", func_887(), "docks_heist_finale_2a_sounds", 0, 0);
			}
		}
		if (Var3.f_2 < 0f && Var0.f_2 < 0f)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_1876))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_1876, "uw_ambience", 0, 1);
			}
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				if (!iLocal_1880)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_1877))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1877, "rebreather", func_887(), "docks_heist_finale_2a_sounds", 0, 0);
					}
					fVar7 = ENTITY::GET_ENTITY_SPEED(func_887());
					if (fVar7 > 1f)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iLocal_1879))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1879, "foot_swish", func_887(), "docks_heist_finale_2a_sounds", 0, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_1879, "swimspeed", ((fVar7 - 1f) / 4f));
						}
						else
						{
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_1879, "swimspeed", ((fVar7 - 1f) / 4f));
						}
					}
					else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1879))
					{
						AUDIO::STOP_SOUND(iLocal_1879);
					}
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_147() || Local_1947.f_20)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1883))
				{
					AUDIO::STOP_SOUND(iLocal_1883);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1877))
				{
					AUDIO::STOP_SOUND(iLocal_1877);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1879))
				{
					AUDIO::STOP_SOUND(iLocal_1879);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1878))
				{
					AUDIO::STOP_SOUND(iLocal_1878);
				}
			}
		}
		else
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1883))
			{
				AUDIO::STOP_SOUND(iLocal_1883);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dock_heist_underwater_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("dock_heist_underwater_scene");
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1876))
			{
				AUDIO::STOP_SOUND(iLocal_1876);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1877))
			{
				AUDIO::STOP_SOUND(iLocal_1877);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1879))
			{
				AUDIO::STOP_SOUND(iLocal_1879);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1878))
			{
				AUDIO::STOP_SOUND(iLocal_1878);
			}
		}
	}
}

void func_734()//Position - 0x781B5
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1720))
	{
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), Var0, 0);
	}
	if (iLocal_1739)
	{
		func_401();
		fLocal_1736 = 0f;
		fLocal_1737 = fVar3;
		fLocal_1737 = GlobalFunc_253(fLocal_1737, 10f, 200f);
		fLocal_1738 = (fLocal_1737 * 0.025f);
		iLocal_1739 = 0;
		AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1883, "sonar_pulse", ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), "docks_heist_finale_2a_sounds", 0, 0, 0);
	}
	else
	{
		func_401();
		fLocal_1736 = (fLocal_1736 + ((fLocal_1738 * 30f) * SYSTEM::TIMESTEP()));
		fLocal_1736 = GlobalFunc_253(fLocal_1736, 0f, fLocal_1737);
		uLocal_1735 = HUD::ADD_BLIP_FOR_RADIUS(ENTITY::GET_ENTITY_COORDS(iLocal_1720, 1), fLocal_1736);
		HUD::SET_BLIP_ALPHA(uLocal_1735, 255);
		HUD::SET_BLIP_COLOUR(uLocal_1735, 4);
		HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_1735, 1);
		HUD::SET_RADIUS_BLIP_EDGE(uLocal_1735, 1);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_1735, 0);
		if (fLocal_1736 >= fLocal_1737)
		{
			iLocal_1739 = 1;
		}
	}
}

void func_735()//Position - 0x782AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1981)
	{
		if (PLAYER::PLAYER_PED_ID() == func_887())
		{
			GlobalFunc_2779(&iLocal_1903, 1, 0, 2);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_886())
		{
			GlobalFunc_2779(&iLocal_1903, 0, 1, 2);
		}
		if (iLocal_1983 == 0)
		{
			if (!Local_1947.f_20)
			{
				if (func_764())
				{
					GlobalFunc_565(612, 1, 0);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					if (iLocal_1892 > 0 && iLocal_1892 < 6)
					{
						if (iLocal_1903.f_7 == 1)
						{
							if (GlobalFunc_2773(func_886()))
							{
								STREAMING::SET_FOCUS_ENTITY(func_886());
								TASK::CLEAR_PED_TASKS(func_886());
							}
						}
					}
					if (iLocal_1892 >= 2 && iLocal_1892 <= 4)
					{
						if (iLocal_1903.f_7 == 0)
						{
							iVar1 = 2;
							while (iVar1 <= 17)
							{
								if (HUD::DOES_BLIP_EXIST(Local_175[iVar1 /*44*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_175[iVar1 /*44*/].f_1));
								}
								iVar1++;
							}
							if (!iLocal_1808)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPING_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPING_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
							}
							else
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SNIPING_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
							}
						}
						else if (iLocal_1903.f_7 == 1)
						{
							if (!iLocal_1808)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PLANT_BOMBS_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_SCENE");
							}
							else
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
							}
						}
					}
					Local_1947.f_20 = 1;
				}
			}
		}
		iVar0 = func_739(2);
		if (iVar0 == 2)
		{
			if (Local_1947.f_18)
			{
				if (!Local_1947.f_19)
				{
					if (GlobalFunc_10980(&iLocal_1903, 1, 1, 0))
					{
						Local_1947.f_19 = 1;
						if (GlobalFunc_2773(Local_69[0 /*15*/]))
						{
							if (iLocal_1903[1] == 0)
							{
								Local_69[0 /*15*/] = PLAYER::PLAYER_PED_ID();
							}
							else
							{
								Local_69[0 /*15*/] = iLocal_1903[1];
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_69[0 /*15*/], 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_886(), iLocal_1742);
							}
						}
						if (GlobalFunc_2773(Local_69[2 /*15*/]))
						{
							if (iLocal_1903[2] == 0)
							{
								Local_69[2 /*15*/] = PLAYER::PLAYER_PED_ID();
							}
							else
							{
								Local_69[2 /*15*/] = iLocal_1903[2];
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[2 /*15*/], 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_69[2 /*15*/], 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_147(), iLocal_1742);
							}
						}
						if (GlobalFunc_2773(Local_69[1 /*15*/]))
						{
							if (iLocal_1903[0] == 0)
							{
								Local_69[1 /*15*/] = PLAYER::PLAYER_PED_ID();
								if (iLocal_1892 == 1)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("DH2A_1ST_SWITCH");
								}
								if (iLocal_1892 == 0)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("DH2A_RIB");
								}
							}
							else
							{
								Local_69[1 /*15*/] = iLocal_1903[0];
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[1 /*15*/], 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_69[1 /*15*/], 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_887(), iLocal_1742);
							}
						}
					}
				}
				else if (Local_1947.f_12 == func_886() && iLocal_1892 >= 1)
				{
					if (ENTITY::GET_ENTITY_HEALTH(func_887()) < 200)
					{
						ENTITY::SET_ENTITY_HEALTH(func_887(), 200);
					}
				}
				else if (Local_1947.f_12 == func_887())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
					if (!iLocal_1875)
					{
						iLocal_1875 = 1;
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
			if (iLocal_1892 == 1 && iLocal_1903.f_7 == 0)
			{
				GlobalFunc_730(90f);
			}
			if (GlobalFunc_2773(Local_48[3 /*2*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 0);
			}
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (iLocal_1892 == 0)
			{
				if (iLocal_1893 < 14)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_887(), -1817882002) != 1)
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[3 /*2*/], 20f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[3 /*2*/], 1, 1);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_887(), Local_48[6 /*2*/], -457.7198f, -2333.417f, 0.70821f, 15f, 0, joaat("dinghy"), 262144, 5f, -1f);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_1755) > 4000 && !iLocal_1753)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("DH2A_RIB");
						iLocal_1753 = 1;
					}
				}
			}
			else if (GlobalFunc_2773(func_886()) && GlobalFunc_2773(func_887()))
			{
				if (iLocal_1892 == 5 && iLocal_1893 > 2)
				{
					TASK::CLEAR_PED_TASKS(func_886());
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_886(), 1630799643) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(func_886(), func_887(), -1, 1);
				}
			}
		}
		if (iVar0 == 1 && !Local_1947.f_20)
		{
			if (PLAYER::PLAYER_PED_ID() == func_887())
			{
				if (iLocal_1892 < 7 && iLocal_1892 > 1)
				{
					ENTITY::SET_ENTITY_COORDS(func_886(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
					if (!iLocal_1808)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(func_887(), iLocal_1889, 0))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(func_887(), &iVar2, 1))
							{
								if (iVar2 != iLocal_1889)
								{
									WEAPON::SET_CURRENT_PED_WEAPON(func_887(), iLocal_1889, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				if (PLAYER::PLAYER_PED_ID() == func_886())
				{
					if (GlobalFunc_2773(func_887()))
					{
						if (iLocal_1892 >= 1)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_664(func_887()));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_663(func_887()), 1065353216);
						}
						else
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_664(Local_175[0 /*44*/]));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_663(Local_175[0 /*44*/]), 1065353216);
						}
						PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
						PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
						HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
						iLocal_1864 = 1;
					}
				}
				if (PLAYER::PLAYER_PED_ID() == func_147())
				{
					if (GlobalFunc_2773(Local_48[3 /*2*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_48[3 /*2*/], 0);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[3 /*2*/], 20f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[3 /*2*/], 1, 1);
					}
				}
				iLocal_1756 = 0;
				iLocal_1757 = 0;
			}
			if (iLocal_1983)
			{
				iLocal_1983 = 0;
			}
			if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			MISC::SET_TIME_SCALE(1f);
			STREAMING::CLEAR_FOCUS();
			GlobalFunc_5883(&Local_1947);
		}
	}
}




int func_739(int iParam0)//Position - 0x78971
{
	if (!Local_1947.f_20)
	{
		return 0;
	}
	else if (iLocal_1892 == 5 && iLocal_1893 > 2)
	{
		if (func_758(&Local_1947, 0f, 0f, iParam0, iLocal_1984, iLocal_1985, 800))
		{
			return 2;
		}
		else
		{
			Local_1947.f_20 = 0;
			return 1;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_1947.f_10))
	{
		if (func_757(&Local_1947, Local_1947.f_10, 0, 0, 1148829696, 1148829696, 0, 0, 0, 2))
		{
			return 2;
		}
		else
		{
			Local_1947.f_20 = 0;
			return 1;
		}
	}
	else
	{
		if (iLocal_1892 == 9)
		{
			if (CAM::DOES_CAM_EXIST(uLocal_1707))
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				if (CAM::IS_CAM_RENDERING(uLocal_1707))
				{
					CAM::SET_CAM_ACTIVE(uLocal_1707, 0);
				}
				CAM::DESTROY_CAM(uLocal_1707, 0);
			}
		}
		if (iLocal_1892 > 1 && iLocal_1892 < 6)
		{
			if (func_740(&Local_1947, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				return 2;
			}
			else
			{
				Local_1947.f_20 = 0;
				return 1;
			}
		}
		else if (func_740(&Local_1947, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
		{
			return 2;
		}
		else
		{
			Local_1947.f_20 = 0;
			return 1;
		}
	}
	return 0;
}

int func_740(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x78AAB
{
	return GlobalFunc_9227(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

















int func_757(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x793E5
{
	return GlobalFunc_9227(uParam0, uParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, iParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_758(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7940C
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
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
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
				GlobalFunc_7723(0, 1);
				CAM::SET_CAM_ACTIVE(uParam0->f_9, 1);
				if (iParam5 == 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				else if (iParam5 > 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, 1, iParam5, 1, 0, 0);
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
				uParam0->f_28 = func_759(uParam0->f_9);
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
							fVar28 = func_759(uParam0->f_9);
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
				CAM::RENDER_SCRIPT_CAMS(false, 1, 100, 1, 0, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, 1000, 1, 0, 0);
			}
		}
		else if (iParam4 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, 1, iParam4, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
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

float func_759(int iParam0)//Position - 0x7A7CA
{
	struct<3> Var0;
	
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		Var0 = { CAM::GET_CAM_COORD(iParam0) };
		return Var0.f_2;
	}
	return 0f;
}





int func_764()//Position - 0x7A977
{
	if (GlobalFunc_10238(&iLocal_1903, 0, 1))
	{
		if (!GlobalFunc_2778(&iLocal_1903, 3))
		{
			Local_1947.f_12 = iLocal_1903[iLocal_1903.f_7];
			return 1;
		}
	}
	return 0;
}

















void func_781()//Position - 0x7BF54
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
		{
			if (MISC::GET_GAME_TIMER() > Local_175[iVar0 /*44*/].f_34 && Local_175[iVar0 /*44*/].f_27 == 0)
			{
				GlobalFunc_173(&uLocal_1496, (iVar0 % 4) + 4, Local_175[iVar0 /*44*/], func_786(iVar0), 0, 1);
				GlobalFunc_10618(&uLocal_1496, "D2AAUD", func_785(iVar0), 6, 1, 0, 0);
				Local_175[iVar0 /*44*/].f_34 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000));
			}
			else if (Local_175[iVar0 /*44*/].f_27 != 0)
			{
				bVar1 = true;
				if (GlobalFunc_5170() && !iLocal_1767)
				{
					if (!Local_175[iVar0 /*44*/].f_41)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_175[iVar0 /*44*/]))
						{
							GlobalFunc_173(&uLocal_1496, (iVar0 % 4) + 4, Local_175[iVar0 /*44*/], func_786(iVar0), 0, 1);
							Local_175[iVar0 /*44*/].f_41 = 1;
							switch (Local_175[iVar0 /*44*/].f_27)
							{
								case 3:
									GlobalFunc_10618(&uLocal_1496, "D2AAUD", func_784(iVar0), 7, 0, 0, 0);
									iLocal_1767 = 1;
									break;
								
								case 2:
								case 1:
									GlobalFunc_10618(&uLocal_1496, "D2AAUD", func_783(iVar0), 7, 0, 0, 0);
									iLocal_1767 = 1;
									break;
								
								case 4:
									GlobalFunc_10618(&uLocal_1496, "D2AAUD", func_782(iVar0), 7, 0, 0, 0);
									iLocal_1767 = 1;
									break;
								}
							}
						}
					}
				}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (iLocal_1767)
		{
			iLocal_1767 = 0;
		}
	}
}

char* func_782(int iParam0)//Position - 0x7C0D4
{
	char* sVar0;
	
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MWFIND1";
			break;
		
		case 1:
			sVar0 = "DH2A_MWFIND2";
			break;
		
		case 2:
			sVar0 = "DH2A_MWFIND3";
			break;
		
		case 3:
			sVar0 = "DH2A_MWFIND4";
			break;
	}
	return sVar0;
}

char* func_783(int iParam0)//Position - 0x7C127
{
	char* sVar0;
	
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MWHEAR1";
			break;
		
		case 1:
			sVar0 = "DH2A_MWHEAR2";
			break;
		
		case 2:
			sVar0 = "DH2A_MWHEAR3";
			break;
		
		case 3:
			sVar0 = "DH2A_MWHEAR4";
			break;
	}
	return sVar0;
}

char* func_784(int iParam0)//Position - 0x7C17A
{
	char* sVar0;
	
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MWSEE1";
			break;
		
		case 1:
			sVar0 = "DH2A_MWSEE2";
			break;
		
		case 2:
			sVar0 = "DH2A_MWSEE3";
			break;
		
		case 3:
			sVar0 = "DH2A_MWSEE4";
			break;
	}
	return sVar0;
}

char* func_785(int iParam0)//Position - 0x7C1CD
{
	char* sVar0;
	
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MERC3";
			break;
		
		case 1:
			sVar0 = "DH2A_MERC2";
			break;
		
		case 2:
			sVar0 = "DH2A_MWPAT3";
			break;
		
		case 3:
			sVar0 = "DH2A_MERC4";
			break;
	}
	return sVar0;
}

char* func_786(int iParam0)//Position - 0x7C220
{
	char* sVar0;
	
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "MERRYWEATHER1";
			break;
		
		case 1:
			sVar0 = "MERRYWEATHER2";
			break;
		
		case 2:
			sVar0 = "MERRYWEATHER3";
			break;
		
		case 3:
			sVar0 = "MERRYWEATHER4";
			break;
	}
	return sVar0;
}

void func_787()//Position - 0x7C273
{
	int iVar0;
	
	if (iLocal_1847)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
		{
			if (GlobalFunc_5170())
			{
				if (Local_175[iVar0 /*44*/].f_27 != 0)
				{
					GlobalFunc_173(&uLocal_1496, (iVar0 % 4) + 4, Local_175[iVar0 /*44*/], func_786(iVar0), 0, 1);
					GlobalFunc_10618(&uLocal_1496, "D2AAUD", func_788(iVar0), 7, 0, 0, 0);
					iLocal_1847 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

char* func_788(int iParam0)//Position - 0x7C2EF
{
	char* sVar0;
	
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MERC1";
			break;
		
		case 1:
			sVar0 = "DH2A_MERC";
			break;
		
		case 2:
			sVar0 = "DH2A_ARL3";
			break;
		
		case 3:
			sVar0 = "DH2A_MWALR4";
			break;
	}
	return sVar0;
}

void func_789(var uParam0)//Position - 0x7C342
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		GlobalFunc_703(&(uParam0->f_1));
		return;
	}
	if (PED::IS_PED_INJURED(*uParam0))
	{
		GlobalFunc_703(&(uParam0->f_1));
		return;
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
		{
			uParam0->f_1 = GlobalFunc_6797(*uParam0, 1, 145);
		}
	}
	else if (uParam0->f_43)
	{
		HUD::SET_BLIP_FLASHES(uParam0->f_1, 1);
	}
	else
	{
		HUD::SET_BLIP_FLASHES(uParam0->f_1, 0);
	}
}



void func_792()//Position - 0x7C427
{
	if (iLocal_1896 == 1)
	{
		if (iLocal_1891 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				func_867(iLocal_1897);
			}
			if ((iLocal_1892 < 8 && iLocal_1894 > 7) || (iLocal_1892 > 7 && iLocal_1894 < 8))
			{
			}
		}
		else if (iLocal_1891 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(0);
				CUTSCENE::REMOVE_CUTSCENE();
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			func_814();
			GlobalFunc_762(&uLocal_2010);
			func_812(iLocal_1892);
			while (!GlobalFunc_7725(&uLocal_2010))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1892)
			{
				case 0:
					func_808();
					break;
				
				case 1:
					func_807();
					break;
				
				case 2:
					func_806();
					break;
				
				case 3:
					func_805();
					break;
				
				case 4:
					func_804();
					break;
				
				case 5:
					func_803();
					break;
				
				case 6:
					func_802();
					break;
				
				case 7:
					func_800();
					break;
				
				case 8:
					func_799();
					break;
				
				case 9:
					func_796();
					break;
				
				case 10:
					func_793();
					break;
			}
			func_712();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_1896 = 0;
		}
	}
}

void func_793()//Position - 0x7C5A3
{
	if (func_869(2, 1, 1))
	{
		func_583(1);
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -332.2139f, -2570.991f, 5.001f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 97.2111f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		Local_48[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), -466.7967f, -2381.379f, -12.1213f, 0f, 1, 1);
		iLocal_1720 = OBJECT::CREATE_OBJECT(joaat("prop_military_pickup_01"), -191.1227f, -2331.338f, -19.40053f, 1, 1, 0);
		CUTSCENE::REQUEST_CUTSCENE("LSDH_2A_EXT", 8);
		SCRIPT::REQUEST_SCRIPT("docks2ASubHandler");
		GlobalFunc_4967(0, -1, 1);
		func_378(1, 1, 0, 0, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}



void func_796()//Position - 0x7C77C
{
	if (func_869(0, 1, 1))
	{
		func_583(1);
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(func_887(), -90.4927f, -2288.003f, -1.3081f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_887(), 130.4705f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (!GlobalFunc_2773(Local_48[6 /*2*/]))
		{
			Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -78.1857f, -2287.653f, 0f, 56.7927f, 1, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
		}
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
		GlobalFunc_11047(func_887(), 10);
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_887()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_887()))
		{
			SYSTEM::WAIT(0);
		}
		func_577(func_887(), 1, 1);
		while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_887()))
		{
			SYSTEM::WAIT(0);
		}
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_887());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(func_887());
		STREAMING::REQUEST_PTFX_ASSET();
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(Local_48[6 /*2*/], -1, 1);
		if (!PED::IS_PED_IN_ANY_VEHICLE(func_887(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_48[6 /*2*/]))
		{
			PED::SET_PED_INTO_VEHICLE(func_887(), Local_48[6 /*2*/], -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[6 /*2*/]);
			VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Local_48[6 /*2*/], 1);
			VEHICLE::SET_BOAT_ANCHOR(Local_48[6 /*2*/], 1);
		}
		func_378(1, 0, 0, 0, 0, 0);
		GlobalFunc_730(254.4721f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(45f, 1065353216);
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_GOODS_RT");
		STREAMING::REQUEST_IPL("SUNK_SHIP_FIRE");
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}



void func_799()//Position - 0x7CA32
{
	bool bVar0;
	int iVar1;
	
	if (func_869(0, 1, 1))
	{
		func_583(0);
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(func_887(), -80.2056f, -2288.283f, 0f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_887(), 22f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
		Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -80.2056f, -2288.283f, 0f, 22f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
		Local_48[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -198.265f, -2404.242f, 5.0013f, 127.4752f, 1, 1);
		Local_48[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -210.8442f, -2406.999f, 5.0012f, 297.9603f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[1 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[1 /*2*/], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[2 /*2*/], 1);
		func_378(0, 0, 1, 0, 0, 0);
		CUTSCENE::REQUEST_CUTSCENE("LSDH_2A_RF_01", 8);
		GlobalFunc_11047(func_887(), 10);
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_887()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_887()))
		{
			SYSTEM::WAIT(0);
		}
		func_577(func_887(), 1, 1);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_887());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(func_887());
		PED::SET_ENABLE_SCUBA(func_887(), 1);
		PED::SET_PED_DIES_IN_WATER(func_887(), 0);
		func_644(1);
		GlobalFunc_4967(0, -1, 1);
		bVar0 = false;
		iVar1 = MISC::GET_GAME_TIMER() + 5000;
		while (!bVar0)
		{
			if (AUDIO::LOAD_STREAM("PORT_OF_LS_SHIP_BLOW_UP_MASTER", 0))
			{
				bVar0 = true;
			}
			else if (MISC::GET_GAME_TIMER() > iVar1)
			{
				bVar0 = true;
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_800()//Position - 0x7CC47
{
	if (func_869(1, 1, 1))
	{
		func_583(0);
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 10.7369f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -80.2056f, -2288.283f, 0f, 22f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
		while (!func_606(&(Local_69[1 /*15*/]), 0, -228.9973f, -2283.485f, 3.3515f, 10f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_173(&uLocal_1496, 1, Local_69[1 /*15*/], "MICHAEL", 0, 1);
		func_577(func_887(), 1, 1);
		PED::SET_ENABLE_SCUBA(func_887(), 1);
		PED::SET_PED_DIES_IN_WATER(func_887(), 0);
		Local_175[2 /*44*/].f_37 = 0;
		Local_175[3 /*44*/].f_37 = 0;
		Local_175[4 /*44*/].f_37 = 0;
		Local_175[6 /*44*/].f_37 = 0;
		Local_175[7 /*44*/].f_37 = 0;
		Local_175[9 /*44*/].f_37 = 0;
		Local_175[10 /*44*/].f_37 = 0;
		Local_175[11 /*44*/].f_37 = 0;
		Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
		Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
		Local_48[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -198.265f, -2404.242f, 5.0013f, 127.4752f, 1, 1);
		Local_48[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -210.8442f, -2406.999f, 5.0012f, 297.9603f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[1 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[1 /*2*/], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[2 /*2*/], 1);
		iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
		iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
		iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
		iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
		iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
		func_644(1);
		func_378(0, 0, 1, 0, 0, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DETONATE_RT");
		func_801(3);
		GlobalFunc_4967(0, -1, 1);
		iLocal_1808 = 1;
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_801(int iParam0)//Position - 0x7CFAE
{
	if (iParam0 == 3)
	{
		iLocal_1728[2] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(iLocal_1888), -187.77f, -2365.49f, 9.32f, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1728[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1728[2], 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_1728[2], 22.668f, -90f, -10f, 2, 1);
		}
	}
	if (iParam0 >= 2)
	{
		iLocal_1728[1] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(iLocal_1888), -127.93f, -2365.46f, 9.33f, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1728[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1728[1], 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_1728[1], 22.668f, -90f, -10f, 2, 1);
		}
	}
	if (iParam0 >= 1)
	{
		iLocal_1728[0] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(iLocal_1888), -84.715f, -2365.9f, 14.3f, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1728[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1728[0], 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_1728[0], 22.668f, 79.339f, 4.143f, 2, 1);
		}
	}
}

void func_802()//Position - 0x7D0CA
{
	if (func_869(1, 1, 1))
	{
		func_583(0);
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 35.7369f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
		Local_175[2 /*44*/].f_37 = 0;
		Local_175[3 /*44*/].f_37 = 0;
		Local_175[4 /*44*/].f_37 = 0;
		Local_175[6 /*44*/].f_37 = 0;
		Local_175[7 /*44*/].f_37 = 0;
		Local_175[9 /*44*/].f_37 = 0;
		Local_175[10 /*44*/].f_37 = 0;
		Local_175[11 /*44*/].f_37 = 0;
		OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
		Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
		Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
		iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
		iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
		iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
		iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
		iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
		func_801(3);
		func_644(1);
		func_378(0, 0, 1, 0, 0, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_WAY_OUT_RT");
		AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
		GlobalFunc_4967(0, -1, 1);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
		iLocal_1808 = 1;
		bLocal_1836 = true;
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_803()//Position - 0x7D3A5
{
	func_583(0);
	if (!GlobalFunc_188())
	{
		if (func_869(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_887(), -191.4221f, -2365.476f, 8.3193f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_887(), 176.1654f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_1452[2 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
		}
	}
	else
	{
		while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1903[1] = Local_69[0 /*15*/];
		GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
	}
	GlobalFunc_11047(func_887(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_887()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	func_577(func_887(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_887());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_887());
	GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_1496, 1, Local_69[1 /*15*/], "MICHAEL", 0, 1);
	PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
	Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
	Local_175[2 /*44*/].f_37 = 0;
	Local_175[3 /*44*/].f_37 = 0;
	Local_175[4 /*44*/].f_37 = 0;
	Local_175[5 /*44*/].f_37 = 0;
	Local_175[6 /*44*/].f_37 = 0;
	Local_175[7 /*44*/].f_37 = 0;
	Local_175[9 /*44*/].f_37 = 0;
	Local_175[10 /*44*/].f_37 = 0;
	Local_175[11 /*44*/].f_37 = 0;
	Local_175[13 /*44*/].f_37 = 0;
	Local_175[14 /*44*/].f_37 = 0;
	func_616(12, 1090519040, 1, 0);
	func_616(15, 1090519040, 1, 0);
	func_616(17, 1090519040, 1, 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	uLocal_1900[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	uLocal_1900[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	func_652();
	Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
	Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
	func_378(0, 0, 1, 0, 0, 0);
	iLocal_1981 = 1;
	Local_1452[0 /*7*/].f_6 = 1;
	Local_1452[1 /*7*/].f_6 = 1;
	Local_1452[2 /*7*/].f_6 = 1;
	iLocal_1756 = 0;
	iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
	iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
	iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
	iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
	iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
	func_654();
	func_644(1);
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_4TH_BOMB_RT");
	func_801(3);
	GlobalFunc_4967(0, -1, 1);
	if (Global_Mission_Fail_State.f_12[0] == 0)
	{
		if (GlobalFunc_9019(&iLocal_1903, 1))
		{
			GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
			if (GlobalFunc_2773(func_887()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
		iLocal_1864 = 1;
	}
	else
	{
		if (GlobalFunc_2773(func_886()))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(func_886(), func_887(), -1, 0);
		}
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
		iLocal_1875 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_scene");
	}
}

void func_804()//Position - 0x7D8CE
{
	func_583(0);
	if (!GlobalFunc_188())
	{
		if (func_869(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_887(), -129.6871f, -2366.897f, 8.3193f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_887(), 183.9491f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_1452[1 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
		}
	}
	else
	{
		while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1903[1] = Local_69[0 /*15*/];
		GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
	}
	GlobalFunc_11047(func_887(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_887()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	func_577(func_887(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_887());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_887());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
	Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
	Local_175[2 /*44*/].f_37 = 0;
	Local_175[3 /*44*/].f_37 = 0;
	Local_175[4 /*44*/].f_37 = 0;
	Local_175[5 /*44*/].f_37 = 0;
	Local_175[6 /*44*/].f_37 = 0;
	func_616(11, 1090519040, 1, 0);
	func_616(8, 1090519040, 1, 0);
	func_616(10, 1f, 1, 0);
	func_616(12, 1090519040, 1, 0);
	func_616(13, 1090519040, 1, 0);
	func_616(15, 1090519040, 1, 0);
	func_616(17, 1090519040, 1, 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	uLocal_1900[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	uLocal_1900[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	func_652();
	Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
	Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
	func_378(0, 0, 1, 0, 0, 0);
	iLocal_1981 = 1;
	Local_1452[0 /*7*/].f_6 = 1;
	Local_1452[1 /*7*/].f_6 = 1;
	iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
	iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
	iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
	iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
	iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
	func_654();
	func_644(1);
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_3RD_BOMB_RT");
	GlobalFunc_Checkpoint2(4, "STAGE 3: THIRD BOMB", 0, 0, 0, 1);
	func_801(2);
	GlobalFunc_4967(0, -1, 1);
	if (Global_Mission_Fail_State.f_12[0] == 0)
	{
		if (GlobalFunc_9019(&iLocal_1903, 1))
		{
			GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
			if (GlobalFunc_2773(func_887()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
		iLocal_1864 = 1;
	}
	else
	{
		if (GlobalFunc_2773(func_886()))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(func_886(), func_887(), -1, 0);
		}
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
		iLocal_1875 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_scene");
	}
}

void func_805()//Position - 0x7DDE1
{
	func_583(0);
	if (!GlobalFunc_188())
	{
		if (func_869(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_887(), -94.9569f, -2371.877f, 13.2969f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_887(), 97.3018f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_1452[0 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
		}
	}
	else
	{
		while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1903[1] = Local_69[0 /*15*/];
		GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
	}
	GlobalFunc_11047(func_887(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_887()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	func_577(func_887(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_887());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_887());
	GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
	Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
	func_378(0, 0, 1, 0, 0, 0);
	iLocal_1981 = 1;
	Local_1452[0 /*7*/].f_6 = 1;
	func_616(3, 1090519040, 1, 0);
	func_616(2, 1090519040, 1, 0);
	func_616(4, 1090519040, 1, 0);
	func_616(11, 1090519040, 1, 0);
	func_616(8, 1090519040, 1, 0);
	func_616(10, 1f, 1, 0);
	func_616(12, 1090519040, 1, 0);
	func_616(13, 1090519040, 1, 0);
	func_616(15, 1090519040, 1, 0);
	func_616(17, 1090519040, 1, 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	uLocal_1900[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	uLocal_1900[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	func_652();
	Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
	Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
	iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
	iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
	iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
	iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
	func_654();
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_2ND_BOMB_RT");
	func_644(1);
	GlobalFunc_Checkpoint2(3, "STAGE 3: SECOND BOMB", 0, 0, 0, 1);
	func_801(1);
	GlobalFunc_4967(0, -1, 1);
	if (Global_Mission_Fail_State.f_12[0] == 0)
	{
		if (GlobalFunc_9019(&iLocal_1903, 1))
		{
			GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
			if (GlobalFunc_2773(func_887()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
		iLocal_1864 = 1;
	}
	else
	{
		if (GlobalFunc_2773(func_886()))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(func_886(), func_887(), -1, 0);
		}
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
		iLocal_1875 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_scene");
	}
}

void func_806()//Position - 0x7E2B0
{
	func_583(0);
	if (!GlobalFunc_188())
	{
		if (func_869(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_887(), -83.5905f, -2361.798f, 13.2963f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_887(), 119.7045f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_1452[0 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
		}
	}
	else
	{
		while (!func_606(&(Local_69[0 /*15*/]), 1, -143.8203f, -2488.261f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1903[1] = Local_69[0 /*15*/];
		GlobalFunc_173(&uLocal_1496, 3, Local_69[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[0 /*15*/], 1);
	}
	GlobalFunc_11047(func_887(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_887()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	func_577(func_887(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_887()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_887());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_887());
	GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_STEALTH_MOVEMENT(func_887(), 1, 0);
	Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	uLocal_1900[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	uLocal_1900[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.558f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, 0, 7);
	func_616(3, 1090519040, 1, 0);
	func_616(2, 1090519040, 1, 0);
	func_616(4, 1090519040, 1, 0);
	func_616(11, 1090519040, 1, 0);
	func_616(8, 1090519040, 1, 0);
	func_616(10, 1f, 1, 0);
	func_616(12, 1090519040, 1, 0);
	func_616(13, 1090519040, 1, 0);
	func_616(15, 1090519040, 1, 0);
	func_616(17, 1090519040, 1, 0);
	func_652();
	Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
	Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
	func_378(0, 0, 1, 0, 0, 0);
	iLocal_1981 = 1;
	func_654();
	iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
	iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
	iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
	iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
	iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
	GlobalFunc_Checkpoint2(2, "STAGE 2: FIRST BOMB", 0, 0, 0, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_1ST_BOMB_RT");
	func_644(1);
	GlobalFunc_4967(0, -1, 1);
	if (Global_Mission_Fail_State.f_12[0] == 0)
	{
		if (GlobalFunc_9019(&iLocal_1903, 1))
		{
			GlobalFunc_10980(&iLocal_1903, 1, 1, 0);
			if (GlobalFunc_2773(func_887()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_886())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
		iLocal_1864 = 1;
	}
	else
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
		iLocal_1875 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_887())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
	}
}

void func_807()//Position - 0x7E78F
{
	if (func_869(1, 1, 1))
	{
		func_583(0);
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(func_886(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_886(), 337.5851f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(-143.8203f, -2488.261f, 43.4412f, 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		while (!func_606(&(Local_69[1 /*15*/]), 0, -77.9618f, -2359.083f, 0.5f, 90.7853f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_173(&uLocal_1496, 1, func_887(), "MICHAEL", 0, 1);
		func_577(func_887(), 0, 1);
		GlobalFunc_11257(func_887(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_DIES_IN_WATER(func_887(), 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_887(), 1);
		Local_48[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_48[6 /*2*/], 0);
		func_616(0, 8f, 1, 0);
		func_616(1, 8f, 1, 0);
		WEAPON::GIVE_WEAPON_TO_PED(Local_175[0 /*44*/], joaat("weapon_heavysniper"), 200, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_175[1 /*44*/], joaat("weapon_heavysniper"), 200, 1, 1);
		func_616(3, 1090519040, 1, 0);
		func_616(2, 1090519040, 1, 0);
		func_616(4, 1090519040, 1, 0);
		func_616(11, 1090519040, 1, 0);
		func_616(8, 1090519040, 1, 0);
		func_616(10, 1f, 1, 0);
		func_616(12, 1090519040, 1, 0);
		func_616(13, 1090519040, 1, 0);
		func_616(15, 1090519040, 1, 0);
		func_616(17, 1090519040, 1, 0);
		Local_48[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.434f, 5.0012f, 293.3041f, 1, 1);
		Local_48[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.326f, 5.0013f, 94.2693f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[7 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_48[8 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[7 /*2*/], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_48[8 /*2*/], 1);
		iLocal_1721 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1721, 0f, 0f, -30f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1721, 200);
		iLocal_1722 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1722, 0f, 0f, -12f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1722, 200);
		iLocal_1723 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1723, 0f, 0f, -39.99999f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1723, 200);
		iLocal_1724 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.698f, 5.0013f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1724, 0f, 0f, 8.3525f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1724, 200);
		iLocal_1725 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.942f, 5.0007f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1725, 0f, 0f, 220.8658f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_1725, 200);
		while (!AUDIO::PREPARE_MUSIC_EVENT("DH2A_START"))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(0, -1, 1);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.261f, 43.4412f, 1, 0, 0, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_664(Local_175[0 /*44*/]));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_663(Local_175[0 /*44*/]), 1065353216);
		PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
		PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_SNIPE_GUARDS_RT");
		GlobalFunc_Checkpoint2(1, "Stage 1: Snipe Guards", 0, 0, 0, 1);
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_808()//Position - 0x7EB81
{
	var uVar0;
	
	if (!GlobalFunc_188())
	{
		func_869(2, 1, 1);
		ENTITY::SET_ENTITY_COORDS(func_147(), -1149.811f, -1522.107f, 9.633f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(func_147(), 228.2091f);
		while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1149.811f, -1522.107f, 9.633f, 10f, 1))
		{
			SYSTEM::WAIT(0);
		}
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	while (!func_606(&(Local_69[0 /*15*/]), 1, -1154.663f, -1518.243f, 9.6327f, 306.3135f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_1903[1] = Local_69[0 /*15*/];
	GlobalFunc_4967(0, -1, 1);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1150.757f, -1520.947f, 9.6327f, 1f, 20000, 0.25f, 1, 1193033728);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1149.51f, -1522.468f, 9.6331f, 1f, 20000, 0.25f, 1, 1193033728);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1147.391f, -1522.717f, 9.413f, 1f, 20000, 0.25f, 512, 312.1079f);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3500, 0, 1, 0);
	}
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
	iLocal_1771 = 1;
}




void func_812(int iParam0)//Position - 0x7F6FB
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2aswitchig_7");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2aig_1");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@crouch");
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 2:
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@crouch");
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 3:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@crouch");
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 4:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@crouch");
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 5:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@crouch");
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 6:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_718(&uLocal_2010, joaat("buzzard"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a");
			GlobalFunc_727(&uLocal_2010, "docksheist2a01");
			GlobalFunc_727(&uLocal_2010, "docksheist2a02");
			GlobalFunc_727(&uLocal_2010, "docksheist2a03");
			GlobalFunc_719(&uLocal_2010, "missheistdocks2a@alert");
			GlobalFunc_746(&uLocal_2010, 1, "dh2arec");
			GlobalFunc_746(&uLocal_2010, 2, "dh2arec");
			GlobalFunc_746(&uLocal_2010, 3, "dh2arec");
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 7:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_mil_crate_02"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_cratepile_07a"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_736(&uLocal_2010, iLocal_1887, 31, 10);
			break;
		
		case 8:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("landstalker"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			break;
		
		case 9:
			GlobalFunc_718(&uLocal_2010, joaat("s_m_y_blackops_01"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_military_pickup_01"));
			GlobalFunc_718(&uLocal_2010, joaat("submersible"));
			GlobalFunc_718(&uLocal_2010, joaat("dinghy"));
			GlobalFunc_718(&uLocal_2010, joaat("prop_flare_01"));
			GlobalFunc_719(&uLocal_2010, "missheistdocks2aswitchig_8");
			GlobalFunc_719(&uLocal_2010, "swimming@scuba");
			break;
		
		case 10:
			GlobalFunc_718(&uLocal_2010, joaat("prop_military_pickup_01"));
			GlobalFunc_718(&uLocal_2010, joaat("submersible"));
			break;
	}
}


void func_814()//Position - 0x7FDDB
{
	int iVar0;
	
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
	{
		AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", 1);
	}
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*15*/]) && !PED::IS_PED_INJURED(Local_69[iVar0 /*15*/]))
		{
			if (!iLocal_1778)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_69[iVar0 /*15*/], 0))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_69[iVar0 /*15*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_69[iVar0 /*15*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				if (Local_69[iVar0 /*15*/] != PLAYER::PLAYER_PED_ID())
				{
					PED::DELETE_PED(&(Local_69[iVar0 /*15*/]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		Local_175[iVar0 /*44*/].f_36 = 0;
		Local_175[iVar0 /*44*/].f_30 = 0;
		Local_175[iVar0 /*44*/].f_31 = 0;
		Local_175[iVar0 /*44*/].f_27 = 0;
		Local_175[iVar0 /*44*/].f_28 = 0;
		Local_175[iVar0 /*44*/].f_38 = 0;
		Local_175[iVar0 /*44*/].f_39 = 0;
		Local_175[iVar0 /*44*/].f_40 = 0;
		Local_175[iVar0 /*44*/].f_42 = 0;
		Local_175[iVar0 /*44*/].f_43 = 0;
		Local_175[iVar0 /*44*/].f_41 = 0;
		Local_175[iVar0 /*44*/].f_35 = 0;
		Local_175[iVar0 /*44*/].f_29 = -1;
		if (HUD::DOES_BLIP_EXIST(Local_175[iVar0 /*44*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_175[iVar0 /*44*/].f_1));
		}
		TASK::REMOVE_COVER_POINT(Local_175[iVar0 /*44*/].f_2);
		if (ENTITY::DOES_ENTITY_EXIST(Local_175[iVar0 /*44*/]))
		{
			if (!PED::IS_PED_INJURED(Local_175[iVar0 /*44*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_175[iVar0 /*44*/], 0))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_175[iVar0 /*44*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_175[iVar0 /*44*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				PED::DELETE_PED(&(Local_175[iVar0 /*44*/]));
			}
			else
			{
				PED::DELETE_PED(&(Local_175[iVar0 /*44*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*2*/]))
		{
			if (!iLocal_1778)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_48[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	iLocal_1778 = 0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_1452[iVar0 /*7*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1452[iVar0 /*7*/].f_1));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1481 - 1))
	{
		Local_1481[iVar0 /*2*/] = 0;
		Local_1481[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	func_591();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1720))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1720);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1718))
	{
		HUD::REMOVE_BLIP(&uLocal_1718);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1721))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1721);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1722))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1722);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1723))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1723);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1724))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1724);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1725))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1725);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1705))
	{
		HUD::REMOVE_BLIP(&uLocal_1705);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1726))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1726);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1751))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1751, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1750))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1750);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1748))
	{
		CAM::DESTROY_CAM(iLocal_1748, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1749))
	{
		CAM::DESTROY_CAM(iLocal_1749, 0);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1900[0]))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1900[0]);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1900[1]))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1900[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1727))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1727, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1727);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1733))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1733);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1728)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1728[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1728[iVar0]));
		}
		iVar0++;
	}
	GlobalFunc_5652(&Local_1661, 1, 0);
	GlobalFunc_7139(&Local_1661, 0);
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	GlobalFunc_495(128, 0);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_1708);
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	STREAMING::CLEAR_FOCUS();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1883))
	{
		AUDIO::STOP_SOUND(iLocal_1883);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1876))
	{
		AUDIO::STOP_SOUND(iLocal_1876);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1877))
	{
		AUDIO::STOP_SOUND(iLocal_1877);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1879))
	{
		AUDIO::STOP_SOUND(iLocal_1879);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1878))
	{
		AUDIO::STOP_SOUND(iLocal_1878);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1850))
	{
		AUDIO::STOP_SOUND(iLocal_1850);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1710))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1710);
	}
	GlobalFunc_5168(1, 3, 0);
	TASK::REMOVE_COVER_POINT(iLocal_1709);
	TASK::REMOVE_COVER_POINT(uLocal_1712[0]);
	TASK::REMOVE_COVER_POINT(uLocal_1712[1]);
	TASK::REMOVE_COVER_POINT(uLocal_1712[2]);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
	MISC::SET_TIME_SCALE(1f);
	GlobalFunc_1998(0);
	iLocal_1875 = 0;
	bLocal_1836 = false;
	iLocal_1981 = 0;
	iLocal_1983 = 0;
	bLocal_1746 = false;
	iLocal_1847 = 0;
	iLocal_1848 = 0;
	iLocal_1849 = 0;
	bLocal_1874 = false;
	iLocal_1873 = 0;
	iLocal_1782 = 0;
	iLocal_1783 = 0;
	iLocal_1784 = 0;
	iLocal_1785 = 0;
	iLocal_1786 = 0;
	iLocal_1787 = 0;
	iLocal_1788 = 0;
	iLocal_1789 = 0;
	iLocal_1790 = 0;
	iLocal_1798 = 0;
	iLocal_1794 = 0;
	iLocal_1760 = 0;
	iLocal_1761 = 0;
	iLocal_1762 = 0;
	iLocal_1795 = 0;
	iLocal_1796 = 0;
	iLocal_1807 = 0;
	iLocal_1808 = 0;
	iLocal_1809 = 0;
	iLocal_1810 = 0;
	iLocal_1811 = 0;
	iLocal_1830 = 0;
	iLocal_1864 = 0;
	iLocal_1768 = 0;
	iLocal_1866 = 0;
	bLocal_1831 = false;
	iLocal_1865 = 0;
	iLocal_1868 = 0;
	iLocal_1881 = 0;
	iLocal_1880 = 0;
	iLocal_1770 = 0;
	iLocal_1779 = 0;
	bLocal_1780 = false;
	bLocal_1781 = false;
	iLocal_1777 = 0;
	iLocal_1804 = 0;
	iLocal_1769 = 0;
	iLocal_1800 = 0;
	iLocal_1802 = 0;
	iLocal_1801 = 0;
	iLocal_1805 = 0;
	iLocal_1806 = 0;
	iLocal_1884 = 0;
	iLocal_1815 = 0;
	iLocal_1816 = 0;
	iLocal_1817 = 0;
	iLocal_1747 = -1;
	iLocal_1813 = -1;
	iLocal_1843 = 0;
	iLocal_1844 = 0;
	iLocal_1845 = 0;
	if (GRAPHICS::GET_USINGSEETHROUGH())
	{
		GRAPHICS::SET_SEETHROUGH(0);
	}
	GlobalFunc_5883(&Local_1947);
	func_304(1, 0, 0, 3000, 0);
	CAM::DESTROY_ALL_CAMS(0);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Local_1452[iVar0 /*7*/].f_6 = 0;
		MISC::CLEAR_AREA(Local_1452[iVar0 /*7*/].f_2, 300f, 1, 0, 0, 0);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_1452[iVar0 /*7*/].f_2, 300f, 100f);
		iVar0++;
	}
	CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(0f);
}


void func_816()//Position - 0x8046C
{
	switch (iLocal_1891)
	{
		case 1:
			iLocal_1891 = 2;
			iLocal_1893 = -1;
			break;
		
		case 2:
			iLocal_1891 = 3;
			iLocal_1893 = 0;
			iLocal_1892 = iLocal_1894;
			break;
		
		case 3:
			iLocal_1894 = -1;
			iLocal_1891 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1895) > 2500)
			{
				iLocal_1895 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}




void func_820()//Position - 0x806B2
{
	if (!iLocal_1770)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			STREAMING::_0xF8155A7F03DDFC8E(3);
			if (GlobalFunc_8315() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("lsdh_2a_int", 63, 8);
			}
			else if (GlobalFunc_8315() == 0)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("lsdh_2a_int", 60, 8);
			}
			else if (GlobalFunc_8315() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("lsdh_2a_int", 48, 8);
			}
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_Has_Cutscene_Loaded())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 0, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[0], "Wade", 1, joaat("ig_wade"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 0, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[1], "Floyd", 1, joaat("ig_floyd"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
			{
				iLocal_1903[1] = Global_86864.f_9[4];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1903[1], 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1903[1], 0);
			}
			if (GlobalFunc_8315() == 1)
			{
				iLocal_1903[1] = PLAYER::PLAYER_PED_ID();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1903[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_1903[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1903[1], "Franklin", 0, joaat("player_one"), 0);
				}
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, joaat("player_one"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
			{
				iLocal_1903[0] = Global_86864.f_9[3];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1903[0], 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1903[0], 0);
			}
			if (GlobalFunc_8315() == 0)
			{
				iLocal_1903[0] = PLAYER::PLAYER_PED_ID();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1903[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_1903[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1903[0], "Michael", 0, joaat("player_zero"), 0);
				}
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, joaat("player_zero"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
			{
				iLocal_1903[2] = Global_86864.f_9[2];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1903[2], 0, 1);
			}
			if (GlobalFunc_8315() == 2)
			{
				iLocal_1903[2] = PLAYER::PLAYER_PED_ID();
			}
			else if (!GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_9019(&iLocal_1903, 2))
				{
					bLocal_1781 = true;
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
					GlobalFunc_10980(&iLocal_1903, 1, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1903[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_1903[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1903[2], "Trevor", 0, joaat("player_two"), 0);
				}
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("player_two"), 0);
			}
			GlobalFunc_562(74);
			GlobalFunc_9628(-1150.051f, -1523.638f, 3.3297f, -1142.783f, -1518.456f, 12.55674f, 4f, -1154.612f, -1520.07f, 3.3456f, 33.0431f, 1, 0, 1, 1, 0);
			GlobalFunc_9628(-1153.675f, -1516.567f, 9.632723f, -1149.718f, -1522.15f, 12.63305f, 4f, -1154.612f, -1520.07f, 3.3456f, 33.0431f, 1, 0, 1, 1, 0);
			Local_48[0 /*2*/] = GlobalFunc_2251();
			if (GlobalFunc_2773(Local_48[0 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_48[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_48[0 /*2*/], 1, 1);
				}
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_48[0 /*2*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[0 /*2*/]);
				VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(Local_48[0 /*2*/]), 3);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1151.3f, -1520.1f, 11.1f, 4f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1149.4f, -1523.4f, 10.9f, 3f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1145.9f, -1521.6f, 9.3f, 2f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1143.6f, -1519f, 7.5f, 2.5f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1147.4f, -1520.5f, 5.9f, 2.5f, 0, 0, 0, 0, 0);
			iLocal_1710 = INTERIOR::GET_INTERIOR_AT_COORDS(-1158.341f, -1520.893f, 9.6345f);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1710))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1710);
			}
			MISC::CLEAR_AREA_OF_PEDS(-1154.612f, -1520.07f, 3.3456f, 100f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1154.612f, -1520.07f, 3.3456f, 100f, 0, 0, 0, 0, 0);
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			switch (GlobalFunc_2780())
			{
				case 2:
					CUTSCENE::START_CUTSCENE(0);
					break;
				
				case 1:
				case 0:
					CUTSCENE::START_CUTSCENE(1024);
					break;
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_86864.f_9[1]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
			iLocal_1770 = 1;
		}
	}
}















































int func_867(int iParam0)//Position - 0x85F63
{
	if (iLocal_1891 == 0)
	{
		iLocal_1894 = iParam0;
		iLocal_1891 = 1;
		return 1;
	}
	return 0;
}


int func_869(int iParam0, bool bParam1, bool bParam2)//Position - 0x86018
{
	if (bParam1)
	{
		while (!func_870(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_870(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_69[1 /*15*/] = PLAYER::PLAYER_PED_ID();
			break;
		
		case 1:
			Local_69[0 /*15*/] = PLAYER::PLAYER_PED_ID();
			break;
		
		case 2:
			Local_69[2 /*15*/] = PLAYER::PLAYER_PED_ID();
			break;
	}
	return 1;
}

int func_870(int iParam0, bool bParam1)//Position - 0x8608A
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
		GlobalFunc_11337(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_606(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10980(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}





void func_875()//Position - 0x86290
{
	Local_3567[0 /*7*/] = { GlobalFunc_2570(-106.6943f, -2375.552f, 7.319069f, -132.5393f, -2375.651f, 11.3718f, 15f) };
	Local_3567[1 /*7*/] = { GlobalFunc_2570(-186.1473f, -2379.65f, 7.31911f, -185.9265f, -2356.103f, 13.42545f, 23f) };
	Local_3567[2 /*7*/] = { GlobalFunc_2570(-209.5967f, -2380.277f, 7.483111f, -209.6509f, -2369.061f, 13.31911f, 30f) };
	Local_3567[3 /*7*/] = { GlobalFunc_2570(-115.7101f, -2366.509f, 7.345467f, -97.80183f, -2366.509f, 11.46272f, 32f) };
	Local_3567[4 /*7*/] = { GlobalFunc_2570(-130.2598f, -2352.182f, 7.319069f, -130.2598f, -2379.292f, 11.31907f, 6f) };
	Local_3567[5 /*7*/] = { GlobalFunc_2570(-149.0134f, -2354.991f, 7.367878f, -149.0134f, -2379.869f, 11.42548f, 12f) };
	Local_3567[6 /*7*/] = { GlobalFunc_2570(-165.3283f, -2355.013f, 7.355578f, -165.3283f, -2379.838f, 11.42548f, 12f) };
	Local_3567[7 /*7*/] = { GlobalFunc_2570(-194.2583f, -2354.993f, 7.378938f, -194.2485f, -2379.865f, 11.42545f, 13f) };
	Local_3567[8 /*7*/] = { GlobalFunc_2570(-97.80183f, -2366.023f, 11.33805f, -77.09352f, -2366.023f, 18.30465f, 28f) };
	Local_3567[9 /*7*/] = { GlobalFunc_2570(-123.0566f, -2366.157f, 4.319066f, -97.83835f, -2366.157f, 18.32022f, 34f) };
	Local_3567[10 /*7*/] = { GlobalFunc_2570(-132.0206f, -2366.692f, 4.319069f, -120.8313f, -2366.692f, 22.31907f, 34f) };
	Local_3567[11 /*7*/] = { GlobalFunc_2570(-148.6105f, -2366.056f, 4.319069f, -129.0904f, -2366.056f, 24.31907f, 34f) };
	Local_3567[12 /*7*/] = { GlobalFunc_2570(-164.5432f, -2366.324f, 4.319069f, -145.383f, -2366.324f, 24.31907f, 34f) };
	Local_3567[13 /*7*/] = { GlobalFunc_2570(-182.1735f, -2366.21f, 4.31911f, -161.5555f, -2366.21f, 24.31907f, 34f) };
	Local_3567[14 /*7*/] = { GlobalFunc_2570(-192.6309f, -2366.277f, 4.319111f, -179.9577f, -2366.277f, 24.31907f, 34f) };
	Local_3567[15 /*7*/] = { GlobalFunc_2570(-208.496f, -2366.257f, 4.31911f, -190.4886f, -2366.257f, 24.31911f, 34f) };
	Local_3567[16 /*7*/] = { GlobalFunc_2570(-252.8172f, -2366.277f, 4.458529f, -207.9783f, -2366.277f, 31.31911f, 34f) };
	Local_3567[17 /*7*/] = { GlobalFunc_2570(-100.5551f, -2373.17f, 7.361284f, -100.728f, -2354.544f, 12.59942f, 7f) };
	Local_3567[18 /*7*/] = { GlobalFunc_2570(-163.8413f, -2351.967f, 7.34009f, -163.703f, -2368.717f, 10.31907f, 5f) };
	Local_3567[19 /*7*/] = { GlobalFunc_2570(-178.0101f, -2376.21f, 7.319069f, -181.6613f, -2352.647f, 10.31907f, 6f) };
	Local_3567[20 /*7*/] = { GlobalFunc_2570(-209.045f, -2374.888f, 7.319207f, -209.2954f, -2352.12f, 10.35509f, 6f) };
}


void func_877()//Position - 0x86690
{
	func_880();
	func_879();
	HUD::REQUEST_ADDITIONAL_TEXT("h5heist", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	while (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK("script\underwater", 0))
	{
		SYSTEM::WAIT(0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1742);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1743);
	PED::ADD_RELATIONSHIP_GROUP("buddy", &iLocal_1742);
	PED::ADD_RELATIONSHIP_GROUP("enemies", &iLocal_1743);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1743, iLocal_1742);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1742, iLocal_1743);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1743);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1743, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1743, iLocal_1743);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1742, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1742);
	TASK::ADD_COVER_BLOCKING_AREA(-214.7745f, -2376.247f, 8.319207f, -212.2312f, -2374.966f, 11.5156f, 1, 1, 1, 0);
	TASK::ADD_COVER_BLOCKING_AREA(-208.0631f, -2382.714f, 7.937626f, -212.8053f, -2378.89f, 10.31921f, 1, 1, 1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-146.5248f, -2530.889f, 38f, 34.11267f, -2326.699f, 1.23919f, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-146.5248f, -2530.889f, 38f, 34.11267f, -2326.699f, 1.23919f, 0, 1, 1, 1);
	PED::SET_PED_NON_CREATION_AREA(-146.5248f, -2530.889f, 38f, 34.11267f, -2326.699f, 1.23919f);
	iLocal_1770 = 0;
	GlobalFunc_563(1);
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	}
	while (!GlobalFunc_7725(&uLocal_2010))
	{
		SYSTEM::WAIT(0);
	}
}


void func_879()//Position - 0x86888
{
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_6");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", -145.5457f, -2378.836f, 10.9717f, -145.5457f, -2378.836f, 10.9717f, 3000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -145.5312f, -2353.421f, 10.9717f, -145.5312f, -2353.421f, 10.9717f, 3000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_7");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", -193.5774f, -2353.05f, 10.9719f, -193.5774f, -2353.05f, 10.9719f, 3000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -193.4915f, -2378.865f, 10.9719f, -193.4915f, -2378.865f, 10.9719f, 3000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_8");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", -212.1342f, -2377.442f, 16.3326f, -212.1342f, -2377.442f, 16.3326f, 3000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -211.9285f, -2355.043f, 16.3321f, -211.9285f, -2355.043f, 16.3321f, 3000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_9");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_175[17 /*44*/].f_3, Local_175[17 /*44*/].f_3, 2000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -250.2186f, -2377.021f, 8.5309f, -250.2186f, -2377.021f, 8.5309f, 2000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_880()//Position - 0x86A52
{
	Local_175[0 /*44*/].f_3 = { -95.3159f, -2370.917f, 13.296f };
	Local_175[0 /*44*/].f_21 = 166.6539f;
	Local_175[1 /*44*/].f_3 = { -95.4717f, -2371.642f, 13.337f };
	Local_175[1 /*44*/].f_21 = 352.3306f;
	Local_175[2 /*44*/].f_3 = { -99.3547f, -2373.59f, 8.3631f };
	Local_175[2 /*44*/].f_21 = 94.6563f;
	Local_175[2 /*44*/].f_18 = { -121.568f, -2378.059f, 8.3191f };
	Local_175[3 /*44*/].f_3 = { -130.8882f, -2381.13f, 8.483f };
	Local_175[3 /*44*/].f_21 = 111.7926f;
	Local_175[2 /*44*/].f_18 = { -131.2666f, -2380.99f, 8.483f };
	Local_175[4 /*44*/].f_3 = { -133.4564f, -2353.751f, 8.3191f };
	Local_175[4 /*44*/].f_21 = 269.1131f;
	Local_175[4 /*44*/].f_18 = { -134.2778f, -2378.577f, 8.3191f };
	Local_175[5 /*44*/].f_3 = { -136.5821f, -2353.481f, 8.3191f };
	Local_175[5 /*44*/].f_21 = 257.6619f;
	Local_175[5 /*44*/].f_18 = { -140.7227f, -2378.917f, 8.3191f };
	Local_175[7 /*44*/].f_3 = { -145.6482f, -2373.913f, 10.9717f };
	Local_175[7 /*44*/].f_21 = 193.1906f;
	Local_175[8 /*44*/].f_3 = { -163.7027f, -2358.754f, 8.3191f };
	Local_175[8 /*44*/].f_21 = 349.0318f;
	Local_175[8 /*44*/].f_18 = { -153.3035f, -2378.981f, 8.3191f };
	Local_175[9 /*44*/].f_3 = { -175.2808f, -2377.962f, 8.3191f };
	Local_175[9 /*44*/].f_21 = 105.1062f;
	Local_175[9 /*44*/].f_18 = { -153.3035f, -2378.981f, 8.3191f };
	Local_175[10 /*44*/].f_3 = { -175.6108f, -2378.563f, 8.3191f };
	Local_175[10 /*44*/].f_21 = 83.7819f;
	Local_175[10 /*44*/].f_18 = { -170.2135f, -2378.915f, 8.3191f };
	Local_175[11 /*44*/].f_3 = { -193.3811f, -2358.047f, 10.9719f };
	Local_175[11 /*44*/].f_21 = 352.3621f;
	Local_175[11 /*44*/].f_18 = { -193.6092f, -2378.038f, 10.9717f };
	Local_175[12 /*44*/].f_3 = { -209.4923f, -2381.13f, 8.4833f };
	Local_175[12 /*44*/].f_21 = 180f;
	Local_175[12 /*44*/].f_18 = { -209.8036f, -2380.917f, 8.4833f };
	Local_175[13 /*44*/].f_3 = { -190.3405f, -2376.109f, 8.3191f };
	Local_175[13 /*44*/].f_21 = 120.2464f;
	Local_175[13 /*44*/].f_18 = { -198.1502f, -2378.927f, 8.3191f };
	Local_175[14 /*44*/].f_3 = { -190.3402f, -2372.952f, 8.3191f };
	Local_175[14 /*44*/].f_21 = 170.6087f;
	Local_175[14 /*44*/].f_18 = { -204.5925f, -2378.825f, 8.3191f };
	Local_175[15 /*44*/].f_3 = { -221.0865f, -2377.135f, 12.3325f };
	Local_175[15 /*44*/].f_21 = 92.8979f;
	Local_175[15 /*44*/].f_18 = { -230.0103f, -2379.941f, 12.3327f };
	Local_175[16 /*44*/].f_3 = { -212.1228f, -2371.581f, 16.3318f };
	Local_175[16 /*44*/].f_21 = 179.6727f;
	Local_175[16 /*44*/].f_18 = { -225.4011f, -2377.654f, 16.3326f };
	Local_175[17 /*44*/].f_3 = { -250.4333f, -2355.844f, 8.5061f };
	Local_175[17 /*44*/].f_21 = 265.6055f;
	Local_175[17 /*44*/].f_18 = { -245.1081f, -2377.086f, 8.3192f };
	Local_175[18 /*44*/].f_3 = { -185f, -2512f, 5.16f };
	Local_175[18 /*44*/].f_21 = 90f;
	Local_175[19 /*44*/].f_3 = { -184f, -2512f, 5.16f };
	Local_175[19 /*44*/].f_21 = 90f;
	Local_175[20 /*44*/].f_3 = { -183f, -2512f, 5.16f };
	Local_175[20 /*44*/].f_21 = 90f;
	Local_175[21 /*44*/].f_3 = { -182f, -2512f, 5.16f };
	Local_175[21 /*44*/].f_21 = 90f;
	Local_175[22 /*44*/].f_3 = { -185f, -2513f, 5.16f };
	Local_175[22 /*44*/].f_21 = 90f;
	Local_175[23 /*44*/].f_3 = { -184f, -2513f, 5.16f };
	Local_175[23 /*44*/].f_21 = 90f;
	Local_175[24 /*44*/].f_3 = { -183f, -2513f, 5.16f };
	Local_175[24 /*44*/].f_21 = 90f;
	Local_175[25 /*44*/].f_3 = { -182f, -2513f, 5.16f };
	Local_175[25 /*44*/].f_21 = 90f;
	Local_175[26 /*44*/].f_3 = { -209.392f, -2367.155f, 8.31911f };
	Local_175[26 /*44*/].f_21 = 83.7819f;
	Local_175[27 /*44*/].f_3 = { -209.2853f, -2375.949f, 8.3191f };
	Local_175[27 /*44*/].f_21 = 83.7819f;
	Local_175[0 /*44*/].f_6 = { -96.8524f, -2376.061f, 13.7374f };
	Local_175[1 /*44*/].f_6 = { -95.3553f, -2357.491f, 13.7049f };
	Local_175[2 /*44*/].f_6 = { -100.0022f, -2372.734f, 8.8395f };
	Local_175[3 /*44*/].f_6 = { -114.8999f, -2377.925f, 8.65607f };
	Local_175[4 /*44*/].f_6 = { -121.7725f, -2378.601f, 8.31872f };
	Local_175[5 /*44*/].f_6 = { -124.8354f, -2374.716f, 8.3189f };
	Local_175[7 /*44*/].f_6 = { -128.2604f, -2378.961f, 8.31891f };
	Local_175[8 /*44*/].f_6 = { -92.30511f, -2364.478f, 13.29613f };
	Local_175[9 /*44*/].f_6 = { -128.5923f, -2374.083f, 8.31891f };
	Local_175[10 /*44*/].f_6 = { -126.7215f, -2367.663f, 8.31891f };
	Local_175[11 /*44*/].f_6 = { -121.7722f, -2359.752f, 8.31905f };
	Local_175[12 /*44*/].f_6 = { -124.3196f, -2357.067f, 8.31929f };
	Local_175[13 /*44*/].f_6 = { -131.766f, -2354.907f, 8.31929f };
	Local_175[15 /*44*/].f_6 = { -95.58605f, -2374.128f, 13.29636f };
	Local_175[14 /*44*/].f_6 = { -136.6288f, -2377.879f, 8.31866f };
	Local_175[16 /*44*/].f_6 = { -145.0215f, -2376.839f, 8.35225f };
	Local_175[17 /*44*/].f_6 = { -163.796f, -2376.07f, 8.31863f };
	Local_175[0 /*44*/].f_9 = { -138.2723f, -2377.778f, 8.7653f };
	Local_175[1 /*44*/].f_9 = { -172.7036f, -2377.949f, 8.8366f };
	Local_175[2 /*44*/].f_9 = { -120.0573f, -2378.492f, 8.31872f };
	Local_175[3 /*44*/].f_9 = { -131.7441f, -2376.392f, 8.31891f };
	Local_175[4 /*44*/].f_9 = { -127.9717f, -2367.261f, 8.31891f };
	Local_175[5 /*44*/].f_9 = { -155.5438f, -2379.407f, 8.3187f };
	Local_175[7 /*44*/].f_9 = { -188.3544f, -2373.972f, 8.31869f };
	Local_175[8 /*44*/].f_9 = { -178.2041f, -2377.009f, 8.31867f };
	Local_175[9 /*44*/].f_9 = { -172.4329f, -2379.22f, 8.31863f };
	Local_175[10 /*44*/].f_9 = { -161.74f, -2376.786f, 8.31863f };
	Local_175[11 /*44*/].f_9 = { -163.6398f, -2366.299f, 8.31889f };
	Local_175[12 /*44*/].f_9 = { -147.2891f, -2366.811f, 8.31867f };
	Local_175[13 /*44*/].f_9 = { -145.3563f, -2377.02f, 8.31867f };
	Local_175[15 /*44*/].f_9 = { -163.8084f, -2355.112f, 8.31889f };
	Local_175[14 /*44*/].f_9 = { -184.8093f, -2356.761f, 8.31944f };
	Local_175[16 /*44*/].f_9 = { -187.8691f, -2368.311f, 8.31891f };
	Local_175[17 /*44*/].f_9 = { -181.3426f, -2353.206f, 8.31944f };
	Local_175[0 /*44*/].f_12 = { -190.0471f, -2374.786f, 9.048f };
	Local_175[1 /*44*/].f_12 = { -181.0299f, -2373.907f, 9.048f };
	Local_175[2 /*44*/].f_12 = { -172.3366f, -2378.555f, 8.31889f };
	Local_175[3 /*44*/].f_12 = { -189.872f, -2378.415f, 8.31869f };
	Local_175[4 /*44*/].f_12 = { -184.4063f, -2370.45f, 8.31891f };
	Local_175[5 /*44*/].f_12 = { -183.7044f, -2374.455f, 8.31869f };
	Local_175[7 /*44*/].f_12 = { -188.0519f, -2356.99f, 8.31944f };
	Local_175[8 /*44*/].f_12 = { -188.3885f, -2366.646f, 8.31891f };
	Local_175[9 /*44*/].f_12 = { -180.2168f, -2368.614f, 8.31891f };
	Local_175[10 /*44*/].f_12 = { -183.1483f, -2363.666f, 8.31944f };
	Local_175[11 /*44*/].f_12 = { -194.1455f, -2354.396f, 8.31857f };
	Local_175[12 /*44*/].f_12 = { -200.5847f, -2378.66f, 8.31857f };
	Local_175[13 /*44*/].f_12 = { -184.2644f, -2356.812f, 8.31946f };
	Local_175[15 /*44*/].f_12 = { -213.7272f, -2379.046f, 8.3191f };
	Local_175[14 /*44*/].f_12 = { -208.0668f, -2374.511f, 8.31857f };
	Local_175[16 /*44*/].f_12 = { -222.3925f, -2377.685f, 12.33246f };
	Local_175[17 /*44*/].f_12 = { -241.6966f, -2375.632f, 8.31935f };
	Local_175[0 /*44*/].f_15 = { -215.7887f, -2377.356f, 8.9309f };
	Local_175[1 /*44*/].f_15 = { -236.1554f, -2377.273f, 8.8063f };
	Local_175[2 /*44*/].f_15 = { -187.7895f, -2378.715f, 8.31869f };
	Local_175[3 /*44*/].f_15 = { -192.8928f, -2376.366f, 8.31857f };
	Local_175[4 /*44*/].f_15 = { -205.2085f, -2378.421f, 8.31857f };
	Local_175[5 /*44*/].f_15 = { -213.6559f, -2378.896f, 8.3191f };
	Local_175[7 /*44*/].f_15 = { -216.0223f, -2375.476f, 8.3191f };
	Local_175[8 /*44*/].f_15 = { -230.857f, -2375.865f, 8.31935f };
	Local_175[9 /*44*/].f_15 = { -221.3237f, -2378.489f, 8.3191f };
	Local_175[10 /*44*/].f_15 = { -233.447f, -2376.795f, 8.31911f };
	Local_175[11 /*44*/].f_15 = { -210.4747f, -2367.425f, 8.31889f };
	Local_175[12 /*44*/].f_15 = { -207.1957f, -2353.868f, 8.31878f };
	Local_175[13 /*44*/].f_15 = { -211.1736f, -2355.488f, 8.31854f };
	Local_175[15 /*44*/].f_15 = { -213.0243f, -2388.073f, 5.00116f };
	Local_175[14 /*44*/].f_15 = { -247.6525f, -2374.148f, 8.31935f };
	Local_175[16 /*44*/].f_15 = { -216.4299f, -2393.815f, 5.02178f };
	Local_175[17 /*44*/].f_15 = { -241.6966f, -2375.632f, 8.31935f };
	Local_175[22 /*44*/].f_15 = { -215.1942f, -2393.873f, 5.0012f };
	Local_175[23 /*44*/].f_15 = { -211.1478f, -2399.805f, 5.0012f };
	Local_175[24 /*44*/].f_15 = { -216.2771f, -2393.37f, 5.0012f };
	Local_175[25 /*44*/].f_15 = { -216.6585f, -2402.099f, 5.0012f };
	Local_175[22 /*44*/].f_12 = { -213.717f, -2397.432f, 5.0012f };
	Local_175[23 /*44*/].f_12 = { -202.8748f, -2411.434f, 5.0012f };
	Local_175[24 /*44*/].f_12 = { -215.9651f, -2400.332f, 5.0012f };
	Local_175[25 /*44*/].f_12 = { -205.8522f, -2412.8f, 5.0012f };
	Local_175[22 /*44*/].f_9 = { -202.8748f, -2411.434f, 5.0012f };
	Local_175[23 /*44*/].f_9 = { -199.6583f, -2426.8f, 5.0012f };
	Local_175[24 /*44*/].f_9 = { -205.8522f, -2412.8f, 5.0012f };
	Local_175[25 /*44*/].f_9 = { -206.0718f, -2429.28f, 5.0004f };
	Local_175[22 /*44*/].f_6 = { -199.6583f, -2426.8f, 5.0012f };
	Local_175[23 /*44*/].f_6 = { -175.3211f, -2452.204f, 5.013f };
	Local_175[24 /*44*/].f_6 = { -206.0718f, -2429.28f, 5.0004f };
	Local_175[25 /*44*/].f_6 = { -178.0965f, -2454.597f, 5.0133f };
	Local_175[22 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000);
	Local_175[23 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
	Local_175[24 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000);
	Local_175[25 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
	Local_175[22 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[23 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[24 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[25 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[18 /*44*/].f_15 = { -201.4169f, -2400.395f, 5.0012f };
	Local_175[19 /*44*/].f_15 = { -211.1253f, -2389.984f, 5.0012f };
	Local_175[20 /*44*/].f_15 = { -197.0782f, -2397.902f, 5.0013f };
	Local_175[21 /*44*/].f_15 = { -209.4439f, -2388.576f, 5.0012f };
	Local_175[18 /*44*/].f_12 = { -193.7419f, -2422.942f, 5.0007f };
	Local_175[19 /*44*/].f_12 = { -202.1372f, -2396.974f, 5.0012f };
	Local_175[20 /*44*/].f_12 = { -184.749f, -2422.098f, 5.0013f };
	Local_175[21 /*44*/].f_12 = { -198.5648f, -2396.695f, 5.0013f };
	Local_175[18 /*44*/].f_9 = { -182.8242f, -2430.242f, 5.0013f };
	Local_175[19 /*44*/].f_9 = { -193.7419f, -2422.942f, 5.0007f };
	Local_175[20 /*44*/].f_9 = { -178.9606f, -2429.846f, 5.0013f };
	Local_175[21 /*44*/].f_9 = { -184.749f, -2422.098f, 5.0013f };
	Local_175[18 /*44*/].f_6 = { -169.6456f, -2449.349f, 5.0139f };
	Local_175[19 /*44*/].f_6 = { -182.8242f, -2430.242f, 5.0013f };
	Local_175[20 /*44*/].f_6 = { -172.6127f, -2450.106f, 5.0129f };
	Local_175[21 /*44*/].f_6 = { -178.9606f, -2429.846f, 5.0013f };
	Local_175[18 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000);
	Local_175[19 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[20 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000);
	Local_175[21 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[18 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[19 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[20 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[21 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[26 /*44*/].f_15 = { -212.0108f, -2386.458f, 5.00033f };
	Local_175[27 /*44*/].f_15 = { -217.4184f, -2391.906f, 5.00033f };
	Local_175[26 /*44*/].f_12 = { -212.0108f, -2386.458f, 5.00033f };
	Local_175[27 /*44*/].f_12 = { -217.4184f, -2391.906f, 5.00033f };
	Local_175[26 /*44*/].f_9 = { -213.717f, -2397.432f, 5.0012f };
	Local_175[27 /*44*/].f_9 = { -215.9651f, -2400.332f, 5.0012f };
	Local_175[26 /*44*/].f_6 = { -202.8748f, -2411.434f, 5.0012f };
	Local_175[27 /*44*/].f_6 = { -205.8522f, -2412.8f, 5.0012f };
	Local_175[26 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 26000);
	Local_175[27 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 26000);
	Local_175[26 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[27 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_175[28 /*44*/].f_3 = { -76.5442f, -2581.741f, 5.0052f };
	Local_175[28 /*44*/].f_21 = 267.4709f;
	Local_1452[0 /*7*/].f_2 = { -83.8f, -2365.813f, 14.5418f };
	Local_1452[1 /*7*/].f_2 = { -128.1432f, -2366.002f, 8.3193f };
	Local_1452[2 /*7*/].f_2 = { -187.9897f, -2365.422f, 8.3193f };
	Local_1452[3 /*7*/].f_2 = { -221.3571f, -2375.652f, 12.3325f };
	Local_69[4 /*15*/].f_2 = { -262.6096f, -2401.813f, 5.00131f };
	Local_69[4 /*15*/].f_5 = 0f;
	Local_69[4 /*15*/].f_8 = { -178.8651f, -2511.789f, 5.14006f };
	Local_69[5 /*15*/].f_2 = { -60.731f, -2407.587f, 5.00087f };
	Local_69[5 /*15*/].f_5 = 0f;
	Local_69[5 /*15*/].f_8 = { -156.2132f, -2516.67f, 5.00866f };
}

void func_881(int iParam0)//Position - 0x87C7A
{
	int iVar0;
	
	RECORDING::_0x81CBAE94390F9F89();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	if (STREAMING::IS_IPL_ACTIVE("SUNK_SHIP_FIRE"))
	{
		STREAMING::REMOVE_IPL("SUNK_SHIP_FIRE");
	}
	if (GlobalFunc_2773(func_887()))
	{
		GlobalFunc_8011(func_887(), 1);
	}
	else
	{
		if (GlobalFunc_8315() == 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Global_85623 = 1;
			}
		}
		GlobalFunc_5738(0);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3565))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3565, 11);
	}
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (GlobalFunc_2773(Local_69[iVar0 /*15*/]))
		{
			if (Local_69[iVar0 /*15*/] != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_69[iVar0 /*15*/], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[iVar0 /*15*/]));
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_69[iVar0 /*15*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_69[iVar0 /*15*/].f_1));
			}
		}
		iVar0++;
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		if (GlobalFunc_2773(Local_175[iVar0 /*44*/]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_175[iVar0 /*44*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_175[iVar0 /*44*/].f_1));
			}
			PED::SET_PED_KEEP_TASK(Local_175[iVar0 /*44*/], 1);
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_175[iVar0 /*44*/], 1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_175[iVar0 /*44*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (GlobalFunc_2773(Local_48[iVar0 /*2*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_48[iVar0 /*2*/], 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[iVar0 /*2*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_48[iVar0 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_48[iVar0 /*2*/].f_1));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_1452[iVar0 /*7*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1452[iVar0 /*7*/].f_1));
		}
		iVar0++;
	}
	if (AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
	{
		AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", 1);
	}
	HUD::CLEAR_PRINTS();
	STREAMING::CLEAR_FOCUS();
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(1f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1710))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1710);
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::CLEAR_PED_NON_CREATION_AREA();
	GlobalFunc_4935();
	if (HUD::DOES_BLIP_EXIST(uLocal_1705))
	{
		HUD::REMOVE_BLIP(&uLocal_1705);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1718))
	{
		HUD::REMOVE_BLIP(&uLocal_1718);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1735))
	{
		HUD::REMOVE_BLIP(&uLocal_1735);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1726))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1726);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1727))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1727, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1727);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1719))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1719, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1719);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1750))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1750);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1728)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1728[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1728[iVar0]));
		}
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1751))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1751, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1748))
	{
		CAM::DESTROY_CAM(iLocal_1748, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1749))
	{
		CAM::DESTROY_CAM(iLocal_1749, 0);
	}
	GlobalFunc_5652(&Local_1661, 1, 0);
	GlobalFunc_7139(&Local_1661, 0);
	GlobalFunc_495(128, 0);
	GlobalFunc_5810(&uLocal_1686);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_563(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
	}
	MISC::SET_TIME_SCALE(1f);
	if (CAM::IS_SCREEN_FADED_OUT() && iParam0)
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	GlobalFunc_2362(1);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1876))
	{
		AUDIO::STOP_SOUND(iLocal_1876);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1877))
	{
		AUDIO::STOP_SOUND(iLocal_1877);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1878))
	{
		AUDIO::STOP_SOUND(iLocal_1878);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1879))
	{
		AUDIO::STOP_SOUND(iLocal_1879);
	}
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), 0);
	GlobalFunc_563(0);
	GlobalFunc_11318(func_887());
	GlobalFunc_11318(func_886());
	GlobalFunc_11318(func_147());
	GlobalFunc_1998(0);
	if (GRAPHICS::GET_USINGSEETHROUGH())
	{
		GRAPHICS::SET_SEETHROUGH(0);
	}
	GRAPHICS::SEETHROUGH_RESET();
	GlobalFunc_5883(&Local_1947);
}





int func_886()//Position - 0x881EF
{
	return Local_69[0 /*15*/];
}

int func_887()//Position - 0x881FC
{
	return Local_69[1 /*15*/];
}

