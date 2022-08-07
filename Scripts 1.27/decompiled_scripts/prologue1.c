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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30[5] = { 0, 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_48[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[3] = { 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69[4] = { 0, 0, 0, 0 };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113[4];
	float fLocal_126[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_131[42];
	float fLocal_258[42] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_301 = { 0, 0, 0 } ;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313[40];
	struct<3> Local_434[14];
	struct<3> Local_477[14];
	float fLocal_520[14] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_535 = 0f;
	struct<3> Local_536[3];
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	char cLocal_554[24] = "";
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	char* sLocal_560 = NULL;
	char* sLocal_561 = NULL;
	char* sLocal_562 = NULL;
	char* sLocal_563 = NULL;
	char* sLocal_564 = NULL;
	char* sLocal_565 = NULL;
	char* sLocal_566 = NULL;
	char* sLocal_567 = NULL;
	char* sLocal_568 = NULL;
	char* sLocal_569 = NULL;
	char* sLocal_570 = NULL;
	char* sLocal_571 = NULL;
	char* sLocal_572 = NULL;
	char* sLocal_573 = NULL;
	char* sLocal_574 = NULL;
	char* sLocal_575 = NULL;
	char* sLocal_576 = NULL;
	char* sLocal_577 = NULL;
	char* sLocal_578 = NULL;
	char* sLocal_579 = NULL;
	char* sLocal_580 = NULL;
	char* sLocal_581 = NULL;
	char* sLocal_582 = NULL;
	char* sLocal_583 = NULL;
	char* sLocal_584 = NULL;
	char* sLocal_585 = NULL;
	char* sLocal_586 = NULL;
	char* sLocal_587 = NULL;
	char* sLocal_588 = NULL;
	char* sLocal_589 = NULL;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	struct<3> Local_595 = { 0, 0, 0 } ;
	struct<3> Local_598 = { 0, 0, 0 } ;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	struct<3> Local_603 = { 0, 0, 0 } ;
	struct<3> Local_606 = { 0, 0, 0 } ;
	var uLocal_609 = 0;
	struct<3> Local_610 = { 0, 0, 0 } ;
	struct<3> Local_613 = { 0, 0, 0 } ;
	var uLocal_616 = 0;
	struct<3> Local_617 = { 0, 0, 0 } ;
	struct<3> Local_620 = { 0, 0, 0 } ;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	struct<3> Local_625 = { 0, 0, 0 } ;
	struct<3> Local_628 = { 0, 0, 0 } ;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	var uLocal_637 = 0;
	struct<3> Local_638 = { 0, 0, 0 } ;
	struct<3> Local_641 = { 0, 0, 0 } ;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	struct<3> Local_646 = { 0, 0, 0 } ;
	struct<3> Local_649 = { 0, 0, 0 } ;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660[4] = { 0, 0, 0, 0 };
	int iLocal_665 = 0;
	int iLocal_666[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_709[2] = { 0, 0 };
	int iLocal_712 = 0;
	struct<8> Local_713[42];
	int iLocal_1050 = 0;
	int iLocal_1051[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1072[2] = { 0, 0 };
	int iLocal_1075 = 0;
	var uLocal_1076[2] = { 0, 0 };
	int iLocal_1079[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1088[2] = { 0, 0 };
	int iLocal_1091 = 0;
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	int iLocal_1095 = 0;
	int iLocal_1096 = 0;
	int iLocal_1097 = 0;
	int iLocal_1098 = 0;
	var uLocal_1099[4] = { 0, 0, 0, 0 };
	int iLocal_1104 = 0;
	var uLocal_1105[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1148[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	var uLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163[4] = { 0, 0, 0, 0 };
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179[4] = { 0, 0, 0, 0 };
	int iLocal_1184 = 0;
	int iLocal_1185[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1192[3] = { 0, 0, 0 };
	int iLocal_1196[4] = { 0, 0, 0, 0 };
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	int iLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	int iLocal_1207[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1213[4] = { 0, 0, 0, 0 };
	int iLocal_1218[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	int iLocal_1231 = 0;
	int iLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	int iLocal_1235 = 0;
	int iLocal_1236 = 0;
	int iLocal_1237 = 0;
	int iLocal_1238 = 0;
	int iLocal_1239 = 0;
	int iLocal_1240 = 0;
	int iLocal_1241 = 0;
	int iLocal_1242 = 0;
	int iLocal_1243 = 0;
	int iLocal_1244 = 0;
	int iLocal_1245 = 0;
	int iLocal_1246 = 0;
	int iLocal_1247 = 0;
	int iLocal_1248 = 0;
	int iLocal_1249 = 0;
	int iLocal_1250 = 0;
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	int iLocal_1253 = 0;
	int iLocal_1254 = 0;
	int iLocal_1255 = 0;
	char[] cLocal_1256[8] = 0;
	int iLocal_1257[314] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1572[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1613[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1644[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1670 = 4;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 4;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 4;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 4;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 4;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 4;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 4;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	struct<21> Local_1714 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_1748 = 16;
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
	var uLocal_1820 = 0;
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
	var uLocal_1914 = 3;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 1092616192;
	var uLocal_1921 = 1101004800;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 3;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	bool bLocal_1938 = 0;
	struct<2> Local_1939[10];
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962 = 0;
	int iLocal_1963 = 0;
	struct<3> Local_1964 = { 0, 0, 0 } ;
	struct<3> Local_1967 = { 0, 0, 0 } ;
	char* sLocal_1970 = NULL;
	int iLocal_1971 = 0;
	var uLocal_1972 = 0;
	int iLocal_1973 = 0;
	int iLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979[4] = { 0, 0, 0, 0 };
	int iLocal_1984 = 0;
	bool bLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987 = 0;
	int iLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_40 = -1;
	Local_98 = { 0f, 0f, 0f };
	Local_101 = { 5311.236f, -5212.563f, (85.7187f - 3.2f) };
	Local_104 = { 5308.417f, -5212.398f, (85.7187f - 3.2f) };
	Local_107 = { 5311.974f, -5211.524f, (85.7187f - 3.2f) };
	Local_110 = { 5428.791f, -5115.189f, 77.2632f };
	Local_301 = { 5320.6f, -5188.56f, 82.5f };
	Local_304 = { 0f, 0f, -90f };
	Local_307 = { 5308.857f, -5208.156f, ((86.9186f - 3.2f) - 0.05f) };
	Local_310 = { 0f, 0f, 0f };
	sLocal_560 = "ALPrologue";
	sLocal_561 = "Map_Objects";
	sLocal_562 = "missprologuesnow_moves";
	sLocal_563 = "missprologuedead_guard";
	sLocal_564 = "missprologueig_1";
	sLocal_565 = "facials@blend_out@static_hostage_2-pro_mcs_1_face@guard-pro_mcs_1";
	sLocal_566 = "missprologueig_2";
	sLocal_567 = "missprologuemcs_1";
	sLocal_568 = "missprologueig_3@get_into_cover";
	sLocal_569 = "missprologueig_3@react_to_explosion";
	sLocal_570 = "missprologueig_3";
	sLocal_571 = "missprologueig_3@cover_impatient";
	sLocal_572 = "missprologuebrad_alert_idle";
	sLocal_573 = "missbigscore2big_2";
	sLocal_574 = "missprologuemcs_2_walkout_vault";
	sLocal_575 = "missprologueig_4@hold_head_base";
	sLocal_576 = "missprologueig_4@wipe_blood";
	sLocal_577 = "missprologueig_4_p2";
	sLocal_578 = "missprologueig_4@kill_michael";
	sLocal_579 = "missprologueig_5@set_c4_start_loop";
	sLocal_580 = "missprologueig_5@set_c4_mainaction";
	sLocal_581 = "missprologueig_5@set_c4_end_loop";
	sLocal_582 = "missprologueig_5@press_button_duck";
	sLocal_583 = "missprologueleadinoutpro_mcs_5_p3";
	sLocal_584 = "missprologueig_6";
	sLocal_585 = "MISSPROLOGUEIG_6@FIRST_PERSON";
	sLocal_586 = "missprologueig_5@cough";
	sLocal_587 = "missprologueig_5@clean_smoke";
	sLocal_588 = "prolog2";
	sLocal_589 = "prolog5";
	Local_595 = { 5310.14f, -5208.314f, (82.557f - 0.04f) };
	Local_598 = { 0f, 0f, 0f };
	Local_603 = { 5310.14f, -5208.27f, 82.52f };
	Local_606 = { 0f, 0f, 0f };
	Local_610 = { 5310.14f, -5208.279f, 82.52f };
	Local_613 = { 0f, 0f, 0f };
	Local_617 = { 5310.083f, -5204.825f, 82.52f };
	Local_620 = { 0f, 0f, 0f };
	Local_625 = { 5298.805f, -5188.455f, 82.54f };
	Local_628 = { 0f, 0f, -90f };
	Local_631 = { 5297.25f, -5192.246f, 82.523f };
	Local_634 = { 0f, 0f, 180f };
	Local_638 = { 5316.087f, -5178.637f, 82.519f };
	Local_641 = { 0f, 0f, 0f };
	Local_646 = { (5320.469f + 0.25f), -5186.864f, 82.519f };
	Local_649 = { 0f, 0f, 0f };
	iLocal_1225 = joaat("weapon_pistol");
	iLocal_1226 = joaat("weapon_smg");
	iLocal_1227 = joaat("weapon_carbinerifle");
	iLocal_1228 = joaat("weapon_pumpshotgun");
	iLocal_1232 = 145;
	iLocal_1235 = -1;
	iLocal_1236 = -1;
	iLocal_1237 = -1;
	iLocal_1238 = -1;
	iLocal_1239 = -1;
	iLocal_1240 = -1;
	iLocal_1241 = -1;
	iLocal_1242 = -1;
	iLocal_1243 = -1;
	iLocal_1244 = -1;
	iLocal_1245 = -1;
	iLocal_1246 = joaat("prop_c4_final");
	iLocal_1247 = joaat("prop_c4_final_green");
	iLocal_1248 = joaat("prop_c4_num_0003");
	iLocal_1249 = joaat("prop_c4_num_0002");
	iLocal_1250 = joaat("prop_c4_num_0001");
	iLocal_1251 = joaat("prop_barrier_work06a");
	cLocal_1256 = "PROAUD";
	bLocal_1938 = true;
	iLocal_1960 = 1739830342;
	iLocal_1961 = 1008345977;
	iLocal_1962 = -1838261400;
	iLocal_1963 = -88189184;
	iLocal_1977 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_696();
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		iVar0 = 0;
		while (iVar0 < iLocal_666)
		{
			if (!PED::IS_PED_INJURED(iLocal_666[iVar0]))
			{
				if (!PED::IS_PED_IN_COMBAT(iLocal_666[iVar0], 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_655))
					{
						TASK::TASK_COMBAT_PED(iLocal_666[iVar0], iLocal_655, 0, 16);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_658) && !PED::IS_PED_INJURED(iLocal_658))
					{
						TASK::TASK_COMBAT_PED(iLocal_666[iVar0], iLocal_658, 0, 16);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_666[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_654, 0), -1, 0, 0);
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[iVar0], 1);
				PED::SET_PED_KEEP_TASK(iLocal_666[iVar0], 1);
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_655))
		{
			PED::SET_PED_KEEP_TASK(iLocal_655, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_658))
		{
			PED::SET_PED_KEEP_TASK(iLocal_658, 1);
		}
		if (GlobalFunc_8315() == 0)
		{
			if (iLocal_1252 < 13)
			{
				GlobalFunc_509("PRO_MDIED");
			}
		}
		else if (GlobalFunc_8315() == 2)
		{
			if (iLocal_1252 < 13)
			{
				GlobalFunc_509("PRO_TDIED");
			}
		}
		func_693(34);
		GlobalFunc_2237(7);
		GlobalFunc_10632();
		func_651(0, 1);
	}
	MISC::SET_MISSION_FLAG(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_Prologue", 0);
		func_696();
		func_646();
		func_645();
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (iLocal_1252 > 0)
		{
			if (iLocal_1252 <= 5)
			{
				if (!func_644(263))
				{
					ENTITY::CREATE_MODEL_HIDE(5310.872f, -5196.34f, 84.6373f, 1f, joaat("v_ilev_cd_lampal"), 1);
					func_643(263, 1);
				}
			}
			else if (func_644(263))
			{
				ENTITY::REMOVE_MODEL_HIDE(5310.872f, -5196.34f, 84.6373f, 1f, joaat("v_ilev_cd_lampal"), 0);
				func_643(263, 0);
			}
			if (iLocal_1252 <= 5)
			{
				ENTITY::REMOVE_MODEL_SWAP(5293.14f, -5162.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), 0);
				ENTITY::REMOVE_MODEL_SWAP(5295.89f, -5192.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), 0);
			}
			else
			{
				ENTITY::CREATE_MODEL_SWAP(5293.14f, -5162.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), 1);
				ENTITY::CREATE_MODEL_SWAP(5295.89f, -5192.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), 1);
			}
		}
		if (iLocal_1252 > 0 && iLocal_1252 < 12)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5307.03f, -5180.699f, 84.01865f, 15f, 5f, 1.5f, 0, 1, 0))
			{
				func_642(3, joaat("v_ilev_cd_door3"), 5305.46f, -5177.75f, 83.67f, 1, 1f, 1f, 0f);
			}
		}
		if (iLocal_1252 > 0 && iLocal_1252 > 6)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5310.546f, -5206.499f, 84.51863f, 7f, 12f, 2f, 0, 1, 0))
			{
				func_642(0, joaat("v_ilev_cd_door2"), 5316.65f, -5205.74f, 83.67f, 1, 1f, 1f, 0f);
			}
		}
		if (iLocal_1252 > 0 && iLocal_1252 <= 6)
		{
			if (!func_644(264))
			{
				func_641(0, joaat("v_ilev_cd_door2"));
			}
		}
		if (iLocal_1252 >= 4 && iLocal_1252 <= 5)
		{
			if (func_644(37))
			{
				func_642(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
				func_642(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5307.03f, -5180.699f, 84.01865f, 15f, 5f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5328.008f, -5188.691f, 83.78484f, 15f, 10f, 2.5f, 0, 1, 0))
		{
			if (iLocal_93 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
				{
					if (iLocal_94 == 0)
					{
						if (func_638(16, joaat("prop_gar_door_a_01")))
						{
							ENTITY::CREATE_MODEL_HIDE(5320.6f, -5188.56f, 82.52f, 1f, joaat("prop_gar_door_a_01"), 0);
							iLocal_1170 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_gar_door_a_01"), Local_301, 1, 1, 0);
							ENTITY::SET_ENTITY_COLLISION(iLocal_1170, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_1170, Local_304, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gar_door_a_01"));
							if (iLocal_1170 != 0)
							{
								iLocal_94 = 1;
							}
						}
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1178))
				{
					if (iLocal_94 == 1)
					{
						if (func_638(19, joaat("p_gdoor1colobject_s")))
						{
							iLocal_1178 = OBJECT::CREATE_OBJECT(joaat("p_gdoor1colobject_s"), 5320.59f, -5188.49f, 82.52f, 1, 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1178, 1);
							ENTITY::SET_ENTITY_COORDS(iLocal_1178, 5320.59f, -5188.49f, 82.52f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_1178, 0f, 0f, 90f, 2, 1);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_1178, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_gdoor1colobject_s"));
						}
					}
				}
				else if (iLocal_1252 >= 11)
				{
					if (func_637(sLocal_561))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1178, 5320.59f, -5188.49f, (82.52f + 2.6f), 1, 0, 0, 1);
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_1170))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3))
							{
								ENTITY::PLAY_ENTITY_ANIM(iLocal_1170, "GDoor_Open", sLocal_561, 1000f, 0, 1, 0, 0, 0);
							}
							else
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open", 1f);
								ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1170, sLocal_561, "GDoor_Open", 0f);
								iLocal_93 = 0;
							}
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1178, 5320.59f, -5188.49f, 82.52f, 1, 0, 0, 1);
					if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_1170))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3))
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open", 0f);
							ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1170, sLocal_561, "GDoor_Open", 0f);
						}
					}
					iLocal_93 = 0;
				}
			}
			if (!func_644(243))
			{
				if (iLocal_1252 >= 10 || iLocal_1252 <= 11)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_1170))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open") <= 1f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1178))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_1178, 5320.59f, -5188.49f, GlobalFunc_1572(82.52f, (82.52f + 2.6f), 0f, 0.888f, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open")), 1, 0, 0, 1);
								}
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open") == 1f)
								{
									func_643(243, 1);
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_1252 >= 11 && iLocal_1252 <= 13)
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5333.214f, -5187.637f, 84.80402f, 20f, 10f, 3f, 0, 1, 0))
				{
					uLocal_1234 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
					func_643(239, 0);
				}
			}
			else if (!func_644(239))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234, 9);
					func_643(239, 1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[0]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(uLocal_1670[0]) <= 101 && iLocal_1252 == 8)
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_1670[0], 1);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1670[0], 1435919172) != 1 && !PED::IS_PED_RAGDOLL(uLocal_1670[0]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_1670[0], 0);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[2]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1670[2], 1435919172) != 1 && !PED::IS_PED_RAGDOLL(uLocal_1670[2]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_1670[2], 0);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_658))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 1435919172) != 1 && !PED::IS_PED_RAGDOLL(iLocal_658))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_658, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_656))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_656, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_657))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_657, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_658))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_658, 0);
		}
		if ((iLocal_1252 >= 2 && iLocal_1252 <= 10) && iLocal_1252 != 8)
		{
			if ((CAM::IS_SCREEN_FADED_IN() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !GlobalFunc_116(0))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_654, joaat("weapon_carbinerifle"), 0))
				{
					iVar1 = joaat("weapon_carbinerifle");
					iVar2 = 0;
					WEAPON::GET_AMMO_IN_CLIP(iLocal_654, iVar1, &iVar2);
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_654, iVar1) <= 0 && iVar2 <= 0)
					{
						iLocal_1253 = 8;
						func_626();
					}
				}
			}
		}
		switch (iLocal_1252)
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
				func_625(5, 0, 0);
				break;
			
			case 12:
				if (iLocal_28 < 1)
				{
					func_625(5, 0, 0);
				}
				else
				{
					func_625(6, 0, 0);
				}
				break;
			
			case 13:
				func_625(6, 0, 0);
				break;
			
			case 14:
			case 15:
				if (iLocal_28 < 3)
				{
					func_625(7, 0, 0);
				}
				else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("pro_mcs_7_concat") && CUTSCENE::IS_CUTSCENE_PLAYING()) && func_644(278))
				{
					CLOCK::SET_CLOCK_TIME(12, 0, 0);
				}
				break;
		}
		if (iLocal_1252 > 0)
		{
			if (iLocal_1252 < 11)
			{
				fLocal_535 = 0f;
			}
			else if (iLocal_1252 >= 11 || iLocal_1252 <= 12)
			{
				if (fLocal_535 < 1f)
				{
					fLocal_535 = (fLocal_535 + (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			else if (iLocal_1252 == 13)
			{
				if (fLocal_535 > 0.4f)
				{
					fLocal_535 = (fLocal_535 - (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			else if (iLocal_1252 >= 14 || iLocal_1252 <= 15)
			{
				if (fLocal_535 < 1f)
				{
					fLocal_535 = (fLocal_535 + (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			if (fLocal_535 > 1f)
			{
				fLocal_535 = 1f;
			}
			if (fLocal_535 < 0f)
			{
				fLocal_535 = 0f;
			}
			if (!PED::IS_PED_INJURED(iLocal_656))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_656) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_656)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_656))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(iLocal_656);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_656, 1);
					if (PED::GET_PED_ENVEFF_SCALE(iLocal_656) != fLocal_535)
					{
						PED::SET_PED_ENVEFF_SCALE(iLocal_656, fLocal_535);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_657))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_657) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_657)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_657))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(iLocal_657);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_657, 1);
					if (PED::GET_PED_ENVEFF_SCALE(iLocal_657) != fLocal_535)
					{
						PED::SET_PED_ENVEFF_SCALE(iLocal_657, fLocal_535);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_658))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_658) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_658)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_658))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(iLocal_658);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_658, 1);
					if (iLocal_1252 >= 12)
					{
						if (iLocal_1252 != 14)
						{
							PED::SET_PED_ENVEFF_SCALE(iLocal_658, 0.6f);
						}
						else
						{
							PED::SET_PED_ENVEFF_SCALE(iLocal_658, 0.8f);
							PED::_0x110F526AB784111F(iLocal_658, 0.15f);
						}
					}
					else if (PED::GET_PED_ENVEFF_SCALE(iLocal_658) != fLocal_535)
					{
						PED::SET_PED_ENVEFF_SCALE(iLocal_658, fLocal_535);
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_656))
		{
			PED::SET_PED_RESET_FLAG(iLocal_656, 227, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_657))
		{
			PED::SET_PED_RESET_FLAG(iLocal_657, 227, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_658))
		{
			PED::SET_PED_RESET_FLAG(iLocal_658, 227, 1);
		}
		if (((iLocal_1252 >= 11 && iLocal_1252 <= 13) && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!PED::IS_PED_INJURED(iLocal_655))
			{
				func_624();
			}
		}
		if (iLocal_1232 != GlobalFunc_8315())
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_654) && ENTITY::DOES_ENTITY_EXIST(iLocal_655)) && ENTITY::DOES_ENTITY_EXIST(iLocal_658))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_654, 185, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_655, 185, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_658, 185, 1);
				iLocal_1232 = GlobalFunc_8315();
			}
		}
		if (iLocal_88 == 0)
		{
			if (iLocal_1252 != 1)
			{
				HUD::DISPLAY_RADAR(0);
			}
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_AMMO_THIS_FRAME(0);
		}
		else
		{
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		if (iLocal_1252 <= 10)
		{
			if (!func_644(117))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			}
		}
		if ((CAM::_0x705A276EBFF3133D() || CAM::_0x3044240D2E0FA842()) || (CAM::DOES_CAM_EXIST(uLocal_1157) && CAM::IS_CAM_INTERPOLATING(uLocal_1157)))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		}
		TASK::SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(100f);
		if (PED::GET_VEHICLE_PED_IS_USING(iLocal_654) != 0)
		{
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_USING(iLocal_654), -1);
		}
		iVar3 = 0;
		iVar4 = GlobalFunc_648();
		iVar3 = 0;
		while (iVar3 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar5 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar3);
			switch (iVar5)
			{
				case 140:
					SCRIPT::GET_EVENT_DATA(0, iVar3, &iVar4, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
							{
								GlobalFunc_565(458, 1, 0);
							}
						}
					}
					break;
			}
			iVar3++;
		}
		GlobalFunc_504(iLocal_654, -1);
		func_616();
		func_615();
		if (!GlobalFunc_485(138))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (GlobalFunc_74("CMN_FPSHELP"))
				{
					GlobalFunc_2238(1);
				}
				GlobalFunc_585(138, 1);
			}
		}
		if ((iLocal_1252 >= 11 && iLocal_1252 <= 12) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
		}
		else
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
		}
		if ((iLocal_1252 >= 6 && iLocal_1252 <= 10) && iLocal_1975 > 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(uLocal_1162))
			{
				if (!(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("pro_mcs_7_concat") && CUTSCENE::IS_CUTSCENE_PLAYING()))
				{
					func_604();
				}
			}
		}
		if (iLocal_97)
		{
			if (!AUDIO::IS_STREAM_PLAYING())
			{
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
				iLocal_97 = 0;
			}
		}
		switch (iLocal_1252)
		{
			case 0:
				if ((func_638(9, GlobalFunc_4917(0)) && func_638(10, GlobalFunc_4917(2))) && func_638(11, joaat("ig_brad")))
				{
					func_589();
				}
				break;
			
			case 1:
				if ((((func_638(3, joaat("a_m_m_prolhost_01")) && func_638(0, joaat("a_f_m_prolhost_01"))) && func_638(12, joaat("ig_prolsec_02"))) && func_638(36, joaat("prop_1st_prologue_scene"))) && func_637(sLocal_564))
				{
					func_583();
				}
				break;
			
			case 2:
				func_582();
				break;
			
			case 3:
				if ((((func_638(37, joaat("prop_1st_hostage_scene")) && func_637(sLocal_564)) && func_637(sLocal_566)) && func_637(sLocal_567)) && func_637(sLocal_565))
				{
					func_581();
				}
				break;
			
			case 4:
				if ((((((func_638(37, joaat("prop_1st_hostage_scene")) && func_637(sLocal_566)) && func_637(sLocal_567)) && func_637(sLocal_568)) && func_637(sLocal_571)) && func_637(sLocal_565)) && func_637(sLocal_572))
				{
					func_580();
				}
				break;
			
			case 5:
				if ((((((((((func_638(31, iLocal_1246) && func_638(32, iLocal_1247)) && func_638(33, iLocal_1248)) && func_638(34, iLocal_1249)) && func_638(35, iLocal_1250)) && func_638(38, joaat("prop_vault_door_scene"))) && func_637(sLocal_569)) && func_637(sLocal_570)) && func_637(sLocal_571)) && func_637(sLocal_572)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_588))
				{
					func_574();
				}
				break;
			
			case 6:
				if (((((func_638(30, joaat("v_ilev_cd_dust")) && func_637(sLocal_573)) && func_637(sLocal_574)) && func_637(sLocal_586)) && func_637(sLocal_571)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_589))
				{
					func_570();
				}
				break;
			
			case 7:
				if (func_638(4, joaat("csb_prolsec")) && func_637(sLocal_574))
				{
					func_568();
				}
				break;
			
			case 8:
				if ((((((((((((func_638(4, joaat("csb_prolsec")) && func_638(15, joaat("prop_cs_heist_bag_02"))) && func_638(20, joaat("p_ld_heist_bag_s_1"))) && func_638(18, joaat("p_csh_strap_01_s"))) && func_638(17, joaat("prop_michael_balaclava"))) && func_638(39, joaat("prop_2nd_hostage_scene"))) && func_637(sLocal_575)) && func_637(sLocal_576)) && func_637(sLocal_577)) && func_637(sLocal_578)) && func_637(sLocal_579)) && func_637(sLocal_580)) && func_637(sLocal_581))
				{
					func_556();
				}
				break;
			
			case 9:
				if (((((((func_638(31, iLocal_1246) && func_638(32, iLocal_1247)) && func_638(33, iLocal_1248)) && func_638(34, iLocal_1249)) && func_638(35, iLocal_1250)) && func_637(sLocal_579)) && func_637(sLocal_580)) && func_637(sLocal_581))
				{
					func_552();
				}
				break;
			
			case 10:
				if ((func_637(sLocal_582) && func_637(sLocal_587)) && func_637(sLocal_581))
				{
					func_550();
				}
				break;
			
			case 11:
				if (((((((((((((((((((((((func_638(25, joaat("s_m_m_snowcop_01")) && func_638(28, joaat("u_m_y_proldriver_01"))) && func_638(27, joaat("u_m_m_prolsec_01"))) && func_638(13, joaat("policeold1"))) && func_638(14, joaat("policeold2"))) && func_638(24, joaat("stockade3"))) && func_638(23, joaat("rancherxl2"))) && func_638(5, joaat("emperor3"))) && func_638(21, joaat("p_trevor_prologe_bally_s"))) && func_638(22, joaat("p_trev_ski_mask_s"))) && func_547(3, sLocal_560)) && func_547(4, sLocal_560)) && func_547(5, sLocal_560)) && func_547(6, sLocal_560)) && func_547(8, sLocal_560)) && func_547(9, sLocal_560)) && func_547(11, sLocal_560)) && func_547(26, sLocal_560)) && func_547(700, sLocal_560)) && func_637(sLocal_584)) && func_637(sLocal_585)) && func_637(sLocal_563)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("policeold1"))) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("policeold2")))
				{
					func_504();
				}
				break;
			
			case 12:
				if (((func_547(26, sLocal_560) && func_547(701, sLocal_560)) && func_547(702, sLocal_560)) && func_637(sLocal_583))
				{
					func_499();
				}
				break;
			
			case 13:
				if ((((func_638(25, joaat("s_m_m_snowcop_01")) && func_638(13, joaat("policeold1"))) && func_638(14, joaat("policeold2"))) && func_638(23, joaat("rancherxl2"))) && func_637(sLocal_583))
				{
					func_470();
				}
				break;
			
			case 14:
				if ((((func_638(15, joaat("prop_cs_heist_bag_02")) && func_638(20, joaat("p_ld_heist_bag_s_1"))) && func_547(27, sLocal_560)) && func_547(28, sLocal_560)) && func_547(29, sLocal_560))
				{
					func_468();
				}
				break;
			
			case 15:
				if (((((((((((((((func_638(25, joaat("s_m_m_snowcop_01")) && func_638(13, joaat("policeold1"))) && func_638(14, joaat("policeold2"))) && func_638(23, joaat("rancherxl2"))) && func_638(6, joaat("freight"))) && func_638(7, joaat("freightcont1"))) && func_638(8, joaat("freightcont2"))) && func_638(15, joaat("prop_cs_heist_bag_02"))) && func_547(27, sLocal_560)) && func_547(28, sLocal_560)) && func_547(29, sLocal_560)) && func_547(32, sLocal_560)) && func_547(33, sLocal_560)) && func_547(34, sLocal_560)) && func_547(35, sLocal_560)) && func_637(sLocal_584))
				{
					func_360();
				}
				break;
			
			case 16:
				func_1();
				break;
			
			case 17:
				func_626();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x18B9
{
	while (!func_10(1, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_696();
	GlobalFunc_2240(&(uLocal_1670[0]));
	GlobalFunc_2240(&(uLocal_1670[2]));
	func_6();
	GlobalFunc_5103(0, 1);
	iLocal_92 = 1;
	func_651(0, 0);
}





void func_6()//Position - 0x1A72
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_2238(1);
	GlobalFunc_4956();
}




int func_10(int iParam0, bool bParam1)//Position - 0x1AD0
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
		func_358(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_90(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_13(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_13(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1C88
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
			func_78(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		func_78((*uParam0)[uParam0->f_7], 0);
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
		GlobalFunc_8378();
		GlobalFunc_582(iVar2);
		GlobalFunc_9118();
		GlobalFunc_8506(iVar2);
		GlobalFunc_10840(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

































































void func_78(int iParam0, bool bParam1)//Position - 0x8762
{
	GlobalFunc_8377(iParam0);
	GlobalFunc_7904(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}












int func_90(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x974F
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
			GlobalFunc_11321(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11334(*iParam0, bParam8);
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












































































































































































































































































int func_358(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x520D2
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
				GlobalFunc_11321(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11334(*iParam0, bParam6);
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


void func_360()//Position - 0x521B2
{
	int iVar0;
	int iVar1;
	
	if (func_467())
	{
		func_421(5, "stageFinale", 1, 0, 0, 1);
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_1975 = 0;
		Global_Mission_Fail_State.f_12[0] = iLocal_1975;
		MISC::SET_FAKE_WANTED_LEVEL(5);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_657, 1);
		iLocal_88 = 1;
		iLocal_76 = 0;
		STREAMING::REMOVE_IPL("prologue04_cover");
		uLocal_551 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3551.478f, -4690.381f, 112.995f, 15f, 15f, 6f, 0.017f, 0, 7);
		uLocal_552 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3518.557f, -4670.074f, 112.2258f, 18f, 3f, 6f, ((-1.39f / 360f) * 6.28f), 0, 7);
		uLocal_553 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3528.091f, -4673.379f, 112.2891f, 2f, 8f, 6f, 0f, 0, 7);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_658, iLocal_1229);
		func_419(&iLocal_1092);
		func_419(&iLocal_1094);
		func_419(&iLocal_1096);
		func_643(164, 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
		}
		func_418(&(iLocal_1079[0]), joaat("freight"), 3461.96f, -4732.633f, (113.0537f - 1.6f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[0]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[0], 1);
		func_418(&(iLocal_1079[1]), joaat("freightcont1"), 3478.585f, -4734.475f, (112.1684f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[1]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[1], 1);
		func_418(&(iLocal_1079[2]), joaat("freightcont2"), 3494.117f, -4736.199f, (112.2295f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[2]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[2], 1);
		func_418(&(iLocal_1079[3]), joaat("freightcont2"), 3509.635f, -4737.922f, (112.2905f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[3]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[3], 1);
		func_418(&(iLocal_1079[4]), joaat("freightcont1"), 3525.161f, -4739.646f, (112.3516f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[4]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[4], 1);
		func_418(&(iLocal_1079[5]), joaat("freightcont2"), 3540.698f, -4741.372f, (112.4128f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[5]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[5], 1);
		func_418(&(iLocal_1079[6]), joaat("freightcont1"), 3556.237f, -4743.097f, (112.4739f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[6]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[6], 1);
		func_418(&(iLocal_1079[7]), joaat("freightcont2"), 3571.75f, -4744.82f, (112.5349f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1079[7]);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1079[7], 1);
		if (func_417())
		{
			MISC::CLEAR_AREA(3549.75f, -4660.526f, 113.5495f, 1000f, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(iLocal_659))
			{
				GlobalFunc_2510(iLocal_659, Local_110, 0f, 0);
				PED::EXPLODE_PED_HEAD(iLocal_659, joaat("weapon_sniperrifle"));
			}
			GlobalFunc_200(&uLocal_1748, 5);
			if (GlobalFunc_8315() != 2)
			{
				GlobalFunc_9134(&uLocal_1670, 2);
				func_13(&uLocal_1670, 1, 1, 0);
				func_696();
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
			}
			GlobalFunc_173(&uLocal_1748, 1, iLocal_656, "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_1748, 2, iLocal_657, "TREVOR", 0, 1);
			GlobalFunc_2239(iLocal_1050, 3532.246f, -4716.934f, 111.8443f, 125.7299f);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 0);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 2);
			GlobalFunc_2510(iLocal_658, 3550.345f, -4691.488f, 113.09f, 351.6286f, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_658, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_658, sLocal_584, "lying_dead_brad", 3550.345f, -4691.505f, 114.368f, Local_98, 1000f, -1000f, -1, 792585, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[4]))
			{
				iLocal_1185[4] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3545.981f, -4692.626f, 112.8602f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_1185[4], 3545.981f, -4692.626f, 112.8602f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1185[4], -103.32f, 0f, -115.2f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[4], 1);
			}
			AUDIO::STOP_PED_SPEAKING(iLocal_658, 1);
			GlobalFunc_2510(iLocal_656, 3543.883f, -4696.196f, 112.6563f, 351.6286f, 0);
			uLocal_652 = PED::CREATE_SYNCHRONIZED_SCENE(3550.345f, -4691.505f, 114.368f, Local_98, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_656, uLocal_652, sLocal_584, "lying_dead_player0", 1000f, -1000f, 4, 8191, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_652, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_656, 0, 0);
			AUDIO::STOP_PED_SPEAKING(iLocal_656, 1);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_656, iLocal_1227, 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_656, iLocal_1227, 500, 1, 1);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_656, iLocal_1227, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[3]))
			{
				iLocal_1185[3] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3547.381f, -4695.846f, 112.9602f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_1185[3], 3547.381f, -4695.846f, 112.9602f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1185[3], 0f, 0f, -57.96f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[3], 1);
			}
			if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(3550.82f, -4691.85f, 113.4f))
			{
				iLocal_1207[0] = TASK::ADD_COVER_POINT(3550.82f, -4691.85f, 113.4f, 0f, 1, 0, 0, 0);
			}
			GlobalFunc_2510(iLocal_657, 3550.82f, -4691.85f, 113.4f, 0f, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
			PED::CLEAR_PED_PROP(iLocal_657, 1);
			GlobalFunc_585(125, 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_657, 3550.82f, -4691.85f, 113.4f, -1, 0, 0f, 1, 1, iLocal_1207[0], 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_657, 1, 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_657, iLocal_1227, 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, iLocal_1227, 500, 1, 1);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_657, iLocal_1227, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_657, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((29.60337f - ENTITY::GET_ENTITY_HEADING(iLocal_657)));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_693(29);
		}
	}
	else
	{
		if (iLocal_28 < 3)
		{
			CUTSCENE::REQUEST_CUTSCENE("PRO_MCS_7_Concat", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (GlobalFunc_8315() != 2)
				{
					GlobalFunc_9134(&uLocal_1670, 2);
					func_13(&uLocal_1670, 1, 1, 0);
					func_696();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_656))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_656, iLocal_1229);
				}
				GlobalFunc_173(&uLocal_1748, 1, iLocal_656, "MICHAEL", 0, 1);
				GlobalFunc_173(&uLocal_1748, 2, iLocal_657, "TREVOR", 0, 1);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_654, iLocal_1227, 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_654, iLocal_1227, 500, 1, 1);
				}
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_654, iLocal_1227) < WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1227) * 2)
				{
					WEAPON::SET_PED_AMMO(iLocal_654, iLocal_1227, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1227) * 2);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
				iLocal_88 = 1;
				func_420(PLAYER::PLAYER_ID(), 1, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1050, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1050);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_1050);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				func_407(31);
				func_693(30);
				func_406();
				break;
			
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				iLocal_90 = 0;
				if (!func_644(20))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[16]))
					{
						func_418(&(iLocal_1051[16]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_560), sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(27, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_560), sLocal_560)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[16], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[16], 1);
						func_400(0);
						func_400(1);
						PED::SET_PED_ACCURACY(iLocal_666[0], 5);
						PED::SET_PED_ACCURACY(iLocal_666[1], 5);
						PED::SET_PED_INTO_VEHICLE(iLocal_666[0], iLocal_1051[16], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_666[1], iLocal_1051[16], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[16], 27, sLocal_560, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[16], 500f);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[17]))
					{
						func_418(&(iLocal_1051[17]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_560), sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(28, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_560), sLocal_560)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[17], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[17], 1);
						func_400(2);
						func_400(3);
						PED::SET_PED_ACCURACY(iLocal_666[2], 5);
						PED::SET_PED_ACCURACY(iLocal_666[3], 5);
						PED::SET_PED_INTO_VEHICLE(iLocal_666[2], iLocal_1051[17], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_666[3], iLocal_1051[17], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[17], 28, sLocal_560, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_1051[17], 0.75f);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[18]))
					{
						func_418(&(iLocal_1051[18]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_560), sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(29, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_560), sLocal_560)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[18], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[18], 1);
						func_400(4);
						func_400(5);
						PED::SET_PED_ACCURACY(iLocal_666[4], 5);
						PED::SET_PED_ACCURACY(iLocal_666[5], 5);
						PED::SET_PED_INTO_VEHICLE(iLocal_666[4], iLocal_1051[18], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_666[5], iLocal_1051[18], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[18], 29, sLocal_560, 1);
					}
					func_643(20, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold2"));
				iVar0 = 0;
				while (iVar0 < 3)
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[iVar0 + 16], 0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 == 0 || iVar0 == 3)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0], iLocal_1226, -1, 1, 1);
					}
					if (iVar0 == 2 || iVar0 == 5)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0], iLocal_1228, -1, 1, 1);
					}
					iVar0++;
				}
				func_406();
				break;
			
			case 2:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 2.5f);
				if (MISC::GET_PROFILE_SETTING(0) == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_398(72, "PROHLP_AIM3", 1, -1, 2000);
					}
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3567.724f, -4664.95f, 111.6539f, 3557.714f, -4704.931f, 118.521f, 35f, 0, 1, 0))
				{
					iLocal_1253 = 15;
					func_626();
				}
				if (SYSTEM::TIMERA() > 24000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[16]) && ((ENTITY::GET_ENTITY_HEALTH(iLocal_1051[16]) < 1000 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[16]) < 1000f) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[16]) < 1000f))
					{
						VEHICLE::EXPLODE_VEHICLE(iLocal_1051[16], 1, 1);
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1051[16], 1), 1) < 10f)
						{
							CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1051[16], 1), 1) >= 10f)
						{
							CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.25f);
						}
					}
				}
				if (SYSTEM::TIMERA() > 18000)
				{
					if (!func_644(19))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[19]))
						{
							func_418(&(iLocal_1051[19]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_560)), -1, 1097859072);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[19], 1);
							AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[19], 1);
							func_400(9);
							func_400(10);
							PED::SET_PED_ACCURACY(iLocal_666[9], 5);
							PED::SET_PED_ACCURACY(iLocal_666[10], 5);
							PED::SET_PED_INTO_VEHICLE(iLocal_666[9], iLocal_1051[19], -1);
							PED::SET_PED_INTO_VEHICLE(iLocal_666[10], iLocal_1051[19], 0);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[19], 32, sLocal_560, 1);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[19], 0);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[10], iLocal_1228, -1, 1, 1);
						}
						iVar0 = 0;
						while (iVar0 < iLocal_666)
						{
							if (!PED::IS_PED_INJURED(iLocal_666[iVar0]))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_666[iVar0], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[iVar0], 51, 1);
								PED::SET_PED_COMBAT_MOVEMENT(iLocal_666[iVar0], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[iVar0], 50, 1);
							}
							iVar0++;
						}
						func_643(19, 1);
					}
				}
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SIREN_DISTANT", 0))
				{
					if (SYSTEM::TIMERA() > 23000)
					{
						if (!func_644(35))
						{
							iLocal_1243 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1243, "Cops_Arrive_2", 3532.4f, -4676.85f, 113.2428f, "Prologue_Sounds", 0, 0, 0);
							func_643(35, 1);
						}
					}
				}
				if ((SYSTEM::TIMERA() > 33000 && !GlobalFunc_111()) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_657, 3550.011f, -4691.855f, 114.7595f, 2.5f, 3f, 2f, 0, 1, 0))
				{
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						func_420(PLAYER::PLAYER_ID(), 0, 0);
						func_419(&iLocal_1098);
						func_6();
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
						{
							AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
						}
						func_693(32);
						MISC::SET_FAKE_WANTED_LEVEL(0);
						iLocal_88 = 0;
						func_418(&(iLocal_1051[0]), joaat("policeold1"), 3493.12f, -4681.604f, 113.4866f, 260.0987f, -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[0], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[0], 1);
						func_418(&(iLocal_1051[1]), joaat("policeold2"), 3492.824f, -4678.94f, 113.5952f, 260.1201f, -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[1], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[1], 1);
						func_418(&(iLocal_1051[2]), joaat("policeold2"), 3491.934f, -4676.019f, 113.8171f, 260.2887f, -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[2], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[2], 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1051[0], "1st_car", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1051[1], "2nd_car", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1051[2], "3rd_car", 1, 0, 0);
						iLocal_1163[1] = GlobalFunc_6830(iLocal_654, iLocal_1227, 1, 0, 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[1], "Trevors_weapon", 0, 0, 0);
						GlobalFunc_8316(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(0);
						func_387(0, 0);
						if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
						{
							CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
						}
						GlobalFunc_2240(&iLocal_656);
						GlobalFunc_2244(&iLocal_1050);
						iVar0 = 0;
						while (iVar0 < iLocal_666)
						{
							GlobalFunc_2240(&(iLocal_666[iVar0]));
							iVar0++;
						}
						GlobalFunc_2244(&(iLocal_1051[19]));
						iVar0 = 0;
						while (iVar0 < iLocal_1079)
						{
							GlobalFunc_2244(&(iLocal_1079[iVar0]));
							iVar0++;
						}
						GlobalFunc_2241(&(iLocal_1163[0]));
						GlobalFunc_2241(&(iLocal_1163[2]));
						GlobalFunc_2241(&(iLocal_1185[3]));
						INTERIOR::UNPIN_INTERIOR(iLocal_1162);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_snowcop_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_heist_bag_02"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_ld_heist_bag_s_1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_csh_strap_01_s"));
						VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(6, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(8, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(9, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(26, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(27, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(28, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(29, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(32, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(33, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(34, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(35, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(700, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(701, sLocal_560);
						VEHICLE::REMOVE_VEHICLE_RECORDING(702, sLocal_560);
						STREAMING::REMOVE_ANIM_DICT(sLocal_562);
						STREAMING::REMOVE_ANIM_DICT(sLocal_561);
						STREAMING::REMOVE_ANIM_DICT(sLocal_584);
						func_383(&Local_713);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::_0x1CBA05AE7BD7EE05(0f);
						}
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("prologue_ending_fog", 4f);
						RECORDING::_0x48621C9FCA3EBD28(3);
						iLocal_58 = 0;
						func_406();
					}
				}
				break;
			
			case 3:
				if (!iLocal_1973)
				{
					uLocal_1972 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
					iLocal_1973 = 1;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1972))
				{
					switch (iLocal_58)
					{
						case 0:
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((59.25f * 1000f)))
							{
								func_382("presents", 0.5f, 0.5f, 70f, 125f, "left");
								func_381("presents", "ROCKSTAR GAMES", "$font2", "HUD_COLOUR_WHITE", 1);
								func_381("presents", "presents", "$font5", "HUD_COLOUR_FREEMODE", 1);
								func_380("presents", 0.166f);
								iLocal_58++;
							}
							break;
						
						case 1:
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((62.5f * 1000f)))
							{
								func_379("presents", 0.166f);
								iLocal_58++;
							}
							break;
						
						case 2:
							GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((70f * 1000f)))
							{
								func_382("production", 0.5f, 0.5f, 0f, 190f, "right");
								func_381("production", "a", "$font5", "HUD_COLOUR_MICHAEL", 1);
								func_381("production", "ROCKSTAR NORTH", "$font2", "HUD_COLOUR_WHITE", 1);
								func_381("production", "production", "$font5", "HUD_COLOUR_MICHAEL", 1);
								func_380("production", 0.166f);
								iLocal_58++;
							}
							break;
						
						case 3:
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((73.56667f * 1000f)))
							{
								func_379("production", 0.166f);
								iLocal_58++;
							}
							break;
					}
					if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_IN())
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
					}
					HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					HUD::SET_WIDESCREEN_FORMAT(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_1972, 255, 255, 255, 255, 0);
					iLocal_1974 = 1;
				}
				if (!func_644(298))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5f * 1000f)))
					{
						GlobalFunc_2244(&(iLocal_1051[16]));
						GlobalFunc_2244(&(iLocal_1051[17]));
						GlobalFunc_2244(&(iLocal_1051[18]));
						GlobalFunc_2240(&iLocal_658);
						GlobalFunc_2241(&(iLocal_1185[4]));
						GlobalFunc_2241(&(iLocal_1185[0]));
						func_643(298, 1);
					}
				}
				if (!func_644(280))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((9.6f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						STREAMING::REMOVE_IPL("prologue01z");
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("BLIZZARD");
						func_643(280, 1);
					}
				}
				if (!func_644(277))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((23.6f * 1000f)))
					{
						func_693(31);
						func_643(277, 1);
					}
				}
				if (!func_644(278))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((38.053f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						func_643(278, 1);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::_0x1CBA05AE7BD7EE05(0f);
						}
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("NEUTRAL");
						MISC::LOAD_CLOUD_HAT("RAIN", 0);
						iVar0 = 0;
						while (iVar0 < iLocal_1051)
						{
							GlobalFunc_2244(&(iLocal_1051[iVar0]));
							iVar0++;
						}
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((38.053f * 1000f)))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 3254.4f, -4574.3f, 116.3f, 2f, 2f, 2f, 0, 1, 0))
					{
						GlobalFunc_2510(iLocal_654, 3254.4f, -4574.3f, 116.3f, 0f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_654, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (iLocal_1973)
					{
						func_378();
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1972);
						iLocal_1973 = 0;
						iLocal_1974 = 0;
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
					{
						GRAPHICS::_0x1CBA05AE7BD7EE05(0f);
					}
					GlobalFunc_8316(1, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_654, 0);
					GlobalFunc_2241(&(iLocal_1163[1]));
					GlobalFunc_2240(&iLocal_658);
					GlobalFunc_2240(&(uLocal_1670[0]));
					iVar0 = 0;
					while (iVar0 < iLocal_1051)
					{
						GlobalFunc_2244(&(iLocal_1051[iVar0]));
						iVar0++;
					}
					GlobalFunc_8316(0, 1, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					func_377();
				}
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[16]))
		{
			if (!func_644(21))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[16]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[16]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[16]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[16], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[0]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[0], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[0], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[0], 3, 1);
						func_643(21, 1);
					}
				}
			}
			if (!func_644(22))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[16]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[16]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[16]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[16], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[1]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[1], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[1], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[1], 3, 1);
						func_643(22, 1);
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[17]))
		{
			if (!func_644(23))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[17]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[17]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[17]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[17], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[2]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[2], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[2], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[2], 3, 1);
						func_643(23, 1);
					}
				}
			}
			if (!func_644(24))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[17]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[17]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[17]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[17], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[3]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[3], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[3], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[3], 3, 1);
						func_643(24, 1);
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[18]))
		{
			if (!func_644(25))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[18]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[18]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[18]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[18], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[4]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[4], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[4], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[4], 3, 1);
						func_643(25, 1);
					}
				}
			}
			if (!func_644(26))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[18]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[18]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[18]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[18], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[5]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[5], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[5], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[5], 3, 1);
						func_643(26, 1);
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[19]))
		{
			if (!func_644(27))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[19]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[19]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(32, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[19]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[19], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[9]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[9], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[9], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[9], 3, 1);
						func_643(27, 1);
					}
				}
			}
			if (!func_644(28))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[19]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[19]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(32, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[19]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[19], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[10]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[10], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[10], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[10], 3, 1);
						func_643(28, 1);
					}
				}
			}
		}
		if (iLocal_28 > 1 && iLocal_28 < 3)
		{
			if (iLocal_37 < 7)
			{
				iLocal_37++;
			}
			else
			{
				iLocal_37 = 0;
			}
			iVar0 = iLocal_37;
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar0]) && PED::IS_PED_INJURED(iLocal_666[iVar0])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar0]))
			{
				if (iLocal_48[iVar0] == 0)
				{
					iLocal_48[iVar0] = MISC::GET_GAME_TIMER() + 2000;
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_666[iVar0]));
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_48[iVar0])
				{
					func_400(iVar0);
					if (iVar0 == 0)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3504.755f, -4676.247f, 113.1829f, 271.0395f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3532.4f, -4676.85f, 113.2428f, 10f, 0, 0);
					}
					else if (iVar0 == 1)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3481.395f, -4661.158f, 115.0043f, 253.3929f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3533.646f, -4674.185f, 113.2056f, 10f, 0, 0);
					}
					else if (iVar0 == 2)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3500.8f, -4651.9f, 115.4f, 229.4754f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3530.362f, -4667.201f, 113.208f, 10f, 0, 0);
					}
					else if (iVar0 == 3)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3547.185f, -4643.1f, 113.0261f, 172.3108f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3544.086f, -4660.044f, 113.3841f, 10f, 0, 0);
					}
					else if (iVar0 == 4)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3548.808f, -4634.831f, 113.621f, 180.2456f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3546.593f, -4660.562f, 113.1514f, 10f, 0, 0);
					}
					else if (iVar0 == 5)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3512.29f, -4674.848f, 113.1897f, 251.4869f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3536.688f, -4683.657f, 113.4076f, 2f, 0, 0);
					}
					else if (iVar0 == 6)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3507.311f, -4670.993f, 113.203f, 250.4445f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3537.141f, -4688.093f, 113.5309f, 2f, 0, 0);
					}
					else if (iVar0 == 7)
					{
						GlobalFunc_2510(iLocal_666[iVar0], 3559.79f, -4634.553f, 113.5299f, 168.8337f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0], 3551.67f, -4660.004f, 113.1956f, 10f, 0, 0);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[iVar0], 37, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[iVar0], 500f, 0);
					if (iVar0 == 0 || iVar0 == 3)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0], iLocal_1226, -1, 1, 1);
					}
					if (iVar0 == 1)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0], iLocal_1228, -1, 1, 1);
					}
					PED::SET_PED_ACCURACY(iLocal_666[iVar0], GlobalFunc_254((1 + iLocal_76), 0, 100));
					iLocal_76++;
					iLocal_48[iVar0] = 0;
				}
			}
		}
		if ((((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111()) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && iLocal_28 < 3)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_36)
			{
				if (!func_644(118))
				{
					func_374(118, "PRO_COPFARM", 7500, 1);
					func_362(198, "PRO_Rage", "PRO_Rage_1", 7, 1, 1, 0);
				}
				else if (!func_644(199))
				{
					func_362(199, "PRO_Rage", "PRO_Rage_2", 7, 1, 0, 0);
				}
				else if (!func_644(200))
				{
					func_362(200, "PRO_Rage", "PRO_Rage_3", 7, 1, 0, 0);
				}
				else if (!func_644(201))
				{
					func_362(201, "PRO_Rage", "PRO_Rage_4", 7, 1, 0, 0);
				}
				else if (!func_644(202))
				{
					func_362(202, "PRO_Rage", "PRO_Rage_5", 7, 1, 0, 0);
				}
				else if (!func_644(203))
				{
					func_362(203, "PRO_Rage", "PRO_Rage_6", 7, 1, 0, 0);
				}
				else if (!func_644(204))
				{
					func_362(204, "PRO_Rage", "PRO_Rage_7", 7, 1, 0, 0);
				}
				else if (!func_644(205))
				{
					func_362(205, "PRO_Rage", "PRO_Rage_8", 7, 1, 0, 0);
				}
				iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000));
			}
		}
		PED::SET_PED_RESET_FLAG(iLocal_654, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (func_361())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
		}
		RECORDING::_0x81CBAE94390F9F89();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_387(0, 0);
		}
		if (iLocal_1973)
		{
			func_378();
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1972);
			iLocal_1973 = 0;
			iLocal_1974 = 0;
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::_0x1CBA05AE7BD7EE05(0f);
		}
		iVar1 = 0;
		while (iVar1 < iLocal_1163)
		{
			GlobalFunc_2241(&(iLocal_1163[iVar1]));
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < iLocal_1207)
		{
			TASK::REMOVE_COVER_POINT(iLocal_1207[iVar1]);
			iVar1++;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_654, 0);
		if (Global_SAVE_DATA.isGameflowActive || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_654, 1);
		}
		iLocal_1252++;
	}
}

int func_361()//Position - 0x54301
{
	int iVar0;
	
	if (iLocal_87 == 1)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_86 = 0;
		iLocal_87 = 0;
		iLocal_28 = 0;
		iLocal_29 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_30)
		{
			iLocal_30[iVar0] = -1;
			iVar0++;
		}
		iLocal_36 = 0;
		return 1;
	}
	return 0;
}

void func_362(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x54345
{
	if (!func_644(iParam0))
	{
		while (!GlobalFunc_10630(&uLocal_1748, cLocal_1256, sParam1, sParam2, iParam3, iParam5, iParam6))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			func_387(0, 0);
		}
		func_643(iParam0, iParam4);
	}
}












void func_374(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x54A13
{
	if (!func_644(iParam0))
	{
		GlobalFunc_2883(sParam1, iParam2, 1);
		func_643(iParam0, iParam3);
	}
}



void func_377()//Position - 0x54A74
{
	iLocal_87 = 1;
}

void func_378()//Position - 0x54A7F
{
	if (iLocal_1974)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1972, "REMOVE_ALL");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_379(char* sParam0, float fParam1)//Position - 0x54A9E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1972, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_380(char* sParam0, float fParam1)//Position - 0x54AD0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1972, "SHOW_SINGLE_LINE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_381(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x54B02
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1972, "ADD_TEXT_TO_SINGLE_LINE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_382(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, char* sParam5)//Position - 0x54B6D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1972, "SETUP_SINGLE_LINE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_383(var uParam0)//Position - 0x54BC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		GlobalFunc_589(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}




void func_387(int iParam0, bool bParam1)//Position - 0x54C88
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		if (iLocal_1252 == 4)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 32, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 34, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 35, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 33, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		}
		if (bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		}
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		if ((iLocal_1252 >= 6 && iLocal_1252 <= 10) && iLocal_1975 > 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1162))
			{
				if (!(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("pro_mcs_7_concat") && CUTSCENE::IS_CUTSCENE_PLAYING()))
				{
					func_604();
				}
			}
		}
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (iLocal_1252 <= 11)
		{
			if (!func_644(117))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			}
		}
		RECORDING::_0x208784099002BC30("M_Prologue", 0);
		func_646();
	}
}











void func_398(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x55127
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && MISC::GET_GAME_TIMER() > iLocal_40))
	{
		if (!func_644(iParam0))
		{
			func_399(sParam1, iParam3);
			func_643(iParam0, iParam2);
			iLocal_40 = (MISC::GET_GAME_TIMER() + iParam4);
		}
	}
}

void func_399(var uParam0, int iParam1)//Position - 0x55170
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, uParam1);
}

void func_400(int iParam0)//Position - 0x55187
{
	int iVar0;
	
	if (!GlobalFunc_100(Local_131[iParam0 /*3*/], Local_98))
	{
		iVar0 = joaat("s_m_m_snowcop_01");
		func_403(&(iLocal_666[iParam0]), iVar0, Local_131[iParam0 /*3*/], fLocal_258[iParam0], 1);
		func_402(&(iLocal_666[iParam0]));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[iParam0], 1);
		GlobalFunc_593(iLocal_666[iParam0], 0);
	}
}


void func_402(var uParam0)//Position - 0x55285
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_1231);
		PED::SET_PED_AS_ENEMY(*uParam0, 1);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 200);
		PED::SET_PED_MAX_HEALTH(*uParam0, 200);
		PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
		PED::SET_PED_ACCURACY(*uParam0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iLocal_1225, -1, 1, 1);
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 6, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 188, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 249, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 272, 1);
	}
}

void func_403(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x55323
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
	}
}



void func_406()//Position - 0x55393
{
	SYSTEM::SETTIMERA(0);
	iLocal_28++;
}

void func_407(int iParam0)//Position - 0x553A6
{
	iLocal_1254 = iParam0;
	func_615();
}










int func_417()//Position - 0x55758
{
	if (iLocal_89 == 1)
	{
		iLocal_89 = 0;
		return 1;
	}
	return 0;
}

void func_418(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7)//Position - 0x55771
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
		if (iParam6 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam6);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, iParam7);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
	}
}

void func_419(int iParam0)//Position - 0x557B7
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_420(int iParam0, int iParam1, int iParam2)//Position - 0x557CF
{
	PLAYER::SET_PLAYER_CONTROL(iParam0, iParam1, iParam2);
	bLocal_1938 = iParam1;
}

void func_421(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x557E6
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
		if (iParam0 != Global_Current_Checkpoint)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_Current_Checkpoint)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_Current_Checkpoint)
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7706(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		func_422(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_422(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5595F
{
	func_423(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_423(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5597B
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
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
	uParam3 = uParam3;
	uParam2 = uParam2;
}












































int func_467()//Position - 0x5AC8F
{
	if (iLocal_86 == 0)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_86 = 1;
		return 1;
	}
	return 0;
}

void func_468()//Position - 0x5ACAD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_467())
	{
		func_421(5, "stageFinale", 0, 0, 0, 1);
		GlobalFunc_571(0, 456);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_657, 1);
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(3550.88f, -4691.863f, 113.4f))
		{
			iLocal_1207[0] = TASK::ADD_COVER_POINT(3550.82f, -4691.85f, 113.4f, 0f, 1, 0, 0, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 0, 0, 0);
		CUTSCENE::REQUEST_CUTSCENE("PRO_MCS_6", 4);
		if (func_417())
		{
			if (!PED::IS_PED_INJURED(iLocal_659))
			{
				GlobalFunc_2510(iLocal_659, Local_110, 0f, 0);
				PED::EXPLODE_PED_HEAD(iLocal_659, joaat("weapon_sniperrifle"));
			}
			GlobalFunc_200(&uLocal_1748, 5);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_656, iLocal_1050, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_656, iLocal_1050, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_657, iLocal_1050, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_657, iLocal_1050, 1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_658, iLocal_1050, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_658, iLocal_1050, 2);
			}
			GlobalFunc_2510(iLocal_654, 3539.724f, -4718.397f, 111.8996f, 346.1237f, 1);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 0);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_658, 0);
		}
		if (MISC::GET_GAME_TIMER() > iLocal_64)
		{
			if (iLocal_1245 != -1)
			{
				AUDIO::STOP_SOUND(iLocal_1245);
				AUDIO::RELEASE_SOUND_ID(iLocal_1245);
				iLocal_1245 = -1;
			}
		}
		if (!func_644(262))
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((3.5f * 1000f)))
			{
				func_693(26);
				func_407(27);
				func_643(262, 1);
			}
		}
		if (!func_644(256))
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((26.2f * 1000f)))
			{
				func_693(27);
				func_643(256, 1);
			}
		}
		WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 2, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sniperrifle"), 31, 0);
		switch (iLocal_28)
		{
			case 0:
				if (GlobalFunc_Has_Cutscene_Loaded() && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_sniperrifle")))
				{
					if (GlobalFunc_8315() != 2)
					{
						GlobalFunc_9134(&uLocal_1670, 2);
						func_13(&uLocal_1670, 1, 1, 1);
						func_696();
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_1670[0]);
					}
					GlobalFunc_173(&uLocal_1748, 1, iLocal_656, "MICHAEL", 0, 1);
					GlobalFunc_173(&uLocal_1748, 2, iLocal_657, "TREVOR", 0, 1);
					func_6();
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1050, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1050, 1000f);
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1670[0], "Michael", 0, GlobalFunc_4917(0), 3);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_654, "Michael", 0, GlobalFunc_4917(0), 3);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1670[2], "Trevor", 0, GlobalFunc_4917(2), 3);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_654, "Trevor", 0, GlobalFunc_4917(0), 3);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_658, "Brad", 0, joaat("ig_brad"), 3);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1050, "getaway_car", 0, 0, 0);
					iLocal_1163[0] = GlobalFunc_6830(iLocal_656, iLocal_1227, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[0], "Michaels_weapon", 0, 0, 0);
					iLocal_1163[1] = GlobalFunc_6830(iLocal_657, iLocal_1227, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[1], "Trevors_weapon", 0, 0, 0);
					iLocal_1163[2] = GlobalFunc_6830(iLocal_658, iLocal_1228, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[2], "Brads_Shotgun", 0, 0, 0);
					iLocal_1163[3] = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_sniperrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_654, 1) - Vector(10f, 0f, 0f), 1, 1065353216, 0);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_1163[3], joaat("component_sniperrifle_clip_01"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_1163[3], joaat("component_at_scope_large"));
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[3], "Daves_Rifle", 0, 0, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[5]))
					{
						iLocal_1185[5] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 3547.381f, -4695.846f, 112.9602f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(iLocal_1185[5], 3547.381f, -4695.846f, 112.9602f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1185[5], 0f, 0f, -57.96f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[5], 1);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1185[5], "Trevors_Heist_Bag", 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_1050, 2, 0, 0f);
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					func_387(0, 0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
					}
					iLocal_88 = 0;
					MISC::CLEAR_AREA(3549.75f, -4660.526f, 113.5495f, 1000f, 1, 0, 0, 0);
					STREAMING::REMOVE_IPL("DES_ProTree_start_lod");
					CUTSCENE::_0xC61B86C9F61EB404(1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					func_406();
				}
				break;
			
			case 1:
				if (!func_644(271))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2.70242f * 1000f)))
					{
						PAD::SET_PAD_SHAKE(0, 300, 256);
						func_643(271, 1);
					}
				}
				if (!func_644(272))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((3.946786f * 1000f)))
					{
						PAD::SET_PAD_SHAKE(0, 300, 256);
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_656, 1, 0.383f, 0.5f, 320.966f, 1f, 1, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_656, 1, 0.401f, 0.461f, 322.404f, 1f, 3, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_656, 1, 0.455f, 0.772f, 305.206f, 1f, 3, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_656, 1, 0.515f, 0.467f, 316.088f, 1f, 4, 0f, "BulletSmall");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_657, 1, 0.533f, 0.629f, 306.584f, 1f, 3, 0f, "ShotgunSmall");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_657, 1, 0.479f, 0.467f, 318.127f, 1f, 6, 0f, "ShotgunSmall");
						func_643(272, 1);
					}
				}
				if (!func_644(273))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5.333333f * 1000f)))
					{
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1203))
							{
								uLocal_1203 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_pro_car_steam", 3530.8f, -4717.9f, 113.1f, -3.3f, 0f, -54.3f, 1065353216, 0, 0, 0, 0);
								func_643(273, 1);
							}
						}
					}
				}
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("cs_brad"));
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() < 45701)
					{
						PED::SET_ENABLE_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1);
						PED::SET_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0.6f);
					}
					else
					{
						PED::SET_ENABLE_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1);
						PED::SET_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0.8f);
						PED::_0x110F526AB784111F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0.15f);
					}
				}
				if (!func_644(6))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((16.13334f * 1000f)))
					{
						iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("cs_brad"));
						if (!ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.479f, 0.467f, 318.127f, 1f, 5, 0f, "BulletSmall");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.521f, 0.467f, 315.71f, 1f, 6, 0f, "ShotgunSmall");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.575f, 0.617f, 304.56f, 1f, 4, 0f, "ShotgunLarge");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.305f, 0.76f, 312.434f, 0f, 1, 0f, "ShotgunSmallMonolithic");
							func_643(6, 1);
						}
					}
				}
				if (!func_644(8))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((35.86667f * 1000f)))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("cs_brad"));
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 0, 0.898f, 0.739f, 277.828f, 1f, 1, 0f, "BulletLarge");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 0, 0.369f, 0.756f, 309.838f, 1f, 4, 0f, "BulletSmall");
							func_643(8, 1);
						}
					}
				}
				if (!func_644(254))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((6.567667f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						STREAMING::REMOVE_IPL("prologue04_cover");
						func_643(254, 1);
					}
				}
				if (!func_644(275))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((35.86667f * 1000f)))
					{
						iLocal_1975 = (iLocal_1975 - 84000);
						Global_Mission_Fail_State.f_12[0] = iLocal_1975;
						func_643(275, 1);
					}
				}
				if (!func_644(61))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((45.16667f * 1000f)))
					{
						iLocal_1975 = 0;
						Global_Mission_Fail_State.f_12[0] = iLocal_1975;
						func_643(61, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Brad", 0))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_658, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_658, sLocal_584, "lying_dead_brad", 3550.345f, -4691.505f, 114.368f, Local_98, 1000f, -1000f, -1, 792585, 0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[4]))
					{
						iLocal_1185[4] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3545.981f, -4692.626f, 112.8602f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(iLocal_1185[4], 3545.981f, -4692.626f, 112.8602f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1185[4], -103.32f, 0f, -115.2f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[4], 1);
					}
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_658, 1);
					AUDIO::STOP_PED_SPEAKING(iLocal_658, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (!func_644(62))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_656, sLocal_584, "lying_dead_player0", 3))
						{
							uLocal_652 = PED::CREATE_SYNCHRONIZED_SCENE(3550.345f, -4691.505f, 114.368f, Local_98, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_656, uLocal_652, sLocal_584, "lying_dead_player0", 1000f, -1000f, 4, 8191, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_652, 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_656, 0, 0);
							func_643(62, 1);
						}
					}
					AUDIO::STOP_PED_SPEAKING(iLocal_656, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[3]))
					{
						iLocal_1185[3] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3547.381f, -4695.846f, 112.9602f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(iLocal_1185[3], 3547.381f, -4695.846f, 112.9602f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1185[3], 0f, 0f, -57.96f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[3], 1);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_656, iLocal_1227, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_656, iLocal_1227, 500, 1, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_656, iLocal_1227, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					GlobalFunc_2510(iLocal_657, 3550.82f, -4691.85f, 113.4f, 90f, 0);
					PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_657, 3550.82f, -4691.85f, 113.4f, -1, 0, 0f, 1, 1, iLocal_1207[0], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_657, 0, 0);
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_657, iLocal_1227, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, iLocal_1227, 500, 1, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_657, iLocal_1227, 1);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(-37.5f);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(-5f);
						func_643(309, 1);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((29.6f - ENTITY::GET_ENTITY_HEADING(iLocal_657)));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
					}
				}
				if (func_644(309))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-37.5f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1065353216);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_Heist_Bag", 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[5], 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1163[0], 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[1], iLocal_657);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Brads_Shotgun", 0))
				{
					ENTITY::SET_ENTITY_ROTATION(iLocal_1163[2], 90f, 0f, 0f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1163[2], 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Daves_Rifle", 0))
				{
					GlobalFunc_2241(&(iLocal_1163[3]));
				}
				if (!func_644(20))
				{
					if (func_638(14, joaat("policeold2")))
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((55.76667f * 1000f)))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[16]))
								{
									func_418(&(iLocal_1051[16]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_560)), -1, 1097859072);
									VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[16], 1);
									AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[16], 1);
									func_400(0);
									func_400(1);
									PED::SET_PED_INTO_VEHICLE(iLocal_666[0], iLocal_1051[16], -1);
									PED::SET_PED_INTO_VEHICLE(iLocal_666[1], iLocal_1051[16], 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[16], 27, sLocal_560, 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[16], 500f);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[17]))
								{
									func_418(&(iLocal_1051[17]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_560)), -1, 1097859072);
									VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[17], 1);
									AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[17], 1);
									func_400(2);
									func_400(3);
									PED::SET_PED_INTO_VEHICLE(iLocal_666[2], iLocal_1051[17], -1);
									PED::SET_PED_INTO_VEHICLE(iLocal_666[3], iLocal_1051[17], 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[17], 28, sLocal_560, 1);
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_1051[17], 0.75f);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[18]))
								{
									func_418(&(iLocal_1051[18]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_560)), -1, 1097859072);
									VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[18], 1);
									AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[18], 1);
									func_400(4);
									func_400(5);
									PED::SET_PED_INTO_VEHICLE(iLocal_666[4], iLocal_1051[18], -1);
									PED::SET_PED_INTO_VEHICLE(iLocal_666[5], iLocal_1051[18], 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[18], 29, sLocal_560, 1);
								}
								MISC::SET_FAKE_WANTED_LEVEL(5);
								func_643(20, 1);
							}
						}
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_91 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_91)
					{
						while (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle")))
						{
							func_387(0, 0);
						}
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_91 = 0;
					GlobalFunc_8316(0, 1, 1, 0);
					func_377();
				}
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				break;
			}
	}
	if (func_361())
	{
		CUTSCENE::_0xC61B86C9F61EB404(0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_387(0, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1203))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1203, 0);
		}
		if (iLocal_1244 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1244);
			AUDIO::RELEASE_SOUND_ID(iLocal_1244);
			iLocal_1244 = -1;
		}
		if (iLocal_1245 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1245);
			AUDIO::RELEASE_SOUND_ID(iLocal_1245);
			iLocal_1245 = -1;
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
		GlobalFunc_2241(&(iLocal_1163[3]));
		GlobalFunc_2241(&(iLocal_1163[1]));
		func_419(&iLocal_1092);
		func_419(&iLocal_1094);
		func_419(&iLocal_1096);
		iLocal_1252++;
	}
}


void func_470()//Position - 0x5BD1D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (func_467())
	{
		func_421(4, "stageGetAway", 0, 0, 0, 1);
		GlobalFunc_574(456, 0);
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		if (GlobalFunc_8315() != 0)
		{
			GlobalFunc_9134(&uLocal_1670, 0);
			func_13(&uLocal_1670, 1, 0, 0);
			func_696();
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[2], iLocal_1230);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_657, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 0, 0, 0);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_656, "mood_angry_1", 0);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_658, "Mood_Angry_1", 0);
		GlobalFunc_173(&uLocal_1748, 1, iLocal_654, "MICHAEL", 0, 1);
		GlobalFunc_173(&uLocal_1748, 2, uLocal_1670[2], "TREVOR", 0, 1);
		iLocal_88 = 1;
		MISC::SET_FAKE_WANTED_LEVEL(0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_1050, 0);
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
		func_418(&(iLocal_1051[11]), joaat("policeold2"), 3497.637f, -4871.341f, 110.6404f, 262.8277f, -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[12]), joaat("policeold2"), 3497.436f, -4864.668f, 110.7156f, 226.5504f, -1, 1097859072);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold1"));
		iVar0 = 0;
		while (iVar0 < iLocal_1051)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[iVar0]))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1051[iVar0], 0, 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1051[iVar0], 1, 0, 0);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[iVar0], 1);
				AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[iVar0], 1);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_1051[iVar0], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[iVar0], 0);
			}
			iVar0++;
		}
		func_387(0, 0);
		iLocal_1179[0] = OBJECT::CREATE_OBJECT(iLocal_1251, 3498.559f, -4874.11f, 110.9715f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1179[0], 0f, -14f, -95.18999f, 2, 1);
		func_387(0, 0);
		iLocal_1179[1] = OBJECT::CREATE_OBJECT(iLocal_1251, 3498.9f, -4861.6f, 110.9f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1179[1], 0f, -13f, 69.42f, 2, 1);
		func_387(0, 0);
		iLocal_1179[2] = OBJECT::CREATE_OBJECT(iLocal_1251, 3500.001f, -4869.24f, 110.7706f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1179[2], 0f, 0f, 68.18196f, 2, 1);
		func_387(0, 0);
		iLocal_1179[3] = OBJECT::CREATE_OBJECT(iLocal_1251, 3500.223f, -4866.932f, 110.7708f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1179[3], 0f, 0f, 100.2676f, 2, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1251);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_400(iVar0 + 18);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[iVar0 + 18], Local_131[iVar0 + 18 /*3*/], 10f, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[iVar0 + 18], 5000f, 0);
			if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 4)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0 + 18], iLocal_1226, -1, 1, 1);
			}
			if (iVar0 == 2 || iVar0 == 5)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0 + 18], iLocal_1228, -1, 1, 1);
			}
			func_387(0, 0);
			iVar0++;
		}
		func_6();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
		func_693(23);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_657, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_654, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_655, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 81, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 81, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_656, 29, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_657, 29, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 29, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(3477.82f, -4862.903f, 109.7886f, 3504.164f, -4869.103f, 120.7706f, 16f, 0, 0, 1);
		iLocal_41[0] = 0;
		iLocal_41[1] = 0;
		if (func_417())
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1050))
			{
				if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_1050) == VEHICLE::GET_VEHICLE_RECORDING_ID(26, sLocal_560))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1050);
				}
			}
			func_643(238, 1);
			TASK::CLEAR_PED_TASKS(iLocal_656);
			TASK::CLEAR_PED_TASKS(iLocal_657);
			TASK::CLEAR_PED_TASKS(iLocal_658);
			func_497(iLocal_1050);
			PED::SET_PED_INTO_VEHICLE(iLocal_656, iLocal_1050, -1);
			PED::SET_PED_INTO_VEHICLE(iLocal_657, iLocal_1050, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_658, iLocal_1050, 2);
			GlobalFunc_2239(iLocal_1050, 4339.558f, -5080.953f, 110.0518f, 80.3059f);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 0);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_656, iLocal_1225, 350, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, iLocal_1225, 350, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, joaat("weapon_microsmg"), 350, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_658, iLocal_1225, -1, 0, 1);
			func_387(500, 0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1050, 1, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1050, 30f);
			CAM::STOP_CAM_SHAKING(uLocal_1157, 1);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(0, 1, 1, 0);
			CLOCK::SET_CLOCK_TIME(6, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((4400f - 2500f), (-5100f - 1500f), (4400f + 2500f), (-5100f + 1500f));
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if (!func_644(156))
			{
				func_495(156, "PRO_Where", 7, 1, 0, 0);
			}
			else
			{
				func_374(155, "PRO_GETAWAY", 3500, 1);
			}
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_658, 0);
		}
		if ((!GlobalFunc_663("PRO_GETAWAY", 0, 0) && func_644(156)) && !func_644(111))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[9]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1051[10])) || func_644(150)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_666[2]) && PED::IS_PED_INJURED(iLocal_666[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_666[4])) && PED::IS_PED_INJURED(iLocal_666[4])))
					{
						if (!func_644(136))
						{
							func_362(136, "PRO_Drive1", "PRO_Drive1_1", 7, 1, 0, 0);
						}
						else if (!func_644(137))
						{
							func_362(137, "PRO_Drive1", "PRO_Drive1_2", 7, 1, 0, 0);
						}
						else if (!func_644(138))
						{
							func_362(138, "PRO_Drive1", "PRO_Drive1_3", 7, 1, 0, 0);
						}
						else if (!func_644(139))
						{
							func_362(139, "PRO_Drive1", "PRO_Drive1_4", 7, 1, 0, 0);
						}
						else if (!func_644(140))
						{
							func_362(140, "PRO_Drive1", "PRO_Drive1_5", 7, 1, 0, 0);
						}
					}
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0) && !(PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_654) && PED::GET_VEHICLE_PED_IS_USING(iLocal_654) == iLocal_1050))
		{
			iLocal_29 = 2;
			if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_36)
				{
					if (iLocal_30[iLocal_29] == -1)
					{
						iLocal_30[iLocal_29] = 5;
					}
					else if (iLocal_30[iLocal_29] > 0)
					{
						if (iLocal_30[iLocal_29] >= 4)
						{
							if (!func_644(12))
							{
								func_374(12, "CMN_GENGETIN", 7500, 1);
							}
							else if (!func_644(11))
							{
								func_374(11, "CMN_GENGETBCK", 7500, 1);
							}
							func_495(194, "PRO_LeftCar", 7, 0, 1, 0);
						}
						else
						{
							func_495(194, "PRO_LeftCar", 7, 0, 0, 0);
						}
						iLocal_30[iLocal_29] = (iLocal_30[iLocal_29] - 1);
					}
					iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_57)
			{
				iLocal_1253 = 14;
				func_626();
			}
		}
		else
		{
			GlobalFunc_635("CMN_GENGETIN");
			GlobalFunc_635("CMN_GENGETBCK");
			iLocal_57 = MISC::GET_GAME_TIMER() + 10000;
		}
		if (iLocal_654 == iLocal_656 || ENTITY::DOES_ENTITY_EXIST(uLocal_1076[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
			{
				if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
					{
						if (!func_644(79))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
							func_398(79, "PROHLP_CAR2", 1, -1, 2000);
							SYSTEM::SETTIMERB(0);
						}
						else if (!func_644(81))
						{
							if (SYSTEM::TIMERB() > 10000 || (PAD::IS_CONTROL_PRESSED(0, 71) && SYSTEM::TIMERB() > 1000))
							{
								func_398(81, "PROHLP_CAR4", 1, -1, 2000);
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (!func_644(80))
						{
							if (SYSTEM::TIMERB() > 10000 || (PAD::IS_CONTROL_PRESSED(0, 59) && SYSTEM::TIMERB() > 1000))
							{
								func_398(80, "PROHLP_CAR3", 1, -1, 2000);
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (!func_644(86))
						{
							if (SYSTEM::TIMERB() > 10000 || (PAD::IS_CONTROL_PRESSED(0, 72) && SYSTEM::TIMERB() > 1000))
							{
								func_398(86, "PROHLP_DEST1", 1, -1, 2000);
								if (HUD::DOES_BLIP_EXIST(iLocal_1098))
								{
									func_492(iLocal_1098, 5000);
								}
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (!func_644(87))
						{
							if (SYSTEM::TIMERB() > 10000)
							{
								HUD::SET_GPS_FLASHES(1);
								func_398(87, "PROHLP_DEST2", 1, -1, 2000);
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (SYSTEM::TIMERB() > 10000)
						{
							HUD::SET_GPS_FLASHES(0);
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			else
			{
				GlobalFunc_2238(1);
			}
		}
		if (iLocal_654 == iLocal_657)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((4400f - 2500f), (-5100f - 1500f), (4400f + 2500f), (-5100f + 1500f)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_656, -1273030092) != 1)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656, 1);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_656, iLocal_1050, 3546.002f, -4670.458f, 113.2054f, 4, 40f, 786599, -1f, -1f, 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_656, -258271821) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656, 1);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_656, iLocal_1050, 15f, 786599);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 4092.947f, -5062.042f, 107.4313f, 300f, 300f, 20f, 0, 1, 0) && !ENTITY::DOES_ENTITY_EXIST(uLocal_1076[0]))
		{
			if (func_638(5, joaat("emperor3")) && func_638(1, joaat("a_m_m_hillbilly_01")))
			{
				if (PED::CAN_CREATE_RANDOM_DRIVER())
				{
					func_418(&(uLocal_1076[0]), joaat("emperor3"), 4092.947f, -5062.042f, 107.4313f, 265.1335f, -1, 1097859072);
					uLocal_709[0] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_1076[0], 1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_709[0], uLocal_1076[0], 15f, 786599);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_709[0], 17, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_709[0], 131072, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor3"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_01"));
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 3675.63f, -4915.411f, 110.7071f, 300f, 300f, 20f, 0, 1, 0) && !ENTITY::DOES_ENTITY_EXIST(uLocal_1076[1]))
		{
			if (func_638(26, joaat("tractor3")) && func_638(2, joaat("a_m_m_hillbilly_02")))
			{
				if (PED::CAN_CREATE_RANDOM_DRIVER())
				{
					func_418(&(uLocal_1076[1]), joaat("tractor3"), 3676.452f, -4928.23f, 110.6588f, 185.1477f, -1, 1097859072);
					uLocal_709[1] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_1076[1], 1);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_709[1], uLocal_1076[1], 5415.852f, -5128.423f, 77.163f, 8f, 0, joaat("tractor3"), 786599, 5f, 5f);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_709[1], 17, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_709[1], 131072, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tractor3"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_02"));
				}
			}
		}
		if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 3670.444f, -4940.194f, 110.6677f, 400f, 400f, 20f, 0, 1, 0) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1051[9])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1051[10]))
		{
			func_418(&(iLocal_1051[9]), joaat("policeold2"), 3670.444f, -4940.194f, 110.6677f, 243.7315f, -1, 1097859072);
			func_418(&(iLocal_1051[10]), joaat("policeold2"), 3773.04f, -4986.8f, 110.339f, 247.815f, -1, 1097859072);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[9], 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[10], 0);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[9], 1);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[9], 1);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[10], 1);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1051[10], 1);
			func_400(2);
			func_400(3);
			func_400(4);
			func_400(5);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[2], 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[2], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[3], 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[3], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[4], 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[4], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[5], 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[5], 1, 1);
			PED::SET_PED_ACCURACY(iLocal_666[2], 40);
			PED::SET_PED_ACCURACY(iLocal_666[3], 40);
			PED::SET_PED_ACCURACY(iLocal_666[4], 40);
			PED::SET_PED_ACCURACY(iLocal_666[5], 40);
			PED::SET_PED_INTO_VEHICLE(iLocal_666[2], iLocal_1051[9], -1);
			PED::SET_PED_INTO_VEHICLE(iLocal_666[3], iLocal_1051[9], 0);
			PED::SET_PED_INTO_VEHICLE(iLocal_666[4], iLocal_1051[10], -1);
			PED::SET_PED_INTO_VEHICLE(iLocal_666[5], iLocal_1051[10], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[2], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[3], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[4], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[5], 1);
			VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_1051[9], 1);
			VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_1051[10], 1);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_666[4], iLocal_1051[10], 5415.852f, -5128.423f, 77.163f, 14, 40f, 262275, 0.1f, 0.1f, 1);
			TASK::TASK_VEHICLE_ESCORT(iLocal_666[2], iLocal_1051[9], iLocal_1051[10], -1, 40f, 262275, -1082130432, 20, 1101004800);
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1051[10]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1051[10], 1), 1) < 150f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_495(135, "PRO_Drive", 7, 1, 0, 0);
					}
					func_643(149, 1);
					func_693(24);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[2]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 3501.78f, -4879.914f, 108.4469f, 3500.778f, -4848.769f, 117.2605f, 20f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_1670[2], 0);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_1670[2], 1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_658, 3501.78f, -4879.914f, 108.4469f, 3500.778f, -4848.769f, 117.2605f, 20f, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_658, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_658, 1);
		}
		if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_657, 3498.418f, -4868.59f, 109.7739f, 3471.526f, -4867.029f, 126.7113f, 20f, 0, 1, 0) && (!PED::IS_PED_INJURED(iLocal_666[18]) && PED::IS_PED_SHOOTING(iLocal_666[18]))) && (!PED::IS_PED_INJURED(iLocal_666[19]) && PED::IS_PED_SHOOTING(iLocal_666[19]))) && (!PED::IS_PED_INJURED(iLocal_666[20]) && PED::IS_PED_SHOOTING(iLocal_666[20]))) && (!PED::IS_PED_INJURED(iLocal_666[21]) && PED::IS_PED_SHOOTING(iLocal_666[21]))) && (!PED::IS_PED_INJURED(iLocal_666[22]) && PED::IS_PED_SHOOTING(iLocal_666[22])))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_657, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1051[9]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1051[10]))
		{
			if (func_644(149) && !GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1051[9]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1051[10]))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[2]) && !PED::IS_PED_INJURED(iLocal_666[4]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_666[2], -1273030092) == 1)
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
							{
								func_643(150, 1);
							}
						}
					}
				}
			}
			if (((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_1050, iLocal_1051[9]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_1050, iLocal_1051[10])) || (PED::IS_PED_SHOOTING(iLocal_654) && ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1051[9]) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1051[10])) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1051[9], 1), 20f, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1051[10], 1), 20f, 1))))) || ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1050, ENTITY::GET_ENTITY_COORDS(iLocal_1051[9], 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1051[9], 0f, 6f, 3f), 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1050, ENTITY::GET_ENTITY_COORDS(iLocal_1051[9], 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1051[9], 0f, 6f, 3f), 3f, 0, 1, 0)) && ENTITY::GET_ENTITY_SPEED(iLocal_1050) < 5f))
			{
				if (!PED::IS_PED_INJURED(iLocal_666[4]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_666[4], -1273030092) == 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_666[4]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[4], 0);
						TASK::TASK_COMBAT_PED(iLocal_666[4], iLocal_654, 0, 16);
						if (!PED::IS_PED_INJURED(iLocal_666[5]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_666[5]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[5], 0);
							TASK::TASK_COMBAT_PED(iLocal_666[5], iLocal_654, 0, 16);
						}
						if (!PED::IS_PED_INJURED(iLocal_666[2]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_666[2]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[2], 0);
							TASK::TASK_COMBAT_PED(iLocal_666[2], iLocal_654, 0, 16);
							if (!PED::IS_PED_INJURED(iLocal_666[3]))
							{
								TASK::CLEAR_PED_TASKS(iLocal_666[3]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[3], 0);
								TASK::TASK_COMBAT_PED(iLocal_666[3], iLocal_654, 0, 16);
							}
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_657, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 0);
						MISC::SET_FAKE_WANTED_LEVEL(5);
					}
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
		{
			if (!func_644(111))
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (func_644(140))
					{
						if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_1051[9]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1051[10])) || func_644(150)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_666[2]) && PED::IS_PED_INJURED(iLocal_666[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_666[4])) && PED::IS_PED_INJURED(iLocal_666[4])))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 3499.774f, -4868.123f, 110.7739f, 1) > 400f)
							{
								if (!func_644(141))
								{
									func_362(141, "PRO_Drive2", "PRO_Drive2_1", 7, 1, 0, 0);
								}
								else if (!func_644(142))
								{
									func_362(142, "PRO_Drive2", "PRO_Drive2_2", 7, 1, 0, 0);
								}
								else if (!func_644(143))
								{
									func_362(143, "PRO_Drive2", "PRO_Drive2_3", 7, 1, 0, 0);
								}
								else if (!func_644(144))
								{
									func_362(144, "PRO_Drive2", "PRO_Drive2_4", 7, 1, 0, 0);
								}
								else if (!func_644(145))
								{
									func_362(145, "PRO_Drive2", "PRO_Drive2_5", 7, 1, 0, 0);
								}
								else if (!func_644(146))
								{
									func_362(146, "PRO_Drive2", "PRO_Drive2_6", 7, 1, 0, 0);
								}
								else if (!func_644(147))
								{
									func_362(147, "PRO_Drive2", "PRO_Drive2_7", 7, 1, 0, 0);
								}
								else if (!func_644(148))
								{
									func_362(148, "PRO_Drive2", "PRO_Drive2_8", 7, 1, 0, 0);
								}
							}
						}
					}
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3474.52f, -4860.875f, 109.7891f, 3731.3f, -4966.4f, 139.6237f, 200f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_1050) > 15f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3474.52f, -4860.875f, 109.7891f, 3671.1f, -4937.4f, 139.6237f, 200f, 0, 1, 0)) && CAM::IS_SPHERE_VISIBLE(3498f, -4867.9f, 113f, 5f))
			{
				if (!func_644(242))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_657, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 0);
					func_407(26);
					func_693(25);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_ESCAPE"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_DRIVE_ESCAPE");
					}
					RECORDING::_0x293220DA1B46CEBC(2f, 5f, 3);
					func_643(242, 1);
				}
				if (!func_644(111))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_495(111, "PRO_Blockade", 7, 1, 0, 0);
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 3539.724f, -4718.397f, 111.8996f, 1) < (100f * 5f))
		{
			CUTSCENE::REQUEST_CUTSCENE("PRO_MCS_6", 8);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 3539.724f, -4718.397f, 111.8996f, 1) > ((100f * 4f) + 120f))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3417.755f, -4849.399f, 100.7075f, 3654.789f, -4920.36f, 120.7002f, 200f, 0, 1, 0))
		{
			if (!func_644(265))
			{
				func_643(265, 1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3522.664f, -4850.235f, 105.6712f, 3530.756f, -4748.139f, 121.4265f, 20f, 0, 1, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_5105();
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3501.274f, -4884.231f, 109.6696f, 3509.99f, -4840.174f, 116.0802f, 70f, 0, 1, 0))
		{
			MISC::SET_FAKE_WANTED_LEVEL(5);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 3501.274f, -4884.231f, 109.6696f, 3509.99f, -4840.174f, 116.0802f, 70f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_1050) > 10f)
		{
			if ((!func_489(&(iLocal_666[18])) && !PED::IS_PED_RAGDOLL(iLocal_666[18])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_666[18], 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > 15f)
			{
				iVar1 = iLocal_666[18];
			}
			else if ((!func_489(&(iLocal_666[19])) && !PED::IS_PED_RAGDOLL(iLocal_666[19])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_666[19], 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > 15f)
			{
				iVar1 = iLocal_666[19];
			}
			else if ((!func_489(&(iLocal_666[20])) && !PED::IS_PED_RAGDOLL(iLocal_666[20])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_666[20], 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > 15f)
			{
				iVar1 = iLocal_666[20];
			}
			else if ((!func_489(&(iLocal_666[21])) && !PED::IS_PED_RAGDOLL(iLocal_666[21])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_666[21], 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > 15f)
			{
				iVar1 = iLocal_666[21];
			}
			else if ((!func_489(&(iLocal_666[22])) && !PED::IS_PED_RAGDOLL(iLocal_666[22])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_666[22], 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > 15f)
			{
				iVar1 = iLocal_666[22];
			}
			if (((!PED::IS_PED_INJURED(iVar1) && !PED::IS_PED_RAGDOLL(iVar1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > 15f) && PED::IS_PED_SHOOTING(iVar1))
			{
				func_488(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1050, 0.5f, 0f, 0f), iVar1, &(iLocal_41[0]), 0f, 0.6f, 0f, 60);
				func_486(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1050, 0.5f, 0f, 0f), iVar1, &(iLocal_41[1]), 0f, 0.6f, 0f, 60, -1065772646, -1082130432, -1069966950, 1081711002);
				if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_1050, 2))
				{
					VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 2);
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
		{
			if (GlobalFunc_663("PRO_CAR2", 0, 0))
			{
				GlobalFunc_635("PRO_CAR2");
			}
			func_419(&iLocal_1096);
			if (PED::IS_PED_IN_VEHICLE(iLocal_657, iLocal_1050, 0) && PED::IS_PED_IN_VEHICLE(iLocal_658, iLocal_1050, 0))
			{
				func_419(&iLocal_1093);
				func_419(&iLocal_1094);
				if (!func_644(265))
				{
					func_484(&iLocal_1098, 3546.002f, -4670.458f, 113.2054f, 1);
				}
				else
				{
					func_484(&iLocal_1098, 3546.002f, -4670.458f, 113.2054f, 1);
				}
			}
			else
			{
				func_419(&iLocal_1098);
				if (!PED::IS_PED_IN_VEHICLE(iLocal_657, iLocal_1050, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_658, iLocal_1050, 0))
				{
					func_374(221, "PRO_TEAM", 7500, 1);
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_657, iLocal_1050, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_657))
				{
					if (!func_644(221))
					{
						func_374(107, "PRO_BUDDY", 7500, 1);
					}
					if (GlobalFunc_8315() != 2)
					{
						func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_657, -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_657, iLocal_1050, -1, 1, 2f, 1, 0);
					}
				}
				else
				{
					func_419(&iLocal_1093);
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_658, iLocal_1050, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_658))
				{
					if (!func_644(221))
					{
						func_374(107, "PRO_BUDDY", 7500, 1);
					}
					func_482(&iLocal_1094, &iLocal_658, 0);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_658, iLocal_1050, -1, 2, 2f, 1, 0);
					}
				}
				else
				{
					func_419(&iLocal_1094);
				}
			}
		}
		else
		{
			func_419(&iLocal_1098);
			func_478(&iLocal_1096, &iLocal_1050, 0);
			func_374(113, "PRO_CAR2", 7500, 1);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1050, 3629.041f, -4750.029f, 109.9653f, 3435.589f, -4728.467f, 130.4898f, 175f, 0, 1, 0))
		{
			if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_656, iLocal_1050) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_657, iLocal_1050)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_658, iLocal_1050))
			{
				if (GlobalFunc_8315() == 0)
				{
					if (func_474(0f, 0, 1, 0))
					{
						func_377();
					}
				}
				else
				{
					func_377();
				}
			}
		}
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < Local_434.x)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, Local_434[iVar2 /*3*/], Local_477[iVar2 /*3*/], fLocal_520[iVar2], 0, 1, 0))
			{
				iVar3 = 1;
			}
			iVar2++;
		}
		if (iVar3 == 0)
		{
			GlobalFunc_553(462);
			if (!GlobalFunc_5672("PRO_OffRoute"))
			{
				iLocal_29 = 0;
				if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_36)
					{
						if (iLocal_30[iLocal_29] == -1)
						{
							iLocal_30[iLocal_29] = 6;
						}
						else if (iLocal_30[iLocal_29] > 0)
						{
							func_495(196, "PRO_OffRoute", 7, 0, 0, 0);
							iLocal_30[iLocal_29] = (iLocal_30[iLocal_29] - 1);
						}
						iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
					}
				}
			}
		}
		Var4 = { Local_313[0 /*3*/] };
		iVar2 = 0;
		while (iVar2 < Local_313.x)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), Local_313[iVar2 /*3*/], 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), Var4, 1))
			{
				Var4 = { Local_313[iVar2 /*3*/] };
				if (iVar2 > 2)
				{
					Local_313[(iVar2 - 3) /*3*/] = { Local_98 };
				}
			}
			iVar2++;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), Var4, 1) > 30f && iVar3 == 0)
		{
			if (!GlobalFunc_5672("PRO_WrongWay"))
			{
				iLocal_29 = 1;
				if (PED::IS_PED_IN_VEHICLE(iLocal_654, iLocal_1050, 0))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_36)
					{
						if (iLocal_30[iLocal_29] == -1)
						{
							iLocal_30[iLocal_29] = 5;
						}
						else if (iLocal_30[iLocal_29] > 0)
						{
							func_495(226, "PRO_WrongWay", 7, 0, 0, 0);
							iLocal_30[iLocal_29] = (iLocal_30[iLocal_29] - 1);
						}
						iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
					}
				}
			}
		}
		iVar7 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(iLocal_1050);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_1050) < 3f)
		{
			if ((iVar7 == -1937569590 || iVar7 == 1619704960) || iVar7 == -878560889)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_74)
				{
					iLocal_1253 = 10;
					func_626();
				}
			}
		}
		else
		{
			iLocal_74 = MISC::GET_GAME_TIMER() + 10000;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), Var4, 1) > 60f)
		{
			iLocal_1253 = 9;
			func_626();
		}
		if (GlobalFunc_100(Local_65, Local_98))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1050, 3875.881f, -5020.976f, 113.5316f, 10f, 25f, 8f, 0, 1, 0))
			{
				iLocal_64 = MISC::GET_GAME_TIMER() + 2000;
				Local_65 = { 3885.477f, -5082.061f, 110.2944f };
			}
		}
		else if (GlobalFunc_100(Local_65, 3885.477f, -5082.061f, 110.2944f))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1050, 3669.304f, -4935.353f, 110.6839f, 10f, 25f, 8f, 0, 1, 0))
			{
				iLocal_64 = MISC::GET_GAME_TIMER() + 2000;
				Local_65 = { 3685.606f, -4884.99f, 110.7642f };
			}
		}
		else if (GlobalFunc_100(Local_65, 3685.606f, -4884.99f, 110.7642f))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1050, 3523.411f, -4856.051f, 110.65f, 10f, 25f, 8f, 0, 1, 0))
			{
				iLocal_64 = MISC::GET_GAME_TIMER() + 2000;
				Local_65 = { 3549.054f, -4828.076f, 112.1221f };
			}
		}
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds", 0))
		{
			if (iLocal_1244 == -1)
			{
				iLocal_1244 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1244, "Train_Bell", 3875.881f, -5020.976f, 113.5316f, "Prologue_Sounds", 0, 0, 0);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_64)
			{
				if (iLocal_1245 != -1)
				{
					AUDIO::STOP_SOUND(iLocal_1245);
					AUDIO::RELEASE_SOUND_ID(iLocal_1245);
					iLocal_1245 = -1;
				}
			}
			else if (!GlobalFunc_100(Local_65, Local_98))
			{
				if (iLocal_1245 == -1)
				{
					iLocal_1245 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1245, "Train_Horn", Local_65, "Prologue_Sounds", 0, 0, 0);
				}
			}
		}
		iVar8 = MISC::GET_GAME_TIMER();
		if ((iVar8 % 8000) < 3000)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 2, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 2, 0);
		}
		else if ((iVar8 % 8000) >= 4000 && (iVar8 % 8000) < 7000)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 2, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 2, 1);
		}
		else if (((iVar8 % 8000) >= 3000 && (iVar8 % 8000) < 4000) || (iVar8 % 8000) >= 7000)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 2, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 2, 0);
		}
	}
	if (func_361())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_ESCAPE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_ESCAPE");
		}
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_656);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_658);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_656, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_657, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_658, 0);
		HUD::SET_GPS_FLASHES(0);
		func_419(&(uLocal_1105[2]));
		func_419(&iLocal_1096);
		func_419(&iLocal_1098);
		GlobalFunc_2240(&(uLocal_709[0]));
		GlobalFunc_2240(&(uLocal_709[1]));
		GlobalFunc_2244(&(uLocal_1076[0]));
		GlobalFunc_2244(&(uLocal_1076[1]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tractor3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_02"));
		iVar9 = 0;
		while (iVar9 < iLocal_666)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar9]))
			{
				if (!PED::IS_PED_INJURED(iLocal_666[iVar9]))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_666[iVar9], 1);
					AUDIO::STOP_PED_SPEAKING(iLocal_666[iVar9], 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_666[iVar9], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_666[iVar9]));
			}
			iVar9++;
		}
		iVar9 = 0;
		while (iVar9 < iLocal_1051)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1051[iVar9]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1051[iVar9]));
			}
			iVar9++;
		}
		iVar9 = 0;
		while (iVar9 < iLocal_1179)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1179[iVar9]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1179[iVar9]));
			}
			iVar9++;
		}
		GlobalFunc_2241(&iLocal_1170);
		MISC::SET_FAKE_WANTED_LEVEL(0);
		iLocal_1252++;
	}
}




bool func_474(float fParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5E0CC
{
	if (GlobalFunc_552(1, 0, 1) == 1)
	{
		if (fParam0 != 0f)
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), fParam0, 1, 0, 0, 0);
		}
		if (!bParam3)
		{
			if (bParam2)
			{
				func_6();
			}
			else
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_2238(1);
				GlobalFunc_5105();
			}
		}
		else
		{
			HUD::CLEAR_PRINTS();
			if (bParam2)
			{
				GlobalFunc_4956();
			}
			else
			{
				GlobalFunc_5105();
			}
		}
		GlobalFunc_5744();
		GlobalFunc_8316(1, 1, 1, 0);
		if (iParam1 == 1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_654, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			}
		}
	}
	return GlobalFunc_552(1, 0, 1);
}




void func_478(int iParam0, int iParam1, bool bParam2)//Position - 0x5E281
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				*iParam0 = func_479(*iParam1, bParam2, 0);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*iParam0, 7);
				}
			}
		}
	}
}

int func_479(int iParam0, bool bParam1, bool bParam2)//Position - 0x5E2C4
{
	return func_480(iParam0, !bParam1, bParam2);
}

int func_480(int iParam0, bool bParam1, bool bParam2)//Position - 0x5E2D7
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}


void func_482(int iParam0, int iParam1, bool bParam2)//Position - 0x5E392
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				*iParam0 = func_483(*iParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*iParam0, 7);
				}
			}
		}
	}
}

int func_483(int iParam0, bool bParam1, int iParam2)//Position - 0x5E3D6
{
	var uVar0;
	
	uVar0 = func_480(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_484(int iParam0, struct<3> Param1, int iParam4)//Position - 0x5E428
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_485(Param1, iParam4);
		HUD::SET_BLIP_PRIORITY(*iParam0, 9);
	}
}

int func_485(struct<3> Param0, var uParam3)//Position - 0x5E451
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, uParam3);
	return iVar0;
}

void func_486(struct<3> Param0, int iParam3, var uParam4, struct<3> Param5, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x5E47D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam4) > iParam8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
		{
			if (GlobalFunc_2569(iParam3, 0))
			{
				Var1 = { Param0 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam11, iParam12), MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam9, iParam10)) };
				Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, Param5) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2));
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var4, Var1, 1, 0, joaat("weapon_assaultrifle"), iParam3, 1, 1, -1082130432);
				*uParam4 = iVar0;
			}
		}
	}
}


void func_488(struct<3> Param0, int iParam3, var uParam4, struct<3> Param5, int iParam8)//Position - 0x5E7E6
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam4) > iParam8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam3))
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, Param5) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, Param0, 1, 0, joaat("weapon_assaultrifle"), iParam3, 1, 1, -1082130432);
			*uParam4 = iVar0;
		}
	}
}

int func_489(int iParam0)//Position - 0x5E845
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}



void func_492(int iParam0, int iParam1)//Position - 0x5E89A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_1939)
	{
		if (Local_1939[iVar0 /*2*/] == iParam0)
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_1939)
		{
			if (iVar2 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_1939[iVar0 /*2*/]))
				{
					Local_1939[iVar0 /*2*/] = iParam0;
					Local_1939[iVar0 /*2*/].f_1 = (MISC::GET_GAME_TIMER() + iParam1);
					HUD::SET_BLIP_FLASHES(Local_1939[iVar0 /*2*/], 1);
					iVar2 = 1;
				}
			}
			iVar0++;
		}
		if (iVar2 == 0)
		{
		}
	}
}



void func_495(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5E958
{
	if (!func_644(iParam0))
	{
		while (!GlobalFunc_10618(&uLocal_1748, cLocal_1256, sParam1, iParam2, iParam4, iParam5, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			func_387(0, 0);
		}
		func_643(iParam0, iParam3);
	}
}


void func_497(int iParam0)//Position - 0x5E9EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
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
					}
				}
				iVar1++;
			}
		}
	}
}


void func_499()//Position - 0x5EABC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iLocal_28 > 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	}
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_88 = 1;
		func_478(&iLocal_1096, &iLocal_1050, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1050, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_655, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 1);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_655, 0);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_655, 1);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_658, 0);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_658, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_654, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_655, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 3, 0);
		if (GlobalFunc_8315() == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("pro_mcs_5", 57, 8);
		}
		else if (GlobalFunc_8315() == 2)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("pro_mcs_5", 62, 8);
		}
		Local_536[0 /*3*/] = { 5425.231f, -5160.551f, 77.2905f };
		Local_536[1 /*3*/] = { 5431.374f, -5144.494f, 77.2632f };
		Local_536[2 /*3*/] = { 5428.26f, -5129.75f, 77.0241f };
		if (CAM::DOES_CAM_EXIST(uLocal_1157))
		{
			CAM::DESTROY_CAM(uLocal_1157, 0);
		}
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, 5423.205f, -5118.927f, 76.9971f, 38.6371f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_655);
			GlobalFunc_2510(iLocal_655, 5421.709f, -5116.14f, 77.0704f, 192.0948f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_658);
			GlobalFunc_2510(iLocal_658, 5422.533f, -5115.939f, 77.0794f, 192.0846f, 1);
			func_643(240, 1);
			if (iLocal_90 == 0)
			{
				GlobalFunc_2239(iLocal_1051[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_560), sLocal_560), 90f);
				GlobalFunc_2239(iLocal_1051[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_560), sLocal_560), 90f);
				GlobalFunc_2239(iLocal_1051[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_560), sLocal_560), 90f);
				GlobalFunc_2239(iLocal_1051[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_560), sLocal_560), 90f);
				GlobalFunc_2239(iLocal_1051[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_560), sLocal_560), 90f);
				GlobalFunc_2239(iLocal_1051[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(700, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_560), sLocal_560), 90f);
				GlobalFunc_2239(iLocal_1050, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(26, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(26, sLocal_560), sLocal_560), 105f);
				func_643(238, 1);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_1050);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
			}
			else
			{
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 2, 5, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 2, 7, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 1, 1, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_658, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 2, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 6, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 9, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Getaway_driver", iLocal_659, 0);
					}
					func_387(0, 0);
				}
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 2, 5, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 2, 7, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_658, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Getaway_driver", iLocal_659, 0);
		}
		switch (iLocal_28)
		{
			case 0:
				if (iLocal_655 == uLocal_1670[0])
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_655, iLocal_1050, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_655))
					{
						if (!func_644(268))
						{
							TASK::CLEAR_PED_TASKS(iLocal_655);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_536[0 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_536[1 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) && !func_644(241))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_536[2 /*3*/], 5447.468f, -5130.345f, 78.35157f, 2f, 1, 0.5f, 4f, 0, 1, 0, -957453492);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(5423.055f, -5119.155f, 77.0883f, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5423.055f, -5119.155f, 77.0883f, 2f, 40000, 0.25f, 0, 40000f);
							}
							TASK::TASK_ENTER_VEHICLE(0, iLocal_1050, -1, 0, 2f, 1179713, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_655, uLocal_1161);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							func_643(268, 1);
						}
					}
					else
					{
						func_419(&iLocal_1092);
					}
				}
				else if (iLocal_655 == uLocal_1670[2])
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_655, 5423.055f, -5119.155f, 76.8883f, 2f, 2f, 3f, 0, 1, 0))
					{
						if (!func_644(269))
						{
							TASK::CLEAR_PED_TASKS(iLocal_655);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
							TASK::TASK_AIM_GUN_AT_COORD(0, Local_536[1 /*3*/], 1500, 0, 0);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_536[0 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_536[1 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) && !func_644(241))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_536[2 /*3*/], 5448.063f, -5123.284f, 78.31491f, 2f, 1, 0.5f, 4f, 0, 1, 0, -957453492);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(5423.055f, -5119.155f, 77.0883f, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5423.055f, -5119.155f, 77.0883f, 2f, 40000, 0.25f, 0, 40000f);
							}
							TASK::TASK_ENTER_VEHICLE(0, iLocal_1050, -1, 1, 2f, 1179713, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_655, uLocal_1161);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							func_643(269, 1);
						}
					}
					else
					{
						func_419(&iLocal_1093);
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_658, iLocal_1050, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_658))
				{
					if (!func_644(266))
					{
						TASK::CLEAR_PED_TASKS(iLocal_658);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_536[0 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(5435.053f, -5140.256f, 77.1114f, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5435.053f, -5140.256f, 77.1114f, 2f, 40000, 0.25f, 0, 40000f);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(5427.95f, -5122.748f, 77.0983f, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 1) && !func_644(241))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 5427.95f, -5122.748f, 77.0983f, 5448.063f, -5123.284f, 78.31491f, 2f, 1, 0.5f, 4f, 0, 1, 0, -957453492);
						}
						TASK::TASK_ENTER_VEHICLE(0, iLocal_1050, -1, 2, 2f, 1310785, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_658, uLocal_1161);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
						func_643(266, 1);
					}
				}
				else
				{
					func_419(&iLocal_1094);
				}
				if ((func_644(268) || func_644(269)) || func_644(266))
				{
					if (func_644(39))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_655) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 7f)) || (PED::IS_PED_SHOOTING(iLocal_658) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 7f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_666[17]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[17], ENTITY::GET_ENTITY_HEALTH(iLocal_666[17]) + 100, 1);
							}
						}
					}
					if (func_644(40))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_655) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 5f)) || (PED::IS_PED_SHOOTING(iLocal_658) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 5f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_666[18]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[18], ENTITY::GET_ENTITY_HEALTH(iLocal_666[18]) + 100, 1);
							}
						}
					}
					if (func_644(41))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_655) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 4f)) || (PED::IS_PED_SHOOTING(iLocal_658) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 4f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_666[19]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[19], ENTITY::GET_ENTITY_HEALTH(iLocal_666[19]) + 100, 1);
							}
						}
					}
					if (func_644(42))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_655) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 3f)) || (PED::IS_PED_SHOOTING(iLocal_658) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), Local_536[2 /*3*/], 1) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_536[1 /*3*/], Local_536[2 /*3*/], 1) / 10f) * 3f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_666[20]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[20], ENTITY::GET_ENTITY_HEALTH(iLocal_666[20]) + 100, 1);
							}
						}
					}
					if (!func_644(241))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_666[17]) && PED::IS_PED_INJURED(iLocal_666[17])) && (ENTITY::DOES_ENTITY_EXIST(iLocal_666[18]) && PED::IS_PED_INJURED(iLocal_666[18]))) && (ENTITY::DOES_ENTITY_EXIST(iLocal_666[19]) && PED::IS_PED_INJURED(iLocal_666[19])))
						{
							func_643(268, 0);
							func_643(269, 0);
							func_643(266, 0);
							func_643(241, 1);
						}
					}
				}
				if (!func_644(238))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_655, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_658, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, 0, 1, 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1050, 5425.954f, -5116.231f, 76.60962f, 5434.421f, -5113.642f, 79.72491f, 5f, 0, 1, 0) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1050))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1050, 26, sLocal_560, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1050, 500f);
						}
						func_643(238, 1);
					}
					if (!func_644(159))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							GlobalFunc_5130(iLocal_658, "GET_OUT_OF_HERE", 10);
							func_643(159, 1);
						}
					}
				}
				if (!func_644(267))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5430.224f, -5157.384f, 86.30035f, 5437.865f, -5089.691f, 76.0554f, 150f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_655, 5430.224f, -5157.384f, 86.30035f, 5437.865f, -5089.691f, 76.0554f, 150f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_658, 5430.224f, -5157.384f, 86.30035f, 5437.865f, -5089.691f, 76.0554f, 150f, 0, 1, 0))
					{
						func_418(&(iLocal_1051[7]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_560)), -1, 1097859072);
						func_418(&(iLocal_1051[8]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_560)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[7], 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[8], 0);
						func_400(17);
						func_400(18);
						func_400(19);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[17]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_666[17], iLocal_1051[7], -1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[18]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_666[18], iLocal_1051[7], 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[19]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_666[19], iLocal_1051[8], -1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[20]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_666[20], iLocal_1051[8], 0);
						}
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(701, sLocal_560))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[7], 701, sLocal_560, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[7], 3000f);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[7], 1);
						}
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(702, sLocal_560))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[8], 702, sLocal_560, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[8], 3000f);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[8], 1);
						}
						if (func_644(240))
						{
							VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[7]);
							VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[8]);
							if (!PED::IS_PED_INJURED(iLocal_666[17]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[17], ENTITY::GET_ENTITY_HEALTH(iLocal_666[17]) + 100, 1);
							}
							if (!PED::IS_PED_INJURED(iLocal_666[18]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[18], ENTITY::GET_ENTITY_HEALTH(iLocal_666[18]) + 100, 1);
							}
							if (!PED::IS_PED_INJURED(iLocal_666[19]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[19], ENTITY::GET_ENTITY_HEALTH(iLocal_666[19]) + 100, 1);
							}
							if (!PED::IS_PED_INJURED(iLocal_666[20]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_666[20], ENTITY::GET_ENTITY_HEALTH(iLocal_666[20]) + 100, 1);
							}
						}
						func_643(267, 1);
					}
				}
				else
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_644(251))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
							{
								VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[7], 1);
								func_643(251, 1);
							}
						}
						if (!func_644(39))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_666[17]))
								{
									VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[7], 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[17], 100f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[17], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[17], 3, 1);
									func_643(39, 1);
								}
							}
						}
						if (!func_644(40))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_666[18]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[18], 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[18], 1000f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[18], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[18], 3, 1);
									func_643(40, 1);
								}
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_644(252))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
							{
								VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[8], 1);
								VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[8], 0);
								func_643(252, 1);
							}
						}
						if (!func_644(41))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_666[19]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[19], 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[19], 1000f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[19], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[19], 3, 1);
									func_643(41, 1);
								}
							}
						}
						if (!func_644(42))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_666[20]))
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[20], 100f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[20], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[20], 3, 1);
									func_643(42, 1);
								}
							}
						}
					}
				}
				if (iLocal_38 < (iLocal_1051 - 1))
				{
					iLocal_38++;
				}
				else
				{
					iLocal_38 = 0;
				}
				iVar0 = iLocal_38;
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[iVar0]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[iVar0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051[iVar0], -1)) && PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051[iVar0], -1)))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[iVar0]);
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_666)
				{
					if (!PED::IS_PED_INJURED(iLocal_666[iVar0]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_666[iVar0], 1))
						{
							PED::SET_PED_RESET_FLAG(iLocal_666[iVar0], 282, 1);
						}
					}
					iVar0++;
				}
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PED::SET_PED_RESET_FLAG(iLocal_655, 304, 1);
				PED::SET_PED_RESET_FLAG(iLocal_658, 304, 1);
				if (((((!PED::IS_PED_INJURED(iLocal_666[17]) || !PED::IS_PED_INJURED(iLocal_666[18])) || !PED::IS_PED_INJURED(iLocal_666[19])) && ENTITY::IS_ENTITY_AT_COORD(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 5f, 5f, 3f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_655, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 5f, 5f, 3f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_658, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 5f, 5f, 3f, 0, 1, 0))
				{
					func_374(114, "PRO_CARCREW", 7500, 1);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 30f, 30f, 3f, 0, 1, 0))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_1050, 1);
				}
				if ((((((((((ENTITY::DOES_ENTITY_EXIST(iLocal_666[17]) && PED::IS_PED_INJURED(iLocal_666[17])) && ENTITY::DOES_ENTITY_EXIST(iLocal_666[18])) && PED::IS_PED_INJURED(iLocal_666[18])) && ENTITY::DOES_ENTITY_EXIST(iLocal_666[19])) && PED::IS_PED_INJURED(iLocal_666[19])) || ((PED::IS_PED_IN_VEHICLE(iLocal_655, iLocal_1050, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_655)) && (PED::IS_PED_IN_VEHICLE(iLocal_658, iLocal_1050, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_658)))) && ENTITY::IS_ENTITY_AT_COORD(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_1050, 1), 5f, 5f, 3f, 0, 1, 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || iLocal_90 == 1)
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_1050, 1);
					if (GlobalFunc_663("PRO_CARCREW", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!GlobalFunc_74("PROHLP_CAR1"))
					{
						GlobalFunc_Display_Help_Text("PROHLP_CAR1");
					}
					if (!func_644(160))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							GlobalFunc_5130(iLocal_658, "GET_IN_VEHICLE", 10);
							func_643(160, 1);
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 23))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_654, -1794415470) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_654);
							if (iLocal_654 == iLocal_656)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_654, iLocal_1050, -1, 0, 2f, 1310785, 0);
							}
							else if (iLocal_654 == iLocal_657)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_654, iLocal_1050, -1, 1, 2f, 1179713, 0);
							}
						}
					}
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 23) || iLocal_90 == 1)
					{
						if (GlobalFunc_Has_Cutscene_Loaded())
						{
							if (GlobalFunc_8315() != 0)
							{
								GlobalFunc_9134(&uLocal_1670, 0);
								func_13(&uLocal_1670, 1, 0, 1);
								func_696();
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[2], iLocal_1230);
								CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_1670[2]);
							}
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_659, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_656, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_657, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_658, 1);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1050))
							{
								if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_1050) == VEHICLE::GET_VEHICLE_RECORDING_ID(26, sLocal_560))
								{
									VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1050);
								}
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1050, 1, 1);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
							{
								AUDIO::STOP_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
							}
							func_6();
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1050, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1050, 1000f);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1670[0], "Michael", 0, GlobalFunc_4917(0), 3);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[2]))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1670[2], "Trevor", 0, 0, 0);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_658, "Brad", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_659, "PRO_Getaway_driver", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1050, "getaway_car", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1091, "chase_cop_car", 2, joaat("policeold2"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1088[0], "PRO_Cop_Driving_Car", 2, joaat("s_m_m_snowcop_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1088[1], "PRO_COP_Shooting_car", 2, joaat("s_m_m_snowcop_01"), 0);
							iLocal_1163[1] = GlobalFunc_6830(iLocal_657, iLocal_1227, 1, 0, 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[1], "Trevors_weapon", 0, 0, 0);
							GlobalFunc_8316(1, 1, 1, 0);
							func_407(20);
							func_693(18);
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
							RECORDING::_0x48621C9FCA3EBD28(4);
							func_387(0, 0);
							if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
							{
								CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
							}
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_1050, 2, 0, 0f);
							VEHICLE::FIX_VEHICLE_WINDOW(iLocal_1050, 2);
							VEHICLE::FIX_VEHICLE_WINDOW(iLocal_1050, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 2, 5, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
							PED::CLEAR_PED_PROP(iLocal_657, 1);
							if (iLocal_90 == 1)
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(1000);
								}
								iLocal_90 = 0;
							}
							func_406();
						}
					}
				}
				else if (GlobalFunc_74("PROHLP_CAR1") && !HUD::IS_HELP_MESSAGE_FADING_OUT())
				{
					GlobalFunc_2238(1);
				}
				break;
			
			case 1:
				PED::SET_PED_RESET_FLAG(iLocal_656, 287, 1);
				PED::SET_PED_RESET_FLAG(iLocal_657, 287, 1);
				PED::SET_PED_RESET_FLAG(iLocal_658, 287, 1);
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_1050, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1091))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("chase_cop_car", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_1091 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1091, 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1091, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1091, 2);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1088[0]))
				{
					iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("PRO_Cop_Driving_Car", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						uLocal_1088[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1088[1]))
				{
					iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("PRO_COP_Shooting_car", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						uLocal_1088[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					}
				}
				if (!func_644(36))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((11f * 1000f)))
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 0, 0, 0);
						func_643(36, 1);
					}
				}
				if (!func_644(283))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((27.53333f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 2);
						func_643(283, 1);
					}
				}
				if (!func_644(284))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((33.23333f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 0);
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_656, 1, 0.6f, 0.55f, 0f, 1f, -1, 0f, "Scripted_Ped_Splash_Back");
						func_643(284, 1);
					}
				}
				if (!func_644(285))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((41.6f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 6);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1091))
						{
							VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1091, 7);
						}
						func_643(285, 1);
					}
				}
				if (!func_644(286))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((41.6f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 7);
						func_643(286, 1);
					}
				}
				if (!func_644(259))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((16.3f * 1000f)))
					{
						func_693(20);
						func_643(259, 1);
					}
				}
				if (!func_644(258))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((23f * 1000f)))
					{
						func_693(21);
						func_643(258, 1);
					}
				}
				if (!func_644(260))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((41.6f * 1000f)))
					{
						func_693(22);
						func_643(260, 1);
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (!func_644(310))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((44.6f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							func_643(310, 1);
						}
					}
					if (func_644(310))
					{
						if (!CAM::DOES_CAM_EXIST(uLocal_1159))
						{
							uLocal_1159 = CAM::CREATE_CAMERA(964613260, 1);
							uLocal_653 = PED::CREATE_SYNCHRONIZED_SCENE(Local_98, Local_98, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_653, iLocal_1050, -1);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_653, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_653, 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1159, uLocal_653, "leadout_action_rear_cam", sLocal_583);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						}
						if (!func_644(311))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								func_643(311, 1);
							}
						}
						CAM::STOP_CUTSCENE_CAM_SHAKING();
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Getaway_driver", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_656);
					PED::SET_PED_INTO_VEHICLE(iLocal_656, iLocal_1050, 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_656, iLocal_1225, 350, 0, 1);
					PED::SET_PED_INTO_VEHICLE(iLocal_656, iLocal_1050, -1);
					TASK::TASK_PLAY_ANIM(iLocal_656, sLocal_583, "leadout_action_michael", 8f, -8f, -1, 48, 0, 0, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_656, iLocal_1225, 350, 0, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_657, iLocal_1050, 1);
					TASK::TASK_PLAY_ANIM(iLocal_657, sLocal_583, "leadout_action_trevor", 8f, -8f, -1, 48, 0, 0, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, iLocal_1225, 350, 0, 1);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, joaat("weapon_microsmg"), 350, 0, 1);
				}
				iVar4 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("cs_brad"));
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					PED::SET_ENABLE_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), 1);
					PED::SET_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), 0.6f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Brad", 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_658, iLocal_1050, 2);
					TASK::TASK_PLAY_ANIM(iLocal_658, sLocal_583, "leadout_action_brad", 8f, -8f, -1, 48, 0, 0, 0, 0);
					PED::PLAY_FACIAL_ANIM(iLocal_658, "leadout_action_brad_facial", sLocal_583);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_658, iLocal_1225, -1, 0, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("getaway_car", 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1050, 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_1050, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1050, 30f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[1], iLocal_657);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Cop_Driving_Car", 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_1088[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1091) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1091, 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1088[0], iLocal_1091, -1);
						}
						PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1088[0], 0);
						PED::SET_PED_MAX_HEALTH(uLocal_1088[0], 800);
						ENTITY::SET_ENTITY_HEALTH(uLocal_1088[0], PED::GET_PED_MAX_HEALTH(uLocal_1088[0]));
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_1088[0], iLocal_1225, 350, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1088[0], iLocal_1231);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_COP_Shooting_car", 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_1088[1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1091) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1091, 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1088[1], iLocal_1091, 0);
						}
						PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1088[1], 0);
						PED::SET_PED_MAX_HEALTH(uLocal_1088[1], 800);
						ENTITY::SET_ENTITY_HEALTH(uLocal_1088[1], PED::GET_PED_MAX_HEALTH(uLocal_1088[1]));
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_1088[1], iLocal_1225, 350, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1088[1], iLocal_1231);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("chase_cop_car", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1091) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1091, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1091, 1, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1091, 1);
						ENTITY::SET_ENTITY_PROOFS(iLocal_1091, 1, 1, 1, 1, 1, 0, 0, 0);
						VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_1091, 1);
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_91 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_91)
					{
						if (AUDIO::IS_MUSIC_ONESHOT_PLAYING())
						{
							AUDIO::CANCEL_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS");
						}
						func_500(4541.338f, -5082.698f, 109.5979f, 100f, 1);
						GlobalFunc_2239(iLocal_1050, 4541.338f, -5082.698f, 109.5979f, 118.0337f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1050, 1, 1);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_1050, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1050, 20f);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					iLocal_91 = 0;
					GlobalFunc_8316(0, 1, 1, 0);
					func_420(PLAYER::PLAYER_ID(), 1, 0);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					}
					func_377();
				}
				break;
		}
		if (iLocal_28 > 0)
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((4400f - 2500f), (-5100f - 1500f), (4400f + 2500f), (-5100f + 1500f));
		}
	}
	if (func_361())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_387(0, 1);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_1159))
		{
			CAM::DESTROY_CAM(uLocal_1159, 0);
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 0, 0, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_657, 1);
		GlobalFunc_585(125, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_654, 0);
		if (GlobalFunc_8315() == 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_1670[2], 0);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_1670[0], 0);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_658, 0);
		func_419(&iLocal_1092);
		func_419(&iLocal_1093);
		func_419(&iLocal_1094);
		func_419(&iLocal_1096);
		func_419(&iLocal_1098);
		GlobalFunc_2240(&iLocal_659);
		GlobalFunc_200(&uLocal_1748, 5);
		GlobalFunc_2240(&(iLocal_666[0]));
		GlobalFunc_2240(&(iLocal_666[1]));
		GlobalFunc_2240(&iLocal_712);
		GlobalFunc_2244(&(iLocal_1051[8]));
		iVar5 = 0;
		while (iVar5 < iLocal_1163)
		{
			GlobalFunc_2241(&(iLocal_1163[iVar5]));
			iVar5++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1091))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1091);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1088[0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1088[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1088[1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1088[1]));
		}
		iVar5 = 0;
		while (iVar5 < iLocal_666)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar5]))
			{
				if (!PED::IS_PED_INJURED(iLocal_666[iVar5]))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_666[iVar5], 1);
					AUDIO::STOP_PED_SPEAKING(iLocal_666[iVar5], 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_666[iVar5], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_666[iVar5]));
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_1051)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1051[iVar5]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1051[iVar5]));
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_1072)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1072[iVar5]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1072[iVar5]));
			}
			iVar5++;
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1050))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1050);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1050, 1);
		iLocal_1252++;
	}
}

void func_500(struct<3> Param0, int iParam3, bool bParam4)//Position - 0x6101C
{
	int iVar0;
	
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, iParam3, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 20000;
	while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
	{
		func_387(0, bParam4);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}




void func_504()//Position - 0x612AB
{
	int iVar0;
	int iVar1;
	struct<20> Var2;
	struct<22> Var24;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (func_467())
	{
		iLocal_1986 = 0;
		iLocal_1987 = 0;
		iLocal_1988 = 0;
		iLocal_1989 = 0;
		func_421(3, "stageShootOut", 0, 0, 0, 1);
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			func_693(14);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
		}
		iLocal_88 = 1;
		if (iLocal_95 == 0)
		{
			ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
			ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
			iLocal_95 = 1;
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5336.864f, -5193.539f, 81.9129f))
		{
			iLocal_1207[0] = TASK::ADD_COVER_POINT(5336.817f, -5193.333f, 81.911f, 270.8514f, 1, 0, 1, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5332.273f, -5185.271f, 81.7757f))
		{
			iLocal_1207[1] = TASK::ADD_COVER_POINT(5332.273f, -5185.271f, 81.7757f, 276.6267f, 0, 2, 3, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5332.193f, -5191.912f, 81.7758f))
		{
			iLocal_1207[2] = TASK::ADD_COVER_POINT(5332.193f, -5191.912f, 81.7758f, 276.6232f, 1, 2, 3, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5326.354f, -5185.249f, 81.7796f))
		{
			iLocal_1207[3] = TASK::ADD_COVER_POINT(5326.354f, -5185.249f, 81.7796f, 276.997f, 0, 2, 3, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5326.354f, -5191.832f, 81.7743f))
		{
			iLocal_1207[4] = TASK::ADD_COVER_POINT(5326.354f, -5191.832f, 81.7743f, 277.2627f, 1, 2, 3, 0);
		}
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		ENTITY::SET_ENTITY_PROOFS(iLocal_654, 0, 0, 0, 0, 0, 1, 0, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_655, 0, 0, 0, 0, 0, 1, 0, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_658, 0, 0, 0, 0, 0, 1, 0, 0);
		PED::_0xAFC976FD0580C7B3(iLocal_654, 1);
		PED::_0xAFC976FD0580C7B3(iLocal_655, 1);
		PED::_0xAFC976FD0580C7B3(iLocal_658, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_657, 118, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 38, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 35, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 26, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 29, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_657, 208, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_657, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_657, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_657, 131, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_656, 0);
		PED::SET_PED_MAX_HEALTH(iLocal_656, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_656, 800);
		PED::SET_COMBAT_FLOAT(iLocal_656, 3, 2f);
		PED::SET_PED_CONFIG_FLAG(iLocal_656, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_656, 208, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_656, 38, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_656, 35, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_656, 26, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_656, 29, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_656, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_656, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_656, 131, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_658, 0);
		WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_658, 100f, 100f);
		PED::SET_PED_MAX_HEALTH(iLocal_658, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_658, 800);
		PED::SET_COMBAT_FLOAT(iLocal_658, 3, 2f);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 118, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 38, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 35, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 26, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 29, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 208, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_658, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 130, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 131, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_658, 12, 1);
		PED::SET_PED_FIRING_PATTERN(iLocal_658, 445831135);
		func_482(&iLocal_1092, &(uLocal_1670[0]), 0);
		func_419(&iLocal_1093);
		func_403(&iLocal_712, joaat("u_m_m_prolsec_01"), 5362.9f, -5180.634f, 82.802f, 0f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_712, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_712, sLocal_563, "dead_guard", 5362.9f, -5180.634f, 82.802f, 0f, 0f, 0f, 1000f, -1000f, -1, 2103816, 0, 2, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_712, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_m_prolsec_01"));
		func_418(&iLocal_1050, joaat("rancherxl2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(26, 500f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(26, 500f, sLocal_560)), 0, 1097859072);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_1050, "87ALN974");
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1050, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_1050, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_1050, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 0, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 1, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 2, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 3, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1050, 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_1050, 0);
		func_387(0, 0);
		iLocal_659 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1050, 26, joaat("u_m_y_proldriver_01"), -1, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_659, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_659, 9, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_659, iLocal_1229);
		GlobalFunc_173(&uLocal_1748, 5, iLocal_659, "PROGETAWAY", 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_y_proldriver_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_659, 1);
		func_387(0, 0);
		func_418(&(iLocal_1072[0]), joaat("stockade3"), (5341.353f + 1.365f), -5177.149f, 81.762f, 0.3367f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1072[0], 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1072[0], 1);
		func_387(0, 0);
		func_418(&(iLocal_1072[1]), joaat("stockade3"), (5337.1f + 1.365f), -5177.032f, 81.762f, 2.5903f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1072[1], 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1072[1], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stockade3"));
		func_387(0, 0);
		func_418(&iLocal_1075, joaat("emperor3"), 5355.211f, -5179.921f, 81.8178f, 341.248f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1075, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1075, 1);
		func_418(&(iLocal_1051[0]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_560)), -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[1]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_560)), -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[2]), joaat("policeold1"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_560)), -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[3]), joaat("policeold1"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_560)), -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[4]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_560)), -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[5]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_560), GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_560)), -1, 1097859072);
		func_387(0, 0);
		func_418(&(iLocal_1051[6]), joaat("policeold2"), 5505.63f, -5128.172f, 77.3763f, 87.963f, -1, 1097859072);
		func_387(0, 0);
		iVar0 = 0;
		while (iVar0 < iLocal_1051)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[iVar0]))
			{
				VEHICLE::SET_VEHICLE_STRONG(iLocal_1051[iVar0], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1051[iVar0], 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1051[iVar0], 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[iVar0], 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 17)
		{
			if (iVar0 != 7)
			{
				func_400(iVar0);
				if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 7)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0], iLocal_1226, -1, 1, 1);
				}
				if ((((iVar0 == 4 || iVar0 == 5) || iVar0 == 9) || iVar0 == 14) || iVar0 == 16)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_666[iVar0], iLocal_1228, -1, 1, 1);
				}
				if (iVar0 >= 0 && iVar0 <= 8)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[iVar0], 4, 0);
					PED::SET_COMBAT_FLOAT(iLocal_666[iVar0], 5, 1f);
				}
				func_387(0, 0);
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[0]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[0], iLocal_1051[0], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[1]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[1], iLocal_1051[0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[2]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[2], iLocal_1051[1], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[3]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[3], iLocal_1051[1], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[4]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[4], iLocal_1051[2], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[5]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[5], iLocal_1051[2], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[9]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[9], iLocal_1051[3], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[10]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[10], iLocal_1051[3], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[11]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[11], iLocal_1051[4], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[12]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[12], iLocal_1051[4], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[13]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[13], iLocal_1051[5], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[14]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[14], iLocal_1051[5], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[15]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[15], iLocal_1051[6], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[16]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_666[16], iLocal_1051[6], 0);
		}
		TASK::ADD_COVER_BLOCKING_AREA(5370.142f, -5212.455f, 78.9143f, 5359.361f, -5191.83f, 86.8785f, 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(5375.438f, -5180.967f, 79.4894f, 5360.391f, -5161.355f, 88.813f, 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(5366.015f, -5162.681f, 81.0458f, 5274.021f, -5152.04f, 89.9633f, 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(5397.542f, -5174.056f, 79.035f, 5373.813f, -5160.871f, 87.0641f, 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(5428.415f, -5193.021f, 76.6645f, 5411.401f, -5185.282f, 82.3215f, 1, 1, 1, 1);
		uLocal_546 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5324.807f, -5130.89f, 75.4401f, 90f, 70f, 15f, 0f, 0, 7);
		uLocal_547 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5370.831f, -5156.042f, 80.358f, 19.5f, 50f, 15f, 0f, 0, 7);
		uLocal_548 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5370.331f, -5226.042f, 80.358f, 15f, 50f, 15f, 0f, 0, 7);
		uLocal_549 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5357.09f, -5164.394f, 82.90531f, 8f, 5f, 3f, 0f, 0, 7);
		iLocal_75 = MISC::GET_GAME_TIMER() + 7500;
		GlobalFunc_173(&uLocal_1748, 4, 0, "PROCOP", 0, 1);
		func_643(119, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_657, 2, 7, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_657, 1, 1, 0);
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_657);
			GlobalFunc_2510(iLocal_657, 5321.248f, -5188.478f, 82.5189f, 271.967f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_656);
			GlobalFunc_2510(iLocal_656, 5323.168f, -5190.459f, 82.5189f, 181.1772f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_658);
			GlobalFunc_2510(iLocal_658, 5323.296f, -5188.045f, 82.5189f, 182.8223f, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 5318.2f, -5185.1f, 83.7f) - ENTITY::GET_ENTITY_HEADING(iLocal_654)));
			uLocal_1234 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
			{
				uLocal_1234 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
			}
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234, 9);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3))
				{
					ENTITY::PLAY_ENTITY_ANIM(iLocal_1170, "GDoor_Open", sLocal_561, 1000f, 0, 1, 0, 0.25f, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open", 0f);
					ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1170, sLocal_561, "GDoor_Open", 1f);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (!func_644(15))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_645) >= 0.95f)
			{
				TASK::CLEAR_PED_TASKS(iLocal_654);
				func_693(13);
				func_643(15, 1);
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open") == 1f)
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_693(14);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
			}
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 2, 5, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 2, 7, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_658, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Getaway_driver", iLocal_659, 0);
		}
		if (func_644(221))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
			{
				func_495(197, "PRO_OffShoot", 7, 1, 1, 0);
			}
		}
		if (!func_644(83))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_398(83, "PROHLP_COVER1", 1, -1, 2000);
			}
		}
		else if (!func_644(84))
		{
			if (((PED::IS_PED_IN_COVER(iLocal_654, 0) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654)) && GlobalFunc_74("PROHLP_COVER1")) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_398(84, "PROHLP_COVER2", 1, -1, 2000);
			}
		}
		else if (!func_644(89))
		{
			if ((((PED::IS_PED_IN_COVER(iLocal_654, 0) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654)) && PED::IS_PED_AIMING_FROM_COVER(iLocal_654)) && GlobalFunc_74("PROHLP_COVER2")) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_398(89, "PROHLP_FREEAIM3", 1, -1, 2000);
			}
		}
		if (func_644(119))
		{
			if (!GlobalFunc_663("PRO_COVER1", 0, 0))
			{
				func_374(117, "PRO_COP", 7500, 1);
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_657) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					if (iLocal_654 == iLocal_657 && ((PED::IS_PED_IN_COVER(iLocal_654, 0) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654)) || func_644(106)))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(iLocal_654, &iVar1, 1);
						if (!PED::IS_PED_RELOADING(iLocal_654) && iVar1 == joaat("weapon_carbinerifle"))
						{
							if (((((((ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5332.167f, -5185.254f, 83.80939f, 0.5f, 0.5f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5332.145f, -5191.843f, 83.77327f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5326.206f, -5185.222f, 83.79367f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5326.217f, -5191.865f, 83.77605f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5332.157f, -5178.68f, 83.87281f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5332.796f, -5195.612f, 83.99976f, 0.5f, 0.75f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5336.999f, -5178.899f, 83.83877f, 0.75f, 2.25f, 2f, 0, 1, 0)) || func_644(106))
							{
								if (!func_644(106))
								{
									func_420(PLAYER::PLAYER_ID(), 0, 256);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_654);
								}
								func_387(100, 0);
								if (!PED::IS_PED_RELOADING(iLocal_654) && iVar1 == joaat("weapon_carbinerifle"))
								{
									if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_657, iLocal_1227, 0))
									{
										WEAPON::GIVE_WEAPON_TO_PED(iLocal_657, iLocal_1227, 500, 1, 1);
									}
									WEAPON::SET_CURRENT_PED_WEAPON(iLocal_657, iLocal_1227, 1);
									if (PED::IS_PED_IN_COVER_FACING_LEFT(iLocal_657))
									{
										iLocal_96 = 0;
									}
									else
									{
										iLocal_96 = 1;
									}
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1192[1]))
										{
											iLocal_1192[1] = OBJECT::CREATE_OBJECT(joaat("p_trevor_prologe_bally_s"), ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 1, 1, 0);
											ENTITY::SET_ENTITY_COLLISION(iLocal_1192[1], 0, 0);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1192[1], iLocal_657, PED::GET_PED_BONE_INDEX(iLocal_657, 31086), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1192[2]))
										{
											iLocal_1192[2] = OBJECT::CREATE_OBJECT(joaat("p_trev_ski_mask_s"), ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 1, 1, 0);
											ENTITY::SET_ENTITY_COLLISION(iLocal_1192[2], 0, 0);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1192[2], iLocal_657, PED::GET_PED_BONE_INDEX(iLocal_657, 31086), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
										}
									}
									Var2.f_4 = 1065353216;
									Var2.f_5 = 1065353216;
									Var2.f_9 = 1065353216;
									Var2.f_10 = 1065353216;
									Var2.f_14 = 1065353216;
									Var2.f_15 = 1065353216;
									Var2.f_17 = 1040187392;
									Var2.f_18 = 1040187392;
									Var2.f_19 = -1;
									Var24.f_4 = 1065353216;
									Var24.f_5 = 1065353216;
									Var24.f_9 = 1065353216;
									Var24.f_10 = 1065353216;
									Var24.f_14 = 1065353216;
									Var24.f_15 = 1065353216;
									Var24.f_17 = 1040187392;
									Var24.f_18 = 1040187392;
									Var24.f_19 = -1;
									Var24 = 1;
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										Var24.f_1 = sLocal_585;
									}
									else
									{
										Var24.f_1 = sLocal_584;
									}
									Var24.f_16 = MISC::GET_HASH_KEY("NoMover_filter");
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										Var24.f_21 = 1024;
									}
									else
									{
										Var24.f_21 = 2;
									}
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										Var24.f_2 = "REMOVE_BALACLAVA";
										Var24.f_20 = 48;
										TASK::TASK_SCRIPTED_ANIMATION(iLocal_657, &Var24, &Var2, &Var2, 0f, 0.125f);
									}
									else if (iLocal_96 == 0)
									{
										Var24.f_2 = "remove_balaclava_right";
										Var24.f_20 = 32;
										TASK::TASK_SCRIPTED_ANIMATION(iLocal_657, &Var24, &Var2, &Var2, 0f, 0.125f);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_1192[1], "remove_balaclava_right_balaclava", sLocal_584, 1000f, 0, 1, 0, 0, 0);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_1192[2], "remove_balaclava_right_skimask", sLocal_584, 1000f, 0, 1, 0, 0, 0);
									}
									else
									{
										if (func_644(106))
										{
											Var24.f_2 = "remove_balaclava_right";
											Var24.f_20 = 48;
											TASK::TASK_SCRIPTED_ANIMATION(iLocal_657, &Var24, &Var2, &Var2, 0.25f, 0.25f);
										}
										else
										{
											Var24.f_2 = "remove_balaclava";
											Var24.f_20 = 32;
											TASK::TASK_SCRIPTED_ANIMATION(iLocal_657, &Var24, &Var2, &Var2, 0f, 0.125f);
										}
										ENTITY::PLAY_ENTITY_ANIM(iLocal_1192[1], "remove_balaclava_balaclava", sLocal_584, 1000f, 0, 1, 0, 0, 0);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_1192[2], "remove_balaclava_skimask", sLocal_584, 1000f, 0, 1, 0, 0, 0);
									}
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_657, 0, 0);
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
									{
										ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_1192[1]);
										ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_1192[2]);
									}
									PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 0, 0, 0);
									PED::CLEAR_PED_PROP(iLocal_657, 1);
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
									}
									GlobalFunc_585(125, 1);
									RECORDING::_0x293220DA1B46CEBC(2.5f, 3f, 4);
									iLocal_1990 = MISC::GET_GAME_TIMER() + 5000;
									func_406();
								}
							}
						}
					}
				}
				break;
			
			case 1:
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava_right", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_585, "REMOVE_BALACLAVA", 3)) || MISC::GET_GAME_TIMER() > iLocal_1990)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_584, "remove_balaclava") > 0.48f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava_right", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_584, "remove_balaclava_right") > 0.48f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_585, "REMOVE_BALACLAVA", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_585, "REMOVE_BALACLAVA") > 0.48f))
						{
							func_495(222, "PRO_Unmask", 7, 1, 0, 0);
						}
					}
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_584, "remove_balaclava") > 0.488f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava_right", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_584, "remove_balaclava_right") > 0.488f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_585, "REMOVE_BALACLAVA", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_585, "REMOVE_BALACLAVA") > 0.488f))
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 7, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 1, 1, 0, 0);
						func_406();
					}
				}
				break;
			
			case 2:
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				if ((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava_right", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_585, "REMOVE_BALACLAVA", 3)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_657, sLocal_584, "remove_balaclava") > 0.92f)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_584, "remove_balaclava_right", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_657, sLocal_585, "REMOVE_BALACLAVA", 3)) || MISC::GET_GAME_TIMER() > iLocal_1990)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_657);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[1]))
					{
						ENTITY::DETACH_ENTITY(iLocal_1192[1], 1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1192[1], 0);
						ENTITY::SET_ENTITY_ALPHA(iLocal_1192[1], 0, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[2]))
					{
						ENTITY::DETACH_ENTITY(iLocal_1192[2], 1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1192[2], 0);
						ENTITY::SET_ENTITY_ALPHA(iLocal_1192[2], 0, 1);
					}
					iLocal_88 = 1;
					func_420(PLAYER::PLAYER_ID(), 1, 0);
					func_419(&iLocal_1097);
					SYSTEM::SETTIMERB(0);
					func_374(117, "PRO_COP", 7500, 1);
					func_406();
				}
				break;
			
			case 3:
				if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::REMOVE_COVER_POINT(iLocal_1207[1]);
					func_406();
				}
				break;
		}
		bLocal_1985 = true;
		iVar47 = 0;
		iVar49 = 0;
		iVar46 = 0;
		while (iVar46 < 9)
		{
			if (!PED::IS_PED_INJURED(iLocal_666[iVar46]))
			{
				bLocal_1985 = false;
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_666[iVar46], 5323.854f, -5194.2f, 93.5186f, 41f, 36f, 13f, 0, 1, 0))
				{
					iVar49 = 1;
				}
			}
			else
			{
				iVar47++;
			}
			iVar46++;
		}
		if (iLocal_38 < (iLocal_1051 - 1))
		{
			iLocal_38++;
		}
		else
		{
			iLocal_38 = 0;
		}
		iVar46 = iLocal_38;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[iVar46]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[iVar46]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051[iVar46], -1)) && PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051[iVar46], -1)))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[iVar46]);
				}
			}
		}
		if (iLocal_37 < (iLocal_666 - 1))
		{
			iLocal_37++;
		}
		else
		{
			iLocal_37 = 0;
		}
		iVar46 = iLocal_37;
		if (!PED::IS_PED_INJURED(iLocal_666[iVar46]))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_655, 432954108) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_655, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_655) == iLocal_77) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_655, Local_79, 1f, 1f, 2f, 0, 1, 0))) || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 432954108) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_658) == iLocal_78) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_658, Local_82, 1f, 1f, 2f, 0, 1, 0))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_666[iVar46], 1), 1) < 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), ENTITY::GET_ENTITY_COORDS(iLocal_666[iVar46], 1), 1) < 50f)
				{
					iVar48 = iVar46;
				}
			}
		}
		iVar46 = 0;
		while (iVar46 < iLocal_666)
		{
			if (!PED::IS_PED_INJURED(iLocal_666[iVar46]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_666[iVar46], 1))
				{
					PED::SET_PED_RESET_FLAG(iLocal_666[iVar46], 282, 1);
				}
			}
			iVar46++;
		}
		if (!func_644(16) && SYSTEM::TIMERA() > 1000)
		{
			MISC::SET_FAKE_WANTED_LEVEL(5);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[1], 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[1], 4, sLocal_560, 1);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[1], 1);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1051[1], 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[0], 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[0], 3, sLocal_560, 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[0]);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1051[0], 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[2], 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[2], 5, sLocal_560, 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[2]);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1051[2], 1);
			func_643(16, 1);
		}
		if (!func_644(17))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5334.146f, -5195.717f, 80.342f, 5324.581f, -5173.136f, 87.0081f, 10f, 0, 1, 0) || MISC::GET_GAME_TIMER() > iLocal_75)
			{
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[0]);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[0], 1);
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[2]);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[2], 1);
				if (!PED::IS_PED_INJURED(iLocal_666[6]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[6], 5366.336f, -5184.451f, 81.5742f, 2f, 1, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[6], 100f, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_666[8]))
				{
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_666[8], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[8], 50, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_666[8], 286, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[8], 100f, 0);
				}
				func_643(17, 1);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_666[6]))
			{
				if (!func_644(1))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_COORDS(iLocal_666[6], 1), 1) < 10f || ENTITY::GET_ENTITY_HEALTH(iLocal_666[6]) < PED::GET_PED_MAX_HEALTH(iLocal_666[6])) || iVar47 >= 3)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_666[6], 0);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_666[6], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[6], 50, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[6], 100f, 0);
						func_643(1, 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_666[0]))
			{
				if (!func_644(0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_COORDS(iLocal_666[0], 1), 1) < 8f)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_666[0], 0);
						func_643(0, 1);
					}
				}
			}
			if (!func_644(18))
			{
				if (((iVar47 > 3 && ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_560) / 100f) * 95f)) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]))) && ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_560) / 100f) * 95f)) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]))) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5354.345f, -5188.611f, 87.81207f, 5367.501f, -5188.863f, 79.54218f, 70f, 0, 1, 0))
				{
					func_643(18, 1);
				}
			}
		}
		if (!bLocal_1985)
		{
			if (!func_644(236))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5336.452f, -5185.2f, 92.82875f, 21f, 20f, 13f, 0, 1, 0) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_374(221, "PRO_TEAM", 7500, 0);
					func_643(236, 1);
				}
			}
			if ((!ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5323.854f, -5194.2f, 93.5186f, 41f, 36f, 13f, 0, 1, 0) && iVar49 == 1) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5301.347f, -5180.395f, 84.01892f, 4f, 3f, 1.5f, 0, 1, 0))
			{
				iLocal_1253 = 13;
				func_626();
			}
		}
		else
		{
			if (!func_644(44))
			{
				func_407(17);
				func_693(15);
				func_643(44, 1);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5301.347f, -5180.395f, 84.01892f, 4f, 3f, 1.5f, 0, 1, 0))
			{
				iLocal_1253 = 13;
				func_626();
			}
		}
		if (iLocal_77 != -1)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_655, 242628503) != 1)
			{
				iLocal_77 = -1;
			}
		}
		if (iLocal_78 != -1)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 242628503) != 1)
			{
				iLocal_78 = -1;
			}
		}
		func_544();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_655, 432954108) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_655, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_655) == iLocal_77) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_655, Local_79, 1f, 1f, 2f, 0, 1, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_666[iVar48]))
			{
				PED::SET_PED_SHOOTS_AT_COORD(iLocal_655, ENTITY::GET_ENTITY_COORDS(iLocal_666[iVar48], 1), 0);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_655, 242628503) == 1)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_655, 1) - Vector(0.25f, 0f, 0f), 1f, 1f, 2f, 0, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_655);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_655, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_655, 500f, 0);
					}
				}
			}
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 432954108) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_658) == iLocal_78) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_658, Local_82, 1f, 1f, 2f, 0, 1, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_666[iVar48]))
			{
				PED::SET_PED_SHOOTS_AT_COORD(iLocal_658, ENTITY::GET_ENTITY_COORDS(iLocal_666[iVar48], 1), 0);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 242628503) == 1)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_658, 1) - Vector(0.25f, 0f, 0f), 1f, 1f, 2f, 0, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_658);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_658, 500f, 0);
					}
				}
			}
		}
		switch (iLocal_1986)
		{
			case 0:
				if (func_644(17))
				{
					if (!func_644(244))
					{
						if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[0], 1);
							func_643(244, 1);
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_489(&(iLocal_666[0])))
						{
							if (!func_644(29))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_666[0], 5344.272f, -5180.306f, 81.7773f, 2f, 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[0], 100f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[0], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[0], 3, 1);
								func_643(29, 1);
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[0]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_489(&(iLocal_666[1])))
						{
							if (!func_644(30))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[1], 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[1], 1000f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[1], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[1], 3, 1);
								func_643(30, 1);
							}
						}
					}
				}
				if (func_644(16))
				{
					if (!func_644(245))
					{
						if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[1]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[1]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[1]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[1], 1);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[1], 0);
							func_643(245, 1);
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[1]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[1]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[1]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_489(&(iLocal_666[2])))
						{
							if (!func_644(31))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[2], 100f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[2], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[2], 3, 1);
								func_643(31, 1);
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[1]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[1]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[1]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_489(&(iLocal_666[3])))
						{
							if (!func_644(32))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[3], 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[3], 1000f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[3], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[3], 3, 1);
								func_643(32, 1);
							}
						}
					}
				}
				if (func_644(17))
				{
					if (!func_644(246))
					{
						if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[2], 1);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[2], 0);
							func_643(246, 1);
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_560) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_489(&(iLocal_666[4])))
						{
							if (!func_644(33))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[4], 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[4], 1000f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[4], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[4], 3, 1);
								func_643(33, 1);
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[2]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!func_489(&(iLocal_666[5])))
						{
							if (!func_644(34))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[5], 100f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[5], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[5], 3, 1);
								func_643(34, 1);
							}
						}
					}
				}
				if ((((((func_489(&(iLocal_666[0])) || !PED::IS_PED_IN_VEHICLE(iLocal_666[0], iLocal_1051[0], 0)) && (func_489(&(iLocal_666[1])) || !PED::IS_PED_IN_VEHICLE(iLocal_666[1], iLocal_1051[0], 0))) && (func_489(&(iLocal_666[2])) || !PED::IS_PED_IN_VEHICLE(iLocal_666[2], iLocal_1051[1], 0))) && (func_489(&(iLocal_666[3])) || !PED::IS_PED_IN_VEHICLE(iLocal_666[3], iLocal_1051[1], 0))) && (func_489(&(iLocal_666[4])) || !PED::IS_PED_IN_VEHICLE(iLocal_666[4], iLocal_1051[2], 0))) && (func_489(&(iLocal_666[5])) || !PED::IS_PED_IN_VEHICLE(iLocal_666[5], iLocal_1051[2], 0)))
				{
					iLocal_1986++;
				}
				break;
			
			case 1:
				if (bLocal_1985 == 1)
				{
					func_419(&iLocal_1097);
					if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						func_495(208, "PRO_RunToCar", 7, 0, 0, 0);
						func_643(106, 1);
						iLocal_1986++;
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							func_398(99, "PROHLP_SPRINT_KM", 1, -1, 2000);
						}
						else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							func_398(99, "PROHLP_SPRINT_FP", 1, -1, 2000);
						}
						else
						{
							func_398(99, "PROHLP_SPRINT", 1, -1, 2000);
						}
						iLocal_1986++;
					}
				}
				break;
			
			case 3:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
					{
						func_398(98, "PROHLP_RUNANDGUN", 1, -1, 2000);
						iLocal_1986++;
					}
				}
				break;
		}
		switch (iLocal_1987)
		{
			case 0:
				if (bLocal_1985 == 1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5338.454f, -5212.938f, 81.76202f, 5338.228f, -5161.655f, 86.76202f, 35f, 0, 1, 0))
				{
					if (!func_543(&(iLocal_1051[0])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[0], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[0], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_1051[0], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!func_543(&(iLocal_1051[1])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[1], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[1], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_1051[1], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!func_543(&(iLocal_1051[2])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[2]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[2], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[2]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[2], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_1051[2], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!func_543(&(iLocal_1072[0])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1072[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1072[0], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1072[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1072[0], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_1072[0], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!func_543(&(iLocal_1072[1])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1072[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1072[1], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1072[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1072[1], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_1072[1], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_1987++;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					func_495(121, "PRO_Combat2", 7, 1, 0, 0);
				}
				if (PED::IS_PED_INJURED(iLocal_666[9]) && PED::IS_PED_INJURED(iLocal_666[10]))
				{
					iLocal_1987++;
				}
				break;
		}
		if (iLocal_1988 > 0)
		{
			if (!func_644(247))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[3]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[3]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(6, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[3]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[3], 1);
					func_643(247, 1);
				}
			}
			if (!func_644(295))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[3]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[3]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(6, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[3]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[9]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[9], 100f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[9], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[9], 3, 1);
						func_643(295, 1);
					}
				}
			}
			if (!func_644(288))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[3]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[3]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(6, sLocal_560) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[3]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_666[10]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[10], 100f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[10], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[10], 3, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_666[10], 1);
						PED::SET_PED_MAX_HEALTH(iLocal_666[10], 215);
						ENTITY::SET_ENTITY_HEALTH(iLocal_666[10], 215);
						func_643(288, 1);
					}
				}
			}
		}
		if (iLocal_1988 > 1)
		{
			if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				func_495(122, "PRO_Combat3", 7, 1, 0, 0);
			}
		}
		switch (iLocal_1988)
		{
			case 0:
				if (bLocal_1985 == 1 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_657, 5364.965f, -5187.168f, 89.64108f, 5477.842f, -5189.212f, 75.91235f, 100f, 0, 1, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[3], 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[3], 6, sLocal_560, 1);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[3], 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[3], 1500f);
					iLocal_1988++;
				}
				break;
			
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1051[3]) && ENTITY::DOES_ENTITY_EXIST(iLocal_654))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1051[3], 1), 1) <= 17.5f || (PED::IS_PED_INJURED(iLocal_666[9]) && PED::IS_PED_INJURED(iLocal_666[10])))
					{
						func_419(&iLocal_1097);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[4], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[4], 8, sLocal_560, 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[4], 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[4], 3000f);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[5], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[5], 9, sLocal_560, 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[5], 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[4], 2000f);
						iLocal_1988++;
					}
				}
				break;
			
			case 2:
				if (!func_644(248))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[4]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[4], 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[4], 0);
						func_643(248, 1);
					}
				}
				if (!func_644(289))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[4]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_666[11]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[11], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[11], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[11], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[11], 3, 1);
							func_643(289, 1);
						}
					}
				}
				if (!func_644(290))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[4]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_560) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_666[12]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[12], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[12], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[12], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[12], 3, 1);
							func_643(290, 1);
						}
					}
				}
				if (!func_644(249))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[5]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[5], 1);
						func_643(249, 1);
					}
				}
				if (!func_644(291))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[5]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_666[13]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[13], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[13], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[13], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[13], 3, 1);
							func_643(291, 1);
						}
					}
				}
				if (!func_644(292))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[5]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_560) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_666[14]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[14], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[14], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[14], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[14], 3, 1);
							func_643(292, 1);
						}
					}
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[4]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[5]))
				{
					iLocal_1988++;
				}
				break;
			
			case 3:
				if (PED::IS_PED_INJURED(iLocal_666[9]) && PED::IS_PED_INJURED(iLocal_666[10]))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_1988++;
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[4]))
				{
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Explosions_Cop_Car", 0);
				}
				if (iLocal_1242 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_1242))
					{
						AUDIO::STOP_SOUND(iLocal_1242);
						AUDIO::RELEASE_SOUND_ID(iLocal_1242);
						iLocal_1242 = -1;
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Explosions_Cop_Car");
					}
				}
				if ((((PED::IS_PED_INJURED(iLocal_666[11]) && PED::IS_PED_INJURED(iLocal_666[12])) && PED::IS_PED_INJURED(iLocal_666[13])) && PED::IS_PED_INJURED(iLocal_666[14])) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5473.072f, -5128.806f, 80.06776f, 56f, 43f, 5f, 0, 1, 0))
				{
					if (!func_543(&(iLocal_1051[3])))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_1051[3], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!func_543(&(iLocal_1051[4])))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_1051[4], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!func_543(&(iLocal_1051[5])))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_1051[5], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					func_478(&iLocal_1096, &iLocal_1050, 0);
					func_693(17);
					SYSTEM::SETTIMERA(0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051[6], 0);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[6], 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1051[6], 11, sLocal_560, 1);
					iLocal_1988++;
				}
				break;
			
			case 5:
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)) || SYSTEM::TIMERA() > 10000)
				{
					func_374(112, "PRO_CAR1", 7500, 0);
					if (!GlobalFunc_111())
					{
						func_495(186, "PRO_ToCar", 7, 1, 1, 0);
					}
					SYSTEM::SETTIMERA(0);
					iLocal_1988++;
				}
				break;
			
			case 6:
				if (!func_644(250))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[6]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[6]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[6]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[6], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(11, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_1051[6], 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1051[6], 0);
						func_643(250, 1);
					}
				}
				if (!func_644(293))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[6]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[6]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_560) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[6]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[6], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(11, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_666[15]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[15], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[15], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[15], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[15], 3, 1);
							func_643(293, 1);
						}
					}
				}
				if (!func_644(294))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[6]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1051[6]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_560) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1051[6]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_1051[6], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(11, 0f, sLocal_560), 5f, 5f, 5f, 0, 1, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_666[16]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_666[16], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_666[16], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[16], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_666[16], 3, 1);
							func_643(294, 1);
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_666[15]) && PED::IS_PED_INJURED(iLocal_666[16]))
				{
					iLocal_1988++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 7:
				if (!func_543(&(iLocal_1051[6])))
				{
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[6]) < 500f)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[6], 500f);
					}
					if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[6]) < 500f)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[6], 500f);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_1051[6], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!GlobalFunc_236() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_495(208, "PRO_RunToCar", 7, 0, 0, 0);
					func_377();
				}
				break;
		}
		if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if (func_644(186))
			{
				func_495(187, "PRO_RespCar", 7, 1, 0, 0);
			}
		}
		if (iLocal_1988 > 0 || iLocal_28 == 4)
		{
			if (!Local_1714.f_20)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_644(103))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5474.493f, -5165.289f, 72.70976f, 5364.622f, -5163.03f, 101.9091f, 100f, 0, 1, 0))
						{
							func_398(103, "PROHLP_SWITCH6", 1, -1, 2000);
						}
					}
				}
				if (GlobalFunc_10061(&uLocal_1670, 1, 1))
				{
					if (!GlobalFunc_751(&uLocal_1670, 3))
					{
						GlobalFunc_565(463, 1, 0);
						if (GlobalFunc_74("PROHLP_SWITCH6"))
						{
							GlobalFunc_2238(1);
						}
						Local_1714.f_12 = uLocal_1670[uLocal_1670.f_7];
						Local_1714.f_20 = 1;
						if ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PAD::IS_CONTROL_PRESSED(0, 25)) || PAD::IS_CONTROL_PRESSED(0, 69))
						{
							func_643(253, 1);
						}
						GlobalFunc_2518(&uLocal_1670, 2, 0);
					}
				}
			}
			else if (func_505(&Local_1714, 0, 1148829696, 1148829696))
			{
				if (Local_1714.f_18)
				{
					if (!Local_1714.f_19)
					{
						if (func_13(&uLocal_1670, 1, 1, 0))
						{
							func_696();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5352.877f, -5184.861f, 80.78445f, 5322.01f, -5184.812f, 87.51882f, 23f, 0, 1, 0))
							{
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(iLocal_654);
							}
							func_624();
							GlobalFunc_173(&uLocal_1748, 1, iLocal_656, "MICHAEL", 0, 1);
							GlobalFunc_173(&uLocal_1748, 2, iLocal_657, "TREVOR", 0, 1);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[2]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[2], iLocal_1230);
							}
							PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(iLocal_656, iLocal_658, 5f, 0f, 5f, -5f, 0f, -5f, 5f, 1, 0);
							PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(iLocal_657, iLocal_658, 5f, 0f, 5f, -5f, 0f, -5f, 5f, 1, 0);
							func_419(&iLocal_1092);
							func_419(&iLocal_1093);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
							{
								func_482(&iLocal_1092, &(uLocal_1670[0]), 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1670[0], 36, 1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[2]))
							{
								func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1670[2], 36, 1);
							}
							PED::SET_PED_FIRING_PATTERN(iLocal_655, 445831135);
							if (func_644(253))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_655, 1000f, 0);
							}
							else
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_655, 1000f, 134217728);
							}
							func_643(253, 0);
							Local_1714.f_19 = 1;
						}
					}
				}
			}
			if ((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::_0x3044240D2E0FA842()) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_654, -1442466670) == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_654);
			}
		}
		if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_36)
			{
				if (iLocal_30[iLocal_29] == -1)
				{
					iLocal_30[iLocal_29] = 6;
				}
				else if (iLocal_30[iLocal_29] > 0)
				{
					iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000));
					iLocal_30[iLocal_29] = (iLocal_30[iLocal_29] - 1);
					if (iLocal_29 == 0)
					{
						func_495(124, "PRO_CombatM", 7, 0, 0, 0);
						iLocal_29++;
					}
					else if (iLocal_29 == 1)
					{
						func_495(125, "PRO_CombatT", 7, 0, 0, 0);
						iLocal_29++;
					}
					else if (iLocal_29 == 2)
					{
						func_495(123, "PRO_CombatB", 7, 0, 0, 0);
						iLocal_29 = 0;
					}
				}
			}
		}
		if (!func_644(96))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_654, &iVar51, 1);
			WEAPON::GET_AMMO_IN_CLIP(iLocal_654, iVar51, &iVar50);
			if (WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_654, iVar51, 1) > 1)
			{
				if (iVar50 <= (WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_654, iVar51, 1) / 5) * 4)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_398(96, "PROHLP_RELOAD", 1, -1, 2000);
					}
				}
			}
		}
		else if (GlobalFunc_74("PROHLP_RELOAD") && MISC::GET_GAME_TIMER() > iLocal_40)
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_654, &iVar51, 1);
			WEAPON::GET_AMMO_IN_CLIP(iLocal_654, iVar51, &iVar50);
			if (iVar50 > (WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_654, iVar51, 1) / 5) * 4)
			{
				GlobalFunc_2238(1);
			}
		}
		if (iLocal_1988 > 5)
		{
			if (!func_543(&(iLocal_1051[3])))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[3]) < -100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[3], -100f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[3]) < -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[3], -100f);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_1051[3], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (!func_543(&(iLocal_1051[4])))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[4]) < -100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[4], -100f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[4]) < -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[4], -100f);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_1051[4], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (!func_543(&(iLocal_1051[5])))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1051[5]) < -100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1051[5], -100f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[5]) < -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1051[5], -100f);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_1051[5], 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
		if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_655, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_658, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, 0, 1, 0))
		{
			if (!func_644(238))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1050, 5425.954f, -5116.231f, 76.60962f, 5434.421f, -5113.642f, 79.72491f, 5f, 0, 1, 0) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1050))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1050, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1050, 26, sLocal_560, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1050, 500f);
				}
				func_643(238, 1);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_655, 5341.267f, -5218.448f, 83.83739f, 1.5f, 7.5f, 2.5f, 0, 1, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 1) > 50f)
			{
				GlobalFunc_2510(iLocal_655, 5343.741f, -5209.257f, 81.7604f, 317.6852f, 1);
			}
		}
	}
	if (func_361())
	{
		MISC::SET_GAME_PAUSED(0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor3"));
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_657);
		if (iLocal_1242 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1242);
			AUDIO::RELEASE_SOUND_ID(iLocal_1242);
			iLocal_1242 = -1;
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Explosions_Cop_Car");
		if (AUDIO::IS_ALARM_PLAYING("PROLOGUE_VAULT_ALARMS"))
		{
			AUDIO::STOP_ALARM("PROLOGUE_VAULT_ALARMS", 1);
		}
		INTERIOR::UNPIN_INTERIOR(iLocal_1162);
		MISC::SET_FAKE_WANTED_LEVEL(0);
		iVar52 = 0;
		while (iVar52 < iLocal_1207)
		{
			TASK::REMOVE_COVER_POINT(iLocal_1207[iVar52]);
			iVar52++;
		}
		func_419(&iLocal_1097);
		func_419(&iLocal_1098);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		if (CAM::DOES_CAM_EXIST(uLocal_1159))
		{
			CAM::DESTROY_CAM(uLocal_1159, 0);
		}
		GlobalFunc_2241(&iLocal_1178);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1168))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1168);
		}
		GlobalFunc_2241(&iLocal_1184);
		GlobalFunc_200(&uLocal_1748, 4);
		iVar52 = 0;
		while (iVar52 < iLocal_666)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar52]))
			{
				if (!PED::IS_PED_INJURED(iLocal_666[iVar52]))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_666[iVar52], 1);
					AUDIO::STOP_PED_SPEAKING(iLocal_666[iVar52], 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_666[iVar52], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_666[iVar52]));
			}
			iVar52++;
		}
		iVar52 = 0;
		while (iVar52 < iLocal_1051)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1051[iVar52]))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_1051[iVar52], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			iVar52++;
		}
		if (PED::IS_PED_IN_GROUP(iLocal_655))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_655);
		}
		if (PED::IS_PED_IN_GROUP(iLocal_658))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_658);
		}
		iLocal_1252++;
	}
}

int func_505(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x65362
{
	return func_506(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

int func_506(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x65383
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
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
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





































int func_543(var uParam0)//Position - 0x67371
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_544()//Position - 0x67392
{
	switch (iLocal_1989)
	{
		case 0:
			iLocal_1989 = 1;
			break;
		
		case 1:
			if (!func_644(63))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_655, sLocal_582, "duck_shutter_player0", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_655, sLocal_582, "duck_shutter_player0", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_655, sLocal_582, "duck_shutter_player0") > 0.784f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_655);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_655, 5336.793f, -5193.34f, 81.9088f, 2f, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_655, 5329.657f, -5195.141f, 81.703f, 2f, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 5322.729f, -5195.13f, 82.519f, 5343.35f, -5190.207f, 82.777f, 2f, 0, 0.5f, 4f, 0, 1, 0, -957453492);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 5328.259f, -5195.131f, 81.6819f, 2f, 20000, 40000f, 1056964608);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_655, uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					iLocal_77 = 1;
					Local_79 = { ENTITY::GET_ENTITY_COORDS(iLocal_655, 1) };
					PED::SET_PED_ACCURACY(iLocal_655, 2);
					func_643(63, 1);
				}
			}
			if (!func_644(9))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_582, "duck_shutter_brad", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_582, "duck_shutter_brad", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_658, sLocal_582, "duck_shutter_brad") > 0.95f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_658);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_658, 5331.988f, -5191.756f, 81.7708f, 2f, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_SHOOT_AT_COORD(0, 5343.35f, -5190.207f, 82.777f, 1000, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 5323.035f, -5192.445f, 82.519f, 5343.35f, -5190.207f, 82.777f, 1f, 0, 0.5f, 4f, 0, 1, 0, -957453492);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 5325.671f, -5191.868f, 81.7683f, 2f, 20000, 40000f, 1056964608);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_658, uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					iLocal_78 = 2;
					Local_82 = { ENTITY::GET_ENTITY_COORDS(iLocal_658, 1) };
					PED::SET_PED_ACCURACY(iLocal_658, 2);
					func_643(9, 1);
				}
			}
			if (func_644(63) && func_644(9))
			{
				iLocal_1989 = 2;
			}
			break;
		
		case 2:
			if (bLocal_1985)
			{
				func_545(iLocal_655, 5353.963f, -5190.479f, 81.7737f);
				func_545(iLocal_658, 5355.972f, -5186.069f, 81.784f);
				iLocal_1989 = 3;
			}
			break;
		
		case 3:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5356.732f, -5201.155f, 80.83122f, 5356.545f, -5179.6f, 96.83691f, 20f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5417.894f, -5108.792f, 75.56319f, 5412.488f, -5240.66f, 95.59789f, 100f, 0, 1, 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_666[9], 1) && PED::IS_PED_DEAD_OR_DYING(iLocal_666[10], 1)))
			{
				func_545(iLocal_655, 5373.137f, -5189.15f, 81.2204f);
				func_545(iLocal_658, 5372.17f, -5182.887f, 81.2387f);
				iLocal_1989 = 4;
			}
			break;
		
		case 4:
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_666[9], 1) && PED::IS_PED_DEAD_OR_DYING(iLocal_666[10], 1))
			{
				func_545(iLocal_655, 5383.888f, -5184.417f, 80.3353f);
				func_545(iLocal_658, 5384.172f, -5190.807f, 80.5079f);
				iLocal_1989 = 5;
			}
			break;
		
		case 5:
			if (PED::IS_PED_INJURED(iLocal_666[11]) && PED::IS_PED_INJURED(iLocal_666[12]))
			{
				iLocal_1989 = 6;
			}
			break;
		
		case 6:
			func_545(iLocal_655, 5398.961f, -5178.006f, 79.4069f);
			func_545(iLocal_658, 5400.827f, -5180.272f, 79.3336f);
			iLocal_1989 = 7;
			break;
		
		case 7:
			if (((PED::IS_PED_DEAD_OR_DYING(iLocal_666[11], 1) && PED::IS_PED_DEAD_OR_DYING(iLocal_666[12], 1)) && PED::IS_PED_DEAD_OR_DYING(iLocal_666[13], 1)) && PED::IS_PED_DEAD_OR_DYING(iLocal_666[14], 1))
			{
				func_545(iLocal_655, 5417.76f, -5175.646f, 78.1579f);
				func_545(iLocal_658, 5417.438f, -5168.917f, 77.9954f);
				iLocal_1989 = 8;
			}
			break;
		
		case 8:
			iLocal_1989 = 9;
			break;
		
		case 9:
			break;
	}
}

void func_545(int iParam0, struct<3> Param1)//Position - 0x6787D
{
	float fVar0;
	int iVar1;
	
	fVar0 = 5f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 500);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, 0);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, 1);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, fVar0, 0, 0);
		if (!PED::IS_PED_IN_COMBAT(iParam0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			TASK::TASK_AIM_GUN_AT_COORD(0, Param1 - Vector(1f, 0f, 0f), iVar1, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 1000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_1161);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
		}
	}
}


int func_547(int iParam0, char* sParam1)//Position - 0x67923
{
	if (!func_549(iParam0, sParam1))
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			func_548(iParam0, sParam1, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_548(int iParam0, char* sParam1, bool bParam2)//Position - 0x6795E
{
	char cVar0[16];
	int iVar4;
	int iVar5;
	bool bVar6;
	
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar4 = MISC::GET_HASH_KEY(&cVar0);
	iVar5 = 0;
	bVar6 = false;
	while (iVar5 < iLocal_1613 && !bVar6)
	{
		if (bParam2)
		{
			if (iLocal_1613[iVar5] == 0)
			{
				iLocal_1613[iVar5] = iVar4;
				bVar6 = true;
			}
		}
		else if (iLocal_1613[iVar5] == iVar4)
		{
			iLocal_1613[iVar5] = 0;
			bVar6 = true;
		}
		iVar5++;
	}
}

int func_549(int iParam0, char* sParam1)//Position - 0x679D0
{
	char cVar0[16];
	int iVar4;
	int iVar5;
	
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar4 = MISC::GET_HASH_KEY(&cVar0);
	iVar5 = 0;
	while (iVar5 < iLocal_1613)
	{
		if (iLocal_1613[iVar5] == iVar4)
		{
			return 1;
		}
		iVar5++;
	}
	return 0;
}

void func_550()//Position - 0x67A11
{
	int iVar0;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_88 = 1;
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_654, iLocal_1227, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_654, iLocal_1227, 500, 1, 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SNOW_FOOTSTEPS", 0) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ICE_FOOTSTEPS", 0))
		{
			func_387(0, 0);
		}
		if (!GlobalFunc_111())
		{
			func_495(126, "PRO_Cover", 7, 1, 0, 0);
		}
		func_484(&iLocal_1098, 5320.226f, -5186.128f, 82.5187f, 0);
		if (func_417())
		{
			GlobalFunc_2510(iLocal_654, 5317.109f, -5182.126f, 82.5186f, 201.2845f, 0);
			GlobalFunc_2510(uLocal_1670[0], 5320.071f, -5187.523f, 82.5186f, 97.2528f, 0);
			GlobalFunc_2510(iLocal_658, 5316.591f, -5187.215f, 82.5186f, 269.9326f, 0);
			uLocal_644 = PED::CREATE_SYNCHRONIZED_SCENE(Local_646, Local_649, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[0], uLocal_644, sLocal_581, "set_c4_end_loop_player0", 1000f, -2f, 5, 51, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_644, sLocal_581, "set_c4_end_loop_brad", 1000f, -2f, 5, 51, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_644, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) >= 1f)
		{
			uLocal_644 = PED::CREATE_SYNCHRONIZED_SCENE(Local_646, Local_649, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[0], uLocal_644, sLocal_581, "set_c4_end_loop_player0", 1000f, -2f, 5, 51, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_644, sLocal_581, "set_c4_end_loop_brad", 1000f, -2f, 5, 51, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_644, 1);
		}
		switch (iLocal_28)
		{
			case 0:
				if (!GlobalFunc_111())
				{
					if (!func_644(218))
					{
						func_374(218, "PRO_SHUTTER", 7500, 1);
						func_484(&iLocal_1098, 5320.226f, -5186.128f, 82.5187f, 0);
						HUD::SET_BLIP_COLOUR(iLocal_1098, 2);
					}
					else if (!GlobalFunc_663("PRO_SHUTTER", 0, 0))
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
						{
							switch (iLocal_29)
							{
								case 0:
									if (MISC::GET_GAME_TIMER() > iLocal_36)
									{
										func_362(178, "PRO_Under", "PRO_Under_1", 6, 1, 0, 0);
										if (!GlobalFunc_111())
										{
											iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											iLocal_29++;
										}
									}
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > iLocal_36)
									{
										func_362(179, "PRO_Under", "PRO_Under_2", 6, 1, 0, 0);
										if (!GlobalFunc_111())
										{
											iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											iLocal_29++;
										}
									}
									break;
								}
							}
						}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5318.19f, -5187.578f, 84.26867f, 2.5f, 4f, 1.75f, 0, 1, 0) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_587, "walk", 3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5318.19f, -5187.578f, 84.26867f, 10f, 10f, 1.75f, 0, 1, 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5320.486f, -5186.874f, 82.51864f, 5315.874f, -5186.868f, 86.01864f, 3f, 0, 1, 0))
				{
					func_419(&iLocal_1098);
					if (GlobalFunc_663("PRO_SHUTTER", 0, 0))
					{
						GlobalFunc_635("PRO_SHUTTER");
					}
					TASK::CLEAR_PED_TASKS(iLocal_654);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_654, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_582, "press_button_player2", Local_646 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_649, 0, 2), 1f, 20000, 0.25f, 516, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_582, "press_button_player2", Local_646 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_649, 0, 2)));
					CAM::SET_GAMEPLAY_COORD_HINT(5320.464f, -5186.746f, 84.1165f, 2000, 2000, 2000, 1511508800);
					func_406();
				}
				break;
			
			case 1:
				if (!func_644(255))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_582, "press_button_player2", Local_646 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_649, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0))
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							uLocal_645 = PED::CREATE_SYNCHRONIZED_SCENE(Local_646 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_649, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_654, uLocal_645, sLocal_582, "press_button_player2", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_645, 0);
							func_643(255, 1);
						}
						else
						{
							uLocal_645 = PED::CREATE_SYNCHRONIZED_SCENE(Local_646 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_649, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_654, uLocal_645, sLocal_582, "press_button_player2", 8f, -1.5f, 4, 0, 8f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_645, 0);
							func_643(255, 1);
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645) || (func_644(255) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645)))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (!func_644(219))
						{
							func_495(218, "PRO_Shutter", 7, 0, 0, 0);
							func_643(219, 1);
						}
						func_406();
					}
					else if (!GlobalFunc_5672("PRO_Shutter"))
					{
						GlobalFunc_5105();
					}
				}
				break;
			
			case 2:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_645) > 0.178f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3))
						{
							ENTITY::PLAY_ENTITY_ANIM(iLocal_1170, "GDoor_Open", sLocal_561, 1000f, 0, 1, 0, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open", 0f);
							ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_1170, sLocal_561, "GDoor_Open", 1f);
						}
					}
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_pro_door_snow", 5320.537f, -5188.555f, 82.51863f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
					}
					RECORDING::_0x293220DA1B46CEBC(0.5f, 5f, 3);
					func_406();
				}
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1170, sLocal_561, "GDoor_Open", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1170, sLocal_561, "GDoor_Open") >= 0.05f)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[0], sLocal_582, "duck_shutter_player0", Local_646, Local_649, 8f, -1.5f, -1, 790536, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_658, sLocal_582, "duck_shutter_brad", Local_646, Local_649, 4f, -1.5f, -1, 790536, 0.221f, 2, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1178, uLocal_1670[0], 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1178, iLocal_658, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_1670[0], iLocal_1178, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_658, iLocal_1178, 0);
						func_406();
					}
				}
				break;
			
			case 4:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_645) >= 0.5f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_645))
				{
					func_377();
				}
				break;
		}
		if (SYSTEM::TIMERA() < 10000)
		{
			if (!func_644(10))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5320.42f, -5182.821f, 82.51867f, 5315.878f, -5182.867f, 85.51867f, 3.5f, 0, 1, 0) && !PED::IS_PED_IN_COVER(iLocal_654, 0)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654))
				{
					GlobalFunc_5653(iLocal_654, "COUGH", "WAVELOAD_PAIN_MALE", 24);
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						TASK::TASK_PLAY_ANIM(iLocal_654, sLocal_587, "walk", 4f, -4f, -1, 48, 0, 0, 0, 0);
					}
					func_643(10, 1);
				}
			}
		}
		if (iLocal_28 >= 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_587, "walk", 3))
		{
			PED::SET_PED_CAPSULE(iLocal_654, 0.75f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1205))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1204)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1205, 0);
			}
		}
		PED::SET_PED_RESET_FLAG(iLocal_654, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (func_361())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
		}
		iVar0 = 0;
		while (iVar0 < iLocal_1218)
		{
			TASK::REMOVE_COVER_POINT(iLocal_1218[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_1213)
		{
			TASK::REMOVE_COVER_POINT(iLocal_1213[iVar0]);
			iVar0++;
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_665);
		GlobalFunc_200(&uLocal_1748, 4);
		if (iLocal_1238 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1238);
			AUDIO::RELEASE_SOUND_ID(iLocal_1238);
			iLocal_1238 = -1;
		}
		if (iLocal_1239 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1239);
			AUDIO::RELEASE_SOUND_ID(iLocal_1239);
			iLocal_1239 = -1;
		}
		if (iLocal_1240 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1240);
			AUDIO::RELEASE_SOUND_ID(iLocal_1240);
			iLocal_1240 = -1;
		}
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1205))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1205, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1206))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1206, 0);
		}
		iLocal_1252++;
	}
}


void func_552()//Position - 0x68491
{
	int iVar0;
	int iVar1;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		GlobalFunc_139();
		PED::SET_PED_TO_LOAD_COVER(iLocal_656, 0);
		PED::SET_PED_TO_LOAD_COVER(iLocal_658, 0);
		PED::SET_PED_STEERS_AROUND_PEDS(iLocal_656, 0);
		iLocal_88 = 1;
		func_484(&iLocal_1098, 5313.59f, -5177.683f, 82.5186f, 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
		uLocal_1234 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) != 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234, 2);
			}
		}
		if (func_417())
		{
			GlobalFunc_2510(iLocal_654, 5306.587f, -5179.83f, 82.5187f, 269.0729f, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[0]);
			TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[0], sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 2f, -8f, -1, 790537, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[0], 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_658);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_658, sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 8f, -8f, -1, 790537, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[0], sLocal_579, "set_c4_start_loop_a_player0", 3) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
		{
			PED::SET_PED_CAPSULE(iLocal_656, 0.75f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[0], 5294.824f, -5194.945f, 82.51883f, 5294.976f, -5177.935f, 85.51878f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_658, 5294.824f, -5194.945f, 82.51883f, 5294.976f, -5177.935f, 85.51878f, 4f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
			PED::SET_PED_RESET_FLAG(iLocal_654, 102, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 2f);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				func_398(97, "PROHLP_RUN_KM", 1, -1, 2000);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
			{
				func_398(97, "PROHLP_RUN", 1, -1, 2000);
			}
		}
		if (MISC::IS_PC_VERSION())
		{
			if (GlobalFunc_74("PROHLP_RUN_KM"))
			{
				if (TASK::IS_PED_RUNNING(iLocal_657))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_40)
					{
						GlobalFunc_2238(1);
					}
				}
			}
		}
		if (GlobalFunc_74("PROHLP_RUN"))
		{
			if (TASK::IS_PED_RUNNING(iLocal_657))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_40)
				{
					GlobalFunc_2238(1);
				}
			}
		}
		if (GlobalFunc_74("PROHLP_RUN_FP"))
		{
			if (TASK::IS_PED_RUNNING(iLocal_657))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_40)
				{
					GlobalFunc_2238(1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[0], PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2), 1f, 1f, 2f, 0, 1, 0))
		{
			uLocal_59[0] = MISC::GET_GAME_TIMER() + 1500;
		}
		if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_658, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 0, 2), 1f, 1f, 2f, 0, 1, 0))
		{
			uLocal_59[2] = MISC::GET_GAME_TIMER() + 1500;
		}
		if (!func_644(4))
		{
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[0], sLocal_579, "set_c4_start_loop_a_player0", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_579, "set_c4_start_loop_a_brad", 3)) && MISC::GET_GAME_TIMER() > uLocal_59[0]) && MISC::GET_GAME_TIMER() > uLocal_59[2])
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
				{
					uLocal_637 = PED::CREATE_SYNCHRONIZED_SCENE(Local_638, Local_641, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[0], uLocal_637, sLocal_579, "set_c4_start_loop_a_player0", 4f, -2f, 5, 51, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_637, sLocal_579, "set_c4_start_loop_a_brad", 4f, -2f, 5, 51, 4f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_637, 1);
					func_643(4, 1);
				}
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5320.482f, -5177.932f, 82.51865f, 5306.32f, -5177.905f, 85.52598f, 12f, 0, 1, 0))
				{
					if (!func_644(119))
					{
						func_419(&iLocal_1098);
						func_484(&iLocal_1098, 5313.59f, -5177.683f, 82.5186f, 0);
						func_374(119, "PRO_COVER1", 7500, 1);
						func_398(83, "PROHLP_COVER1", 1, -1, 2000);
						iVar0 = 0;
						while (iVar0 < iLocal_1213)
						{
							TASK::REMOVE_COVER_POINT(iLocal_1213[iVar0]);
							iVar0++;
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5317.699f, -5175.994f, 82.5187f))
						{
							iLocal_1213[0] = TASK::ADD_COVER_POINT(5317.699f, -5175.994f, 82.5187f, 187.3502f, 0, 0, 0, 1);
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5314.707f, -5175.741f, 82.5187f))
						{
							iLocal_1213[1] = TASK::ADD_COVER_POINT(5314.707f, -5175.741f, 82.5187f, 175.9433f, 0, 0, 0, 1);
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5313.544f, -5176.687f, 82.5186f))
						{
							iLocal_1213[2] = TASK::ADD_COVER_POINT(5313.544f, -5176.687f, 82.5186f, 269.647f, 0, 0, 0, 1);
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5313.572f, -5177.626f, 82.5186f))
						{
							iLocal_1213[3] = TASK::ADD_COVER_POINT(5313.572f, -5177.626f, 82.5186f, 255.5294f, 0, 0, 0, 1);
						}
						uLocal_1224 = ITEMSET::CREATE_ITEMSET(1);
						iVar0 = 0;
						while (iVar0 < iLocal_1213)
						{
							if (iLocal_1213[iVar0] != 0)
							{
								if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1213[iVar0])))
								{
									ITEMSET::ADD_TO_ITEMSET(iLocal_1213[iVar0], uLocal_1224);
								}
							}
							iVar0++;
						}
						PED::SET_PED_PREFERRED_COVER_SET(iLocal_654, uLocal_1224);
						TASK::ADD_COVER_BLOCKING_AREA(Vector(83.76878f, -5179.026f, 5313.613f) - Vector(1.75f, 5.5f, 8f), Vector(83.76878f, -5179.026f, 5313.613f) + Vector(1.75f, 5.5f, 8f), 1, 1, 1, 0);
						func_406();
					}
				}
				else
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_495(185, "PRO_move_hst", 7, 1, 0, 0);
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if ((!PED::IS_PED_IN_COVER(iLocal_654, 0) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654)) && func_554())
				{
					if (CAM::DOES_CAM_EXIST(uLocal_1157))
					{
						if (!CAM::IS_CAM_RENDERING(iLocal_1157))
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
							{
								switch (iLocal_29)
								{
									case 0:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									
									case 1:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											func_362(128, "PRO_Doors", "PRO_Doors_1", 8, 1, 0, 0);
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									
									case 2:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											func_495(131, "PRO_Set2", 7, 1, 0, 0);
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									
									case 3:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											func_362(129, "PRO_Doors", "PRO_Doors_3", 8, 1, 0, 0);
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									
									case 4:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											func_495(133, "PRO_cover1", 7, 1, 0, 0);
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									
									case 5:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											func_495(132, "PRO_Set3", 7, 1, 0, 0);
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									
									case 6:
										if (MISC::GET_GAME_TIMER() > iLocal_36)
										{
											func_495(134, "PRO_cover2", 7, 1, 0, 0);
											if (!GlobalFunc_111())
											{
												iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_29++;
											}
										}
										break;
									}
								}
							}
						}
				}
				if ((PED::IS_PED_IN_COVER(iLocal_654, 0) && ((((ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.699f, -5175.994f, 82.5187f, 0.5f, 0.5f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.699f, -5175.994f, 82.5187f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5314.707f, -5175.741f, 82.5187f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5313.544f, -5176.687f, 82.5186f, 0.5f, 0.5f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5313.572f, -5177.626f, 82.5186f, 0.5f, 0.5f, 2f, 0, 1, 0))) || PED::IS_PED_GOING_INTO_COVER(iLocal_654))
				{
					func_420(PLAYER::PLAYER_ID(), 0, 256);
					PED::SET_PED_RESET_FLAG(iLocal_654, 406, 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
					}
				}
				else
				{
					func_420(PLAYER::PLAYER_ID(), 1, 0);
				}
				if ((((((((PED::IS_PED_IN_COVER(iLocal_654, 1) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654)) && !PED::IS_PED_IN_COVER_FACING_LEFT(iLocal_654)) && ((((ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.699f, -5175.994f, 82.5187f, 1f, 1f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.699f, -5175.994f, 82.5187f, 1f, 1f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5314.707f, -5175.741f, 82.5187f, 1f, 1f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5313.544f, -5176.687f, 82.5186f, 1f, 1f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5313.572f, -5177.626f, 82.5186f, 1f, 1f, 2f, 0, 1, 0))) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5320.477f, -5178.753f, 82.51865f, 5307.015f, -5178.662f, 85.51865f, 10f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5317.843f, -5185.008f, 82.51865f, 5317.71f, -5177.232f, 85.51865f, 5.25f, 0, 1, 0)) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637)) && MISC::GET_GAME_TIMER() > uLocal_59[0]) && MISC::GET_GAME_TIMER() > uLocal_59[2])
				{
					func_420(PLAYER::PLAYER_ID(), 0, 256);
					SYSTEM::SETTIMERB(0);
					if (GlobalFunc_663("PRO_COVER1", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_2238(1);
					}
					func_419(&iLocal_1098);
					if (!GlobalFunc_1720() || PLAYER::_0xB9CF1F793A9F1BF1())
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						TASK::TASK_PLAY_ANIM(0, sLocal_580, "set_c4_mainaction_trevor", 4f, -4f, -1, 2, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.699f, -5175.994f, 82.5187f, 1f, 1f, 2f, 0, 1, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						TASK::TASK_PLAY_ANIM(0, sLocal_580, "SET_C4_MainAction_Trevor_Fps_Pos2", 4f, -4f, -1, 2, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						TASK::TASK_PLAY_ANIM(0, sLocal_580, "set_c4_mainaction_trevor_fps", 4f, -4f, -1, 2, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					}
					TASK::TASK_PERFORM_SEQUENCE(iLocal_654, uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 0, 0);
					uLocal_637 = PED::CREATE_SYNCHRONIZED_SCENE(Local_638, Local_641, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[0], uLocal_637, sLocal_580, "set_c4_mainaction_player0", 4f, -2f, 5, 51, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_637, sLocal_580, "set_c4_mainaction_brad", 4f, -2f, 5, 51, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_637, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_637, 0);
					iLocal_1172 = OBJECT::CREATE_OBJECT(iLocal_1246, PED::GET_PED_BONE_COORDS(iLocal_658, 60309, Local_98), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1172, iLocal_658, PED::GET_PED_BONE_INDEX(iLocal_658, 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
					iLocal_1173 = OBJECT::CREATE_OBJECT(iLocal_1247, 5298.27f, -5187.85f, 83.87f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_1173, 0f, 0f, -90.52732f, 2, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1173, iLocal_658, PED::GET_PED_BONE_INDEX(iLocal_658, 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1173, 0);
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) != 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234, 4);
						}
					}
					RECORDING::_0x293220DA1B46CEBC(3.5f, 0f, 3);
					func_406();
				}
				break;
			
			case 2:
				AUDIO::LOAD_STREAM("PROLOGUE_BLAST_SECURITY_DOORS_MASTER", 0);
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				if (!GlobalFunc_111())
				{
					func_362(130, "PRO_Doors", "PRO_Doors_4", 8, 1, 0, 0);
				}
				if (!func_644(53))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) > 0.037f)
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_1172, Local_98, 1, 5000, 2500, 2500, 1511508800);
							if (!iLocal_85)
							{
								RECORDING::_0x48621C9FCA3EBD28(3);
								iLocal_85 = 1;
							}
							func_643(53, 1);
						}
					}
				}
				if (!func_644(54))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) > 0.232f)
						{
							CAM::STOP_GAMEPLAY_HINT(0);
							func_643(54, 1);
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) > 0.239f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1172))
						{
							ENTITY::DETACH_ENTITY(iLocal_1172, 0, 1);
							ENTITY::DETACH_ENTITY(iLocal_1173, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1172, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1173, 1);
						}
						func_406();
					}
				}
				break;
			
			case 3:
				AUDIO::LOAD_STREAM("PROLOGUE_BLAST_SECURITY_DOORS_MASTER", 0);
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) > 0.403f)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1172, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1173, 1);
						if (iLocal_1237 == -1)
						{
							iLocal_1237 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1237, "Security_Door_Bomb_Bleeps", iLocal_1173, "Prologue_Sounds", 0, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) > 0.453f)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1172, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1173, 1);
						MISC::CLEAR_AREA(5318.122f, -5185.504f, (85.7186f - 3.2f), 4f, 1, 0, 0, 0);
						CAM::SHAKE_CAM(iLocal_1157, "MEDIUM_EXPLOSION_SHAKE", 0.1f);
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_door_blast", 5318f, -5185.06f, 83.82f, 0f, 0f, 0f, 1f, 0, 0, 0);
						}
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1206))
							{
								uLocal_1206 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_fog", 5313.354f, -5177.766f, 82.5186f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
							}
						}
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1205))
							{
								uLocal_1205 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_ray_pro_door_embers", 5318.163f, -5184.833f, 82.5186f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
								iLocal_1204 = MISC::GET_GAME_TIMER() + 15000;
							}
						}
						PAD::SET_PAD_SHAKE(0, 500, 256);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
						iLocal_1239 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1239, "COPS_ARRIVE", 5359.9f, -5190f, 83f, "Prologue_Sounds", 0, 0, 0);
						iLocal_1240 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1240, "Security_Door_Alarm", 5318.2f, -5184.8f, 84.1f, "Prologue_Sounds", 0, 0, 0);
						if (iLocal_1237 != -1)
						{
							AUDIO::STOP_SOUND(iLocal_1237);
							AUDIO::RELEASE_SOUND_ID(iLocal_1237);
							iLocal_1237 = -1;
						}
						if (!iLocal_97)
						{
							AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
							iLocal_97 = 1;
						}
						AUDIO::PLAY_STREAM_FRONTEND();
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) == 5)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234, 6);
							}
						}
						func_693(12);
						GlobalFunc_2241(&iLocal_1172);
						GlobalFunc_2241(&iLocal_1173);
						GlobalFunc_5130(iLocal_658, "GENERIC_CURSE_HIGH", 10);
						func_406();
					}
				}
				break;
			
			case 4:
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_637))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_637) > 0.63f)
					{
						if (iLocal_85)
						{
							RECORDING::_0x81CBAE94390F9F89();
							iLocal_85 = 0;
						}
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), -1, 0, 0.5f, 1, 0, 0, 0);
						while (!PED::IS_PED_IN_COVER(iLocal_654, 0) || PED::IS_PED_GOING_INTO_COVER(iLocal_654))
						{
							if (PLAYER::_0xB9CF1F793A9F1BF1())
							{
								if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_580, "set_c4_mainaction_trevor", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_580, "set_c4_mainaction_trevor_fps", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_580, "SET_C4_MainAction_Trevor_Fps_Pos2", 3)) || PED::IS_PED_IN_COVER(iLocal_654, 0)) || PED::IS_PED_GOING_INTO_COVER(iLocal_654))
								{
									CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
								}
							}
							func_387(0, 0);
						}
						func_420(PLAYER::PLAYER_ID(), 1, 0);
						func_495(126, "PRO_Cover", 7, 1, 0, 0);
						HUD::CLEAR_PRINTS();
						GlobalFunc_2238(1);
						func_398(85, "PROHLP_COVER3", 1, -1, 2000);
						func_377();
					}
				}
				break;
		}
		if (PLAYER::_0xB9CF1F793A9F1BF1())
		{
			if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_580, "set_c4_mainaction_trevor", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_580, "set_c4_mainaction_trevor_fps", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_580, "SET_C4_MainAction_Trevor_Fps_Pos2", 3)) || PED::IS_PED_IN_COVER(iLocal_654, 0)) || PED::IS_PED_GOING_INTO_COVER(iLocal_654))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
		}
		if (iLocal_28 < 3)
		{
			if (((((((ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5306.901f, -5175.999f, 83.51878f, 1.75f, 3f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5309.857f, -5173.836f, 83.51878f, 3.75f, 1.75f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5319.702f, -5174.782f, 83.51878f, 1.25f, 2f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5316.188f, -5178.351f, 83.51878f, 1.25f, 2f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.588f, -5178.854f, 83.51878f, 3.25f, 0.75f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.539f, -5183.494f, 83.51878f, 3f, 1.5f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5317.539f, -5183.494f, 83.51878f, 3f, 1.5f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5310.659f, -5182.642f, 84.51878f, 6.5f, 1f, 2f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PED::SET_PED_RESET_FLAG(iLocal_654, 102, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1205))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1204)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1205, 0);
			}
		}
	}
	if (func_361())
	{
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_RESET_FLAG(iLocal_654, 102, 0);
		PED::SET_PED_STEERS_AROUND_PEDS(iLocal_656, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_1207)
		{
			TASK::REMOVE_COVER_POINT(iLocal_1207[iVar1]);
			iVar1++;
		}
		TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
		if (ITEMSET::IS_ITEMSET_VALID(uLocal_1224))
		{
			ITEMSET::DESTROY_ITEMSET(uLocal_1224);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1234))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) != 10 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234) != 7)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1234, 9);
			}
		}
		GlobalFunc_2241(&iLocal_1172);
		GlobalFunc_2241(&iLocal_1173);
		GlobalFunc_2241(&iLocal_1174);
		GlobalFunc_2241(&iLocal_1175);
		GlobalFunc_2241(&iLocal_1176);
		func_419(&iLocal_1098);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1246);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1247);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1248);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1249);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1250);
		iLocal_1252++;
	}
}


int func_554()//Position - 0x69926
{
	if (bLocal_1938)
	{
		return 1;
	}
	return 0;
}


void func_556()//Position - 0x69947
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	bool bVar38;
	struct<3> Var39;
	float fVar42;
	int iVar43;
	
	if (func_467())
	{
		func_421(1, "cutGuard", 0, 0, 0, 1);
		GlobalFunc_2511(&uLocal_1670, 4, 4, 4);
		func_420(PLAYER::PLAYER_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_665))
		{
			func_403(&iLocal_665, joaat("csb_prolsec"), 5297.831f, -5186.644f, (85.719f - 3.2f), 91.975f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_665, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_665, 3, 1, 0, 0);
			GlobalFunc_173(&uLocal_1748, 4, iLocal_665, "PROGUARD", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("csb_prolsec"));
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_665, iLocal_1225, -1, 1, 1);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_665, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_665, 1);
			PED::SET_PED_AS_ENEMY(iLocal_665, 1);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_665, 1);
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_665);
		}
		ENTITY::SET_ENTITY_VISIBLE(iLocal_665, 1);
		func_693(7);
		iLocal_88 = 0;
		HUD::CLEAR_PRINTS();
		GlobalFunc_2238(1);
		iLocal_1984 = 0;
		if (iLocal_90 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("pro_mcs_3_pt1", 8);
		}
		PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_656, 2, 5, 0);
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, 5299.933f, -5187.692f, (85.7184f - 3.2f), 165.5154f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[2]);
			GlobalFunc_2510(uLocal_1670[2], 5297.287f, -5189.632f, (85.7187f - 3.2f), 113.4281f, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_693(35);
			uLocal_1233 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5298.889f, -5189.087f, 82.5182f, 10f, "DES_VaultDoor001");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1233))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233, 9);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1192[0]))
			{
				iLocal_1192[0] = OBJECT::CREATE_OBJECT(joaat("prop_michael_balaclava"), 5296.553f, -5187.389f, 82.51867f, 1, 1, 0);
			}
			if (iLocal_95 == 0)
			{
				ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
				ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
				iLocal_95 = 1;
			}
			if (iLocal_90 == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 2, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 8, 0, 0, 0);
				GlobalFunc_585(124, 1);
				GlobalFunc_2241(&(iLocal_1185[1]));
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[0]))
				{
					iLocal_1185[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_1185[0], 5293.26f, -5192.22f, 82.63f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_1185[0], 77.76f, -1.08f, -130.68f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[0], 1);
					INTERIOR::_0x82EBB79E258FA2B7(iLocal_1185[0], iLocal_1162);
				}
				iLocal_1163[0] = GlobalFunc_8264(iLocal_656, 1, 0, 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
				{
					iLocal_1171 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")), 5295.052f, -5188.801f, 82.562f, 1, 1, 0);
				}
				else
				{
					iLocal_1171 = iLocal_1163[0];
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1171, 5295.052f, -5188.801f, 82.562f, 0, 0, 1);
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_1171, -85.792f, -1.133f, -92.236f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1171, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_654, 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_654, sLocal_575, "hold_head_loop_base_player0", Local_631, Local_634, 1000f, -1000f, -1, 790537, 0, 2, 0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_665, sLocal_575, "hold_head_loop_base_guard", Local_631, Local_634, 1000f, -1000f, -1, 790537, 0, 2, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_665, iLocal_1225, 1);
				GlobalFunc_2510(uLocal_1670[2], 5294.483f, -5191.221f, 82.5187f, 329.4068f, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1670[2], iLocal_1227, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
				TASK::TASK_FORCE_MOTION_STATE(0, 1063765679, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, 5296.375f, -5187.973f, (83.83895f + 0.1f), -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1670[2], uLocal_1161);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
				func_420(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_88 = 1;
				func_6();
				GlobalFunc_9134(&uLocal_1670, 2);
				func_13(&uLocal_1670, 1, 0, 0);
				func_696();
				GlobalFunc_173(&uLocal_1748, 1, uLocal_1670[0], "MICHAEL", 0, 1);
				GlobalFunc_173(&uLocal_1748, 2, iLocal_654, "TREVOR", 0, 1);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_657, iLocal_665, -1, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_657, 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_1160))
				{
					CAM::SET_CAM_ACTIVE(iLocal_1160, 0);
					CAM::DESTROY_CAM(iLocal_1160, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1670[0], 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
					PED::SET_PED_ACCURACY(uLocal_1670[0], 50);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1670[0], 0);
					ENTITY::SET_ENTITY_HEALTH(uLocal_1670[0], 400);
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1670[0], 1);
					PED::SET_PED_ACCURACY(uLocal_1670[0], 0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_665, sLocal_575, "hold_head_loop_base_guard", 3))
					{
						fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_665, sLocal_575, "hold_head_loop_base_guard");
					}
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[0], sLocal_575, "hold_head_loop_base_player0", Local_631, Local_634, 1000f, -1000f, -1, 793097, fVar0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[0], 0, 0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_665, sLocal_575, "hold_head_loop_base_guard", 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_665, sLocal_575, "hold_head_loop_base_guard", fVar0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_665, 0, 0);
					}
					func_482(&iLocal_1092, &(uLocal_1670[0]), 0);
					func_419(&iLocal_1093);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_1670[0], 0);
					PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[0], 9, 12, 0, 0);
				}
				iLocal_28 = 5;
				GlobalFunc_2518(&uLocal_1670, 2, 1);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Grabs_mike", iLocal_665, 0);
		}
		if ((iLocal_28 > 0 && iLocal_90 == 0) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
		if (iLocal_28 > 0 && iLocal_28 <= 4)
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((8f * 1000f)))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[0]))
					{
						iLocal_1185[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(iLocal_1185[0], 5293.26f, -5192.22f, 82.63f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1185[0], 77.76f, -1.08f, -130.68f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[0], 1);
						INTERIOR::_0x82EBB79E258FA2B7(iLocal_1185[0], iLocal_1162);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
			{
				CAM::STOP_CAM_SHAKING(iLocal_1157, 1);
				CAM::SET_CAM_PARAMS(iLocal_1157, 5297.02f, -5186.304f, 84.22712f, -7.860384f, -0.000164f, 165.0937f, 24f, 0, 0, 0, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::_0xF55E4046F6F831DC(iLocal_1157, 4f);
				CAM::_0xE111A7C0D200CBC5(iLocal_1157, 1f);
				CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1157, 2f);
				CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1157, 0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((155f - ENTITY::GET_ENTITY_HEADING(iLocal_654)));
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[0]))
				{
					iLocal_1185[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_1185[0], 5293.26f, -5192.22f, 82.63f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_1185[0], 77.76f, -1.08f, -130.68f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1185[0], 1);
					INTERIOR::_0x82EBB79E258FA2B7(iLocal_1185[0], iLocal_1162);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				func_6();
				PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 2, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 8, 0, 0, 0);
				GlobalFunc_585(124, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_654, 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_654, sLocal_575, "hold_head_loop_base_player0", Local_631, Local_634, 1000f, -1000f, -1, 790537, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_SecurityGuard_Grabs_mike", 0))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_665, sLocal_575, "hold_head_loop_base_guard", Local_631, Local_634, 1000f, -4f, -1, 790537, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_665, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_665, iLocal_1225, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				GlobalFunc_2510(uLocal_1670[2], 5294.483f, -5191.221f, 82.5187f, 329.4068f, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1670[2], iLocal_1227, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
				TASK::TASK_FORCE_MOTION_STATE(0, 1063765679, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, 5296.375f, -5187.973f, (83.83895f + 0.1f), -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1670[2], uLocal_1161);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[1], iLocal_657);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Security_guard_pistol", 0))
			{
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (GlobalFunc_Has_Cutscene_Loaded() && ((PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_656) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_624)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_624) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_624) > 0.95f)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1670[2], "Trevor", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_665, "PRO_SecurityGuard_Grabs_mike", 0, 0, 0);
					iLocal_1163[0] = GlobalFunc_8264(iLocal_656, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[0], "Michaels_weapon", 0, 0, 0);
					iLocal_1163[1] = GlobalFunc_8264(iLocal_657, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[1], "Trevors_weapon", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(2048);
					func_387(0, 0);
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1192[0]))
					{
						iLocal_1192[0] = OBJECT::CREATE_OBJECT(joaat("prop_michael_balaclava"), 5296.553f, -5187.389f, 82.51867f, 1, 1, 0);
					}
					if (iLocal_95 == 0)
					{
						ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
						ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
						iLocal_95 = 1;
					}
					GlobalFunc_2241(&(iLocal_1185[1]));
					MISC::CLEAR_AREA(5298.839f, -5189.151f, (85.7183f - 3.2f), 10f, 1, 0, 0, 0);
					GlobalFunc_585(124, 1);
					RECORDING::_0x48621C9FCA3EBD28(3);
					func_406();
				}
				break;
			
			case 1:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_693(35);
					iLocal_28 = 4;
				}
				if (!func_644(257))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2f * 1000f)))
					{
						func_693(6);
						func_643(257, 1);
					}
				}
				if ((CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2.234332f * 1000f)) && !CUTSCENE::WAS_CUTSCENE_SKIPPED()) || !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 2, 5, 0, 0);
					GlobalFunc_585(124, 1);
					func_406();
				}
				break;
			
			case 2:
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_406();
				}
				else
				{
					func_693(35);
					iLocal_28 = 4;
				}
				break;
			
			case 3:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_693(35);
					iLocal_28 = 4;
				}
				if ((CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((11.62132f * 1000f)) && !CUTSCENE::WAS_CUTSCENE_SKIPPED()) || !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_406();
				}
				break;
			
			case 4:
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1196[3]))
					{
						iLocal_1196[3] = OBJECT::CREATE_OBJECT(joaat("prop_2nd_hostage_scene"), 5297.717f, -5188.909f, (80.549f + 1f), 1, 1, 0);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_1196[3], iLocal_1162, 894738638);
					}
					RECORDING::_0x81CBAE94390F9F89();
					GlobalFunc_8316(0, 1, 1, 0);
					GlobalFunc_574(455, 0);
					func_420(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_88 = 1;
					func_6();
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
					{
						iLocal_1171 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")), 5295.052f, -5188.801f, 82.562f, 1, 1, 0);
					}
					else
					{
						iLocal_1171 = iLocal_1163[0];
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1171, 5295.052f, -5188.801f, 82.562f, 0, 0, 1);
					}
					ENTITY::SET_ENTITY_ROTATION(iLocal_1171, -85.792f, -1.133f, -92.236f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1171, 1);
					GlobalFunc_8316(1, 1, 0, 0);
					INTERIOR::_0xAF348AFCB575A441("V_CashD_vault");
					CAM::SET_CAM_NEAR_CLIP(iLocal_1157, 0.5f);
					GlobalFunc_139();
					GlobalFunc_2518(&uLocal_1670, 2, 1);
					func_406();
				}
				break;
			
			case 5:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
				{
					AUDIO::START_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
				{
					if (!func_644(43))
					{
						if (GlobalFunc_5885(1))
						{
							if (SYSTEM::TIMERA() > 500)
							{
								if (!func_644(102))
								{
									if (!GlobalFunc_74("PROHLP_SWITCH4"))
									{
										GlobalFunc_2238(1);
										GlobalFunc_Display_Help_Text("PROHLP_SWITCH4");
									}
								}
							}
						}
						else
						{
							if (!GlobalFunc_74("PROHLP_SWITCH2"))
							{
								if (!GlobalFunc_74("PROHLP_SWITCH2"))
								{
									GlobalFunc_2238(1);
									GlobalFunc_Display_Help_Text("PROHLP_SWITCH2");
								}
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
				}
				if (func_644(51))
				{
					if (!PED::IS_PED_INJURED(iLocal_665))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_665))
							{
								TASK::CLEAR_PED_TASKS(iLocal_665);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_578, "KILL_Michael_Guard", Local_631, Local_634, 8f, -1.5f, -1, 790536, 0.133f, 2, 1);
								TASK::TASK_COMBAT_PED(0, uLocal_1670[2], 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_665, uLocal_1161);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_665, iLocal_1231);
								PED::SET_PED_KEEP_TASK(iLocal_665, 1);
							}
						}
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_665, PED::GET_PED_BONE_COORDS(iLocal_656, 31086, Local_98), 0);
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(5296.7f, -5188f, 84.1f, PED::GET_PED_BONE_COORDS(iLocal_656, 31086, Local_98), 1000, 1, joaat("weapon_pistol"), 0, 1, 1, -1082130432);
						ENTITY::SET_ENTITY_HEALTH(iLocal_656, 0);
						if (!PED::IS_PED_INJURED(iLocal_665))
						{
							TASK::CLEAR_PED_TASKS(iLocal_665);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_578, "KILL_Michael_Guard", Local_631, Local_634, 8f, -1.5f, -1, 790536, 0.133f, 2, 1);
							TASK::TASK_COMBAT_PED(0, iLocal_654, 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_665, uLocal_1161);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_665, iLocal_1231);
						}
					}
				}
				if ((PED::IS_PED_SHOOTING(iLocal_654) && !PED::IS_PED_INJURED(iLocal_665)) || (func_644(64) && MISC::GET_GAME_TIMER() > iLocal_36))
				{
					if (!PED::IS_PED_INJURED(iLocal_656))
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_656) > 101)
						{
							PED::SET_PED_ACCURACY(iLocal_665, 100);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_665, 27, 1);
							func_643(51, 1);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[0]))
				{
					if (!CAM::DOES_CAM_EXIST(Local_1714.f_9))
					{
						if (!PED::IS_PED_INJURED(iLocal_665))
						{
							if ((!func_644(91) && !func_644(92)) && !func_644(93))
							{
								func_421(2, "cutGuard(AimAtGuard)", 0, 0, 0, 1);
								PED::SET_PED_DIES_WHEN_INJURED(uLocal_1670[0], 1);
								if (GlobalFunc_5672("PRO_Idle4"))
								{
									cLocal_554 = { GlobalFunc_514() };
								}
								GlobalFunc_2238(1);
								GlobalFunc_5105();
								if (MISC::GET_PROFILE_SETTING(0) == 0)
								{
									func_398(92, "PROHLP_FREEAIMb", 1, -1, 2000);
								}
								else if (MISC::GET_PROFILE_SETTING(0) == 1)
								{
									func_398(93, "PROHLP_FREEAIMc", 1, -1, 2000);
								}
								else if (MISC::GET_PROFILE_SETTING(0) == 2)
								{
									func_398(93, "PROHLP_FREEAIMc", 1, -1, 2000);
								}
								func_482(&iLocal_1095, &iLocal_665, 1);
								HUD::SET_BLIP_PRIORITY(iLocal_1095, 8);
								iLocal_88 = 1;
								HUD::DISPLAY_RADAR(1);
								HUD::DISPLAY_HUD(1);
								iLocal_90 = 0;
								SYSTEM::SETTIMERB(0);
							}
							if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_654, 1630799643) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_654, 1237250926) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_654, 242628503) == 1)
							{
								iVar1 = 2;
								GlobalFunc_612(&iVar2, &iVar3, &iVar4, &iVar5, 0);
								if (((((((iVar2 < -iVar1 || iVar2 > iVar1) || (iVar3 < -iVar1 || iVar3 > iVar1)) || (iVar4 < -iVar1 || iVar4 > iVar1)) || (iVar5 < -iVar1 || iVar5 > iVar1)) || PAD::IS_CONTROL_PRESSED(0, 25)) || PAD::IS_CONTROL_PRESSED(0, 24)) || PAD::IS_CONTROL_PRESSED(0, 257))
								{
									TASK::CLEAR_PED_TASKS(iLocal_654);
								}
							}
							if ((func_644(91) || func_644(92)) || func_644(93))
							{
								iVar6 = 8;
								GlobalFunc_612(&uVar7, &uVar8, &iVar9, &iVar10, 0);
								if (!func_644(88) && (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || PAD::IS_CONTROL_PRESSED(0, 25)))
								{
									func_398(88, "PROHLP_FREEAIM2", 1, 7000, 4000);
									SYSTEM::SETTIMERB(0);
								}
								else if ((func_644(88) && !func_644(89)) && (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (SYSTEM::TIMERB() > 2000 && ((iVar9 < -iVar6 || iVar9 > iVar6) || (iVar10 < -iVar6 || iVar10 > iVar6)))))
								{
									func_398(89, "PROHLP_FREEAIM3", 1, 5000, 2000);
									SYSTEM::SETTIMERB(0);
								}
								else if (((func_644(88) && func_644(89)) && !func_644(90)) && (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || PAD::IS_CONTROL_JUST_PRESSED(0, 39)))
								{
									func_398(90, "PROHLP_FREEAIM4", 1, -1, 2000);
								}
							}
						}
						else
						{
							iLocal_1241 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1241, "Guard_Headshot", 5296.7f, -5188f, 84.1f, "Prologue_Sounds", 0, 0, 0);
							WEAPON::SET_PED_DROPS_WEAPON(iLocal_665);
							func_693(10);
							GlobalFunc_571(0, 455);
							func_420(PLAYER::PLAYER_ID(), 0, 0);
							PED::SET_PED_TO_LOAD_COVER(uLocal_1670[0], 1);
							TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[0], sLocal_576, "wipe_blood_player0", Local_631, Local_634, 1000f, -1.5f, -1, 790536, 0f, 2, 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_1670[0], 16);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[0], 0, 0);
							PED::APPLY_PED_BLOOD_SPECIFIC(uLocal_1670[0], 1, 0.424f, 0.671f, 310.632f, 0.7f, 3, 0f, "Scripted_Ped_Splash_Back");
							TASK::TASK_PLAY_ANIM(iLocal_654, sLocal_577, "shot_guard_player2", 1000f, -1.5f, -1, 0, 0f, 0, 1, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 0, 0);
							PED::SET_PED_TO_LOAD_COVER(iLocal_658, 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_576, "wipe_blood_brad", Local_631, Local_634, 1000f, -1.5f, -1, 790536, 0.133f, 2, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_658, uLocal_1161);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
							func_419(&iLocal_1095);
							iLocal_88 = 1;
							func_6();
							func_495(206, "PRO_Rescued", 7, 1, 0, 0);
							RECORDING::_0x293220DA1B46CEBC(1f, 4f, 3);
							if (!func_489(&iLocal_665))
							{
								PED::SET_PED_CAN_RAGDOLL(iLocal_665, 1);
								TASK::CLEAR_PED_TASKS(iLocal_665);
							}
							func_387(10, 0);
							func_420(PLAYER::PLAYER_ID(), 1, 0);
							PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_658, 9, 1, 0);
							GlobalFunc_2241(&(iLocal_1196[3]));
							func_406();
						}
					}
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (!func_644(177))
					{
						func_495(177, "PRO_Idle4", 7, 1, 0, 0);
					}
					else if (!func_644(157))
					{
						if (GlobalFunc_8315() == 2)
						{
							func_374(157, "PRO_GUARD", 3500, 1);
							if (!GlobalFunc_111())
							{
								func_495(191, "PRO_shoot", 6, 1, 1, 0);
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_36)
						{
							if (!func_644(64))
							{
								iLocal_36 = MISC::GET_GAME_TIMER() + 30000;
								func_643(64, 1);
							}
						}
					}
					else if (iLocal_1984 == 0)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_554))
						{
							func_561("PRO_Idle4", &cLocal_554, 7, 0, 0);
							StringCopy(&cLocal_554, GlobalFunc_648(), 24);
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_36)
						{
							if (!func_644(64))
							{
								iLocal_36 = MISC::GET_GAME_TIMER() + 20000;
								func_643(64, 1);
							}
						}
					}
				}
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 32, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 34, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 35, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 33, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				break;
			
			case 6:
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1171))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[0], sLocal_576, "wipe_blood_player0", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1670[0], sLocal_576, "wipe_blood_player0") >= 0.396f)
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_1670[0], iLocal_1227, 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(uLocal_1670[0], iLocal_1227, 500, 1, 1);
							}
							GlobalFunc_2241(&iLocal_1171);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1185[0]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_576, "wipe_blood_brad", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_658, sLocal_576, "wipe_blood_brad") >= 0.318f)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[1]))
							{
								iLocal_1185[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1185[1], iLocal_658, PED::GET_PED_BONE_INDEX(iLocal_658, 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[2]))
							{
								iLocal_1185[2] = OBJECT::CREATE_OBJECT(joaat("p_csh_strap_01_s"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1185[2], iLocal_658, PED::GET_PED_BONE_INDEX(iLocal_658, 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
							}
							ENTITY::PLAY_ENTITY_ANIM(iLocal_1185[1], "wipe_blood_bag", sLocal_576, 1000f, 0, 0, 0, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_658, sLocal_576, "wipe_blood_brad"), 0);
							ENTITY::PLAY_ENTITY_ANIM(iLocal_1185[2], "wipe_blood_strap", sLocal_576, 1000f, 0, 0, 0, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_658, sLocal_576, "wipe_blood_brad"), 0);
							GlobalFunc_2241(&(iLocal_1185[0]));
							RECORDING::_0x293220DA1B46CEBC(3.5f, 4.5f, 3);
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1185[1]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_576, "wipe_blood_brad", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_658, sLocal_576, "wipe_blood_brad") >= 0.465f)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_658))
							{
								PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 1, 0, 0);
								func_387(0, 0);
								GlobalFunc_2241(&(iLocal_1185[1]));
								GlobalFunc_2241(&(iLocal_1185[2]));
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[0], sLocal_576, "wipe_blood_player0", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1670[0], sLocal_576, "wipe_blood_player0") >= 0.9f)
					{
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2) - Vector(1f, 0f, 0f)))
						{
							iLocal_1207[0] = TASK::ADD_COVER_POINT(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2) - Vector(1f, 0f, 0f), -func_405(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2)), 1, 2, 0, 0);
						}
						TASK::CLEAR_PED_TASKS(uLocal_1670[0]);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2), 2f, 20000, 2f, 1, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2), 1000, 0, 0.9f, 1, 1, iLocal_1207[0], 1);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 2f, -8f, -1, 790537, 0, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_1670[0], uLocal_1161);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
						PED::FORCE_PED_MOTION_STATE(uLocal_1670[0], -1871534317, 1, 0, 0);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_576, "wipe_blood_brad", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_658, sLocal_576, "wipe_blood_brad") >= 0.781f)
					{
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 0, 2) - Vector(1f, 0f, 0f)))
						{
							iLocal_1207[1] = TASK::ADD_COVER_POINT(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 0, 2) - Vector(1f, 0f, 0f), (-func_405(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 0, 2)) - 90f), 1, 2, 0, 0);
						}
						TASK::CLEAR_PED_TASKS(iLocal_658);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 0, 2), 2f, 20000, 2f, 1, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 0, 2), 1000, 0, 0.9f, 1, 1, iLocal_1207[1], 1);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_579, "set_c4_start_loop_a_brad", Local_638, Local_641, 8f, -8f, -1, 790537, 0, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_658, uLocal_1161);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
						PED::FORCE_PED_MOTION_STATE(iLocal_658, -530524, 1, 0, 0);
					}
				}
				if (!func_644(296))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_577, "shot_guard_player2", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_654, sLocal_577, "shot_guard_player2") >= 0.65f)
						{
							iVar11 = 8;
							GlobalFunc_612(&iVar12, &iVar13, &uVar14, &uVar15, 0);
							if ((iVar12 < -iVar11 || iVar12 > iVar11) || (iVar13 < -iVar11 || iVar13 > iVar11))
							{
								func_420(PLAYER::PLAYER_ID(), 1, 0);
								TASK::CLEAR_PED_TASKS(iLocal_654);
								PED::FORCE_PED_MOTION_STATE(iLocal_654, -1871534317, 0, 0, 0);
								func_643(296, 1);
							}
						}
					}
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[0], sLocal_576, "wipe_blood_player0", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_576, "wipe_blood_brad", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_577, "shot_guard_player2", 3))
				{
					func_377();
				}
				break;
		}
		if (iLocal_1984 == 1)
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_2238(1);
			func_643(100, 1);
			func_643(101, 1);
			func_643(102, 1);
			iLocal_36 = MISC::GET_GAME_TIMER() + 20000;
			func_643(64, 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_1160))
			{
				iLocal_1160 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			}
			CAM::SET_CAM_NEAR_CLIP(iLocal_1160, 0.5f);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_1160, 0.5f);
			Var16 = { CAM::GET_CAM_COORD(iLocal_1157) };
			Var19 = { CAM::GET_CAM_ROT(iLocal_1157, 2) };
			Var22 = { 5293.89f, -5193.047f, 84.12897f };
			Var25 = { 0f, 0f, 329.9688f };
			Var28 = { -9.213379f, 0.828125f, 2.509613f };
			Var31 = { (7.010742f - 3f), (-3.646972f - 0.75f), -2.416809f };
			fVar34 = CAM::GET_CAM_FOV(iLocal_1157);
			fVar35 = 35f;
			CAM::SET_CAM_PARAMS(iLocal_1160, Var16, Var19, fVar34, 0, 1, 1, 2);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(1, 1, 1, 0);
			func_387(0, 0);
			INTERIOR::_0xAF348AFCB575A441("V_CashD_vault");
			func_693(9);
			while (fVar36 <= 45f)
			{
				CAM::SET_CAM_PARAMS(iLocal_1160, func_558(Var16, Var28, Var22, Var31, 0f, 45f, fVar36), func_558(Var19, Var28, Var25, Var31, 0f, 45f, fVar36), GlobalFunc_1572(fVar34, fVar35, 0f, 45f, fVar36), 0, 1, 1, 2);
				fVar36 = (fVar36 + ((fVar37 * 10f) * SYSTEM::TIMESTEP()));
				if (fVar36 < 2f)
				{
					if (fVar37 < 1f)
					{
						fVar37 = (fVar37 + 0.1f);
					}
				}
				else if (fVar36 > 43f)
				{
					if (fVar37 > 0.2f)
					{
						fVar37 = (fVar37 - 0.1f);
					}
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 32, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 34, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 35, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 33, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				func_387(0, 0);
			}
			iLocal_1984 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_665))
		{
			PED::SET_PED_RESET_FLAG(iLocal_654, 69, 1);
		}
		if (iLocal_28 > 4)
		{
			if (!Local_1714.f_20)
			{
				if (GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10061(&uLocal_1670, 1, 1))
					{
						if (uLocal_1670.f_7 == 2)
						{
							GlobalFunc_565(463, 1, 0);
							Local_1714.f_12 = uLocal_1670[uLocal_1670.f_7];
							Local_1714.f_20 = 1;
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0f, 3, 0);
							PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
							func_643(100, 1);
							func_643(101, 1);
							func_643(102, 1);
							func_643(43, 1);
							GlobalFunc_2238(1);
							iLocal_36 = MISC::GET_GAME_TIMER() + 20000;
							func_643(64, 0);
							func_693(9);
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
							{
								AUDIO::START_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
							}
						}
					}
				}
			}
			else if (func_505(&Local_1714, 0, 1148829696, 1148829696))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (Local_1714.f_18)
				{
					if (!Local_1714.f_19)
					{
						if (func_13(&uLocal_1670, 1, 1, 0))
						{
							func_696();
							Var39 = { 5297.4f, -5186.3f, 84f };
							TASK::TASK_AIM_GUN_AT_COORD(iLocal_654, Var39, 3000, 1, 0);
							PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), 1);
							while (GlobalFunc_8315() != 2)
							{
								func_387(0, 0);
							}
							GlobalFunc_173(&uLocal_1748, 1, uLocal_1670[0], "MICHAEL", 0, 1);
							GlobalFunc_173(&uLocal_1748, 2, iLocal_654, "TREVOR", 0, 1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::RENDER_SCRIPT_CAMS(0, 1, 500, 0, 0, 0);
							GlobalFunc_8316(0, 1, 1, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[0]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1670[0], 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
								PED::SET_PED_ACCURACY(uLocal_1670[0], 50);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1670[0], 0);
								ENTITY::SET_ENTITY_HEALTH(uLocal_1670[0], 400);
								WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1670[0], 1);
								PED::SET_PED_ACCURACY(uLocal_1670[0], 0);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_665, sLocal_575, "hold_head_loop_base_guard", 3))
								{
									fVar42 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_665, sLocal_575, "hold_head_loop_base_guard");
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[0], sLocal_575, "hold_head_loop_base_player0", Local_631, Local_634, 1000f, -1000f, -1, 793097, fVar42, 2, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[0], 0, 0);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_665, sLocal_575, "hold_head_loop_base_guard", 3))
								{
									ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_665, sLocal_575, "hold_head_loop_base_guard", fVar42);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_665, 0, 0);
								}
								func_482(&iLocal_1092, &(uLocal_1670[0]), 0);
								func_419(&iLocal_1093);
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_1670[0], 0);
								PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[0], 9, 12, 0, 0);
							}
							Local_1714.f_19 = 1;
						}
					}
				}
			}
			else if (!bVar38)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_654))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
						PED::FORCE_PED_MOTION_STATE(iLocal_654, 1063765679, 1, 0, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 1, 0);
					}
				}
				bVar38 = true;
			}
		}
	}
	if (func_361())
	{
		GlobalFunc_571(0, 455);
		MISC::SET_GAME_PAUSED(0);
		GlobalFunc_2785(&uLocal_1670);
		GlobalFunc_2241(&(iLocal_1196[3]));
		if (iLocal_1241 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1241);
			AUDIO::RELEASE_SOUND_ID(iLocal_1241);
			iLocal_1241 = -1;
		}
		Local_1714.f_19 = 0;
		Local_1714.f_20 = 0;
		func_419(&iLocal_1095);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		CAM::STOP_CAM_SHAKING(iLocal_1157, 1);
		if (CAM::DOES_CAM_EXIST(iLocal_1160))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1160, 0);
			CAM::DESTROY_CAM(iLocal_1160, 0);
		}
		iVar43 = 0;
		while (iVar43 < iLocal_1163)
		{
			GlobalFunc_2241(&(iLocal_1163[iVar43]));
			iVar43++;
		}
		if (GlobalFunc_8315() != 2)
		{
			GlobalFunc_9134(&uLocal_1670, 2);
			func_13(&uLocal_1670, 1, 0, 0);
			func_696();
		}
		GlobalFunc_173(&uLocal_1748, 1, uLocal_1670[0], "MICHAEL", 0, 1);
		GlobalFunc_173(&uLocal_1748, 2, iLocal_654, "TREVOR", 0, 1);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1670[0], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
			PED::SET_PED_ACCURACY(uLocal_1670[0], 50);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1670[0], 0);
			ENTITY::SET_ENTITY_HEALTH(uLocal_1670[0], 400);
			PED::SET_PED_DIES_WHEN_INJURED(uLocal_1670[0], 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1670[0], 1);
			func_482(&iLocal_1092, &(uLocal_1670[0]), 0);
			func_419(&iLocal_1093);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_1670[0], 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[0], 2, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[0], 8, 0, 0, 0);
			GlobalFunc_585(124, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[0], 9, 12, 0, 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_1670[0], iLocal_1227, 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_1670[0], iLocal_1227, 500, 1, 1);
			}
			TASK::CLEAR_PED_TASKS(uLocal_1670[0]);
			PED::SET_PED_TO_LOAD_COVER(uLocal_1670[0], 1);
			if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2) - Vector(1f, 0f, 0f)))
			{
				iLocal_1207[0] = TASK::ADD_COVER_POINT(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2) - Vector(1f, 0f, 0f), -func_405(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2)), 1, 2, 0, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2), 2f, 20000, 2f, 1, 40000f);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 0, 2), 1000, 0, 0.9f, 1, 1, iLocal_1207[0], 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_579, "set_c4_start_loop_a_player0", Local_638, Local_641, 2f, -8f, -1, 790537, 0, 2, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_1670[0], uLocal_1161);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
		}
		func_419(&iLocal_1093);
		GlobalFunc_2241(&iLocal_1171);
		GlobalFunc_2241(&(iLocal_1163[0]));
		GlobalFunc_2241(&(iLocal_1185[0]));
		GlobalFunc_2241(&(iLocal_1185[1]));
		GlobalFunc_2241(&(iLocal_1185[2]));
		if (!PED::IS_PED_INJURED(iLocal_665))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_665);
			PED::SET_PED_CAN_RAGDOLL(iLocal_665, 1);
			PED::EXPLODE_PED_HEAD(iLocal_665, joaat("weapon_sniperrifle"));
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 1, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_658);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_656);
		iLocal_1252++;
	}
}


Vector3 func_558(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, float fParam13, float fParam14)//Position - 0x6BD70
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar0 = (fParam14 / (fParam13 - fParam12));
	fVar1 = (((2f * func_559(fVar0, 3)) - (3f * func_559(fVar0, 2))) + 1f);
	fVar2 = ((-2f * func_559(fVar0, 3)) + (3f * func_559(fVar0, 2)));
	fVar3 = ((func_559(fVar0, 3) - (2f * func_559(fVar0, 2))) + fVar0);
	fVar4 = (func_559(fVar0, 3) - func_559(fVar0, 2));
	Var5 = { Vector(fVar1, fVar1, fVar1) * Param0 + Vector(fVar2, fVar2, fVar2) * Param6 + Vector(fVar3, fVar3, fVar3) * Param3 + Vector(fVar4, fVar4, fVar4) * Param9 };
	return Var5;
}

float func_559(float fParam0, int iParam1)//Position - 0x6BE04
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = fParam0;
	fVar2 = 0f;
	if (iParam1 == 0)
	{
		fVar2 = 1f;
	}
	else if (iParam1 == 1)
	{
		fVar2 = fParam0;
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1 + 1;
		while (iVar0 > 0)
		{
			fParam0 = (fParam0 * fVar1);
			iVar0 = (iVar0 - 1);
		}
		fVar2 = (1f / fParam0);
	}
	else if (iParam1 > 1)
	{
		iVar0 = (iParam1 - 1);
		while (iVar0 > 0)
		{
			fParam0 = (fParam0 * fVar1);
			iVar0 = (iVar0 - 1);
		}
		fVar2 = fParam0;
	}
	return fVar2;
}


void func_561(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6BE8A
{
	while (!GlobalFunc_10626(&uLocal_1748, cLocal_1256, sParam0, sParam1, iParam2, iParam3, iParam4))
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
		}
		func_387(0, 0);
	}
}







void func_568()//Position - 0x6C1C2
{
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		iLocal_88 = 1;
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Pro_S1a");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_665))
		{
			func_403(&iLocal_665, joaat("csb_prolsec"), 5297.831f, -5186.644f, (85.719f - 3.2f), 91.975f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_665, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_665, 3, 1, 0, 0);
			GlobalFunc_173(&uLocal_1748, 4, iLocal_665, "PROGUARD", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("csb_prolsec"));
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_665, iLocal_1225, -1, 1, 1);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_665, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_665, 1);
			PED::SET_PED_AS_ENEMY(iLocal_665, 1);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_665, 1);
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_665);
		}
		ENTITY::SET_ENTITY_VISIBLE(iLocal_665, 0);
		if (iLocal_95 == 0)
		{
			ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
			ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
			iLocal_95 = 1;
		}
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_3_pt1", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
		}
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, 5303.301f, -5189.046f, 82.5187f, 98.0764f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[2]);
			GlobalFunc_2510(uLocal_1670[2], 5299.954f, -5188.448f, 82.5183f, 242.6358f, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[1]))
			{
				iLocal_1185[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1185[1], uLocal_1670[2], PED::GET_PED_BONE_INDEX(uLocal_1670[2], 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_623))
			{
				uLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(Local_625, Local_628, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_623, sLocal_574, "mcs_2_idle_player2", 1000f, -1000f, 4, 0, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_1670[2], iLocal_654, -1, 0, 2);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_1185[1], "mcs_2_idle_bag", sLocal_574, 1000f, 1, 0, 0, 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_623, 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Grabs_mike", iLocal_665, 0);
		}
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && CAM::_0x3044240D2E0FA842())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((89.4f - ENTITY::GET_ENTITY_HEADING(iLocal_654)));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.34432f, 1065353216);
		}
		switch (iLocal_28)
		{
			case 0:
				if (!func_644(192))
				{
					if (func_644(193) && AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
					{
						GlobalFunc_2207();
						func_643(192, 1);
					}
					else
					{
						func_495(192, "PRO_Leave", 7, 1, 0, 0);
					}
					iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7500));
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5298.024f, -5189.135f, 82.51832f, 5302.976f, -5189.083f, 85.5186f, 5.5f, 0, 1, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(1f, 4f, 3);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[1]))
					{
						iLocal_1185[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1185[1], uLocal_1670[2], PED::GET_PED_BONE_INDEX(uLocal_1670[2], 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
					}
					uLocal_624 = PED::CREATE_SYNCHRONIZED_SCENE(Local_625, Local_628, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_624, sLocal_574, "mcs_2_walkout_player2", 8f, -1000f, 4, 0, 1148846080, 0);
					TASK::TASK_CLEAR_LOOK_AT(uLocal_1670[2]);
					ENTITY::PLAY_ENTITY_ANIM(iLocal_1185[1], "mcs_2_walkout_bag", sLocal_574, 8f, 0, 1, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_654, 5298.352f, -5188.909f, 82.5182f, 1f, 20000, 40000f, 1056964608);
					func_406();
				}
				if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_36)
					{
						if (iLocal_30[iLocal_29] == -1)
						{
							iLocal_30[iLocal_29] = 4;
						}
						iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000));
						iLocal_30[iLocal_29] = (iLocal_30[iLocal_29] - 1);
					}
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					func_495(195, "PRO_MCS3LI", 7, 1, 0, 0);
				}
				PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_624) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_624) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_624) > 0.75f))
				{
					func_377();
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1185[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1185[1]))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_1185[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_1185[1]))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
	}
	if (func_361())
	{
		func_419(&iLocal_1104);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_1670[2]);
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1a");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
		}
		iLocal_1252++;
	}
}


void func_570()//Position - 0x6C786
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	struct<21> Var25;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		iLocal_88 = 1;
		HUD::CLEAR_PRINTS();
		func_561("PRO_Safe", "PRO_Safe_2", 8, 0, 0);
		func_484(&iLocal_1098, 5303.558f, -5188.414f, (85.7189f - 3.2f), 0);
		func_492(iLocal_1098, 5000);
		func_398(77, "PROHLP_BLIPS4", 1, -1, 2000);
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1201))
		{
			uLocal_1201 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_haze", 5299f, -5189f, 82.6f, Local_98, 1065353216, 0, 0, 0, 0);
		}
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1202))
		{
			uLocal_1202 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_fog", 5299f, -5189f, 82.6f, Local_98, 1065353216, 0, 0, 0, 0);
		}
		iLocal_1975 = 0;
		iLocal_1976 = 0;
		OBJECT::CREATE_MONEY_PICKUPS(5303.311f, -5189f, 82.51867f, 2500, 5, 0);
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
		iLocal_68 = uVar0;
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_2", 8);
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, 5308.856f, -5206.294f, (85.7187f - 3.2f), 355.824f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[2]);
			GlobalFunc_2510(uLocal_1670[2], 5310.688f, -5204.99f, 82.5199f, (355.824f + 90f), 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_1670[2], 5310.688f, -5204.99f, 82.5199f, -1, 0, 0f, 1, 1, iLocal_1207[0], 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_658);
			GlobalFunc_2510(iLocal_658, 5313.905f, -5205.749f, 82.5187f, 98.053f, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar1, -1);
		if (iVar1 > iLocal_68)
		{
			iLocal_1975 = (iLocal_1975 + (iVar1 - iLocal_68));
			Global_Mission_Fail_State.f_12[0] = iLocal_1975;
			iLocal_68 = iVar1;
		}
		func_641(1, joaat("v_ilev_cd_door"));
		func_641(2, joaat("v_ilev_cd_door"));
		if (((TASK::IS_PED_RUNNING(iLocal_654) && !PED::IS_PED_SHOOTING(iLocal_654)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5308.813f, -5204.578f, 84.01863f, 1.25f, 1.5f, 1.5f, 0, 1, 0)) && (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1961) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1962) != 0f))
		{
			if (iLocal_1235 == -1)
			{
				iLocal_1235 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1235, "Barge_Door", 5308.813f, -5204.578f, 84.01863f, "Prologue_Sounds", 0, 0, 0);
			}
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
		}
		if (!func_644(276))
		{
			if (iLocal_28 <= 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 5308.731f, -5188.501f, 82.51867f, 5298.839f, -5188.513f, 86.01836f, 9f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(uLocal_1670[2]);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_1670[2]);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5300.742f, -5190.498f, 82.5184f, 1f, 20000, 0.25f, 0, (248.5686f + 46f));
					TASK::TASK_PLAY_ANIM(0, sLocal_573, "idle_d", 8f, -8f, -1, 786433, 0f, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1670[2], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					func_643(276, 1);
				}
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (!func_644(223))
				{
					if (SYSTEM::TIMERA() > 1000)
					{
						if (func_644(217) && !GlobalFunc_111())
						{
							func_374(224, "PRO_VAULT", 3500, 0);
							func_643(223, 1);
						}
					}
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1670[2]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5310.549f, -5202.886f, 82.51868f, 5307.083f, -5202.865f, 85.51868f, 3f, 0, 1, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(uLocal_1670[2]);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_1670[2], sLocal_588, 0, 0, -1);
						PED::SET_COMBAT_FLOAT(uLocal_1670[2], 3, 2f);
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
						{
							AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
						}
					}
					if (PED::IS_PED_IN_COVER(uLocal_1670[2], 1) && ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5310.699f, -5205.046f, 84.01867f, 0.5f, 0.5f, 1.5f, 0, 1, 0))
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_C", 3))
						{
							if (iLocal_63 == -1)
							{
								iLocal_63 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
							}
							if (MISC::GET_GAME_TIMER() > iLocal_63)
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								Var3.f_4 = 1065353216;
								Var3.f_5 = 1065353216;
								Var3.f_9 = 1065353216;
								Var3.f_10 = 1065353216;
								Var3.f_14 = 1065353216;
								Var3.f_15 = 1065353216;
								Var3.f_17 = 1040187392;
								Var3.f_18 = 1040187392;
								Var3.f_19 = -1;
								Var25.f_4 = 1065353216;
								Var25.f_5 = 1065353216;
								Var25.f_9 = 1065353216;
								Var25.f_10 = 1065353216;
								Var25.f_14 = 1065353216;
								Var25.f_15 = 1065353216;
								Var25.f_17 = 1040187392;
								Var25.f_18 = 1040187392;
								Var25.f_19 = -1;
								Var25 = 1;
								Var25.f_2 = "Trevor_Cover_Impatient_A";
								Var25.f_1 = sLocal_571;
								Var25.f_20 = 32;
								if (iVar2 == 0)
								{
									Var25.f_2 = "Trevor_Cover_Impatient_A";
									TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var25, &Var3, &Var3, 0.25f, 0.25f);
								}
								else if (iVar2 == 1)
								{
									Var25.f_2 = "Trevor_Cover_Impatient_B";
									TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var25, &Var3, &Var3, 0.25f, 0.25f);
								}
								else if (iVar2 == 2)
								{
									Var25.f_2 = "Trevor_Cover_Impatient_C";
									TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var25, &Var3, &Var3, 0.25f, 0.25f);
								}
								iLocal_63 = -1;
							}
						}
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1670[2]))
				{
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_588, &iVar49);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_588, ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), &iVar47);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_588, ENTITY::GET_ENTITY_COORDS(uLocal_1670[2], 1), &iVar48);
					iVar47 = GlobalFunc_254(((iVar47 - 1) - 1), 0, iVar49);
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_1670[2], GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_654), 1f, 3f), 0);
				}
				if ((iVar47 > iVar48 || iVar48 > 16) || iVar48 == 1)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1670[2]))
					{
						if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1670[2]))
						{
							TASK::WAYPOINT_PLAYBACK_RESUME(uLocal_1670[2], 0, -1, 0);
						}
					}
				}
				else
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_1670[2]))
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_1670[2]))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_1670[2], 0, 0);
						}
					}
					if (!func_644(237) && MISC::GET_GAME_TIMER() > iLocal_36)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5306.708f, -5180.154f, 84.51867f, 14.5f, 3f, 2f, 0, 1, 0))
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
							{
								if (iLocal_30[1] > 0)
								{
									func_495(224, "PRO_Vault", 7, 0, 0, 0);
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									func_643(237, 1);
								}
							}
						}
					}
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (!func_644(109))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5295.025f, -5185.919f, 82.51878f, 5295.129f, -5178.219f, 86.01878f, 6.5f, 0, 1, 0))
							{
								func_495(109, "PRO_BackHere", 7, 1, 0, 0);
								iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_36)
					{
						if (iLocal_30[0] == -1)
						{
							iLocal_30[0] = 5;
						}
						else if (iLocal_30[1] == -1)
						{
							iLocal_30[1] = 4;
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5308.731f, -5188.501f, 82.51867f, 5298.839f, -5188.513f, 86.01836f, 9f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 5308.731f, -5188.501f, 82.51867f, 5298.839f, -5188.513f, 86.01836f, 9f, 0, 1, 0))
						{
							iLocal_29 = 1;
						}
						else
						{
							iLocal_29 = 0;
						}
						if (iLocal_30[iLocal_29] > 0)
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
							{
								if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_657) < 1f && !ENTITY::IS_ENTITY_AT_COORD(iLocal_656, ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 3.5f, 3.5f, 3f, 0, 1, 0))
								{
									if (iLocal_29 == 0)
									{
										func_495(158, "PRO_GenIdle", 7, 0, 0, 0);
									}
									else if (iLocal_29 == 1)
									{
										func_495(224, "PRO_Vault", 7, 0, 0, 0);
									}
								}
								iLocal_30[iLocal_29] = (iLocal_30[iLocal_29] - 1);
							}
						}
						iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
				if (!func_644(13))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5296.629f, -5186.646f, 82.51863f, 5296.793f, -5191.115f, 85.51863f, 3f, 0, 1, 0) && !PED::IS_PED_IN_COVER(iLocal_654, 0)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_654))
					{
						GlobalFunc_5653(iLocal_654, "COUGH", "WAVELOAD_PAIN_MALE", 24);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
						{
							TASK::TASK_PLAY_ANIM(iLocal_654, sLocal_586, "walk", 8f, -8f, -1, 48, 0, 0, 0, 0);
						}
						func_643(13, 1);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_586, "walk", 3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_654, 1f);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5303.912f, -5184.688f, (85.69025f - 3.2f), 5303.917f, -5191.534f, (88.71863f - 3.2f), 10f, 0, 1, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_1104))
					{
						iLocal_1169 = OBJECT::CREATE_OBJECT(joaat("prop_ping_pong"), 5307.675f, -5191.053f, 83.0186f, 1, 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1169, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1169, 0);
						iLocal_1104 = func_572(iLocal_1169);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1104, "PRO_BLIPCASH");
						func_419(&iLocal_1098);
						HUD::CLEAR_PRINTS();
						GlobalFunc_2238(1);
						func_374(115, "PRO_CASH", 7500, 1);
						if (!GlobalFunc_111())
						{
							func_495(190, "PRO_see", 6, 1, 1, 0);
						}
						func_492(iLocal_1104, 3000);
					}
					func_406();
				}
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_398(75, "PROHLP_BLIPS2", 1, -1, 2000);
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (MISC::GET_GAME_TIMER() > iLocal_36)
					{
						if (!func_644(110))
						{
							func_495(110, "PRO_Bills", 7, 1, 0, 0);
						}
						else if (iLocal_30[0] > 0)
						{
							func_495(158, "PRO_GenIdle", 7, 0, 0, 0);
							iLocal_30[0] = (iLocal_30[0] - 1);
						}
						iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_1104))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5307.583f, -5184.533f, 82.01889f, 5307.441f, -5191.547f, 86.56786f, 3f, 0, 1, 0) || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5307.583f, -5184.533f, 82.01889f, 5307.441f, -5191.547f, 86.56786f, 4.5f, 0, 1, 0)))
					{
						if (func_474(0f, 0, 1, 0))
						{
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1670[2], "Trevor", 0, 0, 0);
								iLocal_1163[0] = GlobalFunc_8264(iLocal_656, 1, 0, 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[0], "Michaels_weapon", 0, 0, 0);
								iLocal_1163[1] = GlobalFunc_8264(iLocal_657, 1, 0, 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[1], "Trevors_weapon", 0, 0, 0);
								GlobalFunc_8316(1, 1, 1, 0);
								func_407(6);
								func_693(5);
								CUTSCENE::START_CUTSCENE(0);
								func_387(0, 0);
								if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
								{
									CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
								}
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 10f, 1, 0, 0, 0);
								if (iLocal_95 == 0)
								{
									ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
									ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
									iLocal_95 = 1;
								}
								PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 0, 0, 0);
								iLocal_88 = 0;
								RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
								RECORDING::_0x48621C9FCA3EBD28(4);
								func_406();
							}
						}
					}
				}
				break;
			
			case 2:
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					GlobalFunc_8316(0, 1, 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1670[2], iLocal_1227, 1);
					func_377();
				}
				break;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!func_644(193))
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_10691(&uLocal_1748, cLocal_1256, "PRO_Leave", 6, 0, 0, 0, 0);
					func_643(193, 1);
				}
			}
			if (!func_644(49))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((89.4f - ENTITY::GET_ENTITY_HEADING(iLocal_654)));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.34432f, 1065353216);
			}
			if (!func_644(59))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((7.411327f * 1000f)))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 12, 0, 0);
					func_643(59, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 12, 0, 0);
				func_643(49, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				GlobalFunc_2510(uLocal_1670[2], 5299.954f, -5188.448f, 82.5183f, 242.6358f, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1185[1]))
				{
					iLocal_1185[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1185[1], uLocal_1670[2], PED::GET_PED_BONE_INDEX(uLocal_1670[2], 60309), Local_98, Local_98, 0, 0, 0, 0, 2, 1);
				}
				uLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(Local_625, Local_628, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_623, sLocal_574, "mcs_2_idle_player2", 1000f, -1000f, 4, 0, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_1670[2], iLocal_654, -1, 0, 2);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_1185[1], "mcs_2_idle_bag", sLocal_574, 1000f, 1, 0, 0, 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_623, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 9, 1, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1670[2], iLocal_1227, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[0], iLocal_656);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[1], iLocal_657);
			}
			if (!func_644(60))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5.4f * 1000f)))
				{
					iLocal_1975 = (iLocal_1975 + 93000);
					Global_Mission_Fail_State.f_12[0] = iLocal_1975;
					func_643(60, 1);
				}
			}
			if (!func_644(274))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((7.6f * 1000f)))
				{
					iLocal_1975 = (iLocal_1975 + 84000);
					Global_Mission_Fail_State.f_12[0] = iLocal_1975;
					func_643(274, 1);
				}
			}
			if (iLocal_85)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5.1f * 1000f)))
				{
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_85 = 0;
				}
			}
		}
	}
	if (func_361())
	{
		RECORDING::_0x81CBAE94390F9F89();
		PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 12, 0, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_654, 0);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1169);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1201))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1201, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1202))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1202, 0);
		}
		if (iLocal_1235 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1235);
			AUDIO::RELEASE_SOUND_ID(iLocal_1235);
			iLocal_1235 = -1;
		}
		iVar50 = 0;
		while (iVar50 < iLocal_1207)
		{
			TASK::REMOVE_COVER_POINT(iLocal_1207[iVar50]);
			iVar50++;
		}
		func_419(&iLocal_1104);
		func_419(&iLocal_1098);
		GlobalFunc_2241(&iLocal_1169);
		GlobalFunc_2241(&iLocal_1177);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 9, 12, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 9, 1, 0, 0);
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S2");
		PED::SET_PED_CAN_PEEK_IN_COVER(uLocal_1670[2], 1);
		iVar50 = 0;
		while (iVar50 < iLocal_1163)
		{
			GlobalFunc_2241(&(iLocal_1163[iVar50]));
			iVar50++;
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_387(0, 0);
		}
		GlobalFunc_8316(0, 1, 1, 0);
		iLocal_1252++;
	}
}


int func_572(int iParam0)//Position - 0x6D908
{
	return func_480(iParam0, 1, 0);
}


void func_574()//Position - 0x6D93F
{
	int iVar0;
	struct<20> Var1;
	struct<21> Var23;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		iLocal_88 = 1;
		GlobalFunc_9621(128, 0, 0);
		GlobalFunc_7632(0);
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Pro_S2");
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5310.682f, -5205.025f, 82.5146f))
		{
			iLocal_1207[0] = TASK::ADD_COVER_POINT(5310.688f, -5204.99f, 82.5199f, 0f, 2, 2, 0, 0);
		}
		iLocal_1172 = OBJECT::CREATE_OBJECT(iLocal_1246, 5298.27f, -5187.85f, 83.87f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1172, 0f, 0f, -90.52732f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1172, 1);
		iLocal_1173 = OBJECT::CREATE_OBJECT(iLocal_1247, 5298.27f, -5187.85f, 83.87f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1173, 0f, 0f, -90.52732f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1173, 1);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1173, 0);
		iLocal_1175 = OBJECT::CREATE_OBJECT(iLocal_1249, 5298.27f, -5187.85f, (83.87f + 0.075f), 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1175, 0f, 0f, -90.52732f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1175, 1);
		iLocal_1176 = OBJECT::CREATE_OBJECT(iLocal_1250, 5298.27f, -5187.85f, (83.87f + 0.075f), 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1176, 0f, 0f, -90.52732f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1176, 1);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1176, 0);
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_658);
			GlobalFunc_2510(iLocal_658, 5313.574f, -5205.261f, 82.519f, 114.018f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[2]);
			GlobalFunc_2510(uLocal_1670[2], 5310.688f, -5204.99f, 82.5199f, (355.824f + 90f), 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_1670[2], 5310.688f, -5204.99f, 82.5199f, -1, 0, 1f, 1, 1, iLocal_1207[0], 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, 5308.856f, -5206.294f, (85.7187f - 3.2f), 355.824f, 1);
			func_642(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1f, 1f, 0f);
			func_642(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1f, 1f, 0f);
			GlobalFunc_2240(&(iLocal_660[2]));
			GlobalFunc_2240(&(iLocal_660[0]));
			GlobalFunc_200(&uLocal_1748, 7);
			GlobalFunc_200(&uLocal_1748, 8);
			GlobalFunc_2240(&(iLocal_660[1]));
			GlobalFunc_2240(&(iLocal_660[3]));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_IN_COVER(iLocal_656, 0))
		{
			PED::SET_PED_CAPSULE(iLocal_656, 0.5f);
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if (!func_644(207))
			{
				func_362(207, "PRO_Return", "PRO_Return_1", 8, 1, 0, 0);
				iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000));
			}
		}
		if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_572, "Brad_Alert_Idle", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_573, "idle_d", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_569, "react_to_explosion_brad", 3))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_602) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602))
			{
				TASK::TASK_PLAY_ANIM(iLocal_658, sLocal_572, "Brad_Alert_Idle", 2f, -2f, -1, 786433, 0, 0, 0, 0);
			}
		}
		else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), 3f, 3f, 2f, 0, 1, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_658, iLocal_654, 5000, 0, 2);
		}
		if (PED::IS_PED_IN_COVER(uLocal_1670[2], 1) && ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5310.699f, -5205.046f, 84.01867f, 0.5f, 0.5f, 1.5f, 0, 1, 0))
		{
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_C", 3))
			{
				if (iLocal_63 == -1)
				{
					iLocal_63 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
				}
				if (MISC::GET_GAME_TIMER() > iLocal_63)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					Var1.f_4 = 1065353216;
					Var1.f_5 = 1065353216;
					Var1.f_9 = 1065353216;
					Var1.f_10 = 1065353216;
					Var1.f_14 = 1065353216;
					Var1.f_15 = 1065353216;
					Var1.f_17 = 1040187392;
					Var1.f_18 = 1040187392;
					Var1.f_19 = -1;
					Var23.f_4 = 1065353216;
					Var23.f_5 = 1065353216;
					Var23.f_9 = 1065353216;
					Var23.f_10 = 1065353216;
					Var23.f_14 = 1065353216;
					Var23.f_15 = 1065353216;
					Var23.f_17 = 1040187392;
					Var23.f_18 = 1040187392;
					Var23.f_19 = -1;
					Var23 = 1;
					Var23.f_2 = "Trevor_Cover_Impatient_A";
					Var23.f_1 = sLocal_571;
					Var23.f_20 = 32;
					if (iVar0 == 0)
					{
						Var23.f_2 = "Trevor_Cover_Impatient_A";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var23, &Var1, &Var1, 0.25f, 0.25f);
					}
					else if (iVar0 == 1)
					{
						Var23.f_2 = "Trevor_Cover_Impatient_B";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var23, &Var1, &Var1, 0.25f, 0.25f);
					}
					else if (iVar0 == 2)
					{
						Var23.f_2 = "Trevor_Cover_Impatient_C";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var23, &Var1, &Var1, 0.25f, 0.25f);
					}
					iLocal_63 = -1;
				}
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (!GlobalFunc_116(1))
				{
					if (GlobalFunc_74("PROHLP_PHONE4") || GlobalFunc_74("PROHLP_PHONE5"))
					{
						GlobalFunc_2238(1);
					}
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5305.638f, -5209.354f, 82.51868f, 5317.59f, -5209.529f, 85.51868f, 11f, 0, 1, 0))
				{
					if (!GlobalFunc_701())
					{
						GlobalFunc_2238(1);
						GlobalFunc_7632(1);
					}
					func_374(210, "PRO_STAY2", 7500, 1);
					func_419(&iLocal_1093);
					func_419(&iLocal_1094);
					func_484(&iLocal_1098, 5309.456f, -5207.318f, (85.7187f - 3.2f), 0);
				}
				else
				{
					if (GlobalFunc_663("PRO_STAY2", 0, 0))
					{
						GlobalFunc_635("PRO_STAY2");
					}
					func_419(&iLocal_1098);
					func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
					func_482(&iLocal_1094, &iLocal_658, 0);
					if (GlobalFunc_701())
					{
						GlobalFunc_7632(0);
					}
					if (iLocal_1979[0] == 0)
					{
						if (func_644(207) && !GlobalFunc_111())
						{
							func_374(116, "PRO_CHARGES", 7500, 1);
							if (!GlobalFunc_111())
							{
								func_495(189, "PRO_call", 6, 1, 1, 0);
							}
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602))
							{
								TASK::CLEAR_PED_TASKS(iLocal_658);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_658, 5313.905f, -5205.749f, 82.5187f, 1f, -1, 98.053f, 1056964608);
							}
							SYSTEM::SETTIMERB(0);
							iLocal_1979[0] = 1;
						}
					}
					else if (SYSTEM::TIMERB() > 11500)
					{
						if (!GlobalFunc_663("PRO_STAY2", 0, 0))
						{
							if (!GlobalFunc_663("PRO_CHARGES", 0, 0))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_36)
								{
									if ((func_644(207) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && !GlobalFunc_111())
									{
										if (!func_644(171))
										{
											func_362(171, "PRO_Idle3", "PRO_Idle3_1", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_657, iLocal_656, 3000, 2048, 2);
										}
										else if (!func_644(172))
										{
											func_362(172, "PRO_Idle3", "PRO_Idle3_2", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_657, iLocal_656, 3000, 2048, 2);
										}
										else if (!func_644(173))
										{
											func_362(173, "PRO_Idle3", "PRO_Idle3_3", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_657, iLocal_656, 3000, 2048, 2);
										}
										else if (!func_644(174))
										{
											func_362(174, "PRO_Idle3", "PRO_Idle3_4", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_657, iLocal_656, 3000, 2048, 2);
										}
										else if (!func_644(175))
										{
											func_362(175, "PRO_Idle3", "PRO_Idle3_5", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_657, iLocal_656, 3000, 2048, 2);
										}
										else if (!func_644(176))
										{
											func_362(176, "PRO_Idle3", "PRO_Idle3_6", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_657, iLocal_656, 3000, 2048, 2);
										}
										iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000));
									}
								}
							}
						}
					}
					if (!GlobalFunc_116(0))
					{
						if (!GlobalFunc_74("PROHLP_PHONE1"))
						{
							GlobalFunc_Display_Help_Text("PROHLP_PHONE1");
						}
					}
					else
					{
						if (GlobalFunc_116(1) && !GlobalFunc_666())
						{
							if (!GlobalFunc_74("PROHLP_PHONE4"))
							{
								GlobalFunc_Display_Help_Text("PROHLP_PHONE4");
							}
							if (!func_644(170))
							{
								if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
								{
									if (MISC::GET_GAME_TIMER() > (iLocal_36 - 1000))
									{
										func_495(170, "PRO_detonate", 7, 1, 0, 0);
										iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
									}
								}
							}
						}
						if (GlobalFunc_116(1) && GlobalFunc_666())
						{
							if (!GlobalFunc_74("PROHLP_PHONE5"))
							{
								GlobalFunc_Display_Help_Text("PROHLP_PHONE5");
							}
							if (!func_644(169))
							{
								if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
								{
									if (MISC::GET_GAME_TIMER() > (iLocal_36 - 1000))
									{
										func_495(169, "PRO_callit", 7, 1, 0, 0);
										iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
									}
								}
							}
						}
					}
					if (iLocal_1979[1] == 0)
					{
						if (GlobalFunc_116(1) && !GlobalFunc_666())
						{
							iLocal_1979[1] = 1;
						}
					}
					else if (iLocal_1979[2] == 0)
					{
						if (iLocal_1979[3] == 0)
						{
							if (GlobalFunc_116(1) && GlobalFunc_666())
							{
								iLocal_1979[3] = 1;
							}
						}
					}
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1233))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233) != 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233, 4);
						}
					}
					if (GlobalFunc_665(128))
					{
						func_420(PLAYER::PLAYER_ID(), 0, 0);
						func_693(3);
						HUD::CLEAR_PRINTS();
						GlobalFunc_2238(1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
						{
							AUDIO::STOP_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
						{
							AUDIO::START_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_MUTE_SPRINKLERS"))
						{
							AUDIO::START_AUDIO_SCENE("PROLOGUE_MUTE_SPRINKLERS");
						}
						if (!func_644(297))
						{
							AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_PROLOGUE_VAULT");
							func_643(297, 1);
						}
						RECORDING::_0x293220DA1B46CEBC(1.5f, 1f, 3);
						func_406();
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_658, 5313.781f, -5205.144f, 83.5237f, 0.5f, 0.5f, 2f, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_658, 713668775) != 1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_658, 5313.781f, -5205.144f, 83.5237f, 1f, 20000, 0.25f, 0, 114.0175f);
						}
					}
				}
				break;
			
			case 1:
				AUDIO::LOAD_STREAM("PROLOGUE_BLOW_THE_VAULT_MASTER", 0);
				AUDIO::PREPARE_ALARM("PROLOGUE_VAULT_ALARMS");
				if (SYSTEM::TIMERA() > 2500)
				{
					GlobalFunc_2240(&(iLocal_660[2]));
					GlobalFunc_2240(&(iLocal_660[0]));
					GlobalFunc_200(&uLocal_1748, 7);
					GlobalFunc_200(&uLocal_1748, 8);
					GlobalFunc_2240(&(iLocal_660[1]));
					GlobalFunc_2240(&(iLocal_660[3]));
					GlobalFunc_6685(1);
					func_6();
					iLocal_88 = 0;
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					func_387(0, 0);
					MISC::CLEAR_AREA(5296.97f, -5188.88f, 82.74f, 10f, 1, 0, 0, 0);
					CAM::SET_CAM_PARAMS(iLocal_1157, 5297.292f, -5187.33f, 83.8243f, 6.358143f, -8.767557f, -122.5142f, 28.3404f, 0, 3, 3, 2);
					CAM::SET_CAM_PARAMS(iLocal_1157, 5297.325f, -5187.351f, 83.82872f, 6.358143f, -8.767557f, -122.5142f, 28.3404f, 1800, 3, 3, 2);
					CAM::_0xF55E4046F6F831DC(iLocal_1157, 1.1f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1157, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1157, 2.8f);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					if (!iLocal_97)
					{
						AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
						iLocal_97 = 1;
					}
					AUDIO::PLAY_STREAM_FRONTEND();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("cashdepot");
					func_387(0, 0);
					INTERIOR::_0xAF348AFCB575A441("V_CashD_vault");
					GlobalFunc_2510(iLocal_654, 5308.671f, -5206.547f, 82.5186f, 269.1302f, 1);
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_654, iLocal_1227, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_654, iLocal_1227, 500, 1, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
					if (!iLocal_85)
					{
						RECORDING::_0x48621C9FCA3EBD28(3);
						iLocal_85 = 1;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1196[2]))
					{
						iLocal_1196[2] = OBJECT::CREATE_OBJECT(joaat("prop_vault_door_scene"), 5297.717f, -5188.909f, 81.575f, 1, 1, 0);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_1196[2], iLocal_1162, 894738638);
					}
					func_406();
				}
				break;
			
			case 2:
				AUDIO::PREPARE_ALARM("PROLOGUE_VAULT_ALARMS");
				if (ENTITY::IS_ENTITY_VISIBLE(iLocal_1175) && SYSTEM::TIMERA() > 500)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1175, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1176, 1);
				}
				if (ENTITY::IS_ENTITY_VISIBLE(iLocal_1176) && SYSTEM::TIMERA() > 1500)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1176, 0);
				}
				if (SYSTEM::TIMERA() > 1000)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1172, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1173, 1);
				}
				if (SYSTEM::TIMERA() > 1800)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1172, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1173, 1);
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1233))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233, 6);
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
					}
					if (CAM::DOES_CAM_EXIST(iLocal_1157))
					{
						CAM::_0xF55E4046F6F831DC(iLocal_1157, 0f);
						CAM::_0xE111A7C0D200CBC5(iLocal_1157, 0f);
						CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1157, 2.8f);
						CAM::DESTROY_CAM(iLocal_1157, 0);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_1157))
					{
						iLocal_1157 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
					}
					CAM::SET_CAM_PARAMS(iLocal_1157, 5292.704f, -5185.751f, 82.84772f, 9.034329f, -2.898424f, -131.6697f, 45f, 0, 0, 0, 2);
					GlobalFunc_2241(&(iLocal_1196[2]));
					func_406();
				}
				break;
			
			case 3:
				AUDIO::PREPARE_ALARM("PROLOGUE_VAULT_ALARMS");
				if (!func_644(282))
				{
					if (SYSTEM::TIMERA() > 300)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("ent_ray_pro1_vault_exp_lit", 5298.201f, -5189.052f, 83.86238f, Local_98, 1065353216, 0, 0, 0);
						CAM::SHAKE_CAM(iLocal_1157, "GRENADE_EXPLOSION_SHAKE", 3f);
						PAD::SET_PAD_SHAKE(0, 500, 256);
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1201))
							{
								uLocal_1201 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_haze", 5299f, -5189f, 82.6f, Local_98, 1065353216, 0, 0, 0, 0);
							}
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1202))
							{
								uLocal_1202 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_fog", 5299f, -5189f, 82.6f, Local_98, 1065353216, 0, 0, 0, 0);
							}
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_MUTE_SPRINKLERS"))
						{
							AUDIO::STOP_AUDIO_SCENE("PROLOGUE_MUTE_SPRINKLERS");
						}
						MISC::SET_TIME_SCALE(0.5f);
						func_643(282, 1);
					}
				}
				if (SYSTEM::TIMERA() > 400)
				{
					func_693(4);
					AUDIO::START_ALARM("PROLOGUE_VAULT_ALARMS", 0);
					GlobalFunc_2241(&iLocal_1172);
					GlobalFunc_2241(&iLocal_1173);
					GlobalFunc_2241(&iLocal_1174);
					GlobalFunc_2241(&iLocal_1175);
					GlobalFunc_2241(&iLocal_1176);
					func_406();
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 250)
				{
					func_406();
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 450)
				{
					MISC::SET_TIME_SCALE(1f);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
					}
					CAM::STOP_CAM_SHAKING(iLocal_1157, 0);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					func_362(216, "PRO_Safe", "PRO_Safe_1", 8, 1, 0, 0);
					if (!CAM::DOES_CAM_EXIST(uLocal_1159))
					{
						iLocal_1159 = CAM::CREATE_CAMERA(964613260, 1);
					}
					uLocal_609 = PED::CREATE_SYNCHRONIZED_SCENE(Local_610, Local_613, 2);
					uLocal_616 = PED::CREATE_SYNCHRONIZED_SCENE(Local_617, Local_620, 2);
					GlobalFunc_2510(iLocal_654, Vector(82.5187f, -5207.115f, 5307.475f) + Vector(0f, 0.32f, -0.08f), 272.3664f, 1);
					TASK::TASK_PLAY_ANIM(iLocal_654, sLocal_569, "react_to_explosion_player_zero", 1000f, -8f, -1, 0, (0.075f + 0.05f), 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 0, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[2]);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_609, sLocal_569, "react_to_explosion_player_two", 1000f, -1000f, 4, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_609, sLocal_569, "react_to_explosion_brad", 1000f, -1000f, 4, 0, 1148846080, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1159, uLocal_616, "react_to_explosion_cam", sLocal_570);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_609, (0.075f + 0.05f));
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_616, 0.421f);
					CAM::SET_CAM_ACTIVE(iLocal_1159, 1);
					func_387(0, 0);
					INTERIOR::_0xAF348AFCB575A441("V_CashD_reception");
					func_406();
				}
				break;
			
			case 6:
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5310.245f, -5205.663f, 85.2259f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				func_406();
				break;
			
			case 7:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_609) >= (0.085f + 0.05f))
				{
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5309.8f, -5207.6f, 85.40824f, 0f, 0f, 90f, 1065353216, 0, 0, 0);
					}
					func_406();
				}
				break;
			
			case 8:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_609) >= (0.087f + 0.05f))
				{
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5313.993f, -5207.3f, 85.34588f, 0f, 0f, 180f, 1065353216, 0, 0, 0);
					}
					func_406();
				}
				break;
			
			case 9:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_609) >= (0.35f + 0.05f))
				{
					CAM::STOP_CAM_SHAKING(iLocal_1157, 1);
					if (!CAM::DOES_CAM_EXIST(uLocal_1158))
					{
						iLocal_1158 = CAM::CREATE_CAMERA(26379945, 1);
					}
					CAM::SET_CAM_PARAMS(iLocal_1158, 5295.859f, -5188.994f, 82.99249f, 3.961173f, -0.003078f, -90.42889f, 35.78874f, 0, 0, 0, 2);
					CAM::_0xF55E4046F6F831DC(iLocal_1158, 8f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1158, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1158, 1f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1158, 0f);
					CAM::SHAKE_CAM(iLocal_1158, "HAND_SHAKE", 0.5f);
					CAM::SET_CAM_PARAMS(iLocal_1157, 5296.374f, -5188.994f, 83.0277f, 3.408814f, -0.003078f, -91.27811f, 35.78874f, 0, 0, 0, 2);
					if (CAM::DOES_CAM_EXIST(iLocal_1159))
					{
						CAM::DESTROY_CAM(iLocal_1159, 0);
					}
					CAM::_0xF55E4046F6F831DC(iLocal_1157, 8f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1157, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1157, 1.3f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1157, 0f);
					CAM::SHAKE_CAM(iLocal_1157, "HAND_SHAKE", 0.5f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1157, iLocal_1158, 3000, 0, 0);
					TASK::CLEAR_PED_TASKS(iLocal_654);
					TASK::CLEAR_PED_TASKS(uLocal_1670[2]);
					TASK::CLEAR_PED_TASKS(iLocal_658);
					func_387(0, 0);
					INTERIOR::_0xAF348AFCB575A441("V_CashD_vault");
					iLocal_1184 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cd_dust"), 5312.14f, -5209.04f, 83.02f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1184, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cd_dust"));
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5298.206f, -5189.063f, 85.28117f, 0f, 0f, 180f, 1065353216, 0, 0, 0);
					}
					func_406();
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERA() > 3000)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1670[2]);
					GlobalFunc_2510(uLocal_1670[2], 5310.688f, -5204.99f, 82.5199f, (355.824f + 90f), 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_1670[2], 5310.688f, -5204.99f, 82.5199f, -1, 0, 0f, 1, 1, iLocal_1207[0], 0);
					GlobalFunc_2510(iLocal_654, 5308.856f, -5206.294f, (85.7187f - 3.2f), 355.824f, 1);
					PED::FORCE_PED_MOTION_STATE(iLocal_654, -633298724, 0, 0, 0);
					iLocal_88 = 1;
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					func_387(0, 0);
					if (iLocal_85)
					{
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_85 = 0;
					}
					if (CAM::DOES_CAM_EXIST(iLocal_1157))
					{
						CAM::_0xF55E4046F6F831DC(iLocal_1157, 0f);
						CAM::_0xE111A7C0D200CBC5(iLocal_1157, 0f);
						CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1157, 2.8f);
						CAM::DESTROY_CAM(iLocal_1157, 0);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_1157))
					{
						iLocal_1157 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					GlobalFunc_8316(0, 1, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1065353216);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1065353216);
					}
					GlobalFunc_780(128);
					func_420(PLAYER::PLAYER_ID(), 1, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					func_377();
				}
				break;
		}
		if (iLocal_28 > 1 && iLocal_28 < 10)
		{
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5308.802f, -5204.579f, 84.01863f, 1f, 1f, 1.5f, 0, 1, 0)))
		{
			func_643(37, 1);
		}
		else
		{
			func_641(1, joaat("v_ilev_cd_door"));
			func_641(2, joaat("v_ilev_cd_door"));
		}
	}
	if (func_361())
	{
		CAM::SET_CAM_ACTIVE(iLocal_1157, 1);
		if (CAM::DOES_CAM_EXIST(iLocal_1159))
		{
			CAM::DESTROY_CAM(iLocal_1159, 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_1158))
		{
			CAM::DESTROY_CAM(iLocal_1158, 0);
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		GlobalFunc_2241(&(iLocal_1196[2]));
		GlobalFunc_2240(&(iLocal_660[2]));
		GlobalFunc_2240(&(iLocal_660[0]));
		GlobalFunc_200(&uLocal_1748, 8);
		GlobalFunc_2240(&(iLocal_660[1]));
		GlobalFunc_2240(&(iLocal_660[3]));
		GlobalFunc_2241(&iLocal_1172);
		GlobalFunc_2241(&iLocal_1173);
		GlobalFunc_2241(&iLocal_1174);
		GlobalFunc_2241(&iLocal_1175);
		GlobalFunc_2241(&iLocal_1176);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1184))
		{
			iLocal_1184 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cd_dust"), 5312.14f, -5209.04f, 83.02f, 1, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1184, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cd_dust"));
		}
		func_693(4);
		if (iLocal_1236 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1236);
			AUDIO::RELEASE_SOUND_ID(iLocal_1236);
			iLocal_1236 = -1;
		}
		if (func_644(297))
		{
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_PROLOGUE_VAULT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_MUTE_SPRINKLERS"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_MUTE_SPRINKLERS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
		}
		func_419(&iLocal_1098);
		func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
		func_482(&iLocal_1094, &iLocal_658, 0);
		GlobalFunc_2238(1);
		GlobalFunc_780(128);
		MISC::SET_TIME_SCALE(1f);
		GlobalFunc_6685(1);
		if (CAM::DOES_CAM_EXIST(iLocal_1157))
		{
			if (CAM::IS_CAM_RENDERING(iLocal_1157))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			}
		}
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		GlobalFunc_7632(1);
		TASK::CLEAR_PED_TASKS(iLocal_654);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1233))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233) != 10)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233, 9);
			}
		}
		func_641(1, joaat("v_ilev_cd_door"));
		func_641(2, joaat("v_ilev_cd_door"));
		iLocal_1252++;
	}
}






void func_580()//Position - 0x6F4D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	struct<20> Var6;
	struct<21> Var28;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		iLocal_88 = 1;
		if (!GlobalFunc_5672("PRO_Charges"))
		{
			func_6();
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5310.688f, -5204.99f, 82.5199f))
		{
			iLocal_1207[0] = TASK::ADD_COVER_POINT(5310.688f, -5204.99f, 82.5199f, 0f, 2, 2, 0, 0);
		}
		PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_660[0], 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1196[1]))
		{
			iLocal_1196[1] = OBJECT::CREATE_OBJECT(joaat("prop_1st_hostage_scene"), 5310.661f, -5206.56f, 81.575f, 1, 1, 0);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_1196[1], iLocal_1162, 592960010);
		}
		uLocal_1233 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5298.889f, -5189.087f, 82.5182f, 10f, "DES_VaultDoor001");
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1233))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233) != 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1233, 2);
			}
		}
		if (!func_644(270))
		{
			func_641(1, joaat("v_ilev_cd_door"));
			func_641(2, joaat("v_ilev_cd_door"));
		}
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, 5308.832f, -5206.525f, 82.5187f, 284.3977f, 1);
			CAM::STOP_CAM_SHAKING(iLocal_1157, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		if (!func_644(307))
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(5313.327f, -5208.245f, 82.5107f, 0.01f, joaat("v_corp_cd_chair"), 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, 1);
				func_643(307, 1);
			}
		}
		if (!func_644(308))
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(5314.864f, -5208.236f, 82.5107f, 0.01f, joaat("v_corp_cd_chair"), 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar1, 1);
				func_643(308, 1);
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_566, "main_player_two", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_567, "kick_down_player_zero", Local_603, Local_606, 1000f, -2f, -1, 790536, 0.125f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_654, uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_654, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[2], sLocal_566, "main_player_two", Local_603, Local_606, 1000f, -8f, -1, 790536, 1f, 2, 0);
					fVar3 = 0.442f;
					fVar4 = 0.883f;
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_593))
					{
						uLocal_593 = PED::CREATE_SYNCHRONIZED_SCENE(Local_603, Local_606, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_593, sLocal_566, "main_brad", 1000f, -8f, 5, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_593, fVar3);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_658, iLocal_1228, 1);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_594))
					{
						uLocal_594 = PED::CREATE_SYNCHRONIZED_SCENE(Local_603, Local_606, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_660[1], uLocal_594, sLocal_566, "main_femalehostage", 1000f, -8f, 5, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_594, fVar4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[1], 0, 0);
					}
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", Local_603, Local_606, 1000f, -8f, -1, 790529, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", Local_603, Local_606, 1000f, -8f, -1, 790529, 0, 2, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_567, "kick_down_gaurd", Local_603, Local_606, 1000f, -8f, -1, 790536, 0.1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_on_floor_gaurd", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[0], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					PED::PLAY_FACIAL_ANIM(iLocal_660[0], "002907_03_gc_pro_mcs_1", sLocal_565);
				}
				func_406();
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_566, "main_player_two", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1670[2], sLocal_566, "main_player_two") > 0.75f)
					{
						func_419(&iLocal_1093);
					}
				}
				if (!func_644(261))
				{
					func_407(3);
					func_643(261, 1);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_1093))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_566, "main_player_two", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1670[2], sLocal_566, "main_player_two") >= 1f)
						{
							func_642(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1f, 1f, 0);
							func_642(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1f, 1f, 0);
						}
					}
					func_642(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
					func_642(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
					if (func_642(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0) && func_642(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0))
					{
						if (!CAM::_0x3044240D2E0FA842())
						{
							if (MISC::GET_PROFILE_SETTING(0) == 0)
							{
								func_398(68, "PROHLP_AIM1b", 1, -1, 2000);
							}
							else if (MISC::GET_PROFILE_SETTING(0) == 1)
							{
								func_398(69, "PROHLP_AIM1c", 1, -1, 2000);
							}
							else if (MISC::GET_PROFILE_SETTING(0) == 2)
							{
								func_398(69, "PROHLP_AIM1c", 1, -1, 2000);
							}
							func_406();
						}
					}
				}
				else
				{
					func_641(1, joaat("v_ilev_cd_door"));
					func_641(2, joaat("v_ilev_cd_door"));
				}
				break;
			
			case 2:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!PAD::_IS_USING_KEYBOARD(0))
					{
						func_398(73, "PROHLP_TRADAIM", 1, -1, 2000);
					}
				}
				if ((func_644(227) || func_644(228)) || func_644(229))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[2]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[2]))) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3])))) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[0]))))
						{
							if (!func_644(230))
							{
								func_362(230, "PRO_bradhost", "PRO_bradhost_4", 6, 1, 0, 0);
							}
							else if (!func_644(231))
							{
								func_362(231, "PRO_bradhost", "PRO_bradhost_5", 6, 1, 0, 0);
							}
							else if (!func_644(232))
							{
								func_362(232, "PRO_bradhost", "PRO_bradhost_6", 6, 1, 0, 0);
							}
							else if (!func_644(233))
							{
								func_362(233, "PRO_bradhost", "PRO_bradhost_7", 6, 1, 0, 0);
							}
							else if (!func_644(234))
							{
								func_362(234, "PRO_bradhost", "PRO_bradhost_9", 6, 1, 0, 0);
							}
						}
					}
				}
				if (!GlobalFunc_111())
				{
					if (!func_644(105))
					{
						iVar2 = 0;
						while (iVar2 < iLocal_660)
						{
							func_482(&(uLocal_1099[iVar2]), &(iLocal_660[iVar2]), 1);
							iVar2++;
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_1098))
						{
							func_374(105, "PRO_AIM", 3500, 1);
							if (!GlobalFunc_111())
							{
								func_495(188, "PRO_listen", 6, 1, 1, 0);
							}
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
					{
						if (GlobalFunc_663("PRO_AIM", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				if ((func_644(67) || func_644(68)) || func_644(69))
				{
					if (!func_644(70) && !func_644(71))
					{
						if (PAD::IS_CONTROL_PRESSED(0, 25) || ((!GlobalFunc_74("PROHLP_AIM1a") && !GlobalFunc_74("PROHLP_AIM1b")) && !GlobalFunc_74("PROHLP_AIM1c")))
						{
							GlobalFunc_2238(1);
							func_643(71, 1);
						}
					}
				}
				if (MISC::GET_PROFILE_SETTING(0) == 0)
				{
					if (func_644(70) || func_644(71))
					{
						if (!func_644(72))
						{
							if (GlobalFunc_74("PROHLP_AIM2a") || GlobalFunc_74("PROHLP_AIM2b"))
							{
								if (PAD::IS_CONTROL_PRESSED(0, 25) && (PAD::IS_CONTROL_PRESSED(0, 1) || PAD::IS_CONTROL_PRESSED(0, 2)))
								{
									func_643(66, 1);
								}
								if (MISC::GET_GAME_TIMER() > iLocal_40)
								{
									if (func_644(66))
									{
										GlobalFunc_2238(1);
									}
								}
							}
							if (!PAD::_IS_USING_KEYBOARD(0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_398(72, "PROHLP_AIM3", 1, -1, 2000);
								}
							}
						}
					}
				}
				if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[2]))
				{
					iLocal_69[2] = MISC::GET_GAME_TIMER() + 250;
				}
				if (!func_644(57))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_39)
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_660[2], 1), 2.5f, 1))
						{
							AUDIO::PLAY_PAIN(iLocal_660[2], 6, 0, 0);
							iLocal_39 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(750, 1000));
							func_643(57, 1);
						}
					}
				}
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[2]) && MISC::GET_GAME_TIMER() > iLocal_69[2]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[2])) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "hostage01_standup_malehostage01", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_malehostage01", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[2], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "hostage01_standup_malehostage01", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[2], sLocal_566, "hostage01_standup_malehostage01") > 0.4f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[2], sLocal_566, "hostage01_standup_malehostage01") < 0.5f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_660[2], iLocal_654, 1000, 0, 2);
				}
				if (!GlobalFunc_111())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3))
					{
						if (!GlobalFunc_663("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_1098))
						{
							func_362(227, "PRO_bradhost", "PRO_bradhost_1", 6, 1, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd") < 0.05f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd") > 0.267f)))
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_outside_cuboard_malehostage01", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[2], sLocal_566, "idle_outside_cuboard_malehostage01") > 0.1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "hostage01_standup_malehostage01", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[3], sLocal_566, "hostage01_standup_malehostage01") > 0.9f))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "hostage01_enter_cuboard_malehostage01", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_566, "idle_inside_cuboard_malehostage01", 8f, -8f, -1, 262145, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_660[2], uLocal_1161);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
						func_387(10, 0);
					}
				}
				if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3]))
				{
					iLocal_69[3] = MISC::GET_GAME_TIMER() + 250;
				}
				if (!func_644(58))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_39)
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_660[3], 1), 2.5f, 1))
						{
							AUDIO::PLAY_PAIN(iLocal_660[3], 7, 0, 0);
							iLocal_39 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(750, 1000));
							func_643(58, 1);
						}
					}
				}
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3]) && MISC::GET_GAME_TIMER() > iLocal_69[3]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3])) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "hostage_02_standup_malehostage02", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_malehostage02", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[3], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "hostage_02_standup_malehostage02", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[3], sLocal_566, "hostage_02_standup_malehostage02") > 0.4f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[3], sLocal_566, "hostage_02_standup_malehostage02") < 0.5f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_660[3], iLocal_654, 1000, 0, 2);
				}
				if (!GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[3])))
					{
						if (!GlobalFunc_663("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_1098))
						{
							func_362(228, "PRO_bradhost", "PRO_bradhost_2", 6, 1, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "hostage01_enter_cuboard_malehostage01", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "hostage01_enter_cuboard_malehostage01", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[2], sLocal_566, "hostage01_enter_cuboard_malehostage01") > 0.349f))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd") < 0.1f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd") > 0.371f)))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_outside_cuboard_malehostage02", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[3], sLocal_566, "idle_outside_cuboard_malehostage02") > 0.1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "hostage_02_standup_malehostage02", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[3], sLocal_566, "hostage_02_standup_malehostage02") > 0.9f))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "hostage02_enter_cuboard_malehostage02", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_566, "idle_inside_cuboard_malehostage02", 8f, -8f, -1, 262145, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_660[3], uLocal_1161);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							func_387(10, 0);
						}
					}
				}
				if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[0]))
				{
					iLocal_69[0] = MISC::GET_GAME_TIMER() + 250;
				}
				if (!func_644(56))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_39)
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_660[0], 1), 2.5f, 1))
						{
							AUDIO::PLAY_PAIN(iLocal_660[0], 6, 0, 0);
							iLocal_39 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(750, 1000));
							func_643(56, 1);
						}
					}
				}
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[0]) && MISC::GET_GAME_TIMER() > iLocal_69[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_660[0])) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "guard_standup_gaurd", Local_603, Local_606, 2f, -2f, -1, 790528, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_gaurd", Local_603, Local_606, 2f, -2f, -1, 790529, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[0], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "guard_standup_gaurd", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "guard_standup_gaurd") > 0.4f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "guard_standup_gaurd") < 0.5f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_660[0], iLocal_654, 1000, 0, 2);
				}
				if (!GlobalFunc_111())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
					{
						if (!GlobalFunc_663("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_1098))
						{
							func_362(229, "PRO_bradhost", "PRO_bradhost_3", 6, 1, 0, 0);
						}
					}
				}
				if ((!func_644(227) || !func_644(228)) || !func_644(229))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
						{
							if (!func_644(180))
							{
								func_362(180, "PRO_Idle", "PRO_Idle_1", 6, 1, 0, 0);
							}
							else if (!func_644(181) && SYSTEM::TIMERA() > 15000)
							{
								func_362(181, "PRO_Idle", "PRO_Idle_2", 6, 1, 0, 0);
							}
						}
					}
				}
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_outside_cuboard_gaurd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "idle_outside_cuboard_gaurd") > 0.1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "guard_standup_gaurd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_660[0], sLocal_566, "guard_standup_gaurd") > 0.9f))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "gaurd_enter_cuboard_gaurd", Local_603, Local_606, 2f, -2f, -1, 790528, 0, 2, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_566, "idle_inside_cuboard_gaurd", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[0], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					func_387(10, 0);
				}
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
				{
					if (!func_644(165))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1670[2], -1959848946) != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0))
						{
							if (SYSTEM::TIMERA() > 18000)
							{
								if (!GlobalFunc_663("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_1098))
								{
									if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
									{
										func_495(165, "PRO_HostageF", 7, 1, 0, 0);
									}
								}
							}
						}
					}
				}
				if (GlobalFunc_74("PROHLP_HURRY"))
				{
					if (((ENTITY::IS_ENTITY_AT_COORD(iLocal_660[2], 5318.458f, -5206.782f, 84.26865f, 2f, 2.5f, 2f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[0], 5318.458f, -5206.782f, 84.26865f, 2f, 2.5f, 2f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[1], 5318.458f, -5206.782f, 84.26865f, 2f, 2.5f, 2f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[3], 5318.458f, -5206.782f, 84.26865f, 2f, 2.5f, 2f, 0, 1, 0))
					{
						GlobalFunc_2238(1);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[0], 1, 0);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[2], 1, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[0], 0, 0);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[3], 1, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[2], 0, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[0], 0, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[3], 0, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[2], 0, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_660[0], 0, 0);
				}
				if ((((ENTITY::IS_ENTITY_AT_COORD(iLocal_660[2], 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[0], 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[1], 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[3], 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0)) || SYSTEM::TIMERA() > 20000)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5308.802f, -5204.579f, 84.01863f, 1f, 1f, 1.5f, 0, 1, 0)))
					{
						func_643(37, 1);
					}
					else
					{
						func_641(1, joaat("v_ilev_cd_door"));
						func_641(2, joaat("v_ilev_cd_door"));
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5310.607f, -5204.71f, 83.51865f, 0.5f, 0.75f, 1f, 0, 1, 0))
					{
						if (!func_644(287))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_568, "get_into_cover_player_two", 5310.146f, -5208.317f, 82.519f, 0f, 0f, 0f, 1000f, -2f, -1, 790536, 0, 2, 0);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 5310.688f, -5204.99f, 82.5199f, -1, 0, 1f, 1, 1, iLocal_1207[0], 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_1670[2], uLocal_1161);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
							func_643(287, 1);
						}
						else
						{
							func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
						}
					}
				}
				if (!func_644(7))
				{
					if (func_644(165))
					{
						if (!GlobalFunc_111())
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_658, sLocal_566, "shut_cuboard_door_brad", 3))
							{
								TASK::CLEAR_PED_TASKS(iLocal_658);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_660[2], 1500, 0);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_660[3], 1500, 0);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_660[0], 1500, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_brad", Local_603, Local_606, 2f, -2f, -1, 790537, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_658, uLocal_1161);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "hostage01_standup_malehostage01", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_malehostage01", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_660[2], uLocal_1161);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
								func_387(500, 0);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "hostage_02_standup_malehostage02", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_malehostage02", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_660[3], uLocal_1161);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
								func_387(500, 0);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_on_floor_gaurd", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "guard_standup_gaurd", Local_603, Local_606, 8f, -8f, -1, 790528, 0, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_outside_cuboard_gaurd", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_660[0], uLocal_1161);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
								func_387(500, 0);
							}
							func_643(7, 1);
						}
					}
				}
				if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "idle_inside_cuboard_malehostage01", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "idle_inside_cuboard_gaurd", 3)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[1], sLocal_566, "idle_inside_cuboard_femalehostage", 3)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "idle_inside_cuboard_malehostage02", 3)) || ((((((ENTITY::IS_ENTITY_AT_COORD(iLocal_660[2], 5318.615f, -5206.959f, 84.01863f, 2f, 2.5f, 2f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[0], 5318.615f, -5206.959f, 84.01863f, 2f, 2.5f, 2f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[1], 5318.615f, -5206.959f, 84.01863f, 2f, 2.5f, 2f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_660[3], 5318.615f, -5206.959f, 84.01863f, 2f, 2.5f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_658, 5318.458f, -5206.782f, 84.26865f, 1.75f, 2.25f, 1.75f, 0, 1, 0)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1168))
					{
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_602) > 0.287f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1670[2], 5311.498f, -5204.677f, (85.71863f - 3.2f), 5311.415f, -5220.339f, (88.71863f - 3.2f), 12f, 0, 1, 0))
							{
								func_377();
							}
						}
					}
					else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(5316.64f, -5205.74f, 83.67f, 1f, joaat("v_ilev_cd_door2"), 0))
					{
						iLocal_1168 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(5316.64f, -5205.74f, 83.67f, 1f, joaat("v_ilev_cd_door2"), 1, 0, 1);
						uLocal_602 = PED::CREATE_SYNCHRONIZED_SCENE(Local_603, Local_606, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_602, sLocal_566, "shut_cuboard_door_brad", 8f, -8f, 5, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_1168, uLocal_602, "shut_cuboard_door_door", sLocal_566, 1.5f, -8f, 0, 1.5f);
					}
				}
				break;
		}
		if (!func_644(14))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_601) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_601) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_601))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_601))
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0f, 1, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_601, 0);
				}
				else
				{
					func_420(PLAYER::PLAYER_ID(), 1, 0);
					func_643(14, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_567, "kick_down_player_zero", 3))
		{
			func_643(3, 1);
			PED::SET_PED_RESET_FLAG(iLocal_654, 156, 1);
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_567, "kick_down_player_zero", 3))
		{
			if (func_644(3))
			{
				if (!func_644(48))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_654, 1063765679, 0, 0, 0);
					SYSTEM::SETTIMERB(0);
					func_643(48, 1);
				}
			}
		}
		if (func_644(48))
		{
			if (!func_644(2))
			{
				PED::SET_PED_RESET_FLAG(iLocal_654, 156, 1);
				if (SYSTEM::TIMERB() > 2000)
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_654, 1);
					func_643(2, 1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5305.638f, -5209.354f, 82.51868f, (5317.59f - 1.13f), -5209.529f, 85.51868f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5317.081f, -5209.484f, 82.51865f, 5317.07f, -5214.34f, 86.01865f, 1f, 0, 1, 0))
		{
			func_374(209, "PRO_STAY1", 7500, 1);
			iVar2 = 0;
			while (iVar2 < iLocal_660)
			{
				func_419(&(uLocal_1099[iVar2]));
				iVar2++;
			}
			func_419(&iLocal_1093);
			func_419(&iLocal_1094);
			func_484(&iLocal_1098, 5309.456f, -5207.318f, (85.7187f - 3.2f), 0);
		}
		else
		{
			if (GlobalFunc_663("PRO_STAY1", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			func_419(&iLocal_1098);
			iVar2 = 0;
			while (iVar2 < iLocal_660)
			{
				func_482(&(uLocal_1099[iVar2]), &(iLocal_660[iVar2]), 1);
				iVar2++;
			}
			if (func_644(287))
			{
				func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
			}
			func_482(&iLocal_1094, &iLocal_658, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_593) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_593) == 1f)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_658, sLocal_566, "idle_outside_cuboard_brad", Local_603, Local_606, 2f, -2f, -1, 790529, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_658, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_594) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_594) == 1f)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[1], sLocal_566, "idle_inside_cuboard_femalehostage", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[1], 0, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[1], 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "hostage01_enter_cuboard_malehostage01", 3))
		{
			if (!func_644(46))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[2], 1);
				func_643(46, 1);
			}
		}
		else if (func_644(46))
		{
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[2], 0);
			func_643(46, 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "hostage02_enter_cuboard_malehostage02", 3))
		{
			if (!func_644(47))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[3], 1);
				func_643(47, 1);
			}
		}
		else if (func_644(47))
		{
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[3], 0);
			func_643(47, 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd", 3))
		{
			if (!func_644(45))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[0], 1);
				RECORDING::_0x293220DA1B46CEBC(4f, 5f, 2);
				func_643(45, 1);
			}
		}
		else if (func_644(45))
		{
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[0], 0);
			func_643(45, 0);
		}
		if (PED::IS_PED_IN_COVER(uLocal_1670[2], 1) && ENTITY::IS_ENTITY_AT_COORD(uLocal_1670[2], 5310.699f, -5205.046f, 84.01867f, 0.5f, 0.5f, 1.5f, 0, 1, 0))
		{
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_571, "Trevor_Cover_Impatient_C", 3))
			{
				if (iLocal_63 == -1)
				{
					iLocal_63 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
				}
				if (MISC::GET_GAME_TIMER() > iLocal_63)
				{
					iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					Var6.f_4 = 1065353216;
					Var6.f_5 = 1065353216;
					Var6.f_9 = 1065353216;
					Var6.f_10 = 1065353216;
					Var6.f_14 = 1065353216;
					Var6.f_15 = 1065353216;
					Var6.f_17 = 1040187392;
					Var6.f_18 = 1040187392;
					Var6.f_19 = -1;
					Var28.f_4 = 1065353216;
					Var28.f_5 = 1065353216;
					Var28.f_9 = 1065353216;
					Var28.f_10 = 1065353216;
					Var28.f_14 = 1065353216;
					Var28.f_15 = 1065353216;
					Var28.f_17 = 1040187392;
					Var28.f_18 = 1040187392;
					Var28.f_19 = -1;
					Var28 = 1;
					Var28.f_2 = "Trevor_Cover_Impatient_A";
					Var28.f_1 = sLocal_571;
					Var28.f_20 = 32;
					if (iVar5 == 0)
					{
						Var28.f_2 = "Trevor_Cover_Impatient_A";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var28, &Var6, &Var6, 0.25f, 0.25f);
					}
					else if (iVar5 == 1)
					{
						Var28.f_2 = "Trevor_Cover_Impatient_B";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var28, &Var6, &Var6, 0.25f, 0.25f);
					}
					else if (iVar5 == 2)
					{
						Var28.f_2 = "Trevor_Cover_Impatient_C";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_1670[2], &Var28, &Var6, &Var6, 0.25f, 0.25f);
					}
					iLocal_63 = -1;
				}
			}
		}
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[2], sLocal_566, "hostage01_enter_cuboard_malehostage01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[3], sLocal_566, "hostage02_enter_cuboard_malehostage02", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_566, "gaurd_enter_cuboard_gaurd", 3))
		{
			if ((!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_660[2]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_660[3])) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_660[0]))
			{
				if (!func_644(151))
				{
					GlobalFunc_173(&uLocal_1748, 8, iLocal_660[0], "PROVICTIM1", 0, 1);
					GlobalFunc_5653(iLocal_660[0], "PRO_FLAA", "PROVICTIM1", 3);
					func_643(151, 1);
				}
				else if (!func_644(152))
				{
					GlobalFunc_173(&uLocal_1748, 8, iLocal_660[3], "PROVICTIM1", 0, 1);
					GlobalFunc_5653(iLocal_660[3], "PRO_FLAB", "PROVICTIM1", 3);
					func_643(152, 1);
				}
				else if (!func_644(153))
				{
					GlobalFunc_173(&uLocal_1748, 8, iLocal_660[2], "PROVICTIM1", 0, 1);
					GlobalFunc_5653(iLocal_660[2], "PRO_FLAC", "PROVICTIM1", 3);
					func_643(153, 1);
				}
				else if (!func_644(154))
				{
					GlobalFunc_173(&uLocal_1748, 8, iLocal_660[0], "PROVICTIM1", 0, 1);
					GlobalFunc_5653(iLocal_660[0], "PRO_FLAD", "PROVICTIM1", 3);
					func_643(154, 1);
				}
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 32, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 34, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 35, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 33, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	}
	if (func_361())
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (CAM::DOES_CAM_EXIST(iLocal_1159))
		{
			CAM::DESTROY_CAM(iLocal_1159, 0);
		}
		CAM::STOP_CAM_SHAKING(iLocal_1157, 1);
		func_419(&iLocal_1098);
		func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
		func_482(&iLocal_1094, &iLocal_658, 0);
		func_419(&(uLocal_1099[2]));
		func_419(&(uLocal_1099[0]));
		func_419(&(uLocal_1099[1]));
		func_419(&(uLocal_1099[3]));
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_658, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[2], 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[0], 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[1], 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[3], 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_654, 1);
		GlobalFunc_2241(&(iLocal_1196[1]));
		iLocal_1252++;
	}
}

void func_581()//Position - 0x71C06
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 0, 0);
		if (GlobalFunc_74("CMN_FPSHELP"))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_5105();
		}
		else
		{
			func_6();
		}
		PED::SET_PED_AO_BLOB_RENDERING(iLocal_660[1], 1);
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_1", 4);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1196[1]))
		{
			iLocal_1196[1] = OBJECT::CREATE_OBJECT(joaat("prop_1st_hostage_scene"), 5310.661f, -5206.56f, 81.575f, 1, 1, 0);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_1196[1], iLocal_1162, 592960010);
		}
		if (func_417())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_IN_COVER(iLocal_656, 0))
		{
			PED::SET_PED_CAPSULE(iLocal_656, 0.5f);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			uLocal_601 = PED::CREATE_SYNCHRONIZED_SCENE(5305.51f, -5190.7f, 82.52f, Local_98, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_601, 1);
			if (!CAM::DOES_CAM_EXIST(iLocal_1159))
			{
				iLocal_1159 = CAM::CREATE_CAMERA(964613260, 1);
			}
			CAM::SET_CAM_ACTIVE(iLocal_1159, 1);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1159, uLocal_601, "blendout_pro_mcs_1_cam", sLocal_564);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-87.2f - ENTITY::GET_ENTITY_HEADING(iLocal_654)));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2f, 1065353216);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_566, "main_player_two", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(uLocal_1670[2], sLocal_566, "main_player_two", PED::GET_SYNCHRONIZED_SCENE_RATE(uLocal_593));
		}
		if (!func_644(5))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_601) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_601) >= 0.3f)
			{
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_593, 1f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_594, 1f);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_658, 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[1], 1);
				func_643(5, 1);
			}
		}
		if (!func_644(279))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_601) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_601) >= 0.4f)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[2], sLocal_566, "main_player_two", Local_603, Local_606, 1000f, -8f, -1, 790536, 1f, 2, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[2], sLocal_566, "main_player_two", Local_603, Local_606, 1000f, -8f, -1, 790536, 0, 2, 0);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
				func_643(279, 1);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			GlobalFunc_2510(iLocal_654, 5308.91f, -5206.311f, 82.5186f, 272.0266f, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_567, "kick_down_player_zero", Local_603, Local_606, 1000f, -2f, -1, 790536, 0.125f, 2, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_654, uLocal_1161);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 0, 0);
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
			{
				func_495(235, "PRO_hostf", 7, 1, 0, 0);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_1670[2], iLocal_660[0], -1, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_SecurityGuard_Tiedup", 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_567, "kick_down_gaurd", Local_603, Local_606, 1000f, -8f, -1, 790536, 0.1f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_566, "idle_on_floor_gaurd", Local_603, Local_606, 8f, -8f, -1, 790529, 0, 2, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_660[0], uLocal_1161);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
			PED::PLAY_FACIAL_ANIM(iLocal_660[0], "002907_03_gc_pro_mcs_1", sLocal_565);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[0], 0, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Male_Hostage_1", 0))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[2], sLocal_566, "idle_on_floor_malehostage01", Local_603, Local_606, 1000f, -8f, -1, 790529, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[2], 0, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Male_Hostage_2", 0))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[3], sLocal_566, "idle_on_floor_malehostage02", Local_603, Local_606, 1000f, -8f, -1, 790529, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[3], 0, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[0], iLocal_656);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[1], iLocal_657);
		}
		switch (iLocal_28)
		{
			case 0:
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Tiedup", iLocal_660[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_1", iLocal_660[2], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_2", iLocal_660[3], 0);
				}
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_654, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_660[0], "PRO_SecurityGuard_Tiedup", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_660[2], "PRO_Male_Hostage_1", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_660[3], "PRO_Male_Hostage_2", 0, 0, 0);
					iLocal_1163[0] = GlobalFunc_8264(iLocal_656, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[0], "Michaels_weapon", 0, 0, 0);
					iLocal_1163[1] = GlobalFunc_8264(iLocal_657, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1163[1], "Trevors_weapon", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_657, "Trevor", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(2048);
					func_387(0, 0);
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
					}
					iLocal_88 = 0;
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), 15f, 1, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1670[2], iLocal_1227, 1);
					fVar0 = 0.106f;
					fVar1 = 0.211f;
					uLocal_593 = PED::CREATE_SYNCHRONIZED_SCENE(Local_603, Local_606, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_593, sLocal_566, "main_brad", 1000f, -8f, 5, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_593, fVar0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_658, iLocal_1228, 1);
					uLocal_594 = PED::CREATE_SYNCHRONIZED_SCENE(Local_603, Local_606, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_660[1], uLocal_594, sLocal_566, "main_femalehostage", 1000f, -8f, 5, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_594, fVar1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[1], 0, 0);
					func_406();
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_593) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_594))
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_593, 0f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_594, 0f);
					func_406();
				}
				break;
			
			case 2:
				if (!func_644(50))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2.442666f * 1000f)))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("PRO_SecurityGuard_Tiedup", joaat("cs_prolsec_02"));
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
							func_643(50, 1);
						}
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-87.2f - ENTITY::GET_ENTITY_HEADING(iLocal_654)));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2f, 1065353216);
					func_419(&iLocal_1093);
					func_643(270, 1);
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1670[2], sLocal_566, "main_player_two", 3))
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_1670[2], sLocal_566, "main_player_two", 1f);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_593))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_593, 0.442f);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_593))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_594, 0.883f);
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_593, 1f);
						PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_594, 1f);
						PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_658, 1);
						PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_660[1], 1);
					}
					func_693(2);
					GlobalFunc_8316(0, 1, 0, 0);
					func_406();
				}
				break;
			
			case 3:
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (!func_644(120))
					{
						func_495(116, "PRO_Charges", 8, 0, 0, 0);
						func_643(120, 1);
					}
				}
				if (!func_644(312))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_654, sLocal_567, "kick_down_player_zero", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_654, sLocal_567, "kick_down_player_zero") >= 0.806f))
					{
						CAM::RENDER_SCRIPT_CAMS(0, 1, 1500, 1, 0, 0);
						func_643(312, 1);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_601) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_601) >= 1f)
				{
					func_377();
				}
				break;
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1960) != 3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1960, 3, 0, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1961) != 3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1961, 3, 0, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1962) != 3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1962, 3, 0, 1);
		}
	}
	if (func_361())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1163[0], iLocal_656);
		}
		iVar3 = 0;
		while (iVar3 < iLocal_1163)
		{
			GlobalFunc_2241(&(iLocal_1163[iVar3]));
			iVar3++;
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_387(0, 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_1159))
		{
			if (!CAM::IS_CAM_RENDERING(iLocal_1159))
			{
				CAM::DESTROY_CAM(iLocal_1159, 0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1670[2], iLocal_1227, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_658, iLocal_1228, 1);
		func_419(&(uLocal_1099[0]));
		GlobalFunc_8316(0, 1, 1, 0);
		iLocal_1252++;
	}
}

void func_582()//Position - 0x725BE
{
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		iLocal_88 = 1;
		iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7000));
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_1", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
		}
		func_374(225, "PRO_WALK", 7500, 1);
		if (func_417())
		{
			TASK::CLEAR_PED_TASKS(iLocal_654);
			TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_1670[2], sLocal_564, "idle_loop_player_two", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_658, sLocal_564, "idle_loop_brad", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[1], sLocal_564, "idle_loop_femalehostage", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[2], sLocal_564, "idle_loop_malehostage01", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[3], sLocal_564, "idle_loop_malehostage02", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[0], sLocal_564, "idle_loop_gaurd", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
			PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_660[0], 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		PED::SET_PED_CAPSULE(iLocal_658, 0.75f);
		PED::SET_PED_CAPSULE(iLocal_660[1], 0.75f);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Tiedup", iLocal_660[0], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_1", iLocal_660[2], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_2", iLocal_660[3], 0);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
			{
				if (!func_644(211))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.053f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(211, "PRO_SUBTITLE1", 3000, 1);
						}
						else
						{
							func_643(211, 1);
						}
					}
				}
				else if (!func_644(212))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.12f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(212, "PRO_SUBTITLE2", 4000, 1);
						}
						else
						{
							func_643(212, 1);
						}
					}
				}
				else if (!func_644(213))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.23f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(213, "PRO_SUBTITLE3", 4000, 1);
						}
						else
						{
							func_643(213, 1);
						}
					}
				}
				else if (!func_644(214))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.36f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(214, "PRO_SUBTITLE4", 3000, 1);
						}
						else
						{
							func_643(214, 1);
						}
					}
				}
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_591))
			{
				uLocal_591 = PED::CREATE_SYNCHRONIZED_SCENE(Local_595, Local_598, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_591, sLocal_564, "idle_loop_player_two", 1000f, -8f, 5, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_591, 1);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_564, "idle_loop_gaurd", 3))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[0], sLocal_564, "idle_loop_gaurd", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[0], 0, 0);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_592))
			{
				uLocal_592 = PED::CREATE_SYNCHRONIZED_SCENE(Local_595, Local_598, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_592, sLocal_564, "idle_loop_brad", 1000f, -8f, 5, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_660[1], uLocal_592, sLocal_564, "idle_loop_femalehostage", 1000f, -8f, 5, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[1], 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_592, 1);
			}
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_398(78, "CMN_FPSHELP", 1, -1, 2000);
			}
		}
		if (!PED::IS_PED_STOPPED(iLocal_654) && !TASK::IS_PED_STILL(iLocal_654))
		{
			func_643(104, 1);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.75f) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_591))
		{
			if (!func_644(183))
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					func_362(183, "PRO_Intro", "PRO_Intro_8", 7, 1, 0, 0);
				}
			}
			else if (SYSTEM::TIMERA() > 500)
			{
				if (!func_644(104))
				{
					func_398(104, "PROHLP_WALK", 1, -1, 2000);
					if (!GlobalFunc_111())
					{
						func_495(184, "PRO_quiet", 7, 1, 0, 0);
					}
				}
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					switch (iLocal_29)
					{
						case 0:
							if (!GlobalFunc_5672("PRO_Intro_8"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_36)
								{
									if (!GlobalFunc_111())
									{
										iLocal_36 = MISC::GET_GAME_TIMER() + 2500;
										iLocal_29++;
									}
								}
							}
							break;
						
						case 1:
							if (!GlobalFunc_5672("PRO_Intro_8"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_36)
								{
									func_495(127, "PRO_Door", 7, 1, 0, 0);
									if (!GlobalFunc_111())
									{
										iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
										iLocal_29++;
									}
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_5672("PRO_Door"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_36)
								{
									func_495(108, "PRO_Back", 7, 1, 0, 0);
									if (!GlobalFunc_111())
									{
										iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
										iLocal_29++;
									}
								}
							}
							break;
						
						case 3:
							if (!GlobalFunc_5672("PRO_Back"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_36)
								{
									func_495(168, "PRO_Idle1T", 7, 1, 0, 0);
									if (!GlobalFunc_111())
									{
										iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
										iLocal_29++;
									}
								}
							}
							break;
						
						case 4:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						
						case 5:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(168, "PRO_Idle1T", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						
						case 6:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						
						case 7:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(168, "PRO_Idle1T", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						
						case 8:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						
						case 9:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(168, "PRO_Idle1T", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						
						case 10:
							if (MISC::GET_GAME_TIMER() > iLocal_36)
							{
								func_495(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!GlobalFunc_111())
								{
									iLocal_36 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_29++;
								}
							}
							break;
						}
					}
				}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5316.58f, -5205.754f, 82.51865f, 5305.575f, -5205.737f, 86.51865f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_654, 5309.496f, -5207.672f, 84.01863f, 1f, 1.5f, 1.5f, 0, 1, 0))
		{
			if (func_474(0f, 0, 1, 1))
			{
				func_377();
			}
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1960) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1960) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1960, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1960, 4, 0, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1961) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1961) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1961, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1961, 4, 0, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1962) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1962) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1962, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1962, 4, 0, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PED::SET_PED_RESET_FLAG(iLocal_654, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (func_361())
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1159))
		{
			CAM::DESTROY_CAM(iLocal_1159, 0);
		}
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
		}
		iLocal_1252++;
	}
}

void func_583()//Position - 0x73035
{
	int iVar0;
	float fVar1;
	
	if (func_467())
	{
		func_420(PLAYER::PLAYER_ID(), 0, 0);
		GlobalFunc_5077();
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_655, 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_658, 1, -1, "DEFAULT_ACTION");
		GlobalFunc_585(124, 0);
		GlobalFunc_585(125, 0);
		func_403(&(iLocal_660[2]), joaat("a_m_m_prolhost_01"), Local_113[0 /*3*/], fLocal_126[0], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[2], 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[2], 208, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_660[2], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_660[2], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_660[2], 101);
		GlobalFunc_173(&uLocal_1748, 7, iLocal_660[2], "PROHOSTAGE2", 0, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[2], 1);
		func_403(&(iLocal_660[0]), joaat("ig_prolsec_02"), Local_113[1 /*3*/], fLocal_126[1], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[0], 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[0], 208, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_660[0], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_660[0], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_660[0], 101);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[0], 1);
		func_403(&(iLocal_660[1]), joaat("a_f_m_prolhost_01"), Local_113[2 /*3*/], fLocal_126[2], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[1], 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[1], 208, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_660[1], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_660[1], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_660[1], 101);
		PED::SET_PED_AO_BLOB_RENDERING(iLocal_660[1], 0);
		GlobalFunc_173(&uLocal_1748, 8, iLocal_660[1], "PROHOSTAGE", 0, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[1], 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_660[1], 0);
		func_403(&(iLocal_660[3]), joaat("a_m_m_prolhost_01"), Local_113[3 /*3*/], fLocal_126[3], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[3], 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_660[3], 208, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_660[3], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_660[3], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_660[3], 101);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_660[3], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_660[3], 3, 1, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[3], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_prolsec_02"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_prolhost_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_prolhost_01"));
		func_482(&(uLocal_1099[0]), &(iLocal_660[0]), 1);
		iVar0 = 0;
		while (iVar0 < iLocal_660)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_660[iVar0], 1);
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1177))
		{
			iLocal_1177 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cd_entrydoor"), Local_307, 1, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1177, 1);
		}
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Pro_S1");
		iLocal_88 = 0;
		if (!CAM::DOES_CAM_EXIST(iLocal_1157))
		{
			iLocal_1157 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		CAM::SET_CAM_PARAMS(iLocal_1157, 5314.386f, -5210.131f, 83.93124f, 1.569747f, 0f, 83.86822f, 22.58505f, 0, 1, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(1, 1, 1, 0);
		func_387(0, 0);
		INTERIOR::_0xAF348AFCB575A441("V_CashD_reception");
		GlobalFunc_5077();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
		func_500(Local_101, 1101004800, 0);
		func_407(2);
		while (((!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 0) && !(GlobalFunc_486() || Global_90001.f_10 > 0)) && !GlobalFunc_Is_Mission_Retry()) && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			func_387(0, 0);
			GlobalFunc_5077();
		}
		func_693(1);
		while (!AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PRO_IG_1", 0))
		{
			func_387(0, 0);
			GlobalFunc_5077();
			func_615();
		}
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		SYSTEM::SETTIMERA(0);
		HUD::LOCK_MINIMAP_ANGLE(15);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1196[0]))
		{
			iLocal_1196[0] = OBJECT::CREATE_OBJECT(joaat("prop_1st_prologue_scene"), 5310.661f, -5211.665f, 81.575f, 1, 1, 0);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_1196[0], iLocal_1162, 592960010);
		}
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_1", 8);
		if (func_417())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_656, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Tiedup", iLocal_660[0], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_1", iLocal_660[2], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_2", iLocal_660[3], 0);
		}
		switch (iLocal_28)
		{
			case 0:
				ENTITY::SET_ENTITY_HEADING(iLocal_654, 10.692f);
				if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
				{
					HUD::SET_TEXT_SCALE(0.675f, 0.675f);
					fVar1 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.675f, 0);
				}
				else
				{
					HUD::SET_TEXT_SCALE(0.45f, 0.45f);
					fVar1 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.45f, 0);
				}
				HUD::SET_TEXT_CENTRE(1);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PRO_SETTING");
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.5f - (fVar1 / 2f)), 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
				GlobalFunc_5077();
				if (SYSTEM::TIMERA() > 4500)
				{
					uLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(Local_595, Local_598, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_654, uLocal_590, sLocal_564, "michael_main_player_zero", 1000f, -1.5f, 5, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_654, 0, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_590, sLocal_564, "main_player_two", 1000f, -8f, 5, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_590, sLocal_564, "main_brad", 1000f, -8f, 5, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_658, iLocal_1228, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_660[1], uLocal_590, sLocal_564, "main_femalehostage", 1000f, -8f, 5, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[1], 0, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_1177, uLocal_590, "Main_EntryDoor", sLocal_564, 8f, -8f, 0, 1148846080);
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_590);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_564, "main_malehostage01", Local_595, Local_598, 1000f, -8f, -1, 790536, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_564, "idle_loop_malehostage01", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[2], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_564, "main_malehostage02", Local_595, Local_598, 1000f, -8f, -1, 790536, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_564, "idle_loop_malehostage02", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_660[3], uLocal_1161);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_660[0], uLocal_590, sLocal_564, "main_gaurd", 1000f, -8f, 5, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[0], 0, 0);
					PED::PLAY_FACIAL_ANIM(iLocal_660[0], "main_gaurd_facial", sLocal_564);
					if (!CAM::DOES_CAM_EXIST(iLocal_1159))
					{
						iLocal_1159 = CAM::CREATE_CAMERA(964613260, 1);
					}
					RECORDING::_0x48621C9FCA3EBD28(4);
					CAM::PLAY_CAM_ANIM(iLocal_1159, "main_camera", sLocal_564, Local_595, Local_598, 0, 2);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(1);
					func_406();
				}
				break;
			
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (SYSTEM::TIMERA() > 500)
				{
					func_406();
				}
				break;
			
			case 2:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_590)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) > 0.21f)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
					}
					if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
					{
						func_398(95, "PROHLP_RADAR", 1, 7500, 2000);
						SYSTEM::SETTIMERB(0);
					}
					func_406();
				}
				break;
			
			case 3:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_590)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.5f)
				{
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_660[0], 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
					func_406();
				}
				break;
			
			case 4:
				if ((CAM::IS_CAM_PLAYING_ANIM(iLocal_1159, "main_camera", sLocal_564) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_1159) >= 0.99f) || !CAM::IS_CAM_PLAYING_ANIM(iLocal_1159, "main_camera", sLocal_564))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_654, 2106541073) == 7 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5316.58f, -5205.754f, 82.51865f, 5305.575f, -5205.737f, 86.51865f, 5f, 0, 1, 0))
					{
						if (!GlobalFunc_74("CMN_FPSHELP"))
						{
							GlobalFunc_2238(1);
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(32.54785f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.712918f, 1065353216);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0f, 1, 0);
							TASK::CLEAR_PED_TASKS(iLocal_654);
						}
						GlobalFunc_8316(0, 1, 1, 0);
						func_377();
					}
				}
				break;
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_1159))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_1159))
				{
					if (!func_644(313))
					{
						if (CAM::IS_CAM_PLAYING_ANIM(iLocal_1159, "main_camera", sLocal_564) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_1159) >= 0.606985f)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							func_643(313, 1);
						}
					}
					if (CAM::IS_CAM_PLAYING_ANIM(iLocal_1159, "main_camera", sLocal_564) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_1159) >= 0.625f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_654);
						func_420(PLAYER::PLAYER_ID(), 0, 256);
						ENTITY::SET_ENTITY_HEADING(iLocal_654, 20f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-1.6f, 1065353216);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					}
				}
			}
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_590))
		{
			if (!func_644(300))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0f && func_584(iLocal_1159))
				{
					CAM::_0xF55E4046F6F831DC(iLocal_1159, 1.2f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1159, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1159, 3f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1159, 0f);
					func_643(300, 1);
				}
			}
			else if (!func_644(301))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= (0.072f - 0.01f) && func_584(iLocal_1159))
				{
					CAM::_0xF55E4046F6F831DC(iLocal_1159, 2.45f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1159, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1159, 3f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1159, 0f);
					func_643(301, 1);
				}
			}
			else if (!func_644(302))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= (0.113f - 0.01f) && func_584(iLocal_1159))
				{
					CAM::_0xF55E4046F6F831DC(iLocal_1159, 2f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1159, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1159, 4f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1159, 0f);
					func_643(302, 1);
				}
			}
			else if (!func_644(303))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= (0.199f - 0.01f) && func_584(iLocal_1159))
				{
					CAM::_0xF55E4046F6F831DC(iLocal_1159, 6f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1159, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1159, 2f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1159, 0f);
					func_643(303, 1);
				}
			}
			else if (!func_644(304))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= (0.253f - 0.01f) && func_584(iLocal_1159))
				{
					CAM::_0xF55E4046F6F831DC(iLocal_1159, 1.75f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1159, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1159, 2.5f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1159, 0f);
					func_643(304, 1);
				}
			}
			else if (!func_644(305))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= (0.349f - 0.01f) && func_584(iLocal_1159))
				{
					CAM::_0xF55E4046F6F831DC(iLocal_1159, 10f);
					CAM::_0xE111A7C0D200CBC5(iLocal_1159, 1f);
					CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_1159, 2f);
					CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_1159, 0f);
					GlobalFunc_2241(&(iLocal_1196[0]));
					func_643(305, 1);
				}
			}
			else if (!func_644(306))
			{
				if ((CAM::IS_CAM_PLAYING_ANIM(iLocal_1159, "main_camera", sLocal_564) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_1159) >= 0.9f) || !CAM::IS_CAM_PLAYING_ANIM(iLocal_1159, "main_camera", sLocal_564))
				{
					CAM::SET_CAM_PARAMS(iLocal_1157, 5312.071f, -5213.577f, 84.14571f, -5.135734f, 0.003036f, 15.53719f, 50f, 0, 1, 1, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1157, iLocal_1159, 500, 2, 2);
					func_643(306, 1);
				}
			}
		}
		if (!func_644(299))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_590)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.47f)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_pro_door_splinters", 5309.9f, -5208.2f, 83.7f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
				}
				func_643(299, 1);
			}
		}
		if (func_644(95))
		{
			if (SYSTEM::TIMERB() < 5000)
			{
				if (((SYSTEM::TIMERB() / 250) % 2) == 0)
				{
					HUD::DISPLAY_RADAR(1);
				}
				else
				{
					HUD::DISPLAY_RADAR(0);
				}
			}
			else if (SYSTEM::TIMERB() > 5000 && !func_644(74))
			{
				iLocal_88 = 1;
				func_643(74, 1);
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_398(78, "CMN_FPSHELP", 1, -1, 2000);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
			{
				if (!func_644(211))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.053f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(211, "PRO_SUBTITLE1", 3000, 1);
						}
						else
						{
							func_643(211, 1);
						}
					}
				}
				else if (!func_644(212))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.12f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(212, "PRO_SUBTITLE2", 4000, 1);
						}
						else
						{
							func_643(212, 1);
						}
					}
				}
				else if (!func_644(213))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.23f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(213, "PRO_SUBTITLE3", 4000, 1);
						}
						else
						{
							func_643(213, 1);
						}
					}
				}
				else if (!func_644(214))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 0.36f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::_0x57D760D55F54E071(1);
							func_374(214, "PRO_SUBTITLE4", 3000, 1);
						}
						else
						{
							func_643(214, 1);
						}
					}
				}
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_591))
			{
				uLocal_591 = PED::CREATE_SYNCHRONIZED_SCENE(Local_595, Local_598, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1670[2], uLocal_591, sLocal_564, "idle_loop_player_two", 1000f, -8f, 5, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_1670[2], 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_591, 1);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_660[0], sLocal_564, "idle_loop_gaurd", 3))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_660[0], sLocal_564, "idle_loop_gaurd", Local_595, Local_598, 8f, -8f, -1, 790537, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[0], 0, 0);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_590) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_592))
			{
				uLocal_592 = PED::CREATE_SYNCHRONIZED_SCENE(Local_595, Local_598, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_658, uLocal_592, sLocal_564, "idle_loop_brad", 1000f, -8f, 5, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_660[1], uLocal_592, sLocal_564, "idle_loop_femalehostage", 1000f, -8f, 5, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_658, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_660[1], 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_592, 1);
			}
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1960) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1960) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1960, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1960, 4, 0, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1961) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1961) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1961, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1961, 4, 0, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1962) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1962) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1962, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1962, 4, 0, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PED::SET_PED_RESET_FLAG(iLocal_654, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (func_361())
	{
		Local_307.f_1 = -5208.056f;
		Local_310.f_2 = 160f;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1177, Local_307, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1177, Local_310, 2, 1);
		RECORDING::_0x81CBAE94390F9F89();
		if (!CAM::_0x3044240D2E0FA842())
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(0, 1, 1, 0);
		}
		CAM::STOP_CAM_SHAKING(iLocal_1157, 1);
		HUD::UNLOCK_MINIMAP_ANGLE();
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[1], 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[0], 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[2], 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_660[3], 0);
		iLocal_1252++;
	}
}

int func_584(int iParam0)//Position - 0x74241
{
	Local_1964 = { Local_1967 };
	Local_1967 = { CAM::GET_CAM_COORD(uParam0) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1964, Local_1967, 1) > 0.5f)
	{
		return 1;
	}
	return 0;
}





void func_589()//Position - 0x742CB
{
	if (func_467())
	{
		GlobalFunc_601(23, 1);
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 1);
		CAM::_0xDB90C6CCA48940F1(0);
		PATHFIND::_SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(1);
		HUD::ALLOW_SONAR_BLIPS(0);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_YANKTON_CEMETARY", 0, 1);
		VEHICLE::_0x35E0654F4BAD7971(0);
		GlobalFunc_5077();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
		func_420(PLAYER::PLAYER_ID(), 0, 0);
		GlobalFunc_52(0, 1);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
		GlobalFunc_2510(iLocal_654, Local_101, 10.692f, 1);
		GlobalFunc_138();
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_f_m_prolhost_01"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_m_prolhost_01"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 1);
		HUD::REQUEST_ADDITIONAL_TEXT("PROLOG", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
			GlobalFunc_5077();
		}
		STREAMING::REQUEST_PTFX_ASSET();
		while (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			SYSTEM::WAIT(0);
			GlobalFunc_5077();
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1960))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1960, joaat("v_ilev_cd_door2"), 5316.65f, -5205.74f, 83.67f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1961))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1961, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1962))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1962, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1963))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1963, joaat("v_ilev_cd_door3"), 5305.46f, -5177.75f, 83.67f, 1, 1, 0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Foley", 0))
		{
			SYSTEM::WAIT(0);
			GlobalFunc_5077();
		}
		PED::ADD_RELATIONSHIP_GROUP("FRIEND", &iLocal_1229);
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_1230);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_1231);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1230, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1229);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1229, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1230, iLocal_1229);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1229, iLocal_1230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1231, iLocal_1229);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1229, iLocal_1231);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1230, iLocal_1231);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1231, iLocal_1230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1231);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1231, 1862763509);
		func_599();
		STREAMING::REQUEST_IPL("prologue06_int");
		iLocal_1162 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_101, "V_CashDepot");
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1162);
		while (!INTERIOR::IS_INTERIOR_READY(iLocal_1162))
		{
			SYSTEM::WAIT(0);
			GlobalFunc_5077();
		}
		STREAMING::REQUEST_IPL("prologue01");
		STREAMING::REQUEST_IPL("prologue02");
		STREAMING::REQUEST_IPL("prologue03");
		STREAMING::REQUEST_IPL("prologue04");
		STREAMING::REQUEST_IPL("prologue05");
		STREAMING::REQUEST_IPL("prologue06");
		STREAMING::REQUEST_IPL("prologuerd");
		STREAMING::REQUEST_IPL("Prologue01c");
		STREAMING::REQUEST_IPL("Prologue01d");
		STREAMING::REQUEST_IPL("Prologue01e");
		STREAMING::REQUEST_IPL("Prologue01f");
		STREAMING::REQUEST_IPL("Prologue01g");
		STREAMING::REQUEST_IPL("prologue01h");
		STREAMING::REQUEST_IPL("prologue01i");
		STREAMING::REQUEST_IPL("prologue01j");
		STREAMING::REQUEST_IPL("prologue01k");
		STREAMING::REQUEST_IPL("prologue01z");
		STREAMING::REQUEST_IPL("prologue03b");
		STREAMING::REQUEST_IPL("prologue04b");
		STREAMING::REQUEST_IPL("prologue05b");
		STREAMING::REQUEST_IPL("prologue06b");
		STREAMING::REQUEST_IPL("prologuerdb");
		STREAMING::REQUEST_IPL("prologue_occl");
		STREAMING::REQUEST_IPL("DES_ProTree_start");
		STREAMING::REQUEST_IPL("DES_ProTree_start_lod");
		STREAMING::REQUEST_IPL("prologue04_cover");
		STREAMING::REQUEST_IPL("prologue03_grv_fun");
		STREAMING::REQUEST_IPL("prologue_LODLights");
		func_598("prologue_LODLights");
		STREAMING::REQUEST_IPL("prologue_DistantLights");
		func_598("prologue_DistantLights");
		STREAMING::REMOVE_IPL("prologue03_grv_dug");
		STREAMING::REMOVE_IPL("prologue_grv_torch");
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", 1);
		MISC::CLEAR_AREA(Local_101, 1000f, 1, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_101 - Vector(1000f, 1000f, 1000f), Local_101 + Vector(1000f, 1000f, 1000f), 0, 1, 1, 1);
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5297.08f, -5182.991f, 82.5187f))
		{
			iLocal_1218[0] = TASK::ADD_COVER_POINT(5297.08f, -5182.991f, 82.5187f, 274.0717f, 1, 2, 1, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5315.534f, -5182.381f, 82.5186f))
		{
			iLocal_1218[1] = TASK::ADD_COVER_POINT(5315.534f, -5182.381f, 82.5186f, 182.4798f, 3, 2, 1, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5364.878f, -5182.828f, 81.6339f))
		{
			iLocal_1218[2] = TASK::ADD_COVER_POINT(5364.878f, -5182.828f, 81.6339f, 88.5395f, 1, 2, 1, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5364.878f, -5182.828f, 81.6339f))
		{
			iLocal_1218[3] = TASK::ADD_COVER_POINT(5364.878f, -5182.828f, 81.6339f, 88.5395f, 1, 2, 1, 0);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5364.878f, -5182.828f, 81.6339f))
		{
			iLocal_1218[4] = TASK::ADD_COVER_POINT(5364.878f, -5182.828f, 81.6339f, 88.5395f, 1, 2, 1, 0);
		}
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZONE_LIST_YANKTON", 1, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		VEHICLE::SET_RANDOM_TRAINS(0);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("SNOW");
		MISC::LOAD_CLOUD_HAT("RAIN", 0);
		CLOCK::SET_CLOCK_DATE(15, 11, 2003);
		CLOCK::SET_CLOCK_TIME(5, 0, 0);
		GlobalFunc_2448(1);
		Global_14336 = 1;
		GlobalFunc_7632(1);
		iLocal_93 = 1;
		iLocal_94 = 0;
		while (!func_10(0, 1))
		{
			SYSTEM::WAIT(0);
			GlobalFunc_5077();
		}
		func_696();
		GlobalFunc_2510(iLocal_654, Local_101, 10.692f, 1);
		PED::CLEAR_PED_WETNESS(iLocal_654);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_654, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_656, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_656, 208, 1);
		AUDIO::STOP_PED_SPEAKING(iLocal_656, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_654, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_654, iLocal_1227, 500, 1, 1);
		WEAPON::SET_PED_AMMO(iLocal_654, iLocal_1227, 500);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, iLocal_1227, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_654);
		PED::CLEAR_ALL_PED_PROPS(iLocal_654);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 0, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 8, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 5, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 3, 31, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 6, 14, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_654, 9, 11, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
		func_596(&(uLocal_1670[2]), 2, Local_104, 350.4967f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1670[2], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_657, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_657, 208, 1);
		PED::SET_PED_CAN_RAGDOLL(uLocal_1670[2], 0);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_1670[2], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[2], iLocal_1230);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1670[2], 1);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_1670[2], iLocal_1227, 500, 1, 1);
		WEAPON::SET_PED_AMMO(uLocal_1670[2], iLocal_1227, 500);
		PED::SET_PED_ACCURACY(uLocal_1670[2], 50);
		PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_1670[2], 1);
		func_482(&iLocal_1093, &(uLocal_1670[2]), 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_657, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uLocal_1670[2]);
		PED::CLEAR_ALL_PED_PROPS(uLocal_1670[2]);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 0, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 8, 13, 0, 0);
		PED::SET_PED_PROP_INDEX(iLocal_657, 1, 4, 0, false);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 3, 9, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 4, 9, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 6, 12, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 5, 4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_1670[2], 9, 1, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
		func_403(&iLocal_658, joaat("ig_brad"), Local_107, 21.6992f, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 188, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_658, 208, 1);
		INTERIOR::_0x82EBB79E258FA2B7(iLocal_658, iLocal_1162);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_658, 1);
		PED::SET_PED_CAN_RAGDOLL(iLocal_658, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_658, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_658, iLocal_1230);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_658, iLocal_1225, -1, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_658, iLocal_1228, -1, 1, 1);
		PED::SET_PED_ACCURACY(iLocal_658, 50);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_658, 1);
		func_482(&iLocal_1094, &iLocal_658, 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_658, 1);
		GlobalFunc_173(&uLocal_1748, 1, iLocal_654, "MICHAEL", 0, 1);
		GlobalFunc_173(&uLocal_1748, 2, uLocal_1670[2], "TREVOR", 0, 1);
		GlobalFunc_173(&uLocal_1748, 3, iLocal_658, "BRAD", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 6, 1, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_brad"));
		while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_656) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_657)) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_658))
		{
			func_387(0, 0);
			GlobalFunc_5077();
		}
	}
	else
	{
		GlobalFunc_5077();
		func_377();
	}
	if (func_361())
	{
		iLocal_1252++;
		if (GlobalFunc_Is_Mission_Retry())
		{
			if (Global_84544 == 1)
			{
				func_590(GlobalFunc_Get_Mission_Fail_Checkpoint() + 1);
			}
			else
			{
				func_590(GlobalFunc_Get_Mission_Fail_Checkpoint());
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() > 0)
			{
				iLocal_1975 = Global_Mission_Fail_State.f_12[0];
				iLocal_1976 = iLocal_1975;
			}
		}
	}
}

void func_590(int iParam0)//Position - 0x74C41
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_101 };
			fVar3 = 10.692f;
			break;
		
		case 1:
			Var0 = { 5299.933f, -5187.692f, (85.7184f - 3.2f) };
			fVar3 = 165.5154f;
			break;
		
		case 2:
			Var0 = { 5299.933f, -5187.692f, (85.7184f - 3.2f) };
			fVar3 = 165.5154f;
			break;
		
		case 3:
			Var0 = { 5326.855f, -5189.114f, (85.0058f - 3.2f) };
			fVar3 = 272.8408f;
			break;
		
		case 4:
			Var0 = { 4581.804f, -5059.41f, 109.3138f };
			fVar3 = 118.5509f;
			break;
		
		case 5:
			Var0 = { 3543.883f, -4696.196f, 112.6563f };
			fVar3 = 351.6286f;
			break;
		
		case 6:
			Var0 = { 3272.7f, -4571.2f, 118.2f };
			fVar3 = 0f;
			break;
	}
	GlobalFunc_5116(Var0, fVar3, 0, 0);
	GlobalFunc_5108(0, -1, 0);
	func_646();
	if (!CAM::DOES_CAM_EXIST(iLocal_1157))
	{
		iLocal_1157 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	switch (iParam0)
	{
		case 0:
			GlobalFunc_2510(iLocal_654, Local_101, 10.692f, 1);
			iLocal_1252 = 1;
			break;
		
		case 1:
			GlobalFunc_2510(iLocal_654, 5299.933f, -5187.692f, (85.7184f - 3.2f), 165.5154f, 1);
			func_693(8);
			iLocal_1252 = 8;
			break;
		
		case 2:
			GlobalFunc_2510(iLocal_654, 5299.933f, -5187.692f, (85.7184f - 3.2f), 165.5154f, 1);
			func_693(8);
			iLocal_90 = 1;
			iLocal_1252 = 8;
			break;
		
		case 3:
			GlobalFunc_139();
			GlobalFunc_2510(iLocal_654, 5326.855f, -5189.114f, (85.0058f - 3.2f), 272.8408f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 9, 12, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 9, 1, 0, 0);
			if (GlobalFunc_8315() != 2)
			{
				GlobalFunc_9134(&uLocal_1670, 2);
				func_13(&uLocal_1670, 1, 0, 0);
				func_696();
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
			}
			PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_657, 8, 13, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_657, 1, 4, 0, false);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 2, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_656, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 1, 0, 0);
			GlobalFunc_585(124, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_656, 0);
			GlobalFunc_173(&uLocal_1748, 1, uLocal_1670[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_1748, 2, iLocal_654, "TREVOR", 0, 1);
			if (iLocal_95 == 0)
			{
				ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
				ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), 1);
				iLocal_95 = 1;
			}
			iLocal_93 = 1;
			func_693(16);
			iLocal_1252 = 11;
			break;
		
		case 4:
			GlobalFunc_139();
			PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 1, 0, 0);
			GlobalFunc_2510(iLocal_654, 4581.804f, -5059.41f, 109.3138f, 118.5509f, 1);
			STREAMING::REQUEST_MODEL(joaat("rancherxl2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("rancherxl2")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1050))
			{
				func_418(&iLocal_1050, joaat("rancherxl2"), Local_110, 100.9597f, 0, 1097859072);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_1050, "87ALN974");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_1050, 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_1050, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 1, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 2, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 3, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_1050, 0);
			}
			func_693(19);
			if (Global_84544 == 1)
			{
				STREAMING::REQUEST_MODEL(joaat("u_m_y_proldriver_01"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("u_m_y_proldriver_01")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_659 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1050, 26, joaat("u_m_y_proldriver_01"), -1, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_659, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_659, 9, 0, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_659, iLocal_1229);
				GlobalFunc_173(&uLocal_1748, 5, iLocal_659, "PROGETAWAY", 0, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_y_proldriver_01"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_659, 1);
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_659))
				{
					func_387(0, 0);
				}
				iLocal_90 = 1;
				iLocal_1252 = 12;
			}
			else
			{
				iLocal_1252 = 13;
			}
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(iLocal_658, 9, 1, 0, 0);
			GlobalFunc_2510(iLocal_654, 3543.883f, -4696.196f, 112.6563f, 351.6286f, 0);
			STREAMING::REQUEST_MODEL(joaat("rancherxl2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("rancherxl2")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1050))
			{
				func_418(&iLocal_1050, joaat("rancherxl2"), Local_110, 100.9597f, 0, 1097859072);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_1050, "87ALN974");
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 0);
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 1);
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 2);
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_1050, 3);
				VEHICLE::SET_VEHICLE_DAMAGE(iLocal_1050, 0.5f, -0.4f, 0.05f, 750f, 750f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(iLocal_1050, 0.5f, 0.4f, 0.05f, 750f, 750f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(iLocal_1050, 0f, -2f, 1f, 250f, 250f, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_1050, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 1, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 2, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1050, 3, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_1050, 0);
			}
			if (Global_84544 == 1)
			{
				iLocal_1252 = 14;
			}
			else
			{
				iLocal_90 = 1;
				iLocal_1252 = 15;
			}
			break;
		
		case 6:
			CUTSCENE::REQUEST_CUTSCENE("Pro_mcs_7_concat", 2);
			GlobalFunc_2510(iLocal_654, 3272.7f, -4571.2f, 118.2f, 0f, 0);
			if (GlobalFunc_8315() != 2)
			{
				GlobalFunc_9134(&uLocal_1670, 2);
				func_13(&uLocal_1670, 1, 0, 0);
				func_696();
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1670[0], iLocal_1230);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_654, joaat("weapon_unarmed"), 1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_657))
			{
				func_387(0, 0);
			}
			while (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_657, 0);
				}
				SYSTEM::WAIT(0);
			}
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 1, 1, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			CUTSCENE::START_CUTSCENE(0);
			MISC::LOAD_CLOUD_HAT("Stormy 01", 0);
			while (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				SYSTEM::WAIT(0);
			}
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
			}
			while (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_8316(0, 1, 1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			iLocal_1252 = 16;
			break;
	}
	iLocal_89 = 1;
}






void func_596(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x754F9
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		while (!func_90(uParam0, iParam1, Param2, fParam5, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		}
		func_696();
	}
}


void func_598(char* sParam0)//Position - 0x7559F
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::GET_HASH_KEY(&(Global_33955[iVar0 /*8*/])) == iVar1)
		{
			StringCopy(&(Global_33955[iVar0 /*8*/]), "", 32);
		}
		iVar0++;
	}
}

void func_599()//Position - 0x755DF
{
	Local_113[0 /*3*/] = { 5311.921f, -5206.056f, (85.7187f - 3.2f) };
	fLocal_126[0] = 272.2921f;
	Local_113[1 /*3*/] = { 5310.654f, -5207.032f, (85.7187f - 3.2f) };
	fLocal_126[1] = 139.6356f;
	Local_113[2 /*3*/] = { 5311.576f, -5211.303f, (85.7187f - 3.2f) };
	fLocal_126[2] = 22.0567f;
	Local_113[3 /*3*/] = { 5314.795f, -5205.622f, (85.7187f - 3.2f) };
	fLocal_126[3] = 151.4604f;
	Local_131[0 /*3*/] = { 5353.823f, -5184.744f, 81.762f };
	fLocal_258[0] = 169.0588f;
	Local_131[1 /*3*/] = { 5355.168f, -5182.404f, 81.762f };
	fLocal_258[1] = 61.0588f;
	Local_131[2 /*3*/] = { 5353.92f, -5190.889f, 81.762f };
	fLocal_258[2] = 130.9412f;
	Local_131[3 /*3*/] = { 5352.04f, -5188.797f, 81.762f };
	fLocal_258[3] = 21.5294f;
	Local_131[4 /*3*/] = { 5353.89f, -5192.23f, 81.762f };
	fLocal_258[4] = 115.6477f;
	Local_131[5 /*3*/] = { 5343.47f, -5196.291f, 81.762f };
	fLocal_258[5] = 358.9412f;
	Local_131[6 /*3*/] = { 5382.551f, -5176.61f, 80.4568f };
	fLocal_258[6] = 108.5755f;
	Local_131[7 /*3*/] = { 5381.892f, -5175.597f, 80.4709f };
	fLocal_258[7] = 123.564f;
	Local_131[8 /*3*/] = { 5381.189f, -5173.658f, 80.4267f };
	fLocal_258[8] = 117.5804f;
	Local_131[9 /*3*/] = { 5389.69f, -5191.1f, 80.2098f };
	fLocal_258[9] = 143.6466f;
	Local_131[10 /*3*/] = { 5390.542f, -5186.277f, 79.9868f };
	fLocal_258[10] = 59.6471f;
	Local_131[11 /*3*/] = { 5410.387f, -5182.007f, 78.6563f };
	fLocal_258[11] = 135.1765f;
	Local_131[12 /*3*/] = { 5408.598f, -5180.17f, 78.6633f };
	fLocal_258[12] = 133.0588f;
	Local_131[13 /*3*/] = { 5419.569f, -5171.713f, 77.9652f };
	fLocal_258[13] = 201.5294f;
	Local_131[14 /*3*/] = { 5411.251f, -5179.044f, 78.4814f };
	fLocal_258[14] = 45.5294f;
	Local_131[15 /*3*/] = { 5432.578f, -5151.196f, 77.1536f };
	fLocal_258[15] = 104.1176f;
	Local_131[16 /*3*/] = { 5431.671f, -5148.869f, 77.062f };
	fLocal_258[16] = 106.2353f;
	Local_131[17 /*3*/] = { 5410.832f, -5177.565f, 79.483f };
	fLocal_258[17] = 115.8309f;
	Local_131[18 /*3*/] = { 3497.611f, -4872.633f, 110.5807f };
	fLocal_258[18] = 262.9412f;
	Local_131[19 /*3*/] = { 3497.802f, -4870.141f, 110.7024f };
	fLocal_258[19] = 266.0508f;
	Local_131[20 /*3*/] = { 3494.845f, -4869.093f, 110.7144f };
	fLocal_258[20] = 279.8827f;
	Local_131[21 /*3*/] = { 3494.465f, -4866.581f, 110.7753f };
	fLocal_258[21] = 280.5879f;
	Local_131[22 /*3*/] = { 3496.471f, -4865.463f, 110.7407f };
	fLocal_258[22] = 226.2353f;
	Local_131[23 /*3*/] = { 3495.554f, -4864.558f, 110.7269f };
	fLocal_258[23] = 222f;
	Local_131[24 /*3*/] = { 3530.209f, -4673.253f, 113.2062f };
	fLocal_258[24] = 274.9412f;
	Local_131[25 /*3*/] = { 3532.472f, -4673.429f, 113.2055f };
	fLocal_258[25] = 189.5294f;
	Local_131[26 /*3*/] = { 3533.283f, -4671.625f, 113.206f };
	fLocal_258[26] = 213.2454f;
	Local_131[27 /*3*/] = { 3536.789f, -4671.368f, 113.2061f };
	fLocal_258[27] = 270.7059f;
	Local_131[28 /*3*/] = { 3533.102f, -4666.006f, 113.1611f };
	fLocal_258[28] = 176.8235f;
	Local_131[29 /*3*/] = { 3542.208f, -4660.995f, 113.4237f };
	fLocal_258[29] = 131.647f;
	Local_131[30 /*3*/] = { 3546.619f, -4659.553f, 113.1374f };
	fLocal_258[30] = 212.8229f;
	Local_131[31 /*3*/] = { 3550.46f, -4651.621f, 113.2091f };
	fLocal_258[31] = 92.1176f;
	Local_131[32 /*3*/] = { 3552.158f, -4654.586f, 113.2239f };
	fLocal_258[32] = 174.4004f;
	Local_131[33 /*3*/] = { 3548.897f, -4650.25f, 113.2084f };
	fLocal_258[33] = 177.3907f;
	Local_131[34 /*3*/] = { 3541.275f, -4662.743f, 113.3224f };
	fLocal_258[34] = 255.1765f;
	Local_131[35 /*3*/] = { 3514.969f, -4655.081f, 113.5005f };
	fLocal_258[35] = 226.6858f;
	Local_131[36 /*3*/] = { 3544.433f, -4643.036f, 113.1429f };
	fLocal_258[36] = 233.6201f;
	Local_131[37 /*3*/] = { 3560.461f, -4635.573f, 113.8873f };
	fLocal_258[37] = 166.5792f;
	Local_131[38 /*3*/] = { 3510.535f, -4675.332f, 113.2635f };
	fLocal_258[38] = 320.8466f;
	Local_434[0 /*3*/] = { 4587.656f, -5054.247f, 106.9872f };
	Local_434[1 /*3*/] = { 4558.967f, -5074.122f, 107.6574f };
	Local_434[2 /*3*/] = { 4528.416f, -5091.893f, 107.54f };
	Local_434[3 /*3*/] = { 4487.449f, -5103.482f, 107.9706f };
	Local_434[4 /*3*/] = { 4438.861f, -5102.147f, 107.9038f };
	Local_434[5 /*3*/] = { 4337.286f, -5082.369f, 106.0549f };
	Local_434[6 /*3*/] = { 4067.198f, -5057.17f, 103.5846f };
	Local_434[7 /*3*/] = { 3966.122f, -5043.051f, 104.9084f };
	Local_434[8 /*3*/] = { 3880.686f, -5022.593f, 106.3359f };
	Local_434[9 /*3*/] = { 3782.209f, -4988.327f, 106.596f };
	Local_434[10 /*3*/] = { 3630.503f, -4916.527f, 106.6001f };
	Local_434[11 /*3*/] = { 3570.768f, -4890.154f, 106.6963f };
	Local_434[12 /*3*/] = { 3546.578f, -4883.236f, 106.7381f };
	Local_434[13 /*3*/] = { 3514.123f, -4852.97f, 110.1683f };
	Local_477[0 /*3*/] = { 4552.223f, -5078.523f, 117.6354f };
	Local_477[1 /*3*/] = { 4515.127f, -5096.685f, 117.5443f };
	Local_477[2 /*3*/] = { 4471.467f, -5106.235f, 118.1986f };
	Local_477[3 /*3*/] = { 4426.59f, -5100.461f, 117.9772f };
	Local_477[4 /*3*/] = { 4317.046f, -5079.535f, 117.8698f };
	Local_477[5 /*3*/] = { 4054.02f, -5055.593f, 115.6779f };
	Local_477[6 /*3*/] = { 3955.334f, -5040.765f, 117.0764f };
	Local_477[7 /*3*/] = { 3862.413f, -5017.159f, 118.4601f };
	Local_477[8 /*3*/] = { 3771.825f, -4984.123f, 118.2679f };
	Local_477[9 /*3*/] = { 3621.113f, -4912.029f, 118.6165f };
	Local_477[10 /*3*/] = { 3561.086f, -4886.649f, 118.7096f };
	Local_477[11 /*3*/] = { 3477.844f, -4862.327f, 118.788f };
	Local_477[12 /*3*/] = { 3512.075f, -4850.827f, 119.8924f };
	Local_477[13 /*3*/] = { 3544.632f, -4882.23f, 115.74f };
	fLocal_520[0] = 20f;
	fLocal_520[1] = 20f;
	fLocal_520[2] = 20f;
	fLocal_520[3] = 20f;
	fLocal_520[4] = 20f;
	fLocal_520[5] = 20f;
	fLocal_520[6] = 20f;
	fLocal_520[7] = 20f;
	fLocal_520[8] = 20f;
	fLocal_520[9] = 20f;
	fLocal_520[10] = 20f;
	fLocal_520[11] = 20f;
	fLocal_520[12] = 20f;
	fLocal_520[13] = 21f;
	Local_313[0 /*3*/] = { 4970.825f, -5091.416f, 88.9819f };
	Local_313[1 /*3*/] = { 4905.508f, -5074.94f, 93.4457f };
	Local_313[2 /*3*/] = { 4853.338f, -5078.555f, 95.662f };
	Local_313[3 /*3*/] = { 4802.635f, -5084.396f, 103.6738f };
	Local_313[4 /*3*/] = { 4749.691f, -5081.734f, 106.0403f };
	Local_313[5 /*3*/] = { 4687.349f, -5076.968f, 104.7117f };
	Local_313[6 /*3*/] = { 4642.827f, -5078.297f, 104.5495f };
	Local_313[7 /*3*/] = { 4584.667f, -5061.991f, 109.1664f };
	Local_313[8 /*3*/] = { 4565.508f, -5068.254f, 109.6636f };
	Local_313[9 /*3*/] = { 4526.385f, -5088.662f, 109.4986f };
	Local_313[10 /*3*/] = { 4483.227f, -5101.435f, 110.0345f };
	Local_313[11 /*3*/] = { 4449.36f, -5100.788f, 109.9771f };
	Local_313[12 /*3*/] = { 4413.38f, -5095.328f, 110.1241f };
	Local_313[13 /*3*/] = { 4372.285f, -5087.948f, 109.977f };
	Local_313[14 /*3*/] = { 4324.663f, -5080.526f, 109.9992f };
	Local_313[15 /*3*/] = { 4292.96f, -5075.087f, 109.5519f };
	Local_313[16 /*3*/] = { 4245.478f, -5071.137f, 109.7107f };
	Local_313[17 /*3*/] = { 4204.526f, -5067.857f, 110.2702f };
	Local_313[18 /*3*/] = { 4163.581f, -5064.159f, 108.8908f };
	Local_313[19 /*3*/] = { 4118.847f, -5061.042f, 107.8974f };
	Local_313[20 /*3*/] = { 4079.595f, -5057.554f, 107.4726f };
	Local_313[21 /*3*/] = { 4035.878f, -5052.075f, 107.7924f };
	Local_313[22 /*3*/] = { 3989.13f, -5045.002f, 108.5552f };
	Local_313[23 /*3*/] = { 3942.575f, -5035.956f, 109.3346f };
	Local_313[24 /*3*/] = { 3898.919f, -5026.586f, 110.1669f };
	Local_313[25 /*3*/] = { 3857.748f, -5013.563f, 110.4648f };
	Local_313[26 /*3*/] = { 3817.734f, -4999.766f, 110.7629f };
	Local_313[27 /*3*/] = { 3778.094f, -4985.498f, 110.4797f };
	Local_313[28 /*3*/] = { 3741.137f, -4970.374f, 110.1673f };
	Local_313[29 /*3*/] = { 3700.595f, -4951.171f, 110.696f };
	Local_313[30 /*3*/] = { 3660.637f, -4930.793f, 110.6758f };
	Local_313[31 /*3*/] = { 3627.896f, -4913.842f, 110.6055f };
	Local_313[32 /*3*/] = { 3609.693f, -4905.18f, 110.6365f };
	Local_313[33 /*3*/] = { 3574.858f, -4890.786f, 110.6897f };
	Local_313[34 /*3*/] = { 3543.449f, -4876.323f, 110.6801f };
	Local_313[35 /*3*/] = { 3526.991f, -4858.039f, 110.659f };
	Local_313[36 /*3*/] = { 3522.79f, -4836.896f, 110.8203f };
	Local_313[37 /*3*/] = { 3525.263f, -4812.351f, 110.9858f };
	Local_313[38 /*3*/] = { 3526.695f, -4799.765f, 111.0327f };
	Local_313[39 /*3*/] = { 3528.125f, -4785.993f, 111.0324f };
}





void func_604()//Position - 0x7631A
{
	if (iLocal_1978 != MISC::GET_FRAME_COUNT())
	{
		iLocal_1978 = MISC::GET_FRAME_COUNT();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		GlobalFunc_1470();
		if (iLocal_1976 != iLocal_1975)
		{
			if (iLocal_1977 == -1)
			{
				iLocal_1977 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_1977, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
			}
			if (iLocal_1976 > iLocal_1975)
			{
				iLocal_1976 = (iLocal_1976 - SYSTEM::ROUND((0f + (500000f * SYSTEM::TIMESTEP()))));
				if (iLocal_1976 < iLocal_1975)
				{
					iLocal_1976 = iLocal_1975;
				}
				GlobalFunc_5234(iLocal_1976, "CMN_TAKE", 5000, 6, 2, 0, "HUD_CASH", 0, 0f, 1, 250, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				if ((iLocal_1975 - iLocal_1976) < 10000)
				{
					iLocal_1976 = iLocal_1975;
				}
				else
				{
					iLocal_1976 = (iLocal_1976 + SYSTEM::ROUND((0f + (500000f * SYSTEM::TIMESTEP()))));
				}
				if (iLocal_1976 > iLocal_1975)
				{
					iLocal_1976 = iLocal_1975;
				}
				GlobalFunc_5234(iLocal_1976, "CMN_TAKE", 5000, 18, 2, 0, "HUD_CASH", 0, 0f, 1, 250, 0, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			if (iLocal_1977 != -1)
			{
				AUDIO::STOP_SOUND(iLocal_1977);
				iLocal_1977 = -1;
			}
			GlobalFunc_5234(iLocal_1976, "CMN_TAKE", 5000, 18, 2, 0, "HUD_CASH", 0, 0f, 1, 250, 0, 0, 0, 0, 0, 0);
		}
	}
}











void func_615()//Position - 0x76770
{
	if (iLocal_1255 == 0 && (!AUDIO::IS_MUSIC_ONESHOT_PLAYING() || MISC::GET_GAME_TIMER() > iLocal_1971))
	{
		switch (iLocal_1254)
		{
			case 1:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_MISSION_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_MISSION_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 2:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_HOSTAGES"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_HOSTAGES";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HOSTAGES"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 3:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_PRE_SAFE_EXPLOSION";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 6:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_GUARD_HOSTAGE_OS";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 13:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_SHUTTER_OPEN_OS"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_SHUTTER_OPEN_OS";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_SHUTTER_OPEN_OS"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 17:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 20:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_POLICE_CAR_CHASE_OS";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 26:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_TRAIN_CRASH"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_TRAIN_CRASH";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_TRAIN_CRASH"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 27:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_BRAD_DOWN"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_BRAD_DOWN";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_BRAD_DOWN"))
				{
					iLocal_1254 = 0;
				}
				break;
			
			case 31:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_FINAL_CUTSCENE"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
					}
					sLocal_1970 = "PROLOGUE_TEST_FINAL_CUTSCENE";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE"))
				{
					iLocal_1254 = 0;
				}
				break;
			}
	}
	switch (iLocal_1255)
	{
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_MISSION_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_MISSION_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 2:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_HOSTAGES"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_HOSTAGES";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HOSTAGES"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_HOSTAGES"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 3:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_PRE_SAFE_EXPLOSION";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 4:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COLLECT_MONEY"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 5:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COLLECT_CASH"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 6:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_GUARD_HOSTAGE_OS";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 8:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_RT"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 9:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_SWITCH"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 10:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_SECURITY_ROOM_MA"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 11:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COVER_AT_BLAST_DOORS"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 12:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_BLAST_DOORS_EXPLODE"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 13:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_SHUTTER_OPEN_OS"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_SHUTTER_OPEN_OS";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_SHUTTER_OPEN_OS"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_SHUTTER_OPEN_OS"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 14:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COP_GUNFIGHT"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 15:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COP_GUNFIGHT_PROGRESS"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 16:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COP_GUNFIGHT_RT"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 17:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 18:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GETAWAY_CUTSCENE"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 19:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GETAWAY_RT"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 21:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_POLICE_CAR_CHASE"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_POLICE_CAR_CHASE";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 22:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CRASH"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 23:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_CAR_CHASE"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 24:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_DRIVE_BY"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 25:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_ROADBLOCK_WARNING"))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 6f, 3);
				iLocal_1255 = 0;
			}
			break;
		
		case 20:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_POLICE_CAR_CHASE_OS";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 26:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_TRAIN_CRASH"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_TRAIN_CRASH";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_TRAIN_CRASH"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_TRAIN_CRASH"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 27:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_BRAD_DOWN"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_BRAD_DOWN";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_BRAD_DOWN"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_BRAD_DOWN"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 28:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_AFTER_TRAIN"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 29:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FINALE_RT"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 30:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GRAB_WOMAN"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 32:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE_MA"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 31:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970) || !MISC::ARE_STRINGS_EQUAL(sLocal_1970, "PROLOGUE_TEST_FINAL_CUTSCENE"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970);
				}
				sLocal_1970 = "PROLOGUE_TEST_FINAL_CUTSCENE";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE"))
				{
					iLocal_1971 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_1255 = 0;
				}
			}
			break;
		
		case 33:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_MISSION_END"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 34:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FAIL"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 35:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_KILL_ONESHOT"))
			{
				iLocal_1255 = 0;
			}
			break;
		
		case 36:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_MISSION_CLEANUP"))
			{
				iLocal_1255 = 0;
			}
			break;
	}
}

void func_616()//Position - 0x771F6
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]) && iLocal_654 == iLocal_656) && iLocal_1252 <= 1)
	{
		func_638(9, GlobalFunc_4917(0));
	}
	if (iLocal_1252 <= 1)
	{
		func_638(10, GlobalFunc_4917(2));
	}
	if (iLocal_1252 <= 1)
	{
		func_638(11, joaat("ig_brad"));
	}
	if (iLocal_1252 == 1)
	{
		func_638(3, joaat("a_m_m_prolhost_01"));
	}
	if (iLocal_1252 == 1)
	{
		func_638(0, joaat("a_f_m_prolhost_01"));
	}
	if (iLocal_1252 == 1)
	{
		func_638(12, joaat("ig_prolsec_02"));
	}
	if (iLocal_1252 >= 4 && iLocal_1252 <= 5)
	{
		func_638(30, joaat("v_ilev_cd_dust"));
	}
	if (iLocal_1252 >= 6 && iLocal_1252 <= 8)
	{
		func_638(4, joaat("csb_prolsec"));
	}
	if (iLocal_1252 >= 10)
	{
		func_638(23, joaat("rancherxl2"));
	}
	if (iLocal_1252 >= 10 && iLocal_1252 <= 11)
	{
		func_638(28, joaat("u_m_y_proldriver_01"));
	}
	if (iLocal_1252 >= 10)
	{
		func_638(25, joaat("s_m_m_snowcop_01"));
	}
	if (iLocal_1252 >= 10 && iLocal_1252 <= 11)
	{
		func_638(27, joaat("u_m_m_prolsec_01"));
	}
	if (iLocal_1252 >= 10)
	{
		func_638(13, joaat("policeold1"));
		func_638(14, joaat("policeold2"));
		VEHICLE::REQUEST_VEHICLE_ASSET(joaat("policeold1"), 4);
		VEHICLE::REQUEST_VEHICLE_ASSET(joaat("policeold2"), 4);
	}
	if (iLocal_1252 >= 10 && iLocal_1252 <= 11)
	{
		func_638(24, joaat("stockade3"));
	}
	if (iLocal_1252 >= 14)
	{
		func_638(6, joaat("freight"));
	}
	if (iLocal_1252 >= 14)
	{
		func_638(7, joaat("freightcont1"));
	}
	if (iLocal_1252 >= 14)
	{
		func_638(8, joaat("freightcont2"));
	}
	if (iLocal_1252 >= 6)
	{
		func_638(15, joaat("prop_cs_heist_bag_02"));
		func_638(20, joaat("p_ld_heist_bag_s_1"));
		func_638(18, joaat("p_csh_strap_01_s"));
	}
	if (iLocal_1252 >= 10 && iLocal_1252 <= 11)
	{
		func_638(21, joaat("p_trevor_prologe_bally_s"));
		func_638(22, joaat("p_trev_ski_mask_s"));
	}
	if (iLocal_1252 >= 7 && iLocal_1252 <= 8)
	{
		func_638(17, joaat("prop_michael_balaclava"));
	}
	if (iLocal_1252 == 1)
	{
		func_638(36, joaat("prop_1st_prologue_scene"));
	}
	if (iLocal_1252 >= 2 && iLocal_1252 <= 4)
	{
		func_638(37, joaat("prop_1st_hostage_scene"));
	}
	if (iLocal_1252 >= 4 && iLocal_1252 <= 5)
	{
		func_638(38, joaat("prop_vault_door_scene"));
	}
	if (iLocal_1252 >= 7 && iLocal_1252 <= 8)
	{
		func_638(39, joaat("prop_2nd_hostage_scene"));
	}
	if (iLocal_1252 >= 9)
	{
		func_547(3, sLocal_560);
		func_547(4, sLocal_560);
		func_547(5, sLocal_560);
		func_547(6, sLocal_560);
		func_547(8, sLocal_560);
		func_547(9, sLocal_560);
		func_547(11, sLocal_560);
		func_547(26, sLocal_560);
		func_547(27, sLocal_560);
		func_547(28, sLocal_560);
		func_547(29, sLocal_560);
		func_547(32, sLocal_560);
		func_547(33, sLocal_560);
		func_547(34, sLocal_560);
		func_547(35, sLocal_560);
	}
	if (iLocal_1252 == 5)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_588);
	}
	else if (iLocal_1252 > 7)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_588))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_588);
		}
	}
	if (iLocal_1252 == 6)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_589);
	}
	else if (iLocal_1252 > 7)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_589))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_589);
		}
	}
	if (iLocal_1252 >= 10)
	{
		func_637(sLocal_562);
	}
	if (iLocal_1252 >= 9 && iLocal_1252 <= 10)
	{
		func_637(sLocal_561);
	}
	if (iLocal_1252 <= 3)
	{
		func_637(sLocal_564);
	}
	else
	{
		func_617(sLocal_564);
	}
	if (iLocal_1252 >= 2 && iLocal_1252 <= 4)
	{
		func_637(sLocal_566);
		func_637(sLocal_567);
		func_637(sLocal_565);
		func_637(sLocal_568);
	}
	else
	{
		func_617(sLocal_566);
		func_617(sLocal_567);
		func_617(sLocal_565);
		func_617(sLocal_568);
	}
	if (iLocal_1252 >= 4 && iLocal_1252 <= 5)
	{
		func_637(sLocal_569);
		func_637(sLocal_570);
	}
	else
	{
		func_617(sLocal_569);
		func_617(sLocal_570);
	}
	if (iLocal_1252 >= 3 && iLocal_1252 <= 6)
	{
		func_637(sLocal_571);
	}
	else
	{
		func_617(sLocal_571);
	}
	if (iLocal_1252 >= 3 && iLocal_1252 <= 5)
	{
		func_637(sLocal_572);
	}
	else
	{
		func_617(sLocal_572);
	}
	if (iLocal_1252 >= 5 && iLocal_1252 <= 6)
	{
		func_637(sLocal_573);
	}
	else
	{
		func_617(sLocal_573);
	}
	if (iLocal_1252 >= 4 && iLocal_1252 <= 7)
	{
		func_637(sLocal_574);
	}
	else
	{
		func_617(sLocal_574);
	}
	if (iLocal_1252 >= 5 && iLocal_1252 <= 6)
	{
		func_637(sLocal_586);
	}
	else
	{
		func_617(sLocal_586);
	}
	if (iLocal_1252 >= 7 && iLocal_1252 <= 8)
	{
		func_637(sLocal_575);
		func_637(sLocal_576);
		func_637(sLocal_577);
		func_637(sLocal_578);
	}
	else
	{
		func_617(sLocal_575);
		func_617(sLocal_576);
		func_617(sLocal_577);
		func_617(sLocal_578);
	}
	if (iLocal_1252 >= 8 && iLocal_1252 <= 10)
	{
		func_637(sLocal_579);
		func_637(sLocal_580);
		func_637(sLocal_581);
	}
	else
	{
		func_617(sLocal_579);
		func_617(sLocal_580);
		func_617(sLocal_581);
	}
	if (iLocal_1252 >= 9 && iLocal_1252 <= 10)
	{
		func_637(sLocal_582);
	}
	else
	{
		func_617(sLocal_582);
	}
	if (iLocal_1252 >= 11 && iLocal_1252 <= 13)
	{
		func_637(sLocal_583);
	}
	else
	{
		func_617(sLocal_583);
	}
	if ((iLocal_1252 >= 9 && iLocal_1252 <= 11) || (iLocal_1252 >= 13 && iLocal_1252 <= 15))
	{
		func_637(sLocal_584);
	}
	else
	{
		func_617(sLocal_584);
	}
	if (iLocal_1252 >= 9 && iLocal_1252 <= 11)
	{
		func_637(sLocal_585);
	}
	else
	{
		func_617(sLocal_585);
	}
	if (iLocal_1252 >= 9 && iLocal_1252 <= 10)
	{
		func_637(sLocal_587);
	}
	else
	{
		func_617(sLocal_587);
	}
	if (iLocal_1252 >= 10 && iLocal_1252 <= 11)
	{
		func_637(sLocal_563);
	}
	else
	{
		func_617(sLocal_563);
	}
}

void func_617(char* sParam0)//Position - 0x7789B
{
	if (func_619(sParam0))
	{
		STREAMING::REMOVE_ANIM_DICT(sParam0);
		func_618(sParam0, 0);
	}
}

void func_618(char* sParam0, bool bParam1)//Position - 0x778B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_1644;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_1644[iVar2] == 0)
			{
				iLocal_1644[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_1644[iVar2] == iVar0)
		{
			iLocal_1644[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_619(char* sParam0)//Position - 0x77923
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_1644;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_1644[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}





void func_624()//Position - 0x77A90
{
	int iVar0;
	
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_655, iLocal_1225, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_655, iLocal_1225, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1225), 0, 1);
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_655, iLocal_1225, 0))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_655, iLocal_1225) < WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1225))
		{
			WEAPON::SET_PED_AMMO(iLocal_655, iLocal_1225, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1225) * 2);
		}
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_655, iLocal_1227, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_655, iLocal_1227, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1227), 0, 1);
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_655, iLocal_1227, 0))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_655, iLocal_1227) < WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1227))
		{
			WEAPON::SET_PED_AMMO(iLocal_655, iLocal_1227, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_1227) * 2);
		}
	}
	iVar0 = joaat("weapon_unarmed");
	WEAPON::GET_CURRENT_PED_WEAPON(iLocal_655, &iVar0, 1);
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_655, 0))
	{
		if (iVar0 != iLocal_1225)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_655, iLocal_1225, 1);
		}
	}
	else if (iVar0 != iLocal_1227)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_655, iLocal_1227, 1);
	}
}

void func_625(int iParam0, int iParam1, int iParam2)//Position - 0x77B8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = 0;
	iParam2 = iParam2;
	if (iVar0 < iParam0)
	{
		if (iVar1 < 59)
		{
			iVar1++;
		}
		else
		{
			iVar1 = 0;
			iVar0++;
		}
	}
	else if (iVar0 > iParam0)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = 59;
			iVar0 = (iVar0 - 1);
		}
	}
	else if (iVar1 < iParam1)
	{
		iVar1++;
	}
	else if (iVar1 > iParam1)
	{
		iVar1 = (iVar1 - 1);
	}
	CLOCK::SET_CLOCK_TIME(iVar0, iVar1, iVar2);
}

void func_626()//Position - 0x77C14
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_2238(1);
	func_693(34);
	switch (iLocal_1253)
	{
		case 0:
			GlobalFunc_509("PRO_FAIL");
			break;
		
		case 1:
			GlobalFunc_509("PRO_FAIL");
			break;
		
		case 2:
			if (iLocal_1252 < 13)
			{
				GlobalFunc_509("PRO_MDIED");
			}
			else
			{
				GlobalFunc_509("CMN_MDIED");
			}
			break;
		
		case 3:
			if (iLocal_1252 < 13)
			{
				GlobalFunc_509("PRO_TDIED");
			}
			else
			{
				GlobalFunc_509("CMN_TDIED");
			}
			break;
		
		case 4:
			GlobalFunc_509("PRO_BDIED");
			break;
		
		case 5:
			GlobalFunc_509("PRO_DDIED");
			break;
		
		case 6:
			GlobalFunc_509("PRO_HDIED");
			GlobalFunc_10618(&uLocal_1748, cLocal_1256, "PRO_KillHost", 7, 0, 0, 0);
			while (GlobalFunc_111())
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 7:
			GlobalFunc_509("PRO_FCAR");
			break;
		
		case 8:
			GlobalFunc_509("PRO_FAMMO");
			break;
		
		case 9:
			GlobalFunc_509("PRO_FROUTE");
			break;
		
		case 10:
			GlobalFunc_509("PRO_FSTUCK");
			break;
		
		case 11:
			GlobalFunc_509("CMN_TLEFT");
			break;
		
		case 12:
			GlobalFunc_509("CMN_MLEFT");
			break;
		
		case 13:
			GlobalFunc_509("PRO_FLEFT");
			break;
		
		case 14:
			GlobalFunc_509("PRO_FABANCAR");
			break;
		
		case 15:
			GlobalFunc_509("PRO_FRANAWAY");
			break;
		
		case 16:
			GlobalFunc_509("PRO_FHOSTAWAY");
			break;
	}
	GlobalFunc_10616(0);
	while (!GlobalFunc_145())
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		SYSTEM::WAIT(0);
	}
	func_651(0, 0);
}











int func_637(char* sParam0)//Position - 0x78C46
{
	if (!func_619(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			func_618(sParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_638(int iParam0, int iParam1)//Position - 0x78C76
{
	if (!func_640(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			func_639(iParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_639(int iParam0, int iParam1)//Position - 0x78CA6
{
	iLocal_1572[iParam0] = iParam1;
}

int func_640(int iParam0)//Position - 0x78CB7
{
	if (iLocal_1572[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_641(int iParam0, int iParam1)//Position - 0x78CCE
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iLocal_1960;
			break;
		
		case 1:
			iVar0 = iLocal_1961;
			break;
		
		case 2:
			iVar0 = iLocal_1962;
			break;
		
		case 3:
			iVar0 = iLocal_1963;
			break;
	}
	iParam1 = iParam1;
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
	if (iVar1 == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 0, 1);
	}
}

int func_642(int iParam0, int iParam1, struct<3> Param2, bool bParam5, float fParam6, float fParam7, float fParam8)//Position - 0x78D30
{
	int iVar0;
	var uVar1;
	float fVar2;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iLocal_1960;
			break;
		
		case 1:
			iVar0 = iLocal_1961;
			break;
		
		case 2:
			iVar0 = iLocal_1962;
			break;
		
		case 3:
			iVar0 = iLocal_1963;
			break;
	}
	uVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
	fVar2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iVar0);
	uVar1 = uVar1;
	iParam1 = iParam1;
	if (fVar2 <= (fParam8 + -fParam7) || fVar2 >= (fParam8 + fParam7))
	{
		if (fVar2 > fParam8)
		{
			fVar2 = (fVar2 - fParam6);
		}
		else if (fVar2 < fParam8)
		{
			fVar2 = (fVar2 + fParam6);
		}
		MISC::CLEAR_AREA_OF_OBJECTS(Param2, 2f, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar0, fVar2, 0, 0);
		if (bParam5)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, 0, 1);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 0, 1);
		}
		return 0;
	}
	fVar2 = fParam8;
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar0, fVar2, 0, 0);
	if (bParam5)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, 0, 1);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 0, 1);
	}
	return 1;
}

void func_643(int iParam0, int iParam1)//Position - 0x78E28
{
	iLocal_1257[iParam0] = iParam1;
}

int func_644(int iParam0)//Position - 0x78E39
{
	if (iLocal_1257[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_645()//Position - 0x78E50
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1939)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1939[iVar0 /*2*/]))
		{
			if (MISC::GET_GAME_TIMER() > Local_1939[iVar0 /*2*/].f_1)
			{
				HUD::SET_BLIP_FLASHES(Local_1939[iVar0 /*2*/], 0);
				Local_1939[iVar0 /*2*/] = 0;
				Local_1939[iVar0 /*2*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}

void func_646()//Position - 0x78EA8
{
	int iVar0;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_654))
	{
		iLocal_1253 = 1;
		func_626();
	}
	if (iLocal_1252 < 15)
	{
		if (func_650(&(uLocal_1670[0])))
		{
			iLocal_1253 = 2;
			func_626();
		}
	}
	if (func_650(&(uLocal_1670[2])))
	{
		iLocal_1253 = 3;
		func_626();
	}
	if (iLocal_89 == 0)
	{
		if (iLocal_1252 != 15)
		{
			if ((CAM::IS_GAMEPLAY_CAM_RENDERING() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!PED::IS_PED_INJURED(iLocal_656) && !PED::IS_PED_INJURED(iLocal_657))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_656, 1), ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 1) > 75f || ((iLocal_1252 == 11 || (iLocal_1252 == 12 && iLocal_28 == 0)) && (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_656, 1), ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 1) > 50f || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5284.031f, -5195.382f, 76.65635f, 5417.995f, -5195.255f, 93.96786f, 70f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5360.42f, -5167.944f, 76.75192f, 5463.676f, -5171.347f, 92.7692f, 140f, 0, 1, 0)))))
					{
						func_374(221, "PRO_TEAM", 7500, 1);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_656, 1), ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 1) > 100f || ((iLocal_1252 == 11 || (iLocal_1252 == 12 && iLocal_28 == 0)) && (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_656, 1), ENTITY::GET_ENTITY_COORDS(iLocal_657, 1), 1) > 75f || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5261.509f, -5196.847f, 101.5037f, 5380.444f, -5196.9f, 71.41113f, 110f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_654, 5481.102f, -5169.145f, 97.66674f, 5342.796f, -5165.168f, 72.45739f, 180f, 0, 1, 0)))))
					{
						if (!PED::IS_PED_INJURED(iLocal_658) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_658, 1), ENTITY::GET_ENTITY_COORDS(iLocal_655, 1), 1) < 30f)
						{
							iLocal_1253 = 13;
						}
						else if (GlobalFunc_6674(iLocal_654) == 0)
						{
							iLocal_1253 = 11;
						}
						else if (GlobalFunc_6674(iLocal_654) == 2)
						{
							iLocal_1253 = 12;
						}
						func_626();
					}
				}
			}
		}
	}
	if (func_650(&iLocal_658))
	{
		if (iLocal_1252 < 15)
		{
			iLocal_1253 = 4;
			func_626();
		}
	}
	if (func_650(&iLocal_659))
	{
		if (iLocal_1252 < 12)
		{
			iLocal_1253 = 5;
			func_626();
		}
	}
	if (func_648(&iLocal_1050) || (!ENTITY::IS_ENTITY_DEAD(iLocal_1050) && FIRE::IS_ENTITY_ON_FIRE(iLocal_1050)))
	{
		if (iLocal_1252 < 15)
		{
			iLocal_1253 = 7;
			func_626();
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_660)
	{
		if (func_650(&(iLocal_660[iVar0])))
		{
			if (!PED::IS_PED_INJURED(iLocal_658))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_658, iLocal_654, 10000);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_658, iLocal_654, 10000, 0, 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1168))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_602))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1168, -1000f, 1);
				}
			}
			iLocal_1253 = 6;
			func_626();
		}
		iVar0++;
	}
	func_650(&iLocal_665);
	iVar0 = 0;
	while (iVar0 < iLocal_666)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar0]))
		{
			HUD::_0xC594B315EDF2D4AF(iLocal_666[iVar0]);
		}
		func_647(iLocal_666[iVar0], &(Local_713[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1051)
	{
		func_648(&(iLocal_1051[iVar0]));
		iVar0++;
	}
}

int func_647(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7)//Position - 0x7927A
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_648(var uParam0)//Position - 0x7939A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)) || GlobalFunc_2250(uParam0))
		{
			return 1;
		}
	}
	return 0;
}


int func_650(var uParam0)//Position - 0x79430
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::IS_PED_INJURED(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_651(int iParam0, int iParam1)//Position - 0x7945E
{
	int iVar0;
	int iVar1;
	
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
	if (iLocal_85)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_85 = 0;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_590))
	{
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_590);
	}
	GlobalFunc_504(0, -1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_654);
			GlobalFunc_2510(iLocal_654, ENTITY::GET_ENTITY_COORDS(iLocal_654, 1), ENTITY::GET_ENTITY_HEADING(iLocal_654), 0);
		}
		PED::SET_PED_USING_ACTION_MODE(iLocal_654, 0, -1, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_654, 1);
		if (GlobalFunc_8315() == 0)
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_656);
		}
	}
	GlobalFunc_52(1, 1);
	GlobalFunc_5883(&Local_1714);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_YANKTON_CEMETARY", 1, 1);
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::_0x1CBA05AE7BD7EE05(0f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1207)
	{
		TASK::REMOVE_COVER_POINT(iLocal_1207[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1218)
	{
		TASK::REMOVE_COVER_POINT(iLocal_1218[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1213)
	{
		TASK::REMOVE_COVER_POINT(iLocal_1213[iVar0]);
		iVar0++;
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (ITEMSET::IS_ITEMSET_VALID(uLocal_1224))
	{
		ITEMSET::DESTROY_ITEMSET(uLocal_1224);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_1670[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1670[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1670[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1670[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_1670[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1670[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_658))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_658))
		{
			PED::SET_PED_KEEP_TASK(iLocal_658, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_658);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_660)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_660[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_660[iVar0]))
			{
				PED::SET_PED_KEEP_TASK(iLocal_660[iVar0], 1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_660[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_665))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_665))
		{
			PED::SET_PED_KEEP_TASK(iLocal_665, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_665);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_666)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_666[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_666[iVar0]))
			{
				PED::SET_PED_KEEP_TASK(iLocal_666[iVar0], 1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_666[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_659))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_659))
		{
			PED::SET_PED_KEEP_TASK(iLocal_659, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_659);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_709[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_709[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_709[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_709[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_709[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_709[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_709[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_709[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_712))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_712))
		{
			PED::SET_PED_KEEP_TASK(iLocal_712, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_712);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1050))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1050);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1051)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1051[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1051[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1072)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1072[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1072[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1075))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1075);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1076[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1076[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1076[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1076[1]));
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1163)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1163[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1163[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1168))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1168);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1169))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1169);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1170))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1170);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1171))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1171);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1177))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1177);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1178))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1178);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1179[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1179[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1184))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1184);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1185)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1185[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1185[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1192)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1192[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1172))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1172);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1173))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1173);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1196)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1196[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1196[iVar0]));
		}
		iVar0++;
	}
	func_419(&iLocal_1092);
	func_419(&iLocal_1093);
	func_419(&iLocal_1094);
	func_419(&iLocal_1095);
	func_419(&iLocal_1096);
	func_419(&iLocal_1097);
	func_419(&iLocal_1098);
	func_419(&iLocal_1104);
	iVar0 = 0;
	while (iVar0 < iLocal_660)
	{
		func_419(&(uLocal_1099[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_666)
	{
		func_419(&(uLocal_1105[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1148)
	{
		func_419(&(iLocal_1148[iVar0]));
		iVar0++;
	}
	CAM::STOP_GAMEPLAY_HINT(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_2785(&uLocal_1670);
	func_6();
	HUD::SET_GPS_FLASHES(0);
	fLocal_535 = 0f;
	func_688();
	func_687();
	func_686();
	func_685();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	iLocal_74 = 0;
	iLocal_64 = 0;
	Local_65 = { Local_98 };
	iLocal_28 = 0;
	iLocal_29 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_30)
	{
		iLocal_30[iVar0] = -1;
		iVar0++;
	}
	iLocal_36 = 0;
	iLocal_40 = -1;
	iLocal_86 = 0;
	iLocal_90 = 0;
	iLocal_91 = 0;
	func_680(&uLocal_1913, 1, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_41)
	{
		iLocal_41[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_69)
	{
		iLocal_69[iVar0] = 0;
		iVar0++;
	}
	iLocal_1232 = 145;
	func_641(0, joaat("v_ilev_cd_door2"));
	iVar0 = 0;
	while (iVar0 < iLocal_48)
	{
		iLocal_48[iVar0] = 0;
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1201))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1201, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1202))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1202, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1205))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1205, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1206))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1206, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1203))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1203, 0);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(5299f, -5189f, 82.6f, 50f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(3530.8f, -4717.9f, 113.1f, 50f);
	STREAMING::REMOVE_PTFX_ASSET();
	if (!PED::IS_PED_INJURED(iLocal_656))
	{
		if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_656) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_656)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_656))
		{
			PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_656, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_657))
	{
		if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_657) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_657)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_657))
		{
			PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_657, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_658))
	{
		if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_658) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_658)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_658))
		{
			PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_658, 0);
		}
	}
	GlobalFunc_200(&uLocal_1748, 1);
	GlobalFunc_200(&uLocal_1748, 2);
	GlobalFunc_200(&uLocal_1748, 3);
	GlobalFunc_200(&uLocal_1748, 4);
	GlobalFunc_200(&uLocal_1748, 5);
	GlobalFunc_200(&uLocal_1748, 6);
	if (GlobalFunc_701())
	{
		GlobalFunc_7632(0);
	}
	if (iLocal_1973)
	{
		func_378();
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1972);
		iLocal_1973 = 0;
		iLocal_1974 = 0;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_ESCAPE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_ESCAPE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
	}
	if (iLocal_92 == 0)
	{
		func_693(34);
	}
	if (AUDIO::CANCEL_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1970))
	{
		if (AUDIO::CANCEL_MUSIC_EVENT(sLocal_1970))
		{
		}
		sLocal_1970 = GlobalFunc_648();
	}
	iLocal_1254 = 0;
	iLocal_1255 = 0;
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	AUDIO::STOP_STREAM();
	if (AUDIO::IS_ALARM_PLAYING("PROLOGUE_VAULT_ALARMS"))
	{
		AUDIO::STOP_ALARM("PROLOGUE_VAULT_ALARMS", 1);
	}
	if (iLocal_1235 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1235);
		AUDIO::RELEASE_SOUND_ID(iLocal_1235);
		iLocal_1235 = -1;
	}
	if (iLocal_1236 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1236);
		AUDIO::RELEASE_SOUND_ID(iLocal_1236);
		iLocal_1236 = -1;
	}
	if (iLocal_1237 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1237);
		AUDIO::RELEASE_SOUND_ID(iLocal_1237);
		iLocal_1237 = -1;
	}
	if (iLocal_1238 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1238);
		AUDIO::RELEASE_SOUND_ID(iLocal_1238);
		iLocal_1238 = -1;
	}
	if (iLocal_1239 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1239);
		AUDIO::RELEASE_SOUND_ID(iLocal_1239);
		iLocal_1239 = -1;
	}
	if (iLocal_1243 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1243);
		AUDIO::RELEASE_SOUND_ID(iLocal_1243);
		iLocal_1243 = -1;
	}
	if (iLocal_1240 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1240);
		AUDIO::RELEASE_SOUND_ID(iLocal_1240);
		iLocal_1240 = -1;
	}
	if (iLocal_1241 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1241);
		AUDIO::RELEASE_SOUND_ID(iLocal_1241);
		iLocal_1241 = -1;
	}
	if (iLocal_1242 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1242);
		AUDIO::RELEASE_SOUND_ID(iLocal_1242);
		iLocal_1242 = -1;
	}
	if (iLocal_1244 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1244);
		AUDIO::RELEASE_SOUND_ID(iLocal_1244);
		iLocal_1244 = -1;
	}
	if (iLocal_1245 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1245);
		AUDIO::RELEASE_SOUND_ID(iLocal_1245);
		iLocal_1245 = -1;
	}
	if (func_644(297))
	{
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_PROLOGUE_VAULT");
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_641(1, joaat("v_ilev_cd_door"));
	func_641(2, joaat("v_ilev_cd_door"));
	func_641(0, joaat("v_ilev_cd_door2"));
	Local_307 = { 5308.857f, -5208.156f, ((86.9186f - 3.2f) - 0.05f) };
	Local_310 = { Local_98 };
	ENTITY::REMOVE_MODEL_HIDE(5316.64f, -5205.74f, 83.67f, 1f, joaat("v_ilev_cd_door2"), 0);
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("policeold1"));
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("policeold2"));
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_588))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_588);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_589))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_589);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_1161);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1a");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S2");
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1229);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1230);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1231);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(3477.82f, -4862.903f, 109.7886f, 3504.164f, -4869.103f, 120.7706f, 16f, 1);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_546))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_546);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_547))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_547);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_548))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_548);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_549))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_549);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_550))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_550);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_551))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_551);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_552))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_552);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_553))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_553);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	VEHICLE::SET_RANDOM_TRAINS(1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_654, 1);
		func_653();
	}
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
	GlobalFunc_8316(0, 1, 1, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	HUD::UNLOCK_MINIMAP_ANGLE();
	Global_14336 = 0;
	GlobalFunc_601(23, 0);
	iVar1 = 0;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		iVar1 = 1;
	}
	ENTITY::REMOVE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), iVar1);
	ENTITY::REMOVE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), iVar1);
	iLocal_92 = 0;
	if (iParam0 == 0 || iParam1)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1960))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1960);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1961))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1961);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1962))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1962);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1963))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1963);
		}
		INTERIOR::UNPIN_INTERIOR(iLocal_1162);
		if (iParam1 == 0)
		{
			STREAMING::REMOVE_IPL("prologue01");
			STREAMING::REMOVE_IPL("prologue02");
			STREAMING::REMOVE_IPL("prologue03");
			STREAMING::REMOVE_IPL("prologue04");
			STREAMING::REMOVE_IPL("prologue05");
			STREAMING::REMOVE_IPL("prologue06");
			STREAMING::REMOVE_IPL("prologuerd");
			STREAMING::REMOVE_IPL("Prologue01c");
			STREAMING::REMOVE_IPL("Prologue01d");
			STREAMING::REMOVE_IPL("Prologue01e");
			STREAMING::REMOVE_IPL("Prologue01f");
			STREAMING::REMOVE_IPL("Prologue01g");
			STREAMING::REMOVE_IPL("prologue01h");
			STREAMING::REMOVE_IPL("prologue01i");
			STREAMING::REMOVE_IPL("prologue01j");
			STREAMING::REMOVE_IPL("prologue01k");
			STREAMING::REMOVE_IPL("prologue01z");
			STREAMING::REMOVE_IPL("prologue03b");
			STREAMING::REMOVE_IPL("prologue04b");
			STREAMING::REMOVE_IPL("prologue05b");
			STREAMING::REMOVE_IPL("prologue06b");
			STREAMING::REMOVE_IPL("prologuerdb");
			STREAMING::REMOVE_IPL("prologue_occl");
			STREAMING::REMOVE_IPL("prologue06_int");
			STREAMING::REMOVE_IPL("prologue04_cover");
			STREAMING::REMOVE_IPL("prologue03_grv_dug");
			STREAMING::REMOVE_IPL("prologue03_grv_cov");
			STREAMING::REMOVE_IPL("prologue03_grv_fun");
			STREAMING::REMOVE_IPL("prologue_grv_torch");
			GlobalFunc_2449("prologue_DistantLights");
			GlobalFunc_2449("prologue_LODLights");
			STREAMING::REMOVE_IPL("DES_ProTree_start");
			STREAMING::REMOVE_IPL("DES_ProTree_start_lod");
			STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", 0);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			MISC::_CLEAR_CLOUD_HAT();
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			GlobalFunc_2448(0);
		}
		PATHFIND::_SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(0);
		CAM::_0xDB90C6CCA48940F1(1);
		HUD::ALLOW_SONAR_BLIPS(1);
		VEHICLE::_0x35E0654F4BAD7971(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_653()//Position - 0x7A38F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_87680[iVar0] = 0;
		Global_87688[iVar0] = 0;
		Global_87692[iVar0] = 0;
		Global_87746[iVar0 /*3*/][0] = -1;
		Global_87746[iVar0 /*3*/][1] = -1;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iVar1 /*223*/][iVar0 /*74*/] = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iVar1 /*223*/][iVar0 /*74*/].f_1 = 0;
			StringCopy(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iVar1 /*223*/][iVar0 /*74*/].f_27), "", 16);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1475[iVar1 /*4*/][iVar0] = 0;
			iVar1++;
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_290[iVar0] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1576[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1580 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1582 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3207 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = 145;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1556[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1560[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1611[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[iVar0] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[iVar0] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[iVar0] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1564[iVar0] = -15;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1568[iVar0] = -1;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1572[iVar0] = -1;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] = -99;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0] = 14;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] = -99;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
		iVar1 = 0;
		while (iVar1 < 44)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/][iVar1 /*3*/].f_1 = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/][iVar1 /*3*/].f_2 = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/][iVar1 /*3*/] = 0;
			if (GlobalFunc_223(iVar1) == 1993361168)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/][iVar1 /*3*/] = joaat("weapon_unarmed");
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 50)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/].f_133[iVar1 /*3*/].f_1 = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/].f_133[iVar1 /*3*/].f_2 = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/].f_133[iVar1 /*3*/] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar0 /*15*/][iVar1] = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar0 /*15*/].f_5[iVar1] = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar0 /*15*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1469)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1469[iVar0] = 0;
		iVar0++;
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_196[0] = 77;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_196[1] = 41;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_196[2] = 54;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_200[0] = 47;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_200[1] = 14;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_200[2] = 18;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][0 /*74*/] = 0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][0 /*74*/].f_1 = 0;
	StringCopy(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][0 /*74*/].f_27), "", 16);
	Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID = -1;
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = 145;
	func_655(0);
	Global_87673 = 1;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (GlobalFunc_5123(&Var3, iVar0, 0, 0, -1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[0 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[0 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		if (GlobalFunc_5123(&Var3, iVar0, 1, 0, -1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[1 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[1 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (GlobalFunc_5123(&Var3, iVar0, 2, 0, -1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[2 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[2 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[2 /*15*/].f_10[(1 / 32)]), (1 % 32));
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1576[0] = 1;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_290[0] = 100f;
	iVar2 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/];
	GlobalFunc_4536(0);
	GlobalFunc_521(0);
	GlobalFunc_10942(iVar2, 12, 0, 0);
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1576[2] = 1;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_290[2] = 100f;
	iVar2 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/];
	GlobalFunc_4536(2);
	GlobalFunc_521(2);
	GlobalFunc_10942(iVar2, 12, 0, 0);
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1576[1] = 1;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_290[1] = 100f;
	iVar2 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/];
	GlobalFunc_4536(1);
	GlobalFunc_521(1);
	GlobalFunc_10942(iVar2, 12, 0, 0);
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1580 = 1;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1581 = 0;
}


void func_655(bool bParam0)//Position - 0x7B3AB
{
	GlobalFunc_185();
	if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_232 && GlobalFunc_526(53))
	{
		Global_51925[0] = 4000;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[0 /*69*/] = 0;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[0 /*69*/].f_1 = 0;
		Global_51925[1] = 4000;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[1 /*69*/] = 0;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[1 /*69*/].f_1 = 0;
		Global_51925[2] = 4000;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[2 /*69*/] = 0;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[2 /*69*/].f_1 = 0;
		GlobalFunc_2770(2);
		GlobalFunc_2770(0);
		GlobalFunc_2770(1);
		func_656(2, 1, 36, 22300, 0);
		func_656(2, 0, 13, 678, 0);
		func_656(2, 1, 36, 45200, 0);
		func_656(2, 0, 6, 200, 0);
		func_656(2, 0, 4, 12, 0);
		func_656(2, 0, 4, 14, 0);
		func_656(2, 0, 8, 280, 0);
		func_656(2, 1, 36, 30200, 0);
		func_656(2, 0, 13, 185, 0);
		func_656(1, 0, 5, 45, 0);
		func_656(1, 0, 10, 400, 0);
		func_656(1, 0, 11, 19, 0);
		func_656(1, 0, 7, 149, 0);
		func_656(1, 0, 4, 19, 0);
		func_656(0, 0, 4, 19, 0);
		func_656(0, 0, 7, 2313, 0);
		func_656(0, 0, 5, 20, 0);
		func_656(0, 0, 9, 5633, 0);
		func_656(0, 0, 12, 700, 0);
		STATS::STAT_SET_INT(joaat("sp0_money_total_spent"), 0, 1);
		STATS::STAT_SET_INT(joaat("sp1_money_total_spent"), 0, 1);
		STATS::STAT_SET_INT(joaat("sp2_money_total_spent"), 0, 1);
		Global_51925[2] = 10666;
		Global_51925[0] = 3085;
		Global_51925[1] = 1178;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_232 = 1;
	}
	if (bParam0)
	{
		Global_51925[2] = 108654;
		Global_51925[0] = 7860;
		Global_51925[1] = 78;
	}
	GlobalFunc_2770(2);
	GlobalFunc_2770(0);
	GlobalFunc_2770(1);
}

int func_656(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7B5A8
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	GlobalFunc_185();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_184(99, 1);
					GlobalFunc_183(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					GlobalFunc_183(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					GlobalFunc_183(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			GlobalFunc_9627(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (GlobalFunc_4962(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							GlobalFunc_183(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							GlobalFunc_183(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							GlobalFunc_183(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (GlobalFunc_4962(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							GlobalFunc_183(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							GlobalFunc_183(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							GlobalFunc_183(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							GlobalFunc_183(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							GlobalFunc_183(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							GlobalFunc_183(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							GlobalFunc_183(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							GlobalFunc_183(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							GlobalFunc_183(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									GlobalFunc_183(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									GlobalFunc_183(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									GlobalFunc_183(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									GlobalFunc_183(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									GlobalFunc_183(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									GlobalFunc_183(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (GlobalFunc_4962(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									GlobalFunc_183(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									GlobalFunc_183(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									GlobalFunc_183(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									GlobalFunc_183(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									GlobalFunc_183(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									GlobalFunc_183(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							GlobalFunc_4961(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_184(95, iParam3);
					break;
				
				case 1:
					GlobalFunc_184(97, iParam3);
					break;
				
				case 2:
					GlobalFunc_184(96, iParam3);
					break;
			}
			GlobalFunc_184(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		GlobalFunc_4960(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		GlobalFunc_4960(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					GlobalFunc_183(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					GlobalFunc_183(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					GlobalFunc_183(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	GlobalFunc_2770(iParam0);
	if (Global_34913 == 15)
	{
		GlobalFunc_174(0);
	}
	return 1;
}
























void func_680(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C240
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	GlobalFunc_629(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
		}
		GlobalFunc_628(iVar0, uParam0);
		GlobalFunc_627(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, 1);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], GlobalFunc_468()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!MISC::IS_BIT_SET(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		}
	}
	iParam0->f_21 = 0;
}





void func_685()//Position - 0x7C4AC
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1644;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_1644[iVar1] = 0;
		iVar1++;
	}
}

void func_686()//Position - 0x7C4D7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1613)
	{
		iLocal_1613[iVar0] = 0;
		iVar0++;
	}
}

void func_687()//Position - 0x7C4FE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iLocal_1572[iVar0] = 0;
		iVar0++;
	}
}

void func_688()//Position - 0x7C524
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 314)
	{
		iLocal_1257[iVar0] = 0;
		iVar0++;
	}
}





void func_693(int iParam0)//Position - 0x7C6C2
{
	iLocal_1255 = iParam0;
	func_615();
}



void func_696()//Position - 0x7C72C
{
	iLocal_654 = PLAYER::PLAYER_PED_ID();
	iLocal_655 = func_698();
	iLocal_656 = func_697(0);
	iLocal_657 = func_697(2);
}

int func_697(int iParam0)//Position - 0x7C752
{
	if (GlobalFunc_8315() == iParam0)
	{
		return iLocal_654;
	}
	return uLocal_1670[GlobalFunc_237(iParam0)];
}

var func_698()//Position - 0x7C777
{
	if (GlobalFunc_8315() == 0)
	{
		return uLocal_1670[GlobalFunc_237(2)];
	}
	return uLocal_1670[GlobalFunc_237(0)];
}

