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
	char* sLocal_46 = NULL;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_84 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
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
	char[] cLocal_249[8] = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	bool bLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	struct<6> Local_266[19];
	struct<4> Local_381[5];
	struct<10> Local_402[33];
	bool bLocal_733 = 0;
	int iLocal_734 = 0;
	struct<6> Local_735[34];
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	struct<9> Local_942[10];
	bool bLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	float fLocal_1036 = 0f;
	int iLocal_1037 = 0;
	int iLocal_1038 = 0;
	int iLocal_1039 = 0;
	int iLocal_1040 = 0;
	int iLocal_1041 = 0;
	var uLocal_1042[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	struct<10> Local_1070[11];
	int iLocal_1181[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1192[4] = { 0, 0, 0, 0 };
	var uLocal_1197 = 0;
	struct<24> Local_1198[11];
	struct<3> Local_1463 = { 0, 0, 0 } ;
	struct<3> Local_1466 = { 0, 0, 0 } ;
	struct<3> Local_1469 = { 0, 0, 0 } ;
	struct<3> Local_1472 = { 0, 0, 0 } ;
	struct<3> Local_1475 = { 0, 0, 0 } ;
	struct<3> Local_1478 = { 0, 0, 0 } ;
	struct<3> Local_1481 = { 0, 0, 0 } ;
	struct<3> Local_1484 = { 0, 0, 0 } ;
	struct<3> Local_1487 = { 0, 0, 0 } ;
	struct<3> Local_1490 = { 0, 0, 0 } ;
	struct<3> Local_1493[44];
	var uLocal_1626 = 0;
	int iLocal_1627[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1639 = 0;
	int iLocal_1640 = 0;
	int iLocal_1641 = 0;
	int iLocal_1642 = 0;
	float fLocal_1643 = 0f;
	float fLocal_1644 = 0f;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	bool bLocal_1650 = 0;
	struct<17> Local_1651[5];
	struct<5> Local_1737 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 21;
	var uLocal_1745 = 6;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 16;
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
	char[] cLocal_1914[8] = 0;
	int iLocal_1915 = 0;
	int iLocal_1916 = 0;
	struct<3> Local_1917[4];
	int iLocal_1930 = 0;
	char cLocal_1931[24] = "";
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	char cLocal_1937[24] = "";
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	struct<3> Local_1943 = { 0, 0, 0 } ;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	var uLocal_1953 = 0;
	struct<7> Local_1954 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_1961 = 1092616192;
	var uLocal_1962 = 1101004800;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 3;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	struct<3> Local_1982 = { 0, 0, 0 } ;
	int iLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	struct<3> Local_1991 = { 0, 0, 0 } ;
	struct<3> Local_1994 = { 0, 0, 0 } ;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	char* sLocal_2000 = NULL;
	char* sLocal_2001 = NULL;
	int iLocal_2002[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2013 = 0;
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
	iLocal_56 = -1;
	iLocal_57 = -1;
	bLocal_72 = true;
	uLocal_258 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_259 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_1643 = 20f;
	fLocal_1644 = 120f;
	cLocal_1914 = "TRV3AUD";
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_552(1);
	}
	while (true)
	{
		func_551();
		func_550();
		func_125();
		RECORDING::_0x208784099002BC30("m_trevor3", 0);
		switch (iLocal_1034)
		{
			case 4:
			case 5:
				func_84(&Local_1198, &Local_1493, Local_1472, Local_1475, Local_1478, Local_1481, Local_1469, Local_1490, Local_1463, Local_1466, Local_1484, Local_1487);
				break;
			
			case 7:
				if (!func_83(3, 68))
				{
					func_84(&Local_1198, &Local_1493, Local_1472, Local_1475, Local_1478, Local_1481, Local_1469, Local_1490, Local_1463, Local_1466, Local_1484, Local_1487);
				}
				break;
		}
		if (iLocal_940 == 1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_940 = 0;
				PED::SET_PED_HELMET_FLAG(PLAYER::PLAYER_PED_ID(), 4096);
			}
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19A
{
	int iVar0;
	
	switch (iLocal_2013)
	{
		case 0:
			if (iLocal_1034 >= 4)
			{
				GlobalFunc_Checkpoint3(1, "Destroy trailers", 0, 0, 0, 1);
				iLocal_2013++;
			}
			break;
		
		case 1:
			if (iLocal_1034 > 5)
			{
				GlobalFunc_Checkpoint3(2, "TRailers Destroyed", 0, 0, 0, 1);
				Global_86804 = 0;
				iVar0 = 0;
				while (iVar0 < Local_1070)
				{
					if (!func_3(Local_1070[iVar0 /*10*/]))
					{
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iVar0 /*10*/]) != iLocal_1642)
						{
							Global_86804++;
						}
					}
					iVar0++;
				}
				iLocal_2013++;
			}
			break;
		
		case 2:
			if (iLocal_1034 > 7)
			{
				GlobalFunc_Checkpoint3(3, "Drive to Los Santos", 0, 0, 0, 1);
				iLocal_2013++;
			}
			if (iLocal_2013 == 2)
			{
				if (iLocal_1034 == 7)
				{
					if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) < 5f)
						{
							GlobalFunc_Checkpoint3(3, "Drive to Los Santos", 0, 0, 0, 1);
							iLocal_2013++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_1034 >= 9)
			{
				GlobalFunc_Checkpoint3(4, "Drive to Wade's cousin", 1, 0, 0, 1);
				iLocal_2013++;
			}
			break;
	}
}


int func_3(int iParam0)//Position - 0x320
{
	if (PED::IS_PED_INJURED(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, 1))
	{
		return 1;
	}
	return 0;
}
















































































int func_83(int iParam0, int iParam1)//Position - 0x74A1
{
	if (Local_402[iParam0 /*10*/] == iParam1)
	{
		if (Local_402[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_84(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, struct<3> Param14, struct<3> Param17, struct<3> Param20, struct<3> Param23, struct<3> Param26, struct<3> Param29)//Position - 0x74C7
{
	if (iLocal_47 > 0)
	{
		func_123(uParam0, Param20, Param23, Param14, Param17);
		func_109(uParam0, uParam1, Param2, Param5, Param8);
		func_85(uParam0, Param11, Param14, Param17, Param20, Param23, Param26, Param29);
	}
}

void func_85(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, struct<3> Param13, struct<3> Param16, struct<3> Param19)//Position - 0x7521
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if (bLocal_72)
		{
			if (((iLocal_55 > iLocal_63 || iLocal_64 != iLocal_56) || (iLocal_55 < iLocal_63 && iLocal_55 == 8)) || (iLocal_55 == 10 && bLocal_48 == 0))
			{
				iLocal_62 = 1;
				iLocal_63 = iLocal_55;
				iLocal_64 = iLocal_56;
			}
			switch (iLocal_62)
			{
				case 1:
					if (iLocal_56 > -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_56 /*24*/], 1))
						{
							switch (iLocal_55)
							{
								case 8:
									if (!bLocal_48)
									{
										if (!bLocal_51)
										{
											if (!iLocal_71)
											{
												if (!GlobalFunc_5664(Param13.f_1))
												{
													GlobalFunc_4956();
													if (func_87(Param13.f_1, Param13.f_2, (*uParam0)[iLocal_56 /*24*/], Param13.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_62 = 2;
													}
												}
											}
											else
											{
												iLocal_62 = 2;
											}
										}
										else if (!GlobalFunc_5664(Param10.f_1))
										{
											GlobalFunc_4956();
											if (func_87(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_56 /*24*/], Param10.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_62 = 2;
											}
										}
									}
									else
									{
										iLocal_62 = 2;
									}
									break;
								
								case 7:
									iLocal_71 = 0;
									GlobalFunc_4956();
									if (func_87(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_56 /*24*/], Param1.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_62 = 2;
									}
									break;
								
								case 5:
									iLocal_71 = 0;
									GlobalFunc_4956();
									if (func_87(Param16.f_1, Param16.f_2, (*uParam0)[iLocal_56 /*24*/], Param16.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_62 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_48 && !iLocal_71)
									{
										GlobalFunc_4956();
										if (func_87(Param19.f_1, Param19.f_2, (*uParam0)[iLocal_56 /*24*/], Param19.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_62 = 2;
										}
									}
									else
									{
										iLocal_62 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_51)
									{
										if (((!GlobalFunc_5664(Param4.f_1) && !GlobalFunc_5664(Param7.f_1)) && !GlobalFunc_5664(Param10.f_1)) && !GlobalFunc_5664(Param13.f_1))
										{
											iLocal_71 = 0;
											GlobalFunc_4956();
											if (func_87(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_56 /*24*/], Param4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_62 = 2;
											}
										}
									}
									else
									{
										iLocal_62 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_51)
									{
										if (((!GlobalFunc_5664(Param4.f_1) && !GlobalFunc_5664(Param7.f_1)) && !GlobalFunc_5664(Param10.f_1)) && !GlobalFunc_5664(Param13.f_1))
										{
											iLocal_71 = 0;
											GlobalFunc_4956();
											if (func_87(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_56 /*24*/], Param7.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_62 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_48)
										{
											if (func_87(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_56 /*24*/], Param10.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_71 = 0;
												iLocal_62 = 2;
											}
										}
										iLocal_62 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_62 = 2;
						}
					}
					else
					{
						iLocal_62 = 2;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						iLocal_62 = 0;
					}
					break;
				}
			}
	}
}


int func_87(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x7850
{
	func_104(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_101(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_101(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_101(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_101(iParam10, iParam11, sParam12);
	}
	if (!GlobalFunc_4996())
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_10618(&Local_84, cLocal_249, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_251 = 0;
				return 1;
			}
			else if (iLocal_250 != MISC::GET_GAME_TIMER())
			{
				iLocal_251++;
				iLocal_250 = MISC::GET_GAME_TIMER();
				if (iLocal_251 >= 10)
				{
					iLocal_251 = 0;
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}














void func_101(int iParam0, int iParam1, char* sParam2)//Position - 0x8007
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_73)
	{
		if (iLocal_73[iVar0] == iParam1)
		{
			GlobalFunc_200(&Local_84, iVar0);
			iLocal_73[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_73[iParam0] != 0)
	{
		GlobalFunc_200(&Local_84, iParam0);
	}
	GlobalFunc_173(&Local_84, iParam0, iParam1, sParam2, 0, 1);
	iLocal_73[iParam0] = iParam1;
}



void func_104(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x811C
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uLocal_46) || !MISC::ARE_STRINGS_EQUAL(sLocal_46, uParam0))
	{
		sLocal_46 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_84[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					GlobalFunc_200(&Local_84, iVar0);
				}
			}
			iVar0++;
		}
	}
}





void func_109(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8)//Position - 0x8201
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	bool bVar14;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1) && !PED::IS_PED_BEING_STEALTH_KILLED((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
							if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
									{
										PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									}
									if (!PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = PED::GET_VEHICLE_PED_IS_USING((*uParam0)[iVar0 /*24*/]);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar2))
												{
													Var3 = { ENTITY::GET_ENTITY_VELOCITY(iVar2) };
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar2);
													ENTITY::SET_ENTITY_VELOCITY(iVar2, Var3);
													TASK::TASK_LEAVE_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = GlobalFunc_7059((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_120();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_119(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_120();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_119(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_120();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_119(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_120();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_119(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_58;
														iLocal_58++;
														if (iLocal_58 == 2)
														{
															iLocal_58 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], 0), 1);
															func_120();
															if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 1))
															{
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_119(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 3000;
															break;
														
														case 1:
															func_120();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															iVar6 = func_118();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_119(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + iVar6);
															break;
														
														default:
															if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	ENTITY::SET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_59;
														iLocal_59++;
														if (iLocal_59 == 2)
														{
															iLocal_59 = 0;
														}
													}
													if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], 1);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], 1);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], 0), 1);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_115(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_115(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_57 = iVar0;
													if (func_111(iVar0, uParam0, "", Param2, Param5, Param8, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_60 == 0)
															{
																if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 1))
																{
																	Var7 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1) };
																	Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
																	fVar13 = MISC::ATAN(((Var10.f_2 - Var7.f_2) / GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0)));
																	if (fVar13 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar13 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_60++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_120();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															func_119(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_120();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															func_119(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_120();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															func_119(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_51)
															{
																if (MISC::ABSF(GlobalFunc_7059((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID())) < 20f)
																{
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_110(((GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_110(((GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_110(((GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (!bVar14)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 2000;
											TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], 1);
											PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_ANY_SCENARIO((*uParam0)[iVar0 /*24*/]))
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], 0), 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], 0);
									PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 50, 1);
									PED::SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 512, 1);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_61 = iLocal_61;
										uLocal_65 = uLocal_65;
										TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_110(float fParam0, float fParam1, float fParam2)//Position - 0x930B
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_111(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, bool bParam12)//Position - 0x932F
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if (GlobalFunc_111())
				{
					if (!GlobalFunc_5664(Param3.f_1))
					{
						GlobalFunc_5105();
					}
				}
				if (func_87(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], 1) };
					(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], 1) };
				(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 5000;
			}
			break;
		
		case 2:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if ((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iParam0 /*24*/]) || iLocal_70 == 1) && GlobalFunc_713((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (MISC::GET_GAME_TIMER() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f, 20000, 0.1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_87(Param9.f_1, Param9.f_2, (*uParam1)[iParam0 /*24*/], Param9.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam12)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_ACHIEVE_HEADING((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_120();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 1193033728);
			TASK::TASK_ACHIEVE_HEADING(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_119(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1) && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam2, ""))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_57 = -1;
			}
			break;
		
		case 5:
			if (func_87(Param3.f_1, Param6.f_2, (*uParam1)[iParam0 /*24*/], Param3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (GlobalFunc_713((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!PED::IS_PED_INJURED((*uParam1)[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iParam0 /*24*/]);
					func_120();
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_119(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}




int func_115(int iParam0, var uParam1, bool bParam2)//Position - 0x97FF
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!PED::IS_PED_DEAD_OR_DYING((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (PED::IS_PED_DEAD_OR_DYING((*uParam1)[iVar0 /*24*/], 1) && ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = GlobalFunc_156((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = GlobalFunc_7059((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (MISC::ABSF((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = GlobalFunc_5821((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}



int func_118()//Position - 0x9982
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

void func_119(var uParam0, bool bParam1)//Position - 0x9B7B
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_252, 1);
	}
	TASK::CLOSE_SEQUENCE_TASK(uLocal_252);
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, 1))
	{
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_252);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_252);
}

void func_120()//Position - 0x9BB0
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_252);
}



void func_123(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, struct<2> Param7, var uParam9, struct<2> Param10, var uParam12)//Position - 0x9C28
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	
	if (!bLocal_48 == 1)
	{
		bLocal_253 = false;
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_254 == 0)
			{
				iLocal_254 = iVar1;
			}
			if (iVar1 < iLocal_254)
			{
				iLocal_254 = iVar1;
				bLocal_253 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_53 /*24*/], 1))
			{
				if ((uParam0[iLocal_53 /*24*/])->f_3 > 3 && (uParam0[iLocal_53 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_53)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (GlobalFunc_156((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_53 /*24*/], 1) < 8f)
									{
										if ((INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_53 /*24*/]) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) != 0) || (INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_53 /*24*/]) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1) };
											Var6 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iLocal_53 /*24*/], 0) };
											if (MISC::ABSF((Var3.f_2 - Var6.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_53;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar9 = 10f;
					fVar10 = 11f;
					(uParam0[iLocal_53 /*24*/])->f_22 = -1;
					(uParam0[iLocal_53 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_53)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*24*/]))
							{
								fVar11 = GlobalFunc_156((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_53 /*24*/], 1);
								if (fVar11 < 10f)
								{
									fVar12 = GlobalFunc_7059((*uParam0)[iLocal_53 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar12 > -90f && fVar12 < 90f)
									{
										if (fVar11 < fVar9)
										{
											(uParam0[iLocal_53 /*24*/])->f_23 = (uParam0[iLocal_53 /*24*/])->f_22;
											(uParam0[iLocal_53 /*24*/])->f_22 = iVar0;
											fVar10 = fVar9;
											fVar9 = fVar11;
										}
										else if (fVar11 < fVar10)
										{
											fVar10 = fVar11;
											(uParam0[iLocal_53 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_53++;
			if (iLocal_53 >= *uParam0)
			{
				iLocal_53 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
		{
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13))
			{
				iVar14 = 1;
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_66, uLocal_69))
	{
		bLocal_49 = true;
	}
	if (!iLocal_50)
	{
		if (GlobalFunc_5664(Param1.f_1) || GlobalFunc_5664(Param4.f_1))
		{
			iLocal_54 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_50 = 1;
		}
		if (GlobalFunc_5664(Param7.f_1) || GlobalFunc_5664(Param10.f_1))
		{
			iLocal_54 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_50 = 1;
		}
	}
	else if (((!GlobalFunc_5664(Param1.f_1) && !GlobalFunc_5664(Param4.f_1)) && !GlobalFunc_5664(Param7.f_1)) && !GlobalFunc_5664(Param10.f_1))
	{
		iLocal_50 = 0;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_54)
	{
		if (GlobalFunc_5664(Param1.f_1) || GlobalFunc_5664(Param4.f_1))
		{
			bLocal_48 = true;
		}
		if (GlobalFunc_5664(Param7.f_1) || GlobalFunc_5664(Param10.f_1))
		{
			bLocal_51 = true;
		}
	}
	iLocal_55 = 0;
	iVar15 = -1;
	fVar16 = 13f;
	iLocal_52 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar17 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_57 == -1)
	{
		iLocal_70 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_57 == -1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, 0))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar17))
							{
								iLocal_70 = 1;
								fVar16 = 20f;
							}
							if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar17))
							{
								iLocal_70 = 1;
								fVar16 = 50f;
							}
						}
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam0)[iVar0 /*24*/]) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, 0) && VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar17)))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < fVar16)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]))
									{
										fVar16 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1);
										iVar15 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar16 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_49)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_48)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_253)
					{
					}
					if (!bLocal_253 && !PED::IS_PED_RAGDOLL((*uParam0)[iVar0 /*24*/]))
					{
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 124))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 1) || PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)) || (PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0) && PED::CAN_PED_IN_COMBAT_SEE_TARGET((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID()))) || (func_124((*uParam0)[iVar0 /*24*/]) && PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar14 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_51)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_55)
				{
					iLocal_55 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_56 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_52 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_57 == -1)
	{
		if (iVar15 != -1)
		{
			if (1 > (uParam0[iVar15 /*24*/])->f_1)
			{
				(uParam0[iVar15 /*24*/])->f_1 = 1;
				iLocal_57 = iVar15;
			}
		}
	}
	else if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_57 /*24*/], 1))
	{
		iLocal_57 = -1;
	}
}

int func_124(int iParam0)//Position - 0xA464
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_125()//Position - 0xA51D
{
	switch (iLocal_1034)
	{
		case 0:
			if (func_471())
			{
				func_466(14);
			}
			break;
		
		case 1:
			if (func_465())
			{
				func_466(14);
			}
			break;
		
		case 2:
			if (func_463())
			{
				func_466(14);
			}
			break;
		
		case 3:
			if (func_461())
			{
				func_466(14);
			}
			break;
		
		case 4:
			if (func_460(&bLocal_1033))
			{
				if (bLocal_1033)
				{
					func_466(14);
				}
				else
				{
					func_466(7);
				}
			}
			break;
		
		case 5:
			if (func_458())
			{
				func_466(7);
			}
			break;
		
		case 7:
			if (func_366())
			{
				func_466(10);
			}
			break;
		
		case 8:
			if (func_366())
			{
				func_466(10);
			}
			break;
		
		case 9:
			if (func_366())
			{
				func_466(10);
			}
			break;
		
		case 10:
			if (func_365())
			{
				func_466(14);
			}
			break;
		
		case 11:
			if (func_131())
			{
				func_466(14);
			}
			break;
		
		case 12:
			func_126();
			break;
	}
}

void func_126()//Position - 0xA63C
{
	GlobalFunc_5103(0, 0);
	func_552(0);
}





int func_131()//Position - 0xA7C3
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_132(0, 91, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 92, 0, 0, 0, 1, 0, 1, 0);
	func_132(4, 96, 0, 0, 0, 1, 0, 1, 0);
	if (func_83(0, 91) || func_83(4, 96))
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		func_126();
	}
	return 0;
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA81C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	int iVar16;
	var uVar17;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	
	if (Local_402[iParam0 /*10*/] != iParam1 || Local_402[iParam0 /*10*/].f_1 == 0)
	{
		Local_402[iParam0 /*10*/] = iParam1;
		Local_402[iParam0 /*10*/].f_1 = 1;
		Local_402[iParam0 /*10*/].f_2 = 0;
		Local_402[iParam0 /*10*/].f_3 = 0;
		Local_402[iParam0 /*10*/].f_6 = 0;
		Local_402[iParam0 /*10*/].f_4 = 0;
		Local_402[iParam0 /*10*/].f_7 = 0;
		Local_402[iParam0 /*10*/].f_8 = 0;
		Local_402[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_402[iParam0 /*10*/].f_3)
	{
		return 1;
	}
	if (Local_402[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_361(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, 1, 0, 1, 0);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_402[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_402[iParam0 /*10*/].f_3 == 0 || Local_402[iParam0 /*10*/].f_6 == 99)
	{
		if (bVar0 == 1)
		{
			if (!Local_402[iParam0 /*10*/].f_2)
			{
				Local_402[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_402[iParam0 /*10*/])
			{
				case 1:
					CUTSCENE::REQUEST_CUTSCENE("trevor_drive_int", 8);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 2:
					GlobalFunc_10639(52, 6);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						if (!func_3(Global_86864.f_9[0]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", Global_86864.f_9[0], 0);
						}
					}
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								GlobalFunc_562(64);
								if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
								{
									if (!func_3(Global_86864.f_9[0]))
									{
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[0], "Wade", 0, GlobalFunc_4946(24), 0);
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
										Local_1070[10 /*10*/] = Global_86864.f_9[0];
									}
								}
								else
								{
									CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1070[10 /*10*/], "Wade", 2, GlobalFunc_4946(24), 0);
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
								GlobalFunc_8316(1, 1, 1, 0);
								CUTSCENE::START_CUTSCENE(0);
								RECORDING::_0x48621C9FCA3EBD28(4);
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(1000);
							}
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 2:
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
								func_340(3, 1);
								RECORDING::_0x81CBAE94390F9F89();
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							GlobalFunc_10159(1970.273f, 3810.583f, 30.55975f, 1982.752f, 3817.504f, 34.61814f, 6.925f, 1983.947f, 3823.966f, 31.3549f, 25.7606f, 10f, 10f, 9f, 1, 1, 1, 0, 0);
							GlobalFunc_10159(1970.069f, 3813.558f, 30.76939f, 1971.171f, 3811.62f, 33.25047f, 1f, 1965.82f, 3797.846f, 31.2019f, 123.9023f, 7f, 20f, 15f, 1, 1, 1, 0, 0);
							MISC::CLEAR_AREA(1970.743f, 3812.127f, 31.3808f, 1f, 1, 0, 0, 0);
							MISC::CLEAR_AREA_OF_PEDS(1985.751f, 3825.215f, 31.33905f, 15.8f, 0);
							iLocal_1181[0] = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[0]))
							{
								if (func_333(iLocal_1181[0]))
								{
									if (GlobalFunc_713(iLocal_1181[0], 1985.889f, 3813.372f, 31.1577f, 1) > 30f)
									{
										iLocal_1181[0] = 0;
									}
								}
							}
							iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uLocal_1042);
							iVar2 = 0;
							while (iVar2 <= (iVar1 - 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_1042[iVar2]))
								{
									if (func_333(uLocal_1042[iVar2]))
									{
										fVar3 = GlobalFunc_713(uLocal_1042[iVar2], 1982.744f, 3821.23f, 31.4748f, 1);
										if (fVar3 < 20f)
										{
											if (ENTITY::GET_ENTITY_SPEED(uLocal_1042[iVar2]) < 0.5f)
											{
												Local_402[iParam0 /*10*/].f_3 = 1;
											}
										}
									}
								}
								iVar2++;
							}
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							STREAMING::REQUEST_MODEL(joaat("blazer"));
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 2:
							if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
							{
								uVar4 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 1987.169f, 3825.654f, 31.4259f, 25f, 1, 1);
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 4:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[10 /*10*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0)))
						{
							Local_1070[10 /*10*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0));
							func_332();
						}
					}
					break;
				
				case 5:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						switch (Local_402[iParam0 /*10*/].f_6)
						{
							case 0:
								PED::SET_PED_RESET_FLAG(Local_1070[10 /*10*/], 190, 1);
								Local_402[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0))
								{
									PED::SET_PED_RESET_FLAG(Local_1070[10 /*10*/], 190, 0);
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
								break;
							}
					}
					break;
				
				case 6:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (GlobalFunc_2234(PLAYER::PLAYER_PED_ID(), iVar5) == -1)
						{
							if (iVar5 != iLocal_1181[0])
							{
								if (func_333(iLocal_1181[9]))
								{
									if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1181[9], 1))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[9]));
									}
								}
								iLocal_1181[9] = iLocal_1181[0];
								iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1181[0], 1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1181[0], 1, 1);
								}
							}
						}
					}
					if (func_333(iLocal_1181[9]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_1181[9], 1) > 60f)
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1181[9], 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[9]));
								iLocal_1181[9] = 0;
							}
						}
					}
					break;
				
				case 7:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						switch (Local_402[iParam0 /*10*/].f_6)
						{
							case 0:
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
								Local_402[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (PED::IS_PED_IN_GROUP(Local_1070[10 /*10*/]))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_1070[10 /*10*/], 0);
									Local_402[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (!PED::IS_PED_IN_GROUP(Local_1070[10 /*10*/]))
								{
									Local_402[iParam0 /*10*/].f_6 = 1;
								}
								break;
							}
					}
					break;
				
				case 8:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 30f);
							Local_402[iParam0 /*10*/].f_6++;
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 30000;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 40f);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38f, 3694f, 61f) - Vector(130f, 130f, 130f), Vector(38f, 3694f, 61f) + Vector(130f, 130f, 130f), 0, 1, 1, 1);
							PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
							PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
							PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
							MISC::CLEAR_AREA(61f, 3694f, 38f, 130f, 1, 0, 0, 0);
							VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(92.6982f, 3738.728f, 36.7299f, 105.6982f, 3747.728f, 40.7299f, 0, 1);
							VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.8369f, 3656.937f, 43.4604f) - Vector(5f, 7f, 7f), Vector(38.8369f, 3656.937f, 43.4604f) + Vector(5f, 7f, 7f), 0, 1);
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(41.2529f, 3709.404f, 38.7345f, 100f, 0);
							PATHFIND::SET_ROADS_IN_ANGLED_AREA(53.94371f, 3620.474f, 28.62759f, 64.89907f, 3764.617f, 50.32835f, 106.5f, 0, 0, 1);
							STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
								Local_402[iParam0 /*10*/].f_6 = 101;
							}
							break;
						
						case 101:
							if (STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02")))
							{
								STREAMING::REQUEST_MODEL(joaat("dloader"));
								Local_402[iParam0 /*10*/].f_6 = 102;
							}
							break;
						
						case 102:
							if (STREAMING::HAS_MODEL_LOADED(joaat("dloader")))
							{
								STREAMING::REQUEST_MODEL(joaat("hexer"));
								Local_402[iParam0 /*10*/].f_6 = 2;
							}
							break;
						
						case 2:
							if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
							{
								STREAMING::REQUEST_MODEL(joaat("prop_coffin_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 3:
							if (STREAMING::HAS_MODEL_LOADED(joaat("prop_coffin_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
							{
								Local_402[iParam0 /*10*/].f_6++;
								STREAMING::REQUEST_PTFX_ASSET();
								STREAMING::REQUEST_ANIM_DICT("misstrevor3");
							}
							break;
						
						case 4:
							if (STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3"))
							{
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("misstrevor3_beatup");
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 5:
							if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank1") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3_beatup"))
							{
								Local_402[iParam0 /*10*/].f_6++;
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
							}
							break;
						
						case 6:
							if (STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left"))
							{
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward"))
							{
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 8:
							iLocal_1181[6] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 43.4235f, 3653.882f, 38.7234f, 0.5785f, 1, 1);
							iLocal_1181[7] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 42.7094f, 3659.628f, 38.8113f, 235.4671f, 1, 1);
							func_330(4, 10, 0, 0);
							func_329(4, 10, 0);
							Local_402[iParam0 /*10*/].f_3 = 1;
							break;
					}
					break;
				
				case 10:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_coffin_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
					STREAMING::REMOVE_ANIM_DICT("misstrevor3");
					STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
					STREAMING::REMOVE_ANIM_DICT("misstrevor3_beatup");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
					STREAMING::REMOVE_PTFX_ASSET();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[6]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_1181[6]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[7]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_1181[7]));
					}
					func_330(3, 9, 0, 0);
					func_329(3, 9, 0);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 11:
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					break;
				
				case 14:
					func_328(4, 3);
					func_328(3, 6);
					GlobalFunc_5105();
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 12:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_3_DRIVE_TO_TRAILER_PARK");
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 13:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_402[iParam0 /*10*/].f_6++;
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								MISC::FORCE_LIGHTNING_FLASH();
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 16:
					if (!iLocal_941)
					{
						iVar7 = 0;
						while (iVar7 < Local_1070)
						{
							if (!func_3(Local_1070[iVar7 /*10*/]))
							{
								if (iVar7 != 10 && iVar7 != 7)
								{
									iVar6++;
								}
							}
							iVar7++;
						}
						if (iVar6 > 2)
						{
							if (AUDIO::LOAD_STREAM("TREVOR3_FIGHT_COMMOTION_MASTER", 0))
							{
								iLocal_941 = 1;
								AUDIO::PLAY_STREAM_FROM_POSITION(70.2011f, 3712.84f, 40.5056f);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					break;
				
				case 17:
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 61:
					MISC::SET_INSTANCE_PRIORITY_HINT(1);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (!func_3(Local_1070[1 /*10*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_1070[1 /*10*/]))
					{
						if (((Local_1198[1 /*24*/].f_3 <= 3 && !func_3(Local_1070[1 /*10*/])) && !PED::IS_PED_IN_COMBAT(Local_1070[1 /*10*/], 0)) || !ENTITY::DOES_ENTITY_EXIST(Local_1070[1 /*10*/]))
						{
							switch (Local_402[iParam0 /*10*/].f_6)
							{
								case 0:
									if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[1 /*10*/]))
									{
										func_326(1, joaat("g_m_y_lost_02"), joaat("weapon_pumpshotgun"), 59.1969f, 3635.664f, 38.7018f, 105.727f);
										func_325(&Local_1198, 1, Local_1070[1 /*10*/], 1, 0, 0);
										iLocal_1035 = func_324(Local_1070[1 /*10*/], &Local_1198);
										iLocal_1181[8] = VEHICLE::CREATE_VEHICLE(joaat("dloader"), 58.083f, 3638.17f, 38.4957f, 205.5108f, 1, 1);
										VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1181[8], 4, 0, 0);
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DAMAGED_TRUCK_IDLE", iLocal_1181[8], 0, 0, 0);
										Local_402[iParam0 /*10*/].f_6++;
									}
									else
									{
										Local_402[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
								case 2:
									if (Local_402[iParam0 /*10*/].f_6 == 1)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[8], 0))
										{
											if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_1181[8], 4) > 0.9f)
											{
												VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1181[8], 0f);
												Local_402[iParam0 /*10*/].f_6++;
											}
											else
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1181[8], 4, 0, 0);
											}
										}
									}
									if (Local_1198[iLocal_1035 /*24*/].f_3 == 3 || Local_1198[iLocal_1035 /*24*/].f_3 == 2)
									{
										Local_1198[iLocal_1035 /*24*/].f_3 = 3;
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_8) == 1f) || (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_7) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_8)))
										{
											Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(58.162f, 3638.364f, 39.438f, 0f, 0f, -157.25f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[1 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3", "brokendown_longlook", 1f, -4f, 1, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_402[iParam0 /*10*/].f_7, 1);
											Local_402[iParam0 /*10*/].f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
										}
									}
									break;
								
								default:
									if (Local_1198[iLocal_1035 /*24*/].f_3 == 3 || Local_1198[iLocal_1035 /*24*/].f_3 == 2)
									{
										Local_1198[iLocal_1035 /*24*/].f_3 = 3;
										if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_6)
										{
											Local_402[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(58.162f, 3638.364f, 39.438f, 0f, 0f, -157.25f, 2);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_402[iParam0 /*10*/].f_8, 1);
											if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[1 /*10*/], 1) > 10f)
											{
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[1 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3", "brokendown_wrongwithyou", 1f, -4f, 1, 0, 1f, 0);
												}
												else
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[1 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3", "brokendown_suchabitch", 1f, -4f, 1, 0, 1f, 0);
												}
											}
											else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[1 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3", "brokendown_wrongwithyou", 1f, -4f, 1, 0, 1f, 0);
											}
											else
											{
												Local_402[iParam0 /*10*/].f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											}
											Local_402[iParam0 /*10*/].f_6 = 2;
										}
									}
									break;
								}
							}
					}
					break;
				
				case 18:
					func_326(2, joaat("g_m_y_lost_01"), joaat("weapon_assaultrifle"), 64.1751f, 3690.55f, 38.7544f, 285f);
					func_325(&Local_1198, 2, Local_1070[2 /*10*/], 1, 0, 0);
					uLocal_1645 = PED::CREATE_SYNCHRONIZED_SCENE(67.817f, 3694.449f, 38.766f, 0f, 0f, -35.19f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[2 /*10*/], uLocal_1645, "misstrevor3", "horny_biker_loop", 1000f, -4f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1645, 1);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 19:
					iLocal_1181[2] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 51.6001f, 3701.159f, 38.7542f, 331.9564f, 1, 1);
					iLocal_1181[3] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 53.2583f, 3699.893f, 39.2443f, 331.9564f, 1, 1);
					func_326(3, joaat("g_m_y_lost_01"), joaat("weapon_assaultrifle"), 49.3678f, 3697.281f, 38.7542f, 277.198f);
					func_326(4, joaat("g_m_y_lost_02"), joaat("weapon_pumpshotgun"), 51.1357f, 3696.604f, 38.7542f, 332.8487f);
					func_325(&Local_1198, 3, Local_1070[3 /*10*/], 0, 0, 1);
					func_325(&Local_1198, 4, Local_1070[4 /*10*/], 0, 0, 1);
					uLocal_1647 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1647, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[3 /*10*/], uLocal_1647, "misstrevor3", "bike_chat_b_loop_1", 1000f, -4f, 29, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[4 /*10*/], uLocal_1647, "misstrevor3", "bike_chat_b_loop_2", 1000f, -4f, 29, 0, 1000f, 0);
					if (func_333(iLocal_1181[2]))
					{
						func_323(iLocal_1181[2], uLocal_1647, "bike_chat_b_loop_bike_a", "misstrevor3", 1000f, -4f);
					}
					if (func_333(iLocal_1181[3]))
					{
						func_323(iLocal_1181[3], uLocal_1647, "bike_chat_b_loop_bike_b", "misstrevor3", 1000f, -4f);
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					iLocal_1181[4] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 88.463f, 3698.488f, 38.6126f, 162.4861f, 1, 1);
					iLocal_1181[5] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 91.437f, 3697.385f, 38.7356f, 161.4624f, 1, 1);
					func_326(8, joaat("g_m_y_lost_01"), joaat("weapon_assaultrifle"), 92.7466f, 3715.842f, 38.6797f, 32.199f);
					func_326(9, joaat("g_m_y_lost_02"), joaat("weapon_pumpshotgun"), 93.6988f, 3717.648f, 38.6765f, 151.3154f);
					func_325(&Local_1198, 8, Local_1070[8 /*10*/], 0, 0, 1);
					func_325(&Local_1198, 9, Local_1070[9 /*10*/], 0, 0, 1);
					Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(88.368f, 3701.228f, 38.535f, 0f, 0f, -7.92f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_402[iParam0 /*10*/].f_7, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[8 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3", "bike_chat_a_1", 1000f, -4f, 9, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[9 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3", "bike_chat_a_2", 1000f, -4f, 9, 0, 1000f, 0);
					if (func_333(iLocal_1181[4]))
					{
						func_323(iLocal_1181[4], Local_402[iParam0 /*10*/].f_7, "bike_chat_a_bike_b", "misstrevor3", 1000f, -1000f);
					}
					if (func_333(iLocal_1181[5]))
					{
						func_323(iLocal_1181[5], Local_402[iParam0 /*10*/].f_7, "bike_chat_a_bike_a", "misstrevor3", 1000f, -1000f);
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 21:
					MISC::CLEAR_AREA(65.51f, 3744.23f, 38.83f, 3f, 1, 0, 0, 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.83f, 3744.23f, 65.51f) - Vector(2.5625f, 2f, 2f), Vector(38.83f, 3744.23f, 65.51f) + Vector(2.5625f, 2f, 2f), 0, 1);
					func_326(5, joaat("g_m_y_lost_01"), joaat("weapon_pumpshotgun"), 77.6549f, 3717.175f, 38.7655f, 312.9244f);
					func_326(6, joaat("g_m_y_lost_01"), joaat("weapon_assaultrifle"), 79.7052f, 3719.215f, 38.7656f, 314.3887f);
					func_326(7, joaat("g_m_y_lost_02"), joaat("weapon_unarmed"), 77.3499f, 3719.566f, 38.7655f, 254.4565f);
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1070[7 /*10*/], 1);
					func_325(&Local_1198, 5, Local_1070[5 /*10*/], 0, 0, 0);
					func_325(&Local_1198, 6, Local_1070[6 /*10*/], 0, 0, 0);
					Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[7 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_startidle_dockworker", 1000f, -4f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[5 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_startidle_guard1", 1000f, -4f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[6 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_startidle_guard2", 1000f, -4f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_402[iParam0 /*10*/].f_7, 1);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_326(0, joaat("g_m_y_lost_02"), joaat("weapon_assaultrifle"), 101.0579f, 3745.692f, 38.746f, 130.9023f);
					func_325(&Local_1198, 0, Local_1070[0 /*10*/], 1, 0, 0);
					iLocal_1192[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_coffin_01"), 99.41f, 3744.35f, 40f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_1192[0], 0f, 0f, -25.21014f, 2, 1);
					iLocal_1192[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_coffin_01"), 98.8646f, 3747.87f, 39.2f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_1192[1], -0.65f, 0f, -0.75f, 2, 1);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_1192[1], 1);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_1192[1], 0f, 0f, 0.1f);
					iLocal_1192[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_coffin_01"), 99.5847f, 3749.75f, 39.2f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_1192[2], 3.4f, -0.1f, -104.4f, 2, 1);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_1192[2], 1);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_1192[2], 0f, 0f, 0.1f);
					iLocal_1192[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_beer_bot_01"), 99.5847f, 3749.75f, 41f, 1, 1, 0);
					uLocal_1646 = PED::CREATE_SYNCHRONIZED_SCENE(98.488f, 3742.822f, 39.538f, 0f, 0f, 153.25f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[0 /*10*/], uLocal_1646, "misstrevor3", "biker_mourns", 1000f, -4f, 17, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1646, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1192[3], Local_1070[0 /*10*/], PED::GET_PED_BONE_INDEX(Local_1070[0 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					iLocal_1181[1] = VEHICLE::CREATE_VEHICLE(joaat("dloader"), 98.6982f, 3742.728f, 38.7299f, 155.2052f, 1, 1);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1181[1], 2, true);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1181[1], 3, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1181[1]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1192[0], iLocal_1181[1], 0, 0f, -1.793f, 0.703f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1181[1]);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1192[0]);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_402[iParam0 /*10*/].f_8 = func_324(Local_1070[0 /*10*/], &Local_1198);
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1646))
							{
								if (Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
								{
									uLocal_1646 = PED::CREATE_SYNCHRONIZED_SCENE(98.488f, 3742.822f, 39.538f, 0f, 0f, 153.25f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[0 /*10*/], uLocal_1646, "misstrevor3", "biker_mourns", 4f, -4f, 17, 0, 4f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1646, 1);
									Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 = 3;
								}
							}
							break;
					}
					break;
				
				case 24:
					break;
				
				case 25:
					GlobalFunc_553(516);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 26:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0))
						{
							iVar8 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[10 /*10*/], 0);
							if (func_333(iVar8))
							{
								if (FIRE::IS_ENTITY_ON_FIRE(iVar8))
								{
									func_120();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 63.0295f, 3603.956f, 38.821f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_COWER(0, -1);
									func_119(&(Local_1070[10 /*10*/]), 0);
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						else if (GlobalFunc_713(Local_1070[10 /*10*/], 68.21001f, 3701.656f, 38.75489f, 1) < 79.5f)
						{
							func_120();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 63.0295f, 3603.956f, 38.821f, 2f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_COWER(0, -1);
							func_119(&(Local_1070[10 /*10*/]), 0);
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
					}
					break;
				
				case 27:
					GlobalFunc_553(518);
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
							{
								Local_402[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"));
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
							{
								Local_402[iParam0 /*10*/].f_8 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"));
								if (Local_402[iParam0 /*10*/].f_8 < Local_402[iParam0 /*10*/].f_7)
								{
									Local_402[iParam0 /*10*/].f_7 = Local_402[iParam0 /*10*/].f_8;
									GlobalFunc_565(525, 1, 0);
								}
							}
							else
							{
								GlobalFunc_565(525, 1, 0);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 29:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[10 /*10*/], 150319005) == 7)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) < 20f)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_1070[10 /*10*/], PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
							}
						}
					}
					break;
				
				case 30:
					PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
					break;
				
				case 31:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								AUDIO::START_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (func_320(53))
							{
								AUDIO::START_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_SHOOTOUT");
								AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
								Local_402[iParam0 /*10*/].f_6++;
							}
							if (Local_402[iParam0 /*10*/].f_6 == 1)
							{
								if (func_320(67))
								{
									AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
						
						case 2:
							if (func_320(67))
							{
								AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_SHOOTOUT");
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 32:
					if (AUDIO::LOAD_STREAM("TREVOR3_BLOW_UP_TRAILERS_MASTER", 0))
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 33:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_402[iParam0 /*10*/].f_7 = 0;
							while (Local_402[iParam0 /*10*/].f_7 < Local_1070)
							{
								if (!func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]))
								{
									Local_402[iParam0 /*10*/].f_9 = PED::GET_COMBAT_FLOAT(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 2);
									PED::SET_COMBAT_FLOAT(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 2, 1f);
								}
								Local_402[iParam0 /*10*/].f_7++;
							}
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								Local_402[iParam0 /*10*/].f_7 = 0;
								while (Local_402[iParam0 /*10*/].f_7 < Local_1070)
								{
									if (!func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]))
									{
										PED::SET_COMBAT_FLOAT(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 2, Local_402[iParam0 /*10*/].f_9);
									}
									Local_402[iParam0 /*10*/].f_7++;
								}
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 34:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::PREFETCH_SRL("TREV3_TRAILER_ARRIVAL_CUTSCENE");
							STREAMING::_0xBEB2D9A1D9A8F55A(8, 8, 8, 8);
							STREAMING::_0xF8155A7F03DDFC8E(1);
							TASK::REQUEST_WAYPOINT_RECORDING("trev3_trL");
							TASK::REQUEST_WAYPOINT_RECORDING("trev3_trR");
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							STREAMING::BEGIN_SRL();
							Local_402[iParam0 /*10*/].f_3 = 1;
							break;
					}
					break;
				
				case 35:
					if (func_319(7))
					{
						Local_402[iParam0 /*10*/].f_2 = 0;
						STREAMING::END_SRL();
						func_329(20, 34, 0);
						Local_402[20 /*10*/].f_3 = 0;
						Local_402[iParam0 /*10*/].f_7 = 0;
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0))
						{
							iVar11 = ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]);
							if ((VEHICLE::IS_THIS_MODEL_A_HELI(iVar11) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar11)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar11))
							{
								iVar9 = 1;
							}
							else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
							{
								iVar9 = 1;
							}
						}
						else
						{
							iVar9 = 1;
						}
						if (iVar9 == 1)
						{
							if (Local_402[iParam0 /*10*/].f_7 == 0)
							{
								Local_402[iParam0 /*10*/].f_7 = 1;
								fVar12 = GlobalFunc_1695(59.12711f, 3707.536f, 38.75499f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
								if (fVar12 < 97f || fVar12 > 330f)
								{
									iLocal_1039 = 2;
								}
								else if (fVar12 > 97f && fVar12 < 217f)
								{
									iLocal_1039 = 0;
								}
								else
								{
									iLocal_1039 = 1;
								}
								switch (iLocal_1039)
								{
									case 0:
										iVar10 = 12000;
										break;
									
									case 1:
										iVar10 = 19000;
										break;
									
									case 2:
										iVar10 = 24000;
										break;
									}
							}
						}
						else
						{
							Local_402[iParam0 /*10*/].f_7 = 0;
							iLocal_1039 = -1;
							if (GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 59.2455f, 3609.421f, 40.7427f, 1) > 180f)
							{
								iVar10 = 6000;
							}
							else
							{
								iVar10 = 0;
							}
						}
						SYSTEM::SETTIMERA(iVar10);
						STREAMING::SET_SRL_TIME((IntToFloat(iVar10) * 1f));
					}
					break;
				
				case 36:
					fVar13 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 59.2455f, 3609.421f, 40.7427f, 1);
					if (fVar13 < 1100f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iVar16 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar16, 0))
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar16)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar16)))
								{
									fVar14 = (1100f - fVar13);
									if (fVar14 < 0f)
									{
										fVar14 = 0f;
									}
									fVar14 = (fVar14 / 1100f);
									fVar14 = (fVar14 * 10000f);
									fVar15 = ENTITY::GET_ENTITY_SPEED(iVar16);
									fVar14 = (fVar14 * (fVar15 / 50f));
									if (fVar15 > 50f)
									{
										ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar16, 1, 0f, -fVar14, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 38:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1500;
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 37:
					func_290(&(Local_402[iParam0 /*10*/]));
					break;
				
				case 39:
					if (func_83(0, 37))
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_402[iParam0 /*10*/].f_6)
						{
							case 1:
								Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4000;
								Local_402[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
								{
									MISC::FORCE_LIGHTNING_FLASH();
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
								break;
							}
					}
					break;
				
				case 40:
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 20, 0, 1);
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 20, 0, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), joaat("component_at_pi_supp_02"));
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					MISC::ENABLE_DISPATCH_SERVICE(3, 0);
					MISC::ENABLE_DISPATCH_SERVICE(5, 0);
					MISC::ENABLE_DISPATCH_SERVICE(1, 0);
					MISC::ENABLE_DISPATCH_SERVICE(7, 0);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1181[0], 4);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_1181[0], "OFF");
					}
					if (!func_3(Local_1070[10 /*10*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[10 /*10*/], 1);
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 41:
					Local_402[iParam0 /*10*/].f_7 = 0;
					while (Local_402[iParam0 /*10*/].f_7 < Local_1070)
					{
						if (Local_402[iParam0 /*10*/].f_7 != 10 && Local_402[iParam0 /*10*/].f_7 != 7)
						{
							if (!func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]))
							{
								func_120();
								if (GlobalFunc_156(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], PLAYER::PLAYER_PED_ID(), 1) < 20f)
								{
									uVar17 = GlobalFunc_5821(PLAYER::PLAYER_PED_ID(), Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 1);
									Var18 = { ENTITY::GET_ENTITY_COORDS(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 1) };
									Var18.x = (Var18.x + (SYSTEM::SIN(uVar17) * 20f));
									Var18.f_1 = (Var18.f_1 + (SYSTEM::COS(fVar17) * 20f));
									if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var18, 0, &Var18, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var18, 2f, 20000, 1048576000, 0, 1193033728);
									}
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								func_119(&(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]), 0);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], ENTITY::GET_ENTITY_COORDS(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 1), 25f, 0, 0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], iLocal_1640);
								PED::SET_PED_SEEING_RANGE(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 60f);
							}
						}
						else if (Local_402[iParam0 /*10*/].f_7 == 7)
						{
							if (!func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 0);
							}
						}
						Local_402[iParam0 /*10*/].f_7++;
					}
					if (func_333(iLocal_1181[2]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1181[2]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1181[2]);
						}
					}
					if (func_333(iLocal_1181[3]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1181[3]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1181[3]);
						}
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					Local_402[iParam0 /*10*/].f_7 = func_289(57);
					if (Local_402[iParam0 /*10*/].f_7 >= 0)
					{
						if (!func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]))
						{
							if (!GlobalFunc_105(Local_1982))
							{
								func_120();
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_AIM_GUN_AT_COORD(0, Local_1982, 2000, 0, 0);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								fVar21 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1982, 1);
								Var22 = { ENTITY::GET_ENTITY_COORDS(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 1) };
								Var22.x = (Var22.x + (SYSTEM::SIN(fVar21) * 20f));
								Var22.f_1 = (Var22.f_1 + (SYSTEM::COS(fVar21) * 20f));
								if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var22, 0, &Var22, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var22, 2f, 20000, 1048576000, 0, 1193033728);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								func_119(&(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]), 0);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
						}
						else
						{
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
					}
					else
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 43:
					iLocal_1980 = 0;
					while (iLocal_1980 < Local_1070)
					{
						if (iLocal_1980 != 10 && iLocal_1980 != 7)
						{
							if ((iLocal_1034 == 4 && func_320(53)) || iLocal_1034 == 7)
							{
								GlobalFunc_661(Local_1070[iLocal_1980 /*10*/], &(Local_1070[iLocal_1980 /*10*/].f_1), -1, 0, 0, 0, -1082130432, 0);
							}
							else
							{
								GlobalFunc_661(Local_1070[iLocal_1980 /*10*/], &(Local_1070[iLocal_1980 /*10*/].f_1), -1, 0, 0, 1, -1082130432, 0);
							}
							if (!Local_1070[iLocal_1980 /*10*/].f_9)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iLocal_1980 /*10*/]))
								{
									if (func_3(Local_1070[iLocal_1980 /*10*/]))
									{
										Local_1070[iLocal_1980 /*10*/].f_9 = 1;
										if (PED::WAS_PED_KILLED_BY_STEALTH(Local_1070[iLocal_1980 /*10*/]))
										{
											GlobalFunc_565(519, 1, 0);
										}
										GlobalFunc_565(520, 1, 0);
									}
								}
							}
						}
						iLocal_1980++;
					}
					break;
				
				case 46:
					if (!func_3(Local_1070[7 /*10*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[7 /*10*/], iLocal_1642);
						if (func_320(76))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_1070[7 /*10*/], 0);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Local_1070[7 /*10*/], PLAYER::PLAYER_PED_ID(), 1000f, 9999, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_1070[7 /*10*/], 1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[7 /*10*/]));
						}
					}
					if (!func_3(Local_1070[5 /*10*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_1070[5 /*10*/], 0))
						{
							func_120();
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_119(&(Local_1070[5 /*10*/]), 0);
						}
					}
					if (!func_3(Local_1070[6 /*10*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_1070[6 /*10*/], 0))
						{
							func_120();
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_119(&(Local_1070[6 /*10*/]), 0);
						}
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (func_333(iLocal_1181[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[2], -4f, 1);
					}
					if (func_333(iLocal_1181[3]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[3], -4f, 1);
					}
					if (func_333(iLocal_1181[4]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[4], -4f, 1);
					}
					if (func_333(iLocal_1181[5]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[5], -4f, 1);
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 45:
					if (!func_3(Local_1070[1 /*10*/]))
					{
						switch (Local_402[iParam0 /*10*/].f_6)
						{
							case 0:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[1 /*10*/], 1785177548) == 1)
								{
									Local_402[iParam0 /*10*/].f_8 = func_324(Local_1070[1 /*10*/], &Local_1198);
									Local_402[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
								{
									Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(58.162f, 3638.364f, 39.438f, 0f, 0f, -157.25f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[1 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3", "brokendown_longlook", 4f, -4f, 1, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_402[iParam0 /*10*/].f_7, 1);
									Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 = 3;
								}
								break;
							}
					}
					break;
				
				case 47:
					Local_402[iParam0 /*10*/].f_7 = -1;
					fVar25 = 5000f;
					if (!func_320(59))
					{
						fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 58.66866f, 3634.281f, 35.98482f, 1);
						if (fVar26 < 13.5625f)
						{
							if (fVar26 < fVar25)
							{
								fVar25 = fVar26;
								Local_402[iParam0 /*10*/].f_7 = 0;
							}
						}
					}
					if (!func_320(60))
					{
						fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 67.4124f, 3697.422f, 38.76501f, 1);
						if (fVar26 < 27.25f)
						{
							if (fVar26 < fVar25)
							{
								fVar25 = fVar26;
								Local_402[iParam0 /*10*/].f_7 = 1;
							}
						}
					}
					if (!func_320(61))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 93.8932f, 3706.537f, 38.69593f, 69.3175f, 3670.831f, 40.40055f, 20.125f, 0, 1, 0))
						{
							fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 51.40794f, 3696.901f, 38.75497f, 1);
							if (fVar26 < 46.0625f)
							{
								if (fVar26 < fVar25)
								{
									fVar25 = fVar26;
									Local_402[iParam0 /*10*/].f_7 = 2;
								}
							}
						}
					}
					if (!func_320(62))
					{
						fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 93.4057f, 3692.2f, 34.61406f, 1);
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 51.15165f, 3681.861f, 34.78441f, 87.65079f, 3735.441f, 44.13717f, 20.8125f, 0, 1, 0))
						{
							if (fVar26 < 25f)
							{
								if (fVar26 < fVar25)
								{
									fVar25 = fVar26;
									Local_402[iParam0 /*10*/].f_7 = 3;
								}
							}
						}
					}
					if (!func_320(63))
					{
						fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 67.602f, 3743.562f, 38.932f, 1);
						if (fVar26 < 50f)
						{
							if (fVar26 < fVar25)
							{
								fVar25 = fVar26;
								Local_402[iParam0 /*10*/].f_7 = 4;
							}
						}
					}
					if (!func_320(64))
					{
						fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100.7147f, 3745.973f, 38.74739f, 1);
						if (fVar26 < 31.8f)
						{
							if (fVar26 < fVar25)
							{
								fVar25 = fVar26;
								Local_402[iParam0 /*10*/].f_7 = 5;
							}
						}
					}
					break;
				
				case 50:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*10*/]))
					{
						switch (Local_402[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_402[iParam0 /*10*/].f_8 = func_324(Local_1070[2 /*10*/], &Local_1198);
								if (Local_402[iParam0 /*10*/].f_8 != -1)
								{
									Local_402[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 != 3)
								{
									Local_402[iParam0 /*10*/].f_6 = 3;
									Local_402[iParam0 /*10*/].f_9 = 0.03f;
								}
								else if (func_286(5, 47) == 1)
								{
									uLocal_1645 = PED::CREATE_SYNCHRONIZED_SCENE(67.817f, 3694.449f, 38.766f, 0f, 0f, -35.19f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[2 /*10*/], uLocal_1645, "misstrevor3", "horny_biker", 4f, -4f, 1, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1645, 1);
									Local_402[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 3:
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1645))
								{
									Local_402[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							default:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1645))
								{
									Local_402[iParam0 /*10*/].f_9 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645);
								}
								if (Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 == 4 || Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
								{
									if (Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
									{
										Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 = 3;
										if (Local_402[iParam0 /*10*/].f_9 > 0.8f || Local_402[iParam0 /*10*/].f_9 < 0.04f)
										{
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 65.95f, 3694.187f, 38.7549f, 1f, 20000, 0.2f, 4096, 1193033728);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_119(&(Local_1070[2 /*10*/]), 0);
											Local_402[iParam0 /*10*/].f_6 = 4;
										}
										else if (Local_402[iParam0 /*10*/].f_9 >= 0.04f && Local_402[iParam0 /*10*/].f_9 < 0.188f)
										{
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 65.3946f, 3691.219f, 38.7496f, 1f, 20000, 0.2f, 4096, 1193033728);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_119(&(Local_1070[2 /*10*/]), 0);
											Local_402[iParam0 /*10*/].f_6 = 5;
										}
										else if (Local_402[iParam0 /*10*/].f_9 > 0.188f && Local_402[iParam0 /*10*/].f_9 < 0.475f)
										{
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 69.3267f, 3698.343f, 38.7549f, 1f, 20000, 0.2f, 4096, 1193033728);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_119(&(Local_1070[2 /*10*/]), 0);
											Local_402[iParam0 /*10*/].f_6 = 6;
										}
										else
										{
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 71.0567f, 3701.348f, 38.7549f, 1f, 20000, 0.2f, 4096, 1193033728);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_119(&(Local_1070[2 /*10*/]), 0);
											Local_402[iParam0 /*10*/].f_6 = 7;
										}
									}
								}
								else if (Local_1198[Local_402[iParam0 /*10*/].f_8 /*24*/].f_3 == 3)
								{
									if (Local_402[iParam0 /*10*/].f_6 >= 4 && Local_402[iParam0 /*10*/].f_6 <= 7)
									{
										if (!func_3(Local_1070[2 /*10*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*10*/], 242628503) == 7)
											{
												uLocal_1645 = PED::CREATE_SYNCHRONIZED_SCENE(67.817f, 3694.449f, 38.766f, 0f, 0f, -35.19f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[2 /*10*/], uLocal_1645, "misstrevor3", "horny_biker", 0.5f, -4f, 1, 0, 4f, 0);
												switch (Local_402[iParam0 /*10*/].f_6)
												{
													case 4:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645, 0.04f);
														break;
													
													case 5:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645, 0.188f);
														break;
													
													case 6:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645, 0.475f);
														break;
													
													case 7:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645, 0.8f);
														break;
												}
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1645, 1);
												Local_402[iParam0 /*10*/].f_6 = 3;
											}
										}
									}
								}
								break;
							}
					}
					break;
				
				case 63:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (Local_1198[8 /*24*/].f_3 == 4 || Local_1198[9 /*24*/].f_3 == 4)
							{
								Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(88.368f, 3701.228f, 38.535f, 0f, 0f, -7.92f, 2);
								Local_402[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(88.368f, 3701.228f, 38.535f, 0f, 0f, -7.92f, 2);
								if (!PED::IS_PED_INJURED(Local_1070[8 /*10*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[8 /*10*/], 1);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[8 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3", "biker_exit_1", 4f, -4f, 5, 0, 1000f, 0);
								}
								if (!PED::IS_PED_INJURED(Local_1070[9 /*10*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[9 /*10*/], 1);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[9 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3", "biker_exit_2", 4f, -4f, 5, 0, 1000f, 0);
								}
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_8))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_8) > 0.378f)
								{
									if (!PED::IS_PED_INJURED(Local_1070[9 /*10*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_1070[9 /*10*/]);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[9 /*10*/], 0);
										PED::SET_PED_HELMET(Local_1070[9 /*10*/], 0);
										Local_1198[9 /*24*/].f_21 = 0;
									}
									Local_402[iParam0 /*10*/].f_6++;
								}
							}
							else
							{
								if (func_333(iLocal_1181[4]))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[4], -4f, 1);
								}
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_7))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_7) > 0.56f)
								{
									if (!PED::IS_PED_INJURED(Local_1070[8 /*10*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_1070[8 /*10*/]);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[8 /*10*/], 0);
										PED::SET_PED_HELMET(Local_1070[8 /*10*/], 0);
										Local_1198[8 /*24*/].f_21 = 0;
									}
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
							else
							{
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 64:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(30.9745f, 3665.213f, 40.9901f, 5f, 0))
							{
								ENTITY::CREATE_FORCED_OBJECT(32.3311f, 3667.66f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"), 1);
								ENTITY::CREATE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"), 1);
								Local_402[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 62:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (Local_1198[3 /*24*/].f_3 == 4 || Local_1198[4 /*24*/].f_3 == 4)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1647))
								{
									if (!PED::IS_PED_INJURED(Local_1070[3 /*10*/]))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1647) < 0.23f || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1647) > 0.96f)
										{
											Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[3 /*10*/], 1);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[3 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3", "bike_chat_b_loop_1", 8f, -8f, 5, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_7, 0.23f);
											if (func_333(iLocal_1181[2]))
											{
												func_323(iLocal_1181[2], Local_402[iParam0 /*10*/].f_7, "bike_chat_b_loop_bike_a", "misstrevor3", 8f, -4f);
											}
										}
										else
										{
											TASK::CLEAR_PED_TASKS(Local_1070[3 /*10*/]);
											Local_1198[3 /*24*/].f_21 = 0;
										}
									}
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1648))
									{
										PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1648, 2f);
									}
									if (!PED::IS_PED_INJURED(Local_1070[4 /*10*/]))
									{
										Local_402[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[4 /*10*/], 1);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[4 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3", "bike_chat_b_outro_2", 8f, -8f, 5, 0, 1000f, 0);
										if (func_333(iLocal_1181[3]))
										{
											func_323(iLocal_1181[3], Local_402[iParam0 /*10*/].f_8, "bike_chat_b_outro_bike_b", "misstrevor3", 8f, -4f);
										}
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_8, 0.373f);
										PED::SET_SYNCHRONIZED_SCENE_RATE(Local_402[iParam0 /*10*/].f_8, 2f);
									}
									Local_402[iParam0 /*10*/].f_6++;
								}
								else
								{
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
						
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_7) > 0.28f)
							{
								if (!PED::IS_PED_INJURED(Local_1070[3 /*10*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_1070[3 /*10*/]);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[3 /*10*/], 0);
									PED::SET_PED_HELMET(Local_1070[3 /*10*/], 0);
									Local_1198[3 /*24*/].f_21 = 0;
								}
								if (func_333(iLocal_1181[2]))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[2], -4f, 1);
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1648) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1648) > 0.41f)
							{
								if (!PED::IS_PED_INJURED(Local_1070[3 /*10*/]))
								{
									if (ENTITY::GET_ENTITY_HEALTH(Local_1070[3 /*10*/]) >= 200)
									{
										TASK::CLEAR_PED_TASKS(Local_1070[3 /*10*/]);
										if (func_333(iLocal_1181[2]))
										{
											PED::SET_PED_INTO_VEHICLE(Local_1070[3 /*10*/], iLocal_1181[2], -1);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[3 /*10*/], 0);
										PED::SET_PED_HELMET(Local_1070[3 /*10*/], 0);
									}
								}
								if (func_333(iLocal_1181[2]))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[2], -4f, 1);
								}
								Local_1198[3 /*24*/].f_21 = 0;
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_8))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_8) > 0.731f)
								{
									if (!PED::IS_PED_INJURED(Local_1070[4 /*10*/]))
									{
										if (ENTITY::GET_ENTITY_HEALTH(Local_1070[4 /*10*/]) >= 200)
										{
											TASK::CLEAR_PED_TASKS(Local_1070[4 /*10*/]);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[4 /*10*/], 0);
											PED::SET_PED_HELMET(Local_1070[4 /*10*/], 0);
											Local_1198[4 /*24*/].f_21 = 0;
											if (func_333(iLocal_1181[3]))
											{
												PED::SET_PED_INTO_VEHICLE(Local_1070[4 /*10*/], iLocal_1181[3], -1);
											}
										}
									}
									if (func_333(iLocal_1181[3]))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[3], -4f, 1);
									}
								}
							}
							if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_7) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_8)) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1647))
							{
								Local_1198[4 /*24*/].f_21 = 0;
								Local_1198[3 /*24*/].f_21 = 0;
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 49:
					if (func_285(29, 62) > 0)
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					else if (((Local_402[iParam0 /*10*/].f_6 < 4 && !func_3(Local_1070[3 /*10*/])) && !func_3(Local_1070[4 /*10*/])) || (Local_402[iParam0 /*10*/].f_6 > 3 && !func_3(Local_1070[4 /*10*/])))
					{
						switch (Local_402[iParam0 /*10*/].f_6)
						{
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1647))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1647) < 0.23f || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1647) > 0.98f)
									{
										uLocal_1648 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
										uLocal_1649 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[3 /*10*/], uLocal_1648, "misstrevor3", "bike_chat_b_outro_1", 4f, -4f, 13, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[4 /*10*/], uLocal_1649, "misstrevor3", "bike_chat_b_outro_2", 4f, -4f, 13, 0, 1000f, 0);
										if (func_333(iLocal_1181[2]))
										{
											func_323(iLocal_1181[2], uLocal_1648, "bike_chat_b_outro_bike_a", "misstrevor3", 1000f, -4f);
										}
										if (func_333(iLocal_1181[3]))
										{
											func_323(iLocal_1181[3], uLocal_1649, "bike_chat_b_outro_bike_b", "misstrevor3", 1000f, -4f);
										}
										PED::SET_PED_HELMET(Local_1070[3 /*10*/], 0);
										PED::SET_PED_HELMET(Local_1070[4 /*10*/], 0);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1648, 0f);
										VEHICLE::REQUEST_VEHICLE_RECORDING(2, "trev3");
										VEHICLE::REQUEST_VEHICLE_RECORDING(3, "trev3");
										Local_402[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (func_333(iLocal_1181[2]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1648))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1648) >= 0.9f)
										{
											if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "trev3"))
											{
												if (!func_3(Local_1070[3 /*10*/]))
												{
													ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[2], -4f, 1);
													TASK::CLEAR_PED_TASKS(Local_1070[3 /*10*/]);
													PED::SET_PED_INTO_VEHICLE(Local_1070[3 /*10*/], iLocal_1181[2], -1);
													PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1070[3 /*10*/], 1);
													ENTITY::FREEZE_ENTITY_POSITION(iLocal_1181[2], 0);
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1181[2], 2, "trev3", 1);
													Local_402[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
								}
								break;
							
							case 2:
								if (func_333(iLocal_1181[3]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1649))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1649) >= 1f)
										{
											if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "trev3"))
											{
												if (!func_3(Local_1070[4 /*10*/]))
												{
													ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1181[3], -4f, 1);
													TASK::CLEAR_PED_TASKS(Local_1070[4 /*10*/]);
													PED::SET_PED_INTO_VEHICLE(Local_1070[4 /*10*/], iLocal_1181[3], -1);
													PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1070[4 /*10*/], 1);
													ENTITY::FREEZE_ENTITY_POSITION(iLocal_1181[3], 0);
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1181[3], 3, "trev3", 1);
													Local_402[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
								}
								break;
							
							case 3:
								if (!func_3(Local_1070[3 /*10*/]))
								{
									if (func_333(iLocal_1181[2]))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1181[2]))
										{
											func_120();
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_1181[2], 185.8774f, 3393.596f, 37.0011f, 18f, 0, joaat("hexer"), 786603, 10f, 10f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_1181[2], 15f, 786599);
											func_119(&(Local_1070[3 /*10*/]), 0);
											PED::SET_PED_KEEP_TASK(Local_1070[3 /*10*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[3 /*10*/]));
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[2]));
											Local_402[iParam0 /*10*/].f_6++;
										}
									}
								}
								else if (func_333(iLocal_1181[2]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1181[2]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1181[2]);
										Local_402[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (!func_3(Local_1070[4 /*10*/]))
								{
									if (func_333(iLocal_1181[3]))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1181[3]))
										{
											func_120();
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_1181[3], 185.8774f, 3393.596f, 37.0011f, 18f, 0, joaat("hexer"), 786603, 10f, 10f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_1181[3], 15f, 786599);
											func_119(&(Local_1070[4 /*10*/]), 0);
											PED::SET_PED_KEEP_TASK(Local_1070[4 /*10*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[4 /*10*/]));
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[3]));
											Local_402[iParam0 /*10*/].f_6++;
										}
									}
								}
								else if (func_333(iLocal_1181[3]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1181[3]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1181[3]);
										Local_402[iParam0 /*10*/].f_6++;
									}
								}
								break;
							}
					}
					break;
				
				case 48:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!func_3(Local_1070[5 /*10*/]) && !func_3(Local_1070[6 /*10*/])) && !func_3(Local_1070[7 /*10*/]))
							{
								Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[7 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_mainaction_dockworker", 4f, -4f, 1, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[5 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_mainaction_guard1", 4f, -4f, 1, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[6 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_mainaction_guard2", 4f, -4f, 1, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_402[iParam0 /*10*/].f_7, 0);
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_7))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_7) > 0.877f)
								{
									func_340(76, 1);
									func_284(&Local_1198, 7);
								}
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_7) > 0.99f)
								{
									if ((!func_3(Local_1070[5 /*10*/]) && !func_3(Local_1070[6 /*10*/])) && !func_3(Local_1070[7 /*10*/]))
									{
										Local_402[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[7 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3_beatup", "guard_beatup_kickidle_dockworker", 4f, -4f, 1, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[5 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3_beatup", "guard_beatup_kickidle_guard1", 4f, -4f, 1, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[6 /*10*/], Local_402[iParam0 /*10*/].f_8, "misstrevor3_beatup", "guard_beatup_kickidle_guard2", 4f, -4f, 1, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_402[iParam0 /*10*/].f_8, 1);
										Local_402[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 100;
										Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 15000;
									}
								}
							}
							else if ((!func_3(Local_1070[5 /*10*/]) && !func_3(Local_1070[6 /*10*/])) && !func_3(Local_1070[7 /*10*/]))
							{
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
						
						case 2:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_7))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_402[iParam0 /*10*/].f_7) > 0.97f)
								{
									if ((!func_3(Local_1070[5 /*10*/]) && !func_3(Local_1070[6 /*10*/])) && !func_3(Local_1070[7 /*10*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_1070[7 /*10*/], 0);
										if (!func_3(Local_1070[5 /*10*/]))
										{
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 71.1857f, 3744.877f, 38.8392f, 1f, 20000, 0.25f, 0, 210f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 1);
											func_119(&(Local_1070[5 /*10*/]), 0);
										}
										if (!func_3(Local_1070[6 /*10*/]))
										{
											func_120();
											TASK::TASK_LOOK_AT_ENTITY(0, Local_1070[5 /*10*/], 2000, 0, 2);
											TASK::TASK_PAUSE(0, 2000);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 69.5081f, 3744.395f, 38.8998f, 1f, 20000, 0.25f, 0, 243f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, 1);
											func_119(&(Local_1070[6 /*10*/]), 0);
										}
										Local_402[iParam0 /*10*/].f_3 = 1;
									}
								}
							}
							break;
						
						default:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_402[iParam0 /*10*/].f_8))
							{
								if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_6)
								{
									if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
									{
										if ((!func_3(Local_1070[5 /*10*/]) && !func_3(Local_1070[6 /*10*/])) && !func_3(Local_1070[7 /*10*/]))
										{
											Local_402[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[7 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_exit_dockworker", 4f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[5 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_exit_guard1", 4f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[6 /*10*/], Local_402[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_exit_guard2", 4f, -4f, 1, 0, 1000f, 0);
										}
										Local_402[iParam0 /*10*/].f_6 = 2;
									}
									else
									{
										HUD::TRIGGER_SONAR_BLIP(67.602f, 3743.562f, 38.932f, 30f, 6);
										GlobalFunc_661(Local_1070[5 /*10*/], &(Local_1070[5 /*10*/].f_1), -1, 0, 1, 0, -1082130432, 0);
										GlobalFunc_661(Local_1070[6 /*10*/], &(Local_1070[5 /*10*/].f_1), -1, 0, 1, 0, -1082130432, 0);
										Local_402[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 2000;
									}
								}
							}
							else
							{
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 51:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[0 /*10*/]))
					{
						if (func_3(Local_1070[0 /*10*/]) || func_320(53))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_1192[3]))
							{
								ENTITY::DETACH_ENTITY(iLocal_1192[3], 1, 1);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[0 /*10*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[0]))
								{
									PHYSICS::ACTIVATE_PHYSICS(iLocal_1192[0]);
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
					}
					break;
				
				case 52:
					if (func_333(iLocal_1181[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1192[0]))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_1181[1]) > 1f)
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1192[0]))
								{
									ENTITY::DETACH_ENTITY(iLocal_1192[0], 1, 0);
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
					}
					break;
				
				case 53:
					iLocal_1981 = 0;
					while (iLocal_1981 < Local_1651)
					{
						if (Local_1651[iLocal_1981 /*17*/] == 2)
						{
							if ((((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(4, Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1981 /*17*/].f_14) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1981 /*17*/].f_14)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(16, Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1981 /*17*/].f_14)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1981 /*17*/].f_14)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1981 /*17*/].f_14))
							{
								Local_1651[iLocal_1981 /*17*/] = 3;
								bLocal_1650 = true;
								if (HUD::DOES_BLIP_EXIST(Local_1651[iLocal_1981 /*17*/].f_16))
								{
									HUD::REMOVE_BLIP(&(Local_1651[iLocal_1981 /*17*/].f_16));
								}
							}
						}
						iLocal_1981++;
					}
					iLocal_1981 = 0;
					while (iLocal_1981 < Local_1651)
					{
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
						{
							if (((Local_1651[iLocal_1981 /*17*/] == 3 || Local_1651[iLocal_1981 /*17*/] == 5) || Local_1651[iLocal_1981 /*17*/] == 6) || ((Local_1651[iLocal_1981 /*17*/] == 7 && OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Local_1651[iLocal_1981 /*17*/].f_1) < 0.05f) && OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Local_1651[iLocal_1981 /*17*/].f_1) != 0f))
							{
								if (MISC::GET_GAME_TIMER() > Local_1651[iLocal_1981 /*17*/].f_2)
								{
									func_281(iLocal_1981);
									Local_1651[iLocal_1981 /*17*/].f_2 = MISC::GET_GAME_TIMER() + 200;
								}
							}
						}
						switch (Local_1651[iLocal_1981 /*17*/])
						{
							case 0:
								if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									Local_1651[iLocal_1981 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_1651[iLocal_1981 /*17*/].f_3);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 3)
								{
									if (iLocal_1034 > 3)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 4);
										GlobalFunc_7621(Local_1651[iLocal_1981 /*17*/].f_6, 0, 0, 1, 0);
										Local_1651[iLocal_1981 /*17*/] = 2;
									}
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 5)
								{
									Local_1651[iLocal_1981 /*17*/] = 2;
								}
								break;
							
							case 1:
								if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									Local_1651[iLocal_1981 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_1651[iLocal_1981 /*17*/].f_3);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) != 3 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) != 2)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 2);
									GlobalFunc_7621(Local_1651[iLocal_1981 /*17*/].f_6, 0, 0, 1, 0);
									Local_1651[iLocal_1981 /*17*/].f_2 = 0;
									Local_1651[iLocal_1981 /*17*/] = 0;
								}
								else
								{
									Local_1651[iLocal_1981 /*17*/].f_2 = 0;
									Local_1651[iLocal_1981 /*17*/] = 0;
								}
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_1651[iLocal_1981 /*17*/].f_15))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1651[iLocal_1981 /*17*/].f_15, 0);
								}
								break;
							
							case 3:
								if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									Local_1651[iLocal_1981 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_1651[iLocal_1981 /*17*/].f_3);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 5)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 6);
									GlobalFunc_7621(Local_1651[iLocal_1981 /*17*/].f_6, 1, 0, 1, 0);
									Local_1651[iLocal_1981 /*17*/] = 7;
									Local_1651[iLocal_1981 /*17*/].f_2 = MISC::GET_GAME_TIMER() + 100;
									AUDIO::SET_AMBIENT_ZONE_STATE(Local_1651[iLocal_1981 /*17*/].f_4, 0, 1);
									Local_1651[iLocal_1981 /*17*/].f_15 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev3_trailer_plume", Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 3)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 4);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) != 2 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) != 4)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 2);
									GlobalFunc_7621(Local_1651[iLocal_1981 /*17*/].f_6, 1, 0, 1, 0);
								}
								break;
							
							case 8:
								GlobalFunc_7621(Local_1651[iLocal_1981 /*17*/].f_6, 1, 0, 1, 0);
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 9);
									Local_1651[iLocal_1981 /*17*/].f_15 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev3_trailer_plume", Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
									Local_1651[iLocal_1981 /*17*/] = 4;
								}
								else
								{
									Local_1651[iLocal_1981 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_1651[iLocal_1981 /*17*/].f_3);
								}
								break;
							
							case 5:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 3)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 4);
										Local_1651[iLocal_1981 /*17*/] = 6;
									}
								}
								break;
							
							case 6:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 5)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 6);
										GlobalFunc_7621(Local_1651[iLocal_1981 /*17*/].f_6, 1, 0, 1, 0);
										Local_1651[iLocal_1981 /*17*/] = 7;
									}
								}
								break;
							
							case 7:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 10)
									{
										Local_1651[iLocal_1981 /*17*/] = 4;
									}
								}
								break;
							
							case 9:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_1651[iLocal_1981 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1) == 7)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1651[iLocal_1981 /*17*/].f_1, 10);
										Local_1651[iLocal_1981 /*17*/] = 4;
									}
								}
								break;
							
							case 4:
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/] + Local_1651[iLocal_1981 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 1) < 2.3f)
								{
									if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
									{
										FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
									}
								}
								break;
						}
						iLocal_1981++;
					}
					break;
				
				case 54:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_402[iParam0 /*10*/].f_7 = Local_1651;
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							iLocal_1980 = 0;
							while (iLocal_1980 < Local_1651)
							{
								if (HUD::DOES_BLIP_EXIST(Local_1651[iLocal_1980 /*17*/].f_16))
								{
									if (Local_1651[iLocal_1980 /*17*/] == 7 || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_1651[iLocal_1980 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1980 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1980 /*17*/].f_14, joaat("weapon_stickybomb"), 1))
									{
										RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
										HUD::REMOVE_BLIP(&(Local_1651[iLocal_1980 /*17*/].f_16));
										Local_402[iParam0 /*10*/].f_7 = (Local_402[iParam0 /*10*/].f_7 - 1);
									}
								}
								else if (!MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_1651[iLocal_1980 /*17*/].f_7[0 /*3*/], Local_1651[iLocal_1980 /*17*/].f_7[1 /*3*/], Local_1651[iLocal_1980 /*17*/].f_14, joaat("weapon_stickybomb"), 1) && Local_1651[iLocal_1980 /*17*/] == 2)
								{
									Local_402[iParam0 /*10*/].f_7++;
									Local_1651[iLocal_1980 /*17*/].f_16 = GlobalFunc_5104(func_273(iLocal_1980), 0);
								}
								iLocal_1980++;
							}
							if (Local_402[iParam0 /*10*/].f_7 == 0)
							{
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 55:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_RANDOM_INT_IN_RANGE(1, (Local_1070 - 1));
							if (!func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]) && Local_402[iParam0 /*10*/].f_7 != 7)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/], 0);
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (func_3(Local_1070[Local_402[iParam0 /*10*/].f_7 /*10*/]))
							{
								Local_402[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					break;
				
				case 56:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							func_270("TRV3_GAMEPLAY_ST", 0, "TRV3_ALERTED");
							Local_402[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_320(53))
							{
								func_270("TRV3_ALERTED", 1, "TRV3_EXPLOSIONS");
								Local_402[iParam0 /*10*/].f_6 = 3;
							}
							else if (func_320(66))
							{
								func_270("TRV3_3_PLANTED", 0, "TRV3_EXPLOSIONS");
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (func_320(53))
							{
								func_270("TRV3_ALERTED", 1, "TRV3_EXPLOSIONS");
								Local_402[iParam0 /*10*/].f_6 = 3;
							}
							else if (func_320(67))
							{
								func_270("TRV3_BOMBS_PLANTED", 0, "TRV3_EXPLOSIONS");
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (func_320(67))
							{
								func_270("TRV3_BOMBS_PLANTED_ALERTED", 0, "TRV3_EXPLOSIONS");
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 57:
					if (func_333(iLocal_1181[8]))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1181[8], 200f);
					}
					break;
				
				case 58:
					if (!func_3(Local_1070[7 /*10*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[7 /*10*/], iLocal_1642);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[7 /*10*/], 1);
					}
					Local_402[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 59:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (GlobalFunc_5664("TRV3_GIRL1"))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 1);
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (func_3(Local_1070[2 /*10*/]))
							{
								if (GlobalFunc_6402() != 7)
								{
									func_267(5);
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
								else
								{
									Local_402[iParam0 /*10*/].f_6++;
								}
							}
							if (!GlobalFunc_5664("TRV3_GIRL1"))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 0);
								Local_402[iParam0 /*10*/].f_6 = 0;
							}
							break;
						
						case 2:
							if (GlobalFunc_5664("TRV3_GIRL1"))
							{
								if (GlobalFunc_6402() != 7)
								{
									func_267(6);
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 0);
									Local_402[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 60:
					if (!func_3(Local_1070[2 /*10*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*10*/], 1) < 40f)
						{
							GlobalFunc_661(Local_1070[2 /*10*/], &(Local_1070[2 /*10*/].f_1), -1, 0, 1, 0, -1082130432, 0);
						}
					}
					break;
				
				case 66:
					switch (Local_402[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_285(1, 65) > 0)
							{
								Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER();
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_1651[3 /*17*/].f_7[0 /*3*/] + Local_1651[3 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, 0, 1, 1065353216);
								Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
								AUDIO::START_AUDIO_SCENE("TREVOR_3_RAYFIRE");
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_1651[0 /*17*/].f_7[0 /*3*/] + Local_1651[0 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, 0, 1, 1065353216);
								Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 700;
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_1651[2 /*17*/].f_7[0 /*3*/] + Local_1651[2 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, 0, 1, 1065353216);
								Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 600;
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_1651[4 /*17*/].f_7[0 /*3*/] + Local_1651[4 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, 0, 1, 1065353216);
								Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 700;
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 5:
							if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_1651[1 /*17*/].f_7[0 /*3*/] + Local_1651[1 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, 0, 1, 1065353216);
								Local_402[iParam0 /*10*/].f_6++;
							}
							break;
					}
					break;
				
				default:
					func_133(iParam0);
					break;
			}
			if (Local_402[iParam0 /*10*/].f_6 == 99)
			{
				Local_402[iParam0 /*10*/].f_3 = 1;
				Local_402[iParam0 /*10*/].f_6 = 0;
				Local_402[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
	return 0;
}

void func_133(int iParam0)//Position - 0xF98D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	
	switch (Local_402[iParam0 /*10*/])
	{
		case 65:
			if (GlobalFunc_4926(1000))
			{
				AUDIO::STOP_STREAM();
				bLocal_260 = true;
				Local_402[iParam0 /*10*/].f_6 = 2;
			}
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DETONATE_BOMBS"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DETONATE_BOMBS");
					}
					if (AUDIO::LOAD_STREAM("TREVOR3_BLOW_UP_TRAILERS_MASTER", 0) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3"))
					{
						bLocal_260 = false;
						Local_1737.f_4 = CAM::CREATE_CAMERA(964613260, 1);
						if (STREAMING::IS_STREAMVOL_ACTIVE())
						{
							STREAMING::STREAMVOL_DELETE(uLocal_1626);
						}
						uLocal_1626 = STREAMING::STREAMVOL_CREATE_FRUSTUM(63.6975f, 3630.125f, 49.8993f, GlobalFunc_590(-4.2671f, 0.6115f, 13.5931f), 150f, 12, 33);
						uLocal_1197 = PED::CREATE_SYNCHRONIZED_SCENE(68.185f, 3653.15f, 45.796f, 0f, 0f, 6.38f, 2);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(Local_1737.f_4, uLocal_1197, "ALL_TRAILERS_EXPLOSION_CAM", "misstrevor3");
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						AUDIO::PLAY_STREAM_FRONTEND();
						MISC::CLEAR_AREA_OF_PROJECTILES(64.2897f, 3711.55f, 40.422f, 100f, 0);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						GRAPHICS::SET_TIMECYCLE_MODIFIER("trailer_explosion_optimise");
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						func_267(7);
						if (iLocal_52 || bLocal_51)
						{
							func_270("TRV3_EXPLOSIONS_ALERTED", 0, "TRV3_EXPLOSIONS");
						}
						else
						{
							func_270("TRV3_EXPLOSIONS", 1, "TRV3_EXPLOSIONS");
						}
						iVar0 = 0;
						while (iVar0 < Local_1651)
						{
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), func_273(iVar0), 1) < 15f)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								}
								switch (iVar0)
								{
									case 0:
										if (func_333(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 67.7464f, 3738.602f, 38.7134f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 289.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 48.8548f, 3763.275f, 38.6019f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 171.1065f);
										}
										break;
									
									case 1:
										if (func_333(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 100.3786f, 3709.596f, 38.7631f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 150.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 125.3921f, 3730.307f, 38.7241f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 96.0804f);
										}
										break;
									
									case 2:
										if (func_333(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 85.5019f, 3687.416f, 38.7033f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 150.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 66.9316f, 3673.053f, 38.8189f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.269f);
										}
										break;
									
									case 3:
										if (func_333(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 31.3841f, 3688.936f, 38.6971f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 45.2714f, 3682.569f, 38.7484f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 213.2737f);
										}
										break;
									
									case 4:
										if (func_333(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 31.3841f, 3688.936f, 38.6971f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.7921f, 3646.683f, 39.0559f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 316.946f);
										}
										break;
									}
							}
							iVar0++;
						}
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1197))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1197) == 1f)
						{
							Local_402[iParam0 /*10*/].f_6++;
						}
					}
					else
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
			}
			if (Local_402[iParam0 /*10*/].f_6 == 2)
			{
				if (GlobalFunc_1720() && !bLocal_260)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				CAM::DESTROY_CAM(uLocal_1953, 0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1065353216);
				if (STREAMING::IS_STREAMVOL_ACTIVE())
				{
					STREAMING::STREAMVOL_DELETE(uLocal_1626);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				Local_1651[0 /*17*/] = 8;
				Local_1651[1 /*17*/] = 8;
				Local_1651[2 /*17*/] = 8;
				Local_1651[3 /*17*/] = 8;
				Local_1651[4 /*17*/] = 8;
				Local_402[iParam0 /*10*/].f_3 = 1;
				func_270("TRV3_GET_TO_CAR", 0, "TRV3_EXPLOSIONS");
			}
			break;
		
		case 67:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("CLEARING", 45f);
					Local_402[iParam0 /*10*/].f_6++;
					Local_402[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + 45000);
					break;
				
				case 1:
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("SMOG", 50f);
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 68:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_coffin_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
			STREAMING::REMOVE_ANIM_DICT("misstrevor3");
			STREAMING::REMOVE_ANIM_DICT("misstrevor3_beatup");
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[6]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[6]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[7]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[7]));
			}
			iLocal_1981 = 0;
			while (iLocal_1981 < Local_1070)
			{
				if (iLocal_1981 != 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iLocal_1981 /*10*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iLocal_1981 /*10*/]));
					}
				}
				iLocal_1981++;
			}
			iLocal_1981 = 0;
			while (iLocal_1981 < iLocal_1181)
			{
				if (iLocal_1981 != 0 && iLocal_1981 != 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[iLocal_1981]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[iLocal_1981]));
					}
				}
				iLocal_1981++;
			}
			iLocal_1981 = 0;
			while (iLocal_1981 < iLocal_1192)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[iLocal_1981]))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1192[iLocal_1981]));
				}
				iLocal_1981++;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			MISC::ENABLE_DISPATCH_SERVICE(1, 1);
			MISC::ENABLE_DISPATCH_SERVICE(7, 1);
			iLocal_1981 = 0;
			while (iLocal_1981 < Local_1651)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_1651[iLocal_1981 /*17*/].f_15))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1651[iLocal_1981 /*17*/].f_15, 0);
				}
				iLocal_1981++;
			}
			func_330(25, 89, 1, 1);
			iLocal_1981 = 0;
			while (iLocal_1981 < Local_942)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_942[iLocal_1981 /*9*/]))
				{
					if (!PED::IS_PED_INJURED(Local_942[iLocal_1981 /*9*/]))
					{
						PED::SET_PED_KEEP_TASK(Local_942[iLocal_1981 /*9*/], 1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_942[iLocal_1981 /*9*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_942[iLocal_1981 /*9*/].f_1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_942[iLocal_1981 /*9*/].f_1));
				}
				iLocal_1981++;
			}
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@idle_c");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_salton_01"));
			STREAMING::REMOVE_ANIM_SET("move_f@flee@a");
			Local_402[iParam0 /*10*/].f_3 = 1;
			break;
		
		case 69:
			if (func_333(iLocal_1181[0]))
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1181[0], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_1181[0], 1);
			}
			Local_402[iParam0 /*10*/].f_3 = 1;
			break;
		
		case 70:
			bVar2 = false;
			iVar3 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
			if (iVar3 != 0)
			{
				iVar4 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar3);
				if (iVar4 == 4)
				{
					bVar2 = true;
				}
			}
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("misstrevor3ig_7");
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3ig_7"))
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					if (GlobalFunc_5664("TRV3_DR3") || GlobalFunc_5664("TRV3_DR4"))
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 3:
					if (func_320(30))
					{
						if (!func_3(Local_1070[10 /*10*/]))
						{
							if (func_333(iLocal_1181[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], 0))
								{
									if (GlobalFunc_2234(Local_1070[10 /*10*/], iLocal_1181[0]) == 0)
									{
										if (ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]) == joaat("bodhi2"))
										{
											if (!bVar2)
											{
												TASK::TASK_PLAY_ANIM(Local_1070[10 /*10*/], "misstrevor3ig_7", "shove_wade", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misstrevor3ig_7", "shove_trev", 8f, -8f, -1, 32, 0, 0, 0, 0);
											}
											else
											{
												Local_402[iParam0 /*10*/].f_3 = 1;
											}
										}
										else
										{
											Local_402[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										Local_402[iParam0 /*10*/].f_3 = 1;
									}
								}
							}
							Local_402[iParam0 /*10*/].f_6++;
						}
					}
					break;
				
				case 4:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misstrevor3ig_7", "shove_trev", 3))
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 5:
					if (bVar2 || !func_320(30))
					{
						if (!func_3(Local_1070[10 /*10*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_1070[10 /*10*/]);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misstrevor3ig_7", "shove_trev", 3))
					{
						STREAMING::REMOVE_ANIM_DICT("misstrevor3ig_7");
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 71:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_dri_mcs_concat", 2, 8);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) > (100f + 100f))
					{
						CUTSCENE::REMOVE_CUTSCENE();
						Local_402[iParam0 /*10*/].f_6 = 0;
					}
					break;
			}
			break;
		
		case 72:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1181[0], 1, 1);
						Local_402[iParam0 /*10*/].f_6++;
					}
					else
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 6f, 2, 1056964608, 0, 1))
						{
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
					}
					else
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 2:
					break;
			}
			break;
		
		case 73:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1181[0], 1, 1);
						Local_402[iParam0 /*10*/].f_6++;
					}
					else
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 2, 1056964608, 0, 1))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							Local_402[iParam0 /*10*/].f_6++;
						}
					}
					else
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 2:
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 74:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Local_402[iParam0 /*10*/].f_6 = 1000;
					}
					else
					{
						STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1350.147f, 725.3141f, 185.3831f, 1) < 12f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 3:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1350.147f, 725.3141f, 185.3831f, 1) > 14f)
					{
						Local_402[iParam0 /*10*/].f_6 = 0;
					}
					else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1350.147f, 725.3141f, 185.3831f, 1) < 6f)
					{
						Local_402[iParam0 /*10*/].f_6++;
						Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1350.147f, 725.3141f, 185.3831f, 1f, -1, 0.25f, 0, 219f);
					}
					break;
				
				case 4:
					if (CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
							}
						}
					}
					fVar5 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					if (fVar5 > 214f && fVar5 < 294f)
					{
						Local_1991 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, (1000f * SYSTEM::COS(250f)), (-1000f * SYSTEM::SIN(250f))) };
						Local_1994 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, (1000f * SYSTEM::COS(210f)), (-1000f * SYSTEM::SIN(210f))) };
						iLocal_1990 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_1991, 1, 1, 0);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.78f);
						func_340(47, 1);
					}
					else if (fVar5 < 214f && fVar5 > 125f)
					{
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.15f);
						Local_1991 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, (1000f * SYSTEM::COS(184f)), (-1000f * SYSTEM::SIN(184f))) };
						Local_1994 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, (1000f * SYSTEM::COS(224f)), (-1000f * SYSTEM::SIN(224f))) };
						iLocal_1990 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_1991, 1, 1, 0);
						func_340(47, 1);
					}
					else
					{
						Local_402[iParam0 /*10*/].f_6 = 1000;
					}
					if (Local_402[iParam0 /*10*/].f_6 != 1000)
					{
						CAM::STOP_GAMEPLAY_HINT(1);
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_1990, 0f, 0f, 0f, 1, -1, 5500, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.375f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.113f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1990, -1, 0, 2);
						Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 8000;
						Local_402[iParam0 /*10*/].f_9 = 0f;
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 5:
					Local_402[iParam0 /*10*/].f_9 = (Local_402[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() / 8f));
					if (Local_402[iParam0 /*10*/].f_9 > 1f)
					{
						Local_402[iParam0 /*10*/].f_9 = 1f;
					}
					Var6 = { Local_1991 + Local_1994 - Local_1991 * Vector(Local_402[iParam0 /*10*/].f_9, Local_402[iParam0 /*10*/].f_9, Local_402[iParam0 /*10*/].f_9) };
					ENTITY::SET_ENTITY_COORDS(iLocal_1990, Var6, 1, 0, 0, 1);
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						OBJECT::DELETE_OBJECT(&iLocal_1990);
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 1000:
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_dri_mcs_concat", 3, 8);
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1001:
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1002:
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 75:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(2f);
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1068))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Paper_Car", 0)))
				{
					iLocal_1068 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Paper_Car", 0));
					iLocal_1069 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1068, 26, joaat("ig_wade"), -1, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1068, 1, 1);
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_1068, 1, 1);
					TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_1069, -1115f, 168f, 60f);
					Local_402[iParam0 /*10*/].f_8 = MISC::GET_GAME_TIMER() + 10000;
				}
			}
			else if (Local_402[iParam0 /*10*/].f_8 != 0)
			{
				if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_8)
				{
					if (!PED::IS_PED_INJURED(iLocal_1069))
					{
						TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_1069, -815f, 68f, 60f);
					}
					Local_402[iParam0 /*10*/].f_8 = 0;
				}
			}
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_LS_DIALOGUE"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_LS_DIALOGUE");
					}
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1068, "Paper_Car", 2, joaat("maverick"), 0);
						func_267(8);
						GlobalFunc_8316(1, 1, 1, 0);
						StringCopy(&cLocal_1937, "", 24);
						StringCopy(&Local_1943, "", 24);
						iLocal_1930 = 0;
						RECORDING::_0x293220DA1B46CEBC(10f, 0f, 3);
						RECORDING::_0x48621C9FCA3EBD28(4);
						CUTSCENE::START_CUTSCENE(0);
						iLocal_1034 = 8;
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					if (func_333(iLocal_1181[0]))
					{
						if (GlobalFunc_713(iLocal_1181[0], -1349.906f, 740.0016f, 183.4498f, 1) < 25f)
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]) == joaat("towtruck2"))
							{
								if (VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_1181[0]) != 0)
								{
									VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_1181[0], ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_1181[0])));
									VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_1181[0], 1f);
								}
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], -1349.906f, 740.0016f, 183.4498f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 101f);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1181[0], 1000f);
						}
					}
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
					MISC::CLEAR_AREA(-1349.44f, 738.9042f, 183.5858f, 6f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(-1345.977f, 729.113f, 184.8326f, 7f, 1, 0, 0, 0);
					CAM::STOP_GAMEPLAY_HINT(1);
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					PED::SET_PED_HELMET_FLAG(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_7139(&Local_1954, 0);
					GlobalFunc_5652(&Local_1954, 1, 0);
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					Local_402[iParam0 /*10*/].f_6++;
					Local_402[iParam0 /*10*/].f_7 = 0;
					break;
				
				case 2:
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						if (!MISC::IS_BIT_SET(Local_402[iParam0 /*10*/].f_7, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1065353216);
							func_256(3, 4, 0, 0);
							RECORDING::_0x81CBAE94390F9F89();
							RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
							iLocal_1034 = 9;
							MISC::SET_BIT(&(Local_402[iParam0 /*10*/].f_7), 0);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
					{
						if (!MISC::IS_BIT_SET(Local_402[iParam0 /*10*/].f_7, 1))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
							if (GlobalFunc_1720())
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 1, 0);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
							}
							else
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
							}
							MISC::SET_BIT(&(Local_402[iParam0 /*10*/].f_7), 1);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Paper_Car", 0))
					{
						if (!MISC::IS_BIT_SET(Local_402[iParam0 /*10*/].f_7, 2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1068, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069))
								{
									PED::DELETE_PED(&iLocal_1069);
								}
								VEHICLE::DELETE_VEHICLE(&iLocal_1068);
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
								GlobalFunc_8316(0, 1, 1, 0);
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					break;
			}
			if (!func_3(Local_1070[10 /*10*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_1070[10 /*10*/]))
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_1070[10 /*10*/], 1), 5f);
				}
				if (func_333(iLocal_1181[0]))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_1070[10 /*10*/], iLocal_1181[0], 0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1181[0], -1) && GlobalFunc_156(iLocal_1181[0], Local_1070[10 /*10*/], 1) < 10f)
						{
							PED::SET_PED_INTO_VEHICLE(Local_1070[10 /*10*/], iLocal_1181[0], 0);
						}
					}
				}
			}
			break;
		
		case 77:
			if (iLocal_1034 == 2)
			{
				if (Local_402[iParam0 /*10*/].f_6 == 0)
				{
					Local_402[iParam0 /*10*/].f_6 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
			{
				switch (Local_402[iParam0 /*10*/].f_6)
				{
					case 0:
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							Local_402[iParam0 /*10*/].f_6++;
						}
						break;
					
					case 1:
						if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 0))
								{
									Var9 = { ENTITY::GET_ENTITY_COORDS(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 1) };
								}
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", ENTITY::GET_ENTITY_MODEL(Local_1070[10 /*10*/])) || !CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!GlobalFunc_105(Var9))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var9, 1963.928f, 3789.891f, 30.25279f, 2002.27f, 3813.017f, 36.09295f, 19.5625f, 0, 1))
								{
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 260f);
								}
							}
							PED::FORCE_PED_MOTION_STATE(Local_1070[10 /*10*/], -668482597, 0, 0, 0);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[10 /*10*/], 1f);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1070[10 /*10*/], 1, 0);
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
							Local_402[iParam0 /*10*/].f_8++;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())) || !CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!GlobalFunc_105(Var9))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var9, 1963.928f, 3789.891f, 30.25279f, 2002.27f, 3813.017f, 36.09295f, 19.5625f, 0, 1))
								{
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 260f);
								}
							}
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
							if (GlobalFunc_1720())
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
							}
							else
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
							}
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
						break;
					}
			}
			break;
		
		case 76:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1152.782f, -1523.988f, 3.5198f, 1) > (100f + 100f) && iLocal_1034 != 10)
			{
				if (Local_402[iParam0 /*10*/].f_6 < 5 && Local_402[iParam0 /*10*/].f_6 > 0)
				{
					Local_402[iParam0 /*10*/].f_6 = 5;
				}
			}
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1152.782f, -1523.988f, 3.5198f, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE("TRV_DRI_EXT", 8);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					uLocal_1985 = INTERIOR::GET_INTERIOR_AT_COORDS(-1154.817f, -1518.303f, 9.6345f);
					if (INTERIOR::IS_VALID_INTERIOR(uLocal_1985))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1985);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					if (INTERIOR::IS_INTERIOR_READY(iLocal_1985))
					{
						STREAMING::SET_INTERIOR_ACTIVE(iLocal_1985, 1);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 3:
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 4:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					CUTSCENE::REMOVE_CUTSCENE();
					if (INTERIOR::IS_INTERIOR_READY(iLocal_1985))
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_1985);
					}
					Local_402[iParam0 /*10*/].f_6 = 0;
					break;
			}
			if (Local_402[iParam0 /*10*/].f_6 >= 0 && Local_402[iParam0 /*10*/].f_6 <= 4)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!func_3(Local_1070[10 /*10*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", Local_1070[10 /*10*/], 0);
					}
				}
			}
			break;
		
		case 78:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_1181[0])
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1181[0], 1, 1);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[0]));
					}
					iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_1181[0], 0, 0);
				}
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (!func_3(Local_1070[10 /*10*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_1070[10 /*10*/], 116, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_1070[10 /*10*/], 0, 1, 0, 0, 0, 0, 0, 0);
				Local_402[iParam0 /*10*/].f_3 = 1;
			}
			break;
		
		case 80:
			if (!func_3(Local_1070[10 /*10*/]))
			{
				switch (Local_402[iParam0 /*10*/].f_6)
				{
					case 0:
						if (func_83(10, 72) && !GlobalFunc_5664("TRV3_END"))
						{
							func_256(7, 34, 1, 0);
							STREAMING::REQUEST_ANIM_DICT("misstrevor3leadinout");
							GlobalFunc_7629();
							MISC::CLEAR_AREA_OF_VEHICLES(-1134.374f, -1513.476f, 3.4483f, 15f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], -1148.044f, -1520.952f, 4.1386f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 300f);
							PED::FORCE_PED_MOTION_STATE(Local_1070[10 /*10*/], -668482597, 0, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[10 /*10*/], -1149.865f, -1523.047f, 9.6329f, 1f, -1, 0.2f, 0, 41f);
							if (CAM::DOES_CAM_EXIST(uLocal_1953))
							{
								CAM::DESTROY_CAM(uLocal_1953, 0);
							}
							uLocal_1953 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1133.8f, -1514.9f, 6.2f, 11.4f, 0f, 113.5f, 6500, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1133.7f, -1514.8f, 6.9f, 11.2f, 0f, 114.5f, 8500, 3, 2);
							MISC::CLEAR_AREA_OF_VEHICLES(-1133.8f, -1514.9f, 6.2f, 15f, 0, 0, 0, 0, 0);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_1953, 0);
							CAM::SET_CAM_FOV(uLocal_1953, 40f);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							func_267(9);
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
							Local_402[iParam0 /*10*/].f_6++;
							Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 6000;
						}
						break;
					
					case 1:
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						GlobalFunc_7629();
						if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7 && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3leadinout"))
						{
							if (GlobalFunc_1720())
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
							CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_1953))
							{
								CAM::DESTROY_CAM(uLocal_1953, 0);
							}
							if (!func_3(Local_1070[10 /*10*/]))
							{
								ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], -1149.865f, -1523.047f, 9.6329f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 41f);
								TASK::TASK_PLAY_ANIM(Local_1070[10 /*10*/], "misstrevor3leadinout", "trv_drive_ext_leadin_door_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
								PED::REMOVE_PED_HELMET(Local_1070[10 /*10*/], 1);
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
						break;
					}
			}
			break;
		
		case 81:
			if (GlobalFunc_5664("TRV3_DRI"))
			{
				TASK::TASK_PLAY_ANIM(Local_1070[10 /*10*/], "misstrevor3leadinout", "trv_drive_ext_leadin_door_shout", 8f, -8f, -1, 1, 0, 0, 0, 0);
				Local_402[iParam0 /*10*/].f_3 = 1;
			}
			break;
		
		case 83:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					GlobalFunc_2571(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1149.278f, -1522.286f, 9.6331f, 1f, 20000, 0.25f, 1, 1193033728);
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					GlobalFunc_2536(0, 0);
					break;
			}
			break;
		
		case 84:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0))
						{
							Local_402[iParam0 /*10*/].f_6++;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Local_402[iParam0 /*10*/].f_6++;
						}
						else
						{
							func_270("TRV3_MUSIC_END", 0, "");
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_270("TRV3_MUSIC_END", 0, "");
							Local_402[iParam0 /*10*/].f_3 = 1;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
							{
								iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar12))
								{
									Local_402[iParam0 /*10*/].f_6++;
									Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
								}
							}
							else
							{
								func_270("TRV3_MUSIC_END", 0, "");
								Local_402[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					break;
				
				case 2:
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						func_270("TRV3_RADIO_TRUCK", 1, "");
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 85:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_3_ESCAPE_TO_CAR");
						AUDIO::START_AUDIO_SCENE("TREVOR_3_DRIVE_TO_LS_DIALOGUE");
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 86:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_3_DRIVE_TO_FLOYDS");
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					if (func_320(41))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_FLOYDS"))
						{
							AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_FLOYDS");
						}
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 87:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1152.782f, -1523.988f, 3.5198f, 1) < 80f)
			{
				if (!STREAMING::IS_STREAMVOL_ACTIVE())
				{
					uLocal_1626 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1133.8f, -1514.9f, 6.2f, GlobalFunc_590(11.4f, 0f, 113.5f), 20f, 12, 33);
				}
			}
			else if (STREAMING::IS_STREAMVOL_ACTIVE())
			{
				STREAMING::STREAMVOL_DELETE(uLocal_1626);
			}
			break;
		
		case 88:
			if (func_83(8, 75))
			{
				Local_402[iParam0 /*10*/].f_3 = 1;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar13)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar13)))
				{
					fVar14 = GlobalFunc_713(iVar13, -1350.115f, 729.2382f, 184.7668f, 1);
					fVar15 = (250f - fVar14);
					if (fVar15 < 0f)
					{
						fVar15 = 0f;
					}
					fVar15 = (fVar15 / 250f);
					fVar15 = (fVar15 * 1000f);
					fVar16 = ENTITY::GET_ENTITY_SPEED(iVar13);
					if (fVar16 > 22f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar13, 1, 0f, -fVar15, 0f, 0, 1, 0, 0);
					}
				}
			}
			break;
		
		case 89:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@idle_c");
					STREAMING::REQUEST_MODEL(joaat("a_f_m_salton_01"));
					STREAMING::REQUEST_MODEL(joaat("hexer"));
					STREAMING::REQUEST_ANIM_SET("move_f@flee@a");
					Local_942[0 /*9*/].f_2 = { 100.1487f, 3668.9f, 38.7549f };
					Local_942[0 /*9*/].f_5 = { 71.9131f, 3695.337f, 39.6061f };
					Local_942[0 /*9*/].f_8 = 1;
					Local_942[1 /*9*/].f_2 = { 18.9311f, 3661.285f, 38.8146f };
					Local_942[1 /*9*/].f_5 = { 91.447f, 3590.443f, 38.755f };
					Local_942[1 /*9*/].f_8 = 4;
					Local_942[2 /*9*/].f_2 = { 65.1302f, 3681.391f, 38.8345f };
					Local_942[2 /*9*/].f_5 = { 58.3865f, 3583.418f, 38.678f };
					Local_942[2 /*9*/].f_8 = 4;
					Local_942[3 /*9*/].f_2 = { 6.81f, 3701.094f, 38.5752f };
					Local_942[3 /*9*/].f_5 = { 39.2396f, 3703.714f, 39.5151f };
					Local_942[3 /*9*/].f_8 = 2;
					Local_942[4 /*9*/].f_2 = { 95.5319f, 3742.692f, 38.6829f };
					Local_942[4 /*9*/].f_5 = { 107.2796f, 3519.943f, 38.7924f };
					Local_942[4 /*9*/].f_8 = 6;
					Local_942[5 /*9*/].f_2 = { 11.4552f, 3702.31f, 38.6405f };
					Local_942[5 /*9*/].f_5 = { -32.4513f, 3605.861f, 42.4539f };
					Local_942[5 /*9*/].f_8 = 6;
					Local_942[6 /*9*/].f_2 = { 99.4489f, 3636.078f, 38.7549f };
					Local_942[6 /*9*/].f_5 = { 31.4033f, 3667.502f, 39.4457f };
					Local_942[6 /*9*/].f_8 = 3;
					Local_942[7 /*9*/].f_2 = { 28.5668f, 3730.857f, 38.6138f };
					Local_942[7 /*9*/].f_5 = { 45.4471f, 3588.114f, 38.6882f };
					Local_942[7 /*9*/].f_8 = 4;
					Local_942[8 /*9*/].f_2 = { 93.1663f, 3726.842f, 38.5199f };
					Local_942[8 /*9*/].f_5 = { 85.9274f, 3607.32f, 38.8282f };
					Local_942[8 /*9*/].f_8 = 4;
					Local_942[9 /*9*/].f_2 = { 36.5757f, 3639.239f, 38.8501f };
					Local_942[9 /*9*/].f_5 = { 46.3355f, 3744.589f, 39.0855f };
					Local_942[9 /*9*/].f_8 = 0;
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					if ((STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@idle_c") && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_salton_01"))) && STREAMING::HAS_ANIM_SET_LOADED("move_f@flee@a"))
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					iVar17 = 0;
					while (iVar17 < Local_942)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_942[iVar17 /*9*/]))
						{
							if (Local_402[iParam0 /*10*/].f_7 < 20)
							{
								if (!GlobalFunc_2580(Local_942[iVar17 /*9*/].f_2, 10f, 1120403456))
								{
									Local_942[iVar17 /*9*/] = PED::CREATE_PED(26, joaat("a_f_m_salton_01"), Local_942[iVar17 /*9*/].f_2, 0, 1, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_942[iVar17 /*9*/], iLocal_1642);
									PED::SET_PED_MOVEMENT_CLIPSET(Local_942[iVar17 /*9*/], "move_f@flee@a", 1048576000);
									PED::SET_PED_HEARING_RANGE(Local_942[iVar17 /*9*/], 20f);
									switch (iVar17)
									{
										case 0:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 0, 1, 0);
											break;
										
										case 1:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 1, 1, 0);
											break;
										
										case 2:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 0, 0, 0);
											break;
										
										case 3:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 0, 0, 0);
											break;
										
										case 4:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 2, 0, 0);
											break;
										
										case 5:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 1, 0, 0);
											break;
										
										case 6:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 0, 1, 0);
											break;
										
										case 7:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 0, 0, 0);
											break;
										
										case 8:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 2, 0, 0);
											break;
										
										case 9:
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 4, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_942[iVar17 /*9*/], 6, 1, 0, 0);
											break;
									}
									Local_402[iParam0 /*10*/].f_7++;
									switch (Local_942[iVar17 /*9*/].f_8)
									{
										case 0:
										case 1:
										case 2:
										case 3:
											switch (Local_942[iVar17 /*9*/].f_8)
											{
												case 0:
													iVar18 = 1;
													break;
												
												case 1:
													iVar18 = 2;
													break;
												
												case 2:
													iVar18 = 3;
													break;
												
												case 3:
													iVar18 = 4;
													break;
											}
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_942[iVar17 /*9*/].f_5, 2f, -1, 7f, 0, 1193033728);
											if (!HUD::DOES_BLIP_EXIST(Local_1651[iVar18 /*17*/].f_16))
											{
												TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_942[iVar17 /*9*/].f_5, 2000);
												TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_variations@idle_c", "react_big_variations_s", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_variations@idle_c", "react_big_variations_p", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
											}
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1500f, -1, 0, 0);
											func_119(&(Local_942[iVar17 /*9*/]), 0);
											break;
										
										case 4:
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_942[iVar17 /*9*/].f_5, 2f, -1, 15f, 0, 1193033728);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
											TASK::TASK_COWER(0, -1);
											func_119(&(Local_942[iVar17 /*9*/]), 0);
											break;
										
										case 5:
											func_120();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_942[iVar17 /*9*/].f_5, 2f, -1, 2f, 0, 1193033728);
											TASK::TASK_COWER(0, -1);
											func_119(&(Local_942[iVar17 /*9*/]), 0);
											break;
										
										case 6:
											Local_942[iVar17 /*9*/].f_1 = VEHICLE::CREATE_VEHICLE(joaat("hexer"), Local_942[iVar17 /*9*/].f_2, 180f, 1, 1);
											PED::SET_PED_INTO_VEHICLE(Local_942[iVar17 /*9*/], Local_942[iVar17 /*9*/].f_1, -1);
											func_120();
											TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_942[iVar17 /*9*/].f_1, Local_942[iVar17 /*9*/].f_5, 15f, 0, 0, 786468, 10f, 5f);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1500f, -1, 0, 0);
											func_119(&(Local_942[iVar17 /*9*/]), 0);
											break;
										
										case 7:
											break;
										}
									}
							}
						}
						else if (!PED::IS_PED_INJURED(Local_942[iVar17 /*9*/]))
						{
							if ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_942[iVar17 /*9*/], 1) > 120f && Local_942[iVar17 /*9*/].f_8 != 6) || (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_942[iVar17 /*9*/], 1) > 200f && Local_942[iVar17 /*9*/].f_8 == 6))
							{
								PED::SET_PED_KEEP_TASK(Local_942[iVar17 /*9*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_942[iVar17 /*9*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_942[iVar17 /*9*/].f_1))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_942[iVar17 /*9*/].f_1));
								}
							}
						}
						iVar17++;
					}
					break;
			}
			break;
		
		case 90:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!func_3(Local_1070[10 /*10*/]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", Local_1070[10 /*10*/], 0);
				}
			}
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						func_267(10);
						GlobalFunc_4935();
						GlobalFunc_8316(1, 1, 1, 0);
						if (!func_3(Local_1070[10 /*10*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1070[10 /*10*/], "Wade", 0, 0, 0);
						}
						MISC::CLEAR_AREA(-1155.376f, -1518.075f, 3.5626f, 10f, 1, 0, 0, 0);
						GlobalFunc_8316(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(0);
						if (STREAMING::IS_STREAMVOL_ACTIVE())
						{
							STREAMING::STREAMVOL_DELETE(uLocal_1626);
						}
						RECORDING::_0x293220DA1B46CEBC(8f, 0f, 3);
						RECORDING::_0x48621C9FCA3EBD28(4);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					if (CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						GlobalFunc_8316(0, 1, 1, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (func_333(iLocal_1181[0]))
						{
							if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
							{
								if (GlobalFunc_713(iLocal_1181[0], -1156.959f, -1521.333f, 3.3315f, 1) < 7f)
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], -1156.959f, -1521.333f, 3.3315f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 216f);
								}
							}
						}
						RECORDING::_0x81CBAE94390F9F89();
						GlobalFunc_10159(-1158.065f, -1517.148f, 2.732938f, -1146.635f, -1532.795f, 6.208485f, 8.75f, -1151.154f, -1530.319f, 3.2486f, 214.5216f, 4.5f, 20f, 2.5f, 1, 1, 1, 1, 0);
						uLocal_1953 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						CAM::SET_CAM_COORD(uLocal_1953, -1157.185f, -1524.299f, 4.493604f);
						CAM::SET_CAM_ROT(uLocal_1953, 8.201474f, -0.184709f, -78.42252f, 2);
						CAM::SET_CAM_FOV(uLocal_1953, 40f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 91:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(uLocal_1953))
					{
						CAM::DESTROY_CAM(uLocal_1953, 0);
					}
					uLocal_1953 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1157.185f, -1524.299f, 4.493604f, 8.201474f, -0.184709f, -78.42252f, 7500, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1157.185f, -1524.299f, 4.493604f, -0.144409f, -0.184709f, -129.1692f, 7500, 3, 2);
					GlobalFunc_10159(-1158.065f, -1517.148f, 2.732938f, -1146.635f, -1532.795f, 6.208485f, 8.75f, -1151.154f, -1530.319f, 3.2486f, 214.5216f, 4.5f, 20f, 2.5f, 1, 1, 1, 1, 0);
					CAM::SET_CAM_FOV(uLocal_1953, 40f);
					CAM::SHAKE_CAM(uLocal_1953, "Hand_shake", 0.3f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_1953, 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
					Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					GlobalFunc_159("TRV3_END1", -1);
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 92:
			if (STREAMING::NEW_LOAD_SCENE_START(-1159.687f, -1519.146f, 11.5989f, GlobalFunc_590(-15.0004f, 0f, -161.4299f), 8f, 0))
			{
				Local_402[iParam0 /*10*/].f_3 = 1;
			}
			break;
		
		case 93:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(uLocal_1953))
					{
						CAM::DESTROY_CAM(uLocal_1953, 0);
					}
					uLocal_1953 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1149.8f, -1515.2f, 11.7f, -19.4f, 0f, -23.2f, 4000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1149.9f, -1515.3f, 11.6f, -19.4f, 0f, -23.2f, 7500, 3, 2);
					CAM::SET_CAM_FOV(uLocal_1953, 50f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_1953, 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
					Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					GlobalFunc_159("TRV3_END2", -1);
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 94:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(uLocal_1953))
					{
						CAM::DESTROY_CAM(uLocal_1953, 0);
					}
					uLocal_1953 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1145.5f, -1515.9f, 11.5f, -2.8f, 0f, -52.1f, 4000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1145.5f, -1516f, 11.1f, -3.3f, 0f, 8.5f, 7500, 3, 2);
					CAM::SET_CAM_FOV(uLocal_1953, 38f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_1953, 3);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					func_135(PLAYER::PLAYER_PED_ID(), 12, 45, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1150.562f, -1513.612f, 9.6327f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256f);
					Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					GlobalFunc_159("TRV3_END3", -1);
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 95:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(uLocal_1953))
					{
						CAM::DESTROY_CAM(uLocal_1953, 0);
					}
					uLocal_1953 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1148.19f, -1512.67f, 11.3973f, -11.8298f, 0f, 101.1389f, 4000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_1953, -1149.611f, -1511.738f, 11.5468f, -13.2912f, 0f, 142.1143f, 7500, 3, 2);
					CAM::SET_CAM_FOV(uLocal_1953, 50f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_1953, 3);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
					Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					GlobalFunc_159("TRV3_END4", -1);
					Local_402[iParam0 /*10*/].f_6++;
					break;
				
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						Local_402[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-114f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
						CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 0, 0, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
						TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), -1150.348f, -1514.877f, 11.0266f, 2000);
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 2:
					if (MISC::GET_GAME_TIMER() > Local_402[iParam0 /*10*/].f_7)
					{
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		
		case 96:
			switch (Local_402[iParam0 /*10*/].f_6)
			{
				case 0:
					if (func_83(1, 92))
					{
						Local_402[iParam0 /*10*/].f_6++;
					}
					break;
				
				case 1:
					if (GlobalFunc_75())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						CAM::DESTROY_ALL_CAMS(0);
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_402[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
	}
}


int func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x12D1D
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
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7054(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7054(iParam0, 9);
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
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_148(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_148(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, func_145(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_144(iParam0, iVar10, &iVar4, 1))
							{
								func_135(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_135(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_135(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_135(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_135(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_135(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_135(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_148(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_148(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_148(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_144(iParam0, iVar10, &iVar4, 0))
		{
			func_135(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_136(iParam0, iVar10, &iVar4))
		{
			func_135(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_136(int iParam0, int iParam1, int iParam2)//Position - 0x1350A
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_137(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0, int iParam1, int iParam2)//Position - 0x13596
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
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
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
				if (!func_137(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_137(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_137(iParam0, 14, iVar4))
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
						iVar1 = GlobalFunc_7054(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, iVar2, iVar1) };
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
			if (!func_137(iParam0, 14, uVar32[iVar31]))
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







int func_144(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14050
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_137(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_145(int iParam0, int iParam1, int iParam2)//Position - 0x140E6
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
				if (func_137(iParam0, iParam1, iVar0))
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
				if (func_137(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7054(iParam0, iParam1);
		}
	}
	return -99;
}



int func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1453E
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
				iVar1 = GlobalFunc_7054(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7054(iParam0, 2);
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
									if (!GlobalFunc_7935(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7935(iParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 135, 150);
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
									if (!GlobalFunc_7935(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7935(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7935(iParam0, 3, 176, 191) && !GlobalFunc_7935(iParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 176, 191);
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
								iVar4 = GlobalFunc_7054(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7054(iParam0, 11);
								iVar5 = GlobalFunc_11158(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7054(iParam0, 8);
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
								iVar7 = GlobalFunc_7054(iParam0, 8);
								iVar8 = GlobalFunc_7054(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 1);
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
								iVar9 = GlobalFunc_7054(iParam0, 11);
								iVar0 = GlobalFunc_11158(iParam1, -99, iVar9, 0);
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












































































































void func_256(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F13A
{
	Local_266[iParam0 /*6*/] = iParam1;
	Local_266[iParam0 /*6*/].f_1 = iParam2;
	Local_266[iParam0 /*6*/].f_2 = 1;
	Local_266[iParam0 /*6*/].f_3 = iParam3;
	Local_266[iParam0 /*6*/].f_4 = 0;
}











void func_267(int iParam0)//Position - 0x2F604
{
	iParam0 = iParam0;
	GlobalFunc_4956();
}



void func_270(char* sParam0, int iParam1, char* sParam2)//Position - 0x2F926
{
	iLocal_1997 = 1;
	iLocal_1998 = iParam1;
	sLocal_2000 = sParam0;
	sLocal_2001 = sParam2;
}



Vector3 func_273(int iParam0)//Position - 0x2F984
{
	return Local_1651[iParam0 /*17*/].f_7[0 /*3*/] + Local_1651[iParam0 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f);
}








void func_281(int iParam0)//Position - 0x33C45
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, 0.8f);
	Var1 = { Local_1651[iParam0 /*17*/].f_7[0 /*3*/] + Local_1651[iParam0 /*17*/].f_7[1 /*3*/] - Local_1651[iParam0 /*17*/].f_7[0 /*3*/] * Vector(fVar0, fVar0, fVar0) };
	switch (iParam0)
	{
		case 0:
			Var1.f_2 = (42.78f - 2f);
			break;
		
		case 1:
			Var1.f_2 = (42.64144f - 2f);
			break;
		
		case 2:
			Var1.f_2 = (42.99f - 2f);
			break;
		
		case 3:
			Var1.f_2 = (42.9f - 2f);
			break;
		
		case 4:
			Var1.f_2 = (42.77f - 2f);
			break;
	}
	Var4 = { GlobalFunc_6474(Var1, 1.7f) };
	Var4 = { Var4.x, Var4.f_1, Var1.f_2 };
	FIRE::ADD_EXPLOSION_WITH_USER_VFX(Var4, 0, MISC::GET_HASH_KEY("EXP_VFXTAG_TREV3_TRAILER"), 0.5f, 1, 0, 1065353216);
}



void func_284(var uParam0, int iParam1)//Position - 0x33DA2
{
	(uParam0[iParam1 /*24*/])->f_1 = 0;
	(uParam0[iParam1 /*24*/])->f_2 = 0;
	(uParam0[iParam1 /*24*/])->f_3 = 0;
	(uParam0[iParam1 /*24*/])->f_4 = 0;
	(uParam0[iParam1 /*24*/])->f_5 = 0;
	(uParam0[iParam1 /*24*/])->f_7 = 0;
	(uParam0[iParam1 /*24*/])->f_8 = 0;
	(uParam0[iParam1 /*24*/])->f_10 = 0;
	(uParam0[iParam1 /*24*/])->f_11 = 0;
	(uParam0[iParam1 /*24*/])->f_12 = { 0f, 0f, 0f };
	(uParam0[iParam1 /*24*/])->f_15 = { 0f, 0f, 0f };
	(uParam0[iParam1 /*24*/])->f_18 = 0f;
	(*uParam0)[iParam1 /*24*/] = 0;
}

int func_285(int iParam0, int iParam1)//Position - 0x33E25
{
	if (Local_402[iParam0 /*10*/] == iParam1)
	{
		return Local_402[iParam0 /*10*/].f_6;
	}
	else if (Local_402[iParam0 /*10*/] != 0)
	{
	}
	return 0;
}

int func_286(int iParam0, int iParam1)//Position - 0x33E54
{
	char cVar0[64];
	
	if (Local_402[iParam0 /*10*/] == iParam1)
	{
		return Local_402[iParam0 /*10*/].f_7;
	}
	else if (Local_402[iParam0 /*10*/] != 0)
	{
		StringCopy(&cVar0, "Fail: GET_ACTION_INTA() ", 64);
		StringIntConCat(&cVar0, iParam1, 64);
		StringConCat(&cVar0, " ", 64);
		StringIntConCat(&cVar0, Local_402[iParam0 /*10*/], 64);
	}
	return 0;
}



int func_289(int iParam0)//Position - 0x33FF0
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_735[0 /*6*/]);
	if (Local_735[iVar0 /*6*/] == iParam0)
	{
		return Local_735[iVar0 /*6*/].f_5;
	}
	return 0;
}

void func_290(var uParam0)//Position - 0x34021
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (GlobalFunc_4926(1000))
	{
		bLocal_260 = true;
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && bLocal_260 == 1)
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		CLOCK::SET_CLOCK_TIME(22, 0, 0);
		func_267(0);
		if (func_320(50))
		{
			if (func_333(iLocal_1181[0]))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1181[0], 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1181[0], 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1181[0], uParam0->f_9);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1181[0], 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1181[0], 1);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], 59.1493f, 3605.354f, 38.8528f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 358.6649f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1181[0]);
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1181[0], 4);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.682f, 38.8624f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
				if (!func_3(Local_1070[10 /*10*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 0.8571f);
				}
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.682f, 38.8624f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
			if (!func_3(Local_1070[10 /*10*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 0.8571f);
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1065353216);
		uParam0->f_6 = 6;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	GlobalFunc_7629();
	if (uParam0->f_6 == 0)
	{
		if (iLocal_1039 == 0 || iLocal_1039 == -1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]);
				if ((VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
					uParam0->f_6 = 1;
				}
				else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
					uParam0->f_6 = 1;
				}
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
				uParam0->f_6 = 1;
			}
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
			uParam0->f_6 = 1;
		}
	}
	STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	switch (uParam0->f_6)
	{
		case 0:
			bLocal_260 = false;
			Local_1737.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(25.25779f, 3600.882f, 28.991f, 113.0328f, 3570.979f, 52.4848f, 61.25f, 0, 0, 0, 0, 0);
			if (GlobalFunc_1695(59.2455f, 3609.421f, 40.7427f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 180f)
			{
				SYSTEM::SETTIMERA(0);
				STREAMING::SET_SRL_TIME(0f);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 52.9476f, 3616.587f, 39.7652f, 7.6593f, 0.0986f, -144.2271f, 6000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 56.0832f, 3615.251f, 39.9863f, 2.4213f, 0.0595f, -149.8007f, 6000, 3, 2);
				CAM::SET_CAM_FOV(Local_1737.f_4, 30f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD("trev3_trL", 0, &Var1);
					ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], Var1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 73f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1181[0], 12f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], "trev3_trL", 786468, 0, 0, -1, -1082130432, 0, 1073741824);
				}
			}
			else
			{
				SYSTEM::SETTIMERA(6000);
				STREAMING::SET_SRL_TIME(6000f);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 64.0716f, 3612.843f, 41.0038f, -1.3547f, 0f, 147.7515f, 6000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 60.8387f, 3613.255f, 39.9549f, 3.0742f, 0f, 155.9106f, 6000, 3, 2);
				CAM::SET_CAM_FOV(Local_1737.f_4, 40f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD("trev3_trR", 0, &Var4);
					ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], Var4, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 254f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1181[0], 12f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], "trev3_trR", 786468, 0, 0, -1, -1082130432, 0, 1073741824);
				}
			}
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_1737.f_4, 2);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
			CAM::SHAKE_CAM(Local_1737.f_4, "Hand_shake", 0.3f);
			CAM::SET_CAM_ACTIVE(Local_1737.f_4, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			if (CAM::IS_SCREEN_FADED_OUT() && bLocal_260 == 0)
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			func_270("TRV3_START", 1, "TRV3_ALERTED");
			AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
			uParam0->f_7 = SYSTEM::TIMERA() + 6000;
			uParam0->f_6 = 1;
			break;
		
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0) && SYSTEM::TIMERA() > uParam0->f_7)
			{
				CAM::DESTROY_ALL_CAMS(0);
				if (!CAM::DOES_CAM_EXIST(Local_1737.f_4))
				{
					Local_1737.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if ((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]))) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
					{
						uParam0->f_9 = ENTITY::GET_ENTITY_SPEED(iLocal_1181[0]);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1181[0], 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1181[0], 0);
					}
				}
				if (iLocal_1039 == -1)
				{
					iLocal_1039 = 0;
				}
				switch (iLocal_1039)
				{
					case 0:
						SYSTEM::SETTIMERA(12000);
						STREAMING::SET_SRL_TIME(12000f);
						CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 67.9004f, 3636.959f, 43.3989f, -1.8034f, 0f, 9.4512f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 64.805f, 3638.78f, 45.6303f, -3.6109f, 0f, 12.5594f, 6000, 3, 2);
						CAM::SET_CAM_FOV(Local_1737.f_4, 47.8f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_1737.f_4, 3);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if ((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], 59.0078f, 3604.284f, 38.8316f, 10f, 0, 0, 786469, 3f, 3f);
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1181[0], 4);
								VEHICLE::SET_VEHICLE_SIREN(iLocal_1181[0], 0);
							}
						}
						uParam0->f_7 = SYSTEM::TIMERA() + 7000;
						break;
					
					case 1:
						SYSTEM::SETTIMERA(19000);
						STREAMING::SET_SRL_TIME(19000f);
						CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 142.7424f, 3728.25f, 44.4219f, -1.2115f, 0f, 105.4402f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 142.0027f, 3728.046f, 47.1392f, -1.2115f, 0f, 107.902f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_1737.f_4, 50f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_1737.f_4, 3);
						uParam0->f_7 = SYSTEM::TIMERA() + 5000;
						break;
					
					case 2:
						SYSTEM::SETTIMERA(24000);
						STREAMING::SET_SRL_TIME(24000f);
						CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 83.0859f, 3796.384f, 45.6352f, -3.6228f, 0f, 178.2066f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 83.9047f, 3795.447f, 49.5695f, -3.6228f, 0f, 173.1413f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_1737.f_4, 50f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_1737.f_4, 3);
						uParam0->f_7 = SYSTEM::TIMERA() + 5000;
						break;
				}
				CAM::SET_CAM_ACTIVE(Local_1737.f_4, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				Local_1737 = GlobalFunc_7719();
				if (iLocal_264 == 1 || ((iLocal_264 == 0 && CLOCK::GET_CLOCK_HOURS() < 21) && CLOCK::GET_CLOCK_HOURS() > 6))
				{
					iLocal_264 = 1;
					uLocal_265 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(uLocal_265, "TIME_LAPSE_MASTER", 0, 1);
					AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
				}
				func_329(2, 39, 1);
				uParam0->f_6 = 2;
			}
			break;
		
		case 2:
			if ((uParam0->f_7 - SYSTEM::TIMERA()) < 7000)
			{
				if (iLocal_264 == 1 || ((iLocal_264 == 0 && CLOCK::GET_CLOCK_HOURS() < 21) && CLOCK::GET_CLOCK_HOURS() > 6))
				{
					iLocal_264 = 1;
					GlobalFunc_9196(22, 0, "", "", &Local_1737, -1082130432, 0, 1, 1065353216);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (SYSTEM::TIMERA() > uParam0->f_7)
			{
				SYSTEM::SETTIMERA(29000);
				STREAMING::SET_SRL_TIME(29000f);
				AUDIO::STOP_SOUND(iLocal_265);
				AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				CAM::DESTROY_ALL_CAMS(0);
				Local_1737.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 52.5215f, 3704.127f, 39.5312f, 2.4381f, 0f, 172.2686f, 5700, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 52.6653f, 3703.888f, 39.5404f, 3.6794f, 0f, 172.1825f, 5700, 3, 2);
				CAM::SET_CAM_FOV(Local_1737.f_4, 29.66f);
				CAM::SHAKE_CAM(Local_1737.f_4, "Hand_shake", 0.8f);
				uParam0->f_6++;
			}
			break;
		
		case 3:
			if (func_293("TRV3_CHAT", "TRV3_CHAT_1", 3, Local_1070[3 /*10*/], "TREV3BIKER2", 4, Local_1070[4 /*10*/], "TRV3BIKER3", -1, 0, 0, 8))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1646))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1646, 0f);
				}
				uParam0->f_6++;
			}
			break;
		
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (CAM::GET_CAM_SPLINE_PHASE(Local_1737.f_4) >= 0.93f && !GlobalFunc_5664("TRV3_CHAT"))
			{
				SYSTEM::SETTIMERA(32295);
				STREAMING::SET_SRL_TIME(32295f);
				HUD::CLEAR_PRINTS();
				CAM::DESTROY_CAM(Local_1737.f_4, 0);
				Local_1737.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 99.6278f, 3750.408f, 39.9449f, 1.9937f, 0f, 176.8776f, 6500, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 99.6649f, 3751.087f, 39.9212f, 1.9937f, 0f, 176.8776f, 6500, 3, 2);
				CAM::SET_CAM_FOV(Local_1737.f_4, 37.16f);
				CAM::SHAKE_CAM(Local_1737.f_4, "Hand_shake", 0.8f);
				func_267(2);
				uParam0->f_6++;
			}
			break;
		
		case 5:
			if (func_293("TRV3_ST5", "TRV3_ST5_9", 4, Local_1070[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, 8))
			{
				uParam0->f_6 = 41;
			}
			break;
		
		case 41:
			if (func_293("TRV3_ST5", "TRV3_ST5_11", 4, Local_1070[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, 8))
			{
				uParam0->f_6 = 42;
			}
			break;
		
		case 42:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (CAM::GET_CAM_SPLINE_PHASE(Local_1737.f_4) >= 0.95f && !GlobalFunc_111())
			{
				uParam0->f_7 = 0;
				HUD::CLEAR_PRINTS();
				if (func_320(50))
				{
					if (func_333(iLocal_1181[0]))
					{
						if ((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]))) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1181[0], 0);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_1181[0], 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1181[0], uParam0->f_9);
						}
						else
						{
							SYSTEM::SETTIMERA(37500);
							STREAMING::SET_SRL_TIME(37500f);
							CAM::DESTROY_CAM(Local_1737.f_4, 0);
							Local_1737.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 57.3634f, 3603.913f, 42.2868f, 3.9263f, 0f, -3.3426f, 6500, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(Local_1737.f_4, 57.11f, 3602.365f, 40.878f, 2.4529f, 0f, -13.2129f, 3500, 3, 2);
							CAM::SET_CAM_FOV(Local_1737.f_4, 50f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_1737.f_4, 2);
							uParam0->f_7 = SYSTEM::TIMERA() + 3500;
							ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], 59.1493f, 3605.354f, 38.8528f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 358.6649f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1181[0]);
							uParam0->f_6 = 50;
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.682f, 38.8624f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
						if (!func_3(Local_1070[10 /*10*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 0.8571f);
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.682f, 38.8624f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
					if (!func_3(Local_1070[10 /*10*/]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 0.8571f);
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1065353216);
				if (uParam0->f_6 != 50)
				{
					uParam0->f_6 = 6;
				}
			}
			break;
		
		case 50:
			if (SYSTEM::TIMERA() > uParam0->f_7)
			{
				CAM::DESTROY_CAM(Local_1737.f_4, 0);
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (STREAMING::IS_STREAMVOL_ACTIVE())
				{
					STREAMING::STREAMVOL_DELETE(uLocal_1626);
				}
				func_267(3);
				CAM::DO_SCREEN_FADE_IN(1000);
				AUDIO::STOP_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				GlobalFunc_9140(&Local_1737, 0, 0, 2000, 1, 0, 0, 0);
				STREAMING::END_SRL();
				RECORDING::_0x81CBAE94390F9F89();
				uParam0->f_3 = 1;
			}
			break;
		
		case 6:
			if (GlobalFunc_1720() && !bLocal_260)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			AUDIO::STOP_SOUND(iLocal_265);
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			CAM::DESTROY_CAM(Local_1737.f_4, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, 0);
			func_267(4);
			CAM::DO_SCREEN_FADE_IN(1000);
			AUDIO::STOP_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			GlobalFunc_9140(&Local_1737, 0, 0, 2000, 1, 0, 0, 0);
			STREAMING::END_SRL();
			RECORDING::_0x81CBAE94390F9F89();
			STREAMING::_0xF8155A7F03DDFC8E(0);
			uParam0->f_3 = 1;
			break;
	}
}



int func_293(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x3511C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && func_3(iParam3))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam6) && func_3(iParam6))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam9) && func_3(iParam9))
	{
		return 1;
	}
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!GlobalFunc_111())
		{
			func_104(sParam0, iParam2, iParam5, iParam8, -1);
			func_295(iParam2, iParam3, sParam4);
			if (iParam5 != -1)
			{
				func_295(iParam5, iParam6, sParam7);
			}
			if (iParam8 != -1)
			{
				func_295(iParam8, iParam9, sParam10);
			}
			if (GlobalFunc_10630(&uLocal_1749, cLocal_1914, sParam0, sParam1, iParam11, 0, 0))
			{
				iLocal_1915 = 0;
				return 1;
			}
			else if (iLocal_1916 != MISC::GET_GAME_TIMER())
			{
				iLocal_1915++;
				iLocal_1916 = MISC::GET_GAME_TIMER();
				if (iLocal_1915 >= 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_295(int iParam0, int iParam1, char* sParam2)//Position - 0x35258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_2002)
	{
		if (iLocal_2002[iVar0] == iParam1)
		{
			GlobalFunc_200(&uLocal_1749, iVar0);
			iLocal_2002[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_2002[iParam0] != 0)
	{
		GlobalFunc_200(&uLocal_1749, iParam0);
	}
	GlobalFunc_173(&uLocal_1749, iParam0, iParam1, sParam2, 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sParam2, "WomanInTrailer"))
	{
		GlobalFunc_2964(&uLocal_1749, 7, 70.8631f, 3692.847f, 41.6392f);
	}
	iLocal_2002[iParam0] = iParam1;
}
























int func_319(int iParam0)//Position - 0x35DDC
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_735[0 /*6*/]);
	if (Local_735[iVar0 /*6*/] == iParam0)
	{
		if (Local_735[iVar0 /*6*/].f_1 && !Local_735[iVar0 /*6*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0)//Position - 0x35E1E
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_735[0 /*6*/]);
	if (iVar0 < 34 && iVar0 >= 0)
	{
		if (Local_735[iVar0 /*6*/] == iParam0)
		{
			if (Local_735[iVar0 /*6*/].f_1 && Local_735[iVar0 /*6*/].f_2)
			{
				return 1;
			}
		}
	}
	return 0;
}



void func_323(var uParam0, var uParam1, char* sParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x35F88
{
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0, uParam1, sParam2, sParam3, fParam4, fParam5, 4112, 1148846080);
}

int func_324(int iParam0, var uParam1)//Position - 0x35FA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0 /*24*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_325(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x35FD6
{
	(*uParam0)[iParam1 /*24*/] = uParam2;
	(uParam0[iParam1 /*24*/])->f_8 = iParam3;
	(uParam0[iParam1 /*24*/])->f_20 = iParam4;
	(uParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_47)
	{
		iLocal_47 = iParam1 + 1;
	}
}

void func_326(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6)//Position - 0x36011
{
	Local_1070[iParam0 /*10*/] = PED::CREATE_PED(26, iParam1, Param3, fParam6, 1, 1);
	if (iParam0 == 7)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*10*/], iLocal_1639);
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*10*/], iLocal_1627[iParam0]);
	}
	PED::SET_PED_AS_ENEMY(Local_1070[iParam0 /*10*/], 1);
	PED::SET_PED_SEEING_RANGE(Local_1070[iParam0 /*10*/], fLocal_1643);
	PED::SET_PED_HEARING_RANGE(Local_1070[iParam0 /*10*/], fLocal_1644);
	PED::SET_COMBAT_FLOAT(Local_1070[iParam0 /*10*/], 14, 3f);
	PED::SET_PED_ACCURACY(Local_1070[iParam0 /*10*/], 30);
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_1070[iParam0 /*10*/]);
	GlobalFunc_593(Local_1070[iParam0 /*10*/], 0);
	if (iParam2 != joaat("weapon_unarmed"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*10*/], iParam2, -1, 0, 1);
	}
}


void func_328(int iParam0, int iParam1)//Position - 0x36168
{
	if (Local_266[iParam0 /*6*/] == iParam1)
	{
		Local_266[iParam0 /*6*/].f_1 = 1;
	}
}

void func_329(int iParam0, int iParam1, int iParam2)//Position - 0x36186
{
	char cVar0[64];
	
	if (Local_402[iParam0 /*10*/] == iParam1)
	{
		Local_402[iParam0 /*10*/].f_6 = iParam2;
	}
	else if (Local_402[iParam0 /*10*/] != 0)
	{
		StringCopy(&cVar0, "Fail: SET_ACTION_FLAG() ", 64);
		StringIntConCat(&cVar0, iParam1, 64);
		StringConCat(&cVar0, " ", 64);
		StringIntConCat(&cVar0, Local_402[iParam0 /*10*/], 64);
	}
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x361D6
{
	Local_402[iParam0 /*10*/] = iParam1;
	Local_402[iParam0 /*10*/].f_1 = 1;
	Local_402[iParam0 /*10*/].f_2 = iParam3;
	Local_402[iParam0 /*10*/].f_3 = iParam2;
	Local_402[iParam0 /*10*/].f_6 = 0;
	Local_402[iParam0 /*10*/].f_4 = 0;
	Local_402[iParam0 /*10*/].f_7 = 0;
	Local_402[iParam0 /*10*/].f_8 = 0;
	Local_402[iParam0 /*10*/].f_9 = 0f;
}


void func_332()//Position - 0x362A5
{
	if (!func_3(Local_1070[10 /*10*/]))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1070[10 /*10*/], 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_1070[10 /*10*/], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[10 /*10*/], iLocal_1641);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_1070[10 /*10*/], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[10 /*10*/], 1);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_1070[10 /*10*/], 0);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_1070[10 /*10*/], 0);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1070[10 /*10*/]);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 3, 4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 4, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 8, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 9, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 10, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_1070[10 /*10*/], 11, 0, 0, 0);
	}
}

int func_333(int iParam0)//Position - 0x363C6
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}







int func_340(int iParam0, int iParam1)//Position - 0x36C44
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_735)
	{
		if (iParam0 == Local_735[iVar0 /*6*/])
		{
			if (iParam1 == 1)
			{
				Local_735[iVar0 /*6*/].f_2 = 1;
			}
			else
			{
				Local_735[iVar0 /*6*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}





















int func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x3AE18
{
	bLocal_733 = false;
	iLocal_734 = 0;
	if (func_362(&bLocal_733, &iLocal_734, iParam0, iParam1))
	{
		if (func_362(&bLocal_733, &iLocal_734, iParam2, iParam3))
		{
			if (func_362(&bLocal_733, &iLocal_734, iParam4, iParam5))
			{
				if (func_362(&bLocal_733, &iLocal_734, iParam6, iParam7))
				{
					if (func_362(&bLocal_733, &iLocal_734, iParam8, iParam9))
					{
					}
				}
			}
		}
	}
	if (bLocal_733)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3AE88
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_320(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_319(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_320(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_320(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_319(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_320(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_364(iParam3))
			{
				if (func_319(iParam3))
				{
					*iParam0 = 1;
				}
			}
			else if (func_320(iParam3))
			{
				func_363(iParam3);
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_363(int iParam0)//Position - 0x3AFDA
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_735[0 /*6*/]);
	if (Local_735[iVar0 /*6*/] == iParam0)
	{
		Local_735[iVar0 /*6*/].f_3 = 1;
	}
}

int func_364(int iParam0)//Position - 0x3B006
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_735[0 /*6*/]);
	if (Local_735[iVar0 /*6*/] == iParam0)
	{
		if (Local_735[iVar0 /*6*/].f_1 && Local_735[iVar0 /*6*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_365()//Position - 0x3B047
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_132(0, 90, 0, 0, 0, 1, 0, 1, 0);
	if (func_83(0, 90))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1070[10 /*10*/]))
		{
			PED::DELETE_PED(&(Local_1070[10 /*10*/]));
		}
		return 1;
	}
	return 0;
}

int func_366()//Position - 0x3B08A
{
	func_452(16, 48);
	func_402(0, 8, 0, 0, 1, 0, 1, 0);
	func_402(1, 9, 2, 37, 1, 0, 1, 0);
	func_402(2, 10, 2, 41, 4, 42, 1, 0);
	func_132(0, 43, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 53, 0, 0, 0, 1, 0, 1, 0);
	func_132(2, 67, 0, 2, 27, 1, 0, 1, 0);
	func_132(3, 68, 0, 2, 28, 1, 0, 1, 0);
	func_132(4, 69, 0, 0, 0, 1, 0, 1, 0);
	func_132(5, 70, 0, 0, 0, 1, 0, 1, 0);
	func_132(6, 71, 0, 0, 0, 1, 0, 1, 0);
	func_132(7, 73, 0, 2, 34, 5, 37, 1, 0);
	func_401(27, 74, 0, 8);
	func_400(8, 75, 27, 74, 0, 0);
	func_132(9, 76, 0, 2, 41, 4, 35, 1, 0);
	if (func_83(8, 75))
	{
		func_132(10, 72, 0, 2, 41, 1, 0, 1, 0);
		func_132(14, 80, 0, 2, 41, 4, 35, 1, 0);
		func_132(15, 81, 0, 2, 42, 1, 0, 1, 0);
		func_132(19, 83, 0, 2, 43, 4, 42, 1, 0);
		func_132(23, 87, 0, 0, 0, 1, 0, 1, 0);
	}
	func_132(11, 78, 0, 0, 0, 1, 0, 1, 0);
	func_132(12, 79, 0, 0, 0, 1, 0, 1, 0);
	func_132(13, 6, 0, 0, 0, 1, 0, 1, 0);
	func_132(16, 29, 1, 2, 35, 5, 41, 1, 0);
	func_132(17, 33, 0, 0, 0, 1, 0, 1, 0);
	func_132(18, 82, 0, 2, 29, 1, 0, 1, 0);
	func_132(20, 84, 0, 2, 29, 1, 0, 1, 0);
	func_132(21, 85, 0, 0, 0, 1, 0, 1, 0);
	func_132(22, 86, 0, 2, 37, 1, 0, 1, 0);
	func_132(25, 89, 0, 0, 0, 1, 0, 1, 0);
	func_132(26, 16, 0, 0, 0, 1, 0, 1, 0);
	func_132(28, 17, 0, 0, 0, 1, 0, 1, 0);
	func_384(0, 30, 2, 29, 1, 0, 1, 0, 1, 0, 1, 0);
	func_383(1, 31, 0, 30, 2, 18, 5, 31, 1, 0, 1, 0);
	func_384(3, 4, 2, 22, 5, 36, 5, 39, 1, 0, 1, 0);
	func_384(2, 5, 2, 23, 5, 36, 5, 41, 1, 0, 1, 0);
	func_384(4, 37, 2, 47, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(5, 32, 2, 37, 4, 18, 4, 19, 5, 41, 1, 0);
	func_384(6, 33, 2, 43, 4, 42, 1, 0, 1, 0, 1, 0);
	func_384(7, 34, 2, 40, 5, 20, 1, 0, 1, 0, 1, 0);
	func_384(8, 38, 2, 31, 6, 32, 1, 0, 1, 0, 1, 0);
	func_384(9, 35, 2, 41, 4, 35, 5, 20, 1, 0, 1, 0);
	func_382(10, 36, 14, 80, 3, 43);
	func_384(11, 21, 3, 28, 5, 29, 1, 0, 1, 0, 1, 0);
	func_384(12, 24, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	if (func_83(14, 80))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 1)
		{
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		if (func_381(6, 33) || func_320(44))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_1979))
			{
				HUD::REMOVE_BLIP(&uLocal_1979);
			}
			GlobalFunc_689();
			return 1;
		}
	}
	func_367(2, 0, 0, 1, 0);
	func_367(3, 0, 0, 1, 0);
	return 0;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3B3CC
{
	int iVar0;
	int iVar1;
	
	if (func_361(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 1:
				func_368(1);
				break;
			
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[10 /*10*/]))
				{
					if (func_3(Local_1070[10 /*10*/]))
					{
						func_368(2);
					}
				}
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[10 /*10*/]))
				{
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (!CUTSCENE::IS_CUTSCENE_PLAYING() && !CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (!GlobalFunc_490())
							{
								if (iLocal_1034 == 2)
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) > 100f)
									{
										func_368(3);
									}
								}
								else if (iLocal_1034 >= 7)
								{
									if (func_320(29))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) > 100f)
										{
											func_368(3);
										}
									}
									else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) > 350f)
									{
										func_368(3);
									}
								}
							}
						}
					}
				}
				break;
			
			case 5:
				iVar0 = 0;
				while (iVar0 < Local_1070)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iVar0 /*10*/]))
					{
						if (PED::IS_PED_INJURED(Local_1070[iVar0 /*10*/]))
						{
							if (Local_1070[iVar0 /*10*/] != Local_1070[10 /*10*/])
							{
								func_368(4);
							}
						}
						else if (PED::IS_PED_IN_COMBAT(Local_1070[iVar0 /*10*/], 0))
						{
							func_368(4);
						}
					}
					iVar0++;
				}
				break;
			
			case 6:
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) == 0)
					{
						func_368(6);
					}
				}
				else
				{
					func_368(6);
				}
				break;
			
			case 7:
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
				{
					iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"));
					if (iVar1 < func_286(11, 54))
					{
						func_368(7);
					}
				}
				else if (func_286(11, 54) > 0)
				{
					func_368(6);
				}
				break;
			
			case 8:
				func_368(8);
				break;
			}
	}
}

void func_368(int iParam0)//Position - 0x3B5D9
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "TRV3_F01";
			break;
		
		case 1:
			sVar0 = "TRV3_F03";
			break;
		
		case 2:
			sVar0 = "TRV3_15";
			break;
		
		case 3:
			sVar0 = "TRV3_F05";
			break;
		
		case 6:
			sVar0 = "TRV3_16";
			break;
		
		case 7:
			sVar0 = "TRV3_F06";
			break;
		
		case 8:
			sVar0 = "TRV3_F04";
			break;
		
		case 4:
			sVar0 = "TRV3_F07";
			break;
		
		default:
			sVar0 = "TRV3_F01";
			break;
	}
	GlobalFunc_10835(sVar0);
	func_267(12);
	while (!AUDIO::TRIGGER_MUSIC_EVENT("TRV3_FAIL"))
	{
		GlobalFunc_761(0);
	}
	while (!GlobalFunc_145())
	{
		GlobalFunc_761(0);
	}
	func_552(2);
}













int func_381(int iParam0, int iParam1)//Position - 0x3C5BE
{
	if (Local_266[iParam0 /*6*/] == iParam1)
	{
		if (Local_266[iParam0 /*6*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_266[iParam0 /*6*/] != 0)
	{
	}
	return 0;
}

void func_382(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3C5F1
{
	char cVar0[64];
	
	if (Local_266[iParam0 /*6*/] != iParam1)
	{
		Local_266[iParam0 /*6*/].f_1 = 0;
		Local_266[iParam0 /*6*/] = iParam1;
	}
	if (Local_402[iParam2 /*10*/] == iParam3)
	{
		if (!Local_266[iParam0 /*6*/].f_1)
		{
			if (Local_402[iParam2 /*10*/].f_3)
			{
				func_384(iParam0, iParam1, iParam4, iParam5, 1, 0, 1, 0, 1, 0, 1, 0);
			}
		}
	}
	else if (Local_402[iParam2 /*10*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "DIALOGUE_ON_ACTION():", 64);
		StringIntConCat(&cVar0, iParam2, 64);
	}
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3C675
{
	if (!Local_266[iParam0 /*6*/].f_1)
	{
		if (func_381(iParam2, iParam3))
		{
			func_384(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1, 0);
		}
	}
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3C6AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	float fVar9;
	
	if (Local_266[iParam0 /*6*/] != iParam1)
	{
		Local_266[iParam0 /*6*/].f_1 = 0;
		Local_266[iParam0 /*6*/] = iParam1;
	}
	if (!Local_266[iParam0 /*6*/].f_1)
	{
		if (func_361(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11))
		{
			if (!Local_266[iParam0 /*6*/].f_2)
			{
				Local_266[iParam0 /*6*/].f_2 = 1;
			}
			switch (Local_266[iParam0 /*6*/])
			{
				case 0:
					break;
				
				case 1:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_399("TRV3_INT", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							}
							break;
						
						case 1:
							if (GlobalFunc_5664("TRV3_INT") || (!GlobalFunc_5664("TRV3_INT") && MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_5664("TRV3_INT"))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 2:
					if (GlobalFunc_663("MORE_SEATS", 0, 0))
					{
						if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
						{
							GlobalFunc_5122(Local_1070[10 /*10*/], "NEED_A_VEHICLE", 3);
							Local_266[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_381(5, 8))
							{
								if (func_399("TRV3_DRV", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
									Local_266[iParam0 /*6*/].f_3 = 3;
								}
							}
							break;
						
						case 3:
							if (!GlobalFunc_5664("TRV3_DRV"))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
									if ((((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar1)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) || iVar1 == joaat("bodhi2")) || iVar1 == joaat("dune")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("peyote")) || iVar1 == joaat("tornado4")) || iVar1 == joaat("voltic")) || (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, 0) && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iVar0) == 2))
									{
										Local_266[iParam0 /*6*/].f_3 = 4;
									}
									else
									{
										Local_266[iParam0 /*6*/].f_3 = 5;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3 = 5;
								}
							}
							break;
						
						case 4:
							if (func_399("TRV3_WET", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3 = 6;
							}
							break;
						
						case 5:
							if (func_399("TRV3_NWET", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3 = 6;
							}
							break;
						
						case 6:
							if (!GlobalFunc_5664("TRV3_WET") && !GlobalFunc_5664("TRV3_NWET"))
							{
								if (func_399("TRV3_DRVb", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									func_396(2, 5, -1, -1, 1);
									Local_266[iParam0 /*6*/].f_3 = 7;
								}
							}
							break;
						
						case 7:
							if (!GlobalFunc_111())
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 4:
					if (!iLocal_261 && !iLocal_262)
					{
						if (Local_266[iParam0 /*6*/].f_4 < 3)
						{
							switch (iLocal_1034)
							{
								case 2:
									AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_DMAA", "Wade");
									GlobalFunc_619(1);
									iLocal_261 = 1;
									Local_266[iParam0 /*6*/].f_4++;
									break;
								
								case 7:
									AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_DNAA", "Wade");
									GlobalFunc_619(1);
									iLocal_261 = 1;
									Local_266[iParam0 /*6*/].f_4++;
									break;
								
								case 9:
									AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_DOAA", "Wade");
									GlobalFunc_619(1);
									iLocal_261 = 1;
									Local_266[iParam0 /*6*/].f_4++;
									break;
							}
						}
						else if (Local_266[iParam0 /*6*/].f_4 < 7)
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_FUAA", "Wade");
							GlobalFunc_619(1);
							iLocal_261 = 1;
							Local_266[iParam0 /*6*/].f_4++;
							if (Local_266[iParam0 /*6*/].f_4 == 7)
							{
								Local_266[iParam0 /*6*/].f_4 = 0;
							}
						}
					}
					break;
				
				case 5:
					if (!iLocal_261 && !iLocal_262)
					{
						if (Local_266[iParam0 /*6*/].f_5 == 1)
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_DLAA", "Wade");
						}
						else
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_FVAA", "Wade");
						}
						GlobalFunc_619(1);
						iLocal_262 = 1;
					}
					break;
				
				case 6:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (Local_266[iParam0 /*6*/].f_4 < 3)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
									if (iVar3 == joaat("bodhi2"))
									{
										AUDIO::INTERRUPT_CONVERSATION(Local_1070[10 /*10*/], "TRV3_DPAA", "Wade");
										Local_266[iParam0 /*6*/].f_4++;
										Local_266[iParam0 /*6*/].f_3++;
									}
									else
									{
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							else
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
						
						case 1:
							if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[10 /*10*/]))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[10 /*10*/]))
							{
								AUDIO::INTERRUPT_CONVERSATION(PLAYER::PLAYER_PED_ID(), "TRV3_DKAA", "Trevor");
								func_340(21, 0);
								func_394(21, 0);
								Local_266[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 7:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (GlobalFunc_111())
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							else
							{
								Local_266[iParam0 /*6*/].f_3 = 2;
							}
							iLocal_261 = 0;
							iLocal_262 = 0;
							GlobalFunc_619(0);
							GlobalFunc_5105();
							func_328(0, 3);
							func_328(1, 4);
							func_328(2, 5);
							Local_266[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_399("TRV3_stpcnv", 3, PLAYER::PLAYER_PED_ID(), "Trevor", 2, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							fVar4 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 57.51267f, 3688.248f, 42.2612f, 1);
							if (fVar4 < (117.25f + (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 5f)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 300.5994f, 3574.6f, 19.14899f, 723.4376f, 3619.607f, 58.07334f, 150.5f, 0, 1, 0) || GlobalFunc_2268())
								{
									if (CLOCK::GET_CLOCK_HOURS() < 21 && CLOCK::GET_CLOCK_HOURS() > 6)
									{
										iLocal_264 = 1;
									}
									else
									{
										iLocal_264 = 2;
									}
									Local_266[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 3:
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (iLocal_264 == 1)
								{
									if (func_399("TRV3_attr", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
									}
								}
								else if (func_399("TRV3_nowait", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 4:
							if (GlobalFunc_5664("TRV3_attr") || GlobalFunc_5664("TRV3_nowait"))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 5:
							if (!GlobalFunc_5664("TRV3_attr") && !GlobalFunc_5664("TRV3_nowait"))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 8:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!GlobalFunc_663("TRV3_1", 0, 0))
							{
								Local_266[iParam0 /*6*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								Local_266[iParam0 /*6*/].f_3 = 4;
							}
							else if (!func_333(iLocal_1181[0]))
							{
								if (func_399("TRV3_gocar", 3, PLAYER::PLAYER_PED_ID(), "Trevor", 2, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 3:
							if (func_399("TRV3_GONO", 3, PLAYER::PLAYER_PED_ID(), "Trevor", 2, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_399("TRV3_thisone", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							func_267(13);
							Local_266[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							Local_266[iParam0 /*6*/].f_4 = func_289(57);
							if (Local_266[iParam0 /*6*/].f_4 >= 0)
							{
								if (!func_3(Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_399("TRV3_BOMB2", 4, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "TREV3BIKER2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_1 = 1;
								}
							}
							else
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							func_267(14);
							Local_266[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_293("TRV3_SEES2", "TRV3_SEES2_1", 4, Local_1070[7 /*10*/], "TREV3BIKER2", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1500;
							}
							break;
						
						case 2:
							if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 13:
					if (iLocal_55 >= 9)
					{
						bLocal_72 = true;
						Local_266[iParam0 /*6*/].f_1 = 1;
					}
					else
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								bLocal_72 = false;
								iLocal_71 = 1;
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
									{
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
								{
									Local_266[iParam0 /*6*/].f_3 = 2;
								}
								break;
							
							case 1:
								if (!func_3(Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_399("TRV3_RE1", 4, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "Lost1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										bLocal_72 = true;
										Local_266[iParam0 /*6*/].f_3 = 3;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3 = 0;
								}
								break;
							
							case 2:
								if (!func_3(Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_399("TRV3_RE2", 5, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "Lost2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										bLocal_72 = true;
										Local_266[iParam0 /*6*/].f_3 = 3;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3 = 0;
								}
								break;
							
							case 3:
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
									{
										Local_266[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
								{
									Local_266[iParam0 /*6*/].f_3 = 5;
								}
								break;
							
							case 4:
								if (!func_3(Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_399("TRV3_RE3", 6, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "Lost3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3 = 6;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3 = 3;
								}
								break;
							
							case 5:
								if (!func_3(Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_399("TRV3_RE4", 7, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "Lost4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3 = 3;
								}
								break;
							
							case 6:
								if (GlobalFunc_5664("TRV3_RE3") || GlobalFunc_5664("TRV3_RE4"))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 7:
								if (!GlobalFunc_5664("TRV3_RE4"))
								{
									Local_266[iParam0 /*6*/].f_1 = 1;
									iLocal_71 = 0;
								}
								break;
							}
					}
					break;
				
				case 29:
					if (Local_266[iParam0 /*6*/].f_4 == 0)
					{
						if (func_399("TRV3_TRK", 3, Local_1070[10 /*10*/], "WADE", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, 8))
						{
							func_340(81, 0);
							func_394(81, 5);
							Local_266[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 25:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (Local_266[iParam0 /*6*/].f_4 < 4)
							{
								if (func_399("TRV3_WAD", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_340(81, 0);
									func_394(81, 5);
									Local_266[iParam0 /*6*/].f_4++;
								}
							}
							else
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 26:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_399("TRV3_FLEE", 3, Local_1070[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								func_340(81, 0);
								func_394(81, 0);
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (GlobalFunc_5664("TRV3_FLEE"))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_5664("TRV3_FLEE"))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 27:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (Local_266[iParam0 /*6*/].f_4 == 0)
							{
								if (func_399("TRV3_G", 3, Local_1070[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									func_340(81, 0);
									func_394(81, 0);
									Local_266[iParam0 /*6*/].f_4++;
								}
							}
							else if (Local_266[iParam0 /*6*/].f_4 == 1)
							{
								if (func_399("TRV3_GONE", 3, Local_1070[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									func_340(81, 0);
									func_394(81, 0);
									Local_266[iParam0 /*6*/].f_4++;
								}
							}
							else if (Local_266[iParam0 /*6*/].f_4 < 6)
							{
								if (func_399("TRV3_FLEEB", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_340(81, 0);
									func_394(81, 0);
									Local_266[iParam0 /*6*/].f_4++;
									Local_266[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 28:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TRV3_CHAA", "Trevor", 4);
							Local_266[iParam0 /*6*/].f_3++;
							break;
						
						case 2:
							if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
							{
								Local_266[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					if (func_286(5, 47) == 0)
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								Local_266[iParam0 /*6*/].f_3++;
								break;
							
							case 1:
								if (func_399("TRV3_BIKE", 3, Local_1070[1 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
									Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									if (func_399("TRV3_BIKE", 3, Local_1070[1 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
										Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
									}
								}
								break;
							
							case 3:
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									if (func_399("TRV3_BIKE", 3, Local_1070[1 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										func_340(59, 1);
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
								}
								break;
							}
					}
					break;
				
				case 15:
					if (func_286(5, 47) == 1)
					{
						if (!func_3(Local_1070[2 /*10*/]))
						{
							switch (Local_266[iParam0 /*6*/].f_3)
							{
								case 0:
									if (func_399("TRV3_GIRL1", 8, Local_1070[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3 = 100;
										Local_266[iParam0 /*6*/].f_4 = 0;
									}
									break;
								
								case 100:
									if (GlobalFunc_5664("TRV3_GIRL1"))
									{
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
									break;
								
								case 1:
									if ((MISC::IS_BIT_SET(Local_266[iParam0 /*6*/].f_4, 0) && MISC::IS_BIT_SET(Local_266[iParam0 /*6*/].f_4, 1)) && MISC::IS_BIT_SET(Local_266[iParam0 /*6*/].f_4, 2))
									{
										func_340(60, 1);
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1645))
									{
										if (!MISC::IS_BIT_SET(Local_266[iParam0 /*6*/].f_4, 0))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645) > 0.226f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645) < 0.26f)
											{
												Local_266[iParam0 /*6*/].f_3 = 2;
											}
										}
										if (!MISC::IS_BIT_SET(Local_266[iParam0 /*6*/].f_4, 1))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645) > 0.487f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645) < 0.52f)
											{
												Local_266[iParam0 /*6*/].f_3 = 3;
											}
										}
										if (!MISC::IS_BIT_SET(Local_266[iParam0 /*6*/].f_4, 2))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645) > 0.677f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1645) < 0.71f)
											{
												Local_266[iParam0 /*6*/].f_3 = 4;
											}
										}
									}
									break;
								
								case 2:
									if (func_399("TRV3_GIRL2", 8, Local_1070[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										MISC::SET_BIT(&(Local_266[iParam0 /*6*/].f_4), 0);
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
									break;
								
								case 3:
									if (func_399("TRV3_GIRL3", 8, Local_1070[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										MISC::SET_BIT(&(Local_266[iParam0 /*6*/].f_4), 1);
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
									break;
								
								case 4:
									if (func_399("TRV3_GIRL4", 8, Local_1070[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										MISC::SET_BIT(&(Local_266[iParam0 /*6*/].f_4), 2);
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
									break;
							}
						}
						else if (!GlobalFunc_111())
						{
							if (Local_266[iParam0 /*6*/].f_3 < 100)
							{
								Local_266[iParam0 /*6*/].f_3 = 100;
								Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1500;
							}
							if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
							{
								if (func_399("TRV3_WMN", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_1 = 1;
									func_340(60, 1);
								}
							}
						}
					}
					break;
				
				case 16:
					if (func_286(5, 47) == 2)
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_388("TRV3_CHAT", "TRV3_CHAT_3", 3, Local_1070[3 /*10*/], "TREV3BIKER2", 4, Local_1070[4 /*10*/], "TRV3BIKER3", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 1:
								if (func_399("TRV3_DV1", 6, Local_1070[3 /*10*/], "TRV3BIKER2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_340(61, 1);
								}
								break;
							
							case 2:
								if (!GlobalFunc_5664("TRV3_DV1"))
								{
									func_340(61, 1);
									Local_266[iParam0 /*6*/].f_1 = 1;
								}
								break;
							}
					}
					break;
				
				case 17:
					if (func_286(5, 47) == 3)
					{
						if (func_399("TRV3_IG4", 3, Local_1070[8 /*10*/], "TREV3BIKER3", 4, Local_1070[9 /*10*/], "TRV3_BIKER4", -1, 0, 0, -1, 0, 0, 8))
						{
							func_340(62, 1);
							Local_266[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 18:
					if (func_286(5, 47) == 4)
					{
						if (!func_3(Local_1070[5 /*10*/]) && !func_3(Local_1070[6 /*10*/]))
						{
							switch (Local_266[iParam0 /*6*/].f_3)
							{
								case 0:
									if (func_399("TRV3_IG5", 1, Local_1070[5 /*10*/], "TRV3_BIKER1", 2, Local_1070[6 /*10*/], "TREV3BIKER2", 3, Local_1070[7 /*10*/], "TREV3BIKER3", -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
									}
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[5 /*10*/], 242628503) == 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_1070[6 /*10*/], 242628503) == 1)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[5 /*10*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
												Local_266[iParam0 /*6*/].f_3 = 2;
											}
											else
											{
												AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[6 /*10*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
												Local_266[iParam0 /*6*/].f_3 = 3;
											}
										}
									}
									break;
								
								case 2:
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[5 /*10*/]))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[6 /*10*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
										Local_266[iParam0 /*6*/].f_3 = 4;
									}
									break;
								
								case 3:
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[6 /*10*/]))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[5 /*10*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
										Local_266[iParam0 /*6*/].f_3 = 4;
									}
									break;
								
								case 4:
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[5 /*10*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[6 /*10*/]))
									{
										Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 9000;
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
									break;
								}
							}
					}
					break;
				
				case 19:
					if (func_286(5, 47) == 5)
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_399("TRV3_ST5", 4, Local_1070[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 1:
								if (GlobalFunc_5664("TRV3_ST5"))
								{
									cLocal_1931 = { GlobalFunc_514() };
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 2:
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1931))
								{
									if (func_388("TRV3_ST5", &cLocal_1931, 4, Local_1070[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										StringCopy(&cLocal_1931, "", 24);
										Local_266[iParam0 /*6*/].f_3 = 1;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_1 = 1;
									func_340(64, 1);
								}
								break;
							}
					}
					break;
				
				case 20:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
							Local_266[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
							{
								if (HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (func_399("TRV3_GUN", 2, Local_1070[10 /*10*/], "WADE", 3, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) < 6f)
								{
									if (func_399("TRV3_WAI", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
						
						case 3:
							if (func_399("TRV3_WAIW", 3, Local_1070[10 /*10*/], "WADE", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 21:
					if (iLocal_1034 == 4 || iLocal_1034 == 7)
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								iLocal_1949 = 9;
								iLocal_1950 = 6;
								iLocal_1951 = 5;
								iLocal_1952 = 5;
								Local_266[iParam0 /*6*/].f_3++;
								break;
							
							case 1:
								if ((((iLocal_1949 + iLocal_1950) + iLocal_1951) + iLocal_1952) > 0)
								{
									iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, (((iLocal_1949 + iLocal_1950) + iLocal_1951) + iLocal_1952));
									if (iVar5 < iLocal_1949)
									{
										iLocal_1949 = (iLocal_1949 - 1);
										Local_266[iParam0 /*6*/].f_3 = 2;
									}
									else if (iVar5 < (iLocal_1949 + iLocal_1950))
									{
										iLocal_1950 = (iLocal_1950 - 1);
										Local_266[iParam0 /*6*/].f_3 = 3;
									}
									else if (iVar5 < ((iLocal_1949 + iLocal_1950) + iLocal_1951))
									{
										iLocal_1951 = (iLocal_1951 - 1);
										Local_266[iParam0 /*6*/].f_3 = 4;
									}
									else
									{
										iLocal_1952 = (iLocal_1952 - 1);
										Local_266[iParam0 /*6*/].f_3 = 5;
									}
									if (iLocal_1949 < 0)
									{
										iLocal_1949 = 0;
									}
									if (iLocal_1950 < 0)
									{
										iLocal_1950 = 0;
									}
									if (iLocal_1951 < 0)
									{
										iLocal_1951 = 0;
									}
									if (iLocal_1952 < 0)
									{
										iLocal_1952 = 0;
									}
								}
								break;
							
							case 2:
								if (func_399("TRV3_ATT2", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3 = 6;
								}
								break;
							
							case 3:
								if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
								{
									if (func_399("TRV3_ATTACK", 3, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "TREV3BIKER3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3 = 6;
									}
								}
								break;
							
							case 4:
								if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
								{
									if (func_399("TRV3_ATTACK2", 4, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "TREV3BIKER2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3 = 6;
									}
								}
								break;
							
							case 5:
								if (func_392(&(Local_266[iParam0 /*6*/].f_4)))
								{
									if (func_399("TRV3_ATTACK3", 5, Local_1070[Local_266[iParam0 /*6*/].f_4 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3 = 6;
									}
								}
								break;
							
							case 6:
								Local_266[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
								Local_266[iParam0 /*6*/].f_3 = 7;
								break;
							
							case 7:
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									Local_266[iParam0 /*6*/].f_3 = 1;
								}
								break;
							}
					}
					break;
				
				case 22:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_399("TRV3_BM1", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								func_340(70, 0);
							}
							break;
						
						case 1:
							if (func_399("TRV3_BM2", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								func_340(70, 0);
							}
							break;
						
						case 2:
							if (func_399("TRV3_BM3", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								func_340(70, 0);
							}
							break;
						
						case 3:
							if (func_399("TRV3_BM4", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								func_340(70, 0);
							}
							break;
						
						case 4:
							if (func_399("TRV3_BM5", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
								func_340(70, 0);
							}
							break;
					}
					break;
				
				case 23:
					if (func_399("TRV3_GUN", 3, PLAYER::PLAYER_PED_ID(), "TREVOR", 2, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_266[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (iLocal_1034 == 7 && func_320(18))
					{
						Local_266[iParam0 /*6*/].f_1 = 1;
					}
					if (bLocal_1650)
					{
						if (iLocal_1034 == 4 || (iLocal_1034 == 7 && bLocal_1033 == 1))
						{
							if (func_399("TRV3_CNT", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
						}
					}
					break;
				
				case 30:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							bLocal_72 = false;
							if (func_399("TRV3_RTN", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								RECORDING::_0x293220DA1B46CEBC(9f, 6f, 4);
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_399("TRV3_DEALT", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 31:
					if (func_320(36))
					{
						Local_266[iParam0 /*6*/].f_1 = 1;
					}
					else
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_399("TRV3_DR2", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3 = 102;
								}
								break;
							
							case 102:
								if (!GlobalFunc_111())
								{
									Local_266[iParam0 /*6*/].f_3 = 1;
								}
								break;
							
							case 1:
								if (func_320(30))
								{
									iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar6)))
									{
										if (func_399("TRV3_DR3", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_266[iParam0 /*6*/].f_3++;
											Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
										}
									}
									else if (func_399("TRV3_DR4", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
										Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
									}
								}
								else
								{
									Local_266[iParam0 /*6*/].f_3++;
									Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
								}
								break;
							
							case 2:
								if (!GlobalFunc_111())
								{
									Local_266[iParam0 /*6*/].f_3++;
									Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							
							case 3:
								if (GlobalFunc_5664("TRV3_DR3") || GlobalFunc_5664("TRV3_DR2"))
								{
									Local_266[iParam0 /*6*/].f_3 = 2;
								}
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									if (func_399("TRV3_GET", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_3++;
									}
								}
								break;
							
							case 4:
								if (!GlobalFunc_111())
								{
									if (func_399("TRV3_GET2", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										func_340(45, 1);
										Local_266[iParam0 /*6*/].f_3++;
									}
								}
								break;
							}
					}
					break;
				
				case 32:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("TRV3_2", 0, 0))
							{
								iLocal_261 = 0;
								iLocal_262 = 0;
								GlobalFunc_619(0);
								GlobalFunc_5105();
								if (iLocal_1034 == 2)
								{
									func_328(0, 3);
								}
								Local_266[iParam0 /*6*/].f_3 = 1000;
							}
							break;
						
						case 1000:
							if (func_399("TRV3_AR2", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3 = 1001;
							}
							break;
						
						case 1001:
							if (func_399("TRV3_GO", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
								Local_266[iParam0 /*6*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (func_319(45))
							{
								if (func_399("TRV3_BAN3c", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
							}
							else if (func_399("TRV3_BAN3", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 3:
							if (func_399("TRV3_BAN3b", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
					}
					break;
				
				case 33:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_388("TRV3_DRI", "TRV3_DRI_2", 4, Local_1070[10 /*10*/], "Wade", 3, 0, "FLOYD", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (GlobalFunc_5664("TRV3_DRI"))
							{
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_5664("TRV3_DRI"))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 38:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								iLocal_261 = 0;
								iLocal_262 = 0;
								GlobalFunc_619(0);
								GlobalFunc_5105();
								func_328(1, 31);
								Local_266[iParam0 /*6*/].f_3 = 2;
								break;
							
							case 1:
								if (func_399("TRV3_stpcnv", 3, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 2:
								if (!func_3(Local_1070[10 /*10*/]))
								{
									if (GlobalFunc_713(Local_1070[10 /*10*/], -1157.853f, 934.0715f, 197.0163f, 1) > 150f)
									{
										Local_266[iParam0 /*6*/].f_3 = 3;
									}
									else
									{
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
								}
								break;
							
							case 3:
								if (func_399("TRV3_here", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3 = 4;
								}
								break;
							
							case 4:
								if (func_399("TRV3_there", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_256(3, 4, 1, 0);
									RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
									Local_266[iParam0 /*6*/].f_3 = 5;
									Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
								}
								break;
							
							case 5:
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									if (func_399("TRV3_BAN3a", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
								}
								break;
							}
					}
					break;
				
				case 35:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!GlobalFunc_5664("TRV3_END"))
							{
								func_267(0);
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_285(14, 80) > 0)
							{
								if (func_399("TRV3_runs", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 36:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_399("TRV3_calls", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								Local_266[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
							{
								if (func_399("TRV3_LI", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
									Local_266[iParam0 /*6*/].f_5++;
									if (Local_266[iParam0 /*6*/].f_5 >= 3)
									{
										Local_266[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 37:
					switch (Local_266[iParam0 /*6*/].f_3)
					{
						case 0:
							func_267(188);
							GlobalFunc_619(0);
							Local_266[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_399("TRV3_DRI_LI", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_266[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						switch (Local_266[iParam0 /*6*/].f_3)
						{
							case 0:
								GlobalFunc_5105();
								func_328(5, 32);
								Local_266[iParam0 /*6*/].f_3++;
								break;
							
							case 1:
								if (func_399("TRV3_nerF", 3, Local_1070[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_266[iParam0 /*6*/].f_3++;
									Local_266[iParam0 /*6*/].f_4 = 1000;
								}
								break;
							
							case 2:
								if (!GlobalFunc_111())
								{
									func_295(2, Local_1070[10 /*10*/], "Wade");
									Local_266[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 3:
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (GlobalFunc_713(Local_1070[10 /*10*/], -1152.782f, -1523.988f, 3.5198f, 1) < 40f)
									{
										GlobalFunc_5105();
										Local_266[iParam0 /*6*/].f_3++;
									}
									else
									{
										PATHFIND::GENERATE_DIRECTIONS_TO_COORD(-1152.782f, -1523.988f, 3.5198f, 0, &iVar8, &uVar7, &fVar9);
										fLocal_1036 = fLocal_1036;
										iLocal_1037 = iLocal_1037;
										switch (iVar8)
										{
											case 0:
												iLocal_1041 = 0;
												break;
											
											case 1:
												if (iLocal_1041 != 1)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 1;
												}
												break;
											
											case 2:
												iLocal_1041 = 0;
												break;
											
											case 3:
												if (iLocal_1041 != 3)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirL", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 3;
												}
												break;
											
											case 4:
												if (iLocal_1041 != 4)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirR", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 4;
												}
												break;
											
											case 6:
												if (iLocal_1041 != 1)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 1;
												}
												break;
											
											case 7:
												if (iLocal_1041 != 1)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 1;
												}
												break;
											
											case 8:
												if (iLocal_1041 != 1)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 1;
												}
												break;
											
											case 5:
												if (iLocal_1041 != 5)
												{
													GlobalFunc_5105();
												}
												if (GlobalFunc_10691(&uLocal_1749, cLocal_1914, "TRV3_dirS", 7, 0, 0, 0, 0))
												{
													iLocal_1041 = 5;
												}
												break;
										}
										if (func_333(iLocal_1181[0]))
										{
											if (iVar8 != 0)
											{
												if (((((MISC::ABSF((fVar9 - fLocal_1036)) > MISC::ABSF((ENTITY::GET_ENTITY_SPEED(iLocal_1181[0]) + 3f)) || iVar8 != iLocal_1038) || iVar8 == 1) || iVar8 == 8) || iVar8 == 6) || iVar8 == 7)
												{
													iLocal_1037 = 1;
												}
												if (iLocal_1037)
												{
													if (((fVar9 < 50f || (fVar9 / ENTITY::GET_ENTITY_SPEED(iLocal_1181[0])) < 5f) && (fVar9 / ENTITY::GET_ENTITY_SPEED(iLocal_1181[0])) > 1f) || iVar8 == 1)
													{
														switch (iVar8)
														{
															case 0:
																break;
															
															case 1:
																break;
															
															case 2:
																break;
															
															case 3:
																break;
															
															case 4:
																break;
															
															case 6:
																break;
															
															case 7:
																break;
															
															case 8:
																break;
															
															case 5:
																break;
														}
														if (((iVar8 == 1 || iVar8 == 8) || iVar8 == 6) || iVar8 == 7)
														{
															if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
															{
																if (iLocal_1041 == 1)
																{
																	GlobalFunc_2207();
																	iLocal_1041 = 0;
																	iLocal_1037 = 0;
																	Local_266[iParam0 /*6*/].f_3 = 11;
																	Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
																}
															}
															else
															{
																iLocal_1037 = 0;
															}
														}
														else if (iLocal_1041 != 0)
														{
															if (iLocal_1041 == iVar8)
															{
																GlobalFunc_2207();
																iLocal_1041 = 0;
																iLocal_1037 = 0;
																Local_266[iParam0 /*6*/].f_3 = 10;
																Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
															}
														}
													}
												}
												fLocal_1036 = fVar9;
												iLocal_1038 = iVar8;
											}
										}
									}
								}
								break;
							
							case 10:
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									Local_266[iParam0 /*6*/].f_3 = 3;
								}
								break;
							
							case 11:
								if (MISC::GET_GAME_TIMER() > Local_266[iParam0 /*6*/].f_4)
								{
									Local_266[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 7500;
									Local_266[iParam0 /*6*/].f_3 = 3;
								}
								break;
								break;
							
							case 4:
								if (func_399("TRV3_end", 3, Local_1070[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
									Local_266[iParam0 /*6*/].f_1 = 1;
								}
								break;
							}
					}
					break;
				}
			}
	}
}




int func_388(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, char* sParam13, int iParam14)//Position - 0x3F59E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && func_3(iParam3))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam6) && func_3(iParam6))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam9) && func_3(iParam9))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam12) && func_3(iParam12))
	{
		return 1;
	}
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!GlobalFunc_111())
		{
			func_104(sParam0, iParam2, iParam5, iParam8, iParam11);
			func_295(iParam2, iParam3, sParam4);
			if (iParam5 != -1)
			{
				func_295(iParam5, iParam6, sParam7);
			}
			if (iParam8 != -1)
			{
				func_295(iParam8, iParam9, sParam10);
			}
			if (iParam11 != -1)
			{
				func_295(iParam11, iParam12, sParam13);
			}
			if (GlobalFunc_10626(&uLocal_1749, cLocal_1914, sParam0, sParam1, iParam14, 0, 0))
			{
				iLocal_1915 = 0;
				return 1;
			}
			else if (iLocal_1916 != MISC::GET_GAME_TIMER())
			{
				iLocal_1915++;
				iLocal_1916 = MISC::GET_GAME_TIMER();
				if (iLocal_1915 >= 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}




int func_392(var uParam0)//Position - 0x3F936
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	*uParam0 = -1;
	fVar2 = 150f;
	iVar0 = 0;
	while (iVar0 < Local_1070)
	{
		if (!func_3(Local_1070[iVar0 /*10*/]))
		{
			if (iVar0 != 10 && iVar0 != 7)
			{
				fVar1 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[iVar0 /*10*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*uParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*uParam0 != -1 && *uParam0 != 0)
	{
		return 1;
	}
	return 0;
}


int func_394(int iParam0, int iParam1)//Position - 0x3F9FA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_735)
	{
		if (iParam0 == Local_735[iVar0 /*6*/])
		{
			Local_735[iVar0 /*6*/].f_4 = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}


void func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3FA3F
{
	iParam1 = iParam1;
	if (iParam2 != -1)
	{
		Local_266[iParam0 /*6*/].f_3 = iParam2;
	}
	if (iParam3 != -1)
	{
		Local_266[iParam0 /*6*/].f_4 = iParam3;
	}
	if (iParam4 != -1)
	{
		Local_266[iParam0 /*6*/].f_5 = iParam4;
	}
}



int func_399(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x3FAB3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && func_3(iParam2))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && func_3(iParam5))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam8) && func_3(iParam8))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam11) && func_3(iParam11))
	{
		return 1;
	}
	if (!GlobalFunc_111())
	{
		Local_1917[0 /*3*/] = iParam1;
		Local_1917[0 /*3*/].f_1 = iParam2;
		Local_1917[0 /*3*/].f_2 = sParam3;
		Local_1917[1 /*3*/] = iParam4;
		Local_1917[1 /*3*/].f_1 = iParam5;
		Local_1917[1 /*3*/].f_2 = sParam6;
		Local_1917[2 /*3*/] = iParam7;
		Local_1917[2 /*3*/].f_1 = iParam8;
		Local_1917[2 /*3*/].f_2 = sParam9;
		Local_1917[3 /*3*/] = iParam10;
		Local_1917[3 /*3*/].f_1 = iParam11;
		Local_1917[3 /*3*/].f_2 = sParam12;
		func_104(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_295(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_295(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_295(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_295(iParam10, iParam11, sParam12);
		}
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (GlobalFunc_10618(&uLocal_1749, cLocal_1914, sParam0, iParam13, 1, 0, 0))
			{
				iLocal_1930 = 1;
				iLocal_1915 = 0;
				return 1;
			}
			else if (iLocal_1916 != MISC::GET_GAME_TIMER())
			{
				iLocal_1915++;
				iLocal_1916 = MISC::GET_GAME_TIMER();
				if (iLocal_1915 >= 10)
				{
					return 1;
				}
			}
		}
		else if (GlobalFunc_10618(&uLocal_1749, cLocal_1914, sParam0, iParam13, 0, 0, 0))
		{
			iLocal_1930 = 0;
			iLocal_1915 = 0;
			return 1;
		}
		else if (iLocal_1916 != MISC::GET_GAME_TIMER())
		{
			iLocal_1915++;
			iLocal_1916 = MISC::GET_GAME_TIMER();
			if (iLocal_1915 >= 10)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3FC7F
{
	if (Local_402[iParam0 /*10*/] != iParam1 || Local_402[iParam0 /*10*/].f_1 == 0)
	{
		Local_402[iParam0 /*10*/] = iParam1;
		Local_402[iParam0 /*10*/].f_1 = 1;
		Local_402[iParam0 /*10*/].f_2 = 0;
		Local_402[iParam0 /*10*/].f_3 = 0;
		Local_402[iParam0 /*10*/].f_6 = 0;
		Local_402[iParam0 /*10*/].f_4 = 0;
		Local_402[iParam0 /*10*/].f_7 = 0;
		Local_402[iParam0 /*10*/].f_8 = 0;
		Local_402[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_402[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_402[iParam2 /*10*/].f_3)
		{
			iParam3 = iParam3;
			func_132(iParam0, iParam1, 0, iParam4, iParam5, 1, 0, 1, 0);
		}
	}
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3FD2D
{
	if (Local_402[iParam0 /*10*/] != iParam1 || Local_402[iParam0 /*10*/].f_1 == 0)
	{
		Local_402[iParam0 /*10*/] = iParam1;
		Local_402[iParam0 /*10*/].f_1 = 1;
		Local_402[iParam0 /*10*/].f_2 = 0;
		Local_402[iParam0 /*10*/].f_3 = 0;
		Local_402[iParam0 /*10*/].f_6 = 0;
		Local_402[iParam0 /*10*/].f_4 = 0;
		Local_402[iParam0 /*10*/].f_7 = 0;
		Local_402[iParam0 /*10*/].f_8 = 0;
		Local_402[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_402[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_381[iParam2 /*4*/].f_1)
		{
			iParam3 = iParam3;
			func_132(iParam0, iParam1, 0, 0, 0, 1, 0, 1, 0);
		}
	}
}

void func_402(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3FDD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	
	if (Local_381[iParam0 /*4*/] != iParam1)
	{
		Local_381[iParam0 /*4*/].f_1 = 0;
		Local_381[iParam0 /*4*/] = iParam1;
	}
	if (!Local_381[iParam0 /*4*/].f_1)
	{
		if (func_361(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0, 1, 0))
		{
			switch (Local_381[iParam0 /*4*/])
			{
				case 1:
					switch (Local_381[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!MISC::IS_BIT_SET(Local_381[iParam0 /*4*/].f_3, 0))
							{
								if (func_333(iLocal_1181[0]))
								{
									GlobalFunc_744(&Local_1954, iLocal_1181[0]);
								}
								MISC::SET_BIT(&(Local_381[iParam0 /*4*/].f_3), 0);
							}
							if (func_412(&Local_1954, 59.1994f, 3603.538f, 38.8157f, Global_18, 1, Local_1070[10 /*10*/], 0, 0, "TRV3_1", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
								func_340(14, 1);
							}
							if (HUD::DOES_BLIP_EXIST(Local_1954.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_1954.f_5, 0);
								HUD::SET_BLIP_ROUTE(Local_1954.f_6, 0);
							}
							if (HUD::DOES_BLIP_EXIST(Local_1954.f_1[0]))
							{
								HUD::SET_BLIP_ALPHA(Local_1954.f_1[0], 0);
							}
							if (func_381(6, 1))
							{
								if (HUD::DOES_BLIP_EXIST(Local_1954.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_1954.f_5, 255);
									HUD::SET_BLIP_ROUTE(Local_1954.f_6, 1);
								}
								if (HUD::DOES_BLIP_EXIST(Local_1954.f_1[0]))
								{
									HUD::SET_BLIP_ALPHA(Local_1954.f_1[0], 255);
								}
								Local_381[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (func_412(&Local_1954, 59.1994f, 3603.538f, 38.8157f, Global_18, 1, Local_1070[10 /*10*/], 0, 0, "TRV3_1", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
							}
							break;
					}
					break;
				
				case 4:
					GlobalFunc_527("TRV3_3", 7500, 1);
					iLocal_1980 = 0;
					while (iLocal_1980 < Local_1651)
					{
						Local_1651[iLocal_1980 /*17*/].f_16 = GlobalFunc_5104(func_273(iLocal_1980), 0);
						iLocal_1980++;
					}
					Local_381[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 2:
					if (GlobalFunc_111())
					{
						iLocal_1930 = 1;
						GlobalFunc_5105();
					}
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_527("TRV3_12", 7500, 1);
						Local_381[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 3:
					switch (Local_381[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_159("TRV3_STAT1", -1);
							Local_381[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!GlobalFunc_74("TRV3_STAT1"))
							{
								GlobalFunc_159("TRV3_SNEAK", -1);
								Local_381[iParam0 /*4*/].f_2++;
							}
							break;
						
						default:
							iVar0 = joaat("weapon_unarmed");
							iLocal_1981 = 0;
							while (iLocal_1981 < Local_1070)
							{
								if (iLocal_1981 == 1)
								{
									if (((((iLocal_1981 != 8 && iLocal_1981 != 9) && iLocal_1981 != 3) && iLocal_1981 != 4) && iLocal_1981 != 5) && iLocal_1981 != 6)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iLocal_1981 /*10*/]))
										{
											if (!func_3(Local_1070[iLocal_1981 /*10*/]))
											{
												if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[iLocal_1981 /*10*/], 1) < 24f)
												{
													if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1981 /*10*/], 1), 1f))
													{
														if (((!func_405(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1981 /*10*/], 1), 65.2641f, 3679.68f, 38.9542f, 91.683f, 3725.06f, 38.6181f, 93.1412f, 3724.69f, 42.8097f, 65.3335f, 3679.76f, 41.6201f) && !func_405(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1981 /*10*/], 1), 65.2641f, 3679.68f, 38.9542f, 91.683f, 3725.06f, 38.6181f, 93.1412f, 3724.69f, 42.8097f, 65.3335f, 3679.76f, 41.6201f)) && !func_405(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1981 /*10*/], 1), 96.6733f, 3757.29f, 38.5727f, 97.1655f, 3758.33f, 42.81f, 90.7861f, 3740.87f, 42.8855f, 90.6463f, 3741.27f, 38.5212f)) && !func_405(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1981 /*10*/], 1), 55.5018f, 3699.92f, 38.7549f, 55.9722f, 3700.12f, 42.8396f, 57.5317f, 3688.18f, 42.249f, 57.6211f, 3687.91f, 38.7549f))
														{
															switch (Local_381[iParam0 /*4*/].f_2)
															{
																case 2:
																	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
																	{
																		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
																		{
																			if (iVar0 != joaat("weapon_unarmed"))
																			{
																				HUD::CLEAR_HELP(1);
																				GlobalFunc_159("TRV3_6a", -1);
																				Local_381[iParam0 /*4*/].f_2 = 3;
																				Local_381[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2500;
																			}
																			else
																			{
																				HUD::CLEAR_HELP(1);
																				GlobalFunc_159("TRV3_6", -1);
																				Local_381[iParam0 /*4*/].f_2 = 4;
																			}
																		}
																		else
																		{
																			HUD::CLEAR_HELP(1);
																			GlobalFunc_159("TRV3_6", -1);
																			Local_381[iParam0 /*4*/].f_2 = 4;
																		}
																	}
																	break;
																
																case 3:
																	if (GlobalFunc_74("TRV3_6a"))
																	{
																		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
																		{
																			if (iVar0 == joaat("weapon_unarmed"))
																			{
																				if (MISC::GET_GAME_TIMER() > Local_381[iParam0 /*4*/].f_3)
																				{
																					HUD::CLEAR_HELP(1);
																				}
																			}
																		}
																	}
																	if (!GlobalFunc_74("TRV3_6a"))
																	{
																		GlobalFunc_159("TRV3_6", -1);
																		Local_381[iParam0 /*4*/].f_2 = 4;
																	}
																	break;
																}
															}
														}
												}
												if (PED::WAS_PED_KILLED_BY_STEALTH(Local_1070[iLocal_1981 /*10*/]))
												{
													if (GlobalFunc_74("TRV3_6") || GlobalFunc_74("TRV3_6a"))
													{
														HUD::CLEAR_HELP(1);
													}
													Local_381[iParam0 /*4*/].f_1 = 1;
												}
											}
										}
									}
								}
								iLocal_1981++;
							}
							break;
					}
					break;
				
				case 5:
					iLocal_1981 = 0;
					while (iLocal_1981 < Local_1651)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1651[iLocal_1981 /*17*/].f_7[0 /*3*/], 1) < 25f)
						{
							iVar1 = joaat("weapon_unarmed");
							switch (Local_381[iParam0 /*4*/].f_2)
							{
								case 0:
									if (!PAD::IS_CONTROL_PRESSED(0, 37))
									{
										WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
										if (iVar1 == joaat("weapon_stickybomb"))
										{
											Local_381[iParam0 /*4*/].f_2++;
										}
										else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), -281028447);
											if (iVar2 != joaat("weapon_stickybomb"))
											{
												GlobalFunc_159("AM_H_MULTWEP", -1);
												Local_381[iParam0 /*4*/].f_2 = 100;
											}
											else
											{
												GlobalFunc_159("TRV3_5a", -1);
												Local_381[iParam0 /*4*/].f_2++;
												Local_381[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
											}
										}
									}
									break;
								
								case 100:
									iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), -281028447);
									if (iVar3 == joaat("weapon_stickybomb"))
									{
										HUD::CLEAR_HELP(1);
										GlobalFunc_159("TRV3_5a", -1);
										Local_381[iParam0 /*4*/].f_2 = 1;
										Local_381[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
									}
									break;
								
								case 1:
									WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
									if (iVar1 == joaat("weapon_stickybomb") && MISC::GET_GAME_TIMER() > Local_381[iParam0 /*4*/].f_3)
									{
										HUD::CLEAR_HELP(1);
										GlobalFunc_159("TRV3_5b", -1);
										Local_381[iParam0 /*4*/].f_2++;
									}
									break;
								
								case 2:
									if (func_320(70))
									{
										HUD::CLEAR_HELP(1);
									}
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_159("TRV3_7", -1);
										Local_381[iParam0 /*4*/].f_1 = 1;
									}
									break;
								}
						}
						iLocal_1981++;
					}
					break;
				
				case 6:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("TRV3_21", -1);
						Local_381[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 7:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("TRV3_4", -1);
						Local_381[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 8:
					switch (Local_381[iParam0 /*4*/].f_2)
					{
						case 0:
							HUD::CLEAR_PRINTS();
							if (!func_320(29))
							{
								uLocal_1979 = GlobalFunc_6783(Local_1070[10 /*10*/], 0, 0);
								GlobalFunc_527("TRV3_19", 7500, 1);
								if (!MISC::ARE_STRINGS_EQUAL(sLocal_2000, "TRV3_GET_TO_CAR_RT"))
								{
									func_270("TRV3_GET_TO_CAR", 0, "TRV3_EXPLOSIONS");
								}
							}
							Local_381[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_320(29))
							{
								HUD::CLEAR_PRINTS();
								Local_381[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
						case 3:
						case 4:
						case 5:
							if (HUD::DOES_BLIP_EXIST(uLocal_1979))
							{
								HUD::REMOVE_BLIP(&uLocal_1979);
							}
							if (func_83(7, 73))
							{
								if (func_412(&Local_1954, -1350.147f, 725.3141f, 185.3831f, 4f, 4f, 2f, 1, Local_1070[10 /*10*/], 0, 0, "TRV3_9", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
									Local_381[iParam0 /*4*/].f_2 = 8;
									Local_381[iParam0 /*4*/].f_1 = 1;
								}
							}
							else if (func_412(&Local_1954, -1350.147f, 725.3141f, 185.3831f, 6f, 6f, 2f, 1, Local_1070[10 /*10*/], 0, 0, "TRV3_9", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
								Local_381[iParam0 /*4*/].f_1 = 1;
							}
							if (Local_381[iParam0 /*4*/].f_2 == 2)
							{
								if (HUD::DOES_BLIP_EXIST(Local_1954.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_1954.f_5, 255);
									HUD::SET_BLIP_ROUTE(Local_1954.f_6, 0);
									HUD::CLEAR_GPS_MULTI_ROUTE();
									HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
									HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1161.393f, 968.5089f, 199.3427f);
									HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1350.147f, 725.3141f, 185.3831f);
									HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
									Local_381[iParam0 /*4*/].f_2 = 3;
								}
							}
							else if (Local_381[iParam0 /*4*/].f_2 == 3)
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								if (Var4.x < -957f && Var4.f_1 > 1939f)
								{
									HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
									HUD::SET_BLIP_ROUTE(Local_1954.f_6, 1);
									Local_381[iParam0 /*4*/].f_2 = 4;
								}
								if (!HUD::DOES_BLIP_EXIST(Local_1954.f_5))
								{
									if (Local_381[iParam0 /*4*/].f_3 == 0)
									{
										HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
										Local_381[iParam0 /*4*/].f_3 = 1;
									}
								}
								else if (Local_381[iParam0 /*4*/].f_3 == 1)
								{
									HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
									Local_381[iParam0 /*4*/].f_3 = 0;
								}
							}
							else if (Local_381[iParam0 /*4*/].f_2 == 4)
							{
								if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_1954.f_6))
								{
									HUD::CLEAR_GPS_MULTI_ROUTE();
									Local_381[iParam0 /*4*/].f_2 = 5;
								}
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_381[iParam0 /*4*/].f_2)
					{
						case 0:
							fVar7 = 3f;
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (func_333(iVar8))
								{
									fVar7 = (ENTITY::GET_ENTITY_SPEED(iVar8) * 0.4f);
									if (fVar7 < 5f)
									{
										fVar7 = 5f;
									}
								}
							}
							if (func_412(&Local_1954, -1154.89f, -1521.294f, 3.3201f, fVar7, fVar7, 2f, 1, Local_1070[10 /*10*/], 0, 0, "TRV3_2", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
								if (!MISC::IS_BIT_SET(Local_381[iParam0 /*4*/].f_3, 0))
								{
									MISC::SET_BIT(&(Local_381[iParam0 /*4*/].f_3), 0);
								}
								func_394(22, 100);
								func_340(22, 0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_340(46, 1);
								}
								Local_381[iParam0 /*4*/].f_1 = 1;
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_1979))
							{
								HUD::REMOVE_BLIP(&uLocal_1979);
							}
							break;
					}
					break;
				
				case 10:
					if (HUD::DOES_BLIP_EXIST(uLocal_1979))
					{
						HUD::REMOVE_BLIP(&uLocal_1979);
					}
					uLocal_1979 = GlobalFunc_6783(Local_1070[10 /*10*/], 0, 0);
					GlobalFunc_527("TRV3_20", 7500, 1);
					Local_381[iParam0 /*4*/].f_1 = 1;
					break;
				}
			}
	}
}



int func_405(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, struct<3> Param12, struct<3> Param15)//Position - 0x40AC4
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { GlobalFunc_277(Param9 - Param6, Param12 - Param6) };
	if (!GlobalFunc_105(Var3))
	{
		Var3 = { GlobalFunc_107(Var3) };
		if (func_408(&Var0, Param0, Param3, Var3, Param6))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var0, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, 1))
			{
				if (func_406(Var0, Param6, Param9, Param12))
				{
					return 1;
				}
			}
		}
		Var3 = { GlobalFunc_277(Param12 - Param6, Param15 - Param6) };
		Var3 = { GlobalFunc_107(Var3) };
		if (!GlobalFunc_105(Var3))
		{
			if (func_408(&Var0, Param0, Param3, Var3, Param6))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var0, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, 1))
				{
					if (func_406(Var0, Param6, Param15, Param12))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_406(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0x40BD5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	Var0 = { Param9 - Param3 };
	Var3 = { Param6 - Param3 };
	Var6 = { Param0 - Param3 };
	fVar9 = GlobalFunc_168(Var0, Var0);
	fVar10 = GlobalFunc_168(Var0, Var3);
	fVar11 = GlobalFunc_168(Var0, Var6);
	fVar12 = GlobalFunc_168(Var3, Var3);
	fVar13 = GlobalFunc_168(Var3, Var6);
	fVar14 = (1f / ((fVar9 * fVar12) - (fVar10 * fVar10)));
	fVar15 = (((fVar12 * fVar11) - (fVar10 * fVar13)) * fVar14);
	fVar16 = (((fVar9 * fVar13) - (fVar10 * fVar11)) * fVar14);
	if ((fVar15 >= 0f && fVar16 >= 0f) && (fVar15 + fVar16) < 1f)
	{
		return 1;
	}
	return 0;
}


int func_408(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10)//Position - 0x40CBB
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { Param4 - Param1 };
	Var3 = { Param1 - Param10 };
	fVar6 = GlobalFunc_168(Param7, Var0);
	fVar7 = -func_407(Param7, Var3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return 0;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { Param1 + Vector(fVar8, fVar8, fVar8) * Var0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return 0;
	}
	return 1;
}




bool func_412(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x40DA0
{
	return GlobalFunc_8572(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, uParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}








































void func_452(int iParam0, int iParam1)//Position - 0x433F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	
	iVar1 = (iParam1 - iParam0);
	if (Local_735[0 /*6*/] != iParam0 && Local_735[iVar1 /*6*/] != iParam1)
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < Local_735)
		{
			if (iVar2 <= iVar1)
			{
				Local_735[iVar2 /*6*/] = (iParam0 + iVar3);
				Local_735[iVar2 /*6*/].f_1 = 1;
				Local_735[iVar2 /*6*/].f_2 = 0;
				Local_735[iVar2 /*6*/].f_3 = 0;
				iVar3++;
			}
			else
			{
				Local_735[iVar2 /*6*/].f_1 = 0;
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_735)
	{
		if (Local_735[iVar0 /*6*/].f_1)
		{
			switch (Local_735[iVar0 /*6*/])
			{
				case 2:
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 3:
					break;
				
				case 18:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (func_333(iVar4) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_1070[10 /*10*/], iVar4, 1))
								{
									Local_735[iVar0 /*6*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 19:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) < 12f)
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1155.985f, 929.5417f, 197.1024f, 1) < 10f)
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 20:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 1:
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								Local_735[iVar0 /*6*/].f_2 = 0;
								Local_735[iVar0 /*6*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 22:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (func_320(19) && func_320(18))
							{
								if (iLocal_261)
								{
									iLocal_261 = 0;
									if (!iLocal_262)
									{
										GlobalFunc_619(0);
									}
								}
								Local_735[iVar0 /*6*/].f_2 = 0;
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 1:
							if (func_319(19) || func_319(18))
							{
								Local_735[iVar0 /*6*/].f_4 = 0;
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 23:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (func_320(20))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 1:
							if (func_319(20))
							{
								if (iLocal_262)
								{
									iLocal_262 = 0;
									if (!iLocal_261)
									{
										GlobalFunc_619(0);
									}
								}
								Local_735[iVar0 /*6*/].f_4 = 0;
								Local_735[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 21:
					if (func_333(iLocal_1181[0]) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_1181[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], 0) && PED::IS_PED_IN_VEHICLE(Local_1070[10 /*10*/], iLocal_1181[0], 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]) == joaat("bodhi2"))
							{
								switch (Local_735[iVar0 /*6*/].f_4)
								{
									case 0:
										Local_735[iVar0 /*6*/].f_5 = ENTITY::GET_ENTITY_HEALTH(iLocal_1181[0]);
										Local_735[iVar0 /*6*/].f_4++;
										break;
									
									case 1:
										if ((Local_735[iVar0 /*6*/].f_5 - ENTITY::GET_ENTITY_HEALTH(iLocal_1181[0])) > 250)
										{
											Local_735[iVar0 /*6*/].f_2 = 1;
											Local_735[iVar0 /*6*/].f_4++;
										}
										break;
									
									case 2:
										if (!Local_735[iVar0 /*6*/].f_2)
										{
											Local_735[iVar0 /*6*/].f_5 = ENTITY::GET_ENTITY_HEALTH(iLocal_1181[0]);
											Local_735[iVar0 /*6*/].f_4++;
										}
										break;
									
									case 3:
										if ((Local_735[iVar0 /*6*/].f_5 - ENTITY::GET_ENTITY_HEALTH(iLocal_1181[0])) > 250)
										{
											Local_735[iVar0 /*6*/].f_2 = 1;
											Local_735[iVar0 /*6*/].f_4++;
										}
										break;
									}
								}
							}
					}
					break;
				
				case 24:
					break;
				
				case 6:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 61.6662f, 3694.247f, 38.76491f, 1) < 155.375f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 7:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 51.8f, 3672.1f, 38.88f, 1) < 250f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 8:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 51.8f, 3672.1f, 38.88f, 0) < 500f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 11:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 51.8f, 3672.1f, 38.88f, 1) < 170f)
					{
						if ((((((((func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 143.76f, 3778.86f, 30.0781f, 108.956f, 3797.19f, 30.105f, 72.0823f, 3695.32f, 42.9907f) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), -51.7138f, 3748.37f, 30.412f, 72.0823f, 3695.32f, 42.9907f, -71.9234f, 3660.4f, 42.9586f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), -71.9234f, 3660.4f, 42.9586f, 72.0823f, 3695.32f, 42.9907f, -45.1569f, 3593.76f, 43.059f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), -45.1569f, 3593.76f, 43.059f, 72.0823f, 3695.32f, 42.9907f, -23.654f, 3575.95f, 52.4504f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), -23.654f, 3575.95f, 52.4504f, 72.0823f, 3695.32f, 42.9907f, 35.1416f, 3553.26f, 48.4446f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 72.0823f, 3695.32f, 42.9907f, 35.1416f, 3553.26f, 48.4446f, 88.2876f, 3541.29f, 44.1914f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 88.2876f, 3541.29f, 44.1914f, 72.0823f, 3695.32f, 42.9907f, 125.963f, 3540.97f, 38.0976f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 125.963f, 3540.97f, 38.0976f, 72.0823f, 3695.32f, 42.9907f, 144.039f, 3577.55f, 36.6136f)) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 144.039f, 3577.55f, 36.6136f, 72.0823f, 3695.32f, 42.9907f, 156.052f, 3619.7f, 32.0503f))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
						else if (func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 156.052f, 3619.7f, 32.0503f, 72.0823f, 3695.32f, 42.9907f, 168.361f, 3681.88f, 30.4938f) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 168.361f, 3681.88f, 30.4938f, 72.0823f, 3695.32f, 42.9907f, 143.76f, 3778.86f, 30.0781f))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
						else if (func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 108.956f, 3797.19f, 30.105f, 72.0823f, 3695.32f, 42.9907f, 38.4375f, 3806.55f, 30.4227f) || func_457(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(20f, 0f, 0f), 38.4375f, 3806.55f, 30.4227f, 72.0823f, 3695.32f, 42.9907f, -51.7138f, 3748.37f, 30.412f))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 12:
					if (func_83(19, 13))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 13:
					if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
					{
						switch (Local_735[iVar0 /*6*/].f_4)
						{
							case 0:
								if (GlobalFunc_2268() && func_455(Local_1070[10 /*10*/]))
								{
									Local_735[iVar0 /*6*/].f_4++;
									Local_735[iVar0 /*6*/].f_2 = 1;
									func_396(4, 7, 2, -1, -1);
								}
								break;
							
							case 1:
								if (CAM::IS_SCREEN_FADED_OUT() || (CAM::IS_SCREEN_FADING_IN() && func_320(10)))
								{
									if (Local_735[iVar0 /*6*/].f_5 == 0)
									{
										func_267(432);
										func_256(0, 3, 1, 0);
										func_256(1, 4, 1, 0);
										func_256(2, 5, 1, 0);
										func_256(5, 8, 1, 0);
										func_256(6, 1, 1, 0);
										Local_735[iVar0 /*6*/].f_5 = 1;
									}
								}
								if ((func_320(10) && func_381(4, 7)) || func_319(10))
								{
									if (!func_455(Local_1070[10 /*10*/]))
									{
										if (func_319(10))
										{
											func_396(4, 7, 0, -1, -1);
										}
										Local_735[iVar0 /*6*/].f_2 = 0;
										Local_735[iVar0 /*6*/].f_4 = 0;
									}
								}
								break;
							}
					}
					break;
				
				case 9:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (func_83(3, 9))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					else if (func_83(4, 10))
					{
						Local_735[iVar0 /*6*/].f_2 = 0;
					}
					break;
				
				case 10:
					fVar5 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 57.51267f, 3688.248f, 42.2612f, 1);
					if (fVar5 < (117.25f + (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 10f)))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 300.5994f, 3574.6f, 19.14899f, 723.4376f, 3619.607f, 58.07334f, 150.5f, 0, 1, 0))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 15:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (GlobalFunc_5664("TRV3_attr"))
							{
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 1:
							if (!GlobalFunc_5664("TRV3_attr"))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 17:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!HUD::DOES_BLIP_EXIST(Local_1954.f_1[0]))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 50:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_1181[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 55:
					if (iLocal_52)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					else
					{
						Local_735[iVar0 /*6*/].f_2 = 0;
					}
					break;
				
				case 56:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (!func_3(Local_1070[7 /*10*/]))
						{
							if (PED::IS_PED_RESPONDING_TO_EVENT(Local_1070[7 /*10*/], 1))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[7 /*10*/], iLocal_1642);
							}
						}
					}
					break;
				
				case 53:
					if (bLocal_48 || bLocal_51)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 77:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
							{
								if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) == 0)
								{
									Local_735[iVar0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
								}
							}
							break;
						
						default:
							if (MISC::GET_GAME_TIMER() > Local_735[iVar0 /*6*/].f_4)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 78:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[10 /*10*/], 1) < 10f)
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case joaat("mpsv_lp0_31"):
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 61.61f, 3685.7f, 38.86f, 1) > 183f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 80:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 61.61f, 3685.7f, 38.86f, 1) > 250f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 81:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (!func_320(78))
							{
								Local_735[iVar0 /*6*/].f_4++;
								Local_735[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 15000;
							}
							break;
						
						case 1:
							if (func_320(78))
							{
								if (MISC::GET_GAME_TIMER() > Local_735[iVar0 /*6*/].f_5 || func_320(53))
								{
									Local_735[iVar0 /*6*/].f_4++;
									Local_735[iVar0 /*6*/].f_2 = 1;
								}
							}
							break;
						
						case 5:
							if (!func_320(78))
							{
								Local_735[iVar0 /*6*/].f_4 = 0;
							}
							else if (func_320(74))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 54:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (func_381(0, 12))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
						if (bLocal_51 || bLocal_48)
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[5 /*10*/]))
						{
							if (func_3(Local_1070[5 /*10*/]))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[6 /*10*/]))
						{
							if (func_3(Local_1070[6 /*10*/]))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 57:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						iLocal_1980 = 0;
						while (iLocal_1980 < Local_1070)
						{
							if (!func_3(Local_1070[iLocal_1980 /*10*/]))
							{
								if (iLocal_1980 != 10 && iLocal_1980 != 7)
								{
									if (PED::IS_PED_RESPONDING_TO_EVENT(Local_1070[iLocal_1980 /*10*/], 123) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1980 /*10*/], 1) - Vector(-1.5f, 1f, 1f), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1980 /*10*/], 1) + Vector(-1.5f, 1f, 1f), joaat("weapon_stickybomb"), 0))
									{
										if (MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1980 /*10*/], 1) - Vector(-1.5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1980 /*10*/], 1) + Vector(-1.5f, 10f, 10f), joaat("weapon_stickybomb"), 0))
										{
											MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1980 /*10*/], 1) - Vector(-1.5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(Local_1070[iLocal_1980 /*10*/], 1) + Vector(-1.5f, 10f, 10f), joaat("weapon_stickybomb"), &Local_1982, 0);
											Local_735[iVar0 /*6*/].f_5 = iLocal_1980;
											Local_735[iVar0 /*6*/].f_2 = 1;
										}
									}
								}
							}
							iLocal_1980++;
						}
					}
					break;
				
				case 58:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (GlobalFunc_5664("TRV3_IG5"))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 65:
					Local_735[iVar0 /*6*/].f_2 = 1;
					if (Local_735[iVar0 /*6*/].f_4 == 0)
					{
						if (!func_392(&(Local_735[iVar0 /*6*/].f_5)))
						{
							Local_735[iVar0 /*6*/].f_2 = 0;
							Local_735[iVar0 /*6*/].f_4++;
						}
					}
					break;
				
				case 66:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (func_286(11, 54) == 5)
							{
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 1:
							if (func_286(11, 54) <= 2)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 67:
					if (func_83(11, 54))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 68:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (func_320(67) && func_319(73))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 69:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 47) && !PAD::IS_CONTROL_PRESSED(0, 37))
					{
						if (!GlobalFunc_160())
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 70:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							Local_735[iVar0 /*6*/].f_4++;
							break;
						
						case 1:
							if (func_286(11, 54) == Local_1651)
							{
								Local_735[iVar0 /*6*/].f_5 = func_286(11, 54);
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 2:
							if (func_286(11, 54) < Local_735[iVar0 /*6*/].f_5)
							{
								Local_735[iVar0 /*6*/].f_5 = func_286(11, 54);
								Local_735[iVar0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						default:
							if (MISC::GET_GAME_TIMER() > Local_735[iVar0 /*6*/].f_4)
							{
								Local_735[iVar0 /*6*/].f_4 = 2;
								Local_735[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 71:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (func_320(70))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 72:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							Local_735[iVar0 /*6*/].f_5 = 0;
							iLocal_1981 = 0;
							while (iLocal_1981 < Local_1651)
							{
								if ((Local_1651[iLocal_1981 /*17*/] != 7 && Local_1651[iLocal_1981 /*17*/] != 4) && Local_1651[iLocal_1981 /*17*/] != 3)
								{
									Local_735[iVar0 /*6*/].f_5++;
								}
								iLocal_1981++;
							}
							if (Local_735[iVar0 /*6*/].f_5 == 0)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 73:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						iLocal_1981 = 0;
						while (iLocal_1981 < Local_1651)
						{
							if (Local_1651[iLocal_1981 /*17*/] == 7)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							iLocal_1981++;
						}
					}
					break;
				
				case 74:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 27:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 61.6662f, 3694.247f, 38.76491f, 1) > 155.375f)
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 28:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 61.6662f, 3694.247f, 38.76491f, 1) > 300f)
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 29:
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(Local_1070[10 /*10*/]) == PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							else if (GlobalFunc_156(Local_1070[10 /*10*/], PLAYER::PLAYER_PED_ID(), 1) < 15f)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1070[10 /*10*/], 0))
						{
							if (GlobalFunc_156(Local_1070[10 /*10*/], PLAYER::PLAYER_PED_ID(), 1) < 6f)
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 31:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) < 300f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 32:
					if (!Local_735[iVar0 /*6*/].f_2)
					{
						switch (Local_735[iVar0 /*6*/].f_4)
						{
							case 0:
								Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								if (Var6.f_1 < 2055f)
								{
									uLocal_1987 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_1987, -291.3503f, -540.2892f, 160.9588f, 25f);
									uLocal_1988 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_1988, -1271.173f, -1046.454f, 106.8815f, 25f);
									uLocal_1986 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_1986, -549.4528f, -754.2225f, 160.541f, 25f);
									Local_735[iVar0 /*6*/].f_4++;
									iLocal_1989 = 1;
								}
								break;
							
							case 1:
								if ((GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_1986) || GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_1987)) || GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_1988))
								{
									GRAPHICS::DESTROY_TRACKED_POINT(uLocal_1986);
									GRAPHICS::DESTROY_TRACKED_POINT(uLocal_1987);
									GRAPHICS::DESTROY_TRACKED_POINT(uLocal_1988);
									iLocal_1989 = 0;
									Local_735[iVar0 /*6*/].f_4++;
									Local_735[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_735[iVar0 /*6*/].f_5)
								{
									Local_735[iVar0 /*6*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 33:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) < 350f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 30:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!func_3(Local_1070[10 /*10*/]))
					{
						if (func_333(iLocal_1181[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_1070[10 /*10*/], iLocal_1181[0], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], 0))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 34:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1373.544f, 728.5959f, 182.16f, -1337.615f, 738.5504f, 187.76f, 12.125f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0))
						{
							if ((!ENTITY::IS_ENTITY_IN_AIR(iLocal_1181[0]) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 35:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_83(10, 72))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					else
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 36:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 37:
					switch (Local_735[iVar0 /*6*/].f_4)
					{
						case 0:
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								Local_735[iVar0 /*6*/].f_4++;
							}
							break;
						
						case 1:
							if (CUTSCENE::HAS_CUTSCENE_FINISHED())
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 38:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!func_320(21))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 39:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1152.782f, -1523.988f, 3.5198f, 1) < 50f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 40:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1152.782f, -1523.988f, 3.5198f, 1) < 550f)
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 41:
					if (func_453(1, 9))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 42:
					if (func_83(14, 80))
					{
						Local_735[iVar0 /*6*/].f_2 = 1;
					}
					break;
				
				case 43:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!func_320(20))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.794f, -1522.302f, 6.086947f, -1143.034f, -1518.108f, 15.91394f, 7.625f, 0, 1, 0))
						{
							Local_735[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				
				case 44:
					Local_735[iVar0 /*6*/].f_2 = 0;
					if (!GlobalFunc_111())
					{
						if (!func_320(20))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.029f, -1521.472f, 11.88287f, -1148.167f, -1524.169f, 9.454223f, 2.4375f, 0, 1, 0))
							{
								Local_735[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_453(int iParam0, int iParam1)//Position - 0x44EE3
{
	if (Local_381[iParam0 /*4*/] == iParam1)
	{
		if (Local_381[iParam0 /*4*/].f_1 == 1)
		{
			return 1;
		}
	}
	return 0;
}


int func_455(int iParam0)//Position - 0x44F1E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (func_456(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) == 3)
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 1))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1) == iParam0)
							{
								return 1;
							}
						}
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 2))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2) == iParam0)
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

int func_456(int iParam0)//Position - 0x44F97
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_457(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, struct<3> Param12)//Position - 0x44FB2
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	Var3 = { GlobalFunc_107(Param3 - Param0) };
	Var3 = { Var3 * Vector(300f, 300f, 300f) };
	Var3 = { Var3 + Param0 };
	Var6 = { GlobalFunc_277(Param9 - Param6, Param12 - Param6) };
	if (!GlobalFunc_105(Var6))
	{
		Var6 = { GlobalFunc_107(Var6) };
		if (func_408(&Var0, Param0, Var3, Var6, Param6))
		{
			if (func_406(Var0, Param6, Param9, Param12))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_458()//Position - 0x45057
{
	func_132(0, 53, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 65, 0, 0, 0, 1, 0, 1, 0);
	func_132(2, 66, 0, 0, 0, 1, 0, 1, 0);
	GlobalFunc_7629();
	if (func_83(1, 65))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_RAYFIRE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_3_RAYFIRE");
		}
		GlobalFunc_563(1);
		GlobalFunc_553(518);
		return 1;
	}
	return 0;
}


int func_460(int iParam0)//Position - 0x450EA
{
	func_452(52, 82);
	func_402(0, 4, 0, 0, 1, 0, 1, 0);
	func_402(1, 2, 2, 67, 1, 0, 1, 0);
	func_402(2, 6, 2, 79, 1, 0, 1, 0);
	func_402(3, 5, 3, 74, 1, 0, 1, 0);
	func_402(4, 7, 2, 67, 1, 0, 1, 0);
	func_132(0, 40, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 44, 0, 2, 53, 1, 0, 1, 0);
	func_132(2, 60, 0, 0, 0, 1, 0, 1, 0);
	func_132(3, 43, 0, 0, 0, 1, 0, 1, 0);
	func_132(4, 46, 0, 2, 54, 1, 0, 1, 0);
	func_132(5, 47, 0, 0, 0, 1, 0, 1, 0);
	func_132(6, 50, 0, 3, 53, 1, 0, 1, 0);
	func_132(7, 49, 1, 2, 61, 5, 53, 1, 0);
	func_132(8, 48, 0, 2, 58, 5, 53, 5, 54);
	func_132(9, 51, 0, 0, 0, 1, 0, 1, 0);
	func_132(10, 53, 0, 0, 0, 1, 0, 1, 0);
	func_132(11, 54, 0, 0, 0, 1, 0, 1, 0);
	func_132(12, 23, 0, 0, 0, 1, 0, 1, 0);
	func_132(13, 25, 0, 2, 67, 5, 53, 1, 0);
	func_132(14, 26, 0, 0, 0, 1, 0, 1, 0);
	func_132(15, 78, 0, 0, 0, 1, 0, 1, 0);
	func_132(16, 56, 0, 0, 0, 1, 0, 1, 0);
	func_132(17, 28, 0, 0, 0, 1, 0, 1, 0);
	func_132(18, 29, 0, 0, 0, 1, 0, 1, 0);
	func_132(19, 30, 0, 2, 68, 1, 0, 1, 0);
	func_132(20, 31, 0, 0, 0, 1, 0, 1, 0);
	func_132(21, 32, 0, 2, 66, 1, 0, 1, 0);
	func_132(22, 57, 0, 0, 0, 1, 0, 1, 0);
	func_132(23, 58, 0, 2, 76, 1, 0, 1, 0);
	func_132(24, 59, 0, 0, 0, 1, 0, 1, 0);
	func_132(25, 52, 0, 0, 0, 1, 0, 1, 0);
	func_132(26, 15, 0, 0, 0, 1, 0, 1, 0);
	func_132(27, 16, 0, 2, 73, 1, 0, 1, 0);
	func_132(28, 61, 0, 2, 53, 1, 0, 1, 0);
	func_132(29, 62, 0, 0, 0, 1, 0, 1, 0);
	func_132(30, 89, 0, 2, 73, 1, 0, 1, 0);
	func_132(31, 63, 0, 0, 0, 1, 0, 1, 0);
	func_132(32, 64, 0, 0, 0, 1, 0, 1, 0);
	func_384(0, 12, 3, 55, 4, 56, 1, 0, 1, 0, 1, 0);
	func_384(1, 13, 3, 53, 4, 73, 1, 0, 1, 0, 1, 0);
	func_384(3, 14, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_384(4, 15, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_384(5, 16, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_384(6, 17, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_384(7, 18, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_384(8, 19, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_384(9, 20, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(10, 21, 2, 53, 4, 65, 1, 0, 1, 0, 1, 0);
	func_384(11, 22, 2, 70, 5, 53, 1, 0, 1, 0, 1, 0);
	func_384(12, 25, 2, 81, 4, 53, 1, 0, 1, 0, 1, 0);
	func_384(13, 24, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(14, 29, 2, 81, 5, 53, 8, 81, 5, 65, 1, 0);
	func_384(15, 26, 2, 81, 4, 74, 4, 53, 4, 65, 1, 0);
	func_384(17, 27, 2, 81, 4, 74, 5, 53, 1, 0, 1, 0);
	func_384(16, 28, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_367(2, 0, 0, 1, 0);
	func_367(6, 3, 67, 4, 77);
	func_367(7, 0, 0, 1, 0);
	func_367(8, 2, 80, 1, 0);
	if (func_320(68) && func_320(69))
	{
		AUDIO::START_AUDIO_SCENE("TREVOR_3_ESCAPE_TO_CAR");
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		ENTITY::REMOVE_FORCED_OBJECT(32.3311f, 3667.66f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"));
		ENTITY::REMOVE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"));
		*iParam0 = 1;
		return 1;
	}
	else if (func_320(72))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		ENTITY::REMOVE_FORCED_OBJECT(32.3311f, 3667.66f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"));
		ENTITY::REMOVE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"));
		HUD::CLEAR_PRINTS();
		AUDIO::START_AUDIO_SCENE("TREVOR_3_ESCAPE_TO_CAR");
		return 1;
	}
	return 0;
}

int func_461()//Position - 0x4555E
{
	func_452(49, 51);
	func_132(0, 37, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 38, 0, 0, 0, 1, 0, 1, 0);
	func_132(2, 39, 0, 0, 0, 1, 0, 1, 0);
	if (func_83(0, 37))
	{
		StringCopy(&cLocal_1931, "", 24);
		StringCopy(&cLocal_1937, "", 24);
		StringCopy(&Local_1943, "", 24);
		iLocal_1930 = 0;
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 517);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}


int func_463()//Position - 0x45645
{
	func_464();
	func_452(5, 26);
	func_402(0, 1, 0, 0, 1, 0, 1, 0);
	func_384(0, 3, 2, 18, 4, 19, 1, 0, 1, 0, 1, 0);
	func_384(1, 4, 2, 22, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(2, 5, 2, 23, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(3, 6, 2, 21, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(4, 7, 2, 10, 4, 17, 1, 0, 1, 0, 1, 0);
	func_383(5, 8, 6, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_384(6, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_384(7, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_132(0, 5, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 7, 0, 0, 0, 1, 0, 1, 0);
	func_132(2, 8, 0, 0, 0, 1, 0, 1, 0);
	func_132(3, 9, 0, 2, 8, 5, 9, 1, 0);
	func_132(4, 10, 0, 3, 8, 4, 9, 1, 0);
	func_132(6, 15, 0, 2, 9, 1, 0, 1, 0);
	func_132(7, 18, 0, 2, 9, 1, 0, 1, 0);
	func_132(8, 19, 0, 2, 9, 1, 0, 1, 0);
	func_132(9, 20, 0, 2, 9, 1, 0, 1, 0);
	func_132(10, 21, 0, 2, 9, 1, 0, 1, 0);
	func_132(11, 22, 0, 2, 9, 1, 0, 1, 0);
	func_132(12, 24, 0, 0, 0, 1, 0, 1, 0);
	func_132(13, 78, 0, 0, 0, 1, 0, 1, 0);
	func_132(14, 79, 0, 0, 0, 1, 0, 1, 0);
	func_132(15, 53, 0, 0, 0, 1, 0, 1, 0);
	func_132(16, 6, 0, 0, 0, 1, 0, 1, 0);
	func_132(17, 11, 1, 2, 7, 1, 0, 1, 0);
	func_132(18, 12, 0, 0, 0, 1, 0, 1, 0);
	func_132(19, 13, 0, 2, 11, 1, 0, 1, 0);
	func_132(20, 34, 0, 2, 7, 1, 0, 1, 0);
	func_400(21, 35, 20, 34, 0, 0);
	func_132(22, 36, 0, 0, 0, 1, 0, 1, 0);
	func_367(2, 0, 0, 1, 0);
	func_367(3, 0, 0, 1, 0);
	func_367(5, 0, 0, 1, 0);
	if ((((func_320(9) && func_320(17)) && func_320(12)) && func_319(13)) && func_83(20, 34))
	{
		MISC::FORCE_LIGHTNING_FLASH();
		GlobalFunc_5652(&Local_1954, 1, 0);
		if (HUD::DOES_BLIP_EXIST(uLocal_1979))
		{
			HUD::REMOVE_BLIP(&uLocal_1979);
		}
		if (func_333(iLocal_1181[0]))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_1181[0], 1000);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1181[0], 1000f);
			if (!func_3(Local_1070[10 /*10*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_1070[10 /*10*/]))
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_1070[10 /*10*/], 1), 5f);
				}
			}
		}
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_TRAILER_PARK");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		return 1;
	}
	return 0;
}

void func_464()//Position - 0x45914
{
	struct<3> Var0;
	
	if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 0))
			{
				if (GlobalFunc_105(Var0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 1) };
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0)))
	{
		Local_1070[10 /*10*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0));
		func_332();
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
	{
		if (!PED::IS_PED_INJURED(Local_1070[10 /*10*/]))
		{
			ENTITY::SET_ENTITY_COORDS(Local_1070[10 /*10*/], 1981.472f, 3815.652f, 31.3564f, 1, 0, 0, 1);
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1963.928f, 3789.891f, 30.25279f, 2002.27f, 3813.017f, 36.09295f, 19.5625f, 0, 1))
			{
				ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 260f);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_1070[10 /*10*/], 303.0639f);
			}
			PED::FORCE_PED_MOTION_STATE(Local_1070[10 /*10*/], -668482597, 0, 0, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[10 /*10*/], 1f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1070[10 /*10*/], 1, 0);
			func_332();
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1982.088f, 3817.281f, 31.267f, 1, 0, 0, 1);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1963.928f, 3789.891f, 30.25279f, 2002.27f, 3813.017f, 36.09295f, 19.5625f, 0, 1))
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 233f);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 308.0639f);
		}
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		if (GlobalFunc_1720())
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1200, 0, 1, 0);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 600, 0, 1, 0);
		}
	}
}

int func_465()//Position - 0x45B0B
{
	func_452(1, 4);
	func_132(0, 1, 0, 0, 0, 1, 0, 1, 0);
	func_132(1, 2, 0, 0, 0, 1, 0, 1, 0);
	func_132(2, 3, 0, 2, 2, 1, 0, 1, 0);
	func_132(3, 4, 0, 2, 2, 1, 0, 1, 0);
	func_464();
	if (func_320(3) && func_320(2))
	{
		GlobalFunc_8316(0, 1, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}

void func_466(int iParam0)//Position - 0x45B7E
{
	int iVar0;
	
	func_470();
	func_469();
	func_468();
	func_467();
	HUD::CLEAR_HELP(1);
	iVar0 = iLocal_1034 + 1;
	if (iParam0 == 14)
	{
		iLocal_1034 = iVar0;
	}
	else
	{
		iLocal_1034 = iParam0;
	}
}

void func_467()//Position - 0x45BB6
{
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_266)
	{
		Local_266[iLocal_1981 /*6*/] = 0;
		Local_266[iLocal_1981 /*6*/].f_1 = 0;
		Local_266[iLocal_1981 /*6*/].f_3 = 0;
		Local_266[iLocal_1981 /*6*/].f_4 = 0;
		Local_266[iLocal_1981 /*6*/].f_2 = 0;
		iLocal_1981++;
	}
}

void func_468()//Position - 0x45C0B
{
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_381)
	{
		Local_381[iLocal_1981 /*4*/] = 0;
		Local_381[iLocal_1981 /*4*/].f_1 = 0;
		Local_381[iLocal_1981 /*4*/].f_2 = 0;
		Local_381[iLocal_1981 /*4*/].f_3 = 0;
		iLocal_1981++;
	}
}

void func_469()//Position - 0x45C55
{
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_402)
	{
		if (Local_402[iLocal_1981 /*10*/].f_4)
		{
			Local_402[iLocal_1981 /*10*/].f_1 = 1;
			Local_402[iLocal_1981 /*10*/].f_6 = 99;
			func_132(iLocal_1981, Local_402[iLocal_1981 /*10*/], 0, 0, 0, 1, 0, 1, 0);
		}
		Local_402[iLocal_1981 /*10*/] = 0;
		Local_402[iLocal_1981 /*10*/].f_1 = 0;
		Local_402[iLocal_1981 /*10*/].f_2 = 0;
		Local_402[iLocal_1981 /*10*/].f_3 = 0;
		Local_402[iLocal_1981 /*10*/].f_6 = 0;
		Local_402[iLocal_1981 /*10*/].f_4 = 0;
		Local_402[iLocal_1981 /*10*/].f_5 = 0;
		Local_402[iLocal_1981 /*10*/].f_7 = 0;
		Local_402[iLocal_1981 /*10*/].f_8 = 0;
		Local_402[iLocal_1981 /*10*/].f_9 = 0f;
		iLocal_1981++;
	}
}

void func_470()//Position - 0x45D1C
{
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_735)
	{
		Local_735[iLocal_1981 /*6*/] = 0;
		Local_735[iLocal_1981 /*6*/].f_1 = 0;
		Local_735[iLocal_1981 /*6*/].f_2 = 0;
		Local_735[iLocal_1981 /*6*/].f_3 = 0;
		Local_735[iLocal_1981 /*6*/].f_4 = 0;
		Local_735[iLocal_1981 /*6*/].f_5 = 0;
		iLocal_1981++;
	}
}

int func_471()//Position - 0x45D7C
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	
	GlobalFunc_563(1);
	Global_97297 = 1;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 1);
	AUDIO::_0x58BB377BEC7CD5F4(1, 1);
	HUD::REQUEST_ADDITIONAL_TEXT("TREV3", 0);
	PED::ADD_RELATIONSHIP_GROUP("relGroupDislike", &iLocal_1639);
	PED::ADD_RELATIONSHIP_GROUP("Gangb", &iLocal_1640);
	PED::ADD_RELATIONSHIP_GROUP("Wade", &iLocal_1641);
	PED::ADD_RELATIONSHIP_GROUP("fought ped", &iLocal_1642);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1641, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1641);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1640, iLocal_1641);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1641, iLocal_1640);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1640, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1639, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_1640, iLocal_1642);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_1642, iLocal_1640);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1642, 1862763509);
	iVar0 = 0;
	while (iVar0 < iLocal_1627)
	{
		StringCopy(&cVar2, "nGang", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		PED::ADD_RELATIONSHIP_GROUP(&cVar2, &(iLocal_1627[iVar0]));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1627[iVar0], 1862763509);
		iVar1 = 0;
		while (iVar1 < iLocal_1627)
		{
			if (iVar1 < iVar0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1627[iVar0], iLocal_1627[iVar1]);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1627[iVar1], iLocal_1627[iVar0]);
			}
			iVar1++;
		}
		iVar0++;
	}
	func_549(&Local_1198, &uLocal_1749, cLocal_1914, 9f, 80.60152f, 3685.038f, 38.71252f, 121f, 3);
	Local_1493[0 /*3*/] = { 52.65201f, 3635.906f, 38.70047f };
	Local_1493[1 /*3*/] = { 37.01479f, 3621.633f, 39.00043f };
	Local_1493[2 /*3*/] = { 24.24968f, 3624.625f, 39.11548f };
	Local_1493[3 /*3*/] = { 29.51477f, 3637.202f, 38.77206f };
	Local_1493[4 /*3*/] = { 31.04396f, 3647.693f, 38.75521f };
	Local_1493[5 /*3*/] = { 15.60371f, 3650.389f, 42.12028f };
	Local_1493[6 /*3*/] = { 7.077183f, 3664.04f, 41.79787f };
	Local_1493[7 /*3*/] = { 24.63845f, 3663.974f, 42.40744f };
	Local_1493[8 /*3*/] = { 9.000495f, 3687.044f, 39.33117f };
	Local_1493[9 /*3*/] = { 18.9837f, 3704.913f, 38.76941f };
	Local_1493[10 /*3*/] = { -3.218173f, 3715.226f, 42.922f };
	Local_1493[11 /*3*/] = { 21.8793f, 3721.244f, 38.56995f };
	Local_1493[12 /*3*/] = { 13.99408f, 3734.201f, 38.67457f };
	Local_1493[13 /*3*/] = { 35.85871f, 3733.545f, 38.66938f };
	Local_1493[14 /*3*/] = { 24.37356f, 3744.353f, 38.66521f };
	Local_1493[15 /*3*/] = { 42.97798f, 3745.604f, 38.66521f };
	Local_1493[16 /*3*/] = { 57.97901f, 3743.661f, 38.67929f };
	Local_1493[17 /*3*/] = { 70.2747f, 3762.173f, 38.74031f };
	Local_1493[18 /*3*/] = { 92.8259f, 3743.278f, 38.63374f };
	Local_1493[19 /*3*/] = { 106.7801f, 3737.335f, 38.73051f };
	Local_1493[20 /*3*/] = { 114.0959f, 3724.494f, 38.72786f };
	Local_1493[21 /*3*/] = { 121.9711f, 3712.556f, 38.75488f };
	Local_1493[22 /*3*/] = { 114.7181f, 3701.484f, 38.75488f };
	Local_1493[23 /*3*/] = { 108.0372f, 3686.296f, 38.75488f };
	Local_1493[24 /*3*/] = { 91.71163f, 3679.015f, 38.66661f };
	Local_1493[25 /*3*/] = { 96.87774f, 3656.804f, 38.75488f };
	Local_1493[26 /*3*/] = { 95.05531f, 3641.014f, 38.75488f };
	Local_1493[27 /*3*/] = { 74.32508f, 3609.529f, 38.62163f };
	Local_1493[28 /*3*/] = { 95.68222f, 3609.175f, 38.79543f };
	Local_1493[29 /*3*/] = { 69.80882f, 3646.933f, 44.82592f };
	Local_1493[30 /*3*/] = { 62.49488f, 3670.042f, 41.57243f };
	Local_1493[31 /*3*/] = { 51.63249f, 3680.544f, 38.73888f };
	Local_1493[32 /*3*/] = { 62.5936f, 3684.663f, 38.83427f };
	Local_1493[33 /*3*/] = { 49.68334f, 3694.643f, 38.75521f };
	Local_1493[34 /*3*/] = { 34.95558f, 3704.214f, 38.62251f };
	Local_1493[35 /*3*/] = { 45.19976f, 3718.187f, 38.71195f };
	Local_1493[36 /*3*/] = { 62.71311f, 3726.785f, 38.70815f };
	Local_1493[37 /*3*/] = { 71.146f, 3699.51f, 38.75488f };
	Local_1493[38 /*3*/] = { 66.00504f, 3707.481f, 38.75488f };
	Local_1493[39 /*3*/] = { 75.5512f, 3717.825f, 38.75488f };
	Local_1493[40 /*3*/] = { 72.45716f, 3734.937f, 38.58567f };
	Local_1493[41 /*3*/] = { 88.49079f, 3723.996f, 38.71815f };
	Local_1493[42 /*3*/] = { 89.73351f, 3707.401f, 38.61491f };
	Local_1493[43 /*3*/] = { 78.29477f, 3685.643f, 38.52933f };
	func_548(&Local_1463, "TRV3_ATTACK", 3, "TREV3BIKER3");
	func_548(&Local_1466, "TRV3_reac3", 5, "TRV3BIKER2");
	func_548(&Local_1478, "TRV3_giveup", 5, "TRV3BIKER2");
	func_548(&Local_1469, "TRV3_reac2", 5, "TRV3BIKER2");
	func_548(&Local_1472, "TRV3_reac4", 5, "TRV3BIKER2");
	func_548(&Local_1475, "TRV3_reac5", 5, "TRV3BIKER2");
	func_548(&Local_1481, "TRV3_reac1", 5, "TRV3BIKER2");
	func_548(&Local_1484, "TRV3_reac3", 5, "TRV3BIKER2");
	func_548(&Local_1487, "TRV3_reac1", 5, "TRV3BIKER2");
	func_548(&Local_1490, "TRV3_ATTACK2", 4, "TREV3BIKER2");
	func_547(3);
	func_132(0, 53, 0, 0, 0, 1, 0, 1, 0);
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar4 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar4++;
		}
		switch (iVar4)
		{
			case 0:
				func_472(2, Global_84544, 1);
				CAM::DO_SCREEN_FADE_IN(1000);
				return 0;
				break;
			
			case 1:
				if (Global_84544 == 1)
				{
					func_472(3, Global_84544, 0);
				}
				else
				{
					func_472(4, Global_84544, 1);
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				return 0;
				break;
			
			case 2:
				if (Global_84544)
				{
					func_472(6, Global_84544, 0);
				}
				else
				{
					func_472(6, Global_84544, 1);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				return 0;
				break;
			
			case 3:
				if (Global_84544)
				{
					func_472(7, Global_84544, 0);
				}
				else
				{
					func_472(7, Global_84544, 1);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				return 0;
				break;
			
			case 4:
				if (Global_84544 == 1)
				{
					func_472(8, Global_84544, 0);
				}
				else
				{
					func_472(9, Global_84544, 1);
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				return 0;
				break;
			
			case 5:
				if (Global_84544 == 1)
				{
					func_472(10, Global_84544, 0);
				}
				else
				{
					func_472(10, Global_84544, 1);
				}
				return 0;
				break;
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.177f, 3817.06f, 31.3805f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 329.2307f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		func_472(1, 0, 0);
		return 0;
	}
	return 1;
}

void func_472(int iParam0, bool bParam1, bool bParam2)//Position - 0x4656E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	
	func_542(3);
	iLocal_1034 = iParam0;
	PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	PED::SET_PED_HELMET_FLAG(PLAYER::PLAYER_PED_ID(), 0);
	iLocal_940 = 1;
	GlobalFunc_563(1);
	switch (iParam0)
	{
		case 1:
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			STREAMING::REQUEST_MODEL(joaat("ig_wade"));
			func_541(0);
			break;
		
		case 2:
			if (bParam2)
			{
				GlobalFunc_4972(1981.544f, 3816.711f, 31.3087f, 308.0639f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(20, 0, 0);
			}
			func_477(1, 0, 0, 1981.544f, 3816.711f, 31.3087f, 308.0639f, 1980.656f, 3818.641f, 31.4477f, 197.5902f, 1993.611f, 3813.463f, 31.1612f, 115.7467f, 0, 0, bParam2);
			func_332();
			func_330(0, 5, 1, 1);
			func_330(5, 77, 1, 1);
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 3:
			if (bParam2)
			{
				GlobalFunc_4972(59.9711f, 3605.277f, 38.8392f, 351.7204f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(22, 0, 0);
			}
			func_541(4);
			TASK::REQUEST_WAYPOINT_RECORDING("trev3_trL");
			TASK::REQUEST_WAYPOINT_RECORDING("trev3_trR");
			STREAMING::PREFETCH_SRL("TREV3_TRAILER_ARRIVAL_CUTSCENE");
			while (((!func_132(0, 9, 0, 0, 0, 1, 0, 1, 0) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trev3_trL")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trev3_trR")) || !STREAMING::IS_SRL_LOADED())
			{
				GlobalFunc_761(0);
			}
			STREAMING::BEGIN_SRL();
			SYSTEM::SETTIMERA(12000);
			STREAMING::SET_SRL_TIME(12000f);
			STREAMING::_0xF8155A7F03DDFC8E(1);
			iLocal_1039 = 0;
			func_132(1, 15, 0, 0, 0, 1, 0, 1, 0);
			func_132(2, 18, 0, 0, 0, 1, 0, 1, 0);
			func_132(3, 19, 0, 0, 0, 1, 0, 1, 0);
			func_132(4, 20, 0, 0, 0, 1, 0, 1, 0);
			func_132(5, 21, 0, 0, 0, 1, 0, 1, 0);
			func_132(6, 22, 0, 0, 0, 1, 0, 1, 0);
			func_477(0, 1, 1, 59.9711f, 3605.277f, 38.8392f, 351.7204f, 60.5616f, 3605.424f, 38.862f, 4f, 59.7026f, 3602.782f, 38.8023f, 3.2394f, bParam1, 0, bParam2);
			func_332();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1181[0]))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], -1);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 4:
			if (bParam2)
			{
				GlobalFunc_4972(59.9711f, 3605.277f, 38.8392f, 351.7204f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(23, 0, 0);
			}
			MISC::CLEAR_AREA(59.9711f, 3605.277f, 38.8392f, 200f, 1, 0, 0, 0);
			func_541(4);
			while (!func_132(0, 9, 0, 0, 0, 1, 0, 1, 0))
			{
				GlobalFunc_761(0);
			}
			func_132(1, 15, 0, 0, 0, 1, 0, 1, 0);
			func_132(2, 18, 0, 0, 0, 1, 0, 1, 0);
			func_132(3, 19, 0, 0, 0, 1, 0, 1, 0);
			func_132(4, 20, 0, 0, 0, 1, 0, 1, 0);
			func_132(5, 21, 0, 0, 0, 1, 0, 1, 0);
			func_132(6, 22, 0, 0, 0, 1, 0, 1, 0);
			func_477(0, 1, 1, 59.9711f, 3605.277f, 38.8392f, 351.7204f, 60.5616f, 3605.424f, 38.862f, 4f, 59.7026f, 3602.782f, 38.8023f, 3.2394f, bParam1, 0, bParam2);
			func_332();
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			func_469();
			func_270("TRV3_PLANTING_RT", 0, "TRV3_ALERTED");
			func_330(16, 56, 0, 1);
			func_329(16, 56, 1);
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 5:
			if (bParam2)
			{
				GlobalFunc_4972(54.6849f, 3700.993f, 38.755f, 325f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(3, 0, 0);
			}
			STREAMING::REQUEST_PTFX_ASSET();
			func_477(0, 0, 1, 54.6849f, 3700.993f, 38.755f, 325f, 60.5616f, 3605.424f, 38.862f, 4f, 59.7026f, 3602.782f, 38.8023f, 3.2394f, 0, 0, bParam2);
			func_332();
			Local_1651[0 /*17*/] = 1;
			Local_1651[1 /*17*/] = 1;
			Local_1651[2 /*17*/] = 1;
			Local_1651[3 /*17*/] = 1;
			Local_1651[4 /*17*/] = 1;
			while ((((Local_1651[0 /*17*/] != 2 || Local_1651[1 /*17*/] != 2) || Local_1651[2 /*17*/] != 2) || Local_1651[3 /*17*/] != 2) || Local_1651[4 /*17*/] != 2)
			{
				func_132(0, 53, 0, 0, 0, 1, 0, 1, 0);
				GlobalFunc_761(0);
			}
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				GlobalFunc_761(0);
			}
			func_270("TRV3_PLANTING_RT", 0, "TRV3_ALERTED");
			if (!bParam2)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 58.9388f, 3617.554f, 38.6921f, 1, 0, 0, 1);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 6:
			if (bParam2)
			{
				GlobalFunc_4972(74.9264f, 3640.355f, 38.6059f, 189f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(3, 0, 0);
			}
			func_541(7);
			STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38f, 3694f, 61f) - Vector(300f, 300f, 300f), Vector(38f, 3694f, 61f) + Vector(300f, 300f, 300f), 0, 1, 1, 1);
			MISC::CLEAR_AREA(61f, 3694f, 38f, 130f, 1, 0, 0, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(92.6982f, 3738.728f, 36.7299f, 105.6982f, 3747.728f, 40.7299f, 0, 1);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.8369f, 3656.937f, 43.4604f) - Vector(5f, 7f, 7f), Vector(38.8369f, 3656.937f, 43.4604f) + Vector(5f, 7f, 7f), 0, 1);
			PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(41.2529f, 3709.404f, 38.7345f, 100f, 0);
			func_477(0, 0, 1, 74.9264f, 3640.355f, 38.6059f, 189f, 60.5616f, 3605.424f, 38.862f, 4f, 59.7026f, 3602.782f, 38.8023f, 3.2394f, 0, 0, bParam2);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			MISC::ENABLE_DISPATCH_SERVICE(1, 0);
			MISC::ENABLE_DISPATCH_SERVICE(7, 0);
			func_332();
			if (Global_84544)
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 10, 0, 1);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			Local_1651[0 /*17*/] = 8;
			Local_1651[1 /*17*/] = 8;
			Local_1651[2 /*17*/] = 8;
			Local_1651[3 /*17*/] = 8;
			Local_1651[4 /*17*/] = 8;
			while ((((Local_1651[0 /*17*/] != 4 || Local_1651[1 /*17*/] != 4) || Local_1651[2 /*17*/] != 4) || Local_1651[3 /*17*/] != 4) || Local_1651[4 /*17*/] != 4)
			{
				func_132(0, 53, 0, 0, 0, 1, 0, 1, 0);
				GlobalFunc_761(0);
			}
			while (!STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02")))
			{
				GlobalFunc_761(0);
			}
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			Var3 = { 0f, 0f, 0f };
			if (Global_84544)
			{
				Global_86804 = 6;
			}
			iVar0 = 0;
			while (iVar0 <= (Global_86804 - 1))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
				while (MISC::IS_BIT_SET(iVar1, iVar2))
				{
					iVar2++;
					if (iVar2 > 13)
					{
						iVar2 = 0;
					}
				}
				MISC::SET_BIT(&iVar1, iVar2);
				switch (iVar2)
				{
					case 0:
						Var3 = { 66.2449f, 3651.438f, 38.4262f };
						break;
					
					case 1:
						Var3 = { 46.1153f, 3656.806f, 38.7626f };
						break;
					
					case 2:
						Var3 = { 49.4054f, 3679.388f, 38.7261f };
						break;
					
					case 3:
						Var3 = { 63.3289f, 3680.807f, 38.8364f };
						break;
					
					case 4:
						Var3 = { 77.0489f, 3683.129f, 38.6059f };
						break;
					
					case 5:
						Var3 = { 92.5827f, 3686.608f, 38.5058f };
						break;
					
					case 6:
						Var3 = { 97.4204f, 3714.321f, 38.5429f };
						break;
					
					case 7:
						Var3 = { 104.7229f, 3722.617f, 38.7102f };
						break;
					
					case 8:
						Var3 = { 84.3981f, 3731.788f, 38.5611f };
						break;
					
					case 9:
						Var3 = { 79.5456f, 3745.797f, 38.585f };
						break;
					
					case 10:
						Var3 = { 61.7966f, 3746.053f, 38.7113f };
						break;
					
					case 11:
						Var3 = { 59.7046f, 3727.337f, 38.6582f };
						break;
					
					case 12:
						Var3 = { 73.2938f, 3714.755f, 38.7549f };
						break;
					
					case 13:
						Var3 = { 27.7165f, 3720.086f, 38.6902f };
						break;
					
					case 14:
						Var3 = { 25.3776f, 3685.611f, 38.5597f };
						break;
				}
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var3, 1) > 32f && iVar0 + 1 != 10)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
						{
							func_326(iVar0 + 1, joaat("g_m_y_lost_01"), joaat("weapon_pumpshotgun"), Var3, 267f);
							TASK::TASK_COMBAT_PED(Local_1070[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						else
						{
							func_326(iVar0 + 1, joaat("g_m_y_lost_01"), joaat("weapon_assaultrifle"), Var3, 267f);
							TASK::TASK_COMBAT_PED(Local_1070[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
					{
						func_326(iVar0 + 1, joaat("g_m_y_lost_02"), joaat("weapon_pumpshotgun"), Var3, 267f);
						TASK::TASK_COMBAT_PED(Local_1070[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else
					{
						func_326(iVar0 + 1, joaat("g_m_y_lost_02"), joaat("weapon_assaultrifle"), Var3, 267f);
						TASK::TASK_COMBAT_PED(Local_1070[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				else if (iVar6 < 3)
				{
					iVar6++;
					iVar0 = (iVar0 - 1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			func_270("TRV3_GET_TO_CAR_RT", 0, "TRV3_ALERTED");
			iLocal_1034 = 7;
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 7:
			if (bParam2)
			{
				GlobalFunc_4972(59.534f, 3603.427f, 38.812f, 232f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(3, 0, 0);
			}
			func_541(7);
			func_477(0, 1, 1, 59.534f, 3603.427f, 38.812f, 232f, 61.8752f, 3603.855f, 38.7897f, 122.5206f, 59.7026f, 3602.782f, 38.8023f, 3.2394f, bParam1, 0, bParam2);
			func_332();
			GlobalFunc_563(1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			Local_1651[0 /*17*/] = 8;
			Local_1651[1 /*17*/] = 8;
			Local_1651[2 /*17*/] = 8;
			Local_1651[3 /*17*/] = 8;
			Local_1651[4 /*17*/] = 8;
			while ((((Local_1651[0 /*17*/] != 4 || Local_1651[1 /*17*/] != 4) || Local_1651[2 /*17*/] != 4) || Local_1651[3 /*17*/] != 4) || Local_1651[4 /*17*/] != 4)
			{
				func_132(0, 53, 0, 0, 0, 1, 0, 1, 0);
				GlobalFunc_761(0);
			}
			if (bParam2)
			{
				GlobalFunc_4967(iLocal_1181[0], -1, 1);
			}
			break;
		
		case 8:
			if (bParam2)
			{
				GlobalFunc_4972(-1343.578f, 737.7505f, 184.1437f, 184f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
			}
			func_477(0, 1, 1, -1343.578f, 737.7505f, 184.1437f, 48.3414f, -1341.783f, 740.1107f, 184.1154f, 96f, -1344.588f, 742.2039f, 183.726f, 112.1451f, bParam1, 0, bParam2);
			func_332();
			GlobalFunc_563(1);
			func_330(0, 43, 1, 1);
			func_330(1, 53, 1, 1);
			func_330(2, 67, 1, 1);
			func_330(3, 68, 1, 1);
			func_330(4, 69, 1, 1);
			func_330(5, 70, 1, 1);
			func_330(6, 71, 1, 1);
			func_330(7, 73, 1, 1);
			func_330(27, 74, 1, 1);
			func_330(25, 89, 1, 1);
			func_256(0, 30, 1, 0);
			func_256(1, 31, 1, 0);
			func_256(8, 38, 1, 0);
			func_473(0, 8, 1);
			func_452(16, 48);
			func_363(37);
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_dri_mcs_concat", 3, 8);
			while (!CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_761(0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
			while (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_761(0);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 9:
			if (bParam2)
			{
				GlobalFunc_4972(-1343.578f, 737.7505f, 184.1437f, 124.3414f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1343.578f, 737.7505f, 184.1437f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 48.8313f);
				}
			}
			func_477(0, 1, 1, -1343.578f, 737.7505f, 184.1437f, 48.3414f, -1341.783f, 740.1107f, 184.1154f, 96f, -1344.588f, 742.2039f, 183.726f, 112.1451f, bParam1, 0, bParam2);
			func_332();
			GlobalFunc_563(1);
			func_330(0, 43, 1, 1);
			func_330(1, 53, 1, 1);
			func_330(2, 67, 1, 1);
			func_330(3, 68, 1, 1);
			func_330(4, 69, 1, 1);
			func_330(5, 70, 1, 1);
			func_330(6, 71, 1, 1);
			func_330(7, 73, 1, 1);
			func_330(8, 75, 1, 1);
			func_330(25, 89, 1, 1);
			func_330(27, 74, 1, 1);
			func_256(0, 30, 1, 0);
			func_256(1, 31, 1, 0);
			func_256(8, 38, 1, 0);
			func_473(0, 8, 1);
			func_452(16, 48);
			func_340(37, 1);
			func_340(45, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
			if (bParam2)
			{
				GlobalFunc_4967(iLocal_1181[0], -1, 1);
			}
			break;
		
		case 10:
			if (bParam2)
			{
				GlobalFunc_4972(-1156.161f, -1521.365f, 3.3237f, 227f, 1, 0);
			}
			func_477(0, 0, 0, -1157.72f, -1520.583f, 9.6327f, 295.1327f, -1153.776f, -1521.127f, 3.3193f, 241.2621f, -1154.567f, -1519.423f, 3.3617f, 218.817f, bParam1, 0, bParam2);
			func_332();
			func_132(0, 76, 0, 0, 0, 1, 0, 1, 0);
			while (func_285(0, 76) < 4)
			{
				CUTSCENE::REQUEST_CUTSCENE("TRV_DRI_EXT", 8);
				func_132(0, 76, 0, 0, 0, 1, 0, 1, 0);
				GlobalFunc_761(0);
			}
			func_469();
			if (bParam2)
			{
				GlobalFunc_4967(0, -1, 1);
			}
			break;
		
		case 11:
			func_477(0, 0, 0, -1157.72f, -1520.583f, 9.6327f, 295.1327f, -1153.776f, -1521.127f, 3.3193f, 241.2621f, -1154.567f, -1519.423f, 3.3617f, 218.817f, bParam1, 0, bParam2);
			STREAMING::LOAD_SCENE(-1157.72f, -1520.583f, 9.6327f);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1070[10 /*10*/]))
			{
				PED::DELETE_PED(&(Local_1070[10 /*10*/]));
			}
			iLocal_1985 = INTERIOR::GET_INTERIOR_AT_COORDS(-1154.817f, -1518.303f, 9.6345f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_1985))
			{
				iLocal_1985 = INTERIOR::GET_INTERIOR_AT_COORDS(-1154.817f, -1518.303f, 9.6345f);
				GlobalFunc_761(0);
			}
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1985);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_1985))
			{
				GlobalFunc_761(0);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_1985, 1);
			func_469();
			break;
	}
}

void func_473(int iParam0, int iParam1, int iParam2)//Position - 0x475B4
{
	Local_381[iParam0 /*4*/] = iParam1;
	Local_381[iParam0 /*4*/].f_1 = iParam2;
	Local_381[iParam0 /*4*/].f_2 = 0;
	Local_381[iParam0 /*4*/].f_3 = 0;
}




void func_477(bool bParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, struct<3> Param7, int iParam10, struct<3> Param11, float fParam14, bool bParam15, bool bParam16, bool bParam17)//Position - 0x476E5
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	fParam14 = fParam14;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[0]))
	{
		if (!bParam17)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
		}
		VEHICLE::DELETE_VEHICLE(&(iLocal_1181[0]));
	}
	if (bParam0)
	{
		if (GlobalFunc_7984())
		{
			GlobalFunc_8574();
			while (!GlobalFunc_8573())
			{
				GlobalFunc_761(0);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Param11, 4f, 0, 0, 0, 0, 0);
			iLocal_1181[0] = func_536(0f, 0f, 0f, 0f);
			ENTITY::SET_ENTITY_HEALTH(iLocal_1181[0], 1800);
		}
		if (!GlobalFunc_5886(2, 1, 1981.394f, 3808.173f, 31.1383f, 15f))
		{
			GlobalFunc_6791(2, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1181[0]))
			{
				if (!MISC::IS_AREA_OCCUPIED(Vector(31.1383f, 3808.173f, 1981.394f) - Vector(10f, 10f, 10f), Vector(31.1383f, 3808.173f, 1981.394f) + Vector(10f, 10f, 10f), 0, 1, 0, 0, 0, 0, 0))
				{
					while (!GlobalFunc_9748(&(iLocal_1181[0]), 2, 1981.394f, 3808.173f, 31.1383f, 117.1702f, 1, 0))
					{
						GlobalFunc_761(0);
					}
				}
				else if (!MISC::IS_AREA_OCCUPIED(Vector(31.1684f, 3799.514f, 1967.904f) - Vector(10f, 10f, 10f), Vector(31.1684f, 3799.514f, 1967.904f) + Vector(10f, 10f, 10f), 0, 1, 0, 0, 0, 0, 0))
				{
					while (!GlobalFunc_9748(&(iLocal_1181[0]), 2, 1967.904f, 3799.514f, 31.1684f, 117.1702f, 1, 0))
					{
						GlobalFunc_761(0);
					}
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0) && GlobalFunc_713(iLocal_1181[0], 1981.394f, 3808.173f, 31.1383f, 1) > 10f)
				{
					while (!GlobalFunc_9748(&iVar0, 2, 1981.394f, 3808.173f, 31.1383f, 117.1702f, 1, 0))
					{
						GlobalFunc_761(0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[0], 0) && GlobalFunc_713(iLocal_1181[0], 1967.904f, 3799.514f, 31.1684f, 1) > 10f)
				{
					while (!GlobalFunc_9748(&iVar0, 2, 1967.904f, 3799.514f, 31.1684f, 117.1702f, 1, 0))
					{
						GlobalFunc_761(0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
		}
	}
	else if (GlobalFunc_622() != 0)
	{
		if (VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GlobalFunc_622()) > 1)
		{
			if (((GlobalFunc_7698() && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_BOAT(GlobalFunc_622()))
			{
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					GlobalFunc_761(0);
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Param11, 4f, 0, 0, 0, 0, 0);
				if (Global_84544)
				{
					iLocal_1181[0] = GlobalFunc_9749(Param11, fParam14);
				}
				else
				{
					iLocal_1181[0] = GlobalFunc_9749(0f, 0f, 0f, 0f);
				}
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1181[0], 1) };
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1157.713f, -1517.214f, 2.749372f, -1147.219f, -1532.73f, 12.12578f, 10.6875f, 0, 1))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], Var1.x, Var1.f_1, 3.3483f, 1, 0, 0, 1);
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0]), &Var4, &Var7);
					Var7 = { Var7 - Var4 };
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1181[0])))
					{
						Var7.x = (Var7.x - 3f);
						Var7.f_1 = (Var7.f_1 - 3f);
					}
					if ((Var7.x > 4.5f || Var7.f_1 > 20f) || Var7.f_2 > 2.5f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1181[0], -1161.388f, -1507.905f, 3.4094f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_1181[0], 304f);
					}
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_1181[0], 1800);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("bodhi2"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")))
				{
					GlobalFunc_761(0);
				}
				iLocal_1181[0] = VEHICLE::CREATE_VEHICLE(joaat("bodhi2"), Param11, fParam14, 1, 1);
				ENTITY::SET_ENTITY_HEALTH(iLocal_1181[0], 1800);
			}
		}
	}
	if (bParam15)
	{
		while (!GlobalFunc_9748(&(iLocal_1181[0]), 2, Param11, fParam14, 1, 0))
		{
			GlobalFunc_761(0);
		}
	}
	if ((func_333(iLocal_1181[0]) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_1181[0]) > 0) && iParam2)
	{
		while (!GlobalFunc_7061(&(Local_1070[10 /*10*/]), 24, iLocal_1181[0], 0, 1))
		{
			GlobalFunc_761(0);
		}
	}
	else
	{
		while (!GlobalFunc_6800(&(Local_1070[10 /*10*/]), 24, Param7, iParam10, 1))
		{
			GlobalFunc_761(0);
		}
	}
	if ((iParam1 || bParam15) && func_333(iLocal_1181[0]))
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1181[0], -1);
	}
	else if (!bParam17)
	{
		if (bParam16)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), GlobalFunc_2574(), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_478());
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam6);
		}
	}
	if (!bParam17)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-4f, 1065353216);
		STREAMING::LOAD_SCENE(Param3);
	}
	GlobalFunc_761(2);
}

var func_478()//Position - 0x47C5A
{
	return Global_93588.f_2161.f_3;
}


























































int func_536(struct<3> Param0, float fParam3)//Position - 0x4E5FA
{
	return GlobalFunc_9008(&(Global_91351.f_2167), Param0, fParam3, 0);
}





void func_541(int iParam0)//Position - 0x4E6E2
{
	switch (iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("ig_wade"));
			break;
		
		case 3:
		case 4:
			STREAMING::REQUEST_MODEL(joaat("bodhi2"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
			STREAMING::REQUEST_MODEL(joaat("dloader"));
			STREAMING::REQUEST_MODEL(joaat("hexer"));
			STREAMING::REQUEST_MODEL(joaat("prop_coffin_01"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("misstrevor3");
			STREAMING::REQUEST_ANIM_DICT("misstrevor3_beatup");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
			while (((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bodhi2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("dloader"))) || !STREAMING::HAS_MODEL_LOADED(joaat("hexer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_coffin_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3")) || !STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3_beatup")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward"))
			{
				GlobalFunc_761(0);
			}
			break;
		
		case 5:
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				GlobalFunc_761(0);
			}
			break;
		
		case 7:
			STREAMING::REQUEST_MODEL(joaat("bodhi2"));
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				GlobalFunc_761(0);
			}
			break;
	}
}

void func_542(int iParam0)//Position - 0x4E8B2
{
	var uVar0;
	var uVar1;
	
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(1);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		GlobalFunc_761(0);
	}
	ENTITY::REMOVE_FORCED_OBJECT(32.3311f, 3667.66f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"));
	ENTITY::REMOVE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"));
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_263))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_263);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_TRAILER_PARK"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_TRAILER_PARK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_TRAILER_PARK_OVERVIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_PLANT_BOMBS_STEALTH"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_PLANT_BOMBS_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DETONATE_BOMBS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DETONATE_BOMBS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_LS_DIALOGUE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_LS_DIALOGUE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_FLOYDS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_FLOYDS");
	}
	iLocal_264 = 0;
	GlobalFunc_563(0);
	PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
	iLocal_1997 = 0;
	iLocal_1998 = 0;
	sLocal_2000 = "";
	sLocal_2001 = "";
	iLocal_261 = 0;
	iLocal_262 = 0;
	bLocal_260 = false;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	func_267(11);
	GlobalFunc_4935();
	if (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	GlobalFunc_8316(0, 1, 1, 0);
	if (iParam0 != 3 && iParam0 != 4)
	{
		func_544();
	}
	else
	{
		func_549(&Local_1198, &uLocal_1749, cLocal_1914, 9f, 80.60152f, 3685.038f, 38.71252f, 121f, 3);
	}
	if (!func_3(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	if (STREAMING::IS_STREAMVOL_ACTIVE())
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1626);
	}
	STREAMING::END_SRL();
	uVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", GlobalFunc_4946(24));
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (iParam0 == 3)
		{
			ENTITY::DELETE_ENTITY(&iVar0);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SYSTEM::WAIT(0);
	if (iParam0 == 3)
	{
		if (!func_3(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
				VEHICLE::DELETE_VEHICLE(&uVar1);
			}
		}
	}
	if (iLocal_1989)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_1986);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_1987);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_1988);
		iLocal_1989 = 0;
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(53.94371f, 3620.474f, 28.62759f, 64.89907f, 3764.617f, 50.32835f, 106.5f, 1);
	STREAMING::END_SRL();
	func_543();
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_1070)
	{
		if (iParam0 != 0 && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iLocal_1981 /*10*/]))
			{
				if (!func_3(Local_1070[iLocal_1981 /*10*/]))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1070[iLocal_1981 /*10*/], 1))
					{
						PED::DELETE_PED(&(Local_1070[iLocal_1981 /*10*/]));
					}
				}
				else
				{
					PED::DELETE_PED(&(Local_1070[iLocal_1981 /*10*/]));
				}
			}
		}
		else if (!func_3(Local_1070[iLocal_1981 /*10*/]))
		{
			if (iParam0 == 0 && iLocal_1981 == 10)
			{
				PED::DELETE_PED(&(Local_1070[iLocal_1981 /*10*/]));
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1070[iLocal_1981 /*10*/], 1))
			{
				if (PED::IS_PED_IN_GROUP(Local_1070[iLocal_1981 /*10*/]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_1070[iLocal_1981 /*10*/]);
				}
				PED::SET_PED_KEEP_TASK(Local_1070[iLocal_1981 /*10*/], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iLocal_1981 /*10*/]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iLocal_1981 /*10*/]))
		{
			if (!func_3(Local_1070[iLocal_1981 /*10*/]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1070[iLocal_1981 /*10*/], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iLocal_1981 /*10*/]));
				}
			}
			else
			{
				if (PED::WAS_PED_KILLED_BY_STEALTH(Local_1070[iLocal_1981 /*10*/]))
				{
					GlobalFunc_565(519, 1, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iLocal_1981 /*10*/]));
			}
		}
		iLocal_1981++;
	}
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_942)
	{
		if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_942[iLocal_1981 /*9*/]))
			{
				PED::DELETE_PED(&(Local_942[iLocal_1981 /*9*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_942[iLocal_1981 /*9*/].f_1))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_942[iLocal_1981 /*9*/].f_1));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_942[iLocal_1981 /*9*/]))
			{
				if (!PED::IS_PED_INJURED(Local_942[iLocal_1981 /*9*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_942[iLocal_1981 /*9*/], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_942[iLocal_1981 /*9*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_942[iLocal_1981 /*9*/].f_1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_942[iLocal_1981 /*9*/].f_1));
			}
		}
		iLocal_1981++;
	}
	iLocal_1981 = 0;
	while (iLocal_1981 < iLocal_1181)
	{
		if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[iLocal_1981]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[iLocal_1981], 0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1181[iLocal_1981], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1181[iLocal_1981], 1, 1);
				}
				VEHICLE::DELETE_VEHICLE(&(iLocal_1181[iLocal_1981]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1181[iLocal_1981]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1181[iLocal_1981], 0))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1181[iLocal_1981], 1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1181[iLocal_1981], 1, 1);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_1181[iLocal_1981]));
		}
		iLocal_1981++;
	}
	iLocal_1981 = 0;
	while (iLocal_1981 < iLocal_1192)
	{
		if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[iLocal_1981]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_1192[iLocal_1981]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1192[iLocal_1981]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1192[iLocal_1981]));
		}
		iLocal_1981++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(92.6982f, 3738.728f, 36.7299f, 105.6982f, 3747.728f, 40.7299f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.8369f, 3656.937f, 43.4604f) - Vector(5f, 7f, 7f), Vector(38.8369f, 3656.937f, 43.4604f) + Vector(5f, 7f, 7f), 1, 1);
	fLocal_1036 = 0f;
	iLocal_1037 = 0;
	iLocal_1038 = 0;
	iLocal_941 = 0;
	GlobalFunc_7139(&Local_1954, 0);
	GlobalFunc_5652(&Local_1954, 1, 0);
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_1979))
	{
		HUD::REMOVE_BLIP(&uLocal_1979);
	}
	if (iParam0 == 3)
	{
		MISC::CLEAR_AREA(953.5856f, 3654.505f, 44.9018f, 1000f, 1, 0, 0, 0);
	}
	if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
	{
		MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
	}
	else
	{
		Global_97297 = 0;
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("SMOG", 30f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1040))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1040);
	}
	if (iParam0 != 3)
	{
		AUDIO::_0x58BB377BEC7CD5F4(0, 0);
	}
	while (!AUDIO::TRIGGER_MUSIC_EVENT("TRV3_FAIL"))
	{
		GlobalFunc_761(0);
	}
	if (iParam0 == 0)
	{
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("TRAILER_PARK_RAYFIRE_ZONE_LIST", 0, 1);
	}
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(7, 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	STREAMING::_0xF8155A7F03DDFC8E(0);
	func_470();
	func_469();
	func_467();
	func_468();
	bLocal_1650 = false;
	Local_1982 = { 0f, 0f, 0f };
	func_547(iParam0);
	func_132(0, 53, 0, 0, 0, 1, 0, 1, 0);
}

void func_543()//Position - 0x4F053
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bodhi2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_coffin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "trev3");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "trev3");
	STREAMING::REMOVE_ANIM_DICT("misstrevor3");
	STREAMING::REMOVE_ANIM_DICT("misstrevor3_beatup");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@idle_c");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_salton_01"));
	STREAMING::REMOVE_ANIM_SET("move_f@flee@a");
	STREAMING::REMOVE_PTFX_ASSET();
}

void func_544()//Position - 0x4F0F9
{
	EVENT::UNBLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31);
}



void func_547(int iParam0)//Position - 0x4F15A
{
	Local_1651[0 /*17*/].f_7[0 /*3*/] = { 61.69837f, 3746.573f, 43.30432f };
	Local_1651[0 /*17*/].f_7[1 /*3*/] = { 37.6801f, 3742.203f, 37.68679f };
	Local_1651[0 /*17*/].f_14 = 10f;
	Local_1651[1 /*17*/].f_7[0 /*3*/] = { 111.9258f, 3722.157f, 43.30432f };
	Local_1651[1 /*17*/].f_7[1 /*3*/] = { 100.7821f, 3741.905f, 37.48507f };
	Local_1651[1 /*17*/].f_14 = 10f;
	Local_1651[2 /*17*/].f_7[0 /*3*/] = { 65.52233f, 3685.638f, 43.30432f };
	Local_1651[2 /*17*/].f_7[1 /*3*/] = { 77.48096f, 3702.877f, 37.6082f };
	Local_1651[2 /*17*/].f_14 = 10f;
	Local_1651[3 /*17*/].f_7[0 /*3*/] = { 33.64445f, 3707.114f, 43.30432f };
	Local_1651[3 /*17*/].f_7[1 /*3*/] = { 52.89159f, 3697.371f, 37.88868f };
	Local_1651[3 /*17*/].f_14 = 10f;
	Local_1651[4 /*17*/].f_7[0 /*3*/] = { 23.33716f, 3656.12f, 43.30432f };
	Local_1651[4 /*17*/].f_7[1 /*3*/] = { 35.65962f, 3679.772f, 37.69717f };
	Local_1651[4 /*17*/].f_14 = 12.5f;
	Local_1651[0 /*17*/].f_3 = "des_trailerparka";
	Local_1651[1 /*17*/].f_3 = "des_trailerparkb";
	Local_1651[2 /*17*/].f_3 = "des_trailerparkc";
	Local_1651[3 /*17*/].f_3 = "des_trailerparkd";
	Local_1651[4 /*17*/].f_3 = "des_trailerparke";
	Local_1651[0 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_06";
	Local_1651[1 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_03";
	Local_1651[2 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_14";
	Local_1651[3 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_12";
	Local_1651[4 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_11";
	Local_1651[0 /*17*/].f_5 = 38;
	Local_1651[1 /*17*/].f_5 = 40;
	Local_1651[2 /*17*/].f_5 = 42;
	Local_1651[3 /*17*/].f_5 = 44;
	Local_1651[4 /*17*/].f_5 = 46;
	Local_1651[0 /*17*/].f_6 = 39;
	Local_1651[1 /*17*/].f_6 = 41;
	Local_1651[2 /*17*/].f_6 = 43;
	Local_1651[3 /*17*/].f_6 = 45;
	Local_1651[4 /*17*/].f_6 = 47;
	if (iParam0 == 3)
	{
		Local_1651[0 /*17*/] = 1;
		Local_1651[1 /*17*/] = 1;
		Local_1651[2 /*17*/] = 1;
		Local_1651[3 /*17*/] = 1;
		Local_1651[4 /*17*/] = 1;
	}
	iLocal_1981 = 0;
	while (iLocal_1981 < Local_1651)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1651[iLocal_1981 /*17*/].f_16))
		{
			HUD::REMOVE_BLIP(&(Local_1651[iLocal_1981 /*17*/].f_16));
		}
		iLocal_1981++;
	}
}

void func_548(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x4F401
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_549(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam7, int iParam8)//Position - 0x4F41A
{
	int iVar0;
	
	iLocal_52 = iLocal_52;
	uLocal_65 = fParam3;
	Local_66 = { Param4 };
	uLocal_69 = fParam7;
	Local_84 = { *uParam1 };
	cLocal_249 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam8;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_48 = false;
	bLocal_49 = false;
	iLocal_50 = 0;
	bLocal_51 = false;
	iLocal_52 = 0;
	bLocal_72 = true;
	iLocal_71 = 0;
	iLocal_53 = 0;
	iLocal_55 = 0;
	iLocal_56 = -1;
	iLocal_57 = -1;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	EVENT::BLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31);
	iLocal_47 = 0;
}

void func_550()//Position - 0x4F511
{
	if (iLocal_1997)
	{
		if (iLocal_1998)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2000))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2000))
				{
					iLocal_1997 = 0;
					iLocal_1998 = 0;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2000))
		{
			iLocal_1997 = 0;
		}
	}
	else if (iLocal_1999)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2001))
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2001))
			{
				iLocal_1999 = 0;
			}
		}
	}
}

void func_551()//Position - 0x4F574
{
	if (iLocal_1930)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_1943))
		{
			if (GlobalFunc_111())
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						cLocal_1937 = { GlobalFunc_514() };
						Local_1943 = { GlobalFunc_560() };
						StringCopy(&Local_1943, "", 24);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1937) && !MISC::ARE_STRINGS_EQUAL(&cLocal_1937, "NULL"))
						{
							Local_1943 = { GlobalFunc_560() };
							GlobalFunc_5105();
						}
						else
						{
							iLocal_1930 = 0;
							StringCopy(&Local_1943, "", 24);
							StringCopy(&cLocal_1937, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_1930 = 0;
				StringCopy(&Local_1943, "", 24);
				StringCopy(&cLocal_1937, "", 24);
			}
		}
		else
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!GlobalFunc_5664(&Local_1943))
				{
					iLocal_1930 = 0;
					StringCopy(&Local_1943, "", 24);
					StringCopy(&cLocal_1937, "", 24);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1943))
			{
				if (func_388(&Local_1943, &cLocal_1937, Local_1917[0 /*3*/], Local_1917[0 /*3*/].f_1, Local_1917[0 /*3*/].f_2, Local_1917[1 /*3*/], Local_1917[1 /*3*/].f_1, Local_1917[1 /*3*/].f_2, Local_1917[2 /*3*/], Local_1917[2 /*3*/].f_1, Local_1917[2 /*3*/].f_2, Local_1917[3 /*3*/], Local_1917[3 /*3*/].f_1, Local_1917[3 /*3*/].f_2, 8))
				{
					StringCopy(&Local_1943, "", 24);
					StringCopy(&cLocal_1937, "", 24);
					iLocal_1930 = 0;
				}
			}
		}
	}
}

void func_552(int iParam0)//Position - 0x4F6C0
{
	func_542(iParam0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



