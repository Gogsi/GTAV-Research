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
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55[4] = { 0, 0, 0, 0 };
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 4;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 4;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 4;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 4;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 4;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	bool bLocal_125 = 0;
	bool bLocal_126 = 0;
	bool bLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	bool bLocal_132 = 0;
	bool bLocal_133 = 0;
	bool bLocal_134 = 0;
	float fLocal_135[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_280[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_425[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_570[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_715[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	float fLocal_864[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_893[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_922[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_951[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_980[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1009[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1038[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1074[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1110[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1146[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1182 = 0f;
	float fLocal_1183 = 0f;
	float fLocal_1184 = 0f;
	float fLocal_1185 = 0f;
	float fLocal_1186 = 0f;
	float fLocal_1187 = 0f;
	float fLocal_1188 = 0f;
	float fLocal_1189 = 0f;
	float fLocal_1190 = 0f;
	float fLocal_1191 = 0f;
	float fLocal_1192 = 0f;
	float fLocal_1193 = 0f;
	float fLocal_1194 = 0f;
	float fLocal_1195 = 0f;
	float fLocal_1196 = 0f;
	float fLocal_1197 = 0f;
	float fLocal_1198 = 0f;
	float fLocal_1199 = 0f;
	float fLocal_1200 = 0f;
	float fLocal_1201 = 0f;
	float fLocal_1202 = 0f;
	int iLocal_1203[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1348[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1493[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1638[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1667[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1696[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1725[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	struct<3> Local_1778[144];
	struct<3> Local_2211[35];
	struct<3> Local_2317[28];
	struct<3> Local_2402 = { 0, 0, 0 } ;
	struct<3> Local_2405 = { 0, 0, 0 } ;
	struct<3> Local_2408 = { 0, 0, 0 } ;
	struct<3> Local_2411 = { 0, 0, 0 } ;
	struct<3> Local_2414 = { 0, 0, 0 } ;
	struct<3> Local_2417 = { 0, 0, 0 } ;
	struct<3> Local_2420 = { 0, 0, 0 } ;
	struct<3> Local_2423 = { 0, 0, 0 } ;
	struct<3> Local_2426 = { 0, 0, 0 } ;
	char cLocal_2429[64] = "";
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	int iLocal_2445 = 0;
	int iLocal_2446[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2591[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2627[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2656 = 0;
	int iLocal_2657 = 0;
	int iLocal_2658 = 0;
	int iLocal_2659[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2804[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2812[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2848[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2877[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	int iLocal_2886 = 0;
	var uLocal_2887 = 7;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	struct<3> Local_2895 = { 0, 0, 0 } ;
	struct<3> Local_2898 = { 0, 0, 0 } ;
	float fLocal_2901 = 0f;
	int iLocal_2902 = 0;
	int iLocal_2903 = 0;
	int iLocal_2904 = 0;
	int iLocal_2905 = 0;
	int iLocal_2906 = 0;
	int iLocal_2907 = 0;
	int iLocal_2908 = 0;
	int iLocal_2909 = 0;
	int iLocal_2910 = 0;
	int iLocal_2911 = 0;
	int iLocal_2912 = 0;
	struct<3> Local_2913 = { 0, 0, 0 } ;
	struct<3> Local_2916 = { 0, 0, 0 } ;
	struct<3> Local_2919 = { 0, 0, 0 } ;
	int iLocal_2922 = 0;
	int iLocal_2923 = 0;
	float fLocal_2924 = 0f;
	char* sLocal_2925 = NULL;
	int iLocal_2926 = 0;
	int iLocal_2927 = 0;
	int iLocal_2928 = 0;
	int iLocal_2929 = 0;
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	int iLocal_2934 = 0;
	int iLocal_2935 = 0;
	int iLocal_2936 = 0;
	int iLocal_2937 = 0;
	float fLocal_2938[4] = { 0f, 0f, 0f, 0f };
	int iLocal_2943 = 0;
	int iLocal_2944 = 0;
	int iLocal_2945 = 0;
	int iLocal_2946 = 0;
	bool bLocal_2947 = 0;
	int iLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	struct<14> Local_2952 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 3;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	int iLocal_2977 = 0;
	int iLocal_2978 = 0;
	int iLocal_2979 = 0;
	int iLocal_2980 = 0;
	int iLocal_2981 = 0;
	int iLocal_2982 = 0;
	int iLocal_2983 = 0;
	int iLocal_2984 = 0;
	bool bLocal_2985 = 0;
	int iLocal_2986 = 0;
	int iLocal_2987 = 0;
	int iLocal_2988 = 0;
	int iLocal_2989 = 0;
	int iLocal_2990 = 0;
	int iLocal_2991 = 0;
	int iLocal_2992 = 0;
	int iLocal_2993 = 0;
	int iLocal_2994 = 0;
	int iLocal_2995 = 0;
	int iLocal_2996 = 0;
	int iLocal_2997 = 0;
	int iLocal_2998 = 0;
	int iLocal_2999 = 0;
	int iLocal_3000 = 0;
	int iLocal_3001 = 0;
	int iLocal_3002 = 0;
	int iLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	int iLocal_3009 = 0;
	var uLocal_3010 = 0;
	struct<3> Local_3011 = { 0, 0, 0 } ;
	int iLocal_3014 = 0;
	int iLocal_3015 = 0;
	int iLocal_3016 = 0;
	int iLocal_3017 = 0;
	float fLocal_3018 = 0f;
	int iLocal_3019 = 0;
	float fLocal_3020 = 0f;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	int iLocal_3025 = 0;
	int iLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	int iLocal_3029 = 0;
	int iLocal_3030 = 0;
	int iLocal_3031[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3176[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	int iLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	var uLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222 = 0;
	int iLocal_3223 = 0;
	int iLocal_3224 = 0;
	int iLocal_3225 = 0;
	int iLocal_3226 = 0;
	int iLocal_3227 = 0;
	int iLocal_3228 = 0;
	int iLocal_3229 = 0;
	int iLocal_3230 = 0;
	int iLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	struct<3> Local_3238 = { 0, 0, 0 } ;
	float fLocal_3241 = 0f;
	struct<3> Local_3242 = { 0, 0, 0 } ;
	float fLocal_3245 = 0f;
	struct<3> Local_3246 = { 0, 0, 0 } ;
	struct<3> Local_3249 = { 0, 0, 0 } ;
	float fLocal_3252 = 0f;
	float fLocal_3253 = 0f;
	float fLocal_3254 = 0f;
	float fLocal_3255 = 0f;
	float fLocal_3256 = 0f;
	float fLocal_3257 = 0f;
	float fLocal_3258 = 0f;
	float fLocal_3259 = 0f;
	float fLocal_3260 = 0f;
	float fLocal_3261 = 0f;
	float fLocal_3262 = 0f;
	float fLocal_3263 = 0f;
	float fLocal_3264 = 0f;
	float fLocal_3265 = 0f;
	float fLocal_3266 = 0f;
	int iLocal_3267 = 0;
	float fLocal_3268 = 0f;
	float fLocal_3269 = 0f;
	float fLocal_3270 = 0f;
	float fLocal_3271 = 0f;
	float fLocal_3272 = 0f;
	struct<3> Local_3273 = { 0, 0, 0 } ;
	var uLocal_3276 = 0;
	int iLocal_3277 = 0;
	int iLocal_3278 = 0;
	int iLocal_3279 = 0;
	int iLocal_3280 = 0;
	struct<3> Local_3281 = { 0, 0, 0 } ;
	struct<3> Local_3284 = { 0, 0, 0 } ;
	struct<3> Local_3287 = { 0, 0, 0 } ;
	struct<3> Local_3290 = { 0, 0, 0 } ;
	struct<3> Local_3293 = { 0, 0, 0 } ;
	struct<3> Local_3296 = { 0, 0, 0 } ;
	int iLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = -1;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 1000;
	var uLocal_3310 = 1000;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = -1;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 1000;
	var uLocal_3322 = 1000;
	var uLocal_3323 = 0;
	var uLocal_3324 = 16;
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
	var uLocal_3380 = 0;
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
	var uLocal_3437 = 0;
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
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
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
	int iLocal_3489 = 0;
	int iLocal_3490 = 0;
	var uLocal_3491 = 800;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
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
	var uLocal_3513 = 0;
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
	var uLocal_3526 = 0;
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
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
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
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
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
	var uLocal_3697 = 0;
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
	var uLocal_3724 = 0;
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
	var uLocal_3754 = 0;
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
	var uLocal_3781 = 0;
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
	var uLocal_3811 = 0;
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
	var uLocal_3838 = 0;
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
	var uLocal_3868 = 0;
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
	var uLocal_3895 = 0;
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
	var uLocal_3925 = 0;
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
	var uLocal_3952 = 0;
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
	var uLocal_3982 = 0;
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
	var uLocal_4009 = 0;
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
	var uLocal_4039 = 0;
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
	var uLocal_4066 = 0;
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
	var uLocal_4096 = 0;
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
	var uLocal_4123 = 0;
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
	var uLocal_4153 = 0;
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
	var uLocal_4180 = 0;
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
	var uLocal_4210 = 0;
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
	var uLocal_4237 = 0;
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
	var uLocal_4267 = 0;
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
	var uLocal_4294 = 0;
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
	var uLocal_4324 = 0;
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
	var uLocal_4351 = 0;
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
	var uLocal_4381 = 0;
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
	var uLocal_4408 = 0;
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
	var uLocal_4438 = 0;
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
	var uLocal_4465 = 0;
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
	var uLocal_4495 = 0;
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
	var uLocal_4522 = 0;
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
	var uLocal_4552 = 0;
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
	var uLocal_4579 = 0;
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
	var uLocal_4609 = 0;
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
	var uLocal_4636 = 0;
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
	var uLocal_4666 = 0;
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
	var uLocal_4693 = 0;
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
	var uLocal_4723 = 0;
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
	var uLocal_4750 = 0;
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
	var uLocal_4780 = 0;
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
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
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
	var uLocal_4843 = 0;
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
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
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
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
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
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	bool bLocal_5892 = 0;
	bool bLocal_5893 = 0;
	bool bLocal_5894 = 0;
	int iLocal_5895 = 0;
	int iLocal_5896 = 0;
	int iLocal_5897 = 0;
	float fLocal_5898 = 0f;
	float fLocal_5899 = 0f;
	int iLocal_5900 = 0;
	int iLocal_5901 = 0;
	int iLocal_5902 = 0;
	bool bLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 21;
	var uLocal_5914 = 6;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	int iLocal_5918 = 0;
	int iLocal_5919 = 0;
	int iLocal_5920 = 0;
	int iLocal_5921 = 0;
	var uLocal_5922 = 0;
	int iLocal_5923 = 0;
	int iLocal_5924 = 0;
	float fLocal_5925 = 0f;
	int iLocal_5926 = 0;
	int iLocal_5927 = 0;
	bool bLocal_5928 = 0;
	int iLocal_5929 = 0;
	int iLocal_5930 = 0;
	int iLocal_5931 = 0;
	int iLocal_5932 = 0;
	bool bLocal_5933 = 0;
	int iLocal_5934 = 0;
	int iLocal_5935 = 0;
	int iLocal_5936 = 0;
	int iLocal_5937 = 0;
	int iLocal_5938 = 0;
	int iLocal_5939 = 0;
	int iLocal_5940 = 0;
	float fLocal_5941 = 0f;
	int iLocal_5942 = 0;
	bool bLocal_5943 = 0;
	int iLocal_5944 = 0;
	int iLocal_5945 = 0;
	int iLocal_5946 = 0;
	int iLocal_5947 = 0;
	int iLocal_5948 = 0;
	int iLocal_5949 = 0;
	int iLocal_5950 = 0;
	int iLocal_5951 = 0;
	int iLocal_5952 = 0;
	int iLocal_5953 = 0;
	int iLocal_5954 = 0;
	int iLocal_5955 = 0;
	int iLocal_5956 = 0;
	int iLocal_5957 = 0;
	struct<6> Local_5958 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_5964 = 0;
	int iLocal_5965 = 0;
	int iLocal_5966 = 0;
	int iLocal_5967 = 0;
	int iLocal_5968 = 0;
	int iLocal_5969 = 0;
	int iLocal_5970 = 0;
	int iLocal_5971 = 0;
	float fLocal_5972 = 0f;
	float fLocal_5973 = 0f;
	float fLocal_5974 = 0f;
	float fLocal_5975 = 0f;
	int iLocal_5976 = 0;
	struct<3> Local_5977 = { 0, 0, 0 } ;
	int iLocal_5980 = 0;
	int iLocal_5981 = 0;
	int iLocal_5982 = 0;
	int iLocal_5983 = 0;
	int iLocal_5984 = 0;
	int iLocal_5985 = 0;
	struct<6> Local_5986 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_5992 = 0;
	float fLocal_5993 = 0f;
	int iLocal_5994 = 0;
	int iLocal_5995 = 0;
	int iLocal_5996 = 0;
	int iLocal_5997 = 0;
	int iLocal_5998 = 0;
	int iLocal_5999 = 0;
	int iLocal_6000 = 0;
	int iLocal_6001 = 0;
	int iLocal_6002 = 0;
	int iLocal_6003 = 0;
	int iLocal_6004 = 0;
	int iLocal_6005 = 0;
	int iLocal_6006 = 0;
	int iLocal_6007 = 0;
	int iLocal_6008 = 0;
	int iLocal_6009 = 0;
	int iLocal_6010 = 0;
	int iLocal_6011 = 0;
	int iLocal_6012 = 0;
	int iLocal_6013 = 0;
	int iLocal_6014 = 0;
	int iLocal_6015 = 0;
	int iLocal_6016 = 0;
	int iLocal_6017 = 0;
	int iLocal_6018 = 0;
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
	fLocal_48 = 500f;
	bLocal_49 = true;
	iLocal_51 = 1;
	bLocal_104 = true;
	bLocal_111 = true;
	bLocal_133 = true;
	fLocal_1182 = 120f;
	fLocal_1183 = 0f;
	fLocal_1185 = 1f;
	fLocal_1186 = 0f;
	fLocal_1187 = 1f;
	fLocal_1188 = 30f;
	fLocal_1190 = 1f;
	fLocal_1191 = 5f;
	fLocal_1192 = 1f;
	fLocal_1193 = 1f;
	fLocal_1194 = 100f;
	fLocal_1195 = 100f;
	fLocal_1196 = 0f;
	fLocal_1197 = 7000f;
	fLocal_1198 = 0f;
	fLocal_1199 = 0f;
	fLocal_1200 = 0.3f;
	fLocal_1201 = 0.5f;
	fLocal_1202 = 50f;
	iLocal_1764 = -1;
	iLocal_1772 = -1;
	iLocal_1773 = -1;
	iLocal_2922 = 2500;
	iLocal_2926 = 1;
	iLocal_2937 = 1200;
	iLocal_2948 = -1;
	iLocal_3009 = 28;
	Local_3011 = { -2151.272f, -268.0492f, 12.8775f };
	fLocal_3020 = 5f;
	iLocal_3225 = -1;
	iLocal_3226 = -1;
	iLocal_3227 = -1;
	iLocal_3228 = -1;
	iLocal_3229 = -1;
	iLocal_3230 = -1;
	iLocal_3231 = -1;
	iLocal_3232 = -1;
	iLocal_3233 = -1;
	iLocal_3234 = -1;
	iLocal_3235 = -1;
	Local_3238 = { -2322.091f, -320.1779f, 12.8207f };
	fLocal_3241 = 240.7513f;
	Local_3242 = { -825.1512f, 178.9821f, 70.3781f };
	fLocal_3245 = 145.2545f;
	Local_3246 = { 0f, -17.5f, -0.5f };
	Local_3249 = { -7f, 2.5f, -1f };
	fLocal_3252 = 3f;
	fLocal_3253 = 1f;
	fLocal_3254 = 1f;
	fLocal_3255 = 1f;
	fLocal_3268 = -10f;
	fLocal_3269 = 10f;
	fLocal_3270 = 1f;
	fLocal_3271 = 0.2f;
	fLocal_3272 = 0.85f;
	iLocal_5902 = 1;
	iLocal_5930 = 93;
	iLocal_5931 = 6;
	iLocal_5945 = 900;
	iLocal_5946 = 1200;
	iLocal_5948 = 2;
	iLocal_5995 = 1;
	iLocal_6009 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_836();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(1);
	GlobalFunc_52(0, 0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_FatherAndSon", 0);
		func_834();
		switch (iLocal_5900)
		{
			case 0:
				func_779();
				break;
			
			case 1:
				func_763();
				break;
			
			case 2:
				func_758();
				break;
			
			case 3:
				func_454();
				break;
			
			case 4:
				func_434();
				break;
			
			case 5:
			case 6:
			case 7:
				func_351();
				break;
			
			case 8:
				func_294();
				break;
			
			case 9:
				func_238();
				break;
			
			case 10:
				func_96();
				break;
			
			case 11:
				func_88();
				break;
			
			case 12:
				func_3();
				break;
			
			default:
				break;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_1();
			iLocal_6018 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_6018) < 5000)
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x319
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3210))
	{
		PED::SET_PED_RESET_FLAG(iLocal_3210, 287, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_2()))
	{
		PED::SET_PED_RESET_FLAG(func_2(), 287, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 287, 1);
		}
	}
}

int func_2()//Position - 0x372
{
	return uLocal_55[1];
}

void func_3()//Position - 0x37F
{
	CAM::SET_USE_HI_DOF();
	switch (iLocal_2998)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			func_79();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
			STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::NEW_LOAD_SCENE_START(1207.549f, -2559.342f, 37.09372f, GlobalFunc_107(Vector(37.0212f, -2559.404f, 1206.661f) - Vector(37.09372f, -2559.342f, 1207.549f)), 80f, 0);
			iLocal_2998++;
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "Fam1New");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1New");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1End");
			SYSTEM::SETTIMERA(0);
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() || SYSTEM::TIMERA() < 2000)
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			GlobalFunc_200(&uLocal_3324, 3);
			GlobalFunc_200(&uLocal_3324, 5);
			GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
			GlobalFunc_4935();
			func_56(0, 1);
			iLocal_2998++;
			break;
		
		case 2:
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "Fam1New") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1New")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1End"))
			{
				if (iLocal_5901 > 27)
				{
					CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_ALT2", 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_ALT3", 8);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3029, 20000, 0, 2);
				if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
					}
					if (iLocal_5901 >= 34)
					{
						TASK::CLEAR_PED_TASKS(func_2());
						TASK::TASK_LOOK_AT_ENTITY(func_2(), iLocal_3029, 20000, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
						{
							PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
						}
					}
				}
				if ((!PED::IS_PED_INJURED(iLocal_3210) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					if (iLocal_5901 >= 27)
					{
						TASK::CLEAR_PED_TASKS(iLocal_3210);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_3210, iLocal_3029, 20000, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iLocal_3210, iLocal_3026, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 2);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3029);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3029, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3029, 1, "Fam1New", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3029, 207553f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3029, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3030);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3030, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3030, 2, "Fam1New", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3030, 207553f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3030, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3026, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, 1, "Fam1End", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, 6000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3026, 1);
				}
				uLocal_3005 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				uLocal_3006 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				CAM::SET_CAM_COORD(uLocal_3005, 1203.361f, -2561.646f, 36.01843f);
				CAM::SET_CAM_ROT(uLocal_3005, -1.537818f, 0f, 87.2005f, 2);
				CAM::SET_CAM_FOV(uLocal_3005, 36.85648f);
				CAM::SET_CAM_COORD(uLocal_3006, 1203.101f, -2563.073f, 36.01843f);
				CAM::SET_CAM_ROT(uLocal_3006, 0.612468f, 0f, 80.39472f, 2);
				CAM::SET_CAM_FOV(uLocal_3006, 36.85648f);
				CAM::SET_CAM_FAR_DOF(uLocal_3006, 290.5f);
				CAM::SET_CAM_NEAR_DOF(uLocal_3006, 5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3006, uLocal_3005, 5000, 2, 0);
				MISC::CLEAR_AREA(267.7304f, -2688.268f, 18.78525f, 50f, 1, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				func_55(1, 0, 2000, 1, 1);
				GlobalFunc_4935();
				OBJECT::DELETE_OBJECT(&iLocal_3025);
				iLocal_2998++;
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 3:
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			if (SYSTEM::TIMERA() > 3500 && GlobalFunc_Has_Cutscene_Loaded())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3210) && iLocal_5901 > 27)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3210, "JIMMY", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3026, "AMANDAS_CAR", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				iLocal_2998++;
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_53);
				VEHICLE::DELETE_VEHICLE(&iLocal_54);
				VEHICLE::DELETE_VEHICLE(&iLocal_3029);
				func_55(0, 0, 2000, 1, 1);
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_7632(1);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
				}
				iLocal_2998++;
			}
			break;
		
		case 5:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_2998++;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
				if (iLocal_5901 >= 27)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026) && !PED::IS_PED_INJURED(iLocal_3210))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 0, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
				}
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_3026, 1195.442f, -2563.092f, 35.0116f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_3026, 289.3138f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
				func_40(0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_39();
				func_6();
			}
			break;
	}
	if (GlobalFunc_4926(1000) && iLocal_2998 < 4)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			SYSTEM::WAIT(0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_3029);
		VEHICLE::DELETE_VEHICLE(&iLocal_3030);
		func_40(0);
		iLocal_2998 = 5;
	}
}



void func_6()//Position - 0xA3F
{
	AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
	GlobalFunc_4935();
	GlobalFunc_9131(39, 0, 0);
	GlobalFunc_10616(0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_5574("YB_JIMTXT");
	PED::DELETE_PED(&iLocal_3210);
	PED::DELETE_PED(&(uLocal_55[1]));
	func_836();
	SCRIPT::TERMINATE_THIS_THREAD();
}

































void func_39()//Position - 0x2371
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_40(0);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 1, 1, 0, 0);
		if (!bLocal_5903)
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		}
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_40(int iParam0)//Position - 0x23B6
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam0, 1065353216);
}















void func_55(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x27E6
{
	CAM::SET_WIDESCREEN_BORDERS(bParam0, 0);
	if (iParam3 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 64);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(bParam0, iParam1, iParam2, 1, 0, 0);
	HUD::CLEAR_HELP(1);
	GlobalFunc_8316(bParam0, 1, iParam4, 0);
	GlobalFunc_7632(bParam0);
	HUD::DISPLAY_HUD(!bParam0);
	HUD::DISPLAY_RADAR(!bParam0);
}

void func_56(bool bParam0, bool bParam1)//Position - 0x2847
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2429))
	{
		iLocal_117 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2445);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_133)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_72());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_68();
			func_67();
			func_64();
		}
		else
		{
			func_60();
			func_59();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}



void func_59()//Position - 0x295D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 144)
	{
		iLocal_2659[iVar0] = 0;
		Local_1778[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_135[iVar0] = 0f;
		fLocal_280[iVar0] = 0f;
		fLocal_425[iVar0] = 0f;
		fLocal_570[iVar0] = 0f;
		iLocal_1203[iVar0] = 0;
		fLocal_715[iVar0] = 0f;
		iLocal_1348[iVar0] = 0;
		iLocal_2446[iVar0] = 0;
		iLocal_1493[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_2804[iVar0] = 0;
		iVar0++;
	}
	iLocal_1761 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_2812[iVar0] = 0;
		Local_2211[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1038[iVar0] = 0f;
		fLocal_1074[iVar0] = 0f;
		fLocal_1110[iVar0] = 0f;
		fLocal_1146[iVar0] = 0f;
		iLocal_1725[iVar0] = 0;
		iLocal_2591[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_2877[iVar0] = 0;
		iVar0++;
	}
	iLocal_1763 = 0;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iLocal_2848[iVar0] = 0;
		Local_2317[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_864[iVar0] = 0f;
		fLocal_893[iVar0] = 0f;
		fLocal_922[iVar0] = 0f;
		fLocal_951[iVar0] = 0f;
		iLocal_1638[iVar0] = 0;
		fLocal_980[iVar0] = 0f;
		iLocal_1667[iVar0] = 0;
		iLocal_2627[iVar0] = 0;
		iLocal_1696[iVar0] = 0;
		iVar0++;
	}
	iLocal_1762 = 0;
	iLocal_1765 = 0;
	iLocal_1768 = 0;
	iLocal_1769 = 0;
	iLocal_1770 = 0;
}

void func_60()//Position - 0x2AE9
{
	func_63();
	func_62();
	func_61();
}

void func_61()//Position - 0x2AFD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2848[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2848[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2848[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2848[iVar0]));
			}
		}
		iLocal_1667[iVar0] = 0;
		if (!bLocal_113 && !bLocal_126)
		{
			if (iLocal_1638[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!iLocal_2627[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2627[iVar0]);
		}
		iVar0++;
	}
}

void func_62()//Position - 0x2BF3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2812[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2812[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2812[iVar0]));
			}
		}
		iLocal_1725[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2591[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2591[iVar0]);
		}
		iVar0++;
	}
	iLocal_1766 = 0;
	iLocal_1763 = 0;
}

void func_63()//Position - 0x2C70
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2659[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2659[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2659[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2659[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2659[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2659[iVar0]));
			}
		}
		if (!bLocal_113 && !bLocal_126)
		{
			if (iLocal_1203[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429);
			}
		}
		iLocal_1348[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (!iLocal_2446[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2446[iVar0]);
		}
		iVar0++;
	}
	iLocal_1765 = 0;
	iLocal_1761 = 0;
}

void func_64()//Position - 0x2D6E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2848[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2848[iVar0]);
				}
			}
			func_66(iLocal_2848[iVar0]);
			GlobalFunc_2210(iLocal_2848[iVar0]);
		}
		iLocal_1667[iVar0] = 0;
		iLocal_1696[iVar0] = 0;
		if (!bLocal_113 && !bLocal_126)
		{
			if (iLocal_1638[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!iLocal_2627[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2627[iVar0]);
		}
		iVar0++;
	}
	iLocal_1767 = 0;
}


void func_66(int iParam0)//Position - 0x2E52
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
				if (bLocal_134)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_67()//Position - 0x2EEB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2812[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2812[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2812[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2812[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2591[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2591[iVar0]);
		}
		iVar0++;
	}
	iLocal_1766 = 0;
	iLocal_1763 = 0;
}

void func_68()//Position - 0x2F6E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2659[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2659[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2659[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2659[iVar0]);
				}
			}
			func_66(iLocal_2659[iVar0]);
			GlobalFunc_2210(iLocal_2659[iVar0]);
		}
		iLocal_1348[iVar0] = 0;
		iLocal_1493[iVar0] = 0;
		if (!bLocal_113 && !bLocal_126)
		{
			if (iLocal_1203[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (!iLocal_2446[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2446[iVar0]);
		}
		iVar0++;
	}
	iLocal_1765 = 0;
	iLocal_1761 = 0;
}




int func_72()//Position - 0x3082
{
	if (iLocal_2656 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2656;
}







void func_79()//Position - 0x3227
{
	if (HUD::DOES_BLIP_EXIST(uLocal_3021))
	{
		HUD::REMOVE_BLIP(&uLocal_3021);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3022))
	{
		HUD::REMOVE_BLIP(&uLocal_3022);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3023))
	{
		HUD::REMOVE_BLIP(&uLocal_3023);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3010))
	{
		HUD::REMOVE_BLIP(&uLocal_3010);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3276))
	{
		HUD::REMOVE_BLIP(&uLocal_3276);
	}
	GlobalFunc_5385(1);
	GlobalFunc_7139(&Local_2952, 0);
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
}









void func_88()//Position - 0x35B8
{
	CAM::SET_USE_HI_DOF();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_3026));
		ENTITY::SET_ENTITY_HEALTH(iLocal_3026, ENTITY::GET_ENTITY_HEALTH(iLocal_3026));
	}
	if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3026, 0) || GlobalFunc_2226(&iLocal_3026)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_3026))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_3210))
	{
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 0, 0);
	switch (iLocal_2996)
	{
		case 0:
			func_93();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
			STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
			GlobalFunc_200(&uLocal_3324, 3);
			GlobalFunc_200(&uLocal_3324, 5);
			GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
			CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_2", 8);
			HUD::CLEAR_PRINTS();
			GlobalFunc_8316(1, 1, 1, 0);
			AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			GlobalFunc_200(&uLocal_3324, 3);
			GlobalFunc_200(&uLocal_3324, 5);
			GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
			GlobalFunc_4935();
			OBJECT::DELETE_OBJECT(&iLocal_3025);
			iLocal_2996++;
			break;
		
		case 1:
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && GlobalFunc_Has_Cutscene_Loaded())
			{
				iLocal_2996++;
			}
			break;
		
		case 2:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3026, "Amandas_car", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3210, "Jimmy", 0, 0, 0);
			GlobalFunc_6685(1);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_2996++;
			break;
		
		case 3:
		case 4:
			if (iLocal_2996 == 3)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_39();
					iLocal_2996 = 4;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				func_40(0);
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 32000)
			{
				OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Global_34036[4 /*31*/], 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[4 /*31*/], 1f, 1, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				PED::DELETE_PED(&iLocal_3210);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				SYSTEM::SETTIMERA(0);
				iLocal_2996 = 5;
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 1000)
			{
				GlobalFunc_8316(0, 1, 1, 0);
				func_89();
			}
			break;
	}
}

void func_89()//Position - 0x3826
{
	func_55(0, 0, 2000, 1, 1);
	if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_583(4, PLAYER::PLAYER_PED_ID(), 0);
	}
	GlobalFunc_5103(0, 0);
	HUD::CLEAR_PRINTS();
	func_836();
	func_39();
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_93()//Position - 0x3A31
{
	int iVar0;
	
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Fam1New");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Fam1Cine");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "Fam1New");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "Fam1Cam");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "Fam1Cam");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("phantom"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tr3"));
	STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
	STREAMING::REMOVE_ANIM_SET("drive_by@low_ds");
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN");
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (iLocal_1203[iVar0] != 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1203[iVar0], "Fam1");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (iLocal_1638[iVar0] != 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1638[iVar0], "Fam1");
		}
		iVar0++;
	}
	func_94(&iLocal_3176, 0);
	func_94(&iLocal_3031, 0);
}

void func_94(int iParam0, bool bParam1)//Position - 0x3B1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*iParam0)[iVar0], 1, 0);
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(iParam0[iVar0]);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
			}
		}
		iVar0++;
	}
}


void func_96()//Position - 0x3BCA
{
	func_237();
	if (iLocal_2997 < 7 && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1127.798f, -1980.447f, 12.1875f, 75f, 75f, 75f, 0, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_3026) > 0f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, 0f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_3026) > 0f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_3026, 0f);
			}
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_3026, 1);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_99))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_3026))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 0f, 0);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 1f, 0);
			}
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 0f, 0);
		}
	}
	if (iLocal_2997 > 0 && iLocal_2997 < 5)
	{
		if (GlobalFunc_8624(39) || !GlobalFunc_8371(39))
		{
			GlobalFunc_509("YB_BLEWSHOP");
			func_6();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[0]) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PED::DELETE_PED(&(uLocal_55[0]));
	}
	if ((!GlobalFunc_8540(39) && CAM::IS_SCREEN_FADED_OUT()) && iLocal_2997 <= 1)
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	switch (iLocal_2997)
	{
		case 0:
			if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&Local_2952, 1)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 9f, 3);
				func_93();
				func_229();
				iLocal_2997++;
			}
			break;
		
		case 1:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (!GlobalFunc_580(4, PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_5125(4, PLAYER::PLAYER_PED_ID());
				}
				GlobalFunc_2898(1);
				func_225(39, 0);
				GlobalFunc_173(&uLocal_3324, 3, 0, "HAO", 0, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_173(&uLocal_3324, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				func_225(39, 1);
				iLocal_6012 = 0;
				iLocal_6008 = 0;
				GlobalFunc_4948(&uLocal_3300, 0, 0);
				Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_56 = 0;
				iLocal_6005 = MISC::GET_GAME_TIMER();
				GlobalFunc_164("YB_OBJ6", 7500, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3026, 0);
				iLocal_6016 = MISC::GET_GAME_TIMER();
				iLocal_6007 = 0;
				iLocal_2997++;
			}
			break;
		
		case 2:
		case 3:
		case 4:
		case 5:
			if (((iLocal_2997 == 2 && !GlobalFunc_5172(&Local_2952, 1)) && (MISC::GET_GAME_TIMER() - iLocal_6016) > 5000) && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_FIX2", 9, 0, 0, 0))
				{
					iLocal_2997 = 4;
				}
			}
			if ((iLocal_2997 == 4 && !GlobalFunc_5172(&Local_2952, 1)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bTriggeredHao1 == 1 && !MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 0))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HAO_SRL", 9, 0, 0, 0))
					{
						iLocal_2997 = 5;
					}
				}
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bTriggeredHao1 == 1 && MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, 0))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HAO_SRW", 9, 0, 0, 0))
					{
						iLocal_2997 = 5;
					}
				}
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bTriggeredHao1 == 0)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HAO_SR", 9, 0, 0, 0))
					{
						iLocal_2997 = 5;
					}
				}
			}
			func_212();
			if (GlobalFunc_8388(39))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_3026) >= 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_3026) >= 1000f)
				{
					AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_3026, 0f);
					AUDIO::_0x1C073274E065C6D2(iLocal_3026, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_CAR_BREAKS_DOWN"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_1_CAR_BREAKS_DOWN");
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_99))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_99, 0);
					}
				}
				if ((ENTITY::GET_ENTITY_HEALTH(iLocal_3026) >= 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_3026) >= 1000f) && !GlobalFunc_8388(39))
				{
					GlobalFunc_Checkpoint2(7, "STAGE_FIX_CAR_AND_TAKE_JIMMY_HOME", 1, 0, 0, 1);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					HUD::REMOVE_BLIP(&uLocal_3010);
					GlobalFunc_159("AM_H_CARMOD", -1);
					GlobalFunc_504(iLocal_3026, -1);
					iLocal_6013 = 0;
					iLocal_6014 = 0;
					RECORDING::_0x293220DA1B46CEBC(0f, 9f, 3);
					iLocal_2997 = 6;
				}
			}
			break;
		
		case 6:
		case 7:
		case 8:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && iLocal_6013 == 0) && !Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_262)
			{
				if (!func_144())
				{
					GlobalFunc_159("YB_MODAPP", 12000);
				}
				iLocal_6013 = 1;
			}
			if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && iLocal_6013) && iLocal_6014 == 0) && !Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_262)
			{
				if (!func_144())
				{
					GlobalFunc_159("YB_CARAPP", -1);
				}
				iLocal_6014 = 1;
			}
			if (iLocal_2997 == 6)
			{
				func_105(&Local_2952, -828.5845f, 172.413f, 69.4003f, 7f, 7f, 1.75f, 1, iLocal_3210, 0, 0, iLocal_3026, "YB_OBJ7", "CMN_JLEAVE", "", "", "CMN_JLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1);
				if (GlobalFunc_2499(39) > 20f)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HOME", 9, 0, 0, 0))
					{
						iLocal_6015 = 0;
						iLocal_2997 = 7;
					}
				}
			}
			switch (iLocal_6015)
			{
				case 0:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -828.5845f, 172.413f, 69.4503f, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_2", 8);
						STREAMING::REQUEST_MODEL(joaat("prop_lrggate_02_ld"));
						iLocal_6015++;
					}
					break;
				
				case 1:
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
						iLocal_6015++;
					}
					break;
			}
			if (func_105(&Local_2952, -828.5845f, 172.413f, 69.4003f, 5f, 5f, 1.75f, 1, iLocal_3210, 0, 0, iLocal_3026, "YB_OBJ7", "CMN_JLEAVE", "", "", "CMN_JLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1))
			{
				while (!GlobalFunc_530(iLocal_3026, 1093140480, 1, 1056964608, 0, 1))
				{
					RECORDING::_0x208784099002BC30("M_FatherAndSon", 0);
					SYSTEM::WAIT(0);
				}
				RECORDING::_0x293220DA1B46CEBC(4f, 4f, 3);
				iLocal_2995 = 0;
				iLocal_5900 = 11;
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2997 == 7)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_FJCHAT", 9, 0, 0, 0))
				{
					iLocal_2997 = 8;
				}
			}
			if ((iLocal_2997 == 8 && (MISC::GET_GAME_TIMER() - iLocal_6017) > 10000) && !GlobalFunc_5172(&Local_2952, 1))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_FRKILL", 9, 0, 0, 0))
					{
						iLocal_6017 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_2952.f_5) || ENTITY::IS_ENTITY_IN_WATER(iLocal_3026))
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
			else if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), iLocal_3210))
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
			break;
	}
	if (iLocal_2997 > 1 && iLocal_2997 < 6)
	{
		func_97();
	}
}

void func_97()//Position - 0x430C
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
	{
		iVar0 = func_98();
		iVar1 = iVar0;
		if (!iLocal_6008 && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_3026) >= 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_3026) >= 1000f)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_RECON", 9, 0, 0, 0))
				{
					iLocal_6009 = 0;
					iLocal_6008 = 1;
				}
			}
		}
		if ((((((!iLocal_6007 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5172(&Local_2952, 1)) && iLocal_2997 <= 4) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && GlobalFunc_2499(39) < 6f) && ENTITY::GET_ENTITY_HEALTH(iLocal_3026) < 1000)
		{
			if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HAO", 9, 0, 0, 0))
			{
				iLocal_6007 = 1;
			}
		}
		if ((((MISC::GET_GAME_TIMER() - iLocal_6005) > 18000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5172(&Local_2952, 1)) || ((iLocal_6006 - iVar1) != 0 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
		{
			switch (iVar0)
			{
				case 10:
				case 53:
				case 12:
				case 50:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MOD4", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 38:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MOD2", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 56:
				case 58:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MOD1", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 60:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MOD6", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 47:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MOD3", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 8:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MOD5", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 3:
				case 4:
				case 5:
				case 7:
				case 9:
				case 13:
				case 15:
				case 23:
				case 26:
				case 27:
				case 31:
				case 28:
				case 33:
				case 40:
				case 44:
				case 46:
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_MODG", 9, 0, 0, 0))
					{
						iLocal_6005 = MISC::GET_GAME_TIMER();
					}
					break;
				}
		}
		if (((((iLocal_6006 == iVar1 && (MISC::GET_GAME_TIMER() - iLocal_6005) > 20000) && !GlobalFunc_5172(&Local_2952, 1)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026))
			{
				if (iLocal_6009 == 0)
				{
					iLocal_6009 = 1;
				}
				else if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_NOMOD", 9, 0, 0, 0))
				{
					iLocal_6005 = MISC::GET_GAME_TIMER();
				}
			}
		}
		iLocal_6006 = iVar1;
	}
}

var func_98()//Position - 0x4656
{
	return Global_90014.f_377;
}







bool func_105(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x489E
{
	return func_106(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_106(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x48E8
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
	uParam0->f_17[0] = uParam15;
	uParam0->f_17[1] = uParam16;
	uParam0->f_17[2] = uParam17;
	uParam0->f_16 = uParam15;
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






































int func_144()//Position - 0x70C3
{
	if (Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_262)
	{
		return 1;
	}
	return 0;
}




































































void func_212()//Position - 0xDBE4
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
	{
		if (iLocal_6010 == 0)
		{
			uLocal_3010 = GlobalFunc_6783(iLocal_3026, 0, 0);
			if (iLocal_6011 == 0)
			{
				GlobalFunc_164("CMN_GENGETBCK", 7500, 1);
				iLocal_6011 = 1;
			}
			iLocal_6010 = 1;
		}
	}
	else if (iLocal_6010 == 1)
	{
		if (iLocal_6012 == 0)
		{
			GlobalFunc_164("YB_OBJ6", 7500, 1);
			iLocal_6012 = 1;
		}
		HUD::REMOVE_BLIP(&uLocal_3010);
		iLocal_6010 = 0;
	}
}













void func_225(int iParam0, bool bParam1)//Position - 0xE363
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 8, 0))
		{
			GlobalFunc_7930(iParam0, 8, 0);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7702(iParam0, 8, 0))
	{
		GlobalFunc_7929(iParam0, 8, 0);
		GlobalFunc_1293(iParam0);
	}
}




void func_229()//Position - 0xE4EB
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tr3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("phantom"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
}








void func_237()//Position - 0xE62E
{
	int iVar0;
	int iVar1;
	
	if (CAM::IS_SCREEN_FADED_IN())
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.0607f, 179.5117f, 71.1531f, "v_michael"))
		{
			if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 38, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
				{
					if (iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
				if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1))
				{
					if (iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object"))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3026))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3026, 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_3026))
			{
				GlobalFunc_509("CMN_GENDEST");
				func_6();
			}
			if (GlobalFunc_2226(&iLocal_3026))
			{
				GlobalFunc_509("CMN_GENSTCK");
				func_6();
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_3026, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 150f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3026))
					{
						GlobalFunc_509("YB_FAIL2");
						SYSTEM::SETTIMERA(0);
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
						func_6();
					}
				}
			}
		}
	}
}

void func_238()//Position - 0xE80E
{
	CAM::SET_USE_HI_DOF();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_3026));
		ENTITY::SET_ENTITY_HEALTH(iLocal_3026, ENTITY::GET_ENTITY_HEALTH(iLocal_3026));
	}
	if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3026, 0) || GlobalFunc_2226(&iLocal_3026)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_3026))
	{
		GlobalFunc_509("CMN_GENDEST");
		func_6();
	}
	if (PED::IS_PED_INJURED(iLocal_3210))
	{
		GlobalFunc_509("YB_FAIL1");
		func_6();
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
	}
	switch (iLocal_2995)
	{
		case 0:
			GlobalFunc_9131(39, 1, 0);
			GlobalFunc_8625(39, 0);
			func_93();
			func_229();
			GlobalFunc_4948(&uLocal_3300, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
			STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit");
			CUTSCENE::REQUEST_CUTSCENE("FAM_1_MCS_2", 8);
			HUD::CLEAR_PRINTS();
			GlobalFunc_8316(1, 1, 1, 0);
			AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			GlobalFunc_200(&uLocal_3324, 3);
			GlobalFunc_200(&uLocal_3324, 5);
			iLocal_6003 = 0;
			iLocal_6004 = 0;
			GlobalFunc_4935();
			GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
			GlobalFunc_5105();
			OBJECT::DELETE_OBJECT(&iLocal_3025);
			iLocal_2995++;
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_3210, 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_2(), 0);
			}
			if ((STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit") && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && GlobalFunc_Has_Cutscene_Loaded())
			{
				iLocal_2995++;
			}
			break;
		
		case 2:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3026, "Amandas_car", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_2(), "Franklin", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3210, "Jimmy", 0, 0, 0);
			iLocal_6002 = 0;
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_2995++;
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_6002 == 0)
			{
				MISC::CLEAR_AREA(-1127.798f, -1980.447f, 12.1875f, 150f, 1, 0, 0, 0);
				func_39();
				iLocal_6002 = 1;
			}
			if ((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 11000f && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME()) && iLocal_6003 == 0)
			{
				GlobalFunc_159("YB_TAXI", 9000);
				iLocal_6003 = 1;
			}
			if (((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 23000f && iLocal_6003 == 1) && iLocal_6004 == 0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
				iLocal_6004 = 1;
			}
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 8332 && CUTSCENE::GET_CUTSCENE_TIME() < 14300)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-1127.798f, -1980.447f, 12.1875f, 150f, 0, 0, 0, 0, 0);
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 27850)
			{
				func_290(1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amandas_car", joaat("sentinel2")))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3026, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (GlobalFunc_8315() != 1)
				{
					GlobalFunc_9134(&uLocal_55, 1);
					func_239(&uLocal_55, 1, 1, 1);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3210) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_3210, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT"));
					PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 1, 0);
				}
				if (GlobalFunc_8315() != 1)
				{
					GlobalFunc_9134(&uLocal_55, 1);
					func_239(&uLocal_55, 1, 1, 1);
				}
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3026, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				RECORDING::_0x81CBAE94390F9F89();
				GlobalFunc_8316(0, 1, 1, 0);
				func_39();
				iLocal_5900 = 10;
				iLocal_2995++;
			}
			break;
	}
}

int func_239(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xEC3C
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
			GlobalFunc_9023(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9023((*uParam0)[uParam0->f_7], 0);
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
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
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



















































void func_290(int iParam0)//Position - 0x14A6D
{
	Global_90014.f_378 = iParam0;
}




void func_294()//Position - 0x14AE9
{
	func_237();
	if (!PED::IS_PED_INJURED(func_2()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
			{
				PED::SET_PED_CAN_RAGDOLL(func_2(), 0);
			}
			else
			{
				PED::SET_PED_CAN_RAGDOLL(func_2(), 1);
			}
		}
	}
	else
	{
		GlobalFunc_509("CMN_FDIED");
		func_79();
		AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
		func_6();
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_99))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_3026))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 0f, 0);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 1f, 0);
			}
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 0f, 0);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
	if (PED::IS_PED_INJURED(iLocal_3210))
	{
		GlobalFunc_509("YB_FAIL1");
		func_6();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3030))
		{
			func_348();
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 1f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) > 500f || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3030))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3030);
			VEHICLE::DELETE_VEHICLE(&iLocal_3029);
			PED::DELETE_PED(&iLocal_3205);
			PED::DELETE_PED(&iLocal_3207);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3029))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3029);
			PED::DELETE_PED(&iLocal_3205);
		}
	}
	switch (iLocal_2989)
	{
		case 0:
			func_93();
			func_229();
			iLocal_6000 = 0;
			iLocal_6001 = 0;
			iLocal_5999 = 0;
			iLocal_2989++;
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_COAX", 9, 0, 0, 0))
				{
					GlobalFunc_4948(&uLocal_3300, 0, 0);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 3.95f);
					iLocal_2989++;
				}
			}
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_DIST", 9, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3.5f, 5f, 3);
					iLocal_2989++;
				}
			}
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			HUD::SET_RADAR_ZOOM(0);
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.9f);
			iLocal_2989++;
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3029))
				{
					func_321(iLocal_3029, fLocal_3253);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3030))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3030, fLocal_3253);
				}
			}
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_3030) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) > 250f) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3030))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_01"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3206);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3207);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3208);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3209);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3205);
				STREAMING::REMOVE_PTFX_ASSET();
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
				STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
				if (!PED::IS_PED_INJURED(func_2()))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), 1);
				}
				iLocal_5999 = 0;
				func_56(0, 1);
				CUTSCENE::REMOVE_CUTSCENE();
				func_79();
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10.9f);
				GlobalFunc_Checkpoint2(5, "STAGE_TAKE_CAR_TO_CHOP_SHOP", 0, 0, 0, 1);
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_99) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					uLocal_99 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_3026, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3026, "overheat"), 1065353216, 0, 0, 0);
				}
				AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_3026, 0.75f);
				AUDIO::_0x1C073274E065C6D2(iLocal_3026, 1);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 1f, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3026, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 1, 1);
				}
				func_39();
				iLocal_2989++;
			}
			break;
		
		case 5:
			if (PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.35f);
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CHOP", 9, 0, 0, 0))
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 7.9f);
					iLocal_2989++;
				}
				else
				{
					func_105(&Local_2952, -1104.313f, -1975.673f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_3026, "YB_OBJ5", "CMN_FLEAVE", "", "", "CMN_FLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1);
				}
			}
			break;
		
		case 6:
			func_105(&Local_2952, -1104.313f, -1975.673f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_3026, "YB_OBJ5", "CMN_FLEAVE", "", "", "CMN_FLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.35f);
			if (!GlobalFunc_5172(&Local_2952, 2))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 6.9f);
				iLocal_2989++;
			}
			break;
		
		case 7:
			func_105(&Local_2952, -1104.313f, -1975.673f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_3026, "YB_OBJ5", "CMN_FLEAVE", "", "", "CMN_FLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_RADIO_START"))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 5.45f);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_RADIO_START");
				iLocal_2989++;
			}
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			if (func_105(&Local_2952, -1104.313f, -1975.673f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_3026, "YB_OBJ5", "CMN_FLEAVE", "", "", "CMN_FLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1))
			{
				GlobalFunc_5105();
				while (!GlobalFunc_530(iLocal_3026, 4f, 1, 1056964608, 0, 1))
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_225(39, 1);
				GlobalFunc_9131(39, 1, 0);
				GlobalFunc_8522(39);
				GlobalFunc_7139(&Local_2952, 0);
				iLocal_5900 = 9;
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 8)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_DRIVE", 9, 0, 0, 0))
				{
					iLocal_2989 = 9;
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 9)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CAB", 9, 0, 0, 0))
				{
					iLocal_2989 = 10;
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 10)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_OKAY", 9, 0, 0, 0))
				{
					if (!PED::IS_PED_INJURED(func_2()))
					{
						TASK::TASK_USE_MOBILE_PHONE(func_2(), 1, 1);
						PED::_0x83A169EABCDB10A2(func_2(), GlobalFunc_2899(1));
					}
					SYSTEM::SETTIMERA(0);
					iLocal_2989 = 11;
				}
			}
			if ((!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 11) && SYSTEM::TIMERA() > 3300)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_FCALL", 9, 0, 0, 0))
				{
					iLocal_2989 = 12;
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 12)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CHEERS", 9, 0, 0, 0))
				{
					if (!PED::IS_PED_INJURED(func_2()))
					{
						TASK::TASK_USE_MOBILE_PHONE(func_2(), 0, 1);
					}
					iLocal_2989 = 13;
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 13)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1104.313f, -1975.673f, 12.0489f, 1) > 700f)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_TALK1", 9, 0, 0, 0))
					{
						iLocal_2989 = 14;
					}
				}
				else
				{
					iLocal_2989 = 14;
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_2989 == 14)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_TALK2", 9, 0, 0, 0))
				{
					iLocal_5995 = 0;
					iLocal_2989 = 15;
				}
			}
			if ((!GlobalFunc_5172(&Local_2952, 1) && !iLocal_5995) && iLocal_2989 >= 15)
			{
				iLocal_5995 = 1;
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_5996 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -848.5854f, -1785.809f, 39.20773f, -908.4215f, -1853.111f, 31.63717f, 21.25f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_DIROFF", 9, 0, 0, 0))
					{
						iLocal_5996 = 1;
					}
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_5997 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -769.8086f, -1758.869f, 31.0808f, -803.9045f, -1764.792f, 27.92837f, 16.5f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_LEFT", 9, 0, 0, 0))
					{
						iLocal_5997 = 1;
					}
				}
			}
			if (!GlobalFunc_5172(&Local_2952, 1) && iLocal_5998 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -646.4658f, -1480.473f, 12.64701f, -653.4559f, -1520.634f, 7.573039f, 16.5f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_LEFT", 9, 0, 0, 0))
					{
						iLocal_5998 = 1;
					}
				}
			}
			break;
	}
	if (iLocal_2989 > 7)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1104.313f, -1975.673f, 12.0489f, 1) < (100f * 1.8f))
		{
			if (iLocal_6000 == 1 && iLocal_6001 == 0)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_ARRIVE", 9, 0, 0, 0))
				{
					iLocal_6001 = 1;
				}
			}
			if (iLocal_6000 == 0)
			{
				GlobalFunc_4935();
				iLocal_2989 = 15;
				iLocal_5995 = 1;
				iLocal_6000 = 1;
			}
		}
	}
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1104.313f, -1975.673f, 12.0489f, 1) < (100f * 1.6f))
	{
		if (iLocal_5999 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("FAM_1_MCS_2", 8);
			GlobalFunc_10829(1, 94, 2000, 0, 0);
			iLocal_5999 = 1;
		}
		else
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_3210, 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_2(), 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(Local_2952.f_5) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
	{
		if (!GlobalFunc_620())
		{
			GlobalFunc_619(1);
		}
	}
	else if (GlobalFunc_620())
	{
		if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), func_2()))
		{
			GlobalFunc_619(0);
		}
	}
}



























void func_321(int iParam0, float fParam1)//Position - 0x164F0
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_132 = false;
	if (!bLocal_114)
	{
		if (bLocal_113)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_114 = true;
		}
	}
	else if (!bLocal_113)
	{
		GlobalFunc_2214();
		bLocal_114 = false;
	}
	if (bLocal_113)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_107)
	{
		if (iLocal_102)
		{
			fLocal_1187 = 0f;
		}
		else
		{
			fLocal_1187 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_112 = 1;
					}
					else
					{
						iLocal_112 = 0;
					}
				}
				fLocal_1184 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1185) * fLocal_1187));
				if (bLocal_111)
				{
					func_344(iParam0, fLocal_1184);
					func_343(iParam0, fLocal_1194);
					if (fLocal_1189 > 1000f)
					{
						if (iLocal_1777 == 0)
						{
							func_342(iParam0, fLocal_1194);
						}
						fVar0 = ((fLocal_1184 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1777) * 2000f));
						func_341(iParam0, fVar0, fLocal_1188);
						iLocal_1777++;
						if (iLocal_1777 > 2)
						{
							fLocal_1189 = 0f;
						}
					}
					else
					{
						iLocal_1777 = 0;
						fLocal_1189 = (fLocal_1189 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1184 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_119)
		{
			if (!iLocal_101)
			{
				func_338(iParam0, ((fParam1 * fLocal_1185) * fLocal_1187), 0);
				if (!iLocal_122)
				{
				}
				iLocal_122 = 0;
			}
			if (bLocal_104)
			{
				func_337(iParam0);
			}
			if (!iLocal_101)
			{
				func_324(iParam0, ((fParam1 * fLocal_1185) * fLocal_1187), 0);
			}
		}
		if (iLocal_109)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_2884 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2402 = { ENTITY::GET_ENTITY_COORDS(iLocal_2884, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_2884, &uLocal_860, &uLocal_861, &uLocal_862, &uLocal_863);
				}
			}
			iLocal_109 = 0;
		}
		if (iLocal_108)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2884))
			{
				GlobalFunc_2210(iLocal_2885);
				iLocal_2885 = iLocal_2884;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2885, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2885, Local_2402, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_2885, uLocal_860, uLocal_861, uLocal_862, uLocal_863);
			}
			fLocal_1183 = fLocal_1186;
			iLocal_101 = 1;
			iLocal_108 = 0;
		}
		if (iLocal_101)
		{
			while (!func_322(&iParam0, fLocal_1183))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_102 = 1;
		}
		if (iLocal_115)
		{
			iLocal_115 = 0;
		}
	}
}

int func_322(int iParam0, float fParam1)//Position - 0x1678B
{
	if (!iLocal_116)
	{
		iLocal_101 = 1;
		func_60();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1764 == -1)
			{
				while (!func_323(iParam0, iLocal_1764, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_106)
				{
					iLocal_102 = 1;
					fLocal_1187 = 0f;
					iLocal_1765 = 0;
					iLocal_1767 = 0;
					iLocal_1766 = 0;
					iLocal_1761 = 0;
					iLocal_1762 = 0;
					iLocal_1763 = 0;
					iLocal_1768 = 0;
					iLocal_1769 = 0;
					iLocal_1770 = 0;
				}
			}
		}
		iLocal_116 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1185) * fLocal_1187));
				func_323(iParam0, iLocal_1764, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1184 = fParam1;
		iLocal_1771 = 0;
		iLocal_1774 = 0;
		fLocal_1199 = 0f;
		fLocal_1198 = 0f;
		func_324(*iParam0, ((1f * fLocal_1185) * fLocal_1187), 1);
		func_338(*iParam0, ((1f * fLocal_1185) * fLocal_1187), 1);
		func_337(*iParam0);
		if ((iLocal_1768 == 0 && iLocal_1769 == 0) && iLocal_1770 == 0)
		{
			iLocal_102 = 0;
			iLocal_101 = 0;
			iLocal_116 = 0;
			return 1;
		}
	}
	return 0;
}

int func_323(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x168BD
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2429);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2429))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2429, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1772 && iParam1 != iLocal_1773)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2429, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2429, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2429, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2429, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2429))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2429);
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
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2429, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1772 && iParam1 != iLocal_1773)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2429, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2429, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2429, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2429, 1);
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

void func_324(int iParam0, float fParam1, bool bParam2)//Position - 0x16AA3
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
		iVar0 = iLocal_1767;
		while (iVar0 < 28)
		{
			if (iLocal_1667[iVar0] != 99)
			{
				if (iLocal_1667[iVar0] == 0)
				{
					if (iLocal_1638[iVar0] > 0)
					{
						if (!iLocal_101)
						{
							if (fLocal_1184 > (fLocal_980[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2627[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1696[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2627[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1696[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1696[iVar0]), 1);
								iLocal_1667[iVar0]++;
								iLocal_1769++;
							}
						}
						else
						{
							fVar12 = (fLocal_1184 - fLocal_980[iVar0]);
							fVar12 = (fVar12 * fLocal_1009[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_335(iLocal_1638[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2627[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1696[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2627[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1696[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1696[iVar0]), 1);
									iLocal_1667[iVar0]++;
									iLocal_1769++;
								}
								else
								{
									iLocal_1667[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1667[iVar0] = 99;
					}
				}
				else if (iLocal_1667[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429);
					if (MISC::IS_BIT_SET(iLocal_1696[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_128 && ((!MISC::IS_BIT_SET(iLocal_1696[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1696[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_72());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_72());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2627[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2627[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1638[iVar0], &cLocal_2429))
							{
								if (fLocal_1184 >= (fLocal_980[iVar0] - (fLocal_1197 * fParam1)))
								{
									if ((iLocal_115 || bParam2) || (!bLocal_132 && !func_334(Local_2317[iVar0 /*3*/], Var9, 5f, fLocal_1195)))
									{
										if (bLocal_111)
										{
											func_333(Local_2317[iVar0 /*3*/], Var9, fLocal_1188);
										}
										iLocal_2848[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2627[iVar0], Local_2317[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2627[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2848[iVar0], 0);
										}
										if (iLocal_124 && !MISC::IS_BIT_SET(iLocal_1696[iVar0], 0))
										{
											func_332(iLocal_2848[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1696[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2848[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2848[iVar0], Local_2317[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2848[iVar0], fLocal_864[iVar0], fLocal_893[iVar0], fLocal_922[iVar0], fLocal_951[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2627[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2627[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2848[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2848[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2848[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2848[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2627[iVar0]);
										iLocal_1769 = (iLocal_1769 - 1);
										iLocal_1667[iVar0]++;
										bLocal_132 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2848[iVar0], Local_2317[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2848[iVar0], fLocal_864[iVar0], fLocal_893[iVar0], fLocal_922[iVar0], fLocal_951[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2627[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2627[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2848[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2848[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2627[iVar0]);
							iLocal_1769 = (iLocal_1769 - 1);
							iLocal_1667[iVar0]++;
						}
					}
				}
				else if (iLocal_1667[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429);
					if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1696[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_128 && ((!MISC::IS_BIT_SET(iLocal_1696[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1696[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_72());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_72());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[iVar0]))
						{
							if (!bLocal_132 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2848[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2848[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_115)
									{
										func_330(&(iLocal_2848[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1696[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
					{
						if (fLocal_1184 >= fLocal_980[iVar0])
						{
							if (5 > iLocal_1762)
							{
								fVar12 = (fLocal_1184 - fLocal_980[iVar0]);
								fVar12 = (fVar12 * fLocal_1009[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1638[iVar0], &cLocal_2429))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2848[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1638[iVar0], fVar12, &cLocal_2429) };
										if (((!func_334(Var3, Var9, 5f, fLocal_1195) && func_334(Var6, Var9, 5f, fLocal_1195)) && !iLocal_115) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 1))
											{
												func_330(&(iLocal_2848[iVar0]), iVar19, 1);
											}
											iLocal_1762++;
											iLocal_1667[iVar0]++;
										}
										else if (((!bLocal_132 || MISC::IS_BIT_SET(iLocal_1696[iVar0], 1)) || iLocal_115) || bParam2)
										{
											if (func_323(&(iLocal_2848[iVar0]), iLocal_1638[iVar0], fVar12, 1, 0, 0, bLocal_130, bLocal_129))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2848[iVar0], (fParam1 * fLocal_1009[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1696[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2848[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2848[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2848[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2627[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2848[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 1))
												{
													func_330(&(iLocal_2848[iVar0]), iVar19, 1);
												}
												iLocal_1762++;
												iLocal_1667[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 1))
										{
											func_330(&(iLocal_2848[iVar0]), iVar19, 1);
										}
										iLocal_1762++;
										iLocal_1667[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 1))
								{
									func_330(&(iLocal_2848[iVar0]), iVar19, 1);
								}
								iLocal_1762++;
								iLocal_1667[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1696[iVar0], 1))
						{
							func_330(&(iLocal_2848[iVar0]), iVar19, 1);
						}
						iLocal_1762++;
						iLocal_1667[iVar0]++;
					}
				}
				else if (iLocal_1667[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2848[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_105 && !iLocal_102) && !bLocal_121) && (((!bLocal_130 && !bLocal_129) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2848[iVar0])) || func_329(iLocal_2848[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_123)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2848[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2848[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2848[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_325(iLocal_2848[iVar0]);
												iLocal_1667[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2848[iVar0], (fParam1 * fLocal_1009[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2848[iVar0]);
							}
						}
						else
						{
							iLocal_1667[iVar0]++;
						}
					}
					else
					{
						iLocal_1667[iVar0]++;
					}
				}
				else if (iLocal_1667[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2848[iVar0]))
						{
							iLocal_1667[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2848[iVar0], (fParam1 * fLocal_1009[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2848[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1638[iVar0], &cLocal_2429))
							{
								if (fLocal_1184 > (fLocal_980[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2848[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2848[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1667[iVar0]++;
					}
				}
				else if (iLocal_1667[iVar0] == 5)
				{
					if (!iLocal_2848[iVar0] == iLocal_2886)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2848[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2848[iVar0]);
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
						if (!bLocal_113 && !bLocal_126)
						{
							if (iLocal_1638[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1638[iVar0], &cLocal_2429);
							}
						}
						if (!bLocal_103)
						{
							if (!bLocal_131)
							{
								GlobalFunc_2210(iLocal_2848[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2848[iVar0]));
						}
					}
					iLocal_1762 = (iLocal_1762 - 1);
					iLocal_1667[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1767 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_64();
	}
}

void func_325(int iParam0)//Position - 0x176A0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_66(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_329(int iParam0)//Position - 0x17803
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_127)
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

int func_330(var uParam0, int iParam1, bool bParam2)//Position - 0x17860
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2445);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_72(), -1, 0, 0);
				if (bLocal_133)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_72());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_134)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_132 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_332(var uParam0)//Position - 0x1796C
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2657 >= -1 && iLocal_2658 >= -1)
	{
		while (iVar0 == iLocal_2657 || iVar0 == iLocal_2658)
		{
			iVar0++;
		}
	}
	else if (iLocal_2657 >= -1)
	{
		if (iVar0 == iLocal_2657)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 0, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
			break;
	}
}

void func_333(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x17AE5
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_114)
	{
		if (!func_334(Param0, Param3, fParam6, 200f))
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

int func_334(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x17B55
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_114)
		{
			if (!iLocal_101)
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

float func_335(int iParam0)//Position - 0x17B9C
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2429);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2429))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2429);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2429);
	return uVar0;
}


void func_337(int iParam0)//Position - 0x17C52
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
		iVar0 = iLocal_1766;
		while (iVar0 < 35)
		{
			switch (iLocal_1725[iVar0])
			{
				case 0:
					if (!iLocal_2591[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2211[iVar0 /*3*/], fLocal_1182, fLocal_1182, fLocal_1182, 0, 1, 0))
						{
							iLocal_1768++;
							iLocal_1725[iVar0]++;
						}
					}
					else
					{
						iLocal_1725[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1763)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2812[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2591[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2591[iVar0]))
							{
								if ((iLocal_101 || iLocal_115) || (!bLocal_132 && !func_334(Local_2211[iVar0 /*3*/], Var1, 5f, fLocal_1195)))
								{
									if (bLocal_111)
									{
										func_333(Local_2211[iVar0 /*3*/], Var1, fLocal_1188);
									}
									iLocal_2812[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2591[iVar0], Local_2211[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2591[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2812[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2812[iVar0], fLocal_1038[iVar0], fLocal_1074[iVar0], fLocal_1110[iVar0], fLocal_1146[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2591[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2812[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2812[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2591[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2812[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2812[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2812[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2812[iVar0], 1);
									iLocal_1768 = (iLocal_1768 - 1);
									iLocal_1763++;
									iLocal_1725[iVar0]++;
									bLocal_132 = true;
								}
							}
						}
						else
						{
							iLocal_1768 = (iLocal_1768 - 1);
							iLocal_1763++;
							iLocal_1725[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2812[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2812[iVar0], 1) };
						}
						if (fLocal_1196 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1196 * fLocal_1196))
						{
							if (!GlobalFunc_5654(iLocal_2812[iVar0], iParam0, 0))
							{
								if (!bLocal_103)
								{
									GlobalFunc_2210(iLocal_2812[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2812[iVar0]));
								}
								iLocal_1763 = (iLocal_1763 - 1);
								iLocal_1725[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1725[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1766 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_67();
	}
}

void func_338(int iParam0, float fParam1, int iParam2)//Position - 0x17F48
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
			fLocal_1184 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1765;
		while (iVar0 < 144 && !bVar23)
		{
			if (iLocal_1348[iVar0] != 99)
			{
				if (iLocal_1348[iVar0] == 0)
				{
					if (iLocal_1203[iVar0] > 0 && iLocal_2446[iVar0] != 0)
					{
						if (!iLocal_101)
						{
							if (fLocal_1184 < (fLocal_715[iVar0] + 20000f))
							{
								if (fLocal_1184 >= (fLocal_715[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2446[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1493[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2446[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1493[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1493[iVar0]), 1);
									iLocal_1770++;
									iLocal_1348[iVar0]++;
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
								func_340(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1184 - fLocal_715[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_335(iLocal_1203[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2446[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1493[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2446[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1493[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1493[iVar0]), 1);
									iLocal_1770++;
									iLocal_1348[iVar0]++;
								}
								else
								{
									func_340(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_340(iVar0, 1090519040);
					}
				}
				else if (iLocal_1348[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1493[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_128 && ((!MISC::IS_BIT_SET(iLocal_1493[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1493[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_72());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_72());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2446[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2446[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1203[iVar0], &cLocal_2429)) && bVar17)
						{
							if (fLocal_1184 >= (fLocal_715[iVar0] - (fLocal_1197 * fParam1)))
							{
								if ((iLocal_115 || iParam2) || (!bLocal_132 && !func_334(Local_1778[iVar0 /*3*/], Var12, 5f, fLocal_1195)))
								{
									if (bLocal_111)
									{
										func_333(Local_1778[iVar0 /*3*/], Var12, fLocal_1188);
									}
									iLocal_2659[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2446[iVar0], Local_1778[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2446[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2659[iVar0], 0);
									}
									if (iLocal_124 && !MISC::IS_BIT_SET(iLocal_1493[iVar0], 0))
									{
										func_332(iLocal_2659[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2659[iVar0], Local_1778[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2659[iVar0], fLocal_135[iVar0], fLocal_280[iVar0], fLocal_425[iVar0], fLocal_570[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2446[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2446[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2659[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1493[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2659[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2659[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2659[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2659[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2659[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2446[iVar0]);
									iLocal_1770 = (iLocal_1770 - 1);
									iLocal_1348[iVar0]++;
									bLocal_132 = true;
								}
								else if (fLocal_1184 > fLocal_715[iVar0])
								{
									iLocal_1770 = (iLocal_1770 - 1);
									func_340(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1348[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1776 || iLocal_1776 == 0)) || iLocal_115) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1493[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_128 && ((!MISC::IS_BIT_SET(iLocal_1493[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1493[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_72());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_72());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[iVar0]))
							{
								if (!bLocal_132 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2659[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2659[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_115)
										{
											func_330(&(iLocal_2659[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1493[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2659[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429);
							if (fLocal_1184 >= fLocal_715[iVar0])
							{
								if (7 > iLocal_1761)
								{
									fVar15 = (fLocal_1184 - fLocal_715[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1203[iVar0], &cLocal_2429))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2659[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1203[iVar0], fVar15, &cLocal_2429) };
											if (!func_334(Var6, Var12, 5f, fLocal_1195) && func_334(Var9, Var12, 5f, fLocal_1195))
											{
												if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
												{
													func_330(&(iLocal_2659[iVar0]), iVar21, 0);
												}
												func_340(iVar0, 1090519040);
											}
											else if (((!bLocal_132 || MISC::IS_BIT_SET(iLocal_1493[iVar0], 1)) || iLocal_115) || iParam2)
											{
												if (func_323(&(iLocal_2659[iVar0]), iLocal_1203[iVar0], fVar15, 1, 0, 0, 1, bLocal_129))
												{
													if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
													{
														func_330(&(iLocal_2659[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2659[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2659[iVar0], fParam1);
													iLocal_1761++;
													iLocal_1348[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
											{
												func_330(&(iLocal_2659[iVar0]), iVar21, 0);
											}
											func_340(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429))
									{
										if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
										{
											func_330(&(iLocal_2659[iVar0]), iVar21, 0);
										}
										func_340(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
									{
										func_330(&(iLocal_2659[iVar0]), iVar21, 0);
									}
									func_340(iVar0, 1090519040);
								}
							}
							else if (iLocal_112 && !bLocal_120)
							{
								if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
								{
									func_330(&(iLocal_2659[iVar0]), iVar21, 0);
								}
								func_340(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1493[iVar0], 1))
							{
								func_330(&(iLocal_2659[iVar0]), iVar21, 0);
							}
							func_340(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1776 = iVar0;
					}
				}
				else if (iLocal_1348[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2659[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2659[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2659[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_110)
									{
										if ((!bLocal_105 && !iLocal_102) && func_329(iLocal_2659[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1775 || iLocal_1775 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2659[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2659[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1775 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_125 && !MISC::IS_BIT_SET(iLocal_1493[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1775 || iLocal_1775 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2659[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1775 = iVar0;
										}
									}
									if (bVar24)
									{
										func_325(iLocal_2659[iVar0]);
										iLocal_1348[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2659[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2659[iVar0]);
							}
						}
						else
						{
							iLocal_1348[iVar0]++;
						}
					}
					else
					{
						iLocal_1348[iVar0]++;
					}
				}
				else if (iLocal_1348[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2659[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2659[iVar0]))
						{
							iLocal_1348[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2659[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2659[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2659[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1203[iVar0], &cLocal_2429))
							{
								if (fLocal_1184 > (fLocal_715[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1203[iVar0], &cLocal_2429)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2659[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2659[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1348[iVar0]++;
					}
				}
				else if (iLocal_1348[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2659[iVar0]);
					}
					iLocal_1761 = (iLocal_1761 - 1);
					func_340(iVar0, fVar16);
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
			iLocal_1765 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1775 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1776 = 0;
		}
	}
	else
	{
		func_68();
	}
}


void func_340(int iParam0, float fParam1)//Position - 0x18B13
{
	int iVar0;
	
	if (!iLocal_2446[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2446[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2659[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2659[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2659[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2659[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_134)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_103)
	{
		if (!bLocal_131)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2659[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2659[iParam0]));
		}
	}
	if (!bLocal_113 && !bLocal_126)
	{
		if (iLocal_1203[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1203[iParam0], &cLocal_2429);
		}
	}
	iLocal_1348[iParam0] = 99;
}

void func_341(int iParam0, float fParam1, float fParam2)//Position - 0x18C6C
{
	int iVar0;
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
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_333(Var1, Var10, fVar13);
		}
	}
}

void func_342(int iParam0, float fParam1)//Position - 0x18CEF
{
	if (!bLocal_114)
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

void func_343(int iParam0, float fParam1)//Position - 0x18D3C
{
	if (!bLocal_114)
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

void func_344(int iParam0, float fParam1)//Position - 0x18D89
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1198 + 2000f);
		fVar2 = (fLocal_1199 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_1771 == 0)
				{
					Local_2417 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1198) };
					iLocal_1771++;
				}
				else if (iLocal_1771 == 1)
				{
					Local_2420 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_1771++;
				}
				else if (!bLocal_132)
				{
					if (Local_2417.x > Local_2420.x)
					{
						fVar3 = Local_2417.x;
						Local_2417.x = Local_2420.x;
						Local_2420.x = fVar3;
					}
					if (Local_2417.f_1 > Local_2420.f_1)
					{
						fVar3 = Local_2417.f_1;
						Local_2417.f_1 = Local_2420.f_1;
						Local_2420.f_1 = fVar3;
					}
					if (Local_2417.f_2 > Local_2420.f_2)
					{
						fVar3 = Local_2417.f_2;
						Local_2417.f_2 = Local_2420.f_2;
						Local_2420.f_2 = fVar3;
					}
					Local_2417 = { Local_2417 - Vector(fLocal_1202, fLocal_1202, fLocal_1202) };
					Local_2420 = { Local_2420 + Vector(fLocal_1202, fLocal_1202, fLocal_1202) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2417, Local_2420, 0, 0);
					fLocal_1198 = fVar1;
					iLocal_1771 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1774 == 0)
			{
				Local_2423 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1199) };
				iLocal_1774++;
			}
			else if (iLocal_1774 == 1)
			{
				Local_2426 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_1774++;
			}
			else if (!bLocal_132 && !bVar4)
			{
				if (Local_2423.x > Local_2426.x)
				{
					fVar3 = Local_2423.x;
					Local_2423.x = Local_2426.x;
					Local_2426.x = fVar3;
				}
				if (Local_2423.f_1 > Local_2426.f_1)
				{
					fVar3 = Local_2423.f_1;
					Local_2423.f_1 = Local_2426.f_1;
					Local_2426.f_1 = fVar3;
				}
				if (Local_2423.f_2 > Local_2426.f_2)
				{
					fVar3 = Local_2423.f_2;
					Local_2423.f_2 = Local_2426.f_2;
					Local_2426.f_2 = fVar3;
				}
				Local_2423 = { Local_2423 - Vector(fLocal_1202, fLocal_1202, fLocal_1202) };
				Local_2426 = { Local_2426 + Vector(fLocal_1202, fLocal_1202, fLocal_1202) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2423, Local_2426, 1);
				fLocal_1199 = fVar2;
				iLocal_1774 = 0;
			}
		}
	}
}




void func_348()//Position - 0x1911D
{
	int iVar0;
	float fVar1;
	
	iVar0 = iLocal_3029;
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_3026, 0f);
	Local_3273 = { 0f, 0f, 0f };
	switch (iLocal_5901)
	{
		case 3:
		case 4:
		case 5:
		case 6:
			fLocal_3271 = 0.65f;
			fLocal_3272 = 1.3f;
			Local_3273.f_1 = -18f;
			break;
		
		case 8:
		case 9:
			fLocal_3271 = 0.65f;
			fLocal_3272 = 1.05f;
			Local_3273.f_1 = -7f;
			break;
		
		case 10:
		case 11:
		case 12:
			fLocal_3271 = 0.8f;
			fLocal_3272 = 1.2f;
			Local_3273.f_1 = -13f;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			fLocal_3271 = 0.6f;
			fLocal_3272 = 1.12f;
			Local_3273.f_1 = -14f;
			break;
		
		case 18:
			fLocal_3271 = 0.475f;
			fLocal_3272 = 1.07f;
			Local_3273.f_1 = -15.5f;
			break;
		
		case 19:
			fLocal_3271 = 0.55f;
			fLocal_3272 = 1.18f;
			Local_3273.f_1 = -15.8f;
			break;
		
		case 20:
		case 21:
		case 22:
		case 23:
			fLocal_3271 = 0.55f;
			fLocal_3272 = 1.08f;
			Local_3273.f_1 = -17.5f;
			break;
		
		case 24:
		case 25:
			fLocal_3271 = 0.55f;
			fLocal_3272 = 1.125f;
			Local_3273.f_1 = -17f;
			break;
		
		case 28:
			fLocal_3271 = 0.55f;
			fLocal_3272 = 1.08f;
			Local_3273.f_1 = -20f;
			break;
		
		case 26:
		case 27:
			fLocal_3271 = 0.6f;
			fLocal_3272 = 1.04f;
			Local_3273.f_1 = 4f;
			break;
		
		case 29:
		case 30:
			fLocal_3271 = 0.65f;
			fLocal_3272 = 1.15f;
			Local_3273.f_1 = -10.5f;
			break;
		
		case 33:
		case 34:
			fLocal_3271 = 0.5f;
			fLocal_3272 = 1f;
			Local_3273.f_1 = -6.5f;
			break;
		
		case 35:
		case 36:
			fLocal_3271 = 1f;
			fLocal_3272 = 1.45f;
			Local_3273.f_1 = -22.5f;
			break;
		
		case 38:
			fLocal_3271 = 1.05f;
			fLocal_3272 = 1.5f;
			Local_3273.f_1 = -100.5f;
			break;
		
		case 39:
		case 37:
		case 40:
			fLocal_3271 = 1.15f;
			fLocal_3272 = 1.6f;
			Local_3273.f_1 = -150.5f;
			break;
	}
	if (fLocal_3256 < 48791.02f)
	{
		fLocal_3271 = 0.8f;
		fLocal_3272 = 1.3f;
		Local_3273.f_1 = -39f;
	}
	if (fLocal_3256 > 52368.33f && fLocal_3256 < 54317.41f)
	{
		fLocal_3271 = 0.6f;
		fLocal_3272 = 1.125f;
		Local_3273.f_1 = -5f;
	}
	if (fLocal_3256 > 54368.33f && fLocal_3256 < 55317.41f)
	{
		fLocal_3271 = 0.6f;
		fLocal_3272 = 1.15f;
		Local_3273.f_1 = -10f;
	}
	if (fLocal_3256 > 55368.33f && fLocal_3256 < 63317.41f)
	{
		fLocal_3271 = 0.6f;
		fLocal_3272 = 1.18f;
		Local_3273.f_1 = -20f;
	}
	if (fLocal_3256 < 17356f)
	{
		fLocal_3271 = 1f;
		fLocal_3272 = 1.05f;
		Local_3273.f_1 = -20f;
	}
	if ((!CAM::IS_CAM_ACTIVE(uLocal_3004) || !CAM::IS_CAM_ACTIVE(uLocal_3007)) || !CAM::IS_CAM_ACTIVE(uLocal_3008))
	{
		if (!func_350())
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				fLocal_100 = ENTITY::GET_ENTITY_SPEED(iVar0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
				{
					fLocal_5973 = (fLocal_3271 * 30f);
					fLocal_5974 = (fLocal_3272 * 30f);
					if (fLocal_5973 == 0f)
					{
					}
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Local_3273), 0);
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iVar0, 0) < fVar1)
					{
						if (fVar1 > 40f)
						{
							fVar1 = 40f;
						}
						fLocal_3255 = (fLocal_3271 + ((fLocal_3272 - fLocal_3271) * (1f - (fVar1 / 40f))));
					}
					else
					{
						if (fVar1 > 40f)
						{
							fVar1 = 40f;
						}
						fLocal_3255 = (fLocal_3271 + ((fLocal_3272 - fLocal_3271) * (1f - (fVar1 / 40f))));
					}
					fLocal_5972 = (fLocal_3255 * 30f);
					if (fLocal_100 < fLocal_5972 || func_349(Local_3273.f_1))
					{
						if (fLocal_100 < fLocal_5974)
						{
							if (fLocal_100 < fLocal_5972)
							{
								fLocal_3253 = (fLocal_3253 + (((fLocal_5972 - fLocal_100) / 30f) * SYSTEM::TIMESTEP()));
							}
							else
							{
								fLocal_3253 = (fLocal_3253 + (0.04f * SYSTEM::TIMESTEP()));
							}
						}
					}
					else
					{
						fLocal_3253 = (fLocal_3253 - (((fLocal_3253 - fLocal_3255) / 7f) * SYSTEM::TIMESTEP()));
					}
				}
			}
		}
		else if (fLocal_3253 < 2f)
		{
			fLocal_3253 = (fLocal_3253 + (0.2f * SYSTEM::TIMESTEP()));
		}
	}
}

bool func_349(float fParam0)//Position - 0x19627
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, -1f, fParam0, 0f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, 1f, fParam0, 0f) };
		Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	return (((Var3.x - Var0.x) * (Var6.f_1 - Var0.f_1)) - ((Var3.f_1 - Var0.f_1) * (Var6.x - Var0.x))) > 0f;
}

bool func_350()//Position - 0x19686
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, -1f, 6f, 0f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, 1f, 6f, 0f) };
		Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	return (((Var3.x - Var0.x) * (Var6.f_1 - Var0.f_1)) - ((Var3.f_1 - Var0.f_1) * (Var6.x - Var0.x))) > 0f;
}

void func_351()//Position - 0x196E3
{
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	func_433();
	func_432();
	func_430();
	func_428();
	func_427();
	func_425();
	func_424();
	GlobalFunc_163();
	if (WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) == joaat("weapon_proxmine"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::_0x9911F4A24485F653(1);
	}
	if (iLocal_5901 <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3025))
		{
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_3030, 1);
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), 0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
	func_422();
	func_321(iLocal_3029, fLocal_3253);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3030))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_3030, fLocal_3253);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_3026, fLocal_3253);
		}
	}
	if (Global_86796 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[1]))
		{
			Global_86796 = 1;
		}
	}
	if (Global_86797 == 0)
	{
		if (fLocal_3256 > 72600f)
		{
			Global_86797 = 1;
		}
	}
	func_419();
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_3030) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026)) && !PED::IS_PED_INJURED(func_2()))
	{
	}
	switch (iLocal_5901)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			func_418();
			func_417();
			GlobalFunc_Checkpoint2(2, "STAGE_DO_CHASE", 0, 0, 0, 1);
			AUDIO::SET_AGGRESSIVE_HORNS(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
			{
				VEHICLE::START_VEHICLE_HORN(iLocal_3029, 7000, 0, 0);
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_3029))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_3029, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_3030))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_3030, 1);
				}
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
			TASK::TASK_LOOK_AT_ENTITY(func_2(), iLocal_3030, -1, 2048, 2);
			WEAPON::SET_CURRENT_PED_WEAPON(func_2(), joaat("weapon_unarmed"), 1);
			AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			SYSTEM::SETTIMERA(0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
			iLocal_2904 = 0;
			iLocal_3224 = 0;
			iLocal_2903 = 0;
			iLocal_2946 = 0;
			iLocal_5994 = 0;
			bLocal_5893 = true;
			ENTITY::CREATE_FORCED_OBJECT(-2005.629f, -441.1416f, 11.8253f, 5f, joaat("prop_streetlight_03d"), 1);
			ENTITY::CREATE_FORCED_OBJECT(-1958.663f, -479.5325f, 12.0568f, 5f, joaat("prop_streetlight_03d"), 1);
			ENTITY::CREATE_FORCED_OBJECT(-1911.864f, -517.8719f, 11.9657f, 5f, joaat("prop_streetlight_03d"), 1);
			HUD::CLEAR_PRINTS();
			if (iLocal_5965 == 0)
			{
				iLocal_5966 = 1;
			}
			iLocal_5901 = 1;
			break;
		
		case 1:
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("FAM1_START"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_1_YACHT_ARRIVES");
					iLocal_5901 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_5965 == 1 && iLocal_5966 == 0)
			{
				GlobalFunc_10691(&uLocal_3324, "FAM1AUD", "FAM1_START", 9, 0, 0, 0, 0);
				iLocal_5966 = 1;
			}
			if (SYSTEM::TIMERA() > 500 && iLocal_5966 == 1)
			{
				GlobalFunc_2207();
				iLocal_5901 = 3;
			}
			break;
		
		case 3:
			func_414(uLocal_3004, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_412(uLocal_3004, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			if (!GlobalFunc_5172(&Local_2952, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_2946 == 0 && iLocal_5983 == 1)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
					{
						if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_INIT1", 9, 0, 0, 0))
						{
							iLocal_2946 = 1;
						}
					}
					else if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_INIT2", 9, 0, 0, 0))
					{
						iLocal_2946 = 1;
					}
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_5983 == 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
					{
						GlobalFunc_164("YB_OBJ1B", 7500, 1);
						iLocal_5983 = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1840.489f, -724.2328f, 7.849245f, -1738.859f, -591.0909f, 32.37764f, 27.5f, 0, 1, 0) || GlobalFunc_156(func_2(), iLocal_3030, 0) < 20f)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(1f, 5f, 4);
					if (!PED::IS_PED_INJURED(func_2()))
					{
						PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), 0);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
					iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_INTRO", "", 1, 1, 0);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -5f, -2f, -0.5f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3004, func_2(), 0f, 0f, 0f, 1);
					CAM::SET_CAM_FOV(uLocal_3004, 15f);
					iLocal_2978 = MISC::GET_GAME_TIMER();
					HUD::SET_RADAR_ZOOM(1);
					iLocal_5901 = 4;
				}
			}
			break;
		
		case 4:
			func_414(uLocal_3004, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_412(uLocal_3004, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			func_410();
			if (func_409(iLocal_3233) >= 1f)
			{
				iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOP", "", 1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(func_2(), 1000);
				iLocal_2911 = 0;
				iLocal_5901 = 5;
			}
			break;
		
		case 5:
			func_414(uLocal_3004, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_412(uLocal_3004, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			if (((MISC::GET_GAME_TIMER() - iLocal_2978) > iLocal_2922 && iLocal_2911 == 0) && MISC::ACOS(GlobalFunc_168(ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_3026), ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_3030))) < 45f)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOPD", "", 0, 1, 0);
				}
				else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOPB", "", 0, 1, 0);
				}
				else
				{
					iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOPC", "", 0, 1, 0);
				}
				AUDIO::DISABLE_PED_PAIN_AUDIO(func_2(), 1);
				iLocal_2911 = 1;
			}
			else if (func_409(iLocal_3233) >= 1f)
			{
				iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOP", "", 0, 1, 0);
				iLocal_2978 = MISC::GET_GAME_TIMER();
				iLocal_2922 = MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000);
				iLocal_2911 = 0;
			}
			switch (iLocal_2988)
			{
				case 0:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
					{
						if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_DNTSHT", 8, 0, 0, 0))
						{
							iLocal_2988++;
						}
					}
					break;
				
				case 1:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
					{
						if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_RESP1", 8, 0, 0, 0))
						{
							iLocal_2988++;
						}
					}
					break;
			}
			func_410();
			if ((VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iLocal_3026) == 2 && GlobalFunc_156(func_2(), iLocal_3030, 0) < 80f) && iLocal_2911 == 0)
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_1_FRANKLIN_CLIMBING");
				RECORDING::_0x293220DA1B46CEBC(2f, 6f, 4);
				iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FranklinOnBonnet_intro", "", 1, 1, 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -5f, -2f, -0.5f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, func_2(), 0f, 0f, 0f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 15f);
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
				iLocal_5901 = 6;
			}
			break;
		
		case 6:
			func_410();
			func_414(uLocal_3004, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_412(uLocal_3004, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			iLocal_2923 = MISC::GET_GAME_TIMER();
			if (func_409(iLocal_3233) >= 0.877f)
			{
				iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleincar01_", "FranklinOnBonnet_loop", "", 1, 1, 0);
				iLocal_2904 = 0;
				GlobalFunc_574(199, 0);
				iLocal_5901 = 7;
			}
			break;
		
		case 7:
			iLocal_5901 = 8;
			break;
		
		case 8:
			func_414(uLocal_3004, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_412(uLocal_3004, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			func_410();
			if ((!func_407(45f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, Local_3246), 0) < fLocal_3252) && iLocal_3019 == 0)
			{
				GlobalFunc_159("YB_HELP1", -1);
				iLocal_3019 = 1;
			}
			if (iLocal_2904 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, Local_3246), 0) < 22.5f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_CLOSE_YACHT");
					iLocal_2904 = 1;
				}
			}
			if ((func_406(1065353216, 1) && func_407(1119092736)) && iLocal_5902 == 4)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (!PED::IS_PED_INJURED(func_2()))
				{
					HUD::CLEAR_HELP(1);
					AUDIO::START_AUDIO_SCENE("FAMILY_1_FRANKLIN_JUMPS");
					GlobalFunc_4956();
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), func_2(), 4000, 0, 2);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -3.3084f, -20.4882f, -0.6056f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -2.2464f, -17.6954f, -0.3368f, 1);
					CAM::SET_CAM_FOV(uLocal_3004, 25f);
					iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FranklinOnBonnet_yachtJump_fail", "", 1, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(func_2());
					GlobalFunc_5385(1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_JUMPTOYACHT", func_2(), 0, 0, 0);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					GlobalFunc_571(0, -1);
					iLocal_5901 = 9;
				}
			}
			func_401();
			break;
		
		case 9:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			if (iLocal_3217 == 0 && AUDIO::PREPARE_MUSIC_EVENT("FAM1_FRANKLIN_JUMPS"))
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_JUMP", 9, 0, 0, 0))
				{
					iLocal_3218 = 0;
					iLocal_3217 = 1;
				}
			}
			if (iLocal_3217 == 1)
			{
				if (iLocal_3218 == 0)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_FRANKLIN_JUMPS"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FRANKLIN_JUMPS");
						iLocal_3218 = 1;
					}
				}
			}
			PED::_0x1216E0BFA72CC703(func_2(), 1);
			if (GlobalFunc_156(func_2(), iLocal_3030, 1) < 11.1f)
			{
				fLocal_5993 = 0.3f;
			}
			else
			{
				fLocal_5993 = 0.5f;
			}
			if (func_409(iLocal_3233) >= fLocal_5993 && func_406(1.3f, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(6.5f, 6f, 4);
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_FRANKLIN_CLIMBING");
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_YACHT_ARRIVES");
				AUDIO::START_AUDIO_SCENE("FAMILY_1_PROTECT_FRANKLIN");
				GlobalFunc_4935();
				bLocal_49 = true;
				AUDIO::DISABLE_PED_PAIN_AUDIO(func_2(), 0);
				Local_2913 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, 0f, -5.64535f, 0f) };
				if (SYSTEM::VDIST(Local_2913, Local_2913) > 0f)
				{
				}
				Local_2916 = { PED::GET_PED_BONE_COORDS(func_2(), 11816, 0f, 0f, 0f) };
				Local_2919 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3030, Local_2916) };
				Local_2919 = { Local_2919 - Vector(0f, -5.64535f, 0f) };
				iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleincar01_", "franklinonYacht_clingIntro", "", 1, 1, 4);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -0.1273f, -5.4712f, 3.1607f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, 0.1256f, -8.0088f, 1.5807f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 45f);
				if (!CAM::DOES_CAM_EXIST(uLocal_3005))
				{
					uLocal_3005 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_3006))
				{
					uLocal_3006 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3005, iLocal_3030, -2.4481f, -8.7167f, -0.4626f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3005, iLocal_3030, -0.2318f, -8.5614f, 1.5534f, 1);
				CAM::SET_CAM_FOV(uLocal_3005, 32.0179f);
				CAM::SET_CAM_ACTIVE(uLocal_3005, 1);
				CAM::SHAKE_CAM(uLocal_3005, "SKY_DIVING_SHAKE", 1f);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3006, iLocal_3030, -2.0769f, -9.7101f, 0.3741f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3006, iLocal_3030, -0.3513f, -7.4178f, 1.2502f, 1);
				CAM::SET_CAM_FOV(uLocal_3006, 31.9652f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3006, uLocal_3005, 1500, 1, 0);
				CAM::SHAKE_CAM(uLocal_3006, "SKY_DIVING_SHAKE", 1f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3006, 0.1f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				CAM::SET_WIDESCREEN_BORDERS(true, 0);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3026, 0);
				bLocal_49 = false;
				GlobalFunc_4948(&uLocal_3300, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
				fLocal_3018 = VEHICLE::GET_BOAT_BOOM_POSITION_RATIO(iLocal_3030);
				iLocal_5901 = 10;
			}
			else if (func_409(iLocal_3233) > 0.99f)
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
					PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 2, 1, 1, 0);
				}
				iLocal_5901 = 41;
			}
			break;
		
		case 10:
			PED::_0x1216E0BFA72CC703(func_2(), 1);
			Local_2919.x = (Local_2919.x + (0f - ((Local_2919.x * MISC::GET_FRAME_TIME()) * 1.5f)));
			Local_2919.f_1 = (Local_2919.f_1 + (0f - ((Local_2919.f_1 * MISC::GET_FRAME_TIME()) * 1.5f)));
			Local_2919.f_2 = (Local_2919.f_2 + (0f - ((Local_2919.f_2 * MISC::GET_FRAME_TIME()) * 1.5f)));
			Local_2919 = { 0f, 0f, 0f };
			if (func_409(iLocal_3225) >= 0.33f)
			{
				bLocal_49 = true;
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3026, 1);
				if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				}
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				bLocal_5892 = false;
				bLocal_5893 = false;
			}
			func_400();
			if (func_409(iLocal_3225) >= 1f)
			{
				iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleincar01_", "onYacht_clingLoop_F", "", 1, 1, 4);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -1.6101f, -10.2165f, 0.1842f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -0.5263f, -7.7526f, 1.5087f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 35.939f);
				STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht01_");
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				bLocal_5892 = false;
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3026, 1);
				if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				}
				bLocal_5893 = false;
				iLocal_5901 = 11;
			}
			break;
		
		case 11:
			func_400();
			if (!(fLocal_3256 > 56671.18f && fLocal_3256 < 62727.27f) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht01_"))
			{
				if (GlobalFunc_156(iLocal_3026, iLocal_3030, 1) < 50f || iLocal_5942)
				{
					iLocal_5901 = 12;
				}
			}
			break;
		
		case 12:
			iLocal_3206 = PED::CREATE_PED(26, joaat("g_m_y_salvagoon_01"), 723.9294f, -1087.5f, 21.1693f, 96.2191f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3206, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3206, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3206, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3206, 4, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3206, 1);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_3206, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3206, 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_3206, 0);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3206, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3206, iLocal_2951);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3206, 0);
			AUDIO::PREPARE_MUSIC_EVENT("FAM1_1ST_ENEMY_OS");
			iLocal_3214 = 0;
			GlobalFunc_173(&uLocal_3324, 3, iLocal_3206, "YACHTPED1", 0, 1);
			iLocal_3213 = 0;
			iLocal_3225 = func_411(func_2(), iLocal_3206, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_Fight01intro_F", "onYacht_Fight01intro_thug", 1, 1, 4);
			iLocal_5901 = 13;
			break;
		
		case 13:
			if (!iLocal_2905)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_1ST_ENEMY_OS"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_1ST_ENEMY_OS");
					iLocal_2905 = 1;
				}
			}
			func_400();
			if (func_409(iLocal_3225) > 0.1f && iLocal_3214 == 0)
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_3030, "yacht_door_opening", "MISSFAM1_YachtBattle", 1000f, 0, 0, 0, 0, 0);
				iLocal_3214 = 1;
			}
			if (func_409(iLocal_3225) > 0.35f)
			{
				if (iLocal_3213 == 0)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -4.7607f, -7.0218f, 2.7643f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -2.0131f, -5.9395f, 2.2357f, 1);
					CAM::SET_CAM_FOV(uLocal_3004, 43.042f);
					GlobalFunc_4935();
					GlobalFunc_5157(&uLocal_3324, "FAM1AUD", "FAM1_NOISE", 9, 0, 0);
					iLocal_3213 = 1;
				}
			}
			if (func_409(iLocal_3225) >= 1f)
			{
				iLocal_3225 = func_411(func_2(), iLocal_3206, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_Fight01loop_F", "onYacht_Fight01loop_thug", 1, 1, 4);
				SYSTEM::SETTIMERA(0);
				iLocal_5901 = 14;
			}
			break;
		
		case 14:
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 100f || iLocal_5942)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_3225, 1f);
				}
				switch (iLocal_2929)
				{
					case 0:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.25f)
						{
							GlobalFunc_4935();
							if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_WHO", 8, 0, 0, 0))
							{
								iLocal_2929++;
							}
						}
						break;
					
					case 1:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.501f)
						{
							AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3206, "FAM1_BOAT_SHOOTER", 0);
							iLocal_2929++;
						}
						break;
					
					case 2:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.531f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_3206, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3026, 0.1f, 0.71f, 0f), 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_3026, 0, 0, 0);
							}
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "GENERIC_FRIGHTENED_HIGH", "MICHAEL_NORMAL", 3);
							iLocal_2929++;
						}
						break;
					
					case 3:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.533f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_3206, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3026, 0.14f, 0.76f, 0f), 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_3026, 0, 0, 0);
							}
							iLocal_2929++;
						}
						break;
					
					case 4:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.561f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_3206, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3026, 1f, 1f, 0f), 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_3026, 0, 0, 0);
							}
							iLocal_2929++;
						}
						break;
					
					case 5:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.637f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_3206, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3026, -1f, 0f, 0f), 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_3026, 0, 0, 0);
							}
							STREAMING::REQUEST_PTFX_ASSET();
							iLocal_2929++;
						}
						break;
					
					case 6:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.7f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_3206, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3026, 0f, 0.5f, 0f), 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_3026, 0, 0, 0);
							}
							iLocal_2929++;
						}
						break;
					
					case 7:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.92f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_3206, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3026, 0.8f, 0.7f, 0f), 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_3026, 0, 0, 0);
							}
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "GENERIC_FRIGHTENED_HIGH", "MICHAEL_NORMAL", 3);
							iLocal_2929++;
						}
						break;
					
					case 8:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							uLocal_99 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_3026, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3026, "overheat"), 1065353216, 0, 0, 0);
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 0.5f, 0);
							AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_3026, 0.25f);
							iLocal_2929++;
						}
						break;
					
					case 9:
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CARSH", 9, 0, 0, 0))
							{
								iLocal_2929++;
							}
						}
						break;
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
			{
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_3225, 0f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3206))
			{
				func_397(iLocal_3206, 64, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_2()))
			{
				func_397(func_2(), 64, 1);
			}
			if ((((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 0) < 50f && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3206, 1), 1f)) && iLocal_2929 > 7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.95f) || ENTITY::GET_ENTITY_HEALTH(iLocal_3206) < 200)
			{
				if (SYSTEM::TIMERA() > 4000 || ENTITY::GET_ENTITY_HEALTH(iLocal_3206) < 200)
				{
					iLocal_3225 = func_411(func_2(), iLocal_3206, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_Fight01outro_F", "onYacht_Fight01outro_thug", 0, 1, 4);
					AUDIO::START_AUDIO_SCENE("FAM1_THROWN_OVERBOARD");
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3225, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
					RECORDING::_0x293220DA1B46CEBC(3.5f, 2f, 3);
					iLocal_5901 = 15;
				}
			}
			break;
		
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3206))
			{
				func_397(iLocal_3206, 64, 1);
			}
			if (func_409(iLocal_3225) >= 0.95f)
			{
				if (!PED::IS_PED_INJURED(iLocal_3206))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_THROWN_OVERBOARD1", iLocal_3206, 0, 0, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3206);
					PED::SET_PED_TO_RAGDOLL(iLocal_3206, 0, 10000, 0, 1, 1, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3206, 0);
				}
				GlobalFunc_565(201, 1, 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, 5.5868f, -10.9326f, 4.0687f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, 3.4853f, -8.8562f, 3.547f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 19.5173f);
				GlobalFunc_5157(&uLocal_3324, "FAM1AUD", "FAM1_ARG", 8, 0, 0);
				RECORDING::_0x293220DA1B46CEBC(3.5f, 2f, 3);
				iLocal_5901 = 16;
			}
			break;
		
		case 16:
			iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelIntro_F", "", 1, 1, 4);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -2.1652f, -0.763f, 2.7882f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -0.9706f, -3.5107f, 2.6373f, 1);
			CAM::SET_CAM_FOV(uLocal_3004, 34.904f);
			iLocal_5901 = 17;
			break;
		
		case 17:
			if (func_409(iLocal_3225) >= 1f)
			{
				iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelLoop_F", "", 1, 1, 4);
				iLocal_5901 = 18;
			}
			break;
		
		case 18:
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 0) < 65f)
			{
				iLocal_3207 = PED::CREATE_PED(26, joaat("g_m_y_salvagoon_01"), 723.9294f, -1087.5f, 21.1693f, 96.2191f, 1, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3207, "FAMILY_1_BOAT_PEDS", 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3207, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3207, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3207, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3207, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3207, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3207, 9, 0, 0, 0);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3207, joaat("weapon_pistol"), -1, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3207, iLocal_2951);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3207, 0);
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_3207, 0);
				STREAMING::REQUEST_PTFX_ASSET();
				GlobalFunc_593(iLocal_3207, 0);
				GlobalFunc_173(&uLocal_3324, 4, iLocal_3207, "YACHTPED2", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3207, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_3207, 0);
				iLocal_3225 = func_411(func_2(), iLocal_3207, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_fight02Intro_F", "onYacht_fight02Intro_thug", 0, 1, 4);
				AUDIO::START_AUDIO_SCENE("FAMILY_1_SHOOT_THE_ENEMY_02");
				ENTITY::PLAY_ENTITY_ANIM(iLocal_3030, "yacht_door_opening", "MISSFAM1_YachtBattle", 1000f, 0, 0, 0, 0, 0);
				RECORDING::_0x293220DA1B46CEBC(1f, 2f, 3);
				iLocal_52 = 0;
				iLocal_5901 = 19;
			}
			break;
		
		case 19:
			func_394();
			if ((func_409(iLocal_3225) > 0f && func_409(iLocal_3225) < 0.2f) && iLocal_3277 == 0)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HIDE", 8, 0, 0, 0))
				{
					iLocal_3277 = 1;
				}
			}
			if (func_409(iLocal_3225) >= 0.35f)
			{
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -3.012f, -2.7163f, 2.3151f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -1.977f, -5.5249f, 2.5155f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 37.4049f);
				bLocal_5893 = true;
			}
			if (func_409(iLocal_3225) >= 1f)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_3021))
				{
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_3021, false);
				}
				HUD::SET_BLIP_DISPLAY(uLocal_3276, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_3225 = func_411(func_2(), iLocal_3207, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_fight02Loop_f", "onYacht_fight02Loop_thug", 1, 1, 4);
				if (PED::IS_PED_INJURED(iLocal_3207))
				{
					iLocal_5901 = 20;
				}
				STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
				STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -3.3454f, -1.9978f, 2.5094f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -1.6431f, -4.4679f, 2.4869f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 36.8337f);
				bLocal_5893 = true;
				iLocal_5901 = 20;
			}
			if (!PED::IS_PED_INJURED(iLocal_3207))
			{
				func_397(iLocal_3207, 64, 1);
			}
			if ((SYSTEM::TIMERB() > 2500 && func_409(iLocal_3225) > 0.535f) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 70f)
			{
				if (GlobalFunc_5172(&Local_2952, 1))
				{
					if (GlobalFunc_745())
					{
						GlobalFunc_5653(func_2(), "FAM1_DDAA", "FRANKLIN", 4);
						SYSTEM::SETTIMERB(0);
					}
					else if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_ATTACK", 9, 1, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				else if (GlobalFunc_745())
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_ENC4", 9, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				else if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_ATTACK", 9, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
				}
			}
			if (func_409(iLocal_3225) > 0.745f)
			{
				iLocal_52 = 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3207) && iLocal_52 == 1)
			{
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_3207) < 200 || PED::IS_PED_RAGDOLL(iLocal_3207))
				{
					GlobalFunc_5653(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3207, 0);
					HUD::REMOVE_BLIP(&uLocal_3021);
					HUD::SET_BLIP_DISPLAY(uLocal_3276, 4);
					GlobalFunc_164("YB_OBJ1", 7500, 1);
					iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_f", "", 1, 1, 4);
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
					}
					iLocal_2936 = MISC::GET_GAME_TIMER();
					bLocal_5893 = false;
					iLocal_5901 = 21;
				}
			}
			break;
		
		case 20:
			func_394();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3207))
			{
				func_397(iLocal_3207, 64, 1);
			}
			if (!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				if (!GlobalFunc_5172(&Local_2952, 1))
				{
					switch (iLocal_2994)
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_FIGHT", 8, 0, 0, 0))
							{
								iLocal_2994++;
							}
							break;
						}
				}
				if ((SYSTEM::TIMERA() > 35000 && !PED::IS_PED_INJURED(iLocal_3207)) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
				{
					iLocal_3231 = func_411(func_2(), iLocal_3207, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_fight02Failure_f", "onYacht_fight02Failure_thug", 1, 1, 4);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -1.9076f, -5.696f, 5.4957f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -1.9315f, -5.7537f, 2.4963f, 1);
					CAM::SET_CAM_FOV(uLocal_3004, 45f);
					func_79();
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
					GlobalFunc_5653(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
				{
					if (func_409(iLocal_3231) > 0.7f && iLocal_5992 == 0)
					{
						RECORDING::_0x293220DA1B46CEBC(3.5f, 2f, 3);
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
						PED::SET_PED_TO_RAGDOLL(func_2(), 0, 10000, 0, 1, 1, 0);
						ENTITY::SET_ENTITY_HEALTH(func_2(), 0);
						SYSTEM::WAIT(2000);
						GlobalFunc_509("CMN_FDIED");
						func_6();
						iLocal_5992 = 1;
					}
				}
				if (((SYSTEM::TIMERB() > 2500 && !PED::IS_PED_INJURED(iLocal_3207)) && !PED::IS_PED_INJURED(func_2())) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 70f)
				{
					if (GlobalFunc_745())
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3207))
					{
					}
					if (ENTITY::GET_ENTITY_HEALTH(iLocal_3207) < 200 || (iLocal_2932 > 0 && MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_3207, 31086, 0f, 0f, 0f), 1f, 1)))
					{
						GlobalFunc_5105();
						RECORDING::_0x293220DA1B46CEBC(3.5f, 2f, 3);
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
						GlobalFunc_5653(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
						HUD::REMOVE_BLIP(&uLocal_3021);
						HUD::SET_BLIP_DISPLAY(uLocal_3276, 4);
						HUD::CLEAR_HELP(1);
						GlobalFunc_164("YB_OBJ1", 7500, 1);
						iLocal_3225 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_2(), iLocal_3225, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_f", 1000f, -1000f, 0, 0, 1148846080, 0);
						if (!PED::IS_PED_INJURED(iLocal_3207) && !PED::IS_PED_RAGDOLL(iLocal_3207))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3207, iLocal_3225, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_thug", 1000f, -1000f, 0, 0, 1148846080, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_3207, 0);
							iLocal_5901 = 21;
						}
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3225, 0);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3225, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, 0.417f, -8.8525f, 2.7537f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -0.723f, -6.081f, 2.6157f, 1);
						CAM::SET_CAM_FOV(uLocal_3004, 29.0725f);
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
						}
						bLocal_5893 = false;
						iLocal_5901 = 21;
					}
				}
			}
			break;
		
		case 21:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_SHOOT_THE_ENEMY_02"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_SHOOT_THE_ENEMY_02");
			}
			func_394();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3207))
			{
				func_397(iLocal_3207, 64, 1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.02f && iLocal_3219 == 0)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fam1_blood_headshot", PED::GET_PED_BONE_COORDS(iLocal_3207, 31086, 0f, 0f, 0f), 0f, 0f, 0f, 1f, 0, 0, 0);
					iLocal_3219 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 1f)
				{
					if (!PED::IS_PED_INJURED(iLocal_3207) && !PED::IS_PED_RAGDOLL(iLocal_3207))
					{
						iLocal_3226 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3207, iLocal_3226, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_thug", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3226, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3226, 1);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3226, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3226, 0.99f);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3207))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_3207, 0);
					}
					RECORDING::_0x293220DA1B46CEBC(3.5f, 2f, 3);
					iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelLoop02_F", "", 0, 1, 4);
					iLocal_5901 = 22;
				}
			}
			break;
		
		case 22:
			func_394();
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattle");
			STREAMING::REQUEST_MODEL(joaat("prop_champ_box_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto")) && !ENTITY::DOES_ENTITY_EXIST(iLocal_3210))
			{
				func_392();
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3210, iLocal_3030, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			if (((((((ENTITY::DOES_ENTITY_EXIST(iLocal_3210) && !ENTITY::IS_ENTITY_DEAD(iLocal_3210)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3210)) && !PED::IS_PED_INJURED(func_2())) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattle"))
			{
				if ((((MISC::GET_GAME_TIMER() - iLocal_2936) > iLocal_2937 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 60f) && (fLocal_3256 < 88132f || fLocal_3256 > 91399f)) || CAM::IS_SCREEN_FADED_OUT())
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_FINDJIM", 9, 0, 0, 0))
					{
						GlobalFunc_565(201, 1, 0);
						bLocal_5892 = false;
						bLocal_5893 = false;
						GlobalFunc_Checkpoint2(3, "STAGE_JIMMY_APPEARS", 0, 0, 0, 1);
						ENTITY::DETACH_ENTITY(iLocal_3210, 0, 0);
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(func_2()))
						{
							ENTITY::DETACH_ENTITY(func_2(), 0, 0);
						}
						iLocal_3225 = func_411(func_2(), iLocal_3210, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_meetJimmy_F", "onYacht_meetJimmy_J", 0, 1, 4);
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -0.179f, -14.9702f, 3.4881f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -0.1063f, -11.9819f, 3.2332f, 1);
						CAM::SET_CAM_FOV(uLocal_3004, 13.5778f);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_3030, "yacht_door_opening", "MISSFAM1_YachtBattle", 1000f, 0, 0, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_391();
							HUD::CLEAR_PRINTS();
							func_39();
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3026, 30f);
							}
						}
						fLocal_3018 = VEHICLE::GET_BOAT_BOOM_POSITION_RATIO(iLocal_3030);
						bLocal_2947 = false;
						iLocal_2949 = 0;
						iLocal_5901 = 23;
					}
				}
			}
			break;
		
		case 23:
			func_400();
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_2949 == 0)
			{
				if (iLocal_2948 < 0)
				{
					iLocal_2948 = MISC::GET_GAME_TIMER();
				}
				if (GlobalFunc_10691(&uLocal_3324, "FAM1AUD", "FAM1_JIMX", 9, 0, 0, 0, 0))
				{
					iLocal_2949 = 1;
				}
			}
			if (iLocal_2949 == 1)
			{
				if (func_409(iLocal_3225) > 0.2f)
				{
					if (bLocal_2947 == 0)
					{
						GlobalFunc_2207();
						bLocal_2947 = true;
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL("FAM1_JIMX", &Local_5958))
			{
				iLocal_5964 = 1;
			}
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			if (((((((!PED::IS_PED_INJURED(func_2()) && !PED::IS_PED_INJURED(iLocal_3210)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) && bLocal_2947) || (iLocal_2948 > 0 && (MISC::GET_GAME_TIMER() - iLocal_2948) > 10000))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 1f)
					{
						if (iLocal_2949 && !bLocal_2947)
						{
							GlobalFunc_4935();
						}
						iLocal_5964 = 0;
						iLocal_3225 = func_411(func_2(), iLocal_3210, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_signalPlayer_loop_F", "onYacht_signalPlayer_loop_J", 0, 1, 4);
						SYSTEM::SETTIMERA(0);
						iLocal_5901 = 24;
					}
				}
			}
			func_397(iLocal_3210, 64, 1);
			break;
		
		case 24:
			VEHICLE::_SET_BOAT_BOOM_POSITION_RATIO(iLocal_3030, fLocal_3018);
			if (fLocal_3018 < 0.85f)
			{
				fLocal_3018 = (fLocal_3018 + (1f * SYSTEM::TIMESTEP()));
			}
			else
			{
				fLocal_3018 = 0.85f;
			}
			Local_5986 = { GlobalFunc_2209() };
			Local_5958 = { GlobalFunc_560() };
			if (MISC::ARE_STRINGS_EQUAL("FAM1_JIMX", &Local_5958) || (MISC::GET_GAME_TIMER() - iLocal_2948) > 10000)
			{
				iLocal_5964 = 1;
			}
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			if ((((((((!PED::IS_PED_INJURED(func_2()) && !PED::IS_PED_INJURED(iLocal_3210)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) && iLocal_5964) && (((!MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_1", &Local_5986) && !MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_2", &Local_5986)) && !MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_3", &Local_5986)) && !MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_4", &Local_5986))) && (((((MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_5", &Local_5986) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_6", &Local_5986)) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_7", &Local_5986)) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_8", &Local_5986)) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_9", &Local_5986)) || !GlobalFunc_111()))
			{
				if (GlobalFunc_111())
				{
					if (!MISC::ARE_STRINGS_EQUAL("FAM1_JIMX", &Local_5958))
					{
						GlobalFunc_4935();
					}
				}
				RECORDING::_0x293220DA1B46CEBC(4.5f, 4f, 4);
				iLocal_3208 = PED::CREATE_PED(26, joaat("g_m_y_salvagoon_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1), 96.2191f, 1, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3208, "FAMILY_1_BOAT_PEDS", 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3208, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3208, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3208, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3208, 4, 1, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3208, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_3208, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3208, iLocal_2951);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3208, 0);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3208, 200);
				GlobalFunc_173(&uLocal_3324, 5, iLocal_3208, "YACHTPED4", 0, 1);
				GlobalFunc_593(iLocal_3208, 0);
				iLocal_3225 = func_411(func_2(), iLocal_3208, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_hitByBoom_F", "onYacht_hitByBoom_thugA", 1, 1, 4);
				iLocal_3230 = func_411(iLocal_3210, 0, iLocal_3030, "misc_e", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_hitByBoom_J", "", 0, 1, 4);
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3230, 0f, 0f, 0.08f, 0f, 0f, 0f, 2);
				iLocal_3223 = 0;
				AUDIO::START_AUDIO_SCENE("FAMILY_1_SAVE_JIMMY");
				ENTITY::PLAY_ENTITY_ANIM(iLocal_3030, "onYacht_hitByBoom_boom", "MISSFAM1_YACHTBATTLEonYacht02_", 8f, 0, 1, 1, 0, 0);
				VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_2(iLocal_3030, 1);
				VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_3(iLocal_3030, 1);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3030);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 0, 0);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOOM_SWING1", iLocal_3030, 0, 0, 0);
				AUDIO::START_AUDIO_SCENE("FAM1_BOOM_SWING");
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3210, 1862763509);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -0.2979f, -8.6807f, 2.8214f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -1.547f, -5.9555f, 2.7092f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 28.0593f);
				SYSTEM::SETTIMERB(0);
				SYSTEM::SETTIMERA(0);
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleonyacht01_");
				GlobalFunc_5653(iLocal_3208, "FAM1_HCAA", "JIMMY", 4);
				iLocal_5901 = 25;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3208))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) < 0.659f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3208))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3208, 1);
							func_397(iLocal_3208, 64, 1);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3208, 0);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3208, 0);
				}
			}
			func_397(iLocal_3210, 64, 1);
			break;
		
		case 25:
			VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_2(iLocal_3030, 1);
			VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_3(iLocal_3030, 1);
			if (!iLocal_2950)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HELP", 9, 0, 0, 0))
				{
					iLocal_2950 = 1;
				}
			}
			if (!iLocal_2906)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_JIMMY_BOOM"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_JIMMY_BOOM");
					iLocal_2906 = 1;
				}
			}
			func_388();
			if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.35f)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -9.1614f, 5.5768f, 2.9331f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -7.2843f, 3.2468f, 2.7138f, 1);
						CAM::SET_CAM_FOV(uLocal_3004, 30.4968f);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_3208))
				{
					if (PED::IS_PED_RAGDOLL(iLocal_3208))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_3208, 0);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 1f || PED::IS_PED_INJURED(iLocal_3208))
					{
						PED::SET_PED_LOD_MULTIPLIER(iLocal_3208, 2f);
						if (!PED::IS_PED_INJURED(iLocal_3208))
						{
							iLocal_3225 = func_411(func_2(), iLocal_3208, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "onYacht_overboardLoop_thugA", 1, 1, 4);
						}
						else
						{
							iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "onYacht_overboardLoop_thugA", 1, 1, 4);
						}
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -3.6975f, -1.815f, 3.8292f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -2.449f, -4.2695f, 2.6389f, 1);
						CAM::SET_CAM_FOV(uLocal_3004, 37.4547f);
						bLocal_5894 = false;
						bLocal_5893 = true;
						fLocal_3272 = 0.8f;
						HUD::SET_BLIP_DISPLAY(uLocal_3276, 0);
						uLocal_3023 = GlobalFunc_6797(iLocal_3210, 0, 145);
						GlobalFunc_527("YB_OBJ3", 7500, 1);
						GlobalFunc_159("YB_HELPJ", 15000);
						GlobalFunc_574(196, 0);
						iLocal_2927 = 0;
						fLocal_2924 = 0f;
						iLocal_5982 = 0;
						SYSTEM::SETTIMERA(0);
						iLocal_2950 = 0;
						iLocal_5901 = 26;
					}
				}
			}
			else
			{
				iLocal_2950 = 0;
				iLocal_5901 = 26;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3210))
			{
				func_397(iLocal_3210, 64, 1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) < 0.659f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3208))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3208, 1);
						func_397(iLocal_3208, 64, 1);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3208, 0);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3208, 0);
			}
			break;
		
		case 26:
			func_388();
			func_385();
			func_384();
			switch (iLocal_2933)
			{
				case 0:
					if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 1f)
							{
								fLocal_3272 = 0.7f;
								iLocal_2933 = 1;
							}
						}
						else
						{
							iLocal_2933 = 1;
						}
					}
					if (SYSTEM::TIMERB() > 4500 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 70f)
					{
						if (GlobalFunc_745())
						{
							GlobalFunc_5653(iLocal_3210, "FAM1_AYAA", "JIMMY", 4);
						}
						else if (!iLocal_3222)
						{
							GlobalFunc_5653(func_2(), "FAM1_CBAA", "FRANKLIN", 4);
							iLocal_3222 = 1;
						}
						else
						{
							GlobalFunc_5653(func_2(), "FAM1_DMAA", "FRANKLIN", 4);
						}
						SYSTEM::SETTIMERB(0);
					}
					break;
				
				case 1:
					if (SYSTEM::TIMERB() > 5000 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 70f)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
						{
							if (iLocal_5984)
							{
								GlobalFunc_5653(iLocal_3210, "FAM1_GCAA", "JIMMY", 4);
								iLocal_5984 = 0;
							}
							else
							{
								GlobalFunc_5653(iLocal_3210, "FAM1_AYAA", "JIMMY", 4);
								iLocal_5984 = 1;
							}
						}
						else
						{
							GlobalFunc_5653(func_2(), "FAM1_DMAA", "FRANKLIN", 4);
						}
						SYSTEM::SETTIMERB(0);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_2979) > 30000)
					{
						iLocal_2933 = 2;
					}
					break;
				
				case 2:
					if (SYSTEM::TIMERB() > 4000 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 1) < 70f)
					{
						if (GlobalFunc_745())
						{
							GlobalFunc_5653(iLocal_3210, "FAM1_GDAA", "JIMMY", 4);
							SYSTEM::SETTIMERB(0);
						}
					}
					break;
			}
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleinCar02_");
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit");
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_3210) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleinCar02_"))
			{
				if (func_383(1065353216))
				{
					if (func_407(1119092736))
					{
						GlobalFunc_5385(1);
						ENTITY::DETACH_ENTITY(iLocal_3210, 1, 1);
						if (iLocal_5932 < 4)
						{
							iLocal_3230 = func_411(iLocal_3210, 0, iLocal_3030, "misc_e", 0, "MISSFAM1_YachtBattleonYacht02_", "onBoom_dropToCar_J", "", 0, 1, 4);
						}
						else
						{
							iLocal_3230 = func_411(iLocal_3210, 0, iLocal_3030, "misc_e", 0, "MISSFAM1_YachtBattleonYacht02_", "onBoom_twohand_drop", "", 0, 1, 4);
						}
						HUD::REMOVE_BLIP(&uLocal_3023);
						RECORDING::_0x293220DA1B46CEBC(2.5f, 4f, 4);
						HUD::CLEAR_HELP(1);
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3210);
						GlobalFunc_5653(iLocal_3210, "MAST_FALL", "JIMMY_NORMAL", 4);
						AUDIO::START_AUDIO_SCENE("FAM1_DROP_IN_CAR");
						iLocal_3278 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3026, 1), 1, 1, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_3278, 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_3278, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3278, iLocal_3026, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3026, "seat_pside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						iLocal_3280 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3280, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_3280, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_3280, 1, 0);
						bLocal_5893 = false;
						iLocal_2909 = 0;
						iLocal_5901 = 27;
						HUD::SET_BLIP_DISPLAY(uLocal_3276, 4);
						GlobalFunc_5157(&uLocal_3324, "FAM1AUD", "FAM1_CATCH", 9, 0, 0);
					}
					else if (iLocal_2909 == 0)
					{
						GlobalFunc_4956();
						GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_STEADY", 9, 0, 0, 0);
						iLocal_2909 = 1;
					}
				}
				else
				{
					iLocal_2909 = 0;
				}
			}
			break;
		
		case 27:
			func_385();
			if (iLocal_2909 == 0)
			{
				GlobalFunc_4956();
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CATCH2", 9, 0, 0, 0))
				{
					iLocal_2909 = 1;
				}
			}
			func_384();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) >= 1f && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && !PED::IS_PED_INJURED(func_2()))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_3210, 0);
					Local_3281 = { 0f, 0f, 0f };
					Local_3287 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFAM1_YACHTBATTLEinCar02_", "JimmyInCar_intro", Local_3281, Local_3284, 0f, 2) };
					iLocal_3279 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3026, 1), 1, 1, 0);
					ENTITY::SET_ENTITY_COLLISION(iLocal_3279, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_3279, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3279, iLocal_3026, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3026, "seat_pside_r"), Local_3287, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_3290 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_dropToCar_J", ENTITY::GET_ENTITY_COORDS(iLocal_3280, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_3280, 2), 1f, 2) };
					Local_3290 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3278, Local_3290) };
					Local_3293 = { Local_3290 - Local_3287 };
					iLocal_3230 = func_382(Local_3293, Local_3296, iLocal_3210, 0, iLocal_3026, "seat_pside_r", 0, "MISSFAM1_YachtBattleincar02_", "JimmyInCar_intro", "", 1);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					GlobalFunc_571(0, -1);
					iLocal_3299 = 0;
					iLocal_2907 = 0;
					iLocal_5981 = 0;
					iLocal_2928 = 0;
					iLocal_5969 = MISC::GET_GAME_TIMER();
					iLocal_5901 = 28;
				}
			}
			break;
		
		case 28:
			func_381();
			func_384();
			if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3236)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3236) > 0.99f) || (ENTITY::GET_ENTITY_HEALTH(iLocal_3208) < 200 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3236)))
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_200(&uLocal_3324, 4);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3212))
				{
					ENTITY::DETACH_ENTITY(iLocal_3212, 1, 0);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_3212, ENTITY::GET_ENTITY_VELOCITY(iLocal_3030));
				}
				HUD::REMOVE_BLIP(&uLocal_3022);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3208))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3208);
					PED::SET_PED_TO_RAGDOLL(iLocal_3208, 0, 10000, 0, 1, 1, 0);
				}
				HUD::REMOVE_BLIP(&uLocal_3022);
				HUD::SET_BLIP_DISPLAY(uLocal_3276, 4);
				iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboard_success_F", "", 0, 1, 4);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_3225, 1.25f);
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
				{
				}
				HUD::SET_BLIP_DISPLAY(uLocal_3276, 4);
				GlobalFunc_565(201, 1, 0);
				SYSTEM::SETTIMERB(0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -2.7513f, 0.6709f, 4.0208f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -1.8015f, -2.0438f, 3.1672f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 32.6628f);
				iLocal_2979 = MISC::GET_GAME_TIMER();
				iLocal_5901 = 29;
			}
			break;
		
		case 29:
			if ((MISC::GET_GAME_TIMER() - iLocal_2979) > 1100 && iLocal_3221 == 0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3212);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_champ_box_01"));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3208))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_3208, 0);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -7.4246f, 4.2393f, 2.5574f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -5.7172f, 1.7728f, 2.5182f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 45f);
				bLocal_5893 = true;
				MISC::SET_TIME_SCALE(1f);
				iLocal_3222 = 0;
				iLocal_3221 = 1;
			}
			func_381();
			func_385();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230))
			{
			}
			if ((((!ENTITY::IS_ENTITY_DEAD(iLocal_3030) && !PED::IS_PED_INJURED(func_2())) && iLocal_2907 == 1) && iLocal_2909 == 1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 1f)
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_SAVE_JIMMY");
				iLocal_3227 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_jumpToCarIntro_F", "", 1, 1, 4);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -0.0528f, -4.5224f, 2.7052f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, 0.1428f, -7.461f, 2.134f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 27.3552f);
				GlobalFunc_4935();
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				iLocal_5901 = 32;
			}
			break;
		
		case 32:
			func_385();
			GlobalFunc_Checkpoint2(4, "STAGE_FRANKLIN_JUMPS_BACK_ONTO_BOAT", 0, 0, 0, 1);
			iLocal_5901 = 30;
			break;
		
		case 30:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_391();
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3026, 20f);
				HUD::CLEAR_PRINTS();
				func_39();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
				}
			}
			if (!iLocal_3220)
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_LEAP", 8, 0, 0, 0))
				{
					iLocal_3220 = 1;
				}
			}
			func_385();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 1f && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && !ENTITY::IS_ENTITY_DEAD(func_2()))
				{
					iLocal_3227 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_jumpToCarLoop_F", "", 1, 1, 4);
					ENTITY::SET_ENTITY_INVINCIBLE(func_2(), 0);
					HUD::SET_BLIP_DISPLAY(uLocal_3276, 0);
					uLocal_3024 = GlobalFunc_6797(func_2(), 0, 145);
					iLocal_3215 = 0;
					iLocal_5901 = 31;
				}
			}
			break;
		
		case 31:
			iLocal_5901 = 33;
			break;
		
		case 33:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if ((iLocal_3215 == 0 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0)) && !GlobalFunc_5172(&Local_2952, 2))
				{
					GlobalFunc_164("YB_OBJ4", 7500, 1);
					iLocal_3215 = 1;
				}
			}
			func_385();
			if ((SYSTEM::TIMERB() > 2500 && iLocal_3215 == 1) && !func_406(1f, 1))
			{
				if (GlobalFunc_5172(&Local_2952, 1))
				{
					GlobalFunc_5653(func_2(), "FAM1_AAAA", "FRANKLIN", 4);
					SYSTEM::SETTIMERB(0);
				}
				else if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CTCHF", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
				}
			}
			if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				if ((func_406(1f, 1) && func_407(1119092736)) && iLocal_5942 == 0)
				{
					GlobalFunc_4935();
					RECORDING::_0x293220DA1B46CEBC(3.5f, 9f, 4);
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
					AUDIO::START_AUDIO_SCENE("FAMILY_1_CATCH_FRANKLIN");
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
					GlobalFunc_5653(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
					GlobalFunc_5385(1);
					iLocal_3227 = func_411(func_2(), 0, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_jumpToCar_F", "", 1, 1, 4);
					GlobalFunc_4948(&uLocal_3300, 0, 0);
					if (!CAM::DOES_CAM_EXIST(uLocal_3005))
					{
						uLocal_3005 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (!CAM::DOES_CAM_EXIST(uLocal_3006))
					{
						uLocal_3006 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3005, iLocal_3030, -1.1738f, -6.6237f, 3.0274f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3005, iLocal_3030, 0.9368f, -7.5638f, 1.1138f, 1);
					CAM::SET_CAM_FOV(uLocal_3005, 29.9168f);
					CAM::SET_CAM_ACTIVE(uLocal_3005, 1);
					CAM::SHAKE_CAM(uLocal_3005, "SKY_DIVING_SHAKE", 1f);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3006, iLocal_3030, -0.7922f, -6.4277f, 3.3964f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3006, iLocal_3030, 0.1019f, -8.848f, 1.8657f, 1);
					CAM::SET_CAM_FOV(uLocal_3006, 30.6854f);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3006, iLocal_3030, -0.7425f, -6.623f, 3.0168f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3006, iLocal_3030, 0.1238f, -9.3185f, 2.0247f, 1);
					CAM::SET_CAM_FOV(uLocal_3006, 30.6854f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3006, uLocal_3005, 1500, 1, 0);
					CAM::SHAKE_CAM(uLocal_3006, "SKY_DIVING_SHAKE", 1f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3006, 0.1f);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					CAM::SET_WIDESCREEN_BORDERS(true, 0);
					bLocal_49 = false;
					HUD::CLEAR_PRINTS();
					HUD::REMOVE_BLIP(&uLocal_3024);
					AUDIO::START_AUDIO_SCENE("FAM1_JUMP_TO_YACHT");
					STREAMING::REQUEST_PTFX_ASSET();
					iLocal_5901 = 34;
				}
			}
			break;
		
		case 34:
			func_385();
			if (!iLocal_2908)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_FRANK_LEAPS"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FRANK_LEAPS");
					iLocal_2908 = 1;
				}
			}
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) > 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) < 0.9f)
				{
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 1f && !ENTITY::IS_ENTITY_DEAD(iLocal_3026)) && !ENTITY::IS_ENTITY_DEAD(func_2()))
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					bLocal_49 = true;
					iLocal_3227 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar02_", "FranklinOnBonnet_landOnCar", "", 1, 1, 4);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3227, 1);
					AUDIO::START_AUDIO_SCENE("FAM1_LAND_ON_BONNET");
					iLocal_5895 = 0;
					bLocal_5892 = false;
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.2f);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
					STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
					iLocal_5901 = 36;
				}
			}
			break;
		
		case 36:
			func_385();
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 0.022f && iLocal_5895 == 0)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_LAND_ON_BONNET", iLocal_3026, 0, 0, 0);
					GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_LEAP2", 9, 0, 0, 0);
					CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.7f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3026, 4, 1);
					}
					HUD::SET_BLIP_DISPLAY(uLocal_3276, 4);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 3.5f);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_3026, 0f, -0.9f, 0f, 0f, 150f, 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_3026, 1, 0f, 0f, -1f, 0f, 1f, 0f, 0, 1, 1, 1, 0, 1);
					AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_3026, 0.7f);
					VEHICLE::DELETE_VEHICLE(&iLocal_53);
					VEHICLE::DELETE_VEHICLE(&iLocal_54);
					bLocal_5892 = false;
					iLocal_5895 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 0.325f)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_SAFE", 9, 0, 0, 0))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_1_CATCH_FRANKLIN");
						AUDIO::START_AUDIO_SCENE("FAMILY_1_GET_THE_YACHT");
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
						{
							VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3026, 4, 1);
						}
						PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 7.5f);
						AUDIO::STOP_AUDIO_SCENE("FAMILY_1_PROTECT_FRANKLIN");
						iLocal_5901 = 37;
					}
				}
			}
			PED::SET_PED_RESET_FLAG(func_2(), 64, 1);
			if (PED::IS_PED_INJURED(func_2()))
			{
				GlobalFunc_509("CMN_FDIED");
				func_6();
			}
			else if (FIRE::IS_ENTITY_ON_FIRE(func_2()))
			{
				ENTITY::SET_ENTITY_HEALTH(func_2(), 0);
			}
			break;
		
		case 37:
			func_385();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 0.55f)
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_1_GET_THE_YACHT");
					AUDIO::START_AUDIO_SCENE("FAMILY_1_CAR_BREAKS_DOWN");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, 70f);
						PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.9f);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_99))
					{
						uLocal_99 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_3026, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3026, "overheat"), 1065353216, 0, 0, 0);
					}
					RECORDING::_0x293220DA1B46CEBC(3.5f, 5f, 3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 1f, 0);
					AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_3026, 0.75f);
					AUDIO::_0x1C073274E065C6D2(iLocal_3026, 1);
					iLocal_5985 = MISC::GET_GAME_TIMER();
					iLocal_5901 = 38;
				}
			}
			break;
		
		case 38:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) >= 1f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
					{
						if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
						{
							PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
						}
					}
				}
			}
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN", 0))
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CARFUCK", 9, 0, 0, 0) || (MISC::GET_GAME_TIMER() - iLocal_5985) > 15000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_BROKE_CAR");
					if (HUD::DOES_BLIP_EXIST(uLocal_3276))
					{
						HUD::REMOVE_BLIP(&uLocal_3276);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN", "FAMILY1_BOAT", 1);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN_ADDITIONAL", "FAMILY1_BOAT", 1);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN");
					iLocal_5900 = 8;
				}
			}
			break;
		
		case 41:
			func_79();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.7f)
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
					PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 1, 1, 1, 0);
					iLocal_3231 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3207))
					{
						if (!PED::IS_PED_INJURED(iLocal_3207))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3207, iLocal_3231, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_failIdle_thug", 1000f, -1000f, 0, 0, 1148846080, 0);
						}
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3231, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3231, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
					HUD::CLEAR_HELP(1);
					GlobalFunc_509("CMN_FDIED");
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
				}
			}
			if (!PED::IS_PED_INJURED(func_2()))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(func_2()))
				{
					if (PED::IS_PED_RAGDOLL(func_2()))
					{
						if (!PED::IS_PED_INJURED(func_2()))
						{
							ENTITY::SET_ENTITY_HEALTH(func_2(), 0);
						}
						HUD::CLEAR_HELP(1);
						GlobalFunc_509("CMN_FDIED");
						func_79();
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
						func_6();
					}
				}
			}
			break;
		
		case 42:
			func_79();
			HUD::CLEAR_HELP(1);
			if (iLocal_5901 < 27)
			{
				while (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_F1", 9, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			else if (iLocal_5901 < 8)
			{
				while (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_F2", 9, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_F3", 9, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_509("YB_FAIL3");
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			SYSTEM::SETTIMERA(0);
			func_6();
			break;
		
		case 43:
		case 44:
			func_79();
			if (iLocal_5901 == 44)
			{
				GlobalFunc_509("CMN_GENSTCK");
			}
			else
			{
				GlobalFunc_509("CMN_GENDEST");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			while (SYSTEM::TIMERA() < 200)
			{
				if (iLocal_5901 < 8)
				{
					func_401();
				}
				SYSTEM::WAIT(0);
			}
			func_6();
			break;
		
		case 46:
			func_79();
			GlobalFunc_509("YB_BLEWCOV");
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			func_6();
			break;
	}
	if (fLocal_3256 > 191000f && iLocal_5901 < 34)
	{
		switch (iLocal_3224)
		{
			case 0:
				GlobalFunc_5105();
				iLocal_3224++;
				break;
			
			case 1:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_GNAFAIL", 9, 0, 0, 0))
					{
						iLocal_3224 = 1;
					}
				}
				break;
			}
	}
	if (fLocal_3256 > 195053f && iLocal_50 == 0)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_3276))
		{
			HUD::SET_BLIP_FLASHES(uLocal_3276, 1);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_3024))
		{
			HUD::SET_BLIP_FLASHES(uLocal_3024, 1);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_3023))
		{
			HUD::SET_BLIP_FLASHES(uLocal_3023, 1);
		}
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "Fam1New");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1New");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1End");
		iLocal_50 = 1;
	}
	if (fLocal_3256 > 197000f && iLocal_5994 == 0)
	{
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN", "FAMILY1_BOAT", 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN_ADDITIONAL", "FAMILY1_BOAT", 1);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN");
			RECORDING::_0x293220DA1B46CEBC(3.5f, 2f, 3);
			iLocal_5994 = 1;
		}
	}
	if (fLocal_3256 > 200053f)
	{
		GlobalFunc_5105();
		if (iLocal_5901 < 34)
		{
			GlobalFunc_509("YB_FAIL");
			iLocal_5900 = 12;
		}
	}
	if (bLocal_49)
	{
		func_353();
	}
	if (func_383(2f) && (iLocal_5901 == 26 || iLocal_5901 == 27))
	{
		func_352(iLocal_3030);
	}
	else if (iLocal_5901 != 9)
	{
		func_348();
	}
	if (iLocal_5901 > 27 && iLocal_5900 <= 8)
	{
		STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit_rear");
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) >= 0.8f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3210) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_3210, iLocal_3026, 0) && STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit_rear"))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3210, -2f, 1);
						PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 1);
						PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_3210, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT_REAR"));
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 1, 0);
					}
				}
			}
		}
	}
}

void func_352(int iParam0)//Position - 0x1D475
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_3026, 0f);
			fLocal_100 = ENTITY::GET_ENTITY_SPEED(iParam0);
			fLocal_5975 = ENTITY::GET_ENTITY_SPEED(iLocal_3026);
			if (fLocal_5975 > fLocal_100)
			{
				if ((fLocal_5975 + 1f) > fLocal_100)
				{
					fVar0 = 0.05f;
				}
			}
			else
			{
				fVar0 = -0.06f;
			}
			fLocal_5972 = (fLocal_3255 * 30f);
			fLocal_3253 = (fLocal_3253 + (fVar0 * SYSTEM::TIMESTEP()));
		}
	}
}

void func_353()//Position - 0x1D4EE
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (func_380(&uLocal_3491, 1, "Fam1New"))
	{
	}
	func_379(uLocal_3007, iLocal_53, fLocal_3253);
	func_379(uLocal_3008, iLocal_54, fLocal_3253);
	switch (iLocal_2935)
	{
		case 0:
			if (fLocal_3256 > 0f)
			{
				iLocal_3003 = 0;
				iLocal_2935++;
			}
		
		case 1:
			if (fLocal_3256 > 10000.05f)
			{
				iLocal_3003 = 1;
				iLocal_2935++;
			}
		
		case 2:
			if (fLocal_3256 > 37351.9f)
			{
				iLocal_3003 = 2;
				iLocal_2935++;
			}
		
		case 3:
			if (fLocal_3256 > 64958.88f)
			{
				iLocal_3003 = 1;
				iLocal_2935++;
			}
		
		case 4:
			if (fLocal_3256 > 67958.88f)
			{
				iLocal_3003 = 2;
				iLocal_2935++;
			}
		
		case 5:
			if (fLocal_3256 > 73188.95f)
			{
				iLocal_3003 = 1;
				iLocal_2935++;
			}
		
		case 6:
			if (fLocal_3256 > 96840.61f)
			{
				iLocal_3003 = 2;
				iLocal_2935++;
			}
		
		case 7:
			if (fLocal_3256 > 106840.6f)
			{
				iLocal_3003 = 1;
				iLocal_2935++;
			}
		
		case 8:
			if (fLocal_3256 > 109547.6f)
			{
				iLocal_3003 = 2;
				iLocal_2935++;
			}
		
		case 9:
			if (fLocal_3256 > 116840.6f)
			{
				if (iLocal_2980 == 0)
				{
					iLocal_2981 = 0;
					iLocal_2980 = 1;
				}
				iLocal_3003 = 0;
				iLocal_2935++;
			}
		
		case 10:
			if (fLocal_3256 > 126840.6f)
			{
				iLocal_3003 = 1;
				iLocal_2935++;
			}
		
		case 11:
			if (fLocal_3256 > 136840.6f)
			{
				iLocal_3003 = 2;
				iLocal_2935++;
			}
		
		case 12:
			if (fLocal_3256 > 185840.6f)
			{
				iLocal_2935++;
			}
		
		default:
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_3026, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1) };
	}
	if (PAD::IS_CONTROL_PRESSED(0, 80) || bLocal_5892)
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026))
		{
			fVar6 = MISC::ABSF((Var0.f_2 - Var3.f_2));
		}
		else
		{
			fVar6 = 0f;
		}
	}
	if ((((((((!ENTITY::IS_ENTITY_DEAD(iLocal_3026) && iLocal_5901 > 8) && iLocal_5901 < 36) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026)) && fVar6 < 3f) && !GlobalFunc_116(0)) && GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_3026), ENTITY::GET_ENTITY_HEADING(iLocal_3030), 50f)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_3026, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, Local_3249), 8f, 14f, 5f, 0, 1, 0)) || bLocal_5892)
	{
		if (((((iLocal_2981 == 0 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !CAM::IS_CAM_ACTIVE(uLocal_3004)) && !CAM::IS_CAM_ACTIVE(uLocal_3007)) && !CAM::IS_CAM_ACTIVE(uLocal_3008)) && iLocal_5901 > 9)
		{
			GlobalFunc_159("YB_HELP3", -1);
			iLocal_2981 = 1;
		}
		if (GlobalFunc_7635(&uLocal_3312, 0, 0, 0) || bLocal_5892)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
			}
			if (!bLocal_5892)
			{
				iLocal_2980 = 1;
			}
			if (fLocal_3256 > 145840.6f)
			{
				iLocal_3003 = 1;
			}
			if (!bLocal_5892 && !bLocal_5893)
			{
				switch (iLocal_3003)
				{
					case 0:
						if (!bLocal_5892)
						{
							if (!CAM::IS_CAM_ACTIVE(uLocal_3004))
							{
								CAM::SET_CAM_ACTIVE(uLocal_3004, 1);
								CAM::SHAKE_CAM(uLocal_3004, "SKY_DIVING_SHAKE", 1f);
							}
						}
						CAM::SET_CAM_ACTIVE(uLocal_3007, 0);
						CAM::SET_CAM_ACTIVE(uLocal_3008, 0);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3004, 0.1f);
						break;
					
					case 1:
						CAM::SET_CAM_ACTIVE(uLocal_3004, 0);
						CAM::SET_CAM_ACTIVE(uLocal_3007, 1);
						CAM::SET_CAM_ACTIVE(uLocal_3008, 0);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3007, 0.1f);
						CAM::SET_CAM_NEAR_CLIP(uLocal_3007, 0f);
						break;
					
					case 2:
						CAM::SET_CAM_ACTIVE(uLocal_3004, 0);
						CAM::SET_CAM_ACTIVE(uLocal_3007, 0);
						CAM::SET_CAM_ACTIVE(uLocal_3008, 1);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3008, 0.1f);
						CAM::SET_CAM_NEAR_CLIP(uLocal_3008, 0f);
						break;
					}
			}
			if (bLocal_5892 || bLocal_5893)
			{
				CAM::SET_CAM_ACTIVE(uLocal_3004, 1);
				CAM::SET_CAM_ACTIVE(uLocal_3007, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3008, 0);
			}
			if (bLocal_5894)
			{
				CAM::SET_CAM_ACTIVE(uLocal_3004, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3007, 1);
				CAM::SET_CAM_ACTIVE(uLocal_3008, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (bLocal_5892 && bLocal_5893)
			{
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (iLocal_2932 == 0)
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
			}
			iLocal_5942 = 1;
		}
		else
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			CAM::SET_CAM_ACTIVE(uLocal_3004, 0);
			CAM::SET_CAM_ACTIVE(uLocal_3007, 0);
			CAM::SET_CAM_ACTIVE(uLocal_3008, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			CAM::SET_WIDESCREEN_BORDERS(false, 0);
			iLocal_5942 = 0;
		}
	}
	else
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		iLocal_5942 = 0;
		CAM::SET_CAM_ACTIVE(uLocal_3004, 0);
		CAM::SET_CAM_ACTIVE(uLocal_3007, 0);
		CAM::SET_CAM_ACTIVE(uLocal_3008, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030) && (iLocal_5901 < 8 || iLocal_5901 > 33))
		{
			if (iLocal_5901 > 33)
			{
				func_359(&uLocal_3300, iLocal_3030, "YB_FOCUS", 0, 1, 0, 1);
			}
			else
			{
				func_359(&uLocal_3300, iLocal_3030, "YB_FOCUS", 0, 1, (Global_Mission_Fail_State.f_12[0] == 0 && iLocal_5901 > 9), 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				Global_Mission_Fail_State.f_12[0] = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026))
		{
			func_1();
		}
	}
	func_354();
}

void func_354()//Position - 0x1DB2E
{
	float fVar0;
	var uVar1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026) && !ENTITY::IS_ENTITY_DEAD(iLocal_3029))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026))
		{
			if ((CAM::IS_CAM_ACTIVE(uLocal_3004) || CAM::IS_CAM_ACTIVE(uLocal_3007)) || CAM::IS_CAM_ACTIVE(uLocal_3008))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
				{
					uVar1 = func_357(ENTITY::GET_ENTITY_COORDS(iLocal_3029, 1), 1, "Fam1New", &uLocal_3491);
					if (!bLocal_5892)
					{
						fVar2 = GlobalFunc_156(iLocal_3026, iLocal_3029, 1);
						if (fVar2 < 25f)
						{
							fVar2 = 25f;
						}
						fVar0 = func_356(uVar1, fVar2);
					}
					else if (iLocal_5901 > 10)
					{
						fVar0 = func_356(uVar1, 23f);
					}
					else
					{
						fVar0 = func_356(uVar1, 24.5f);
					}
					fLocal_3254 = fLocal_3253;
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, 1, "Fam1Cine", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, fVar0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3026, fLocal_3253);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3026, 1);
				}
			}
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_3029, fLocal_3253);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_3030, fLocal_3253);
			if (iLocal_5901 > 10)
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_3026) > ENTITY::GET_ENTITY_SPEED(iLocal_3030) && !func_355())
				{
					fLocal_3254 = (fLocal_3254 - (0.815f * SYSTEM::TIMESTEP()));
				}
				else
				{
					fLocal_3254 = (fLocal_3254 + (0.81f * SYSTEM::TIMESTEP()));
				}
			}
			else
			{
				GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_3026) > ENTITY::GET_ENTITY_SPEED(iLocal_3030) && !func_355())
				{
					fLocal_3254 = (fLocal_3254 - (0.18f * SYSTEM::TIMESTEP()));
				}
				else
				{
					fLocal_3254 = (fLocal_3254 + (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_3026, fLocal_3254);
			if (!((CAM::IS_CAM_ACTIVE(uLocal_3004) || CAM::IS_CAM_ACTIVE(uLocal_3007)) || CAM::IS_CAM_ACTIVE(uLocal_3008)))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_3026, 1, 0);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
			}
		}
	}
}

int func_355()//Position - 0x1DD0F
{
	if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3026) < (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3026) - fLocal_48))
	{
		return 1;
	}
	return 0;
}

float func_356(var uParam0, float fParam1)//Position - 0x1DD31
{
	struct<3> Var0;
	
	fLocal_5941 = uParam0;
	Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(502, fLocal_5941, "Fam1") };
	while (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_3029, 1), 1) < fParam1)
	{
		Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(502, fLocal_5941, "Fam1") };
		fLocal_5941 = (fLocal_5941 - 100f);
		if (fLocal_5941 < 0f)
		{
			return 0f;
		}
	}
	return (fLocal_5941 + 100f);
}

float func_357(struct<3> Param0, int iParam3, char* sParam4, var uParam5)//Position - 0x1DD9D
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam3, sParam4))
	{
		fVar0 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam3, sParam4) / 800f);
		iVar2 = func_358(Param0, uParam5);
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam5[iVar2 /*3*/]), *(uParam5[iVar2 + 1 /*3*/]), 1);
		Var3 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam5[iVar2 /*3*/]), *(uParam5[iVar2 + 1 /*3*/]), 1) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam5[iVar2 /*3*/]), Var3, 1);
		fVar7 = ((fVar6 / fVar1) * fVar0);
	}
	return (fVar7 + (IntToFloat(iVar2) * fVar0));
}

int func_358(struct<3> Param0, var uParam3)//Position - 0x1DE2D
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = 99999f;
	iVar0 = iLocal_3489;
	while (iVar0 <= 798)
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1), Param0, 1);
		if (fVar2 < fVar1)
		{
			iLocal_3489 = iVar0;
			fVar1 = fVar2;
		}
		iVar0++;
	}
	return iLocal_3489;
}

void func_359(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1DE8C
{
	GlobalFunc_10060(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, bParam5, bParam6);
}




















void func_379(var uParam0, int iParam1, float fParam2)//Position - 0x1EC92
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
			Var3 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
			CAM::SET_CAM_COORD(uParam0, Var0);
			CAM::SET_CAM_ROT(uParam0, Var3, 2);
		}
	}
}

int func_380(var uParam0, int iParam1, char* sParam2)//Position - 0x1ECE0
{
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2) && iLocal_5897 > -1)
	{
		if (iLocal_5897 == 0)
		{
			fLocal_5898 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
			fLocal_5899 = (fLocal_5898 / 800f);
			*(uParam0[799 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fLocal_5898, sParam2) };
		}
		if (iLocal_5897 < 799)
		{
			*(uParam0[iLocal_5897 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_5899 * IntToFloat(iLocal_5897)), sParam2) };
			if (iLocal_5897 + 1 < 799)
			{
				*(uParam0[iLocal_5897 + 1 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_5899 * IntToFloat(iLocal_5897 + 1)), sParam2) };
			}
			if (iLocal_5897 + 2 < 799)
			{
				*(uParam0[iLocal_5897 + 2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_5899 * IntToFloat(iLocal_5897 + 2)), sParam2) };
			}
			if (iLocal_5897 + 3 < 799)
			{
				*(uParam0[iLocal_5897 + 3 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_5899 * IntToFloat(iLocal_5897 + 3)), sParam2) };
			}
			iLocal_5897 += 4;
			return 0;
		}
		else
		{
			iLocal_5897 = -1;
			return 1;
		}
	}
	return 0;
}

void func_381()//Position - 0x1EDE1
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230))
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3230, Local_3293, Local_3296, 2);
		Local_3293.x = (Local_3293.x * (1f - (2.5f * SYSTEM::TIMESTEP())));
		Local_3293.f_1 = (Local_3293.f_1 * (1f - (2.5f * SYSTEM::TIMESTEP())));
		Local_3293.f_2 = (Local_3293.f_2 * (1f - (8.5f * SYSTEM::TIMESTEP())));
		Local_3296.x = (Local_3296.x * (1f - (8.9f * SYSTEM::TIMESTEP())));
		Local_3296.f_1 = (Local_3296.f_1 * (1f - (8.9f * SYSTEM::TIMESTEP())));
		Local_3296.f_2 = (Local_3296.f_2 * (1f - (8.9f * SYSTEM::TIMESTEP())));
		if (iLocal_3299 == 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) > 0.01f && iLocal_5981 == 0)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_DROP_IN_CAR", iLocal_3210, 0, 0, 0);
					iLocal_5981 = 1;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) > 0.024f)
				{
					if (SYSTEM::VDIST(Local_3293, 0f, 0f, 0f) < 1.15f)
					{
						CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.42f);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_3026, 1, 0f, 0f, -5.4f, 0f, -0.9f, 0f, 0, 1, 1, 1, 0, 1);
						Local_3293.x = 0f;
						Local_3293.f_1 = 0f;
						Local_3293.f_2 = 0f;
						Local_3296.x = 0f;
						Local_3296.f_1 = 0f;
						Local_3296.f_2 = 0f;
						iLocal_3299 = 1;
					}
					else
					{
						PED::SET_PED_TO_RAGDOLL(iLocal_3210, 0, 60000, 2, 1, 1, 0);
						GlobalFunc_509("YB_FAIL1");
						if (!PED::IS_PED_INJURED(iLocal_3210))
						{
							PED::APPLY_DAMAGE_TO_PED(iLocal_3210, 1000, 1);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
						func_6();
					}
				}
			}
		}
		else if (!iLocal_2907 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) >= 0.021f)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_JIMMY_LANDS"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_JIMMY_LANDS");
				iLocal_2907 = 1;
			}
		}
	}
}

int func_382(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14)//Position - 0x1EFA9
{
	int iVar0;
	
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Param0, Param3, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(iParam6, iVar0, sParam11, sParam12, 1000f, -1000f, 0, 0, 1148846080, 0);
	if (iParam7 != 0)
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam7, iVar0, sParam11, sParam13, 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam8))
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar0, iParam8, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam8, sParam9));
	}
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, iParam10);
	if (bParam14)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam6, 0, 0);
		if (iParam7 != 0)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam7, 0, 0);
		}
	}
	return iVar0;
}

bool func_383(float fParam0)//Position - 0x1F044
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (fParam0 > 1f)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	Var1 = { Vector(1.75f, 2f, 2f) * Vector(fParam0, fParam0, fParam0) };
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, Local_3249.x, Local_3249.f_1, 0.2f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_3026, Var4, Var1, iVar0, iVar0, 0);
}

void func_384()//Position - 0x1F0A4
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 1f)
		{
			iLocal_2910 = 1;
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3228))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3228) >= 1f)
		{
			iLocal_2910 = 1;
		}
	}
	if (iLocal_2910 == 1 && !(iLocal_2928 > 0 && iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_3208))
		{
			if ((!PED::IS_PED_RAGDOLL(iLocal_3208) && !PED::IS_PED_RAGDOLL(func_2())) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3236))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					iLocal_3225 = func_411(func_2(), iLocal_3208, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "onYacht_overboardLoop_thugA", 1, 1, 4);
				}
				else
				{
					iLocal_3228 = func_411(func_2(), iLocal_3208, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop2_F", "onYacht_overboardLoop2_thugA", 1, 1, 4);
				}
			}
		}
		iLocal_2928++;
		iLocal_2927 = 0;
		fLocal_2924 = 0f;
		iLocal_5982 = 0;
		iLocal_2910 = 0;
	}
	if (iLocal_5901 > 27 || (iLocal_2928 > 0 && iLocal_51))
	{
		switch (iLocal_5982)
		{
			case 0:
				iLocal_5982++;
				break;
			
			case 1:
				iLocal_5982++;
				break;
			
			case 2:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3236))
				{
					iLocal_3236 = func_411(func_2(), iLocal_3208, iLocal_3030, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboard_pulldown_F", "onYacht_overboard_pulldown_thugA", 1, 1, 4);
					iLocal_3212 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3208, 1), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3212, iLocal_3208, PED::GET_PED_BONE_INDEX(iLocal_3208, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					iLocal_2927 = 0;
					fLocal_2924 = 0f;
					iLocal_5982++;
				}
				break;
			
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3236) >= 0.5f && ENTITY::DOES_ENTITY_EXIST(iLocal_3212))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3212);
					ENTITY::DETACH_ENTITY(iLocal_3212, 1, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_3212, 0, 0, 0);
					GlobalFunc_5130(func_2(), "MELEE_LARGE_GRUNT", 3);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3212);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3236) >= 0.544f)
				{
					GlobalFunc_5653(iLocal_3208, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3208);
					TASK::SET_HIGH_FALL_TASK(iLocal_3208, 10000, 30000, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3208))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_3208, 1000, 1);
					}
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_3208, 512);
					iLocal_5982++;
				}
				break;
			
			case 4:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3236) >= 0.99f)
				{
					iLocal_3236 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "", 0, 1, 4);
					iLocal_5982++;
				}
				break;
		}
	}
	else
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3225))
		{
			switch (iLocal_2927)
			{
				case 0:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.02f)
					{
						iLocal_3212 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3208, 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3212, iLocal_3208, PED::GET_PED_BONE_INDEX(iLocal_3208, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_3212, 300);
						iLocal_2927++;
					}
					break;
				
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) >= 0.594f)
					{
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3212);
						ENTITY::DETACH_ENTITY(iLocal_3212, 1, 0);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_3212, 0, 0, 0);
						GlobalFunc_5130(func_2(), "MELEE_LARGE_GRUNT", 3);
						ENTITY::SET_ENTITY_VELOCITY(iLocal_3212, ENTITY::GET_ENTITY_VELOCITY(iLocal_3030));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3212);
						iLocal_2927++;
					}
					break;
				
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_B4", 8, 0, 0, 0))
						{
							iLocal_2927++;
						}
					}
					else
					{
						iLocal_2927++;
					}
					break;
				
				case 3:
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) - fLocal_2924) < 0f)
					{
						iLocal_2927 = 0;
					}
					break;
			}
			fLocal_2924 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3228))
		{
			switch (iLocal_2927)
			{
				case 0:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3228) >= 0.007f)
					{
						iLocal_3212 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3208, 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3212, iLocal_3208, PED::GET_PED_BONE_INDEX(iLocal_3208, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_3212, 200);
						iLocal_2927++;
					}
					break;
				
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3228) >= 0.616f)
					{
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3212);
						ENTITY::DETACH_ENTITY(iLocal_3212, 1, 0);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_3212, 0, 0, 0);
						GlobalFunc_5130(func_2(), "MELEE_LARGE_GRUNT", 3);
						ENTITY::SET_ENTITY_VELOCITY(iLocal_3212, ENTITY::GET_ENTITY_VELOCITY(iLocal_3030));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3212);
						iLocal_2927++;
					}
					break;
				
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_B4", 8, 0, 0, 0))
						{
							iLocal_2927++;
						}
					}
					else
					{
						iLocal_2927++;
					}
					break;
				
				case 3:
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3228) - fLocal_2924) < 0f)
					{
						iLocal_2927 = 0;
					}
					break;
			}
			fLocal_2924 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3228);
			if (PED::IS_PED_INJURED(iLocal_3208))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3212))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3212);
					ENTITY::DETACH_ENTITY(iLocal_3212, 1, 0);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_3212, ENTITY::GET_ENTITY_VELOCITY(iLocal_3030));
				}
			}
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
	{
		switch (iLocal_2927)
		{
			case 0:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.05f)
				{
					iLocal_3212 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3208, 1), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3212, iLocal_3208, PED::GET_PED_BONE_INDEX(iLocal_3208, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_3212, 0, 0, 0);
					GlobalFunc_5130(func_2(), "MELEE_LARGE_GRUNT", 3);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_3212, 200);
					iLocal_2927++;
				}
				break;
			
			case 1:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.6f)
				{
					iLocal_2927++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.61f)
					{
						ENTITY::SET_ENTITY_HEALTH(func_2(), 0);
						iLocal_3231 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3231, 0);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3231, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
						HUD::CLEAR_HELP(1);
						SYSTEM::SETTIMERB(0);
						iLocal_2927++;
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERB() > 4000)
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3212);
					ENTITY::DETACH_ENTITY(iLocal_3212, 1, 0);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_3212, ENTITY::GET_ENTITY_VELOCITY(iLocal_3030));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3212);
					ENTITY::SET_ENTITY_HEALTH(func_2(), 0);
					HUD::CLEAR_HELP(1);
					GlobalFunc_509("CMN_FDIED");
					func_79();
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
					func_6();
				}
				break;
		}
		fLocal_2924 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231);
		if (PED::IS_PED_INJURED(iLocal_3208))
		{
			ENTITY::DETACH_ENTITY(iLocal_3212, 1, 0);
			ENTITY::SET_ENTITY_VELOCITY(iLocal_3212, ENTITY::GET_ENTITY_VELOCITY(iLocal_3030));
		}
	}
	if (ENTITY::GET_ENTITY_HEALTH(iLocal_3208) < 200)
	{
		if (iLocal_2927 == 0 && iLocal_5982 <= 1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3236))
			{
				if (func_409(iLocal_3236) > 0.99f)
				{
					iLocal_3236 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "", 0, 1, 4);
					iLocal_2927 = -1;
				}
			}
		}
	}
}

void func_385()//Position - 0x1F7FE
{
	switch (iLocal_5932)
	{
		case 0:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (MISC::GET_GAME_TIMER() - iLocal_2979) > 2200)
			{
				iLocal_5968 = 0;
				iLocal_3209 = PED::CREATE_PED(26, joaat("g_m_y_salvagoon_01"), 723.9294f, -1087.5f, 21.1693f, 96.2191f, 1, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3209, "FAMILY_1_BOAT_PEDS", 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3209, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3209, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3209, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3209, 4, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3209, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3209, iLocal_2951);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3209, 0);
				iLocal_3229 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3229, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
				GlobalFunc_173(&uLocal_3324, 6, iLocal_3209, "YACHTPED3", 0, 1);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3229, 0);
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3229, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3209, iLocal_3229, "MISSFAM1_YACHTBATTLEonYacht02_", "onYacht_getOnBoom_thug", 1000f, -1000f, 0, 0, 1148846080, 0);
				GlobalFunc_593(iLocal_3209, 0);
				iLocal_5967 = MISC::GET_GAME_TIMER();
				ENTITY::STOP_ENTITY_ANIM(iLocal_3030, "onYacht_hitByBoom_boom", "MISSFAM1_YACHTBATTLEonYacht02_", -1000f);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_3030, "Yacht_Door_Opening_mastOUT", "MISSFAM1_YachtBattle", 1000f, 0, 0, 1, 0, 0);
				VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_2(iLocal_3030, 1);
				VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_3(iLocal_3030, 1);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3030);
				iLocal_5932 = 1;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				VEHICLE::_GET_BOAT_BOOM_POSITION_RATIO_3(iLocal_3030, 1);
			}
			if (iLocal_5901 > 28)
			{
				if (!PED::IS_PED_INJURED(iLocal_3209))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3229) >= 1f)
					{
						iLocal_3229 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3229, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3229, 0);
						PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3229, 0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3209, iLocal_3229, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_shuffleAlong_Thug", 1000f, -1000f, 0, 0, 1148846080, 0);
						iLocal_5932 = 2;
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3229) && !PED::IS_PED_INJURED(iLocal_3209))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3229) >= 1f)
				{
					iLocal_3229 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3229, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3229, 0);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3229, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3209, iLocal_3229, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_shuffleAlong_Thug", 1000f, -1000f, 0, 0, 1148846080, 0);
					iLocal_5932 = 2;
				}
			}
			if (iLocal_3221 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_5967) > 3000)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_3209, PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_5932 = 6;
					}
				}
			}
			break;
		
		case 2:
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3229) && !PED::IS_PED_INJURED(iLocal_3209)) && iLocal_5901 < 27)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3229) >= 1f)
				{
					iLocal_3229 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3229, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3229, 1);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3229, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3209, iLocal_3229, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_hitJimmyLoop_Thug", 1000f, -1000f, 0, 0, 1148846080, 0);
					iLocal_5970 = MISC::GET_GAME_TIMER();
					iLocal_5932 = 3;
				}
			}
			if (iLocal_5901 > 28)
			{
				if (!PED::IS_PED_INJURED(iLocal_3209) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3030) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3209)) && (MISC::GET_GAME_TIMER() - iLocal_5969) > 5000)
					{
						GlobalFunc_5653(iLocal_3209, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3209);
						PED::SET_PED_TO_RAGDOLL(iLocal_3209, 0, 10000, 2, 1, 1, 0);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "TEST_SCREAM_LONG", ENTITY::GET_ENTITY_COORDS(iLocal_3209, 1), 0, 0, 0, 0);
						iLocal_5932 = 7;
					}
				}
			}
			if (iLocal_3221 == 1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_3209, PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_5932 = 6;
				}
			}
			break;
		
		case 3:
			if (iLocal_5901 < 27)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_5970) > 10000)
				{
					iLocal_3230 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (!PED::IS_PED_INJURED(iLocal_3210))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3210, iLocal_3230, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_twohand_hang_enter", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3230, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3230, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 0, 0);
					iLocal_2930 = 100;
					iLocal_5932 = 4;
				}
			}
			else
			{
				iLocal_5932 = 9;
			}
			break;
		
		case 4:
			if (iLocal_5901 < 27)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) >= 0.99f && iLocal_2930 != 101)
				{
					iLocal_3230 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (!PED::IS_PED_INJURED(iLocal_3210))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3210, iLocal_3230, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_twohand_hang_idle", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3230, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3230, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 0, 0);
					iLocal_2930 = 101;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_5970) > 20000)
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_3210, 1);
					GlobalFunc_5653(iLocal_3210, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3210);
					PED::SET_PED_TO_RAGDOLL(iLocal_3210, 10000, 30000, 1, 1, 1, 0);
					iLocal_5932 = 5;
				}
			}
			else
			{
				iLocal_5932 = 9;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_5970) > 23000)
			{
				if (iLocal_5901 < 27)
				{
					if (!PED::IS_PED_INJURED(iLocal_3210))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_3210, 0);
					}
				}
				else
				{
					iLocal_5932 = 9;
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_3209))
			{
				GlobalFunc_5653(iLocal_3209, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3209);
				PED::SET_PED_TO_RAGDOLL(iLocal_3209, 0, 10000, 2, 1, 1, 0);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "TEST_SCREAM_LONG", ENTITY::GET_ENTITY_COORDS(iLocal_3209, 1), 0, 0, 0, 0);
			}
			iLocal_5896 = MISC::GET_GAME_TIMER();
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, 1.3624f, -7.9447f, 3.2304f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -0.2507f, -5.4743f, 2.6868f, 1);
			CAM::SET_CAM_FOV(uLocal_3004, 50.7682f);
			iLocal_5932 = 7;
			break;
		
		case 9:
			if (iLocal_5971 == 0)
			{
				iLocal_3229 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3229, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3229, 1);
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3229, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3209, iLocal_3229, "MISSFAM1_YACHTBATTLEonYacht02_", "onboom_loop_goon", 1000f, -1000f, 0, 0, 1148846080, 0);
				iLocal_5971 = 1;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3229) && !PED::IS_PED_INJURED(iLocal_3209))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3229) >= 0.99f)
				{
					GlobalFunc_5653(iLocal_3209, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_3209);
					PED::SET_PED_TO_RAGDOLL(iLocal_3209, 0, 10000, 2, 1, 1, 0);
					iLocal_5896 = MISC::GET_GAME_TIMER();
					iLocal_5932 = 7;
				}
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_5896) > 3500)
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_3209, 0);
				iLocal_5932 = 8;
			}
			break;
	}
	if (PED::IS_PED_INJURED(iLocal_3209) && iLocal_5968 == 0)
	{
		GlobalFunc_200(&uLocal_3324, 5);
		GlobalFunc_565(201, 1, 0);
		iLocal_5968 = 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3209))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_3209) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_3209, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_3209, 0);
		}
	}
	if (((!GlobalFunc_5172(&Local_2952, 1) && iLocal_5932 >= 2) && iLocal_5932 <= 6) && iLocal_5901 < 29)
	{
		if (!PED::IS_PED_INJURED(iLocal_3209))
		{
			if (iLocal_3216 == 0)
			{
				GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_B3", 7, 0, 0, 0);
				iLocal_3216 = 1;
			}
		}
	}
}



void func_388()//Position - 0x20043
{
	switch (iLocal_2930)
	{
		case 0:
			fLocal_2938[0] = 97838.59f;
			fLocal_2938[1] = 101355.2f;
			fLocal_2938[2] = 103463.8f;
			fLocal_2938[3] = 109879.9f;
			if (fLocal_3256 > fLocal_2938[0])
			{
				iLocal_2931 = 1;
			}
			if (fLocal_3256 > fLocal_2938[1])
			{
				iLocal_2931 = 2;
			}
			if (fLocal_3256 > fLocal_2938[2])
			{
				iLocal_2931 = 3;
			}
			iLocal_2930++;
			break;
		
		case 1:
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3230) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230) >= 1f) || iLocal_3223 == 1)
			{
				iLocal_3230 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0.1f, 0f, 0f, 0f, 2);
				if (!PED::IS_PED_INJURED(iLocal_3210))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3210, iLocal_3230, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_hangLoop_J", 1000f, -1000f, 0, 0, 1148846080, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3230, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3230, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
				iLocal_3223 = 1;
				iLocal_2930++;
			}
			break;
		
		case 2:
			if (iLocal_2931 < 4)
			{
				if (fLocal_3256 > fLocal_2938[iLocal_2931])
				{
					iLocal_2931++;
					iLocal_2930++;
				}
			}
			else
			{
				iLocal_3230 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0.1f, 0f, 0f, 0f, 2);
				if (!PED::IS_PED_INJURED(iLocal_3210))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3210, iLocal_3230, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_hangLoop_J", 1000f, -1000f, 0, 0, 1148846080, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3230, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3230, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 0, 0);
				iLocal_2930 = -1;
			}
			break;
		
		case 3:
			iLocal_3235 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0.1f, 0f, 0f, 0f, 2);
			if (!PED::IS_PED_INJURED(iLocal_3210))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3210, iLocal_3235, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_liftLegs_J", 1000f, -1000f, 0, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3235, 0);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3235, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "misc_e"));
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 0, 0);
			iLocal_2930++;
			break;
		
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3235))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3235) >= 1f)
				{
					iLocal_2930 = 1;
				}
			}
			break;
	}
}



void func_391()//Position - 0x202F8
{
	iLocal_115 = 1;
}

void func_392()//Position - 0x20303
{
	iLocal_3210 = PED::CREATE_PED(26, joaat("ig_jimmydisanto"), 723.9294f, -1087.5f, 21.1693f, 96.2191f, 1, 1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3210, "FAMILY_1_BOAT_PEDS", 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3210, 2, 1, 0, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_3210, 1000);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3210, 1);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_3210, 0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3210, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3210, 1862763509);
	GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
}


void func_394()//Position - 0x203A5
{
	switch (iLocal_2932)
	{
		case 0:
			PLAYER::SPECIAL_ABILITY_UNLOCK(joaat("player_zero"));
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
			iLocal_2932++;
			break;
		
		case 1:
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_3207) && iLocal_2932 == 1) && !GlobalFunc_5172(&Local_2952, 1))
			{
				GlobalFunc_5157(&uLocal_3324, "FAM1AUD", "FAM1_WHERE", 9, 0, 0);
				iLocal_2932 = 2;
			}
			PLAYER::SPECIAL_ABILITY_CHARGE_CONTINUOUS(PLAYER::PLAYER_ID(), 1);
			if (func_409(iLocal_3225) > 0f)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 8f, -8f, -1, 40, 0, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				STREAMING::REQUEST_ANIM_SET("drive_by@low_ds");
				GlobalFunc_8316(1, 1, 0, 0);
				iLocal_2932 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 2f);
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol") > 0.6f || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 160, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1);
					iLocal_2932 = 4;
				}
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 8f, -8f, -1, 40, 0, 0, 0, 0);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 160, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1);
				iLocal_2932 = 4;
			}
			break;
		
		case 4:
			if (func_409(iLocal_3225) > 0.35f)
			{
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3026, -1.1121f, -0.6545f, 0.7565f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3026, 0.8794f, 1.5678f, 0.4467f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 50.0013f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3207))
				{
					GlobalFunc_164("YB_OBJ2", 5500, 1);
					uLocal_3021 = GlobalFunc_6797(iLocal_3207, 1, 145);
				}
				HUD::SET_BLIP_DISPLAY(uLocal_3276, 0);
				GlobalFunc_8316(0, 1, 0, 0);
				iLocal_2932++;
			}
			break;
		
		case 5:
			iLocal_2932++;
			break;
		
		case 6:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!PAD::GET_IS_USING_ALTERNATE_DRIVEBY())
				{
					GlobalFunc_159("YB_HELP4", 15000);
				}
				else
				{
					GlobalFunc_159("YB_HELP4ALT", 15000);
				}
				iLocal_5980 = MISC::GET_GAME_TIMER();
				iLocal_2932++;
			}
			break;
		
		case 7:
			if (PED::IS_PED_INJURED(iLocal_3207) && (MISC::GET_GAME_TIMER() - iLocal_5980) > 3000)
			{
				HUD::CLEAR_HELP(1);
				iLocal_2932++;
			}
			break;
		
		case 8:
			iLocal_2932++;
			break;
	}
}



void func_397(int iParam0, int iParam1, int iParam2)//Position - 0x207C2
{
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 64);
	PED::SET_PED_RESET_FLAG(iParam0, iParam1, iParam2);
	PED::_0x1216E0BFA72CC703(iParam0, 1);
	PED::SET_PED_RESET_FLAG(iParam0, 249, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
}



void func_400()//Position - 0x20850
{
	VEHICLE::_SET_BOAT_BOOM_POSITION_RATIO(iLocal_3030, fLocal_3018);
	if (fLocal_3018 < 0.85f)
	{
		fLocal_3018 = (fLocal_3018 + (0.1f * SYSTEM::TIMESTEP()));
	}
	else
	{
		fLocal_3018 = 0.85f;
	}
}

void func_401()//Position - 0x2088A
{
	struct<3> Var0;
	
	if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	func_397(func_2(), 64, 1);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_2(), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 1.5f || FIRE::IS_ENTITY_ON_FIRE(func_2()))
		{
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
			PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 1, 1, 1, 0);
			HUD::CLEAR_HELP(1);
			GlobalFunc_509("CMN_FDIED");
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			func_6();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026) && !PED::IS_PED_INJURED(func_2()))
	{
		func_402();
		fLocal_3263 = ENTITY::GET_ENTITY_SPEED(iLocal_3026);
		if (iLocal_2903 == 0)
		{
			fLocal_3265 = ENTITY::GET_ENTITY_SPEED(iLocal_3026);
			fLocal_3266 = ENTITY::GET_ENTITY_SPEED(iLocal_3026);
			iLocal_3267 = ENTITY::GET_ENTITY_HEALTH(iLocal_3026);
			iLocal_2903 = 1;
		}
		fLocal_3264 = ((fLocal_3263 - ((fLocal_3265 + fLocal_3266) / 2f)) / MISC::GET_FRAME_TIME());
		fLocal_3266 = fLocal_3265;
		fLocal_3265 = fLocal_3263;
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_3026, 2) };
		if (((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030)) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3026, iLocal_3030)) && (iLocal_3267 - ENTITY::GET_ENTITY_HEALTH(iLocal_3026)) > 0)
		{
			if ((MISC::ABSF(fLocal_3264) > 65f || (Var0.f_1 > 90f && Var0.f_1 < 270f)) || (Var0.x > 90f && Var0.x < 270f))
			{
				GlobalFunc_4956();
				GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "GENERIC_FRIGHTENED_HIGH", "MICHAEL_NORMAL", 3);
				iLocal_5902 = 11;
			}
		}
		iLocal_3267 = ENTITY::GET_ENTITY_HEALTH(iLocal_3026);
		switch (iLocal_5902)
		{
			case 0:
				if (ENTITY::GET_ENTITY_SPEED(iLocal_3026) > 3.5f)
				{
					iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_loop", "", 0, 0, 0);
					iLocal_2912 = 0;
					iLocal_5902 = 1;
				}
				break;
			
			case 1:
				iLocal_2912 = 0;
				if (func_406(1065353216, 1))
				{
					fLocal_3270 = 2f;
				}
				else
				{
					fLocal_3270 = 1f;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3234))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3234) >= 0.95f)
					{
						iLocal_3233 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_loop", "", 0, 1, 0);
						iLocal_2912 = 0;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3233))
					{
						if (func_406(1065353216, 1))
						{
							iLocal_5902 = 2;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3233))
				{
					if (fLocal_3264 < (-21f * fLocal_3270))
					{
						iLocal_5902 = 7;
					}
					if (fLocal_3258 < (fLocal_3268 * fLocal_3270))
					{
						iLocal_5902 = 5;
					}
					else if (fLocal_3258 > (fLocal_3269 * fLocal_3270))
					{
						iLocal_5902 = 6;
					}
					if (fLocal_3258 > fLocal_3268 && fLocal_3258 < fLocal_3269)
					{
						iLocal_5902 = 1;
					}
					if (func_406(1065353216, 1))
					{
						iLocal_5902 = 2;
					}
					if (ENTITY::GET_ENTITY_SPEED(iLocal_3026) < 3f)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3232))
						{
							iLocal_3232 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_loopStop", "", 0, 0, 0);
						}
						iLocal_5902 = 0;
					}
				}
				break;
			
			case 2:
				iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_jumpPrep", "", 0, 1, 0);
				iLocal_5902 = 3;
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3234))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3234) >= 1f)
					{
						iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_jumpPrep_loop", "", 0, 0, 0);
						iLocal_5902 = 4;
					}
				}
				break;
			
			case 4:
				if (!func_406(1.35f, 1))
				{
					iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_jumpPrep_cancel", "", 0, 0, 0);
					GlobalFunc_5653(func_2(), "GENERIC_SHOCKED_MED", "FRANKLIN_NORMAL", 4);
					iLocal_5902 = 1;
				}
				break;
			
			case 5:
				switch (iLocal_2912)
				{
					case 0:
						iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanLeft_intro", "", 0, 1, 0);
						GlobalFunc_5653(func_2(), "FAM1_BWAA", "FRANKLIN", 4);
						iLocal_2912++;
						break;
					
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3234))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3234) >= 1f)
							{
								iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanLeft_loop", "", 0, 1, 0);
								iLocal_2912++;
							}
						}
						break;
					
					case 2:
						if (fLocal_3258 > fLocal_3268)
						{
							iLocal_2912++;
						}
						break;
					
					case 3:
						iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanLeft_outro", "", 0, 1, 0);
						iLocal_5902 = 1;
						iLocal_2912++;
						break;
				}
				break;
			
			case 6:
				switch (iLocal_2912)
				{
					case 0:
						iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanRight_intro", "", 0, 1, 0);
						iLocal_2912++;
						break;
					
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3234))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3234) >= 1f)
							{
								iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanRight_loop", "", 0, 1, 0);
								GlobalFunc_5653(func_2(), "GENERIC_FRIGHTENED_MED", "FRANKLIN_NORMAL", 4);
								iLocal_2912++;
							}
						}
						break;
					
					case 2:
						if (fLocal_3258 < fLocal_3269)
						{
							iLocal_2912++;
						}
						break;
					
					case 3:
						iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanRight_outro", "", 0, 1, 0);
						iLocal_5902 = 1;
						iLocal_2912++;
						break;
				}
				break;
			
			case 7:
				iLocal_3234 = func_411(func_2(), 0, iLocal_3026, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanBrake", "", 0, 1, 0);
				GlobalFunc_5653(func_2(), "GENERIC_SHOCKED_HIGH", "FRANKLIN_NORMAL", 4);
				iLocal_5902 = 1;
				break;
			
			case 11:
				GlobalFunc_5653(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
				PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 2, 1, 1, 0);
				iLocal_5901 = 41;
				break;
			}
	}
}

void func_402()//Position - 0x20EE2
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		fLocal_3261 = fLocal_3260;
		fLocal_3260 = ENTITY::GET_ENTITY_HEADING(iLocal_3026);
		fLocal_3262 = (fLocal_3260 - fLocal_3261);
		if (fLocal_3262 > 180f)
		{
			fLocal_3262 = (fLocal_3262 - 360f);
		}
		else if (fLocal_3262 < -180f)
		{
			fLocal_3262 = (fLocal_3262 + 360f);
		}
		if (fLocal_3257 >= 0.1f)
		{
			fLocal_3257 = 0f;
			fLocal_3258 = ((fLocal_3259 / IntToFloat(iLocal_3237)) * 10f);
			fLocal_3259 = 0f;
			iLocal_3237 = 0;
		}
		else
		{
			fLocal_3259 = (fLocal_3259 + fLocal_3262);
			fLocal_3257 = (fLocal_3257 + (1f * SYSTEM::TIMESTEP()));
			iLocal_3237++;
		}
	}
}




int func_406(float fParam0, bool bParam1)//Position - 0x21058
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, 0f, -10f, 0f) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, 0f, -11f, 0f) };
	Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, 0f, -13f, 0f) };
	Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, 0f, -14f, 0f) };
	fVar12 = (2.3f * fParam0);
	if (GlobalFunc_713(iLocal_3026, Var0, 0) < fVar12)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_3030) < ENTITY::GET_ENTITY_SPEED(iLocal_3026))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		else
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
		}
		return 1;
	}
	if (GlobalFunc_713(iLocal_3026, Var3, 0) < fVar12)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_3030) < ENTITY::GET_ENTITY_SPEED(iLocal_3026))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 12.5f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		return 1;
	}
	if (GlobalFunc_713(iLocal_3026, Var6, 0) < fVar12)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_3030) < ENTITY::GET_ENTITY_SPEED(iLocal_3026))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10.5f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		return 1;
	}
	if (GlobalFunc_713(iLocal_3026, Var9, 0) < fVar12)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_3030) < ENTITY::GET_ENTITY_SPEED(iLocal_3026))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 8.5f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		return 1;
	}
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	return 0;
}

int func_407(float fParam0)//Position - 0x211E0
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_3026, 2) };
		Var3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_3030, 2) };
		if ((Var0.f_1 > 90f && Var0.f_1 < 270f) || (Var0.x > 90f && Var0.x < 270f))
		{
			return 0;
		}
		if (MISC::ABSF((ENTITY::GET_ENTITY_SPEED(iLocal_3026) - ENTITY::GET_ENTITY_SPEED(iLocal_3030))) > fLocal_3020)
		{
			return 0;
		}
		if (MISC::ABSF((Var0.f_2 - Var3.f_2)) > fParam0)
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}


float func_409(int iParam0)//Position - 0x212DA
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);
	}
	return 1f;
}

void func_410()//Position - 0x212F8
{
	func_397(func_2(), 64, 1);
	Local_5977 = { ENTITY::GET_ENTITY_ROTATION(iLocal_3026, 2) };
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3026))
		{
			if ((Local_5977.f_1 > 90f && Local_5977.f_1 < 270f) || (Local_5977.x > 90f && Local_5977.x < 270f))
			{
				GlobalFunc_4956();
				PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 1, 1, 1, 0);
				HUD::CLEAR_HELP(1);
				GlobalFunc_509("CMN_FDIED");
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
				func_6();
			}
		}
	}
}

int func_411(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x21398
{
	var uVar0;
	float fVar1;
	float fVar2;
	
	uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	if (bParam9)
	{
		fVar1 = 1000f;
		fVar2 = -1000f;
	}
	else
	{
		fVar1 = 4f;
		fVar2 = -4f;
	}
	TASK::TASK_SYNCHRONIZED_SCENE(iParam0, uVar0, sParam5, sParam6, fVar1, fVar2, iParam10, 0, 1148846080, 0);
	if (iParam1 != 0)
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam1, iVar0, sParam5, sParam7, fVar1, fVar2, iParam10, 0, 1148846080, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar0, iParam2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam2, sParam3));
	}
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, iParam4);
	if (bParam8)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		if (iParam1 != 0)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam1, 0, 0);
		}
	}
	return iVar0;
}

void func_412(var uParam0, struct<3> Param1, float fParam4, float fParam5, float fParam6, float fParam7, bool bParam8)//Position - 0x21447
{
	float fVar0;
	struct<3> Var1;
	
	if (Local_2898.x == Local_2895.x)
	{
		Local_2895.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam4, fParam5);
		if (bParam8)
		{
			Local_2895.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam4, fParam5);
		}
		Local_2895.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam4, fParam5);
		fLocal_2901 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam6, fParam7);
	}
	else
	{
		Var1 = { MISC::ABSF((Local_2898.x - Local_2895.x)), MISC::ABSF((Local_2898.f_1 - Local_2895.f_1)), MISC::ABSF((Local_2898.f_2 - Local_2895.f_2)) };
		if (Var1.x > Var1.f_1 && Var1.x > Var1.f_2)
		{
			fVar0 = (fLocal_2901 / Var1.x);
		}
		else if (Var1.f_1 > Var1.f_2)
		{
			fVar0 = (fLocal_2901 / Var1.f_1);
		}
		else
		{
			fVar0 = (fLocal_2901 / Var1.f_2);
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		GlobalFunc_2797(&Local_2898, Local_2895.x, fLocal_2901, 0);
		if (bParam8)
		{
			GlobalFunc_2797(&(Local_2898.f_1), Local_2895.f_1, (fVar0 * Var1.f_1), 0);
		}
		GlobalFunc_2797(&(Local_2898.f_2), Local_2895.f_2, (fVar0 * Var1.f_2), 0);
	}
	CAM::SET_CAM_ROT(uParam0, Param1 + Local_2898, 2);
}


void func_414(var uParam0, int iParam1, struct<3> Param2, float fParam5, float fParam6, float fParam7, float fParam8)//Position - 0x215B7
{
	if ((Local_2898.x == Local_2895.x && Local_2898.f_1 == Local_2895.f_1) && Local_2898.f_2 == Local_2895.f_2)
	{
		Local_2895.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam5, fParam6);
		Local_2895.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam5, fParam6);
		Local_2895.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam5, fParam6);
		fLocal_2901 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam7, fParam8);
	}
	else
	{
		GlobalFunc_2797(&Local_2898, Local_2895.x, fLocal_2901, 0);
		GlobalFunc_2797(&(Local_2898.f_1), Local_2895.f_1, fLocal_2901, 0);
		GlobalFunc_2797(&(Local_2898.f_2), Local_2895.f_2, fLocal_2901, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (CAM::DOES_CAM_EXIST(uParam0))
		{
			CAM::POINT_CAM_AT_ENTITY(uParam0, iParam1, Param2 + Local_2898, 1);
		}
	}
}



void func_417()//Position - 0x216D7
{
	iLocal_5897 = 0;
}

void func_418()//Position - 0x216E3
{
	if (HUD::DOES_BLIP_EXIST(uLocal_3276))
	{
		HUD::REMOVE_BLIP(&uLocal_3276);
	}
	uLocal_3276 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3025);
	HUD::SET_BLIP_AS_FRIENDLY(uLocal_3276, true);
}

void func_419()//Position - 0x2170E
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
		{
			if (!iLocal_2943)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_3010))
				{
					uLocal_3010 = GlobalFunc_6783(iLocal_3026, 0, 0);
				}
				HUD::SET_BLIP_DISPLAY(uLocal_3010, 4);
				if (HUD::DOES_BLIP_EXIST(uLocal_3023))
				{
					iLocal_2999 = HUD::GET_BLIP_INFO_ID_DISPLAY(uLocal_3023);
					HUD::SET_BLIP_DISPLAY(uLocal_3023, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_3021))
				{
					iLocal_3000 = HUD::GET_BLIP_INFO_ID_DISPLAY(uLocal_3021);
					HUD::SET_BLIP_DISPLAY(uLocal_3021, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_3022))
				{
					iLocal_3001 = HUD::GET_BLIP_INFO_ID_DISPLAY(uLocal_3022);
					HUD::SET_BLIP_DISPLAY(uLocal_3022, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_3276))
				{
					iLocal_3002 = HUD::GET_BLIP_INFO_ID_DISPLAY(uLocal_3276);
					HUD::SET_BLIP_DISPLAY(uLocal_3276, 0);
				}
				if (iLocal_2944 == 0)
				{
					GlobalFunc_164("CMN_GENGETBCK", 7500, 1);
					iLocal_2944 = 1;
				}
				HUD::CLEAR_HELP(1);
				iLocal_2943 = 1;
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
		}
		else if (iLocal_2943)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_3010))
			{
				HUD::SET_BLIP_DISPLAY(uLocal_3010, 0);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_3023))
			{
				HUD::SET_BLIP_DISPLAY(uLocal_3023, iLocal_2999);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_3021))
			{
				HUD::SET_BLIP_DISPLAY(uLocal_3021, iLocal_3000);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_3022))
			{
				HUD::SET_BLIP_DISPLAY(uLocal_3022, iLocal_3001);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_3276))
			{
				HUD::SET_BLIP_DISPLAY(uLocal_3276, iLocal_3002);
			}
			if (GlobalFunc_663("CMN_GENGETBCK", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_2943 = 0;
		}
	}
}



void func_422()//Position - 0x2189E
{
	iLocal_122 = 1;
}


void func_424()//Position - 0x218B9
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3029))
		{
			iVar0 = iLocal_5930;
			while (iVar0 <= 143)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iVar0]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2659[iVar0])) && iVar0 != 99)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[iVar0]))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(iLocal_2659[iVar0]))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_2659[iVar0]) == joaat("phantom") || ENTITY::GET_ENTITY_MODEL(iLocal_2659[iVar0]) == joaat("packer"))
							{
								STREAMING::REQUEST_MODEL(joaat("trailers2"));
								if (STREAMING::HAS_MODEL_LOADED(joaat("trailers2")))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3031[iVar0]))
									{
										if (GlobalFunc_745())
										{
											iLocal_3031[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2659[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_2659[iVar0]), 1, 1);
										}
										else
										{
											iLocal_3031[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2659[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_2659[iVar0]), 1, 1);
										}
										STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2659[iVar0], 0f, 3f, 10f));
										VEHICLE::_SET_DISABLE_SUPERDUMMY_MODE(iLocal_2659[iVar0], 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3031[iVar0]);
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2659[iVar0], iLocal_3031[iVar0], 1065353216);
										ENTITY::SET_ENTITY_DYNAMIC(iLocal_3031[iVar0], 1);
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3031[iVar0]))
				{
					iLocal_5930 = iVar0;
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3031[iVar0]));
				}
				iVar0++;
			}
			iVar0 = iLocal_5931;
			while (iVar0 <= 27)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2848[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[iVar0]))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(iLocal_2848[iVar0]))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_2848[iVar0]) == joaat("phantom") || ENTITY::GET_ENTITY_MODEL(iLocal_2848[iVar0]) == joaat("packer"))
							{
								STREAMING::REQUEST_MODEL(joaat("trailers2"));
								if (STREAMING::HAS_MODEL_LOADED(joaat("trailers2")))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3176[iVar0]))
									{
										if (GlobalFunc_745())
										{
											iLocal_3176[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2848[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_2848[iVar0]), 1, 1);
										}
										else
										{
											iLocal_3176[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2848[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_2848[iVar0]), 1, 1);
										}
										STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2848[iVar0], 0f, 3f, 10f));
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3176[iVar0]);
										VEHICLE::_SET_DISABLE_SUPERDUMMY_MODE(iLocal_2848[iVar0], 1);
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2848[iVar0], iLocal_3176[iVar0], 1065353216);
										ENTITY::SET_ENTITY_DYNAMIC(iLocal_3176[iVar0], 1);
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3176[iVar0]))
				{
					iLocal_5931 = iVar0;
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3176[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

void func_425()//Position - 0x21BD2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_5976) > 3000)
	{
		if (!GlobalFunc_111())
		{
			iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0, GlobalFunc_2220());
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				bVar2 = false;
				iVar3 = 0;
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_3026))
				{
					bVar2 = true;
				}
				else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar0)) > 2f)
				{
					if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iVar0) - ENTITY::GET_ENTITY_HEADING(iLocal_3026))) > 60f)
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
						iLocal_5976 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}


void func_427()//Position - 0x21CA8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1765;
	while (iVar0 <= 143)
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_3026))
		{
			iLocal_2983 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iVar0]))
		{
			if (GlobalFunc_156(iLocal_3026, iLocal_2659[iVar0], 0) < 8f && iLocal_5901 > 8)
			{
				iLocal_2983 = 1;
				iLocal_2984 = MISC::GET_GAME_TIMER();
			}
			if ((GlobalFunc_156(iLocal_2659[iVar0], iLocal_3029, 0) < 15f && (MISC::GET_GAME_TIMER() - iLocal_5944) > iLocal_5946) && bLocal_5943 == 0)
			{
				bLocal_5943 = true;
				iLocal_5947++;
				if ((iLocal_5947 % iLocal_5948) == 0)
				{
					iLocal_5946 = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
					if (iLocal_5948 == 2)
					{
						iLocal_5948 = 3;
					}
					else
					{
						iLocal_5948 = 2;
					}
				}
				else
				{
					iLocal_5946 = MISC::GET_RANDOM_INT_IN_RANGE(200, 250);
				}
				iLocal_5944 = MISC::GET_GAME_TIMER();
			}
			if (bLocal_5943 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_5944) > iLocal_5945)
				{
					if ((iLocal_5947 % iLocal_5948) == 0)
					{
						iLocal_5945 = MISC::GET_RANDOM_INT_IN_RANGE(900, 1200);
					}
					else
					{
						iLocal_5945 = MISC::GET_RANDOM_INT_IN_RANGE(400, 500);
					}
					iLocal_5944 = MISC::GET_GAME_TIMER();
					bLocal_5943 = false;
				}
			}
			if (bLocal_5943)
			{
				AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_3029);
			}
		}
		if (iLocal_2983)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_2984) > 500)
			{
				if (!GlobalFunc_5172(&Local_2952, 1))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_NEARMIS", 8, 0, 0, 0))
					{
						iLocal_2983 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = iLocal_1765;
	while (iVar0 <= 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]))
		{
			if (GlobalFunc_156(iLocal_2848[iVar0], iLocal_3029, 0) < 15f)
			{
				AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_3029);
			}
		}
		iVar0++;
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 40f, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && (MISC::GET_GAME_TIMER() - iLocal_5949) > 1000)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar1)))
			{
				if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(iVar1)) > 0.5f)
				{
					AUDIO::_0x9D3AF56E94C9AE98(iVar1, 5000f);
					iLocal_5949 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_428()//Position - 0x21ECA
{
	int iVar0;
	float fVar1;
	
	iLocal_2926 = 1;
	iVar0 = 3000;
	fVar1 = 150f;
	switch (iLocal_5901)
	{
		case 3:
		case 4:
			if ((iLocal_5950 % 2) == 0)
			{
				if (iLocal_5902 == 1)
				{
					sLocal_2925 = "FAM1_CLOSERF";
				}
				else
				{
					sLocal_2925 = "";
				}
			}
			else
			{
				sLocal_2925 = "FAM1_ENC1";
			}
			iVar0 = 2750;
			break;
		
		case 5:
		case 6:
		case 8:
			if (!func_406(1f, 0))
			{
				if ((iLocal_5950 % 2) == 0)
				{
					sLocal_2925 = "FAM1_CLOSERF";
					iVar0 = 1000;
				}
				else
				{
					sLocal_2925 = "FAM1_ENC1";
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500);
				}
			}
			else if ((iLocal_5950 % 2) == 0)
			{
				sLocal_2925 = "FAM1_ENC2";
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500);
			}
			else
			{
				sLocal_2925 = "FAM1_CLOSERM";
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500);
			}
			if (func_429())
			{
				sLocal_2925 = "FAM1_SIDE";
			}
			break;
		
		case 9:
		case 10:
		case 11:
			sLocal_2925 = "FAM1_TLK2SLF";
			fVar1 = 100f;
			iVar0 = 8000;
			break;
		
		case 12:
		case 13:
			sLocal_2925 = "FAM1_TROUBLE";
			fVar1 = 70f;
			break;
		
		case 14:
			sLocal_2925 = "FAM1_ENC3";
			fVar1 = 70f;
			break;
		
		case 16:
		case 17:
			sLocal_2925 = "FAM1_SHOUT";
			fVar1 = 100f;
			iVar0 = 8000;
			break;
		
		case 15:
			sLocal_2925 = "FAM1_ATTACK";
			fVar1 = 70f;
			break;
		
		case 18:
		case 19:
			if (iLocal_2932 >= 4 && !PED::IS_PED_INJURED(iLocal_3207))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					sLocal_2925 = "FAM1_ENC4";
					fVar1 = 70f;
				}
				else
				{
					sLocal_2925 = "FAM1_ATTACK";
					fVar1 = 70f;
				}
			}
			break;
		
		case 21:
			sLocal_2925 = "";
			break;
		
		case 22:
		case 23:
			sLocal_2925 = "";
			break;
		
		case 24:
			sLocal_2925 = "FAM1_ATTACK";
			break;
		
		case 25:
			sLocal_2925 = "";
			break;
		
		case 28:
			switch (iLocal_5950)
			{
				case 0:
					if (!PED::IS_PED_INJURED(iLocal_3208))
					{
						sLocal_2925 = "FAM1_ATTACK";
						fVar1 = 70f;
					}
					break;
				
				case 1:
					if (iLocal_3299 == 0)
					{
						sLocal_2925 = "FAM1_HANGON";
						fVar1 = 70f;
					}
					break;
				
				case 2:
					if (!PED::IS_PED_INJURED(iLocal_3208))
					{
						sLocal_2925 = "FAM1_ENC4";
						fVar1 = 70f;
					}
					break;
			}
			iVar0 = 1200;
			break;
		
		case 26:
		case 27:
			if (func_383(1065353216))
			{
				if (iLocal_3299 == 0)
				{
				}
			}
			else
			{
				switch (iLocal_5950)
				{
					case 0:
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 7)
						{
							if (!PED::IS_PED_INJURED(iLocal_3209))
							{
								sLocal_2925 = "FAM1_ENC6";
							}
							else
							{
								sLocal_2925 = "FAM1_ENC5";
							}
						}
						else
						{
							sLocal_2925 = "FAM1_ENC5";
						}
						fVar1 = 70f;
						break;
					
					case 1:
						sLocal_2925 = "FAM1_HANG";
						fVar1 = 70f;
						break;
					
					case 2:
						if (iLocal_3299 == 0)
						{
							if (GlobalFunc_745())
							{
								sLocal_2925 = "FAM1_REASSUR";
							}
							else
							{
								sLocal_2925 = "FAM1_HANGN2";
							}
							fVar1 = 70f;
						}
						break;
					}
			}
			iVar0 = 1200;
			break;
		
		case 29:
			sLocal_2925 = "FAM1_TROUBLE";
			fVar1 = 70f;
			break;
		
		case 30:
		case 33:
			sLocal_2925 = "FAM1_CTCHF";
			fVar1 = 70f;
			break;
		
		case 38:
		case 35:
		case 36:
			sLocal_2925 = 0;
			break;
		
		case 37:
			sLocal_2925 = "FAM1_BAD";
			break;
		
		case 39:
		case 40:
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3030, 0) < 45f)
			{
				sLocal_2925 = "FAM1_PLLOVER";
				fVar1 = 120f;
			}
			else
			{
				sLocal_2925 = "FAM1_GETYCHT";
				fVar1 = 120f;
			}
			iVar0 = 4000;
			break;
		
		default:
			iLocal_2926 = 0;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030) && iLocal_2946 == 1)
	{
		switch (iLocal_2934)
		{
			case 0:
				GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				iLocal_2934++;
				break;
			
			case 1:
				if (fLocal_3256 > 38813.05f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_3030, 0, 0, 0);
					iLocal_2934++;
				}
				break;
			
			case 2:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&Local_2952, 1))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CRASH", 9, 0, 0, 0))
					{
						iLocal_2934++;
					}
				}
				else
				{
					iLocal_2934++;
				}
				break;
			
			case 3:
				if (fLocal_3256 > 43880.47f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_3030, 0, 0, 0);
					iLocal_2934++;
				}
				break;
			
			case 4:
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&Local_2952, 1)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3029, 0) < fVar1)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CRASH", 9, 0, 0, 0))
					{
						iLocal_2934++;
					}
				}
				else
				{
					iLocal_2934++;
				}
				break;
			
			case 5:
				if (fLocal_3256 > 62000.47f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_3030, 0, 0, 0);
					iLocal_2934++;
				}
				break;
			
			case 6:
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&Local_2952, 1)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3029, 0) < fVar1)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CRASH", 9, 0, 0, 0))
					{
						iLocal_2934++;
					}
				}
				else
				{
					iLocal_2934++;
				}
				break;
			
			case 7:
				if (fLocal_3256 > 73145.52f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_3030, 0, 0, 0);
					iLocal_2934++;
				}
				break;
			
			case 8:
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&Local_2952, 1)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3029, 0) < fVar1)
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_GARB", 9, 0, 0, 0))
					{
						iLocal_2934++;
					}
				}
				else
				{
					iLocal_2934++;
				}
				break;
			
			case 9:
				if (fLocal_3256 > 133791f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_3030, 0, 0, 0);
					iLocal_2934++;
				}
				break;
			
			case 10:
				if (iLocal_5950 == 3)
				{
					iLocal_2934++;
				}
				break;
			}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_3026) && iLocal_2946 == 1) && iLocal_2926)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_2923) > iVar0 && ENTITY::GET_ENTITY_SPEED(iLocal_3026) > 0.1f) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3029, 0) < fVar1)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2925) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if ((!GlobalFunc_5172(&Local_2952, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_2()))
				{
					if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", sLocal_2925, 9, 0, 0, 0))
					{
						if (iLocal_5950 < 3)
						{
							iLocal_5950++;
						}
						else
						{
							iLocal_5950 = 0;
						}
						iLocal_2923 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_3026) || iLocal_2982)
		{
			if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&Local_2952, 1)) && iLocal_5901 < 9)
			{
				iLocal_2982 = 1;
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_COLLIDE", 7, 0, 0, 0))
				{
					iLocal_2982 = 0;
				}
			}
		}
	}
}

bool func_429()//Position - 0x22673
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, -1f, -7.5f, 0f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, 1f, -7.5f, 0f) };
		Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	return (((Var3.x - Var0.x) * (Var6.f_1 - Var0.f_1)) - ((Var3.f_1 - Var0.f_1) * (Var6.x - Var0.x))) > 0f;
}

int func_430()//Position - 0x226D8
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3210))
		{
			if (PED::IS_PED_INJURED(iLocal_3210))
			{
				GlobalFunc_509("YB_FAIL1");
				func_6();
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3026))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3026, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					func_397(func_2(), 64, 1);
				}
				iLocal_5901 = 43;
				return 1;
			}
			if (GlobalFunc_2226(&iLocal_3026))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					func_397(func_2(), 64, 1);
				}
				iLocal_5901 = 44;
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3026, 100f, 100f, 100f, 0, 1, 0))
				{
					GlobalFunc_509("YB_FAIL2");
					SYSTEM::SETTIMERA(0);
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
					while (SYSTEM::TIMERA() < 7500)
					{
						if (iLocal_5901 < 8)
						{
							func_401();
						}
						if (!ENTITY::IS_ENTITY_DEAD(func_2()))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(func_2(), 1);
							func_397(func_2(), 64, 1);
						}
						SYSTEM::WAIT(0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
					PED::DELETE_PED(&(uLocal_55[1]));
					func_6();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3029))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029) && iLocal_5901 != 38)
				{
					if (iLocal_5901 < 34)
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_3026, iLocal_3029, 230f, 230f, 230f, 0, 0, 0))
						{
							if (((!GlobalFunc_5172(&Local_2952, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0)) && iLocal_2945 == 0)
							{
								GlobalFunc_164("YB_WARN1", 7500, 1);
								iLocal_2945 = 1;
							}
							if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_3026, iLocal_3029, 300f, 300f, 300f, 0, 0, 0))
							{
								iLocal_5901 = 42;
								return 1;
							}
						}
					}
					if (iLocal_2945 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_3026, iLocal_3029, 180f, 180f, 180f, 0, 0, 0))
						{
							iLocal_2945 = 0;
						}
					}
				}
				GlobalFunc_2216(uLocal_3276, iLocal_3030, 300f, 0.85f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
			}
		}
	}
	return 0;
}


void func_432()//Position - 0x22A6D
{
	switch (iLocal_2991)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[3]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[3]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_2848[3], 88, 1);
					iLocal_5951 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[3], -1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5951))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5951, 1, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_5951, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5951, 1);
						iLocal_5952 = MISC::GET_GAME_TIMER();
						iLocal_2991++;
					}
				}
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2848[3], iLocal_3026, 1))
				{
					iLocal_5953 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_2848[3], iLocal_3026))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5951))
					{
						PED::DELETE_PED(&iLocal_5951);
					}
				}
			}
			if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_5952)) > (18000f / fLocal_3253) || iLocal_5953)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5951))
				{
					PED::DELETE_PED(&iLocal_5951);
				}
				iLocal_2991++;
			}
			break;
	}
	switch (iLocal_2992)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[9]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[9]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2848[9]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_2848[9], PLAYER::PLAYER_PED_ID(), 8.75f, 8.75f, 3f, 0, 1, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[9], -1)))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2848[9], -1), iLocal_2848[9], 5, 10000);
								iLocal_2992++;
							}
						}
					}
				}
			}
			break;
	}
	switch (iLocal_2993)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2659[8]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[8]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2659[8]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_2659[8], PLAYER::PLAYER_PED_ID(), 12.75f, 12.75f, 3f, 0, 1, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2659[8], -1)))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2659[8], -1), iLocal_2659[8], 5, 10000);
								iLocal_2993++;
							}
						}
					}
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[4]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[4]))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2848[4], 73, 1);
		}
	}
}

void func_433()//Position - 0x22CCE
{
	if (ENTITY::DOES_ENTITY_EXIST(func_2()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_2()))
		{
			PED::SET_PED_RESET_FLAG(func_2(), 249, 1);
			if (!((iLocal_5900 == 5 || iLocal_5900 == 7) || iLocal_5900 == 6))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), func_2(), 100f, 100f, 100f, 0, 1, 0))
				{
					GlobalFunc_509("CMN_FLEFT");
					func_6();
				}
			}
		}
		if (PED::IS_PED_INJURED(func_2()) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
		{
			GlobalFunc_509("CMN_FDIED");
			func_6();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_2()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_2()) && iLocal_5901 != 41)
			{
				func_397(func_2(), 64, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(func_2()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_2(), 0);
	}
}

void func_434()//Position - 0x22DBB
{
	func_237();
	func_433();
	if (!ENTITY::IS_ENTITY_DEAD(func_2()))
	{
		PED::_SET_PED_CAN_PLAY_INJURED_ANIMS(func_2(), 1);
	}
	MISC::SET_BIT(&(Local_2952.f_13), 11);
	PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3011, 130f, 130f, 30f, 0, 1, 0) || func_453())
	{
		if (iLocal_3017 == 0)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FADE_RADIO");
			MISC::CLEAR_AREA(Local_3011, 20f, 1, 0, 0, 0);
			iLocal_3017 = 1;
		}
	}
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3011, 190f, 190f, 30f, 0, 1, 0) || func_453()) || iLocal_3014 == 1)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!iLocal_3015)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3011, 350f, 350f, 60f, 0, 1, 0) || func_453())
		{
			func_452();
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
			iLocal_3015 = 1;
		}
	}
	if (!iLocal_3014)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3011, 300f, 300f, 60f, 0, 1, 0) || func_453())
		{
			func_450();
			iLocal_3014 = 1;
		}
	}
	if ((iLocal_3016 == 0 && iLocal_3014 == 1) && iLocal_3015 == 1)
	{
		if (func_448() && HUD::DOES_BLIP_EXIST(Local_2952.f_5))
		{
			func_447();
			func_445();
			func_439(1179840512);
			Local_5958 = { GlobalFunc_560() };
			if (MISC::ARE_STRINGS_EQUAL(&Local_5958, "FAM1_BANT"))
			{
				GlobalFunc_5105();
				iLocal_5965 = 1;
			}
			iLocal_3016 = 1;
		}
	}
	if ((((func_105(&Local_2952, Local_3011, 0.0001f, 0.0001f, 2.01f, 0, func_2(), 0, 0, iLocal_3026, "YB_GETTO", "CMN_FLEAVE", "", "", "CMN_FLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1) || func_438(1)) || (HUD::DOES_BLIP_EXIST(Local_2952.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2118.953f, -224.5151f, 13.08573f, -2150.723f, -279.3016f, 24.5104f, 53.5f, 0, 1, 0))) || ((((ENTITY::DOES_ENTITY_EXIST(iLocal_3030) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3030)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2131.759f, -242.8564f, 11.26614f, -2153.038f, -283.3767f, 19.49334f, 30.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2136.613f, -234.8743f, 11.22231f, -1999.356f, -161.1021f, 35.76831f, 64.5f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3011, 130f, 130f, 30f, 0, 1, 0))) || (HUD::DOES_BLIP_EXIST(Local_2952.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2206.664f, -368.1008f, 10.99958f, -2370.63f, -279.8921f, 16.89787f, 39.75f, 0, 1, 0)))
	{
		if (iLocal_3016 == 1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0))
		{
			if (func_438(1))
			{
				func_437();
			}
			AUDIO::STOP_AUDIO_SCENE("FAMILY_1_DRIVE_TO_HIGHWAY");
			func_436();
			GlobalFunc_7139(&Local_2952, 0);
			iLocal_5900 = 5;
		}
	}
	func_435();
	switch (iLocal_2987)
	{
		case 0:
			iLocal_5965 = 0;
			iLocal_5966 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iLocal_3026) != 2 && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iLocal_3026) != 1)
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 0);
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::START_AUDIO_SCENE("FAMILY_1_DRIVE_TO_HIGHWAY");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
			iLocal_3014 = 0;
			iLocal_3015 = 0;
			iLocal_2987++;
			break;
		
		case 1:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_10691(&uLocal_3324, "FAM1AUD", "FAM1_BANT", 9, 0, 0, 0, 0))
				{
					iLocal_2987++;
				}
			}
			break;
		
		case 2:
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), func_2()))
				{
					GlobalFunc_2207();
					iLocal_2987++;
				}
			}
			break;
		
		case 3:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_10691(&uLocal_3324, "FAM1AUD", "FAM1_START", 9, 0, 0, 0, 0))
				{
					iLocal_2987++;
				}
			}
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_2952.f_5) && iLocal_5900 != 5)
		{
			if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
			}
		}
		else if (GlobalFunc_620())
		{
			if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), func_2()))
			{
				GlobalFunc_619(0);
			}
		}
	}
}

void func_435()//Position - 0x23294
{
	if (HUD::DOES_BLIP_EXIST(Local_2952.f_5))
	{
		if (!iLocal_2977)
		{
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1461.174f, -85.7604f, 49.9523f);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Local_3011);
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
			iLocal_5954 = MISC::GET_GAME_TIMER();
			iLocal_5955 = 0;
			iLocal_2977 = 1;
		}
		if ((iLocal_2977 == 1 && (MISC::GET_GAME_TIMER() - iLocal_5954) > 10000) && iLocal_5955 == 0)
		{
			HUD::SET_BLIP_ROUTE(Local_2952.f_6, 0);
			iLocal_5955 = 1;
		}
	}
	else if (iLocal_2977)
	{
		HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iLocal_2977 = 0;
	}
}

void func_436()//Position - 0x2332E
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_3029);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_3030);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_53);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_54);
	}
}

void func_437()//Position - 0x2337A
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2036.1f, -357f, 50.3f, -2035.1f, -382.8f, 42.7f, 30f, 0, 1, 0))
	{
		func_439(9000f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2222.1f, -240.3f, 90f, -2430.8f, -140.7f, 10.04f, 10f, 0, 1, 0))
	{
		func_439(5500f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1928.2f, -425.3f, 27.5f, -2063.9f, -634.6f, 0.04f, 10f, 0, 1, 0))
	{
		func_439(13100f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2443.9f, -248.3f, 15f, -2420.8f, -226.7f, 20.04f, 20f, 0, 1, 0))
	{
		func_439(16200f);
	}
}

int func_438(bool bParam0)//Position - 0x2346A
{
	int iVar0;
	
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2036.1f, -356f, 50.3f, -2035.1f, -382.8f, 42.7f, 30f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1), 1f)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1928.2f, -425.3f, 27.5f, -2063.9f, -634.6f, 0.04f, 10f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1), 7f))) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2443.9f, -248.3f, 15f, -2420.8f, -226.7f, 20.04f, 40f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1), 7f))) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2222.1f, -225.3f, 90f, -2430.8f, -140.7f, 10.04f, 10f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_3030, 1) + Vector(-8f, 0f, 0f), 7f)))
	{
		iVar0 = 1;
		if (bParam0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0) && PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_439(float fParam0)//Position - 0x235C2
{
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(1);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	if (!PED::IS_PED_INJURED(iLocal_3205))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3205, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029) && !ENTITY::IS_ENTITY_DEAD(iLocal_3030))
	{
		if (iLocal_2902)
		{
			func_56(0, 1);
		}
		func_444("Fam1", 502, 0, 1);
		iLocal_2902 = 1;
		func_447();
		func_443(joaat("g_m_y_salvagoon_01"));
		func_442(1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_3029, iLocal_3030, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3029, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3030, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_3029, 1000);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_3030, 1000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_3030, 3f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3029))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3029);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3030))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3030);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_53))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_53);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_54))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_54);
			}
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3029, 1, "Fam1New", 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3030, 2, "Fam1New", 1);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_3029, 1);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_3030, 1);
		AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_3029, 3);
		func_441(uLocal_3007, iLocal_53, "Fam1Cam", 3);
		func_441(uLocal_3008, iLocal_54, "Fam1Cam", 4);
		func_440(iLocal_3029, fParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3029, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3029) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3029, 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_3029);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3030, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3030) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3030, 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_3030);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_53, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_53) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_53, 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_53);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_54, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_54) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_54, 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_54);
		}
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}

void func_440(int iParam0, float fParam1)//Position - 0x237E3
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_391();
			func_323(&iParam0, iLocal_1764, fParam1, 1, 0, 1, 0, 0);
			fLocal_1184 = fParam1;
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (iLocal_1667[iVar0] > 2 && iLocal_1667[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2848[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2848[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2848[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_980[iVar0]);
								fVar1 = (fVar1 * fLocal_1009[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_335(iLocal_1638[iVar0]))
									{
										func_323(&(iLocal_2848[iVar0]), iLocal_1638[iVar0], fVar1, 1, 0, 1, bLocal_130, bLocal_129);
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
						iLocal_1667[iVar0] = 99;
						iLocal_1762 = (iLocal_1762 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 144)
			{
				if (iLocal_1348[iVar0] > 2 && iLocal_1348[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2659[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2659[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2659[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_715[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_335(iLocal_1203[iVar0]))
									{
										func_323(&(iLocal_2659[iVar0]), iLocal_1203[iVar0], fVar1, 1, 0, 1, 1, bLocal_129);
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
						iLocal_1348[iVar0] = 99;
						iLocal_1761 = (iLocal_1761 - 1);
					}
				}
				iVar0++;
			}
			iLocal_1765 = 0;
			iLocal_1767 = 0;
			iVar0 = 0;
			while (iVar0 < 35)
			{
				if (iLocal_1725[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2812[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2812[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2812[iVar0], 1, 0);
							iLocal_1763++;
							iLocal_1725[iVar0] = 2;
						}
					}
					else
					{
						iLocal_1725[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_1766 = 0;
			iLocal_1771 = 0;
			iLocal_1774 = 0;
			fLocal_1199 = fParam1;
			fLocal_1198 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_2405 = { Var3 - Vector(100f, 100f, 100f) };
			Local_2408 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_2405, Local_2408, 0, 0);
		}
	}
}

void func_441(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x23A8F
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, 0);
		ENTITY::SET_ENTITY_COLLISION(iParam1, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, 1);
		ENTITY::SET_ENTITY_PROOFS(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, 1);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		CAM::SET_CAM_COORD(uParam0, Var0);
		CAM::SET_CAM_ROT(uParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
	}
}

void func_442(int iParam0)//Position - 0x23AF6
{
	bLocal_128 = iParam0;
}

void func_443(int iParam0)//Position - 0x23B02
{
	iLocal_2656 = iParam0;
}

void func_444(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x23B0F
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2429, sParam0, 64);
	bLocal_111 = true;
	iLocal_116 = 0;
	iLocal_1761 = 0;
	iLocal_1762 = 0;
	iLocal_1763 = 0;
	iLocal_1764 = iParam1;
	iLocal_1765 = 0;
	iLocal_1766 = 0;
	iLocal_1767 = 0;
	iLocal_1771 = 0;
	iLocal_1774 = 0;
	iLocal_1772 = -1;
	iLocal_1773 = -1;
	iLocal_1775 = 0;
	iLocal_1776 = 0;
	fLocal_1198 = 0f;
	fLocal_1199 = 0f;
	fLocal_1184 = 0f;
	iLocal_117 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2405.x = (Var0.x - 100f);
		Local_2405.f_1 = (Var0.f_1 - 100f);
		Local_2405.f_2 = (Var0.f_2 - 100f);
		Local_2408.x = (Var0.x + 100f);
		Local_2408.f_1 = (Var0.f_1 + 100f);
		Local_2408.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2405, Local_2408, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2445);
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
	func_59();
}

void func_445()//Position - 0x23C30
{
	CAM::DESTROY_ALL_CAMS(0);
	uLocal_3004 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	uLocal_3007 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	uLocal_3008 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_FOV(uLocal_3007, 28f);
	CAM::SET_CAM_FOV(uLocal_3008, 25f);
	func_452();
	while (!func_446())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_3029 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), Local_3238, fLocal_3241, 1, 1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3029, "FAMILY_1_TARGET_TRUCK_AND_TRAILER", 0);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_3029, 1);
	ENTITY::SET_ENTITY_PROOFS(iLocal_3029, 1, 1, 1, 1, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3029, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3029, 1);
	if (iLocal_5900 < 5)
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_3029, 0);
	}
	VEHICLE::DELETE_VEHICLE(&iLocal_53);
	VEHICLE::DELETE_VEHICLE(&iLocal_54);
	iLocal_53 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, "Fam1Cam"), fLocal_3241, 1, 1);
	iLocal_54 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, "Fam1Cam"), fLocal_3241, 1, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_53, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_54, 1);
	iLocal_3030 = VEHICLE::CREATE_VEHICLE(joaat("tr3"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, 0f, 3f, 0f), fLocal_3241, 1, 1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3030, "FAMILY_1_TARGET_TRUCK_AND_TRAILER", 0);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_3030, 1, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_3030, 1);
	ENTITY::SET_ENTITY_PROOFS(iLocal_3030, 0, 1, 0, 1, 0, 0, 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3030, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3030, 1);
	iLocal_3025 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3030, 0f, -10f, 0f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3025, iLocal_3030, 0, 0f, -7f, -0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_3025, 0);
	if (iLocal_5900 < 5)
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_3030, 0);
	}
	iLocal_3205 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3029, 26, joaat("g_m_y_salvagoon_01"), -1, 1, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3205, 1862763509);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3205, 1);
	HUD::REMOVE_BLIP(&uLocal_3010);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	if (!PED::IS_PED_INJURED(func_2()))
	{
		PED::SET_PED_CONFIG_FLAG(func_2(), 32, 0);
	}
}

int func_446()//Position - 0x23E2B
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("tr3")) && STREAMING::HAS_MODEL_LOADED(joaat("phantom"))) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
	{
		return 1;
	}
	return 0;
}

void func_447()//Position - 0x23E6E
{
	Local_1778[0 /*3*/] = { -2104.265f, -382.9811f, 12.1691f };
	fLocal_135[0] = -0.0194f;
	fLocal_280[0] = -0.019f;
	fLocal_425[0] = 0.8467f;
	fLocal_570[0] = -0.5314f;
	iLocal_1203[0] = 979;
	fLocal_715[0] = 1f;
	iLocal_2446[0] = joaat("comet2");
	Local_1778[2 /*3*/] = { -2111.367f, -372.7313f, 12.7216f };
	fLocal_135[2] = 0.006f;
	fLocal_280[2] = -0.0187f;
	fLocal_425[2] = 0.8281f;
	fLocal_570[2] = -0.5602f;
	iLocal_1203[2] = 674;
	fLocal_715[2] = 12000f;
	iLocal_2446[2] = joaat("blista");
	Local_1778[3 /*3*/] = { -2158.973f, -326.0327f, 12.9229f };
	fLocal_135[3] = 0.0006f;
	fLocal_280[3] = -0.0129f;
	fLocal_425[3] = -0.0595f;
	fLocal_570[3] = 0.9981f;
	iLocal_1203[3] = 8;
	fLocal_715[3] = 12515f;
	iLocal_2446[3] = joaat("burrito");
	Local_1778[4 /*3*/] = { -2119.256f, -352.3024f, 12.5434f };
	fLocal_135[4] = 0.0085f;
	fLocal_280[4] = -0.0024f;
	fLocal_425[4] = 0.5792f;
	fLocal_570[4] = 0.8151f;
	iLocal_1203[4] = 10;
	fLocal_715[4] = 14561f;
	iLocal_2446[4] = joaat("manana");
	Local_1778[6 /*3*/] = { -2000.959f, -458.8005f, 11.1928f };
	fLocal_135[6] = 0.0046f;
	fLocal_280[6] = -0.0073f;
	fLocal_425[6] = 0.9001f;
	fLocal_570[6] = -0.4356f;
	iLocal_1203[6] = 681;
	fLocal_715[6] = 16560f;
	iLocal_2446[6] = joaat("issi2");
	Local_1778[7 /*3*/] = { -2066.174f, -391.4844f, 11.1701f };
	fLocal_135[7] = 0.01f;
	fLocal_280[7] = -0.0173f;
	fLocal_425[7] = 0.8823f;
	fLocal_570[7] = -0.4703f;
	iLocal_1203[7] = 12;
	fLocal_715[7] = 16937f;
	iLocal_2446[7] = joaat("buffalo");
	Local_1778[8 /*3*/] = { -2143.963f, -349.9859f, 12.6447f };
	fLocal_135[8] = -0.0008f;
	fLocal_280[8] = 0.0009f;
	fLocal_425[8] = 0.5944f;
	fLocal_570[8] = 0.8041f;
	iLocal_1203[8] = 9;
	fLocal_715[8] = 17439f;
	iLocal_2446[8] = joaat("penumbra");
	Local_1778[9 /*3*/] = { -1960.158f, -491.4438f, 11.6188f };
	fLocal_135[9] = 0.0034f;
	fLocal_280[9] = -0.0071f;
	fLocal_425[9] = 0.9039f;
	fLocal_570[9] = -0.4277f;
	iLocal_1203[9] = 675;
	fLocal_715[9] = 19142f;
	iLocal_2446[9] = joaat("blista");
	Local_1778[10 /*3*/] = { -1992.583f, -438.6674f, 11.3191f };
	fLocal_135[10] = -0.0042f;
	fLocal_280[10] = -0.0042f;
	fLocal_425[10] = 0.4238f;
	fLocal_570[10] = 0.9057f;
	iLocal_1203[10] = 13;
	fLocal_715[10] = 19907f;
	iLocal_2446[10] = joaat("feltzer2");
	Local_1778[11 /*3*/] = { -1980.822f, -455.6247f, 11.3957f };
	fLocal_135[11] = -0.0042f;
	fLocal_280[11] = -0.0022f;
	fLocal_425[11] = 0.4303f;
	fLocal_570[11] = 0.9027f;
	iLocal_1203[11] = 14;
	fLocal_715[11] = 20435f;
	iLocal_2446[11] = joaat("feltzer2");
	Local_1778[12 /*3*/] = { -1964.902f, -454.8819f, 11.4294f };
	fLocal_135[12] = -0.0042f;
	fLocal_280[12] = -0.0023f;
	fLocal_425[12] = 0.4251f;
	fLocal_570[12] = 0.9051f;
	iLocal_1203[12] = 15;
	fLocal_715[12] = 20897f;
	iLocal_2446[12] = joaat("feltzer2");
	Local_1778[13 /*3*/] = { -1943.208f, -472.5447f, 11.4491f };
	fLocal_135[13] = -0.0021f;
	fLocal_280[13] = -0.0028f;
	fLocal_425[13] = 0.4255f;
	fLocal_570[13] = 0.9049f;
	iLocal_1203[13] = 16;
	fLocal_715[13] = 21755f;
	iLocal_2446[13] = joaat("feltzer2");
	Local_1778[14 /*3*/] = { -1942.273f, -478.8694f, 11.4584f };
	fLocal_135[14] = 0.0013f;
	fLocal_280[14] = 0.0001f;
	fLocal_425[14] = 0.4265f;
	fLocal_570[14] = 0.9045f;
	iLocal_1203[14] = 17;
	fLocal_715[14] = 21887f;
	iLocal_2446[14] = joaat("feltzer2");
	Local_1778[15 /*3*/] = { -1914.111f, -496.6292f, 11.4417f };
	fLocal_135[15] = -0.0021f;
	fLocal_280[15] = -0.0015f;
	fLocal_425[15] = 0.4272f;
	fLocal_570[15] = 0.9042f;
	iLocal_1203[15] = 18;
	fLocal_715[15] = 22943f;
	iLocal_2446[15] = joaat("feltzer2");
	Local_1778[16 /*3*/] = { -1924.897f, -513.712f, 11.5863f };
	fLocal_135[16] = -0.0007f;
	fLocal_280[16] = 0.0028f;
	fLocal_425[16] = 0.907f;
	fLocal_570[16] = -0.4211f;
	iLocal_1203[16] = 19;
	fLocal_715[16] = 23009f;
	iLocal_2446[16] = joaat("bison");
	Local_1778[17 /*3*/] = { -1916.469f, -507.8683f, 11.2995f };
	fLocal_135[17] = -0.0032f;
	fLocal_280[17] = -0.0012f;
	fLocal_425[17] = 0.4258f;
	fLocal_570[17] = 0.9048f;
	iLocal_1203[17] = 20;
	fLocal_715[17] = 23141f;
	iLocal_2446[17] = joaat("manana");
	Local_1778[19 /*3*/] = { -1884.203f, -552.806f, 11.1889f };
	fLocal_135[19] = -0.0017f;
	fLocal_280[19] = 0.0034f;
	fLocal_425[19] = 0.9008f;
	fLocal_570[19] = -0.4341f;
	iLocal_1203[19] = 23;
	fLocal_715[19] = 24857f;
	iLocal_2446[19] = joaat("asterope");
	Local_1778[21 /*3*/] = { -1813.34f, -602.771f, 11.0781f };
	fLocal_135[21] = 0.0062f;
	fLocal_280[21] = -0.0129f;
	fLocal_425[21] = 0.8954f;
	fLocal_570[21] = -0.445f;
	iLocal_1203[21] = 673;
	fLocal_715[21] = 25314f;
	iLocal_2446[21] = joaat("blista");
	Local_1778[22 /*3*/] = { -1874.709f, -555.2547f, 10.9783f };
	fLocal_135[22] = -0.001f;
	fLocal_280[22] = 0.0012f;
	fLocal_425[22] = 0.9012f;
	fLocal_570[22] = -0.4333f;
	iLocal_1203[22] = 676;
	fLocal_715[22] = 25332f;
	iLocal_2446[22] = joaat("dominator");
	Local_1778[24 /*3*/] = { -1829.227f, -607.2402f, 10.9377f };
	fLocal_135[24] = 0.0045f;
	fLocal_280[24] = -0.0096f;
	fLocal_425[24] = 0.9175f;
	fLocal_570[24] = -0.3976f;
	iLocal_1203[24] = 27;
	fLocal_715[24] = 28223f;
	iLocal_2446[24] = joaat("feltzer2");
	Local_1778[25 /*3*/] = { -1799.18f, -635.4329f, 10.5009f };
	fLocal_135[25] = 0.0015f;
	fLocal_280[25] = -0.0033f;
	fLocal_425[25] = 0.9153f;
	fLocal_570[25] = -0.4028f;
	iLocal_1203[25] = 29;
	fLocal_715[25] = 30005f;
	iLocal_2446[25] = joaat("asterope");
	Local_1778[26 /*3*/] = { -1786.664f, -647.2526f, 10.2952f };
	fLocal_135[26] = 0.0081f;
	fLocal_280[26] = -0.006f;
	fLocal_425[26] = 0.9232f;
	fLocal_570[26] = -0.3841f;
	iLocal_1203[26] = 30;
	fLocal_715[26] = 30005f;
	iLocal_2446[26] = joaat("feltzer2");
	Local_1778[27 /*3*/] = { -1737.742f, -634.0445f, 10.5597f };
	fLocal_135[27] = 0.0004f;
	fLocal_280[27] = -0.0202f;
	fLocal_425[27] = 0.5159f;
	fLocal_570[27] = 0.8564f;
	iLocal_1203[27] = 31;
	fLocal_715[27] = 31853f;
	iLocal_2446[27] = joaat("feltzer2");
	Local_1778[28 /*3*/] = { -1719.314f, -703.9955f, 10.08f };
	fLocal_135[28] = -0.0417f;
	fLocal_280[28] = -0.0105f;
	fLocal_425[28] = 0.9029f;
	fLocal_570[28] = -0.4276f;
	iLocal_1203[28] = 32;
	fLocal_715[28] = 32645f;
	iLocal_2446[28] = joaat("feltzer2");
	Local_1778[29 /*3*/] = { -1672.975f, -687.3683f, 10.8393f };
	fLocal_135[29] = 0.0001f;
	fLocal_280[29] = -0.0017f;
	fLocal_425[29] = 0.4795f;
	fLocal_570[29] = 0.8776f;
	iLocal_1203[29] = 33;
	fLocal_715[29] = 33503f;
	iLocal_2446[29] = joaat("buffalo");
	Local_1778[30 /*3*/] = { -1674.224f, -693.2474f, 10.8404f };
	fLocal_135[30] = -0.0012f;
	fLocal_280[30] = -0.0021f;
	fLocal_425[30] = 0.4821f;
	fLocal_570[30] = 0.8761f;
	iLocal_1203[30] = 34;
	fLocal_715[30] = 33569f;
	iLocal_2446[30] = joaat("feltzer2");
	Local_1778[31 /*3*/] = { -1649.419f, -768.9033f, 9.4656f };
	fLocal_135[31] = -0.0164f;
	fLocal_280[31] = -0.0077f;
	fLocal_425[31] = 0.9084f;
	fLocal_570[31] = -0.4178f;
	iLocal_1203[31] = 35;
	fLocal_715[31] = 35681f;
	iLocal_2446[31] = joaat("feltzer2");
	Local_1778[32 /*3*/] = { -1596.696f, -727.3316f, 10.9103f };
	fLocal_135[32] = -0.0001f;
	fLocal_280[32] = -0.0045f;
	fLocal_425[32] = 0.5534f;
	fLocal_570[32] = 0.8329f;
	iLocal_1203[32] = 36;
	fLocal_715[32] = 36341f;
	iLocal_2446[32] = joaat("feltzer2");
	Local_1778[34 /*3*/] = { -1587.63f, -730.3649f, 10.9194f };
	fLocal_135[34] = -0.0019f;
	fLocal_280[34] = -0.0026f;
	fLocal_425[34] = 0.5655f;
	fLocal_570[34] = 0.8248f;
	iLocal_1203[34] = 39;
	fLocal_715[34] = 36737f;
	iLocal_2446[34] = joaat("feltzer2");
	Local_1778[35 /*3*/] = { -1574.874f, -746.168f, 10.9264f };
	fLocal_135[35] = -0.0022f;
	fLocal_280[35] = -0.0024f;
	fLocal_425[35] = 0.583f;
	fLocal_570[35] = 0.8124f;
	iLocal_1203[35] = 40;
	fLocal_715[35] = 37463f;
	iLocal_2446[35] = joaat("feltzer2");
	Local_1778[36 /*3*/] = { -1308.004f, -730.2979f, 10.0408f };
	fLocal_135[36] = 0.0001f;
	fLocal_280[36] = -0.0032f;
	fLocal_425[36] = 1f;
	fLocal_570[36] = -0.0015f;
	iLocal_1203[36] = 981;
	fLocal_715[36] = 37878f;
	iLocal_2446[36] = joaat("coach");
	Local_1778[37 /*3*/] = { -1544.957f, -744.9665f, 10.918f };
	fLocal_135[37] = 0.0043f;
	fLocal_280[37] = -0.0097f;
	fLocal_425[37] = 0.6112f;
	fLocal_570[37] = 0.7914f;
	iLocal_1203[37] = 41;
	fLocal_715[37] = 38321f;
	iLocal_2446[37] = joaat("feltzer2");
	Local_1778[38 /*3*/] = { -1540.636f, -751.1502f, 10.9216f };
	fLocal_135[38] = 0.0035f;
	fLocal_280[38] = -0.0014f;
	fLocal_425[38] = 0.6411f;
	fLocal_570[38] = 0.7675f;
	iLocal_1203[38] = 42;
	fLocal_715[38] = 38519f;
	iLocal_2446[38] = joaat("feltzer2");
	Local_1778[39 /*3*/] = { -1525.665f, -758.7118f, 10.9032f };
	fLocal_135[39] = 0.0007f;
	fLocal_280[39] = -0.0051f;
	fLocal_425[39] = 0.6528f;
	fLocal_570[39] = 0.7575f;
	iLocal_1203[39] = 43;
	fLocal_715[39] = 39047f;
	iLocal_2446[39] = joaat("feltzer2");
	Local_1778[40 /*3*/] = { -1520.31f, -783.9903f, 18.2027f };
	fLocal_135[40] = 0.0099f;
	fLocal_280[40] = -0.016f;
	fLocal_425[40] = 0.3778f;
	fLocal_570[40] = 0.9257f;
	iLocal_1203[40] = 44;
	fLocal_715[40] = 39641f;
	iLocal_2446[40] = joaat("feltzer2");
	Local_1778[41 /*3*/] = { -1491.303f, -784.0678f, 10.9133f };
	fLocal_135[41] = 0.0122f;
	fLocal_280[41] = 0.0252f;
	fLocal_425[41] = -0.7007f;
	fLocal_570[41] = 0.7129f;
	iLocal_1203[41] = 672;
	fLocal_715[41] = 39796f;
	iLocal_2446[41] = joaat("blista");
	Local_1778[42 /*3*/] = { -1508.524f, -776.6022f, 10.884f };
	fLocal_135[42] = -0.0014f;
	fLocal_280[42] = 0.0018f;
	fLocal_425[42] = 0.7176f;
	fLocal_570[42] = -0.6964f;
	iLocal_1203[42] = 45;
	fLocal_715[42] = 39839f;
	iLocal_2446[42] = joaat("feltzer2");
	Local_1778[43 /*3*/] = { -1508.073f, -786.4115f, 18.3222f };
	fLocal_135[43] = 0.024f;
	fLocal_280[43] = -0.0103f;
	fLocal_425[43] = 0.3936f;
	fLocal_570[43] = 0.9189f;
	iLocal_1203[43] = 46;
	fLocal_715[43] = 40103f;
	iLocal_2446[43] = joaat("jackal");
	Local_1778[44 /*3*/] = { -1511.665f, -810.4238f, 13.8757f };
	fLocal_135[44] = -0.0073f;
	fLocal_280[44] = 0.0132f;
	fLocal_425[44] = 0.8309f;
	fLocal_570[44] = -0.5562f;
	iLocal_1203[44] = 47;
	fLocal_715[44] = 40235f;
	iLocal_2446[44] = joaat("feltzer2");
	Local_1778[45 /*3*/] = { -1485.495f, -750.4311f, 10.9279f };
	fLocal_135[45] = -0.002f;
	fLocal_280[45] = -0.0046f;
	fLocal_425[45] = 0.7196f;
	fLocal_570[45] = 0.6943f;
	iLocal_1203[45] = 48;
	fLocal_715[45] = 40499f;
	iLocal_2446[45] = joaat("jackal");
	Local_1778[46 /*3*/] = { -1408.149f, -748.8594f, 10.8686f };
	fLocal_135[46] = 0.0037f;
	fLocal_280[46] = -0.0024f;
	fLocal_425[46] = 0.7565f;
	fLocal_570[46] = 0.654f;
	iLocal_1203[46] = 49;
	fLocal_715[46] = 42809f;
	iLocal_2446[46] = joaat("bison");
	Local_1778[47 /*3*/] = { -1151.988f, -655.5941f, 10.0751f };
	fLocal_135[47] = 0.0002f;
	fLocal_280[47] = -0.0061f;
	fLocal_425[47] = 1f;
	fLocal_570[47] = -0.0035f;
	iLocal_1203[47] = 982;
	fLocal_715[47] = 42878f;
	iLocal_2446[47] = joaat("coach");
	Local_1778[48 /*3*/] = { -1376.315f, -789.7238f, 18.9654f };
	fLocal_135[48] = 0.0038f;
	fLocal_280[48] = 0.0017f;
	fLocal_425[48] = 0.4158f;
	fLocal_570[48] = 0.9094f;
	iLocal_1203[48] = 50;
	fLocal_715[48] = 44063f;
	iLocal_2446[48] = joaat("feltzer2");
	Local_1778[49 /*3*/] = { -1372.002f, -800.3631f, 18.966f };
	fLocal_135[49] = -0.0004f;
	fLocal_280[49] = 0.0132f;
	fLocal_425[49] = 0.423f;
	fLocal_570[49] = 0.906f;
	iLocal_1203[49] = 51;
	fLocal_715[49] = 44327f;
	iLocal_2446[49] = joaat("jackal");
	Local_1778[50 /*3*/] = { -1346.73f, -752.2042f, 10.8556f };
	fLocal_135[50] = 0.0004f;
	fLocal_280[50] = -0.0004f;
	fLocal_425[50] = -0.6204f;
	fLocal_570[50] = 0.7843f;
	iLocal_1203[50] = 52;
	fLocal_715[50] = 44921f;
	iLocal_2446[50] = joaat("bison");
	Local_1778[51 /*3*/] = { -1312.263f, -724.9147f, 10.6913f };
	fLocal_135[51] = 0.0008f;
	fLocal_280[51] = -0.0037f;
	fLocal_425[51] = 0.8043f;
	fLocal_570[51] = 0.5942f;
	iLocal_1203[51] = 53;
	fLocal_715[51] = 46175f;
	iLocal_2446[51] = joaat("feltzer2");
	Local_1778[52 /*3*/] = { -1291.658f, -734.2235f, 10.7767f };
	fLocal_135[52] = -0.018f;
	fLocal_280[52] = -0.008f;
	fLocal_425[52] = -0.5769f;
	fLocal_570[52] = 0.8166f;
	iLocal_1203[52] = 671;
	fLocal_715[52] = 46808f;
	iLocal_2446[52] = joaat("blista");
	Local_1778[53 /*3*/] = { -1287.127f, -746.1357f, 10.6849f };
	fLocal_135[53] = 0.0001f;
	fLocal_280[53] = 0.0001f;
	fLocal_425[53] = -0.5769f;
	fLocal_570[53] = 0.8168f;
	iLocal_1203[53] = 54;
	fLocal_715[53] = 46835f;
	iLocal_2446[53] = joaat("feltzer2");
	Local_1778[54 /*3*/] = { -1204.995f, -712.9043f, 10.7888f };
	fLocal_135[54] = 0.0019f;
	fLocal_280[54] = 0.0212f;
	fLocal_425[54] = -0.536f;
	fLocal_570[54] = 0.844f;
	iLocal_1203[54] = 670;
	fLocal_715[54] = 47964f;
	iLocal_2446[54] = joaat("blista");
	Local_1778[55 /*3*/] = { -1247.937f, -726.0201f, 10.6805f };
	fLocal_135[55] = 0.0043f;
	fLocal_280[55] = -0.0025f;
	fLocal_425[55] = -0.5481f;
	fLocal_570[55] = 0.8364f;
	iLocal_1203[55] = 56;
	fLocal_715[55] = 48155f;
	iLocal_2446[55] = joaat("feltzer2");
	Local_1778[56 /*3*/] = { -1173.116f, -670.5189f, 22.5925f };
	fLocal_135[56] = 0.0057f;
	fLocal_280[56] = -0.0161f;
	fLocal_425[56] = 0.9373f;
	fLocal_570[56] = -0.3481f;
	iLocal_1203[56] = 58;
	fLocal_715[56] = 51323f;
	iLocal_2446[56] = joaat("jackal");
	Local_1778[57 /*3*/] = { -1166.552f, -677.7913f, 22.3152f };
	fLocal_135[57] = 0.0015f;
	fLocal_280[57] = -0.0062f;
	fLocal_425[57] = 0.937f;
	fLocal_570[57] = -0.3493f;
	iLocal_1203[57] = 59;
	fLocal_715[57] = 51455f;
	iLocal_2446[57] = joaat("jackal");
	Local_1778[58 /*3*/] = { -1152.427f, -682.251f, 10.6786f };
	fLocal_135[58] = 0.0058f;
	fLocal_280[58] = -0.0013f;
	fLocal_425[58] = -0.491f;
	fLocal_570[58] = 0.8712f;
	iLocal_1203[58] = 60;
	fLocal_715[58] = 51521f;
	iLocal_2446[58] = joaat("feltzer2");
	Local_1778[59 /*3*/] = { -1133.733f, -656.754f, 11.3981f };
	fLocal_135[59] = 0.0161f;
	fLocal_280[59] = -0.0099f;
	fLocal_425[59] = -0.4822f;
	fLocal_570[59] = 0.8758f;
	iLocal_1203[59] = 61;
	fLocal_715[59] = 52445f;
	iLocal_2446[59] = joaat("jackal");
	Local_1778[60 /*3*/] = { -1171.982f, -680.8687f, 10.6805f };
	fLocal_135[60] = 0.0043f;
	fLocal_280[60] = -0.0025f;
	fLocal_425[60] = -0.4963f;
	fLocal_570[60] = 0.8681f;
	iLocal_1203[60] = 57;
	fLocal_715[60] = 52993f;
	iLocal_2446[60] = joaat("buffalo");
	Local_1778[61 /*3*/] = { -1095.157f, -645.9737f, 13.8981f };
	fLocal_135[61] = 0.0387f;
	fLocal_280[61] = -0.0218f;
	fLocal_425[61] = -0.4903f;
	fLocal_570[61] = 0.8704f;
	iLocal_1203[61] = 62;
	fLocal_715[61] = 53699f;
	iLocal_2446[61] = joaat("buffalo");
	Local_1778[62 /*3*/] = { -1084.094f, -633.212f, 15.324f };
	fLocal_135[62] = 0.0322f;
	fLocal_280[62] = -0.02f;
	fLocal_425[62] = -0.5058f;
	fLocal_570[62] = 0.8618f;
	iLocal_1203[62] = 63;
	fLocal_715[62] = 54161f;
	iLocal_2446[62] = joaat("bison");
	Local_1778[65 /*3*/] = { -1042.502f, -586.252f, 18.0793f };
	fLocal_135[65] = -0.0077f;
	fLocal_280[65] = -0.0085f;
	fLocal_425[65] = 0.8537f;
	fLocal_570[65] = 0.5206f;
	iLocal_1203[65] = 66;
	fLocal_715[65] = 56075f;
	iLocal_2446[65] = joaat("jackal");
	Local_1778[66 /*3*/] = { -1043.728f, -581.4434f, 17.9913f };
	fLocal_135[66] = -0.0051f;
	fLocal_280[66] = -0.0076f;
	fLocal_425[66] = 0.8554f;
	fLocal_570[66] = 0.5178f;
	iLocal_1203[66] = 67;
	fLocal_715[66] = 56141f;
	iLocal_2446[66] = joaat("feltzer2");
	Local_1778[67 /*3*/] = { -999.3893f, -588.7261f, 18.0031f };
	fLocal_135[67] = 0.0023f;
	fLocal_280[67] = -0.0014f;
	fLocal_425[67] = -0.5369f;
	fLocal_570[67] = 0.8437f;
	iLocal_1203[67] = 68;
	fLocal_715[67] = 57461f;
	iLocal_2446[67] = joaat("feltzer2");
	Local_1778[68 /*3*/] = { -958.671f, -576.3694f, 18.0496f };
	fLocal_135[68] = 0.0018f;
	fLocal_280[68] = -0.0014f;
	fLocal_425[68] = -0.5487f;
	fLocal_570[68] = 0.836f;
	iLocal_1203[68] = 69;
	fLocal_715[68] = 59677f;
	iLocal_2446[68] = joaat("buffalo");
	Local_1778[69 /*3*/] = { -960.8952f, -546.3404f, 18.2592f };
	fLocal_135[69] = 0.0001f;
	fLocal_280[69] = -0.001f;
	fLocal_425[69] = 0.8323f;
	fLocal_570[69] = 0.5544f;
	iLocal_1203[69] = 70;
	fLocal_715[69] = 59705f;
	iLocal_2446[69] = joaat("bison");
	Local_1778[71 /*3*/] = { -918.2991f, -524.3688f, 19.2461f };
	fLocal_135[71] = -0.0163f;
	fLocal_280[71] = -0.0184f;
	fLocal_425[71] = 0.8114f;
	fLocal_570[71] = 0.584f;
	iLocal_1203[71] = 73;
	fLocal_715[71] = 61487f;
	iLocal_2446[71] = joaat("manana");
	Local_1778[72 /*3*/] = { -882.9097f, -509.5293f, 21.2244f };
	fLocal_135[72] = -0.0172f;
	fLocal_280[72] = -0.0187f;
	fLocal_425[72] = 0.7932f;
	fLocal_570[72] = 0.6084f;
	iLocal_1203[72] = 75;
	fLocal_715[72] = 62807f;
	iLocal_2446[72] = joaat("asterope");
	Local_1778[73 /*3*/] = { -867.718f, -505.6333f, 22.0587f };
	fLocal_135[73] = -0.0179f;
	fLocal_280[73] = -0.0196f;
	fLocal_425[73] = 0.7789f;
	fLocal_570[73] = 0.6266f;
	iLocal_1203[73] = 76;
	fLocal_715[73] = 63203f;
	iLocal_2446[73] = joaat("manana");
	Local_1778[74 /*3*/] = { -852.1915f, -518.4356f, 22.6722f };
	fLocal_135[74] = -0.0209f;
	fLocal_280[74] = -0.0218f;
	fLocal_425[74] = 0.7745f;
	fLocal_570[74] = 0.6318f;
	iLocal_1203[74] = 77;
	fLocal_715[74] = 63467f;
	iLocal_2446[74] = joaat("dilettante");
	Local_1778[75 /*3*/] = { -826.5883f, -538.0093f, 23.7758f };
	fLocal_135[75] = 0.0184f;
	fLocal_280[75] = -0.0164f;
	fLocal_425[75] = -0.6495f;
	fLocal_570[75] = 0.76f;
	iLocal_1203[75] = 78;
	fLocal_715[75] = 64457f;
	iLocal_2446[75] = joaat("bison");
	Local_1778[76 /*3*/] = { -813.6053f, -535.4616f, 24.0711f };
	fLocal_135[76] = 0.0176f;
	fLocal_280[76] = -0.0153f;
	fLocal_425[76] = -0.6574f;
	fLocal_570[76] = 0.7532f;
	iLocal_1203[76] = 79;
	fLocal_715[76] = 64589f;
	iLocal_2446[76] = joaat("asterope");
	Local_1778[77 /*3*/] = { -778.2493f, -531.1539f, 24.6557f };
	fLocal_135[77] = 0.0028f;
	fLocal_280[77] = -0.0025f;
	fLocal_425[77] = -0.6848f;
	fLocal_570[77] = 0.7287f;
	iLocal_1203[77] = 82;
	fLocal_715[77] = 65975f;
	iLocal_2446[77] = joaat("dilettante");
	Local_1778[78 /*3*/] = { -737.4198f, -535.4118f, 24.6755f };
	fLocal_135[78] = 0.0056f;
	fLocal_280[78] = -0.0056f;
	fLocal_425[78] = -0.7065f;
	fLocal_570[78] = 0.7077f;
	iLocal_1203[78] = 83;
	fLocal_715[78] = 67361f;
	iLocal_2446[78] = joaat("asterope");
	Local_1778[79 /*3*/] = { -742.9792f, -536.2603f, 24.6668f };
	fLocal_135[79] = 0.0034f;
	fLocal_280[79] = -0.0037f;
	fLocal_425[79] = -0.7047f;
	fLocal_570[79] = 0.7095f;
	iLocal_1203[79] = 84;
	fLocal_715[79] = 67757f;
	iLocal_2446[79] = joaat("asterope");
	Local_1778[80 /*3*/] = { -724.1472f, -529.7708f, 24.6895f };
	fLocal_135[80] = -0.0001f;
	fLocal_280[80] = 0.0001f;
	fLocal_425[80] = 0.7077f;
	fLocal_570[80] = -0.7065f;
	iLocal_1203[80] = 85;
	fLocal_715[80] = 67757f;
	iLocal_2446[80] = joaat("manana");
	Local_1778[81 /*3*/] = { -701.8006f, -520.3475f, 24.7083f };
	fLocal_135[81] = -0.0051f;
	fLocal_280[81] = 0.0051f;
	fLocal_425[81] = 0.7075f;
	fLocal_570[81] = -0.7067f;
	iLocal_1203[81] = 86;
	fLocal_715[81] = 68219f;
	iLocal_2446[81] = joaat("asterope");
	Local_1778[82 /*3*/] = { -692.2917f, -536.0488f, 24.753f };
	fLocal_135[82] = 0.0275f;
	fLocal_280[82] = 0.0244f;
	fLocal_425[82] = -0.6604f;
	fLocal_570[82] = 0.75f;
	iLocal_1203[82] = 87;
	fLocal_715[82] = 68615f;
	iLocal_2446[82] = joaat("dilettante");
	Local_1778[83 /*3*/] = { -653.891f, -560.265f, 34.5999f };
	fLocal_135[83] = 0.0017f;
	fLocal_280[83] = 0.0128f;
	fLocal_425[83] = 0.731f;
	fLocal_570[83] = -0.6822f;
	iLocal_1203[83] = 88;
	fLocal_715[83] = 69671f;
	iLocal_2446[83] = joaat("bison");
	Local_1778[84 /*3*/] = { -646.4771f, -559.4749f, 34.5956f };
	fLocal_135[84] = -0.0015f;
	fLocal_280[84] = 0.0221f;
	fLocal_425[84] = 0.9992f;
	fLocal_570[84] = -0.0342f;
	iLocal_1203[84] = 89;
	fLocal_715[84] = 69935f;
	iLocal_2446[84] = joaat("bison");
	Local_1778[85 /*3*/] = { -640.9517f, -547.1611f, 34.3248f };
	fLocal_135[85] = 0.0001f;
	fLocal_280[85] = 0.0079f;
	fLocal_425[85] = 0.9996f;
	fLocal_570[85] = 0.0276f;
	iLocal_1203[85] = 90;
	fLocal_715[85] = 70133f;
	iLocal_2446[85] = joaat("dilettante");
	if (Global_86796 == 1)
	{
		Local_1778[86 /*3*/] = { -640.7111f, -535.6561f, 34.2955f };
		fLocal_135[86] = 0.0016f;
		fLocal_280[86] = 0.002f;
		fLocal_425[86] = 0.9999f;
		fLocal_570[86] = 0.0167f;
		iLocal_1203[86] = 91;
		fLocal_715[86] = 72793f;
		iLocal_2446[86] = joaat("asterope");
	}
	Local_1778[87 /*3*/] = { -543.951f, -578.3604f, 25.0337f };
	fLocal_135[87] = 0.0019f;
	fLocal_280[87] = 0f;
	fLocal_425[87] = 0.7044f;
	fLocal_570[87] = 0.7098f;
	iLocal_1203[87] = 95;
	fLocal_715[87] = 73499f;
	iLocal_2446[87] = joaat("bison");
	Local_1778[88 /*3*/] = { -536.1589f, -520.3383f, 24.8108f };
	fLocal_135[88] = -0.0011f;
	fLocal_280[88] = 0.0011f;
	fLocal_425[88] = 0.7072f;
	fLocal_570[88] = -0.707f;
	iLocal_1203[88] = 96;
	fLocal_715[88] = 74027f;
	iLocal_2446[88] = joaat("manana");
	Local_1778[89 /*3*/] = { -523.394f, -529.7448f, 24.8229f };
	fLocal_135[89] = -0.0049f;
	fLocal_280[89] = 0.0049f;
	fLocal_425[89] = 0.7079f;
	fLocal_570[89] = -0.7063f;
	iLocal_1203[89] = 97;
	fLocal_715[89] = 74357f;
	iLocal_2446[89] = joaat("asterope");
	Local_1778[90 /*3*/] = { -492.4363f, -535.2606f, 25.072f };
	fLocal_135[90] = -0.0027f;
	fLocal_280[90] = 0.0037f;
	fLocal_425[90] = 0.7087f;
	fLocal_570[90] = -0.7055f;
	iLocal_1203[90] = 98;
	fLocal_715[90] = 75545f;
	iLocal_2446[90] = joaat("bison");
	Local_1778[91 /*3*/] = { -477.6514f, -525.7468f, 24.8202f };
	fLocal_135[91] = -0.0048f;
	fLocal_280[91] = 0.0048f;
	fLocal_425[91] = 0.7074f;
	fLocal_570[91] = -0.7068f;
	iLocal_1203[91] = 99;
	fLocal_715[91] = 76007f;
	iLocal_2446[91] = joaat("asterope");
	Local_1778[92 /*3*/] = { -464.8362f, -536.2483f, 24.845f };
	fLocal_135[92] = 0.0076f;
	fLocal_280[92] = -0.0077f;
	fLocal_425[92] = -0.7069f;
	fLocal_570[92] = 0.7072f;
	iLocal_1203[92] = 100;
	fLocal_715[92] = 76535f;
	iLocal_2446[92] = joaat("dilettante");
	Local_1778[93 /*3*/] = { -422.1921f, -752.8593f, 37.353f };
	fLocal_135[93] = 0.0002f;
	fLocal_280[93] = -0.0061f;
	fLocal_425[93] = 1f;
	fLocal_570[93] = -0.0035f;
	iLocal_1203[93] = 988;
	fLocal_715[93] = 83279f;
	iLocal_2446[93] = joaat("phantom");
	Local_1778[96 /*3*/] = { -390.7148f, -978.7253f, 37.1997f };
	fLocal_135[96] = -0.0054f;
	fLocal_280[96] = 0.0013f;
	fLocal_425[96] = 0.1264f;
	fLocal_570[96] = 0.992f;
	iLocal_1203[96] = 102;
	fLocal_715[96] = 90527f;
	iLocal_2446[96] = joaat("phantom");
	Local_1778[97 /*3*/] = { -385.0823f, -1038.962f, 37.2327f };
	fLocal_135[97] = 0.0044f;
	fLocal_280[97] = -0.0185f;
	fLocal_425[97] = -0.0039f;
	fLocal_570[97] = 0.9998f;
	iLocal_1203[97] = 103;
	fLocal_715[97] = 92375f;
	iLocal_2446[97] = joaat("phantom");
	Local_1778[98 /*3*/] = { -380.3994f, -1039.657f, 36.9645f };
	fLocal_135[98] = 0.0011f;
	fLocal_280[98] = -0.0033f;
	fLocal_425[98] = -0.0035f;
	fLocal_570[98] = 1f;
	iLocal_1203[98] = 104;
	fLocal_715[98] = 92441f;
	iLocal_2446[98] = joaat("bison");
	Local_1778[99 /*3*/] = { -427.9002f, -1063.882f, 39.1192f };
	fLocal_135[99] = 0.0032f;
	fLocal_280[99] = 0.0409f;
	fLocal_425[99] = 0.9964f;
	fLocal_570[99] = 0.0739f;
	iLocal_1203[99] = 105;
	fLocal_715[99] = 93167f;
	iLocal_2446[99] = joaat("phantom");
	Local_1778[100 /*3*/] = { -432.0537f, -1093.825f, 41.9649f };
	fLocal_135[100] = -0.014f;
	fLocal_280[100] = 0.0647f;
	fLocal_425[100] = 0.9962f;
	fLocal_570[100] = 0.0567f;
	iLocal_1203[100] = 106;
	fLocal_715[100] = 94157f;
	iLocal_2446[100] = joaat("feltzer2");
	Local_1778[101 /*3*/] = { -437.6666f, -1099.808f, 43.0629f };
	fLocal_135[101] = -0.0261f;
	fLocal_280[101] = 0.0659f;
	fLocal_425[101] = 0.9961f;
	fLocal_570[101] = 0.0525f;
	iLocal_1203[101] = 107;
	fLocal_715[101] = 94355f;
	iLocal_2446[101] = joaat("phantom");
	Local_1778[102 /*3*/] = { -426.7242f, -1107.874f, 28.5356f };
	fLocal_135[102] = -0.0133f;
	fLocal_280[102] = 0.0108f;
	fLocal_425[102] = 0.6069f;
	fLocal_570[102] = 0.7946f;
	iLocal_1203[102] = 108;
	fLocal_715[102] = 94751f;
	iLocal_2446[102] = joaat("manana");
	Local_1778[103 /*3*/] = { -436.5396f, -1109.817f, 29.2992f };
	fLocal_135[103] = -0.013f;
	fLocal_280[103] = 0.0098f;
	fLocal_425[103] = 0.6011f;
	fLocal_570[103] = 0.799f;
	iLocal_1203[103] = 109;
	fLocal_715[103] = 94817f;
	iLocal_2446[103] = joaat("phantom");
	Local_1778[104 /*3*/] = { -434.3285f, -1114.395f, 45.2462f };
	fLocal_135[104] = -0.0134f;
	fLocal_280[104] = 0.0654f;
	fLocal_425[104] = 0.9959f;
	fLocal_570[104] = 0.0612f;
	iLocal_1203[104] = 110;
	fLocal_715[104] = 94883f;
	iLocal_2446[104] = joaat("phantom");
	Local_1778[106 /*3*/] = { -411.273f, -1251.47f, 37.28f };
	fLocal_135[106] = 0.0194f;
	fLocal_280[106] = 0.0027f;
	fLocal_425[106] = 0.9998f;
	fLocal_570[106] = 0.0012f;
	iLocal_1203[106] = 984;
	fLocal_715[106] = 98987f;
	iLocal_2446[106] = joaat("phantom");
	Local_1778[107 /*3*/] = { -409.7785f, -1299.373f, 37.2757f };
	fLocal_135[107] = 0.0196f;
	fLocal_280[107] = -0.0029f;
	fLocal_425[107] = 0.9998f;
	fLocal_570[107] = 0.0018f;
	iLocal_1203[107] = 983;
	fLocal_715[107] = 100637f;
	iLocal_2446[107] = joaat("phantom");
	Local_1778[109 /*3*/] = { -427.1969f, -1374.229f, 37.4014f };
	fLocal_135[109] = -0.0176f;
	fLocal_280[109] = -0.0086f;
	fLocal_425[109] = 0.9993f;
	fLocal_570[109] = -0.033f;
	iLocal_1203[109] = 114;
	fLocal_715[109] = 103001f;
	iLocal_2446[109] = joaat("phantom");
	Local_1778[110 /*3*/] = { -399.1656f, -1376.421f, 37.5457f };
	fLocal_135[110] = -0.0167f;
	fLocal_280[110] = -0.0208f;
	fLocal_425[110] = 0.0005f;
	fLocal_570[110] = 0.9996f;
	iLocal_1203[110] = 115;
	fLocal_715[110] = 103133f;
	iLocal_2446[110] = joaat("phantom");
	Local_1778[111 /*3*/] = { -413.6619f, -1500.546f, 37.2355f };
	fLocal_135[111] = 0.0205f;
	fLocal_280[111] = -0.0077f;
	fLocal_425[111] = 0.9969f;
	fLocal_570[111] = 0.0754f;
	iLocal_1203[111] = 687;
	fLocal_715[111] = 105268f;
	iLocal_2446[111] = joaat("blista");
	Local_1778[112 /*3*/] = { -438.6665f, -1573.381f, 39.1088f };
	fLocal_135[112] = 0.0175f;
	fLocal_280[112] = -0.0066f;
	fLocal_425[112] = 0.9744f;
	fLocal_570[112] = 0.2238f;
	iLocal_1203[112] = 685;
	fLocal_715[112] = 106595f;
	iLocal_2446[112] = joaat("boxville");
	Local_1778[113 /*3*/] = { -653.7279f, -1719.721f, 37.0866f };
	fLocal_135[113] = 0.0054f;
	fLocal_280[113] = -0.0223f;
	fLocal_425[113] = 0.7512f;
	fLocal_570[113] = 0.6597f;
	iLocal_1203[113] = 686;
	fLocal_715[113] = 115082f;
	iLocal_2446[113] = joaat("regina");
	Local_1778[114 /*3*/] = { -714.7027f, -1725.268f, 38.5975f };
	fLocal_135[114] = 0.0216f;
	fLocal_280[114] = 0.0056f;
	fLocal_425[114] = 0.7227f;
	fLocal_570[114] = 0.6908f;
	iLocal_1203[114] = 684;
	fLocal_715[114] = 116075f;
	iLocal_2446[114] = joaat("boxville2");
	Local_1778[115 /*3*/] = { -911.5505f, -1823.857f, 35.3282f };
	fLocal_135[115] = 0.0261f;
	fLocal_280[115] = -0.0438f;
	fLocal_425[115] = 0.9755f;
	fLocal_570[115] = 0.214f;
	iLocal_1203[115] = 688;
	fLocal_715[115] = 124268f;
	iLocal_2446[115] = joaat("blista");
	Local_1778[116 /*3*/] = { -469.3387f, -2281.965f, 62.747f };
	fLocal_135[116] = -0.0081f;
	fLocal_280[116] = -0.0056f;
	fLocal_425[116] = 0.4754f;
	fLocal_570[116] = 0.8797f;
	iLocal_1203[116] = 682;
	fLocal_715[116] = 127881f;
	iLocal_2446[116] = joaat("boxville");
	Local_1778[119 /*3*/] = { -752.348f, -2092.786f, 35.6287f };
	fLocal_135[119] = -0.023f;
	fLocal_280[119] = 0.0481f;
	fLocal_425[119] = 0.8761f;
	fLocal_570[119] = -0.4791f;
	iLocal_1203[119] = 116;
	fLocal_715[119] = 139470f;
	iLocal_2446[119] = joaat("asterope");
	Local_1778[120 /*3*/] = { -608.5975f, -2183.444f, 53.3943f };
	fLocal_135[120] = -0.0367f;
	fLocal_280[120] = -0.0194f;
	fLocal_425[120] = 0.4665f;
	fLocal_570[120] = 0.8836f;
	iLocal_1203[120] = 118;
	fLocal_715[120] = 143882f;
	iLocal_2446[120] = joaat("manana");
	Local_1778[122 /*3*/] = { -547.9759f, -2226.378f, 58.5132f };
	fLocal_135[122] = -0.0309f;
	fLocal_280[122] = -0.0168f;
	fLocal_425[122] = 0.4614f;
	fLocal_570[122] = 0.8865f;
	iLocal_1203[122] = 120;
	fLocal_715[122] = 146258f;
	iLocal_2446[122] = joaat("prairie");
	Local_1778[123 /*3*/] = { -516.3538f, -2247.368f, 60.1171f };
	fLocal_135[123] = -0.0195f;
	fLocal_280[123] = -0.0097f;
	fLocal_425[123] = 0.4611f;
	fLocal_570[123] = 0.8871f;
	iLocal_1203[123] = 121;
	fLocal_715[123] = 147380f;
	iLocal_2446[123] = joaat("penumbra");
	Local_1778[124 /*3*/] = { -501.1565f, -2252.95f, 60.8029f };
	fLocal_135[124] = -0.0186f;
	fLocal_280[124] = -0.0094f;
	fLocal_425[124] = 0.461f;
	fLocal_570[124] = 0.8871f;
	iLocal_1203[124] = 122;
	fLocal_715[124] = 147842f;
	iLocal_2446[124] = joaat("manana");
	Local_1778[125 /*3*/] = { -478.5707f, -2275.466f, 61.8251f };
	fLocal_135[125] = -0.0164f;
	fLocal_280[125] = -0.009f;
	fLocal_425[125] = 0.4631f;
	fLocal_570[125] = 0.8861f;
	iLocal_1203[125] = 123;
	fLocal_715[125] = 148898f;
	iLocal_2446[125] = joaat("manana");
	Local_1778[126 /*3*/] = { -470.8296f, -2272.882f, 62.1378f };
	fLocal_135[126] = -0.0162f;
	fLocal_280[126] = -0.0074f;
	fLocal_425[126] = 0.465f;
	fLocal_570[126] = 0.8851f;
	iLocal_1203[126] = 125;
	fLocal_715[126] = 149096f;
	iLocal_2446[126] = joaat("prairie");
	Local_1778[127 /*3*/] = { -438.2917f, -2303.74f, 63.2256f };
	fLocal_135[127] = -0.0142f;
	fLocal_280[127] = -0.0058f;
	fLocal_425[127] = 0.4674f;
	fLocal_570[127] = 0.8839f;
	iLocal_1203[127] = 126;
	fLocal_715[127] = 150416f;
	iLocal_2446[127] = joaat("baller");
	Local_1778[128 /*3*/] = { -166.105f, -2493.989f, 49.2098f };
	fLocal_135[128] = 0.0383f;
	fLocal_280[128] = 0.0205f;
	fLocal_425[128] = 0.4597f;
	fLocal_570[128] = 0.887f;
	iLocal_1203[128] = 127;
	fLocal_715[128] = 160970f;
	iLocal_2446[128] = joaat("sentinel");
	Local_1778[129 /*3*/] = { -115.5276f, -2528.11f, 42.8922f };
	fLocal_135[129] = 0.0459f;
	fLocal_280[129] = 0.0258f;
	fLocal_425[129] = 0.4626f;
	fLocal_570[129] = 0.885f;
	iLocal_1203[129] = 128;
	fLocal_715[129] = 162884f;
	iLocal_2446[129] = joaat("sentinel");
	Local_1778[130 /*3*/] = { -95.0777f, -2536.101f, 40.4089f };
	fLocal_135[130] = 0.0495f;
	fLocal_280[130] = 0.0272f;
	fLocal_425[130] = 0.4638f;
	fLocal_570[130] = 0.8841f;
	iLocal_1203[130] = 129;
	fLocal_715[130] = 163544f;
	iLocal_2446[130] = joaat("sentinel");
	Local_1778[133 /*3*/] = { 53.9231f, -2636.084f, 23.0517f };
	fLocal_135[133] = 0.0079f;
	fLocal_280[133] = -0.0276f;
	fLocal_425[133] = 0.8152f;
	fLocal_570[133] = -0.5785f;
	iLocal_1203[133] = 133;
	fLocal_715[133] = 169220f;
	iLocal_2446[133] = joaat("asterope");
	Local_1778[134 /*3*/] = { 514.658f, -2672.616f, 34.7354f };
	fLocal_135[134] = -0.0411f;
	fLocal_280[134] = -0.05f;
	fLocal_425[134] = 0.7582f;
	fLocal_570[134] = 0.6488f;
	iLocal_1203[134] = 691;
	fLocal_715[134] = 173837f;
	iLocal_2446[134] = joaat("pbus");
	Local_1778[135 /*3*/] = { 341.4317f, -2660.406f, 20.4027f };
	fLocal_135[135] = -0.0031f;
	fLocal_280[135] = -0.0368f;
	fLocal_425[135] = 0.6381f;
	fLocal_570[135] = 0.769f;
	iLocal_1203[135] = 690;
	fLocal_715[135] = 173837f;
	iLocal_2446[135] = joaat("boxville2");
	Local_1778[136 /*3*/] = { 237.1271f, -2666.976f, 17.6863f };
	fLocal_135[136] = 0.0006f;
	fLocal_280[136] = 0.001f;
	fLocal_425[136] = -0.681f;
	fLocal_570[136] = 0.7323f;
	iLocal_1203[136] = 136;
	fLocal_715[136] = 175094f;
	iLocal_2446[136] = joaat("sentinel");
	Local_1778[137 /*3*/] = { 298.2273f, -2659.632f, 18.0835f };
	fLocal_135[137] = 0.0058f;
	fLocal_280[137] = -0.0153f;
	fLocal_425[137] = 0.682f;
	fLocal_570[137] = 0.7312f;
	iLocal_1203[137] = 138;
	fLocal_715[137] = 177074f;
	iLocal_2446[137] = joaat("sentinel");
	Local_1778[138 /*3*/] = { 576.3924f, -2655.952f, 41.3115f };
	fLocal_135[138] = -0.0321f;
	fLocal_280[138] = -0.0386f;
	fLocal_425[138] = 0.7623f;
	fLocal_570[138] = 0.6453f;
	iLocal_1203[138] = 692;
	fLocal_715[138] = 179000f;
	iLocal_2446[138] = joaat("taxi");
	Local_1778[139 /*3*/] = { 590.3512f, -2658.976f, 42.6148f };
	fLocal_135[139] = -0.0267f;
	fLocal_280[139] = -0.0327f;
	fLocal_425[139] = 0.7583f;
	fLocal_570[139] = 0.6505f;
	iLocal_1203[139] = 697;
	fLocal_715[139] = 182440f;
	iLocal_2446[139] = joaat("tiptruck");
	Local_1778[140 /*3*/] = { 595.0726f, -2666.964f, 42.9179f };
	fLocal_135[140] = 0.0373f;
	fLocal_280[140] = -0.0303f;
	fLocal_425[140] = -0.6535f;
	fLocal_570[140] = 0.7554f;
	iLocal_1203[140] = 696;
	fLocal_715[140] = 182440f;
	iLocal_2446[140] = joaat("tiptruck");
	Local_1778[141 /*3*/] = { 660.3993f, -2655.141f, 48.2919f };
	fLocal_135[141] = 0.0226f;
	fLocal_280[141] = -0.019f;
	fLocal_425[141] = -0.6549f;
	fLocal_570[141] = 0.7552f;
	iLocal_1203[141] = 689;
	fLocal_715[141] = 184837f;
	iLocal_2446[141] = joaat("boxville2");
	Local_1778[142 /*3*/] = { 246.1709f, -2723.94f, 17.3719f };
	fLocal_135[142] = 0.0142f;
	fLocal_280[142] = -0.0029f;
	fLocal_425[142] = -0.2114f;
	fLocal_570[142] = 0.9773f;
	iLocal_1203[142] = 139;
	fLocal_715[142] = 186446f;
	iLocal_2446[142] = joaat("mixer");
	Local_2211[0 /*3*/] = { -2173.37f, -371.1576f, 12.6234f };
	fLocal_1038[0] = -0.0027f;
	fLocal_1074[0] = 0.0008f;
	fLocal_1110[0] = -0.0813f;
	fLocal_1146[0] = 0.9967f;
	iLocal_2591[0] = joaat("asterope");
	Local_2211[1 /*3*/] = { -2164.975f, -383.6164f, 13.0582f };
	fLocal_1038[1] = 0.0057f;
	fLocal_1074[1] = 0.0055f;
	fLocal_1110[1] = 0.7699f;
	fLocal_1146[1] = -0.6381f;
	iLocal_2591[1] = joaat("burrito");
	Local_2211[2 /*3*/] = { -2166.237f, -392.2645f, 13.1134f };
	fLocal_1038[2] = 0.0039f;
	fLocal_1074[2] = 0.0075f;
	fLocal_1110[2] = 0.7664f;
	fLocal_1146[2] = -0.6423f;
	iLocal_2591[2] = joaat("bison");
	Local_2211[3 /*3*/] = { -2166.476f, -395.1155f, 12.8803f };
	fLocal_1038[3] = 0.0009f;
	fLocal_1074[3] = 0.0039f;
	fLocal_1110[3] = 0.6205f;
	fLocal_1146[3] = 0.7842f;
	iLocal_2591[3] = joaat("asterope");
	Local_2211[4 /*3*/] = { -2158.565f, -386.8991f, 12.814f };
	fLocal_1038[4] = -0.0046f;
	fLocal_1074[4] = 0.0049f;
	fLocal_1110[4] = 0.6179f;
	fLocal_1146[4] = 0.7863f;
	iLocal_2591[4] = joaat("dilettante");
	Local_2211[5 /*3*/] = { -2158.989f, -390.0757f, 13.1374f };
	fLocal_1038[5] = 0.0055f;
	fLocal_1074[5] = 0.0044f;
	fLocal_1110[5] = 0.765f;
	fLocal_1146[5] = -0.644f;
	iLocal_2591[5] = joaat("burrito");
	Local_2211[6 /*3*/] = { -1940.792f, -528.7653f, 11.2814f };
	fLocal_1038[6] = -0.0012f;
	fLocal_1074[6] = -0.003f;
	fLocal_1110[6] = 0.9432f;
	fLocal_1146[6] = 0.3321f;
	iLocal_2591[6] = joaat("penumbra");
	Local_2211[7 /*3*/] = { -1938.263f, -530.9329f, 11.3676f };
	fLocal_1038[7] = 0.001f;
	fLocal_1074[7] = 0.0008f;
	fLocal_1110[7] = -0.3625f;
	fLocal_1146[7] = 0.932f;
	iLocal_2591[7] = joaat("dilettante");
	Local_2211[8 /*3*/] = { -1879.666f, -579.1818f, 11.3935f };
	fLocal_1038[8] = -0.0096f;
	fLocal_1074[8] = 0.0033f;
	fLocal_1110[8] = -0.3631f;
	fLocal_1146[8] = 0.9317f;
	iLocal_2591[8] = joaat("feltzer2");
	Local_2211[9 /*3*/] = { -1870.949f, -585.9692f, 11.2385f };
	fLocal_1038[9] = 0.0043f;
	fLocal_1074[9] = 0.0122f;
	fLocal_1110[9] = 0.9382f;
	fLocal_1146[9] = 0.3458f;
	iLocal_2591[9] = joaat("penumbra");
	Local_2211[10 /*3*/] = { -1845.797f, -612.0888f, 10.861f };
	fLocal_1038[10] = -0.0112f;
	fLocal_1074[10] = -0.0034f;
	fLocal_1110[10] = 0.9177f;
	fLocal_1146[10] = -0.397f;
	iLocal_2591[10] = joaat("feltzer2");
	Local_2211[11 /*3*/] = { -1849.194f, -616.7211f, 10.7627f };
	fLocal_1038[11] = 0.0032f;
	fLocal_1074[11] = 0f;
	fLocal_1110[11] = 0.4186f;
	fLocal_1146[11] = 0.9081f;
	iLocal_2591[11] = joaat("feltzer2");
	Local_2211[12 /*3*/] = { -1853.293f, -622.0193f, 10.7611f };
	fLocal_1038[12] = 0.0015f;
	fLocal_1074[12] = 0.0042f;
	fLocal_1110[12] = 0.9215f;
	fLocal_1146[12] = -0.3882f;
	iLocal_2591[12] = joaat("feltzer2");
	Local_2211[13 /*3*/] = { -1805.999f, -642.0218f, 10.5112f };
	fLocal_1038[13] = 0.0159f;
	fLocal_1074[13] = -0.0047f;
	fLocal_1110[13] = -0.341f;
	fLocal_1146[13] = 0.9399f;
	iLocal_2591[13] = joaat("feltzer2");
	Local_2211[14 /*3*/] = { -1751.662f, -692.5601f, 9.647f };
	fLocal_1038[14] = -0.0082f;
	fLocal_1074[14] = 0.0015f;
	fLocal_1110[14] = -0.3666f;
	fLocal_1146[14] = 0.9304f;
	iLocal_2591[14] = joaat("dilettante");
	Local_2211[15 /*3*/] = { -1732.792f, -711.775f, 9.5733f };
	fLocal_1038[15] = -0.0003f;
	fLocal_1074[15] = -0.0045f;
	fLocal_1110[15] = 0.8933f;
	fLocal_1146[15] = -0.4495f;
	iLocal_2591[15] = joaat("penumbra");
	Local_2211[16 /*3*/] = { -1736.663f, -716.8813f, 9.84f };
	fLocal_1038[16] = 0.0268f;
	fLocal_1074[16] = 0.0097f;
	fLocal_1110[16] = 0.8899f;
	fLocal_1146[16] = -0.4553f;
	iLocal_2591[16] = joaat("dilettante");
	Local_2211[17 /*3*/] = { -1739.3f, -719.2399f, 9.9768f };
	fLocal_1038[17] = 0.0011f;
	fLocal_1074[17] = 0.0133f;
	fLocal_1110[17] = 0.4318f;
	fLocal_1146[17] = 0.9019f;
	iLocal_2591[17] = joaat("asterope");
	Local_2211[18 /*3*/] = { -1330.124f, -790.8218f, 19.4837f };
	fLocal_1038[18] = 0.0123f;
	fLocal_1074[18] = -0.0133f;
	fLocal_1110[18] = 0.8733f;
	fLocal_1146[18] = 0.4869f;
	iLocal_2591[18] = joaat("jackal");
	Local_2211[19 /*3*/] = { -1321.393f, -785.3258f, 19.3172f };
	fLocal_1038[19] = 0.0185f;
	fLocal_1074[19] = -0.0058f;
	fLocal_1110[19] = 0.8856f;
	fLocal_1146[19] = 0.464f;
	iLocal_2591[19] = joaat("feltzer2");
	Local_2211[20 /*3*/] = { -444.4617f, -531.1383f, 24.8485f };
	fLocal_1038[20] = -0.004f;
	fLocal_1074[20] = 0.004f;
	fLocal_1110[20] = -0.7071f;
	fLocal_1146[20] = 0.7071f;
	iLocal_2591[20] = joaat("dilettante");
	Local_2211[21 /*3*/] = { -404.1469f, -649.8705f, 31.067f };
	fLocal_1038[21] = 0.0002f;
	fLocal_1074[21] = -0.0009f;
	fLocal_1110[21] = 0.7043f;
	fLocal_1146[21] = 0.7099f;
	iLocal_2591[21] = joaat("bison");
	Local_2211[22 /*3*/] = { -391.1157f, -649.484f, 30.843f };
	fLocal_1038[22] = 0.0009f;
	fLocal_1074[22] = 0.001f;
	fLocal_1110[22] = 0.7076f;
	fLocal_1146[22] = 0.7066f;
	iLocal_2591[22] = joaat("manana");
	Local_2211[23 /*3*/] = { -397.3228f, -656.3524f, 31.0987f };
	fLocal_1038[23] = 0.0011f;
	fLocal_1074[23] = -0.0002f;
	fLocal_1110[23] = 0.7043f;
	fLocal_1146[23] = 0.7099f;
	iLocal_2591[23] = joaat("bison");
	Local_2211[24 /*3*/] = { -383.3736f, -655.1855f, 30.8697f };
	fLocal_1038[24] = -0.0042f;
	fLocal_1074[24] = -0.0042f;
	fLocal_1110[24] = 0.7069f;
	fLocal_1146[24] = 0.7073f;
	iLocal_2591[24] = joaat("manana");
	Local_2211[25 /*3*/] = { -397.5586f, -665.7125f, 30.8526f };
	fLocal_1038[25] = 0.0015f;
	fLocal_1074[25] = -0.0015f;
	fLocal_1110[25] = -0.7071f;
	fLocal_1146[25] = 0.7071f;
	iLocal_2591[25] = joaat("manana");
	Local_2211[27 /*3*/] = { -410.1394f, -1574.827f, 38.319f };
	fLocal_1038[27] = -0.0199f;
	fLocal_1074[27] = 0.0216f;
	fLocal_1110[27] = -0.2855f;
	fLocal_1146[27] = 0.9579f;
	iLocal_2591[27] = joaat("dilettante");
	Local_2211[28 /*3*/] = { -423.7487f, -1607.953f, 27.6239f };
	fLocal_1038[28] = -0.0349f;
	fLocal_1074[28] = 0.0535f;
	fLocal_1110[28] = -0.159f;
	fLocal_1146[28] = 0.9852f;
	iLocal_2591[28] = joaat("phantom");
	Local_2211[29 /*3*/] = { -495.3004f, -1617.705f, 35.9875f };
	fLocal_1038[29] = 0.0291f;
	fLocal_1074[29] = 0.094f;
	fLocal_1110[29] = 0.9243f;
	fLocal_1146[29] = 0.3687f;
	iLocal_2591[29] = joaat("feltzer2");
	Local_2211[30 /*3*/] = { -499.6737f, -1622.261f, 36.7879f };
	fLocal_1038[30] = 0.0038f;
	fLocal_1074[30] = 0.0305f;
	fLocal_1110[30] = 0.9276f;
	fLocal_1146[30] = 0.3723f;
	iLocal_2591[30] = joaat("feltzer2");
	Local_2211[31 /*3*/] = { -509.7415f, -1632.236f, 36.6421f };
	fLocal_1038[31] = 0.0085f;
	fLocal_1074[31] = 0.0438f;
	fLocal_1110[31] = 0.9163f;
	fLocal_1146[31] = 0.398f;
	iLocal_2591[31] = joaat("phantom");
	Local_2211[32 /*3*/] = { -650.9254f, -2154.587f, 48.9261f };
	fLocal_1038[32] = -0.0441f;
	fLocal_1074[32] = -0.0214f;
	fLocal_1110[32] = 0.4611f;
	fLocal_1146[32] = 0.886f;
	iLocal_2591[32] = joaat("manana");
	Local_2317[0 /*3*/] = { -622.8682f, -616.4202f, 32.5207f };
	fLocal_864[0] = 0.0196f;
	fLocal_893[0] = 0.0296f;
	fLocal_922[0] = 0.0009f;
	fLocal_951[0] = 0.9994f;
	iLocal_1638[0] = 999;
	fLocal_980[0] = 68669f;
	fLocal_1009[0] = 1f;
	iLocal_2627[0] = joaat("jackal");
	if (Global_86796 == 0)
	{
		Local_2317[1 /*3*/] = { -622.8682f, -616.4202f, 32.5207f };
		fLocal_864[1] = 0.0196f;
		fLocal_893[1] = 0.0296f;
		fLocal_922[1] = 0.0009f;
		fLocal_951[1] = 0.9994f;
		iLocal_1638[1] = 998;
		fLocal_980[1] = 59669f;
		fLocal_1009[1] = 1f;
		iLocal_2627[1] = joaat("trash");
	}
	Local_2317[2 /*3*/] = { -1126.422f, -690.3713f, 20.2923f };
	fLocal_864[2] = 0.0196f;
	fLocal_893[2] = 0.0296f;
	fLocal_922[2] = 0.0009f;
	fLocal_951[2] = 0.9994f;
	iLocal_1638[2] = 995;
	fLocal_980[2] = 48200f;
	fLocal_1009[2] = 1.15f;
	iLocal_2627[2] = joaat("flatbed");
	Local_2317[3 /*3*/] = { -1126.422f, -690.3713f, 20.2923f };
	fLocal_864[3] = 0.0196f;
	fLocal_893[3] = 0.0296f;
	fLocal_922[3] = 0.0009f;
	fLocal_951[3] = 0.9994f;
	iLocal_1638[3] = 994;
	fLocal_980[3] = 48200f;
	fLocal_1009[3] = 1.15f;
	iLocal_2627[3] = joaat("gauntlet");
	if (Global_86797 == 1)
	{
		Local_2317[4 /*3*/] = { -383.3884f, -498.7355f, 40.7443f };
		fLocal_864[4] = 0.0196f;
		fLocal_893[4] = 0.0296f;
		fLocal_922[4] = 0.0009f;
		fLocal_951[4] = 0.9994f;
		iLocal_1638[4] = 967;
		fLocal_980[4] = 72450f;
		fLocal_1009[4] = 1f;
		iLocal_2627[4] = joaat("baller2");
	}
	Local_2317[5 /*3*/] = { -238.5849f, -1205.815f, 35.9661f };
	fLocal_864[5] = 0.0196f;
	fLocal_893[5] = 0.0296f;
	fLocal_922[5] = 0.0009f;
	fLocal_951[5] = 0.9994f;
	iLocal_1638[5] = 990;
	fLocal_980[5] = 106000f;
	fLocal_1009[5] = 1f;
	iLocal_2627[5] = joaat("banshee");
	Local_2317[6 /*3*/] = { -398.7839f, -1147.369f, 37.3474f };
	fLocal_864[6] = 0f;
	fLocal_893[6] = -0.0159f;
	fLocal_922[6] = 0f;
	fLocal_951[6] = 0.9999f;
	iLocal_1638[6] = 985;
	fLocal_980[6] = 95819f;
	fLocal_1009[6] = 1f;
	iLocal_2627[6] = joaat("phantom");
	Local_2317[7 /*3*/] = { -2027.813f, -381.2849f, 10.0633f };
	fLocal_864[7] = -0.0067f;
	fLocal_893[7] = 0.0002f;
	fLocal_922[7] = -0.0009f;
	fLocal_951[7] = 1f;
	iLocal_1638[7] = 980;
	fLocal_980[7] = 13000f;
	fLocal_1009[7] = 1.1f;
	iLocal_2627[7] = joaat("surfer");
	Local_2317[8 /*3*/] = { -1982.055f, -481.225f, 11.5967f };
	fLocal_864[8] = 0.0001f;
	fLocal_893[8] = -0.001f;
	fLocal_922[8] = 0.9071f;
	fLocal_951[8] = -0.421f;
	iLocal_1638[8] = 978;
	fLocal_980[8] = 20000f;
	fLocal_1009[8] = 1f;
	iLocal_2627[8] = joaat("jackal");
	Local_2317[9 /*3*/] = { -1705.387f, -689.9981f, 11.1523f };
	fLocal_864[9] = 0.0145f;
	fLocal_893[9] = 0.0039f;
	fLocal_922[9] = 0.8919f;
	fLocal_951[9] = -0.452f;
	iLocal_1638[9] = 977;
	fLocal_980[9] = 32000f;
	fLocal_1009[9] = 1f;
	iLocal_2627[9] = joaat("jackal");
	Local_2317[11 /*3*/] = { -859.6334f, -2006.779f, 27.6975f };
	fLocal_864[11] = 0.0095f;
	fLocal_893[11] = -0.0133f;
	fLocal_922[11] = 0.4281f;
	fLocal_951[11] = 0.9036f;
	iLocal_1638[11] = 973;
	fLocal_980[11] = 126150f;
	fLocal_1009[11] = 1f;
	iLocal_2627[11] = joaat("phantom");
	Local_2317[12 /*3*/] = { -866.545f, -1779.69f, 37.4865f };
	fLocal_864[12] = 0.0089f;
	fLocal_893[12] = 0.0018f;
	fLocal_922[12] = -0.4099f;
	fLocal_951[12] = 0.9121f;
	iLocal_1638[12] = 972;
	fLocal_980[12] = 121150f;
	fLocal_1009[12] = 1f;
	iLocal_2627[12] = joaat("phantom");
	Local_2317[13 /*3*/] = { -1629.096f, -743.3837f, 11.1949f };
	fLocal_864[13] = 0.0072f;
	fLocal_893[13] = -0.0048f;
	fLocal_922[13] = 0.8415f;
	fLocal_951[13] = -0.5402f;
	iLocal_1638[13] = 971;
	fLocal_980[13] = 36475f;
	fLocal_1009[13] = 1f;
	iLocal_2627[13] = joaat("tourbus");
	Local_2317[14 /*3*/] = { -1465.295f, -770.0398f, 10.7633f };
	fLocal_864[14] = -0.0128f;
	fLocal_893[14] = -0.0108f;
	fLocal_922[14] = -0.6759f;
	fLocal_951[14] = 0.7368f;
	iLocal_1638[14] = 970;
	fLocal_980[14] = 41475f;
	fLocal_1009[14] = 1f;
	iLocal_2627[14] = joaat("stretch");
	Local_2317[16 /*3*/] = { -370.3791f, -2359.684f, 63.0124f };
	fLocal_864[16] = 0.002f;
	fLocal_893[16] = -0.004f;
	fLocal_922[16] = 0.8833f;
	fLocal_951[16] = -0.4688f;
	iLocal_1638[16] = 968;
	fLocal_980[16] = 154280f;
	fLocal_1009[16] = 1f;
	iLocal_2627[16] = joaat("burrito");
	Local_2317[17 /*3*/] = { 826.9321f, -2616.743f, 52.1236f };
	fLocal_864[17] = 0.0072f;
	fLocal_893[17] = 0.0082f;
	fLocal_922[17] = 0.7724f;
	fLocal_951[17] = 0.635f;
	iLocal_1638[17] = 695;
	fLocal_980[17] = 188440f;
	fLocal_1009[17] = 1f;
	iLocal_2627[17] = joaat("tiptruck");
	Local_2317[18 /*3*/] = { 1022.212f, -2583.266f, 40.5674f };
	fLocal_864[18] = 0.0324f;
	fLocal_893[18] = 0.0397f;
	fLocal_922[18] = 0.7572f;
	fLocal_951[18] = 0.6512f;
	iLocal_1638[18] = 694;
	fLocal_980[18] = 196588f;
	fLocal_1009[18] = 1f;
	iLocal_2627[18] = joaat("taxi");
	Local_2317[20 /*3*/] = { -842.8928f, -1750.576f, 37.5273f };
	fLocal_864[20] = 0.0259f;
	fLocal_893[20] = -0.0149f;
	fLocal_922[20] = 0.8538f;
	fLocal_951[20] = 0.5198f;
	iLocal_1638[20] = 679;
	fLocal_980[20] = 120952f;
	fLocal_1009[20] = 1f;
	iLocal_2627[20] = joaat("speedo");
	Local_2317[21 /*3*/] = { -1896.5f, -544.8254f, 11.5101f };
	fLocal_864[21] = 0.0009f;
	fLocal_893[21] = -0.002f;
	fLocal_922[21] = 0.8961f;
	fLocal_951[21] = -0.4439f;
	iLocal_1638[21] = 678;
	fLocal_980[21] = 23320f;
	fLocal_1009[21] = 1f;
	iLocal_2627[21] = joaat("speedo");
	Local_2317[22 /*3*/] = { -1825.266f, -603.6853f, 11.1391f };
	fLocal_864[22] = 0.0053f;
	fLocal_893[22] = -0.0114f;
	fLocal_922[22] = 0.9085f;
	fLocal_951[22] = -0.4177f;
	iLocal_1638[22] = 669;
	fLocal_980[22] = 26662f;
	fLocal_1009[22] = 1f;
	iLocal_2627[22] = joaat("blista");
	Local_2317[24 /*3*/] = { -417.5042f, -809.2904f, 36.9324f };
	fLocal_864[24] = -0.0126f;
	fLocal_893[24] = -0.0041f;
	fLocal_922[24] = 0.9999f;
	fLocal_951[24] = -0.0106f;
	iLocal_1638[24] = 667;
	fLocal_980[24] = 77000f;
	fLocal_1009[24] = 1f;
	iLocal_2627[24] = joaat("fugitive");
	Local_2317[25 /*3*/] = { -415.8903f, -773.4919f, 36.772f };
	fLocal_864[25] = -0.0161f;
	fLocal_893[25] = 0.0005f;
	fLocal_922[25] = 0.9999f;
	fLocal_951[25] = 0.0034f;
	iLocal_1638[25] = 666;
	fLocal_980[25] = 77520f;
	fLocal_1009[25] = 1f;
	iLocal_2627[25] = joaat("washington");
	Local_2317[26 /*3*/] = { -399.9667f, -900.1065f, 37.2774f };
	fLocal_864[26] = 0.0026f;
	fLocal_893[26] = -0.0176f;
	fLocal_922[26] = -0.0058f;
	fLocal_951[26] = 0.9998f;
	iLocal_1638[26] = 101;
	fLocal_980[26] = 82942f;
	fLocal_1009[26] = 1f;
	iLocal_2627[26] = joaat("phantom");
	Local_2317[27 /*3*/] = { -1606.45f, -749.8375f, 11.0267f };
	fLocal_864[27] = -0.0031f;
	fLocal_893[27] = 0.0002f;
	fLocal_922[27] = 0.8433f;
	fLocal_951[27] = -0.5375f;
	iLocal_1638[27] = 37;
	fLocal_980[27] = 36173f;
	fLocal_1009[27] = 1f;
	iLocal_2627[27] = joaat("jackal");
	iLocal_124 = 0;
}

int func_448()//Position - 0x28581
{
	if (((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1New") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1Cine")) && func_449(3, "Fam1Cam")) && func_449(4, "Fam1Cam")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN", 0))
	{
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "Fam1New"))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_01")))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("phantom")))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("tr3")))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleincar01_"))
						{
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
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

bool func_449(int iParam0, char* sParam1)//Position - 0x2863C
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_450()//Position - 0x2864C
{
	func_447();
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1New");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "Fam1New");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1Cine");
	func_451(3, "Fam1Cam");
	func_451(4, "Fam1Cam");
	STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattle");
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_01"));
	STREAMING::REQUEST_MODEL(joaat("phantom"));
	STREAMING::REQUEST_MODEL(joaat("tr3"));
	STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN", 0);
}

void func_451(int iParam0, char* sParam1)//Position - 0x286DA
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

void func_452()//Position - 0x286EA
{
	STREAMING::REQUEST_MODEL(joaat("tr3"));
	STREAMING::REQUEST_MODEL(joaat("phantom"));
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN", 0);
}

bool func_453()//Position - 0x2873E
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2209.347f, -344.3203f, 12.5676f, -2493.139f, -201.6875f, 55.29928f, 80.25f, 0, 1, 0);
}

void func_454()//Position - 0x28774
{
	func_237();
	func_433();
	if (!ENTITY::IS_ENTITY_DEAD(func_2()))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_2(), -809.9013f, 184.739f, 71.54013f, -812.3442f, 190.5973f, 74.04207f, 8.25f, 0, 1, 0))
		{
			PED::_SET_PED_CAN_PLAY_INJURED_ANIMS(func_2(), 1);
		}
		PED::SET_PED_RESET_FLAG(func_2(), 60, 1);
		GlobalFunc_10686(40, 5);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		if ((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3026, 12f, 12f, 5f, 0, 1, 0)) && SYSTEM::TIMERA() < 4500)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
	MISC::SET_BIT(&(Local_2952.f_13), 11);
	switch (iLocal_2986)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(func_2(), 104, 1);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(func_2(), 0);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(func_2(), joaat("weapon_unarmed"));
			func_717(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				TASK::TASK_LOOK_AT_ENTITY(func_2(), PLAYER::PLAYER_PED_ID(), 30000, 0, 2);
				ENTITY::SET_ENTITY_COORDS(iLocal_3026, Local_3242, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_3026, fLocal_3245);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3026, 30000, 0, 2);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3026, 0);
			}
			CUTSCENE::REMOVE_CUTSCENE();
			GlobalFunc_Checkpoint2(1, "STAGE_GET_INTO_AMANDAS_CAR", 0, 0, 0, 1);
			Local_2952 = GlobalFunc_6783(iLocal_3026, 0, 0);
			HUD::SET_BLIP_AS_FRIENDLY(Local_2952, true);
			GlobalFunc_11319(PLAYER::PLAYER_PED_ID(), 1);
			MISC::SET_BIT(&(Local_2952.f_13), 3);
			func_472(15, 0);
			func_472(17, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_3027);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_3028);
			GlobalFunc_173(&uLocal_3324, 2, 0, "JIMMY", 0, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(func_2(), 0);
			PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 3.5f, -1082130432, -1082130432);
			PED::SET_PED_AS_GROUP_MEMBER(func_2(), PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
			iLocal_5956 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_2986++;
			break;
		
		case 1:
			if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_ACAR", 9, 0, 0, 0))
			{
				iLocal_2986++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 1))
			{
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (GlobalFunc_10638(&uLocal_3324, 14, "FAM1AUD", "FAM1_PHONEX", 9, 1, 0, 0, 1))
					{
						iLocal_2986++;
					}
				}
			}
			else
			{
				iLocal_2986++;
			}
			break;
		
		case 3:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if ((GlobalFunc_1397() || GlobalFunc_781()) || GlobalFunc_890())
				{
					if (iLocal_5956 == 0)
					{
						SYSTEM::SETTIMERB(0);
						iLocal_5956 = 1;
					}
				}
			}
			if (iLocal_5956 == 1 && SYSTEM::TIMERB() > 2000)
			{
				GlobalFunc_10725(14, "YB_JIMTXT", 1, 1, 0, 0, 0, 1, 0, 1);
			}
			if (((SYSTEM::TIMERB() > 1000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_5956 == 0) || (SYSTEM::TIMERB() > 4000 && iLocal_5956 == 1))
			{
				if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_CHANGE", 9, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
					iLocal_2986++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_10618(&uLocal_3324, "FAM1AUD", "FAM1_HELPOUT", 9, 0, 0, 0))
			{
				iLocal_2986++;
			}
			break;
		
		case 5:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!GlobalFunc_Is_Mission_Retry())
				{
					GlobalFunc_164("YB_GETIN", 7500, 1);
				}
				iLocal_2986++;
			}
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 0) && !PED::IS_PED_INJURED(func_2()))
				{
					PED::SET_PED_CONFIG_FLAG(func_2(), 104, 0);
					iLocal_5900 = 4;
				}
			}
			break;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3026, 8f, 8f, 8f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(func_2()))
		{
			if (iLocal_5957 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(func_2(), PLAYER::PLAYER_PED_ID(), 60000, 2048, 4);
				iLocal_5957 = 1;
			}
		}
	}
	if (SYSTEM::TIMERA() > 0)
	{
		func_105(&Local_2952, Local_3011, 0.0001f, 0.0001f, 2.01f, 0, func_2(), 0, 0, iLocal_3026, "YB_GETTO", "CMN_FLEAVE", "", "", "CMN_FLEAVE", "YB_GETIN", "CMN_GENGETBCK", 0, 1, 1, -1);
	}
	func_435();
}


















void func_472(int iParam0, int iParam1)//Position - 0x29B97
{
	if (!GlobalFunc_42(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_5112(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
}





















































































































































































































































void func_717(int iParam0)//Position - 0x7120F
{
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("sentinel2"), 3);
	GlobalFunc_7213(17, 0);
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	HUD::REQUEST_ADDITIONAL_TEXT("FAMILY1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("FAM1AUD", 6);
	while ((((!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("sentinel2")) || !GlobalFunc_7212(17, 0)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		SYSTEM::WAIT(0);
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (!GlobalFunc_4929(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
		{
			GlobalFunc_10063(-843.9858f, 158.6548f, 64.90799f, -777.54f, 183.1866f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 1, 0);
		}
	}
	if (iParam0 != 1)
	{
		switch (iParam0)
		{
			case 3:
			case 4:
				Local_3242 = { -825.1714f, 178.9298f, 70.3721f };
				break;
			
			case 5:
				Local_3242 = { -2146.382f, -255.5757f, 13.9293f };
				break;
			
			case 6:
				Local_3242 = { -416.0598f, -1124.781f, 36.1469f };
				break;
			
			case 7:
				Local_3242 = { -650.3306f, -2171.413f, 49.4297f };
				break;
			}
	}
	func_744(&iLocal_3026, 17, Local_3242, fLocal_3245, 1, 0);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_3026, 1, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_3026, 0, 0);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3026);
	VEHICLE::SET_VEHICLE_COLOURS(iLocal_3026, iLocal_3009, iLocal_3009);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3026, 0f);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3026, 4, 0);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3026, 0, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
	VEHICLE::SET_VEHICLE_STRONG(iLocal_3026, 1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_3026, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_3026, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_3026, 1200);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_3026, 0);
	VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3026, 1);
	GlobalFunc_503(iLocal_3026, -1);
	VEHICLE::GET_VEHICLE_COLOURS(iLocal_3026, &uLocal_5904, &uLocal_5905);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr3"), 1);
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_55[1]))
	{
		func_718(&(uLocal_55[1]), 1, -794.9062f, 176.0349f, 71.8348f, 96.2191f, 1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
		PED::SET_PED_SUFFERS_CRITICAL_HITS(func_2(), 0);
		PED::SET_PED_CONFIG_FLAG(func_2(), 32, 0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(func_2(), 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_2(), 1);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(func_2(), 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(func_2(), 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_2(), 1);
		WEAPON::SET_CURRENT_PED_WEAPON(func_2(), joaat("weapon_unarmed"), 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_2(), 1862763509);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_55[1], "FAMILY_1_BOAT_PEDS", 0);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_2951);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2951, 1862763509);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	GlobalFunc_173(&uLocal_3324, 1, func_2(), "FRANKLIN", 0, 1);
}

int func_718(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x71544
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
			func_720(*uParam0, bParam8);
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


int func_720(int iParam0, bool bParam1)//Position - 0x7165C
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		func_724(iVar0, 0);
		GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		GlobalFunc_11319(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			func_724(iVar0, 0);
			GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11319(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_11257(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11257(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11257(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11257(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_724(int iParam0, bool bParam1)//Position - 0x71DAB
{
	if (!GlobalFunc_42(iParam0))
	{
		return;
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1560[iParam0] = bParam1;
}




















int func_744(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x7324A
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
				GlobalFunc_5121(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
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
				GlobalFunc_7211(uParam0, Var0);
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














void func_758()//Position - 0x74540
{
	if (iLocal_2990 <= 3)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_2990)
	{
		case 0:
			iLocal_5938 = 0;
			iLocal_5939 = 0;
			iLocal_5940 = 0;
			CAM::DESTROY_ALL_CAMS(0);
			uLocal_3004 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			if (GlobalFunc_237(GlobalFunc_8315()) == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_1_int", 254, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("family_1_int", 8);
			}
			iLocal_2990++;
			break;
		
		case 1:
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_10914("Franklin", joaat("player_one"), 21);
			}
			GlobalFunc_10914("Michael", joaat("player_zero"), 34);
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				iLocal_2990++;
			}
			break;
		
		case 2:
			GlobalFunc_8316(1, 1, 1, 0);
			if (GlobalFunc_237(GlobalFunc_8315()) == 0)
			{
				if (!PED::IS_PED_INJURED(uLocal_55[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_55[1], "Franklin", 0, joaat("player_one"), 0);
				}
			}
			else if (!PED::IS_PED_INJURED(uLocal_55[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_55[0], "Michael", 0, joaat("player_zero"), 0);
			}
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_5936 = 0;
			iLocal_5937 = 0;
			iLocal_2990++;
			break;
		
		case 3:
		case 4:
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2990 == 3)
			{
				if (GlobalFunc_237(GlobalFunc_8315()) == 0)
				{
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("sunglasses");
					GlobalFunc_11257(uLocal_55[0], 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				OBJECT::DELETE_OBJECT(&uLocal_5926);
				OBJECT::DELETE_OBJECT(&uLocal_5927);
				ENTITY::REMOVE_MODEL_HIDE(-816.72f, 179.1f, 72.83f, 1f, joaat("v_ilev_mm_doorm_l"), 0);
				ENTITY::REMOVE_MODEL_HIDE(-816.11f, 177.51f, 72.83f, 1f, joaat("v_ilev_mm_doorm_r"), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5923))
				{
					OBJECT::DELETE_OBJECT(&iLocal_5923);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5924))
				{
					OBJECT::DELETE_OBJECT(&iLocal_5924);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 150f);
				CLOCK::SET_CLOCK_TIME(16, 0, 0);
				GlobalFunc_4935();
				GlobalFunc_9140(&uLocal_5906, 0, 0, 2000, 1, 1, 0, 1);
				func_55(0, 0, 2000, 1, 0);
				GlobalFunc_562(17);
				iLocal_2990 = 4;
			}
			if (iLocal_2990 == 4)
			{
				if (GlobalFunc_237(GlobalFunc_8315()) == 0)
				{
					iLocal_2990 = 5;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
				{
					uLocal_55[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
					PED::CLEAR_PED_BLOOD_DAMAGE(uLocal_55[0]);
					iLocal_2990 = 5;
				}
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 40400f && IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) < 41434f)
			{
				if (iLocal_5936 == 0)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("sunglasses");
					CLOCK::SET_CLOCK_TIME(11, 0, 0);
					iLocal_5936 = 1;
				}
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 46065.6f)
			{
				if (iLocal_5936 == 1)
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					iLocal_5936 = 0;
				}
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 185532.3f)
			{
				if (iLocal_5937 == 0)
				{
					if (!bLocal_5928)
					{
						GlobalFunc_2898(0);
					}
					iLocal_5937 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[0]))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_55[0]);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					PED::FORCE_PED_MOTION_STATE(func_2(), -668482597, 0, 1, 0);
				}
				iLocal_5938 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				func_40(0);
				iLocal_5939 = 1;
			}
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (GlobalFunc_8315() != 0)
				{
					GlobalFunc_9134(&uLocal_55, 0);
					func_239(&uLocal_55, 1, 0, 0);
				}
				iLocal_5939 = 1;
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_40(0);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				GlobalFunc_562(17);
				GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_11319(func_2(), 1);
				RECORDING::_0x81CBAE94390F9F89();
				SYSTEM::SETTIMERB(0);
				iLocal_5940 = 1;
			}
			if ((iLocal_5938 && iLocal_5939) && iLocal_5940)
			{
				GlobalFunc_8316(0, 1, 1, 0);
				iLocal_5900 = 3;
			}
			break;
	}
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_2()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_2()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_2(), 1f);
		}
	}
}





void func_763()//Position - 0x74D07
{
	fLocal_1182 = 180f;
	fLocal_1197 = 13000f;
	fLocal_1195 = 180f;
	HUD::ALLOW_SONAR_BLIPS(0);
	PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	GlobalFunc_9131(39, 0, 0);
	GlobalFunc_8523(40, 1);
	GlobalFunc_8523(41, 1);
	GlobalFunc_8523(42, 1);
	GlobalFunc_8523(43, 1);
	AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", 1);
	HUD::REQUEST_ADDITIONAL_TEXT("FAMILY1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("FAM1AUD", 6);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2951);
	PED::ADD_RELATIONSHIP_GROUP("THIEVES", &iLocal_2951);
	PED::SET_PED_NON_CREATION_AREA(-822.418f, 177.4556f, 70.3269f, -822.418f, 177.4556f, 70.3269f);
	PATHFIND::SET_PED_PATHS_IN_AREA(-832.418f, 167.4556f, 60.3269f, -812.418f, 187.4556f, 80.3269f, 0, 0);
	PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-820.7206f, 178.5732f, 70.5724f, 30f, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2181.964f, -332.7052f, 11.14914f, -2112.791f, -175.2435f, 44.18433f, 17f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2041.4f, -157.0607f, 11.0166f, -2139.924f, -233.373f, 34.05488f, 17f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1921.897f, -166.5173f, 20.28942f, -2062.191f, -168.2974f, 42.18278f, 23.25f, 0, 0, 1);
	GlobalFunc_2224(1);
	bLocal_2985 = GlobalFunc_5101(0);
	GlobalFunc_563(1);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	GlobalFunc_5574("YB_JIMTXT");
	iLocal_5900 = 2;
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_562(17);
		PED::DELETE_PED(&(uLocal_55[1]));
		func_773(0, 1);
		GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		iLocal_5935 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		func_717(iLocal_5934);
		switch (iLocal_5935)
		{
			case 0:
			case 1:
				iLocal_5934 = 3;
				break;
			
			case 2:
				iLocal_5934 = 5;
				break;
			
			case 3:
				iLocal_5934 = 6;
				break;
			
			case 4:
				iLocal_5934 = 7;
				break;
			
			case 5:
				iLocal_5934 = 8;
				break;
			
			case 6:
				iLocal_5934 = 9;
				break;
			
			case 7:
				iLocal_5934 = 10;
				break;
		}
		if (Global_84544 == 1)
		{
			if (iLocal_5934 == 3)
			{
				iLocal_5934 = 5;
			}
			else if (iLocal_5934 == 5)
			{
				iLocal_5934 = 6;
			}
			else if (iLocal_5934 == 6)
			{
				iLocal_5934 = 7;
			}
			else if (iLocal_5934 == 7)
			{
				iLocal_5934 = 8;
			}
			else if (iLocal_5934 == 8)
			{
				iLocal_5934 = 9;
			}
			else if (iLocal_5934 == 9)
			{
				iLocal_5934 = 10;
			}
			else if (iLocal_5934 == 10)
			{
				iLocal_5934 = 11;
			}
			else if (iLocal_5934 == 11)
			{
				func_89();
			}
		}
		func_764(&iLocal_5934, 1);
	}
}

void func_764(int iParam0, bool bParam1)//Position - 0x74FBD
{
	float fVar0;
	
	bLocal_5903 = bParam1;
	switch (*iParam0)
	{
		case 3:
			func_770(bParam1, -825.1714f, 178.9298f, 70.3721f, 145.3533f);
			GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
			func_724(0, bLocal_2985);
			iLocal_2986 = 0;
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
			if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
			}
			iLocal_5900 = 3;
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 2, 1);
			MISC::CLEAR_AREA(-825.1714f, 178.9298f, 70.3721f, 100f, 1, 0, 0, 0);
			iLocal_2986 = 5;
			func_40(0f);
			GlobalFunc_4967(iLocal_3026, -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(func_2()))
			{
				bLocal_5933 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
			}
			while (!bLocal_5933)
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_2()))
				{
					bLocal_5933 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
				}
				SYSTEM::WAIT(0);
			}
			if (!bParam1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, 20000, -1, 1f, 3, 0);
				}
				while (!CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			func_39();
			break;
		
		case 4:
			func_770(bParam1, -821.9089f, 178.7543f, 70.5698f, 78.66f);
			GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
			func_724(0, bLocal_2985);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
			if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_2()))
			{
				bLocal_5933 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
			}
			while (!bLocal_5933)
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_2()))
				{
					bLocal_5933 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
				}
				SYSTEM::WAIT(0);
			}
			MISC::CLEAR_AREA(-821.9089f, 178.7543f, 70.5698f, 100f, 1, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
			}
			while (!CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			func_40(0f);
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			func_39();
			break;
		
		case 5:
			func_770(bParam1, -2146.382f, -255.5757f, 13.9293f, 159.6675f);
			if (!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
				if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_3026, 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), 0, 0);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 1, 1);
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
			}
			func_1();
			GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
			func_724(0, bLocal_2985);
			MISC::CLEAR_AREA(-2146.382f, -255.5757f, 13.9293f, 20f, 1, 0, 0, 0);
			func_1();
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_2977 = 1;
			iLocal_2987 = 3;
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FADE_RADIO");
			func_452();
			func_450();
			while (!func_448())
			{
				func_1();
				SYSTEM::WAIT(0);
			}
			func_447();
			func_445();
			func_439(14000f);
			func_436();
			GlobalFunc_7139(&Local_2952, 0);
			GlobalFunc_5105();
			iLocal_5901 = 0;
			iLocal_5900 = 5;
			func_40(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -2146.382f, -255.5757f, 13.9293f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
				ENTITY::SET_ENTITY_HEADING(iLocal_3026, 159.6675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3026, 15f);
			}
			GlobalFunc_4967(iLocal_3026, -1, 1);
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3026, 15f);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3029, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3030, 1);
			}
			GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			GlobalFunc_10691(&uLocal_3324, "FAM1AUD", "FAM1_START", 9, 0, 0, 0, 0);
			func_39();
			break;
		
		case 6:
		case 7:
			if (*iParam0 == 6)
			{
				func_770(bParam1, -416.0598f, -1124.781f, 36.1469f, 179.8945f);
			}
			else if (*iParam0 == 7)
			{
				func_770(bParam1, -650.3306f, -2171.413f, 49.4297f, 235.8943f);
			}
			if (!PED::IS_PED_INJURED(func_2()))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), 0);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_DO_CHASE_RT");
			iLocal_3489 = 0;
			iLocal_3490 = 0;
			iLocal_2946 = 1;
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 150, 1, 1);
			fLocal_3253 = 1f;
			func_450();
			func_452();
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleincar02_");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(joaat("trailers2"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattle");
			while (((((((!func_448() || !func_446()) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleincar02_")) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattle")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_MODEL_LOADED(joaat("trailers2")))
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
			func_445();
			if (!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
				PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 1, 1);
			}
			func_447();
			ENTITY::SET_ENTITY_COORDS(iLocal_3030, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3029, 0f, 3f, 0f), 1, 0, 0, 1);
			func_418();
			GlobalFunc_7139(&Local_2952, 0);
			func_439(1179840512);
			func_436();
			if (*iParam0 == 6)
			{
				if (Global_17)
				{
					fVar0 = 70000f;
					bLocal_111 = false;
					GlobalFunc_2214();
					func_766();
					iLocal_2936 = MISC::GET_GAME_TIMER();
					iLocal_2937 = 10700;
				}
				else
				{
					fVar0 = 90000f;
					iLocal_2937 = 1200;
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_JIMMY_APPEARS_RT");
				GlobalFunc_Checkpoint2(3, "STAGE_JIMMY_APPEARS", 0, 0, 0, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3029, fVar0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3030, fVar0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_53, fVar0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_54, fVar0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -0.2979f, -8.6807f, 2.8214f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, -1.547f, -5.9555f, 2.7092f, 1);
				CAM::SET_CAM_FOV(uLocal_3004, 28.0593f);
				func_440(iLocal_3029, (fVar0 + 13500f));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, 1, "Fam1Cine", 1);
					fVar0 = (fVar0 + 12000f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, fVar0);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3026, 1);
				}
				iLocal_2932 = -1;
				iLocal_2934 = 9;
			}
			else if (*iParam0 == 7)
			{
				iLocal_3299 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FRANK_JUMPS_RT");
				ENTITY::PLAY_ENTITY_ANIM(iLocal_3030, "onYacht_hitByBoom_boom", "MISSFAM1_YachtBattleonYacht02_", 8f, 0, 1, 0, 0, 0);
				GlobalFunc_Checkpoint2(4, "STAGE_FRANKLIN_JUMPS_BACK_ONTO_BOAT", 0, 0, 0, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3029, 134000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3030, 134000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_53, 134000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_54, 134000f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, 1, "Fam1Cine", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3026, 145700f);
				}
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3026, 1);
				func_392();
				iLocal_2934 = 9;
				iLocal_5932 = 8;
				iLocal_3230 = func_411(iLocal_3210, 0, iLocal_3026, "seat_pside_r", 0, "MISSFAM1_YachtBattleinCar02_", "JimmyInCar_intro", "", 1, 1, 4);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3230, 0.45f);
				func_440(iLocal_3029, 147500f);
			}
			GlobalFunc_4935();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3026);
			}
			HUD::REMOVE_BLIP(&uLocal_3010);
			if (*iParam0 == 6)
			{
				STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht01_");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht01_"))
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_INJURED(func_2()))
				{
					iLocal_3225 = func_411(func_2(), 0, iLocal_3030, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelLoop02_F", "", 0, 1, 4);
				}
				iLocal_5901 = 22;
				iLocal_5900 = 6;
			}
			else if (*iParam0 == 7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030) && !PED::IS_PED_INJURED(func_2()))
				{
					iLocal_3227 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_2(), iLocal_3227, "MISSFAM1_YACHTBATTLEonYacht02_", "onYacht_jumpToCarIntro_F", 1000f, -1000f, 0, 0, 1148846080, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3227, iLocal_3030, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3030, "chassis"));
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3227, 0);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_3227, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3004, iLocal_3030, -0.0528f, -4.5224f, 2.7052f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_3004, iLocal_3030, 0.1428f, -7.461f, 2.134f, 1);
					CAM::SET_CAM_FOV(uLocal_3004, 27.3552f);
					GlobalFunc_4935();
					iLocal_5901 = 32;
				}
				iLocal_5900 = 7;
			}
			if (*iParam0 == 6)
			{
				iLocal_5901 = 22;
				iLocal_5900 = 6;
				AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			}
			else if (*iParam0 == 7)
			{
				iLocal_5901 = 32;
				*iParam0 = 7;
				AUDIO::START_AUDIO_SCENE("FAMILY_1_PROTECT_FRANKLIN");
				AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			}
			GlobalFunc_4967(iLocal_3026, -1, 1);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 1000)
			{
				func_391();
				func_321(iLocal_3029, 1f);
				func_424();
				SYSTEM::WAIT(0);
			}
			func_765(&uLocal_3491, 1, "Fam1New");
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
				AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_3026, 0.25f);
				uLocal_99 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_3026, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3026, "overheat"), 1065353216, 0, 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_99, "damage", 0.5f, 0);
			}
			if (!PED::IS_PED_INJURED(func_2()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_2(), joaat("weapon_unarmed"), 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3029, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3030))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3030, 1);
			}
			GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 8:
			func_770(bParam1, 3.5141f, -2605.764f, 26.7756f, 61.8483f);
			GlobalFunc_Checkpoint2(5, "STAGE_TAKE_CAR_TO_CHOP_SHOP", 0, 0, 0, 1);
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit_rear");
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit_rear"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3011);
				}
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, 70f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3210))
				{
					iLocal_3210 = PED::CREATE_PED(26, joaat("ig_jimmydisanto"), 3.5141f, -2605.764f, 32.7756f, 96.2191f, 1, 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3210, "FAMILY_1_BOAT_PEDS", 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_3210, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3210, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3210, 1);
					GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_3210))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3210);
					PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 1);
					PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_3210, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT_REAR"));
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3210, 1, 0);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 1, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(3.5141f, -2605.764f, 26.7756f, 25f, 0, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_3026, 3.5141f, -2605.764f, 26.7756f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_3026, 61.8483f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3026, 15f);
			iLocal_2989 = 3;
			GlobalFunc_4967(iLocal_3026, -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
			}
			AUDIO::START_AUDIO_SCENE("FAMILY_1_CAR_BREAKS_DOWN");
			GlobalFunc_173(&uLocal_3324, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_5900 = 8;
			break;
		
		case 9:
			func_770(bParam1, -1104.31f, -1975.672f, 12.0488f, 92.2029f);
			GlobalFunc_Checkpoint2(6, "STAGE_CHOP_SHOP_CUTSCENE", 0, 0, 0, 1);
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_3026, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3011);
				}
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, 70f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3210))
				{
					iLocal_3210 = PED::CREATE_PED(26, joaat("ig_jimmydisanto"), -1104.31f, -1975.672f, 15.0488f, 96.2191f, 1, 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3210, "FAMILY_1_BOAT_PEDS", 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_3210, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3210, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3210, 1);
					GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_3210))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3210);
					PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 1);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 1, 1);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_3026, -1104.31f, -1975.672f, 12.0488f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_3026, 92.2029f);
			GlobalFunc_8625(39, 0);
			GlobalFunc_9131(39, 1, 0);
			GlobalFunc_8522(39);
			GlobalFunc_4967(0, -1, 1);
			iLocal_5900 = 9;
			break;
		
		case 10:
			func_770(bParam1, -1137.979f, -1985.852f, 12.1666f, 294.9323f);
			GlobalFunc_Checkpoint2(7, "STAGE_FIX_CAR_AND_TAKE_JIMMY_HOME", 0, 0, 0, 1);
			GlobalFunc_9131(39, 1, 0);
			GlobalFunc_8522(39);
			GlobalFunc_8625(39, 1);
			if (GlobalFunc_237(GlobalFunc_8315()) != 1)
			{
				GlobalFunc_9134(&uLocal_55, 1);
				func_239(&uLocal_55, 0, 0, 0);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
			PED::DELETE_PED(&(uLocal_55[0]));
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit");
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto")) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3210))
				{
					iLocal_3210 = PED::CREATE_PED(26, joaat("ig_jimmydisanto"), -1137.979f, -1985.852f, 14.1666f, 96.2191f, 1, 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3210, "FAMILY_1_BOAT_PEDS", 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_3210, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3210, 1862763509);
					GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_3210))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3210);
					PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_3210, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT"));
					PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 0);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3026, 1, 1);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_3026, -1137.979f, -1985.852f, 12.1666f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_3026, 294.9323f);
			iLocal_2997 = 5;
			iLocal_5900 = 10;
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
			GlobalFunc_4967(iLocal_3026, -1, 1);
			GlobalFunc_173(&uLocal_3324, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			func_39();
			break;
		
		case 11:
			func_770(bParam1, -834.7897f, 165.549f, 67.767f, 326.1774f);
			CUTSCENE::REMOVE_CUTSCENE();
			SYSTEM::WAIT(0);
			GlobalFunc_9134(&uLocal_55, 1);
			func_239(&uLocal_55, 1, 0, 0);
			PED::DELETE_PED(&(uLocal_55[0]));
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
			STREAMING::REQUEST_MODEL(joaat("ig_jimmydisanto"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_jimmydisanto")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3026, -1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_3026, 70f);
				ENTITY::SET_ENTITY_COORDS(iLocal_3026, -834.7897f, 165.549f, 67.767f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_3026, 326.1774f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3026);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3210))
				{
					iLocal_3210 = PED::CREATE_PED(26, joaat("ig_jimmydisanto"), 723.9294f, -1087.5f, 21.1693f, 96.2191f, 1, 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3210, "FAMILY_1_BOAT_PEDS", 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_3210, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3210, 1862763509);
					GlobalFunc_173(&uLocal_3324, 2, iLocal_3210, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_3210))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3210);
					PED::SET_PED_INTO_VEHICLE(iLocal_3210, iLocal_3026, 0);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_3026, 1);
			}
			iLocal_5900 = 11;
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 12:
			STREAMING::LOAD_SCENE(-655.7689f, -563.6648f, 34.35794f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			break;
	}
}

void func_765(var uParam0, int iParam1, char* sParam2)//Position - 0x76101
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 800f);
		*(uParam0[799 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

void func_766()//Position - 0x76165
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2411, Local_2414, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2405, Local_2408, 1);
}




void func_770(bool bParam0, struct<3> Param1, float fParam4)//Position - 0x7628C
{
	if (bParam0)
	{
		GlobalFunc_5196(Param1, fParam4, 1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam4);
	}
}



int func_773(int iParam0, bool bParam1)//Position - 0x76381
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
		func_776(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_718(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_239(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_776(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x76539
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
				GlobalFunc_11318(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_720(*uParam0, bParam6);
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



void func_779()//Position - 0x76627
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (GlobalFunc_8315() == 0)
	{
		bLocal_5928 = true;
	}
	else
	{
		bLocal_5928 = false;
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		iLocal_5920 = -1;
		iLocal_5900 = 1;
	}
	switch (iLocal_5920)
	{
		case 0:
			if (GlobalFunc_237(GlobalFunc_8315()) == 0)
			{
				if (!Global_86864.f_357)
				{
					STREAMING::REQUEST_ANIM_DICT("MISSFAM2MCS_intp1");
					STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_l"));
					STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_r"));
					iLocal_5920 = 1;
				}
				else
				{
					iLocal_5920 = 4;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				iLocal_5920 = 100;
			}
			break;
		
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM2MCS_intp1"))
			{
				iLocal_5920++;
			}
			break;
		
		case 2:
			PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 1f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 1, 0, 1);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, -1f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 1, 0, 1);
			}
			ENTITY::CREATE_MODEL_HIDE(-816.72f, 179.1f, 72.83f, 1f, joaat("v_ilev_mm_doorm_l"), 1);
			ENTITY::CREATE_MODEL_HIDE(-816.11f, 177.51f, 72.83f, 1f, joaat("v_ilev_mm_doorm_r"), 1);
			uLocal_5922 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			uLocal_5921 = PED::CREATE_SYNCHRONIZED_SCENE(-817.311f, 179.33f, 71.241f, 0f, 0f, -113f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_5921, "MISSFAM2MCS_intp1", "FAM_2_INT_P1_MICHAEL", 1000f, -1000f, 0, 0, 1148846080, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_5922, iLocal_5921, "FAM_2_INT_P1_CAM", "MISSFAM2MCS_intp1");
			CAM::SET_CAM_ACTIVE(uLocal_5922, 1);
			CAM::_0x661B5C8654ADD825(uLocal_5922, 1);
			iLocal_5923 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.83f, 1, 1, 0);
			iLocal_5924 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.83f, 1, 1, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_5923, iLocal_5921, "FAM_2_INT_P1_doorL", "MISSFAM2MCS_intp1", 1000f, -1000f, 0, 1148846080);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_5924, iLocal_5921, "FAM_2_INT_P1_doorR", "MISSFAM2MCS_intp1", 1000f, -1000f, 0, 1148846080);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_5921, 1);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_5923);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_5924);
			MISC::CLEAR_AREA_OF_PROJECTILES(-816.72f, 179.1f, 72.83f, 10f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!GlobalFunc_4929(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
				{
					GlobalFunc_10063(-843.9858f, 158.6548f, 64.90799f, -777.54f, 183.1866f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 0, 0);
					GlobalFunc_8365(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
					GlobalFunc_10733(-858.9615f, 147.4493f, 61.4344f, 357.0481f, 0, 145);
				}
			}
			func_55(1, 0, 2000, 1, 1);
			func_39();
			iLocal_5920++;
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5921))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5921) >= 0.95f)
				{
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_5920++;
				}
			}
			break;
		
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_55[1]))
			{
				if (func_718(&(uLocal_55[1]), 1, -794.9062f, 176.0349f, 71.8348f, 96.2191f, 1, 0, 0))
				{
					GlobalFunc_11257(uLocal_55[1], 12, 21, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			if (GlobalFunc_10734(17, &uLocal_5906, 1, 0, 0, 0, 0) && iLocal_5929 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[1]))
				{
					iLocal_5920++;
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (!iLocal_5918)
				{
					GlobalFunc_10063(-843.9858f, 158.6548f, 64.90799f, -777.54f, 183.1866f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 1, 0);
					GlobalFunc_8365(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
					GlobalFunc_10733(-858.9615f, 147.4493f, 61.4344f, 357.0481f, 0, 145);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !Global_86864.f_357)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -813.2593f, 179.4029f, 71.1592f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 117.4587f);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0.025f, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 4, 0, 1);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0.025f, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 4, 0, 1);
					}
					if (GlobalFunc_237(GlobalFunc_8315()) == 1)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_1_int", 254, 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("family_1_int", 8);
					}
					GlobalFunc_173(&uLocal_3324, 0, 0, "TRACEY", 0, 1);
					GlobalFunc_10691(&uLocal_3324, "FAM1AUD", "FAM1_INT_LI", 9, 0, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					iLocal_5918 = 1;
				}
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_8315() == 0)
					{
						GlobalFunc_10914("Franklin", joaat("player_one"), 21);
					}
					GlobalFunc_10914("Michael", joaat("player_zero"), 34);
					iLocal_5929 = 1;
				}
			}
			break;
		
		case 5:
			if ((iLocal_5918 == 1 && iLocal_5919 == 0) && GlobalFunc_237(GlobalFunc_8315()) == 0)
			{
				GlobalFunc_2207();
				iLocal_5920++;
				iLocal_5919 = 1;
			}
			break;
		
		case 6:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_5900 = 1;
			}
			break;
		
		case 100:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if ((GlobalFunc_10734(17, &uLocal_5906, 1, 0, 0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(uLocal_55[0])) && iLocal_5929 == 1)
			{
				iLocal_5920 = 101;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (iLocal_5918)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() || SYSTEM::TIMERA() > 15000)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_10914("Michael", joaat("player_zero"), 34);
					iLocal_5929 = 1;
				}
			}
			if (!iLocal_5918)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_1_int", 254, 8);
				HUD::DISPLAY_RADAR(false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				iLocal_5918 = 1;
			}
			STREAMING::REQUEST_ANIM_DICT("missfam1leadinoutfamily_1_intp1_3");
			GlobalFunc_7215(0);
			if ((!ENTITY::DOES_ENTITY_EXIST(uLocal_55[0]) && STREAMING::HAS_ANIM_DICT_LOADED("missfam1leadinoutfamily_1_intp1_3")) && GlobalFunc_7214(0))
			{
				func_718(&(uLocal_55[0]), 0, -780.647f, 187.402f, 72.9f, 96.2191f, 1, 0, 0);
				GlobalFunc_11257(uLocal_55[0], 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_10063(-843.9858f, 158.6548f, 64.90799f, -777.54f, 183.1866f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 1, 0);
				GlobalFunc_8365(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
				GlobalFunc_10733(-858.9615f, 147.4493f, 61.4344f, 357.0481f, 0, 145);
				PED::SET_PED_PROP_INDEX(uLocal_55[0], 1, 5, 0, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_55[0], 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_55[0], "missfam1leadinoutfamily_1_intp1_3", "base", -780.647f, 187.402f, 72.9f, 0f, 0f, 109.44f, 1000f, -1000f, -1, 1033, 0, 2, 0);
				uLocal_5926 = OBJECT::CREATE_OBJECT(joaat("p_tumbler_02_s1"), ENTITY::GET_ENTITY_COORDS(uLocal_55[0], 1), 1, 1, 0);
				uLocal_5927 = OBJECT::CREATE_OBJECT(joaat("prop_cigar_02"), ENTITY::GET_ENTITY_COORDS(uLocal_55[0], 1), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_5926, uLocal_55[0], PED::GET_PED_BONE_INDEX(uLocal_55[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_5927, uLocal_55[0], PED::GET_PED_BONE_INDEX(uLocal_55[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				AUDIO::STOP_PED_SPEAKING(uLocal_55[0], 1);
			}
			break;
		
		case 101:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_55[0]))
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_55[0]))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -790.2235f, 181.3467f, 71.8353f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 320.3507f);
					func_40(0);
					GlobalFunc_9140(&uLocal_5906, 0, 0, 2000, 1, 1, 0, 1);
					iLocal_5920 = 102;
				}
			}
			break;
		
		case 102:
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_55[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_55[0]))
				{
					fLocal_5925 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_55[0], 1), 1);
				}
			}
			else
			{
				fLocal_5925 = 999.99f;
			}
			if ((fLocal_5925 > 45f || fLocal_5925 < 8.5f) || CLOCK::GET_CLOCK_HOURS() >= 16)
			{
				iLocal_5900 = 1;
			}
			break;
	}
}























































void func_834()//Position - 0x7BAD8
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3029))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3029))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3029))
			{
				fLocal_3256 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3029);
			}
		}
	}
}


void func_836()//Position - 0x7BB1D
{
	HUD::ALLOW_SONAR_BLIPS(1);
	AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
	AUDIO::STOP_AUDIO_SCENE("FAM1_RADIO_FADE");
	GlobalFunc_571(0, -1);
	GlobalFunc_52(1, 1);
	func_225(39, 0);
	GlobalFunc_8523(40, 0);
	GlobalFunc_8523(41, 0);
	GlobalFunc_8523(42, 0);
	GlobalFunc_8523(43, 0);
	GlobalFunc_4948(&uLocal_3300, 0, 0);
	MISC::_CLEAR_CLOUD_HAT();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_724(0, bLocal_2985);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::_SET_PED_CAN_PLAY_INJURED_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
	}
	func_55(0, 0, 2000, 1, 1);
	GlobalFunc_6685(0);
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	func_56(0, 1);
	GlobalFunc_860();
	AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(0);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(0);
	GlobalFunc_2224(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3026))
	{
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3026, 4, 1);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), 0);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	MISC::SET_TIME_SCALE(1f);
	VEHICLE::DELETE_VEHICLE(&iLocal_53);
	VEHICLE::DELETE_VEHICLE(&iLocal_54);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3029);
		VEHICLE::DELETE_VEHICLE(&iLocal_3030);
		OBJECT::DELETE_OBJECT(&uLocal_3211);
		PED::DELETE_PED(&iLocal_3206);
		PED::DELETE_PED(&iLocal_3207);
		PED::DELETE_PED(&iLocal_3208);
		PED::DELETE_PED(&iLocal_3209);
		PED::DELETE_PED(&(uLocal_55[1]));
		PED::DELETE_PED(&iLocal_3210);
	}
}




