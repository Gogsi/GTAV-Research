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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	int iLocal_35 = 0;
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<3> Local_84 = { 0, 0, 0 } ;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<61> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_152 = 16;
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
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	struct<10> Local_321[3];
	struct<29> Local_352[5];
	struct<54> Local_498[2];
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	bool bLocal_610 = 0;
	int iLocal_611 = 0;
	bool bLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	bool bLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	bool bLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	bool bLocal_629 = 0;
	int iLocal_630 = 0;
	bool bLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	bool bLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	bool bLocal_638 = 0;
	int iLocal_639 = 0;
	bool bLocal_640 = 0;
	bool bLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	bool bLocal_644 = 0;
	int iLocal_645[3] = { 0, 0, 0 };
	int iLocal_649[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_658[23] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_682[3] = { 0, 0, 0 };
	int iLocal_686[2] = { 0, 0 };
	float fLocal_689 = 0f;
	float fLocal_690 = 0f;
	float fLocal_691 = 0f;
	float fLocal_692 = 0f;
	float fLocal_693 = 0f;
	float fLocal_694 = 0f;
	float fLocal_695 = 0f;
	float fLocal_696 = 0f;
	float fLocal_697 = 0f;
	float fLocal_698 = 0f;
	float fLocal_699 = 0f;
	float fLocal_700 = 0f;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	var uLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	char* sLocal_737 = NULL;
	char[] cLocal_738[8] = 0;
	char* sLocal_739 = NULL;
	char* sLocal_740 = NULL;
	struct<3> Local_741 = { 0, 0, 0 } ;
	struct<3> Local_744 = { 0, 0, 0 } ;
	struct<3> Local_747 = { 0, 0, 0 } ;
	struct<3> Local_750 = { 0, 0, 0 } ;
	struct<3> Local_753 = { 0, 0, 0 } ;
	struct<3> Local_756 = { 0, 0, 0 } ;
	struct<3> Local_759 = { 0, 0, 0 } ;
	struct<3> Local_762 = { 0, 0, 0 } ;
	struct<3> Local_765 = { 0, 0, 0 } ;
	struct<3> Local_768 = { 0, 0, 0 } ;
	struct<3> Local_771 = { 0, 0, 0 } ;
	struct<3> Local_774 = { 0, 0, 0 } ;
	struct<3> Local_777 = { 0, 0, 0 } ;
	struct<3> Local_780 = { 0, 0, 0 } ;
	struct<3> Local_783 = { 0, 0, 0 } ;
	float fLocal_786 = 0f;
	struct<3> Local_787 = { 0, 0, 0 } ;
	struct<3> Local_790 = { 0, 0, 0 } ;
	struct<3> Local_793 = { 0, 0, 0 } ;
	struct<3> Local_796 = { 0, 0, 0 } ;
	struct<3> Local_799 = { 0, 0, 0 } ;
	struct<3> Local_802 = { 0, 0, 0 } ;
	float fLocal_805 = 0f;
	struct<3> Local_806 = { 0, 0, 0 } ;
	struct<3> Local_809 = { 0, 0, 0 } ;
	float fLocal_812 = 0f;
	struct<3> Local_813 = { 0, 0, 0 } ;
	struct<3> Local_816 = { 0, 0, 0 } ;
	struct<3> Local_819 = { 0, 0, 0 } ;
	struct<3> Local_822 = { 0, 0, 0 } ;
	struct<3> Local_825 = { 0, 0, 0 } ;
	struct<3> Local_828 = { 0, 0, 0 } ;
	struct<3> Local_831 = { 0, 0, 0 } ;
	struct<3> Local_834 = { 0, 0, 0 } ;
	struct<3> Local_837 = { 0, 0, 0 } ;
	struct<3> Local_840 = { 0, 0, 0 } ;
	struct<3> Local_843 = { 0, 0, 0 } ;
	struct<3> Local_846 = { 0, 0, 0 } ;
	struct<3> Local_849 = { 0, 0, 0 } ;
	struct<3> Local_852 = { 0, 0, 0 } ;
	struct<3> Local_855 = { 0, 0, 0 } ;
	struct<3> Local_858 = { 0, 0, 0 } ;
	struct<3> Local_861 = { 0, 0, 0 } ;
	struct<3> Local_864 = { 0, 0, 0 } ;
	struct<3> Local_867 = { 0, 0, 0 } ;
	struct<3> Local_870 = { 0, 0, 0 } ;
	struct<3> Local_873 = { 0, 0, 0 } ;
	struct<3> Local_876 = { 0, 0, 0 } ;
	struct<3> Local_879 = { 0, 0, 0 } ;
	struct<3> Local_882 = { 0, 0, 0 } ;
	struct<3> Local_885 = { 0, 0, 0 } ;
	struct<3> Local_888 = { 0, 0, 0 } ;
	struct<3> Local_891 = { 0, 0, 0 } ;
	struct<3> Local_894 = { 0, 0, 0 } ;
	struct<3> Local_897 = { 0, 0, 0 } ;
	struct<3> Local_900 = { 0, 0, 0 } ;
	struct<3> Local_903 = { 0, 0, 0 } ;
	struct<3> Local_906 = { 0, 0, 0 } ;
	struct<3> Local_909 = { 0, 0, 0 } ;
	struct<3> Local_912 = { 0, 0, 0 } ;
	float fLocal_915 = 0f;
	struct<3> Local_916 = { 0, 0, 0 } ;
	float fLocal_919 = 0f;
	struct<3> Local_920[8];
	struct<3> Local_945[4];
	struct<3> Local_958[2];
	struct<3> Local_965 = { 0, 0, 0 } ;
	struct<3> Local_968 = { 0, 0, 0 } ;
	struct<3> Local_971 = { 0, 0, 0 } ;
	var uLocal_974[4] = { 0, 0, 0, 0 };
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	struct<6> Local_981 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	var uLocal_994 = 0;
	char* sLocal_995 = NULL;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	char[] cLocal_1001[8] = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(54);
	iLocal_80 = joaat("dune");
	uLocal_81 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle"));
	uLocal_82 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_scope_large"));
	uLocal_83 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_ar_supp_02"));
	Local_84 = { -683.8261f, 5840.81f, 16.566f };
	fLocal_689 = 196.3286f;
	fLocal_690 = 123.1702f;
	fLocal_691 = 40f;
	fLocal_692 = 0.35f;
	fLocal_693 = 0f;
	fLocal_694 = -0.81f;
	fLocal_695 = -0.05f;
	fLocal_696 = 210.0785f;
	fLocal_697 = 177.7762f;
	fLocal_698 = 215.1814f;
	fLocal_699 = 131.6226f;
	fLocal_700 = 5f;
	iLocal_718 = -1;
	iLocal_720 = -1;
	iLocal_725 = joaat("prop_satdish_l_02b");
	iLocal_726 = joaat("a_c_coyote");
	iLocal_727 = joaat("prop_binoc_01");
	iLocal_728 = joaat("emperor2");
	iLocal_729 = joaat("surfer2");
	iLocal_730 = joaat("prop_npc_phone");
	cLocal_738 = "HUNT1AU";
	sLocal_739 = "Trevor";
	sLocal_740 = "Cletus";
	Local_741 = { 1815.717f, 3906.147f, 36.2175f };
	Local_744 = { 1517.055f, 3556.881f, 34.3632f };
	Local_747 = { 1511.265f, 3564.755f, 37.7316f };
	Local_750 = { 1776.198f, 3838.099f, 33.2593f };
	Local_753 = { 1780.513f, 3831.425f, 33.1172f };
	Local_756 = { 1812.663f, 3906.694f, 35f };
	Local_759 = { 1820.272f, 3908.109f, 38f };
	Local_762 = { 1512.339f, 3563.734f, 36f };
	Local_765 = { 1504.828f, 3574.702f, 39.5f };
	Local_768 = { 1603.238f, 3558.55f, 38f };
	Local_771 = { 1618.263f, 3567.578f, 45f };
	Local_774 = { 250f, 250f, 250f };
	Local_777 = { 1816.77f, 3908.332f, 36.2176f };
	Local_780 = { 1510.638f, 3567.161f, 37.7315f };
	Local_783 = { 1586.064f, 3589.717f, 37.7952f };
	fLocal_786 = 248.7637f;
	Local_787 = { 1611.72f, 3567.255f, 41.1167f };
	Local_790 = { 1801.265f, 3921.915f, 33.0721f };
	Local_793 = { 1590.739f, 3474.293f, 30f };
	Local_796 = { 1160.576f, 3537.114f, 36f };
	Local_799 = { 1369.769f, 3518.348f, 34.6511f };
	Local_802 = { 1584.557f, 3591.816f, 37.7349f };
	fLocal_805 = 248.7637f;
	Local_806 = { 1803.326f, 3933.735f, 32.7459f };
	Local_809 = { 1805.781f, 3926.275f, 32.694f };
	fLocal_812 = 144.2076f;
	Local_813 = { -2.5f, -1.5f, 0f };
	Local_816 = { 2.5f, -2f, 0f };
	Local_819 = { 40f, 40f, 40f };
	Local_822 = { 15f, 15f, 5f };
	Local_825 = { 1809.068f, 3927.203f, 31.7835f };
	Local_828 = { 1799.535f, 3934.355f, 35.8289f };
	Local_831 = { 1802.581f, 3928.44f, 32.982f };
	Local_834 = { 1792.184f, 3926.438f, 34.1531f };
	Local_837 = { 1810.579f, 3933.262f, 31.6445f };
	Local_840 = { 1802.973f, 3935.144f, 35.7574f };
	Local_843 = { 1809.16f, 3934.669f, 34.6121f };
	Local_846 = { 1817.418f, 3936.862f, 31.3923f };
	Local_849 = { 1792.666f, 3935.511f, 33.016f };
	Local_852 = { 1513.554f, 3563.93f, 34.3215f };
	Local_855 = { 0.5f, 0.5f, 2f };
	Local_858 = { 1801.39f, 3912.112f, 32.7075f };
	Local_861 = { 1817.652f, 3915.569f, 40.5196f };
	Local_864 = { 1568.28f, 3603.795f, 34f };
	Local_867 = { 1505.412f, 3570.85f, 40.7358f };
	Local_870 = { 1576.75f, 3622.003f, 34f };
	Local_873 = { 1612.098f, 3560.586f, 40.4248f };
	Local_876 = { 1801.159f, 3919.606f, 33.0662f };
	Local_879 = { 1803.603f, 3920.191f, 32.9855f };
	Local_882 = { 1798.416f, 3918.291f, 35.0579f };
	Local_885 = { 1815.837f, 3905.28f, 36.2176f };
	Local_888 = { 1818.078f, 3906.818f, 36.2176f };
	Local_891 = { 1813.283f, 3904.596f, 38.2176f };
	Local_894 = { 1797.286f, 3927.359f, 33.0176f };
	Local_897 = { 1793.765f, 3926.749f, 35.1276f };
	Local_900 = { 1799.73f, 3927.815f, 32.9875f };
	Local_903 = { 1509.606f, 3568.548f, 34.4349f };
	Local_906 = { 1583.484f, 3594.088f, 37.7349f };
	Local_909 = { 1590.553f, 3582.174f, 40.8244f };
	Local_912 = { 1609.729f, 3564.407f, 41.1167f };
	fLocal_915 = 294.7606f;
	Local_916 = { 1611.418f, 3565.47f, 41.1167f };
	fLocal_919 = 118.7707f;
	Local_965 = { 1591.344f, 3581.778f, 40.96f };
	Local_968 = { 1585.109f, 3591.698f, 37.7349f };
	Local_971 = { 1591.291f, 3596.762f, 34.691f };
	StringCopy(&Local_981, "HUNT1_BANTER_1", 24);
	Local_91 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_91);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_497();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_485(&Local_91))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_91, 0, 1);
		Global_68490 = 0;
	}
	iLocal_733 = Local_91.f_28[0];
	iLocal_979 = Local_91.f_35[0];
	GlobalFunc_5226(25);
	func_482();
	GlobalFunc_173(&uLocal_152, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	GlobalFunc_173(&uLocal_152, 3, iLocal_733, "CLETUS", 0, 1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_TP", 0);
		func_464(Local_91.f_9, 0, 0, 0, 0, 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
		func_425();
		func_424();
		if (!iLocal_616)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		switch (iLocal_317)
		{
			case 0:
				func_415();
				break;
			
			case 1:
				func_414();
				break;
			
			case 2:
				func_386();
				break;
			
			case 3:
				func_385();
				break;
			
			case 4:
				func_384();
				break;
			
			case 5:
				func_379();
				break;
			
			case 6:
				func_372();
				break;
			
			case 7:
				func_370();
				break;
			
			case 8:
				func_369();
				break;
			
			case 9:
				func_366();
				break;
			
			case 10:
				func_364();
				break;
			
			case 11:
				func_362();
				break;
			
			case 12:
				func_357();
				break;
			
			case 13:
				func_352();
				break;
			
			case 14:
				func_336();
				break;
			
			case 15:
				func_333();
				break;
			
			case 16:
				func_323();
				break;
			
			case 17:
				func_287();
				break;
			
			case 18:
				func_217();
				break;
			
			case 19:
				func_214();
				break;
			
			case 20:
				func_9();
				break;
			
			case 21:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x836
{
	switch (iLocal_320)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_7();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_737))
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sLocal_737, 1);
			}
			iLocal_320 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				GlobalFunc_4935();
				func_497();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			break;
	}
}






void func_7()//Position - 0x97D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_146(&(Local_321[iVar0 /*10*/].f_9));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_146(&(Local_352[iVar0 /*29*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			GlobalFunc_146(&(Local_498[iVar0 /*54*/][iVar1 /*17*/]));
			iVar1++;
		}
		iVar0++;
	}
}


void func_9()//Position - 0xA20
{
	if (!GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_9621(54, 2, 1);
	}
	GlobalFunc_4967(0, -1, 1);
	func_207();
	GlobalFunc_4935();
	func_10(178, 1);
	func_497();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_10(int iParam0, bool bParam1)//Position - 0xA56
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
	GlobalFunc_11311();
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





































































































































































































void func_207()//Position - 0x252F5
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}







void func_214()//Position - 0x256D1
{
	switch (iLocal_320)
	{
		case 0:
			GlobalFunc_4967(0, -1, 1);
			if (!bLocal_631)
			{
				func_216();
			}
			iLocal_320 = 1;
			break;
		
		case 1:
			if (iLocal_658[21])
			{
				if (!GlobalFunc_111())
				{
					iLocal_317 = 20;
				}
			}
			break;
	}
}


void func_216()//Position - 0x25742
{
	if (iLocal_620)
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, joaat("weapon_sniperrifle"));
		WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), uLocal_722);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
	}
	bLocal_631 = true;
}

void func_217()//Position - 0x25790
{
	switch (iLocal_320)
	{
		case 0:
			func_286();
			iLocal_320 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_318 = 24;
				if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_Checkpoint5(5, "Player has finished shooting the coyote", 1, 0, 0, 1);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_912, fLocal_915, 0, 1);
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_733, -1, 0, 2);
					}
					func_220(1);
					func_218(0);
				}
				iLocal_320 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			func_207();
			iLocal_705 = 0;
			iLocal_320 = 0;
			iLocal_317 = 19;
			break;
	}
}

void func_218(bool bParam0)//Position - 0x25848
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		if (bParam0)
		{
			if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
			{
				if (!PED::IS_PED_GROUP_MEMBER(iLocal_733, GlobalFunc_468()))
				{
					TASK::CLEAR_PED_TASKS(iLocal_733);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_733, GlobalFunc_468());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_733, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_733, 0);
				}
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iLocal_733, GlobalFunc_468()))
		{
			TASK::CLEAR_PED_TASKS(iLocal_733);
			PED::REMOVE_PED_FROM_GROUP(iLocal_733);
		}
	}
}


void func_220(int iParam0)//Position - 0x258CA
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (GlobalFunc_IsPedNotInjuredOrDead(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_sniperrifle"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("weapon_sniperrifle"), -1, iParam0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iVar0, joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
		}
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, joaat("weapon_sniperrifle"));
		WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_sniperrifle"), iParam0);
	}
}


































































void func_286()//Position - 0x2AE2B
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(500);
	}
}

void func_287()//Position - 0x2AE4C
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_299();
	if (iLocal_723 < 3)
	{
		if (!bLocal_640)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_768, Local_771, 20f, 0, 1, 0))
			{
				func_298();
				if (iLocal_658[17])
				{
					if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						if (!iLocal_632)
						{
							if (iLocal_723 == 0)
							{
								func_296("HT_SHCOY");
							}
							else if (iLocal_723 == 1)
							{
								func_296("HT_2MORE");
							}
							else if (iLocal_723 == 2)
							{
								func_296("HT_1MORE");
							}
							iLocal_632 = 1;
						}
					}
				}
				else if (iLocal_723 != 0)
				{
					iLocal_318 = 1;
					func_295(6);
				}
			}
			else
			{
				GlobalFunc_4956();
				if (iLocal_632)
				{
					iLocal_632 = 0;
				}
				func_291(0, 0);
				func_296("HT_BKHTER");
				iLocal_317 = 15;
			}
		}
		else
		{
			iLocal_318 = 1;
			func_295(7);
		}
	}
	else
	{
		if (iLocal_632)
		{
			iLocal_632 = 0;
		}
		if (iLocal_658[20])
		{
			if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (!GlobalFunc_752(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_Checkpoint5(5, "Player has finished shooting the coyote", 1, 0, 0, 1);
					func_288();
					func_218(0);
					iLocal_320 = 0;
					iLocal_317 = 19;
				}
			}
		}
	}
}

void func_288()//Position - 0x2AF8B
{
	struct<3> Var0[4];
	float fVar13[4];
	int iVar18[4];
	int iVar23;
	
	Var0[0 /*3*/] = { 1815.183f, 3887.537f, 32.7844f };
	Var0[1 /*3*/] = { 1627.545f, 3578.125f, 34.148f };
	Var0[2 /*3*/] = { 1574.247f, 3667.258f, 33.3797f };
	Var0[3 /*3*/] = { 1600.847f, 3605.45f, 34.1463f };
	fVar13[0] = 114.6666f;
	fVar13[1] = 57.4417f;
	fVar13[2] = 287.0027f;
	fVar13[3] = 23.9956f;
	iVar18[0] = iLocal_728;
	iVar18[1] = iLocal_729;
	iVar18[2] = iLocal_728;
	iVar18[3] = iLocal_729;
	iVar23 = 0;
	iVar23 = 0;
	while (iVar23 < 4)
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iVar18[iVar23], Var0[iVar23 /*3*/], 1))
		{
			uLocal_974[iVar23] = VEHICLE::CREATE_VEHICLE(iVar18[iVar23], Var0[iVar23 /*3*/], fVar13[iVar23], 1, 1);
		}
		iVar23++;
	}
	if (((GlobalFunc_115(uLocal_974[0]) && GlobalFunc_115(uLocal_974[1])) && GlobalFunc_115(uLocal_974[2])) && GlobalFunc_115(uLocal_974[3]))
	{
		func_289();
	}
}

void func_289()//Position - 0x2B0CC
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_728);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_729);
}


void func_291(bool bParam0, int iParam1)//Position - 0x2B133
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_609))
	{
		iLocal_609 = GlobalFunc_4955(iLocal_733, 1, 1, 5);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_609))
	{
		if (!bParam0)
		{
			HUD::SET_BLIP_SCALE(iLocal_609, 0.75f);
		}
		HUD::SET_BLIP_FLASHES(iLocal_609, iParam1);
	}
}




void func_295(int iParam0)//Position - 0x2B1FB
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	func_7();
	GlobalFunc_146(&iLocal_609);
	GlobalFunc_146(&iLocal_608);
	switch (iParam0)
	{
		case 3:
			sLocal_737 = "HH_FAIL1";
			break;
		
		case 1:
			sLocal_737 = "HH_FAIL2";
			break;
		
		case 2:
			sLocal_737 = "HH_FAIL3";
			break;
		
		case 4:
			sLocal_737 = "HH_FAIL4";
			break;
		
		case 5:
			sLocal_737 = "HH_FAIL5";
			break;
		
		case 6:
			sLocal_737 = "HT_FAIL6";
			break;
		
		case 8:
			sLocal_737 = "HT_FAIL7";
			break;
		
		case 7:
			sLocal_737 = "HT_FAIL8";
			break;
		
		case 0:
			break;
	}
	iLocal_320 = 0;
	iLocal_317 = 21;
}

void func_296(char* sParam0)//Position - 0x2B2B6
{
	GlobalFunc_2369(sParam0, 7500, 0);
}


void func_298()//Position - 0x2B2E1
{
	if (!iLocal_621)
	{
		if (GlobalFunc_752(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_621 = 1;
		}
	}
}

void func_299()//Position - 0x2B2FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (((Local_498[iVar0 /*54*/][iVar1 /*17*/].f_3 != 1 && Local_498[iVar0 /*54*/][iVar1 /*17*/].f_3 != 0) && Local_498[iVar0 /*54*/].f_52 != 4) && Local_498[iVar0 /*54*/].f_52 != 5)
			{
				if (!GlobalFunc_IsPedNotInjuredOrDead(Local_498[iVar0 /*54*/][iVar1 /*17*/].f_6))
				{
					if (!Local_498[iVar0 /*54*/][iVar1 /*17*/].f_1)
					{
						iLocal_623 = 0;
						func_321(iVar0, iVar1);
						Local_958[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_498[iVar0 /*54*/][iVar1 /*17*/].f_6, 1) };
						iLocal_686[iVar0] = 1;
						Local_498[iVar0 /*54*/][iVar1 /*17*/].f_1 = 1;
						if (Local_498[iVar0 /*54*/][0 /*17*/].f_1 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_498[iVar0 /*54*/][1 /*17*/].f_6))
							{
								Local_498[iVar0 /*54*/][1 /*17*/].f_4 = 0;
								iLocal_714 = 1;
							}
							else if (!ENTITY::IS_ENTITY_DEAD(Local_498[iVar0 /*54*/][2 /*17*/].f_6))
							{
								Local_498[iVar0 /*54*/][2 /*17*/].f_4 = 0;
								iLocal_714 = 2;
							}
						}
						Local_498[iVar0 /*54*/].f_53 = (Local_498[iVar0 /*54*/].f_53 - 1);
						Local_498[iVar0 /*54*/].f_52 = 4;
					}
				}
				else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_498[iVar0 /*54*/][iVar1 /*17*/].f_6, 1), 2f, 0))
				{
					iLocal_623 = 0;
					iLocal_627 = 1;
					iLocal_715 = 0;
					iLocal_715 = 0;
					while (iLocal_715 < 3)
					{
						if (GlobalFunc_115(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6))
						{
							Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_14 = { ENTITY::GET_ENTITY_COORDS(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6, 1) };
							Local_498[iVar0 /*54*/].f_52 = 4;
						}
						else if (!Local_498[iVar0 /*54*/][iVar1 /*17*/].f_1)
						{
							iLocal_627 = 0;
						}
						iLocal_715++;
					}
				}
			}
			switch (Local_498[iVar0 /*54*/].f_52)
			{
				case 0:
					if (Local_498[iVar0 /*54*/].f_53 < 3)
					{
						if (Local_498[iVar0 /*54*/][iVar1 /*17*/].f_4 == 0)
						{
							func_320(iVar0, iVar1);
							Local_498[iVar0 /*54*/].f_53++;
						}
						else if (Local_498[iVar0 /*54*/][iVar1 /*17*/].f_4 == 1)
						{
							func_319(iVar0, iVar1);
							Local_498[iVar0 /*54*/].f_53++;
						}
					}
					else
					{
						Local_498[iVar0 /*54*/].f_52 = 1;
					}
					break;
				
				case 1:
					func_300(iVar0, iVar1);
					break;
				
				case 4:
					iLocal_715 = 0;
					iLocal_715 = 0;
					while (iLocal_715 < 3)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6)) && !PED::IS_PED_INJURED(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6))
						{
							Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_3 = 11;
						}
						iLocal_715++;
					}
					Local_498[iVar0 /*54*/].f_52 = 1;
					break;
				
				case 2:
					iLocal_715 = 0;
					iLocal_715 = 0;
					while (iLocal_715 < 3)
					{
						if (!Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6))
							{
								TASK::TASK_GO_TO_COORD_ANY_MEANS(Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_6, Local_958[iVar0 /*3*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2.5f), 0, 0, 786603, -1082130432);
								Local_498[iVar0 /*54*/][iLocal_715 /*17*/].f_3 = 10;
							}
						}
						iLocal_715++;
					}
					Local_498[iVar0 /*54*/].f_52 = 1;
					break;
				
				case 6:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_300(int iParam0, int iParam1)//Position - 0x2B6C5
{
	int iVar0;
	int iVar1;
	
	if (Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 != 0 && Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 != 13)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6);
		}
		func_318(iParam0, iParam1);
	}
	func_304(iParam0);
	switch (Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3)
	{
		case 0:
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000));
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 4;
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				if (MISC::GET_GAME_TIMER() > Local_498[iParam0 /*54*/][iParam1 /*17*/].f_7 && Local_498[iParam0 /*54*/][iParam1 /*17*/].f_4 == 0)
				{
					func_321(iParam0, iParam1);
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iVar0 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iVar0 /*17*/].f_6))
						{
							Local_498[iParam0 /*54*/][iVar0 /*17*/].f_3 = 5;
						}
						iVar0++;
					}
				}
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
				if (!iLocal_649[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10])
				{
					iLocal_649[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9] = 0;
					if (Local_498[iParam0 /*54*/][iParam1 /*17*/].f_4 == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_920[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10 /*3*/], 1f, -1, 0.25f, 512, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359.9f));
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iLocal_714 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iLocal_714 /*17*/].f_6))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_498[iParam0 /*54*/][iLocal_714 /*17*/].f_6, Local_498[iParam0 /*54*/][iParam1 /*17*/].f_11, 1f, -1, 1.5f, 1);
					}
					Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9 = Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10;
					iLocal_649[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9] = 1;
					Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 6;
				}
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				if (Local_498[iParam0 /*54*/][iParam1 /*17*/].f_4 == 0 && ENTITY::IS_ENTITY_AT_COORD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_920[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9 /*3*/], func_303(iParam0), 0, 0, 0))
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
						{
							TASK::CLEAR_PED_TASKS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6);
							TASK::TASK_WANDER_IN_AREA(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_920[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9 /*3*/], 7.5f, 0f, 1f);
							Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 3;
						}
						iVar1++;
					}
				}
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				TASK::CLEAR_PED_TASKS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6);
				if (iLocal_686[iParam0])
				{
					TASK::TASK_SMART_FLEE_COORD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_958[iParam0 /*3*/], 50f, -1, 0, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_498[iParam0 /*54*/][iParam1 /*17*/].f_14, 50f, -1, 0, 0);
				}
				PED::SET_PED_KEEP_TASK(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 1);
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 12;
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				if (iLocal_686[iParam0])
				{
					if (GlobalFunc_713(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_958[iParam0 /*3*/], 1) >= 45f)
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_958[iParam0 /*3*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2.5f), 0, 0, 786603, -1082130432);
						Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 10;
					}
				}
				else if (GlobalFunc_713(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_498[iParam0 /*54*/][iParam1 /*17*/].f_14, 1) >= 45f)
				{
					if (Local_498[iParam0 /*54*/][iParam1 /*17*/].f_4 == 0)
					{
						Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 5;
					}
					else
					{
						Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 8;
					}
				}
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				if (GlobalFunc_713(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_958[iParam0 /*3*/], 0) < 2f)
				{
					TASK::CLEAR_PED_TASKS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6);
					iLocal_686[iParam0] = 0;
					Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 3;
				}
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iLocal_714 /*17*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iLocal_714 /*17*/].f_6))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, Local_498[iParam0 /*54*/][iLocal_714 /*17*/].f_6, Local_498[iParam0 /*54*/][iParam1 /*17*/].f_11, 1f, -1, 1.5f, 1);
					Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 9;
				}
			}
			else
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6) && ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 13;
			}
			break;
		
		case 13:
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
				{
					if (func_301(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
					{
						iLocal_723++;
						iLocal_623 = 0;
					}
					else
					{
						bLocal_640 = true;
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6);
			}
			Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 0;
			break;
	}
}

int func_301(int iParam0)//Position - 0x2BED9
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f))
		{
			return 0;
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if ((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_sniperrifle"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_heavysniper"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_marksmanrifle"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}


Vector3 func_303(int iParam0)//Position - 0x2BFB4
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (Local_498[iParam0 /*54*/][iVar3 /*17*/].f_4 == 0)
		{
			Var0 = { 0.5f, 0.5f, 0.5f };
		}
		else
		{
			Var0 = { 1.5f, 1.5f, 1.5f };
		}
		iVar3++;
	}
	return Var0;
}

void func_304(int iParam0)//Position - 0x2C010
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	if (GlobalFunc_2506())
	{
		iVar1 = 0;
		while (iVar1 < GlobalFunc_760())
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_759(iVar1));
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (iVar0 == Local_498[iParam0 /*54*/][iVar2 /*17*/].f_6)
				{
					if (func_301(iVar0))
					{
						iVar3++;
					}
				}
				iVar2++;
			}
			iVar1++;
		}
		if (iVar3 > 1 && !iLocal_613)
		{
			GlobalFunc_553(767);
			if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_KILL", "HUNT1_KILL_1", 7, 0, 0))
			{
				iLocal_613 = 1;
			}
		}
	}
}














void func_318(int iParam0, int iParam1)//Position - 0x2C6D4
{
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_768, Local_771, 20f, 0, 1, 0) && ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6)) && !ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6)) && iLocal_632) && iLocal_723 < 3)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/]))
		{
			Local_498[iParam0 /*54*/][iParam1 /*17*/] = GlobalFunc_4955(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 1, 0, 5);
			if (HUD::DOES_BLIP_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/]))
			{
				HUD::SET_BLIP_SCALE(Local_498[iParam0 /*54*/][iParam1 /*17*/], 0.7f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 1);
			}
		}
	}
	else
	{
		GlobalFunc_146(&(Local_498[iParam0 /*54*/][iParam1 /*17*/]));
	}
}

void func_319(int iParam0, int iParam1)//Position - 0x2C7C9
{
	struct<3> Var0;
	
	if (!GlobalFunc_IsPedNotInjuredOrDead(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
	{
		if (iParam1 == 1)
		{
			Var0 = { Local_920[Local_498[iParam0 /*54*/][0 /*17*/].f_9 /*3*/] + Local_813 };
			Local_498[iParam0 /*54*/][iParam1 /*17*/].f_11 = { Local_813 };
		}
		else if (iParam1 == 2)
		{
			Var0 = { Local_920[Local_498[iParam0 /*54*/][0 /*17*/].f_9 /*3*/] + Local_816 };
			Local_498[iParam0 /*54*/][iParam1 /*17*/].f_11 = { Local_816 };
		}
		Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6 = PED::CREATE_PED(26, iLocal_726, Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359.9f), 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 100);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 1);
			Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 8;
		}
	}
}

void func_320(int iParam0, int iParam1)//Position - 0x2C8C5
{
	if (!GlobalFunc_IsPedNotInjuredOrDead(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
	{
		Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (!iLocal_649[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10])
		{
			Local_498[iParam0 /*54*/][iParam1 /*17*/].f_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359.9f);
			Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6 = PED::CREATE_PED(26, iLocal_726, Local_920[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10 /*3*/], Local_498[iParam0 /*54*/][iParam1 /*17*/].f_5, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 100);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 1);
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9 = Local_498[iParam0 /*54*/][iParam1 /*17*/].f_10;
				iLocal_649[Local_498[iParam0 /*54*/][iParam1 /*17*/].f_9] = 1;
				Local_498[iParam0 /*54*/][iParam1 /*17*/].f_3 = 3;
			}
		}
	}
}

void func_321(int iParam0, int iParam1)//Position - 0x2C9D0
{
	if (GlobalFunc_745())
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "COYOTE_BARK_MASTER", Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 0, 0, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "COYOTE_CRY_MASTER", Local_498[iParam0 /*54*/][iParam1 /*17*/].f_6, 0, 0, 0);
	}
}


void func_323()//Position - 0x2CA35
{
	switch (iLocal_320)
	{
		case 0:
			func_286();
			func_332();
			iLocal_320 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_331();
				GlobalFunc_Checkpoint5(3, "Player has finished shooting all the car tyres", 1, 0, 0, 1);
				func_329();
				func_328();
				iLocal_318 = 20;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				func_327();
				func_326();
				func_220(1);
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_802, fLocal_805, 0, 1);
					GlobalFunc_4450();
				}
				iLocal_320 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			func_324();
			func_207();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_317 = 14;
			break;
	}
}

void func_324()//Position - 0x2CAE7
{
	iLocal_623 = 0;
	iLocal_721 = 0;
	iLocal_723 = 0;
	iLocal_708 = 0;
	iLocal_724 = 0;
}


void func_326()//Position - 0x2CB1A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_645[iVar0] = 0;
		iVar0++;
	}
}

void func_327()//Position - 0x2CB3F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		iLocal_658[iVar0] = 0;
		iVar0++;
	}
}

void func_328()//Position - 0x2CB65
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_146(&(Local_352[iVar0 /*29*/]));
		Local_352[iVar0 /*29*/].f_13 = 15;
		iVar0++;
	}
}

void func_329()//Position - 0x2CB98
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_321[iVar0 /*10*/].f_9))
		{
			HUD::REMOVE_BLIP(&(Local_321[iVar0 /*10*/].f_9));
		}
		GlobalFunc_130(&(Local_321[iVar0 /*10*/]));
		iVar0++;
	}
	if (iLocal_617)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_725);
	}
}


void func_331()//Position - 0x2CC15
{
	int iVar0;
	
	Local_498[0 /*54*/][0 /*17*/].f_4 = 0;
	Local_498[0 /*54*/][1 /*17*/].f_4 = 1;
	Local_498[0 /*54*/][2 /*17*/].f_4 = 1;
	Local_498[1 /*54*/][0 /*17*/].f_4 = 0;
	Local_498[1 /*54*/][1 /*17*/].f_4 = 1;
	Local_498[1 /*54*/][2 /*17*/].f_4 = 1;
	Local_920[0 /*3*/] = { 1649.871f, 3537.377f, 35.1815f };
	Local_920[1 /*3*/] = { 1665.333f, 3530.153f, 35.4407f };
	Local_920[2 /*3*/] = { 1656.255f, 3529.328f, 35.4361f };
	Local_920[3 /*3*/] = { 1666.931f, 3520.032f, 35.4593f };
	Local_920[4 /*3*/] = { 1663.532f, 3499.703f, 35.3817f };
	Local_920[5 /*3*/] = { 1654.591f, 3509.783f, 35.1706f };
	Local_920[6 /*3*/] = { 1642.802f, 3516.568f, 35.5786f };
	Local_920[7 /*3*/] = { 1653.029f, 3510.479f, 35.3398f };
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_498[iVar0 /*54*/].f_52 = 0;
		iVar0++;
	}
}

void func_332()//Position - 0x2CD3C
{
	STREAMING::REQUEST_MODEL(iLocal_728);
	STREAMING::REQUEST_MODEL(iLocal_729);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_728) || !STREAMING::HAS_MODEL_LOADED(iLocal_729))
	{
		SYSTEM::WAIT(0);
	}
}

void func_333()//Position - 0x2CD73
{
	int iVar0;
	int iVar1;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_299();
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_768, Local_771, 20f, 0, 1, 0))
	{
		func_332();
		iLocal_317 = 17;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				func_335(Local_498[iVar0 /*54*/][iVar1 /*17*/].f_6);
				iVar1++;
			}
			iVar0++;
		}
		if (bLocal_635)
		{
			func_295(6);
		}
		if (func_334())
		{
			func_295(5);
		}
	}
}

int func_334()//Position - 0x2CE1A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_733) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_774, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_335(int iParam0)//Position - 0x2CE56
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!GlobalFunc_115(iParam0) || GlobalFunc_115(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				bLocal_635 = true;
			}
		}
	}
}

void func_336()//Position - 0x2CE8F
{
	int iVar0;
	int iVar1;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	func_337();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_906, Local_909, 3.5f, 0, 1, 0) || iLocal_658[16])
	{
		func_331();
		func_324();
		iLocal_317 = 15;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_335(Local_498[iVar0 /*54*/][iVar1 /*17*/].f_6);
			iVar1++;
		}
		iVar0++;
	}
	if (bLocal_635)
	{
		func_295(6);
	}
	if (func_334())
	{
		func_295(5);
	}
}

void func_337()//Position - 0x2CF3E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_352[iVar0 /*29*/].f_13 != 0)
		{
			func_351(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar0 /*29*/].f_28))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_762, Local_765, 10f, 0, 1, 0))
				{
					if (!bLocal_635)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
						{
							bLocal_635 = true;
							func_295(6);
						}
					}
				}
			}
		}
		switch (Local_352[iVar0 /*29*/].f_13)
		{
			case 0:
				break;
			
			case 1:
				if (iLocal_704 < 3 && iLocal_723 < 3)
				{
					Local_352[iVar0 /*29*/].f_13 = 2;
				}
				break;
			
			case 2:
				Local_352[iVar0 /*29*/].f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				if ((!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_352[Local_352[iVar0 /*29*/].f_7 /*29*/].f_16, 4.5f) && iLocal_704 < 3) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_352[iVar0 /*29*/].f_9, Local_352[iVar0 /*29*/].f_16, 1))
				{
					Local_352[iVar0 /*29*/].f_28 = VEHICLE::CREATE_VEHICLE(Local_352[iVar0 /*29*/].f_9, Local_352[iVar0 /*29*/].f_16, Local_352[iVar0 /*29*/].f_4, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar0 /*29*/].f_28) && !ENTITY::IS_ENTITY_DEAD(Local_352[iVar0 /*29*/].f_28))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_352[iVar0 /*29*/].f_28, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_352[iVar0 /*29*/].f_28, 1);
						Local_352[iVar0 /*29*/].f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						Local_352[iVar0 /*29*/].f_12 = PED::CREATE_PED_INSIDE_VEHICLE(Local_352[iVar0 /*29*/].f_28, 26, Local_352[Local_352[iVar0 /*29*/].f_7 /*29*/].f_10, -1, 1, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar0 /*29*/].f_12))
						{
							Local_352[iVar0 /*29*/].f_11 = OBJECT::CREATE_OBJECT(iLocal_730, Local_352[iVar0 /*29*/].f_16, 1, 1, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar0 /*29*/].f_11))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_352[iVar0 /*29*/].f_11, Local_352[iVar0 /*29*/].f_12, PED::GET_PED_BONE_INDEX(Local_352[iVar0 /*29*/].f_12, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								ENTITY::SET_ENTITY_VISIBLE(Local_352[iVar0 /*29*/].f_11, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_352[iVar0 /*29*/].f_12, 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_352[iVar0 /*29*/].f_12, 1);
								Local_352[iVar0 /*29*/].f_2 = 0;
								Local_352[iVar0 /*29*/].f_1 = 0;
								Local_352[iVar0 /*29*/].f_3 = 0;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_352[iVar0 /*29*/].f_12, 1);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, Local_352[iVar0 /*29*/].f_19, 8f, 0, 0, 786599, 5f, 2f);
								iLocal_704++;
								Local_352[iVar0 /*29*/].f_13 = 4;
							}
						}
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && GlobalFunc_4947(Local_352[iVar0 /*29*/].f_28))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_352[iVar0 /*29*/].f_28, Local_352[iVar0 /*29*/].f_19, 10f, 10f, 10f, 0, 0, 0))
					{
						if (!GlobalFunc_6964(Local_352[iVar0 /*29*/].f_12, -1817882002))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_352[iVar0 /*29*/].f_12, 1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, Local_352[iVar0 /*29*/].f_19, 8f, 0, 0, 786599, 5f, 2f);
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (func_301(Local_352[iVar0 /*29*/].f_28))
							{
								if (func_348(iVar0))
								{
									if (!Local_352[iVar0 /*29*/].f_1)
									{
										iLocal_723++;
										iLocal_623 = 0;
										Local_352[iVar0 /*29*/].f_1 = 1;
										func_347(iVar0);
										ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_352[iVar0 /*29*/].f_28);
										Local_352[iVar0 /*29*/].f_13 = 5;
									}
								}
								else
								{
									iLocal_623 = 0;
									func_343();
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_352[iVar0 /*29*/].f_28);
									func_342(iVar0);
								}
							}
							else
							{
								bLocal_640 = true;
								Local_352[iVar0 /*29*/].f_13 = 15;
							}
						}
						else if (!iLocal_628)
						{
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_28, 1), 5f, 1))
							{
								iLocal_628 = 1;
							}
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_352[iVar0 /*29*/].f_28, 0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, 8f, 786599);
						PED::SET_PED_KEEP_TASK(Local_352[iVar0 /*29*/].f_12, 1);
						Local_352[iVar0 /*29*/].f_13 = 15;
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 5:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && GlobalFunc_4947(Local_352[iVar0 /*29*/].f_28))
				{
					TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
					Var1 = { func_341(Local_352[iVar0 /*29*/].f_28) };
					if (!GlobalFunc_100(Var1, 0f, 0f, 0f))
					{
						TASK::TASK_VEHICLE_PARK(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, Var1, ENTITY::GET_ENTITY_HEADING(Local_352[iVar0 /*29*/].f_28), 3, 270f, 1);
					}
					else if (GlobalFunc_745())
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, 5, 2000);
					}
					else
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, 4, 2000);
					}
					GlobalFunc_4935();
					Local_352[iVar0 /*29*/].f_13 = 6;
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 6:
				if ((GlobalFunc_115(Local_352[iVar0 /*29*/].f_28) && GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED(Local_352[iVar0 /*29*/].f_28))
					{
						TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_352[iVar0 /*29*/].f_12, 1);
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) || !Local_352[iVar0 /*29*/].f_2)
						{
							TASK::TASK_LEAVE_VEHICLE(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, 1);
						}
						else
						{
							func_342(iVar0);
						}
						Local_352[iVar0 /*29*/].f_13 = 7;
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 7:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_352[iVar0 /*29*/].f_12, 0))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) || !Local_352[iVar0 /*29*/].f_2)
						{
							Local_352[iVar0 /*29*/].f_13 = 8;
						}
						else
						{
							func_342(iVar0);
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_342(iVar0);
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 8:
				if ((GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1)) && GlobalFunc_4947(Local_352[iVar0 /*29*/].f_28))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_12, 1) };
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_352[iVar0 /*29*/].f_12, 0))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) && !MISC::IS_BULLET_IN_AREA(Var4, 3f, 1))
						{
							Local_352[iVar0 /*29*/].f_25 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_352[iVar0 /*29*/].f_28, Local_352[iVar0 /*29*/].f_22) };
							Local_352[iVar0 /*29*/].f_6 = (ENTITY::GET_ENTITY_HEADING(Local_352[iVar0 /*29*/].f_28) + Local_352[iVar0 /*29*/].f_5);
							TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_352[iVar0 /*29*/].f_12, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_25, 1f, -1, 0.25f, 0, Local_352[iVar0 /*29*/].f_6);
							Local_352[iVar0 /*29*/].f_13 = 9;
						}
						else
						{
							func_342(iVar0);
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_342(iVar0);
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 9:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_12, 1) };
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) && !MISC::IS_BULLET_IN_AREA(Var4, 3f, 1))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_25, 1f, 1f, 1f, 0, 0, 1))
						{
							TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_352[iVar0 /*29*/].f_12, 1);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, 0);
							Local_352[iVar0 /*29*/].f_13 = 10;
						}
					}
					else
					{
						func_342(iVar0);
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 10:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_12, 1) };
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) && !MISC::IS_BULLET_IN_AREA(Var4, 3f, 1))
					{
						Local_352[iVar0 /*29*/].f_15 = TASK::GET_SCRIPT_TASK_STATUS(Local_352[iVar0 /*29*/].f_12, -875674219);
						if (Local_352[iVar0 /*29*/].f_15 == 7)
						{
							Local_352[iVar0 /*29*/].f_13 = 11;
						}
					}
					else
					{
						func_342(iVar0);
						Local_352[iVar0 /*29*/].f_13 = 13;
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 11:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_12, 1) };
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) && !MISC::IS_BULLET_IN_AREA(Var4, 3f, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&(Local_352[iVar0 /*29*/].f_14));
						TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "enter_call", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "idle_a_call", 8f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(Local_352[iVar0 /*29*/].f_14);
						TASK::TASK_PERFORM_SEQUENCE(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_14);
						TASK::CLEAR_SEQUENCE_TASK(&(Local_352[iVar0 /*29*/].f_14));
						Local_352[iVar0 /*29*/].f_8 = MISC::GET_GAME_TIMER() + 20000;
						Local_352[iVar0 /*29*/].f_13 = 12;
					}
					else
					{
						func_342(iVar0);
						Local_352[iVar0 /*29*/].f_13 = 13;
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 12:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_12, 1) };
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1) && !MISC::IS_BULLET_IN_AREA(Var4, 3f, 1))
					{
						if (MISC::GET_GAME_TIMER() > Local_352[iVar0 /*29*/].f_8)
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_352[iVar0 /*29*/].f_11))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_352[iVar0 /*29*/].f_11, 0);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
								func_340(iVar0);
								Local_352[iVar0 /*29*/].f_13 = 15;
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_352[iVar0 /*29*/].f_12, "ODDJOBS@HUNTER", "enter_call", 3) && !ENTITY::IS_ENTITY_VISIBLE(Local_352[iVar0 /*29*/].f_11))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_352[iVar0 /*29*/].f_11, 1);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
						func_342(iVar0);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
					func_342(iVar0);
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 14:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12) && GlobalFunc_4947(Local_352[iVar0 /*29*/].f_28))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_352[iVar0 /*29*/].f_28, Local_352[iVar0 /*29*/].f_19, 10f, 10f, 10f, 0, 0, 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (func_301(Local_352[iVar0 /*29*/].f_28))
							{
								if (func_348(iVar0))
								{
									iLocal_723++;
									iLocal_623 = 0;
									Local_352[iVar0 /*29*/].f_1 = 1;
									func_347(iVar0);
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_352[iVar0 /*29*/].f_28);
									Local_352[iVar0 /*29*/].f_13 = 5;
								}
								else
								{
									func_343();
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_352[iVar0 /*29*/].f_28);
								}
							}
							else
							{
								bLocal_640 = true;
							}
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_352[iVar0 /*29*/].f_12);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_352[iVar0 /*29*/].f_28, 0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(Local_352[iVar0 /*29*/].f_12, Local_352[iVar0 /*29*/].f_28, 8f, 786599);
						PED::SET_PED_KEEP_TASK(Local_352[iVar0 /*29*/].f_12, 1);
						Local_352[iVar0 /*29*/].f_13 = 15;
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 13:
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar0 /*29*/].f_28, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_28, 0), ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_12, 1), 0) > 100f)
					{
						Local_352[iVar0 /*29*/].f_13 = 15;
					}
				}
				else
				{
					Local_352[iVar0 /*29*/].f_13 = 15;
				}
				break;
			
			case 15:
				func_347(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar0 /*29*/].f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_352[iVar0 /*29*/].f_12))
					{
						PED::SET_PED_KEEP_TASK(Local_352[iVar0 /*29*/].f_12, 1);
					}
					GlobalFunc_2297(&(Local_352[iVar0 /*29*/].f_12), 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar0 /*29*/].f_28))
				{
					GlobalFunc_131(&(Local_352[iVar0 /*29*/].f_28));
				}
				Local_352[iVar0 /*29*/].f_13 = 1;
				break;
		}
		if (GlobalFunc_4947(Local_352[iVar0 /*29*/].f_28) && GlobalFunc_IsPedNotInjuredOrDead(Local_352[iVar0 /*29*/].f_12))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_799, ENTITY::GET_ENTITY_COORDS(Local_352[iVar0 /*29*/].f_28, 1), 1) > 450f)
			{
				Local_352[iVar0 /*29*/].f_13 = 15;
			}
		}
		iVar0++;
	}
}



void func_340(int iParam0)//Position - 0x2DEAC
{
	int iVar0;
	
	iVar0 = Local_352[iParam0 /*29*/].f_12;
	if (GlobalFunc_IsPedNotInjuredOrDead(iVar0))
	{
		if (GlobalFunc_4947(Local_352[iParam0 /*29*/].f_28))
		{
			TASK::CLEAR_PED_TASKS(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			TASK::OPEN_SEQUENCE_TASK(&(Local_352[iParam0 /*29*/].f_14));
			TASK::TASK_ENTER_VEHICLE(0, Local_352[iParam0 /*29*/].f_28, 60000, -1, 1f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_352[iParam0 /*29*/].f_28, 60f, 786468);
			TASK::CLOSE_SEQUENCE_TASK(Local_352[iParam0 /*29*/].f_14);
			TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_352[iParam0 /*29*/].f_14);
			PED::SET_PED_KEEP_TASK(iVar0, 1);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_352[iParam0 /*29*/].f_14));
		}
		Local_352[iParam0 /*29*/].f_2 = 1;
	}
}

Vector3 func_341(int iParam0)//Position - 0x2DF59
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (GlobalFunc_4947(iParam0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 5f, 25f, 0f) };
		if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var3, 1, 1077936128, 0))
		{
			if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var3, 0, &Var3))
			{
				if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var3, 2f) && !OBJECT::IS_ANY_OBJECT_NEAR_POINT(Var3, 2f, 0))
				{
					return Var3;
				}
			}
		}
	}
	return 0f, 0f, 0f;
}

void func_342(int iParam0)//Position - 0x2DFC4
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_352[iParam0 /*29*/].f_12))
	{
		TASK::CLEAR_PED_TASKS(Local_352[iParam0 /*29*/].f_12);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_352[iParam0 /*29*/].f_12, 1);
		if (GlobalFunc_4947(Local_352[iParam0 /*29*/].f_28))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_352[iParam0 /*29*/].f_12, Local_352[iParam0 /*29*/].f_28, 0))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_352[iParam0 /*29*/].f_12, Local_352[iParam0 /*29*/].f_28, Local_352[iParam0 /*29*/].f_19, 80f, 1, 0, 786469, 5f, 2f);
				Local_352[iParam0 /*29*/].f_13 = 14;
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(Local_352[iParam0 /*29*/].f_12, Local_747, 10000f, -1, 0, 0);
				Local_352[iParam0 /*29*/].f_13 = 13;
			}
		}
		Local_352[iParam0 /*29*/].f_2 = 1;
		PED::SET_PED_KEEP_TASK(Local_352[iParam0 /*29*/].f_12, 1);
	}
	else
	{
		Local_352[iParam0 /*29*/].f_13 = 15;
	}
}

void func_343()//Position - 0x2E0A8
{
	if (!iLocal_624)
	{
		if (GlobalFunc_745())
		{
			iLocal_703 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_624 = 1;
		}
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_703)
	{
		if (func_345() && !GlobalFunc_111())
		{
			if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_CARH", 7, 0, 0, 0))
			{
				iLocal_624 = 0;
			}
		}
		iLocal_624 = 0;
	}
}


int func_345()//Position - 0x2E154
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_733, 1) };
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_733, 0) <= 10f && MISC::ABSF((Var0.f_2 - Var3.f_2)) < 1.5f)
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_347(int iParam0)//Position - 0x2E218
{
	GlobalFunc_146(&(Local_352[iParam0 /*29*/]));
	if (!ENTITY::IS_ENTITY_DEAD(Local_352[iParam0 /*29*/].f_28))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_352[iParam0 /*29*/].f_28, 0);
	}
	if (!Local_352[iParam0 /*29*/].f_3)
	{
		iLocal_704 = (iLocal_704 - 1);
		Local_352[iParam0 /*29*/].f_3 = 1;
	}
}

int func_348(int iParam0)//Position - 0x2E269
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_352[iParam0 /*29*/].f_28) && !ENTITY::IS_ENTITY_DEAD(Local_352[iParam0 /*29*/].f_28))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_352[iParam0 /*29*/].f_28, 1, 0))
		{
			Local_352[iParam0 /*29*/].f_22 = { 2.5f, 3f, 0f };
			Local_352[iParam0 /*29*/].f_5 = 90f;
			return 1;
		}
		else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_352[iParam0 /*29*/].f_28, 5, 0))
		{
			Local_352[iParam0 /*29*/].f_22 = { 2.5f, -3f, 0f };
			Local_352[iParam0 /*29*/].f_5 = 90f;
			return 1;
		}
		else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_352[iParam0 /*29*/].f_28, 4, 0))
		{
			Local_352[iParam0 /*29*/].f_22 = { -2.5f, -3f, 0f };
			Local_352[iParam0 /*29*/].f_5 = -90f;
			return 1;
		}
		else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_352[iParam0 /*29*/].f_28, 0, 0))
		{
			Local_352[iParam0 /*29*/].f_22 = { -2.5f, 3f, 0f };
			Local_352[iParam0 /*29*/].f_5 = -90f;
			return 1;
		}
	}
	return 0;
}



void func_351(int iParam0)//Position - 0x2E3DB
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_352[iParam0 /*29*/].f_12))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_352[iParam0 /*29*/].f_12) || !ENTITY::IS_ENTITY_DEAD(Local_352[iParam0 /*29*/].f_12))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iParam0 /*29*/].f_12, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_342(iParam0);
			}
		}
	}
}

void func_352()//Position - 0x2E432
{
	float fVar0;
	int iVar1;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_337();
	func_356();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_762, Local_765, 10f, 0, 1, 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_298();
			if (!iLocal_614)
			{
				if (!GlobalFunc_111())
				{
					func_296("HT_SHTYRE");
					iLocal_614 = 1;
				}
			}
			if (!bLocal_640)
			{
				if (iLocal_723 >= 3)
				{
					func_328();
					if (iLocal_658[14])
					{
						fVar0 = (300f / SYSTEM::TO_FLOAT(iLocal_721));
						iVar1 = SYSTEM::CEIL(fVar0);
						GlobalFunc_565(768, iVar1, 1);
						GlobalFunc_Checkpoint5(3, "Player has finished shooting all the car tyres", 1, 0, 0, 1);
						func_354();
						iLocal_614 = 0;
						iLocal_317 = 14;
					}
				}
			}
			else
			{
				iLocal_318 = 1;
				func_295(6);
			}
		}
	}
	else
	{
		func_353();
		func_7();
		func_291(1, 0);
		func_296("HT_BKHTER");
		iLocal_317 = 11;
	}
}

void func_353()//Position - 0x2E511
{
	if (iLocal_634)
	{
		iLocal_634 = 0;
	}
	if (iLocal_633)
	{
		iLocal_633 = 0;
	}
}

void func_354()//Position - 0x2E52D
{
	if (bLocal_638)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[0 /*29*/].f_9);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[1 /*29*/].f_9);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[2 /*29*/].f_9);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[3 /*29*/].f_9);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[4 /*29*/].f_9);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[0 /*29*/].f_10);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[1 /*29*/].f_10);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[2 /*29*/].f_10);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[3 /*29*/].f_10);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_352[4 /*29*/].f_10);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_730);
		bLocal_638 = false;
	}
}


void func_356()//Position - 0x2E668
{
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_721++;
	}
}

void func_357()//Position - 0x2E683
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_320)
	{
		case 0:
			func_286();
			iLocal_320 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_Checkpoint5(2, "Player has finished shooting all the satellite dishes", 0, 0, 0, 1);
				iLocal_318 = 13;
				MISC::CLEAR_AREA_OF_VEHICLES(Local_799, 50f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_793, 50f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_796, 50f, 0, 0, 0, 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				func_353();
				func_327();
				func_326();
				func_329();
				GlobalFunc_146(&iLocal_608);
				func_220(1);
				iLocal_704 = 0;
				if (!bLocal_638)
				{
					func_359();
				}
				func_358();
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_747, fLocal_690, 0, 1);
					GlobalFunc_4450();
				}
				iLocal_320 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			func_324();
			func_207();
			if (iLocal_658[11])
			{
				iLocal_317 = 13;
			}
			break;
	}
}

void func_358()//Position - 0x2E785
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_352[iVar0 /*29*/].f_13 = 1;
		iVar0++;
	}
}

void func_359()//Position - 0x2E7AC
{
	func_360();
	STREAMING::REQUEST_MODEL(Local_352[0 /*29*/].f_9);
	STREAMING::REQUEST_MODEL(Local_352[1 /*29*/].f_9);
	STREAMING::REQUEST_MODEL(Local_352[2 /*29*/].f_9);
	STREAMING::REQUEST_MODEL(Local_352[3 /*29*/].f_9);
	STREAMING::REQUEST_MODEL(Local_352[4 /*29*/].f_9);
	STREAMING::REQUEST_MODEL(Local_352[0 /*29*/].f_10);
	STREAMING::REQUEST_MODEL(Local_352[1 /*29*/].f_10);
	STREAMING::REQUEST_MODEL(Local_352[2 /*29*/].f_10);
	STREAMING::REQUEST_MODEL(Local_352[3 /*29*/].f_10);
	STREAMING::REQUEST_MODEL(Local_352[4 /*29*/].f_10);
	STREAMING::REQUEST_MODEL(iLocal_730);
	while ((((((((((!STREAMING::HAS_MODEL_LOADED(Local_352[0 /*29*/].f_9) || !STREAMING::HAS_MODEL_LOADED(Local_352[1 /*29*/].f_9)) || !STREAMING::HAS_MODEL_LOADED(Local_352[2 /*29*/].f_9)) || !STREAMING::HAS_MODEL_LOADED(Local_352[3 /*29*/].f_9)) || !STREAMING::HAS_MODEL_LOADED(Local_352[4 /*29*/].f_9)) || !STREAMING::HAS_MODEL_LOADED(Local_352[0 /*29*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_352[1 /*29*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_352[2 /*29*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_352[3 /*29*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_352[4 /*29*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(iLocal_730))
	{
		SYSTEM::WAIT(0);
	}
	bLocal_638 = true;
}

void func_360()//Position - 0x2E90C
{
	Local_352[0 /*29*/] = { func_361(joaat("habanero"), 1155.058f, 3533.135f, 33.9186f, 34.9236f, joaat("a_m_y_hippy_01"), Local_793) };
	Local_352[1 /*29*/] = { func_361(joaat("dubsta"), 1655.803f, 3492.451f, 35.5714f, 105.5303f, joaat("a_m_m_salton_01"), Local_796) };
	Local_352[2 /*29*/] = { func_361(joaat("patriot"), 1516.076f, 3376.604f, 36.6333f, 359.8644f, joaat("a_m_m_hillbilly_01"), Local_796) };
	Local_352[3 /*29*/] = { func_361(joaat("rebel"), 1140.058f, 3533.135f, 33.9186f, 269f, joaat("a_m_m_salton_01"), Local_793) };
	Local_352[4 /*29*/] = { func_361(joaat("sadler"), 1508.076f, 3372.604f, 36.6333f, 359.8644f, joaat("a_m_y_hippy_01"), Local_796) };
}

struct<29> func_361(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6)//Position - 0x2EA04
{
	struct<29> Var0;
	
	Var0.f_9 = iParam0;
	Var0.f_16 = { Param1 };
	Var0.f_4 = fParam4;
	Var0.f_10 = iParam5;
	Var0.f_19 = { Param6 };
	return Var0;
}

void func_362()//Position - 0x2EA37
{
	int iVar0;
	
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	func_337();
	if (!bLocal_635)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_762, Local_765, 10f, 0, 1, 0))
		{
			if (iLocal_658[11])
			{
				if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					GlobalFunc_146(&iLocal_609);
					func_353();
					iLocal_614 = 1;
					func_296("HT_SHTYRE");
					iLocal_317 = 13;
				}
			}
		}
		else if (func_334())
		{
			func_295(5);
		}
		else
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_335(Local_352[iVar0 /*29*/].f_28);
				iVar0++;
			}
			func_363();
			if (bLocal_629)
			{
				if (!iLocal_682[2])
				{
					GlobalFunc_4956();
					func_291(1, 0);
					func_296("HT_BKHTER");
					iLocal_682[2] = 1;
				}
			}
			else if (iLocal_682[2])
			{
				GlobalFunc_146(&iLocal_609);
				iLocal_682[2] = 0;
			}
		}
	}
}

void func_363()//Position - 0x2EB52
{
	if (!PED::IS_PED_INJURED(iLocal_733) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_629)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_819, 0, 1, 0) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
			{
				if (!PED::IS_PED_FALLING(iLocal_733))
				{
					bLocal_629 = true;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_822, 0, 1, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				bLocal_629 = false;
			}
		}
	}
}

void func_364()//Position - 0x2EBFC
{
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	func_363();
	if (!bLocal_629)
	{
		GlobalFunc_146(&iLocal_609);
		iLocal_608 = GlobalFunc_2324(Local_744, 5, 1);
		func_296("HT_NXTLOC");
		iLocal_317 = 9;
	}
	if (func_334())
	{
		func_295(5);
	}
}


void func_366()//Position - 0x2EC8C
{
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	func_363();
	if (!bLocal_638)
	{
		func_359();
	}
	if (!iLocal_639)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_744, 50f, 50f, 50f, 0, 1, 0))
		{
			func_368();
			iLocal_639 = 1;
		}
	}
	else
	{
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	}
	if (!bLocal_629)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_744, 5f, 5f, 5f, 0, 1, 0) && GlobalFunc_3020(1077936128, 1))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_793, Local_796, 0, 1);
			GlobalFunc_146(&iLocal_608);
			func_358();
			GlobalFunc_4935();
			func_324();
			iLocal_318 = 12;
			iLocal_317 = 11;
		}
	}
	else if (!bLocal_644)
	{
		GlobalFunc_4956();
		GlobalFunc_146(&iLocal_608);
		func_291(0, 0);
		func_296("HT_BKHTER");
		iLocal_317 = 10;
	}
}


void func_368()//Position - 0x2EE02
{
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_870, Local_873, 0, 1, 1, 1);
	PED::SET_PED_NON_CREATION_AREA(Local_870, Local_873);
	MISC::CLEAR_AREA_OF_PEDS(Local_903, 5f, 0);
}

void func_369()//Position - 0x2EE36
{
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	if (iLocal_658[3])
	{
		if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
		{
			GlobalFunc_Checkpoint5(2, "Player has finished shooting all the satellite dishes", 0, 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_979))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_979, 1);
			}
			if (iLocal_721 <= 3)
			{
				GlobalFunc_565(769, 3, 1);
			}
			iLocal_608 = GlobalFunc_2324(Local_744, 5, 1);
			func_296("HT_NXTLOC");
			iLocal_682[1] = 1;
			iLocal_317 = 9;
		}
	}
}

void func_370()//Position - 0x2EEC6
{
	int iVar0;
	
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 1, 1, 0))
	{
		if (iLocal_658[1])
		{
			iLocal_636 = 0;
			if (GlobalFunc_663("HT_BKHTER", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_317 = 6;
		}
	}
	else
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_335(Local_321[iVar0 /*10*/]);
			iVar0++;
		}
		if (bLocal_635)
		{
			func_295(6);
		}
		if (func_334())
		{
			func_295(5);
		}
	}
}


void func_372()//Position - 0x2EF79
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 0, 1, 0))
	{
		func_298();
		func_377();
		func_356();
		if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
		{
			if (!iLocal_636)
			{
				GlobalFunc_146(&iLocal_609);
				func_373();
				func_296("HT_SHDISH");
				iLocal_636 = 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && (ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_777, 2f, 2f, 2f, 0, 1, 0) || iLocal_723 >= 3))
		{
			if (!bLocal_640)
			{
				if (iLocal_723 >= 3)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_777, 2f, 2f, 2f, 0, 1, 0))
					{
						func_218(1);
					}
					iLocal_317 = 8;
				}
			}
			else
			{
				iLocal_318 = 1;
				func_295(7);
			}
		}
	}
	else
	{
		func_353();
		GlobalFunc_4935();
		func_7();
		func_291(1, 0);
		func_296("HT_BKHTER");
		iLocal_317 = 7;
	}
}

void func_373()//Position - 0x2F081
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_321[iVar0 /*10*/].f_9))
		{
			if (GlobalFunc_115(Local_321[iVar0 /*10*/]))
			{
				if (!Local_321[iVar0 /*10*/].f_7)
				{
					Local_321[iVar0 /*10*/].f_9 = func_374(Local_321[iVar0 /*10*/]);
					HUD::SET_BLIP_COLOUR(Local_321[iVar0 /*10*/].f_9, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_374(int iParam0)//Position - 0x2F0EC
{
	return func_375(iParam0, 1, 0);
}

int func_375(int iParam0, int iParam1, bool bParam2)//Position - 0x2F0FC
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}


void func_377()//Position - 0x2F1B7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_378(iVar0);
		if (Local_321[iVar0 /*10*/].f_7 == 1)
		{
			if (!Local_321[iVar0 /*10*/].f_8)
			{
				if (func_301(Local_321[iVar0 /*10*/]))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_321[iVar0 /*10*/]);
					iLocal_723++;
				}
				else
				{
					bLocal_640 = true;
				}
				Local_321[iVar0 /*10*/].f_8 = 1;
			}
		}
		iVar0++;
	}
}

void func_378(int iParam0)//Position - 0x2F226
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[iParam0 /*10*/]) && !Local_321[iParam0 /*10*/].f_7)
	{
		Local_321[iParam0 /*10*/].f_5 = ENTITY::GET_ENTITY_HEALTH(Local_321[iParam0 /*10*/]);
		if (Local_321[iParam0 /*10*/].f_5 < 100)
		{
			GlobalFunc_4935();
			Local_321[iParam0 /*10*/].f_7 = 1;
			iLocal_623 = 0;
			GlobalFunc_146(&(Local_321[iParam0 /*10*/].f_9));
			OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(Local_321[iParam0 /*10*/], 1, 0);
		}
	}
}

void func_379()//Position - 0x2F299
{
	switch (iLocal_320)
	{
		case 0:
			func_286();
			iLocal_320 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_318 = 5;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_741, fLocal_689, 0, 1);
				}
				GlobalFunc_146(&iLocal_608);
				func_220(1);
				GlobalFunc_Checkpoint5(1, "Player has reached the satellite dishes", 0, 0, 0, 1);
				if (func_381())
				{
					GlobalFunc_4450();
					func_380();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_320 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			func_324();
			func_207();
			iLocal_636 = 0;
			iLocal_317 = 6;
			break;
	}
}

void func_380()//Position - 0x2F347
{
	MISC::CLEAR_AREA_OF_PEDS(Local_876, 3f, 0);
	PED::SET_PED_NON_CREATION_AREA(Local_879, Local_882);
	MISC::CLEAR_AREA_OF_PEDS(Local_885, 3f, 0);
	PED::SET_PED_NON_CREATION_AREA(Local_888, Local_891);
	MISC::CLEAR_AREA_OF_PEDS(Local_894, 3f, 0);
	PED::SET_PED_NON_CREATION_AREA(Local_897, Local_900);
}

int func_381()//Position - 0x2F39A
{
	int iVar0;
	
	if (!iLocal_617)
	{
		func_383();
	}
	else
	{
		Local_321[0 /*10*/].f_1 = { 1880.93f, 3882.242f, 32.0116f };
		Local_321[0 /*10*/].f_4 = 278.1801f;
		Local_321[0 /*10*/].f_6 = 250f;
		Local_321[1 /*10*/].f_1 = { 1859.055f, 3858.95f, 38.9254f };
		Local_321[1 /*10*/].f_4 = 277.6478f;
		Local_321[1 /*10*/].f_6 = 219.687f;
		Local_321[2 /*10*/].f_1 = { 1818.4f, 3856.1f, 37.3883f };
		Local_321[2 /*10*/].f_4 = 34.015f;
		Local_321[2 /*10*/].f_6 = 179.0284f;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Local_321[iVar0 /*10*/].f_1, 2f, 0);
			Local_321[iVar0 /*10*/] = OBJECT::CREATE_OBJECT(iLocal_725, Local_321[iVar0 /*10*/].f_1, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_321[iVar0 /*10*/]))
			{
				ENTITY::SET_ENTITY_HEADING(Local_321[iVar0 /*10*/], Local_321[iVar0 /*10*/].f_4);
				OBJECT::SET_OBJECT_TARGETTABLE(Local_321[iVar0 /*10*/], 0);
				ENTITY::SET_ENTITY_HEALTH(Local_321[iVar0 /*10*/], 100);
				ENTITY::SET_ENTITY_DYNAMIC(Local_321[iVar0 /*10*/], 1);
				Local_321[iVar0 /*10*/].f_7 = 0;
				Local_321[iVar0 /*10*/].f_8 = 0;
			}
			iVar0++;
		}
		if (((ENTITY::DOES_ENTITY_EXIST(Local_321[0 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(Local_321[1 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_321[2 /*10*/])) && func_382())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_725);
			iLocal_617 = 0;
			return 1;
		}
	}
	return 0;
}

int func_382()//Position - 0x2F52A
{
	iLocal_720 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[iLocal_720 /*10*/]))
	{
		if (!Local_321[iLocal_720 /*10*/].f_7)
		{
			iLocal_615 = 1;
			return 1;
		}
	}
	return 0;
}

void func_383()//Position - 0x2F561
{
	STREAMING::REQUEST_MODEL(iLocal_725);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_725))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_617 = 1;
}

void func_384()//Position - 0x2F587
{
	int iVar0;
	
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_750, fLocal_700);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_753, fLocal_700);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 1, 1, 0))
	{
		if (iLocal_658[1])
		{
			GlobalFunc_Checkpoint5(1, "Player has reached the satellite dishes", 0, 0, 0, 1);
			if (GlobalFunc_663("HT_BKHTER", 0, 0) || GlobalFunc_663("HT_FOLL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1661506222, 0f, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1661506222, 0, 1, 1);
			iLocal_317 = 6;
		}
		func_377();
		if (bLocal_640)
		{
			iLocal_318 = 1;
			func_295(7);
		}
		if (iLocal_723 >= 3)
		{
			iLocal_317 = 8;
		}
	}
	else
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_335(Local_321[iVar0 /*10*/]);
			iVar0++;
		}
		if (bLocal_635)
		{
			func_295(6);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_609))
		{
			if (!HUD::IS_BLIP_FLASHING(iLocal_609))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_819, 0, 1, 0))
				{
					GlobalFunc_4935();
					func_291(1, 0);
					func_296("HT_BKHTER");
				}
			}
			else
			{
				if (func_334())
				{
					func_295(5);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_822, 0, 1, 0))
				{
					func_291(1, 0);
					if (GlobalFunc_663("HT_BKHTER", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					func_296("HT_FOLL");
				}
			}
		}
	}
}

void func_385()//Position - 0x2F6FC
{
	switch (iLocal_320)
	{
		case 0:
			func_286();
			iLocal_320 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
					{
						OBJECT::DELETE_OBJECT(&iLocal_732);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_809, fLocal_812, 0, 1);
					GlobalFunc_4450();
				}
				func_220(1);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_806, 2f, 0, 0, 0, 0, 0);
				func_7();
				iLocal_320 = 2;
			}
			break;
		
		case 2:
			if (func_381())
			{
				GlobalFunc_4967(0, -1, 1);
				func_380();
				func_324();
				iLocal_705 = 0;
				iLocal_318 = 3;
				func_207();
				func_296("HT_FOLL");
				iLocal_320 = 0;
				iLocal_317 = 4;
			}
			break;
	}
}

void func_386()//Position - 0x2F7CB
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_320)
	{
		case 0:
			if (func_381())
			{
				GlobalFunc_9623("Cletus_MCS_1_concat", 1);
				iLocal_320 = 1;
			}
			break;
		
		case 1:
			switch (iLocal_705)
			{
				case 0:
					if (GlobalFunc_8034(1, 1093140480, 0))
					{
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_739, 0, 0, 0);
						}
						if (GlobalFunc_115(iLocal_733))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_733, sLocal_740, 0, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_740, PLAYER::PLAYER_PED_ID(), 0);
							iLocal_732 = GlobalFunc_6830(iLocal_733, joaat("weapon_sniperrifle"), 1, 0, 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_732, "Daves_Rifle", 0, 0, 0);
						}
						GlobalFunc_9161();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						SYSTEM::WAIT(0);
						CAM::STOP_GAMEPLAY_HINT(0);
						GlobalFunc_9807(Local_825, Local_828, 5f, Local_849, fLocal_699, 1, 1, 1, 0, 0);
						GlobalFunc_9807(Local_831, Local_834, 5f, Local_849, fLocal_699, 1, 1, 1, 0, 0);
						GlobalFunc_9807(Local_837, Local_840, 5f, Local_849, fLocal_699, 1, 1, 1, 0, 0);
						GlobalFunc_9807(Local_843, Local_846, 5f, Local_849, fLocal_699, 1, 1, 1, 0, 0);
						if (GlobalFunc_115(iLocal_979))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_979, 1806.732f, 3934.353f, 33.3275f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_979, 76.1155f);
						}
						func_396(Local_806, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
						iLocal_705++;
					}
					break;
				
				case 1:
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_740, joaat("p_cletus_necklace_s")))
					{
						if (!bLocal_622)
						{
							GlobalFunc_5705(iLocal_733, Local_790, fLocal_697, 0, 1);
							iLocal_318 = 2;
							bLocal_622 = true;
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Daves_Rifle", 0))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_732, PLAYER::PLAYER_PED_ID());
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_739, 0))
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						bLocal_641 = true;
					}
					if (!bLocal_641)
					{
						GlobalFunc_4450();
					}
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1661506222, -0.8f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1661506222, 4, 1, 1);
					if (CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						RECORDING::_0x81CBAE94390F9F89();
						WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, joaat("weapon_sniperrifle"));
						iLocal_705++;
					}
					break;
				
				case 2:
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_5705(iLocal_733, Local_790, fLocal_697, 0, 1);
						iLocal_318 = 3;
					}
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_705++;
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
						if (!bLocal_622)
						{
							iLocal_318 = 2;
						}
						GlobalFunc_4923(&Local_91, 0, 0);
						func_388(1, 0, 1, 1);
						iLocal_320 = 2;
					}
					break;
			}
			break;
		
		case 3:
			func_286();
			GlobalFunc_4935();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_381())
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
					{
						if (!bLocal_622)
						{
							GlobalFunc_5705(iLocal_733, Local_790, fLocal_697, 0, 1);
							WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_733, joaat("weapon_sniperrifle"));
							TASK::CLEAR_PED_TASKS(iLocal_733);
							iLocal_318 = 2;
						}
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_4450();
					iLocal_320 = 2;
				}
			}
			break;
		
		case 2:
			func_380();
			func_291(1, 0);
			iLocal_616 = 1;
			func_207();
			func_296("HT_FOLL");
			GlobalFunc_2370(&uLocal_994);
			iLocal_317 = 4;
			break;
	}
}


void func_388(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2FB74
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
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_396(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2FE1E
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
					if (GlobalFunc_10984(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11279(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10984(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11279(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10984(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10984(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11279(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10984(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11279(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}


















void func_414()//Position - 0x30CF6
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_733, 1) > 3f)
	{
		iLocal_710 = MISC::GET_GAME_TIMER() + 2000;
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
			}
			CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_733, 0f, 0f, 0f, 1, 13000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fLocal_691);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_692);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_693);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_694);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_695);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
		}
	}
	else if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_710 || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_733, 1) <= 3f)
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_733, 1) <= 3f)
			{
			}
			iLocal_705 = 0;
			iLocal_320 = 0;
			iLocal_317 = 2;
		}
	}
}

void func_415()//Position - 0x30DCB
{
	int iVar0;
	
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
	func_482();
	GlobalFunc_173(&uLocal_152, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	GlobalFunc_173(&uLocal_152, 3, iLocal_733, "CLETUS", 0, 1);
	func_423();
	func_422();
	func_421();
	func_420();
	func_419(0);
	func_327();
	func_418();
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_733, 200);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_733, 0);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_733, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_733, 169, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_733, 206, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_733, 32, 0);
		PED::SET_PED_DIES_IN_WATER(iLocal_733, 0);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_733);
		PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_733, 1);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_733, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_733, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_733, 1);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_733, 1);
	}
	iLocal_320 = 0;
	if (GlobalFunc_Is_Mission_Retry())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		iLocal_616 = 1;
		iLocal_706 = 0;
		if (Global_84544)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_809, fLocal_812, 1, 0);
				iLocal_317 = 3;
				break;
			
			case 1:
				GlobalFunc_4972(Local_741, fLocal_689, 1, 0);
				iLocal_317 = 5;
				break;
			
			case 2:
				GlobalFunc_4972(Local_747, fLocal_690, 1, 0);
				iLocal_317 = 12;
				break;
			
			case 3:
				GlobalFunc_4972(Local_802, fLocal_805, 1, 0);
				iLocal_317 = 16;
				break;
			
			case 4:
				GlobalFunc_4972(Local_912, fLocal_915, 1, 0);
				iLocal_317 = 20;
				break;
			
			case 5:
				GlobalFunc_4972(Local_912, fLocal_915, 1, 0);
				iLocal_317 = 20;
				break;
			
			default:
				break;
		}
	}
	else
	{
		if (!iLocal_617)
		{
			func_383();
		}
		iLocal_317 = 1;
	}
}



void func_418()//Position - 0x31056
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
	{
		iLocal_620 = 1;
		uLocal_722 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
	}
}

void func_419(bool bParam0)//Position - 0x31083
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (!bParam0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_420()//Position - 0x310C6
{
	STREAMING::REQUEST_MODEL(iLocal_726);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_1_COYOTE_VOCALS", 0);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_726))
	{
		SYSTEM::WAIT(0);
	}
}

void func_421()//Position - 0x310F2
{
	HUD::REQUEST_ADDITIONAL_TEXT("HUNT1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("HUNT1AU", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_422()//Position - 0x31127
{
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sniperrifle"), 31, 2);
	while (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_sniperrifle")))
	{
		SYSTEM::WAIT(0);
	}
}

void func_423()//Position - 0x31150
{
	STREAMING::REQUEST_ANIM_DICT("ODDJOBS@HUNTER");
	while (!STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@HUNTER"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_424()//Position - 0x31174
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_858, Local_861, 16f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_864, Local_867, 19f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_870, Local_873, 19f, 0, 1, 0))
		{
			if (!PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			}
		}
		else if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		}
	}
}

void func_425()//Position - 0x31211
{
	struct<3> Var0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		func_463();
		func_460();
		func_459(0);
		switch (iLocal_318)
		{
			case 0:
				break;
			
			case 1:
				func_458(1);
				iLocal_318 = 0;
				break;
			
			case 3:
				func_291(1, 0);
				iLocal_719 = MISC::GET_GAME_TIMER() + 2000;
				ENTITY::SET_ENTITY_COORDS(iLocal_733, Local_790, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_733, fLocal_697);
				iLocal_318 = 2;
				break;
			
			case 2:
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
				{
					if (func_456())
					{
						bLocal_622 = true;
						iLocal_719 = MISC::GET_GAME_TIMER() + 5000;
						WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_733, joaat("weapon_sniperrifle"));
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_777, 1f, 60000, 0.25f, 512, Local_321[iLocal_720 /*10*/].f_6);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
						iLocal_318 = 4;
					}
				}
				break;
			
			case 4:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) == 7)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_777, 1.5f, 1.5f, 1.5f, 0, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_733);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_733, 1);
						iLocal_318 = 6;
					}
				}
				else if (!iLocal_658[0])
				{
					if (MISC::GET_GAME_TIMER() > iLocal_719)
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_1", 7, 0, 0, 0))
						{
							iLocal_658[0] = 1;
						}
					}
				}
				else
				{
					GlobalFunc_10868(&uLocal_994, &uLocal_152, cLocal_738, &sLocal_995, &cLocal_1001);
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(iLocal_733))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_733, joaat("weapon_sniperrifle"), 0))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_733, joaat("weapon_sniperrifle"));
					}
					if (func_456())
					{
						if (ENTITY::IS_ENTITY_VISIBLE(iLocal_731))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_731, 0);
						}
						func_327();
						func_326();
						GlobalFunc_146(&iLocal_609);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_733);
						ENTITY::SET_ENTITY_COORDS(iLocal_733, Local_777, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_733, fLocal_689);
						iLocal_634 = 0;
						iLocal_318 = 6;
					}
				}
				break;
			
			case 6:
				if (!iLocal_615)
				{
					if (func_382())
					{
						iLocal_615 = 1;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 0, 1, 0) && func_345())
				{
					if (func_453())
					{
						func_353();
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_DIARR", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 5f, 4);
							iLocal_713 = 0;
							func_327();
							iLocal_658[1] = 1;
							func_452(1, 1);
							iLocal_318 = 7;
						}
					}
					else
					{
						func_451();
					}
				}
				break;
			
			case 7:
				if (!GlobalFunc_111())
				{
					func_449(0);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 0, 1, 0))
				{
					if (!iLocal_658[2])
					{
						iLocal_658[2] = 0;
					}
					if (func_453())
					{
						func_353();
						func_377();
						if (iLocal_636 && !GlobalFunc_663("HT_SHDISH", 0, 0))
						{
							func_448(0);
						}
						if (iLocal_723 == 1 && func_447())
						{
							if (!iLocal_645[0])
							{
								if (GlobalFunc_663("HT_SHDISH", 0, 0))
								{
									if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_DISH", "HUNT1_DISH_1", 7, 1, 0))
									{
										iLocal_615 = 0;
										func_458(0);
										iLocal_645[0] = 1;
									}
								}
								else if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_DISH", "HUNT1_DISH_1", 7, 0, 0))
								{
									iLocal_615 = 0;
									func_458(0);
									iLocal_645[0] = 1;
								}
							}
							else if (!GlobalFunc_111())
							{
								if (!bLocal_612)
								{
									func_452(0, 1);
								}
							}
						}
						else if (iLocal_723 == 2 && func_447())
						{
							if (!iLocal_645[1])
							{
								if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_DISH", "HUNT1_DISH_2", 7, 0, 0))
								{
									iLocal_615 = 0;
									func_458(0);
									iLocal_645[1] = 1;
								}
							}
							else if (!bLocal_612)
							{
								func_452(0, 1);
							}
						}
						else if (iLocal_723 == 3)
						{
							if (!iLocal_645[2])
							{
								GlobalFunc_4956();
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_1A", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(2f, 5f, 4);
									iLocal_615 = 0;
									iLocal_645[2] = 1;
									iLocal_658[3] = 1;
									func_458(0);
									iLocal_318 = 8;
								}
							}
						}
						func_446();
					}
					else
					{
						func_451();
					}
				}
				else if (!iLocal_658[2])
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_LAREA", 7, 1, 0, 0))
					{
						iLocal_658[2] = 1;
					}
				}
				break;
			
			case 8:
				if (func_445())
				{
					func_218(1);
					iLocal_318 = 10;
				}
				break;
			
			case 10:
				func_444();
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_819, 0, 1, 0))
				{
					if (!iLocal_658[5])
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 0, 1, 0))
						{
							func_443();
						}
						else
						{
							iLocal_658[5] = 1;
						}
					}
					if ((iLocal_682[1] && iLocal_658[5] == 1) && !iLocal_658[4])
					{
						func_442();
					}
					if (iLocal_658[4] && !iLocal_658[6])
					{
						func_439();
					}
					if (!iLocal_658[7])
					{
						func_438();
					}
					else
					{
						func_435();
					}
					if (!iLocal_658[8] && iLocal_658[4])
					{
						func_432();
					}
				}
				else if (!bLocal_644)
				{
					TASK::CLEAR_PED_TASKS(iLocal_733);
					func_291(1, 0);
					func_218(0);
					iLocal_319 = 10;
					iLocal_318 = 11;
				}
				break;
			
			case 11:
				func_363();
				func_444();
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), Local_822, 0, 1, 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_ENCAR", 7, 0, 0, 0))
							{
								GlobalFunc_146(&iLocal_609);
								func_218(1);
								iLocal_318 = iLocal_319;
							}
						}
						else
						{
							func_444();
						}
					}
				}
				break;
			
			case 12:
				if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_TYARR", 7, 0, 0, 0))
				{
					if (iLocal_718 == -1)
					{
						iLocal_718 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_852, Local_855, 0f, 0, 7);
					}
					func_353();
					iLocal_658[9] = 1;
					func_218(0);
					func_291(0, 0);
					iLocal_713 = 0;
					TASK::TASK_LOOK_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_780, 1f, 60000, 0.25f, 512, fLocal_690);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
					iLocal_318 = 14;
				}
				break;
			
			case 13:
				if (!PED::IS_PED_INJURED(iLocal_733))
				{
					if (func_456())
					{
						if (ENTITY::IS_ENTITY_VISIBLE(iLocal_731))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_731, 0);
						}
						if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_733, joaat("weapon_sniperrifle"), 0))
						{
							WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_733, joaat("weapon_sniperrifle"));
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_733);
						ENTITY::SET_ENTITY_COORDS(iLocal_733, Local_780, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_733, fLocal_690);
						func_353();
						func_326();
						func_327();
						GlobalFunc_146(&iLocal_609);
						iLocal_713 = 0;
						func_353();
						iLocal_658[11] = 0;
						iLocal_318 = 14;
					}
				}
				break;
			
			case 14:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) == 7)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_780, 1.25f, 1.25f, 2.5f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_762, Local_765, 10f, 0, 1, 0))
					{
						if (func_453())
						{
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_HERE", 7, 0, 0, 0) || iLocal_713 == 1)
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
								iLocal_713 = 0;
								if (iLocal_718 != -1)
								{
									PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_718);
									iLocal_718 = -1;
								}
								func_326();
								iLocal_658[11] = 1;
								func_452(1, 0);
								iLocal_318 = 15;
							}
						}
						else
						{
							func_451();
						}
					}
				}
				else if (!iLocal_658[10])
				{
					func_431();
				}
				break;
			
			case 15:
				func_449(1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_762, Local_765, 10f, 0, 1, 0))
				{
					if (iLocal_658[2])
					{
						iLocal_658[2] = 0;
					}
					if (func_453())
					{
						func_448(1);
						if (iLocal_628)
						{
							if (GlobalFunc_745())
							{
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_TYIN", 7, 0, 0, 0))
								{
									iLocal_628 = 0;
									iLocal_623 = 0;
								}
							}
							else
							{
								iLocal_628 = 0;
							}
						}
						if (!iLocal_658[12])
						{
							func_427();
						}
						if (iLocal_723 == 1 && !iLocal_645[0])
						{
							if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_TYRE", "HUNT1_TYRE_1", 7, 0, 0))
							{
								iLocal_645[0] = 1;
							}
						}
						else if (iLocal_723 == 2 && !iLocal_645[1])
						{
							if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_TYRE", "HUNT1_TYRE_2", 7, 0, 0))
							{
								iLocal_645[1] = 1;
							}
						}
						else if (iLocal_723 == 3)
						{
							if (!iLocal_645[2])
							{
								if (iLocal_721 <= 6 && GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_TYR2", 7, 0, 0, 0))
								{
									iLocal_645[2] = 1;
								}
								else if (iLocal_721 <= 10 && GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_TRY3", 7, 0, 0, 0))
								{
									iLocal_645[2] = 1;
								}
								else if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_TYR4", 7, 0, 0, 0))
								{
									iLocal_645[2] = 1;
								}
							}
							else if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
								iLocal_658[14] = 1;
								func_458(0);
								iLocal_318 = 16;
							}
						}
					}
					else
					{
						func_451();
					}
				}
				else if (!iLocal_658[2])
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_LAREA", 7, 1, 0, 0))
					{
						iLocal_658[2] = 1;
					}
				}
				break;
			
			case 16:
				if (func_445())
				{
					iLocal_716 = 0;
					func_426();
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_945[0 /*3*/], 1f, 60000, 0.25f, 0, 40000f);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 1);
					func_291(0, 0);
					iLocal_318 = 17;
				}
				break;
			
			case 17:
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_733, 1.4f);
				if (!iLocal_658[15])
				{
					if (func_345())
					{
						if (!GlobalFunc_111())
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_747, 1) > 10f)
							{
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_3", 8, 0, 0, 0))
								{
									iLocal_658[15] = 1;
								}
							}
						}
					}
				}
				switch (iLocal_716)
				{
					case 0:
						if (GlobalFunc_713(iLocal_733, Local_945[0 /*3*/], 0) < 2f)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_945[1 /*3*/], 1f, 60000, 0.25f, 0, 40000f);
							iLocal_716++;
						}
						break;
					
					case 1:
						if (GlobalFunc_713(iLocal_733, Local_945[1 /*3*/], 0) < 2f)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_945[2 /*3*/], 1f, 60000, 0.25f, 0, 40000f);
							iLocal_716++;
						}
						break;
					
					case 2:
						if (GlobalFunc_713(iLocal_733, Local_945[2 /*3*/], 0) < 2f)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_945[3 /*3*/], 1f, 60000, 0.25f, 0, 40000f);
							iLocal_716++;
						}
						break;
					
					case 3:
						if (GlobalFunc_713(iLocal_733, Local_945[3 /*3*/], 0) < 2f)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_783, 1f, 60000, 0.25f, 512, fLocal_696);
							iLocal_716++;
						}
						break;
					
					case 4:
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) == 7 || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_906, Local_909, 3.5f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_733, Local_906, Local_909, 3.5f, 0, 1, 0)))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
							iLocal_318 = 18;
						}
						break;
				}
				break;
			
			case 20:
				if (!PED::IS_PED_INJURED(iLocal_733))
				{
					if (func_456())
					{
						if (ENTITY::IS_ENTITY_VISIBLE(iLocal_731))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_731, 0);
						}
						if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_733, joaat("weapon_sniperrifle"), 0))
						{
							WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_733, joaat("weapon_sniperrifle"));
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_733);
						ENTITY::SET_ENTITY_COORDS(iLocal_733, Local_783, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_733, fLocal_786);
						func_326();
						func_327();
						func_291(1, 0);
						iLocal_318 = 18;
					}
				}
				break;
			
			case 18:
				if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_906, Local_909, 3.5f, 0, 1, 0) || Var0.f_2 > 41f)
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT_ROOF", 7, 0, 0, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_733);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_787, 1f, 60000, 0.25f, 512, fLocal_698);
							iLocal_658[16] = 1;
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
							iLocal_318 = 21;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, -875674219) != 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), -1);
					}
				}
				break;
			
			case 21:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_768, Local_771, 20f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) == 7)
					{
						if ((GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_COARR", 7, 0, 0, 0) || iLocal_723 > 0) || iLocal_713 == 1)
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							iLocal_713 = 0;
							iLocal_658[17] = 1;
							func_452(1, 0);
							func_326();
							iLocal_318 = 22;
						}
					}
				}
				break;
			
			case 22:
				func_449(2);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_768, Local_771, 20f, 0, 1, 0))
				{
					if (iLocal_658[2])
					{
						iLocal_658[2] = 0;
					}
					if (iLocal_723 >= 3 && !bLocal_625)
					{
						GlobalFunc_4956();
						iLocal_707 = MISC::GET_GAME_TIMER() + 2000;
						bLocal_625 = true;
					}
					if (func_453())
					{
						func_353();
						func_448(2);
						if (iLocal_723 == 1 && !iLocal_658[18])
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_FIRST", 7, 0, 0, 0))
								{
									if (iLocal_627)
									{
										iLocal_627 = 0;
									}
									iLocal_658[18] = 1;
								}
							}
						}
						if (iLocal_723 == 2 && !iLocal_658[19])
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_SEC", 7, 0, 0, 0))
								{
									if (iLocal_627)
									{
										iLocal_627 = 0;
									}
									iLocal_658[19] = 1;
								}
							}
						}
						if (iLocal_627)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_COYMIS", 7, 0, 0, 0))
								{
									iLocal_627 = 0;
								}
							}
						}
					}
					else
					{
						func_451();
					}
				}
				else if (!iLocal_658[2])
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_LAREA", 7, 1, 0, 0))
					{
						iLocal_658[2] = 1;
					}
				}
				if (bLocal_625)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_707)
					{
						GlobalFunc_4956();
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_FIN", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
							func_458(0);
							iLocal_318 = 23;
						}
					}
				}
				break;
			
			case 23:
				if (func_445())
				{
					if (!GlobalFunc_111() && !GlobalFunc_752(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), -1);
						iLocal_658[20] = 1;
						iLocal_318 = 25;
					}
				}
				break;
			
			case 24:
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_733);
					ENTITY::SET_ENTITY_COORDS(iLocal_733, Local_916, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_733, fLocal_919);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_731, 0);
					}
				}
				iLocal_318 = 25;
				break;
			
			case 25:
				if (!GlobalFunc_111())
				{
					if (!iLocal_658[21])
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_4", 7, 0, 0, 0))
						{
							iLocal_658[21] = 1;
						}
					}
					else if (!GlobalFunc_111())
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
						{
							TASK::CLEAR_PED_TASKS(iLocal_733);
							TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_733, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_736);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_965, 1f, 60000, 0.25f, 0, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_968, 1f, 60000, 0.25f, 0, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_971, 1f, 60000, 0.25f, 0, 40000f);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_736);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_733, uLocal_736);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_736);
							PED::SET_PED_KEEP_TASK(iLocal_733, 1);
						}
						iLocal_318 = 0;
					}
				}
				break;
		}
		if (((iLocal_317 != 21 && !iLocal_658[20]) && iLocal_318 != 25) && iLocal_318 != 0)
		{
			if (!iLocal_626)
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_RAGDOLL(iLocal_733))
					{
						GlobalFunc_4935();
						iLocal_709 = MISC::GET_GAME_TIMER() + 2400;
						iLocal_626 = 1;
					}
				}
				if (((ENTITY::IS_ENTITY_DEAD(iLocal_733) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_733, PLAYER::PLAYER_PED_ID(), 1)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_733, 0, 2)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_733, 0), 10f))
				{
					GlobalFunc_4935();
					iLocal_709 = MISC::GET_GAME_TIMER() + 2400;
					iLocal_626 = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_709)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_733))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_733))
					{
						TASK::CLEAR_PED_TASKS(iLocal_733);
						TASK::TASK_SMART_FLEE_PED(iLocal_733, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_733, 1);
						func_295(2);
					}
					else
					{
						func_295(1);
					}
				}
				iLocal_318 = 0;
			}
		}
	}
}

void func_426()//Position - 0x3239D
{
	Local_945[0 /*3*/] = { 1524.567f, 3567.502f, 34.3611f };
	Local_945[1 /*3*/] = { 1543.957f, 3572.729f, 34.3627f };
	Local_945[2 /*3*/] = { 1561.888f, 3587.101f, 34.3606f };
	Local_945[3 /*3*/] = { 1594.385f, 3598.806f, 34.4349f };
}

void func_427()//Position - 0x32401
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (GlobalFunc_4453())
	{
		iVar1 = 0;
		while (iVar1 < GlobalFunc_4452())
		{
			if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_4451(iVar1)))
			{
				iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar1));
				if (GlobalFunc_115(iVar0) || !GlobalFunc_115(iVar0))
				{
					if (PED::IS_PED_MODEL(iVar0, iLocal_726))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_COYTYR", 7, 0, 0, 0))
							{
								iLocal_658[12] = 1;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}




void func_431()//Position - 0x324C0
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_733, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!iLocal_991)
		{
			iLocal_992 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_991 = 1;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_992)
		{
			if (func_345())
			{
				if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_TYRBAN", 7, 0, 0, 0))
				{
					iLocal_658[10] = 1;
				}
			}
		}
	}
}

void func_432()//Position - 0x32528
{
	if (!PED::IS_PED_DEAD_OR_DYING(iLocal_733, 1) && !PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_733, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!iLocal_637)
			{
				iLocal_702 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_637 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_702)
			{
				if (!GlobalFunc_111())
				{
					if (!iLocal_658[8])
					{
						if (GlobalFunc_10626(&uLocal_152, cLocal_738, "HUNT1_BANTER", &Local_981, 7, 0, 0))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_981))
							{
								Local_981 = { GlobalFunc_514() };
							}
							else
							{
								iLocal_658[8] = 1;
							}
						}
					}
				}
			}
		}
	}
}



void func_435()//Position - 0x326CE
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_733, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_115(iLocal_979))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_979 && PED::GET_VEHICLE_PED_IS_IN(iLocal_733, 0) == iLocal_979)
				{
					if (!iLocal_989)
					{
						iLocal_990 = ENTITY::GET_ENTITY_HEALTH(iLocal_979);
						iLocal_989 = 1;
					}
					else
					{
						iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_979);
						if (iVar0 < iLocal_990)
						{
							GlobalFunc_5105();
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_DAMCAR", 8, 0, 0, 0))
							{
								iLocal_989 = 0;
							}
						}
					}
				}
			}
		}
	}
}



void func_438()//Position - 0x327AB
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!iLocal_658[7])
		{
			if (!GlobalFunc_111())
			{
				if (func_345())
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_979)
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_CLVEH", 7, 0, 0, 0))
						{
							iLocal_658[7] = 1;
						}
					}
					else if (VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_OWNVEH", 7, 0, 0, 0))
						{
							iLocal_658[7] = 1;
						}
					}
				}
			}
		}
	}
}

void func_439()//Position - 0x32830
{
	if (!PED::IS_PED_DEAD_OR_DYING(iLocal_733, 1) && !PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 7f, 0, 1, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_733, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!iLocal_643)
				{
					if (!GlobalFunc_663("HT_NXTLOC", 0, 0) && iLocal_658[4])
					{
						iLocal_717 = MISC::GET_GAME_TIMER() + 20000;
						iLocal_643 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_717)
				{
					if (!GlobalFunc_111() && func_345())
					{
						if (!iLocal_658[6])
						{
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_NOVEH", 7, 0, 0, 0))
							{
								iLocal_658[6] = 1;
							}
						}
					}
				}
			}
			else if (GlobalFunc_5664("HUNT1_NOVEH"))
			{
				GlobalFunc_4935();
			}
		}
	}
}



void func_442()//Position - 0x3294F
{
	if (!PED::IS_PED_DEAD_OR_DYING(iLocal_733, 1) && !PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (!iLocal_987)
		{
			if (iLocal_682[1] && !GlobalFunc_663("HT_NXTLOC", 0, 0))
			{
				iLocal_988 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_987 = 1;
			}
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_988)
		{
			if (!GlobalFunc_111() && func_345())
			{
				if (!iLocal_658[4])
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_2", 7, 0, 0, 0))
					{
						iLocal_658[4] = 1;
					}
				}
			}
		}
	}
}

void func_443()//Position - 0x329E3
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_756, Local_759, 16f, 0, 1, 0))
	{
		if ((iLocal_682[1] && !GlobalFunc_663("HT_NXTLOC", 0, 0)) && !GlobalFunc_111())
		{
			if (!iLocal_642)
			{
				iLocal_701 = MISC::GET_GAME_TIMER() + 15000;
				iLocal_642 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_701)
			{
				if (!iLocal_658[5] && func_345())
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_WAIT", 7, 0, 0, 0))
					{
						iLocal_642 = 0;
					}
				}
			}
		}
	}
	else
	{
		iLocal_658[5] = 1;
	}
}

void func_444()//Position - 0x32A82
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_619)
		{
			uLocal_993 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_733, 1))
			{
				if (!VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(uLocal_993))
				{
					if (func_345())
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_NOCAR", 7, 0, 0, 0))
							{
								iLocal_619 = 1;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_619 = 0;
	}
}

int func_445()//Position - 0x32AED
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_733, "ODDJOBS@HUNTER", "BINOCULARS_LOOP", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_733, "ODDJOBS@HUNTER", "BINOCULARS_OUTRO", 3))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_731))
		{
			TASK::CLEAR_PED_TASKS(iLocal_733);
			return 1;
		}
		else
		{
			OBJECT::DELETE_OBJECT(&iLocal_731);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_731))
	{
		TASK::CLEAR_PED_TASKS(iLocal_733);
		return 1;
	}
	return 0;
}

void func_446()//Position - 0x32B59
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BULLET_IN_AREA(Local_321[iVar0 /*10*/].f_1, 10f, 1))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_663("HT_SHDISH", 0, 0) || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					if (!Local_321[iVar0 /*10*/].f_7)
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT_MISS", 7, 0, 0, 0))
						{
							iLocal_623 = 0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (MISC::IS_BULLET_IN_AREA(1793.305f, 3804.426f, 32.6374f, 10f, 1))
	{
		if (!GlobalFunc_111())
		{
			if (!GlobalFunc_663("HT_SHDISH", 0, 0) || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT_MISS2", 6, 0, 0, 0))
				{
					iLocal_623 = 0;
				}
			}
		}
	}
}

int func_447()//Position - 0x32C2F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_321[iVar0 /*10*/].f_9))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_448(int iParam0)//Position - 0x32C61
{
	char* sVar0;
	
	sVar0 = "NONE";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HUNT1_DIIN";
			break;
		
		case 1:
			sVar0 = "HUNT_TYIN";
			break;
		
		case 2:
			sVar0 = "HUNT1_COIN";
			break;
	}
	if (((iLocal_723 < 3 && !GlobalFunc_663("HT_SHDISH", 0, 0)) && !GlobalFunc_663("HT_SHTYRE", 0, 0)) && !GlobalFunc_663("HT_SHCOY", 0, 0))
	{
		if (iLocal_623)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_711)
			{
				if (MISC::ARE_STRINGS_EQUAL(sVar0, "HUNT1_DIIN"))
				{
					if ((GlobalFunc_745() || iLocal_708 > 2) || iLocal_723 == 0)
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, sVar0, 7, 0, 0, 0))
						{
							iLocal_623 = 0;
						}
					}
					else
					{
						switch (iLocal_708)
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_SAT", 7, 0, 0, 0))
								{
									iLocal_623 = 0;
									iLocal_708++;
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_SAT2", 7, 0, 0, 0))
								{
									iLocal_623 = 0;
									iLocal_708++;
								}
								break;
							
							case 2:
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_SAT3", 7, 0, 0, 0))
								{
									iLocal_623 = 0;
									iLocal_708++;
								}
								break;
							}
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(sVar0, "HUNT_TYIN"))
				{
					if ((GlobalFunc_745() || iLocal_724 > 2) || iLocal_723 == 0)
					{
						if (GlobalFunc_10618(&uLocal_152, cLocal_738, sVar0, 7, 0, 0, 0))
						{
							iLocal_623 = 0;
						}
					}
					else
					{
						switch (iLocal_724)
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_BANT1", 7, 0, 0, 0))
								{
									iLocal_623 = 0;
									iLocal_724++;
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_BANT2", 7, 0, 0, 0))
								{
									iLocal_623 = 0;
									iLocal_724++;
								}
								break;
							
							case 2:
								if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_BANT3", 7, 0, 0, 0))
								{
									iLocal_623 = 0;
									iLocal_724++;
								}
								break;
							}
					}
				}
				else if (GlobalFunc_745() || iLocal_980 > 2)
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, sVar0, 7, 0, 0, 0))
					{
						iLocal_623 = 0;
					}
				}
				else
				{
					switch (iLocal_980)
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_COYB1", 7, 0, 0, 0))
							{
								iLocal_623 = 0;
								iLocal_980++;
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_COYB2", 7, 0, 0, 0))
							{
								iLocal_623 = 0;
								iLocal_980++;
							}
							break;
						
						case 2:
							if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_COYB3", 7, 0, 0, 0))
							{
								iLocal_623 = 0;
								iLocal_980++;
							}
							break;
						}
					}
			}
		}
		else if (!GlobalFunc_111())
		{
			iLocal_712 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
			iLocal_711 = (MISC::GET_GAME_TIMER() + iLocal_712);
			iLocal_623 = 1;
		}
	}
}

void func_449(int iParam0)//Position - 0x32F52
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		switch (iLocal_713)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						if (!iLocal_615)
						{
							if (func_382())
							{
								iLocal_615 = 1;
							}
						}
						if (iLocal_615)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_777, 1.5f, 1.5f, 1.5f, 0, 1, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(iLocal_733, Local_321[iLocal_720 /*10*/].f_1, 30f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) != 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) != 7)
								{
									iLocal_713 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_780, 1.5f, 1.5f, 1.5f, 0, 1, 0) || !GlobalFunc_2786(iLocal_733, fLocal_690, 30f))
						{
							iLocal_713 = 1;
						}
						break;
					
					case 2:
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_733, Local_787, 1.5f, 1.5f, 1.5f, 0, 1, 0) || !GlobalFunc_2786(iLocal_733, fLocal_698, 30f))
						{
							iLocal_713 = 1;
						}
						break;
				}
				break;
			
			case 1:
				if (func_445())
				{
					switch (iParam0)
					{
						case 0:
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_777, 1f, 60000, 0.25f, 512, Local_321[iLocal_720 /*10*/].f_6);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
							break;
						
						case 1:
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_780, 1f, 60000, 0.25f, 512, fLocal_690);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
							break;
						
						case 2:
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_733, Local_787, 1f, 60000, 0.25f, 512, fLocal_698);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 0);
							break;
					}
					iLocal_713++;
				}
				break;
			
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_733, 713668775) == 7)
				{
					switch (iParam0)
					{
						case 0:
							if (func_453())
							{
								func_452(0, 1);
							}
							iLocal_318 = 7;
							break;
						
						case 1:
							func_452(0, 0);
							iLocal_318 = 15;
							break;
						
						case 2:
							func_452(0, 0);
							iLocal_318 = 22;
							break;
					}
					iLocal_713 = 0;
				}
				break;
			}
	}
}


void func_451()//Position - 0x33245
{
	if (!GlobalFunc_111())
	{
		if (func_345())
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (!iLocal_634)
				{
					if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT1_UGUN", 9, 0, 0, 0))
					{
						iLocal_634 = 1;
						iLocal_633 = 0;
					}
				}
			}
			else if (!iLocal_633)
			{
				if (GlobalFunc_10618(&uLocal_152, cLocal_738, "HUNT_UGUN2", 9, 0, 0, 0))
				{
					iLocal_633 = 1;
					iLocal_634 = 0;
				}
			}
		}
	}
}

void func_452(bool bParam0, bool bParam1)//Position - 0x332B3
{
	var uVar0;
	
	if (!bParam1 || iLocal_615)
	{
		if (func_456())
		{
			if (!bLocal_612)
			{
				bLocal_612 = true;
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
			{
				TASK::CLEAR_PED_TASKS(iLocal_733);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_733, 1);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_CLEAR_LOOK_AT(0);
				if (bParam1)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_321[iLocal_720 /*10*/].f_1, 0);
				}
				if (bParam0)
				{
					TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "point_fwd", 8f, -8f, -1, 16, 0, 0, 0, 0);
				}
				TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "binoculars_intro", 8f, -8f, -1, 16, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "BINOCULARS_LOOP", 8f, -8f, -1, 17, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_733, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_733, 1);
			}
		}
	}
}

int func_453()//Position - 0x33393
{
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_WEAPONTYPE_GROUP(GlobalFunc_1535(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER"))
		{
			return 1;
		}
	}
	return 0;
}



int func_456()//Position - 0x334E4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_731) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_731, iLocal_733))
	{
		return 1;
	}
	if (!iLocal_611)
	{
		func_457();
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_457()//Position - 0x3351C
{
	STREAMING::REQUEST_MODEL(iLocal_727);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_727))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_611 = 1;
}

void func_458(bool bParam0)//Position - 0x33542
{
	var uVar0;
	
	if (bLocal_612)
	{
		bLocal_612 = false;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_733, "ODDJOBS@HUNTER", "BINOCULARS_LOOP", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_733, "ODDJOBS@HUNTER", "BINOCULARS_INTRO", 3))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_733, 1);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_733);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_PLAY_ANIM(0, "ODDJOBS@HUNTER", "BINOCULARS_OUTRO", 8f, -8f, -1, 48, 0, 0, 0, 0);
			if (bParam0)
			{
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				PED::SET_PED_KEEP_TASK(iLocal_733, 1);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_733, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
}

void func_459(bool bParam0)//Position - 0x335E7
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_4453())
		{
			iVar1 = 0;
			while (iVar1 < GlobalFunc_4452())
			{
				if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_4451(iVar1)))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar1));
					if (iVar0 != PLAYER::PLAYER_PED_ID() && iVar0 != iLocal_733)
					{
						if ((!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(iVar0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
								iLocal_706++;
							}
						}
					}
				}
				iVar1++;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_352[iVar1 /*29*/].f_12))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_352[iVar1 /*29*/].f_12, PLAYER::PLAYER_PED_ID(), 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_352[iVar1 /*29*/].f_12);
						iLocal_706++;
					}
				}
				iVar1++;
			}
			if (iLocal_706 == 1)
			{
				if (!iLocal_658[13])
				{
					if (GlobalFunc_10630(&uLocal_152, cLocal_738, "HUNT1_INOC", "HUNT1_INOC_1", 8, 0, 0))
					{
						iLocal_658[13] = 1;
					}
				}
			}
			else if (iLocal_706 > 1)
			{
				if (!bParam0)
				{
					if (!GlobalFunc_111())
					{
						func_295(4);
					}
				}
				else
				{
					func_295(4);
				}
			}
		}
	}
}

void func_460()//Position - 0x33735
{
	if (!PED::IS_PED_INJURED(iLocal_733))
	{
		if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_733, 0) + Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_733, 0) - Vector(2f, 2f, 2f), joaat("weapon_grenade"), 0) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_733, 0) + Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_733, 0) - Vector(2f, 2f, 2f), joaat("weapon_stickybomb"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_733, 0) + Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_733, 0) - Vector(2f, 2f, 2f), joaat("weapon_molotov"), 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_733, 0), 10f))
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_607, 1862763509);
		}
		if (!iLocal_618)
		{
			if (func_462() || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_733))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				GlobalFunc_5157(&uLocal_152, cLocal_738, "HUNT1_PTREAC", 6, 0, 0);
				iLocal_618 = 1;
			}
		}
		if (!bLocal_644)
		{
			if (PED::IS_PED_FALLING(iLocal_733))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_733, 0);
				bLocal_644 = true;
			}
		}
		else if (TASK::IS_PED_GETTING_UP(iLocal_733))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_733, 1);
			bLocal_644 = false;
		}
	}
}


int func_462()//Position - 0x33891
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		if (iLocal_318 != 25)
		{
			if ((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) && GlobalFunc_156(iLocal_733, PLAYER::PLAYER_PED_ID(), 1) <= 3f)
			{
				return 1;
			}
		}
		else if (((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_733, 30f)) && GlobalFunc_156(iLocal_733, PLAYER::PLAYER_PED_ID(), 1) <= 2f)
		{
			return 1;
		}
	}
	return 0;
}

void func_463()//Position - 0x33926
{
	if (!PED::IS_PED_INJURED(iLocal_733))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_733, "ODDJOBS@HUNTER", "BINOCULARS_OUTRO", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_733, "ODDJOBS@HUNTER", "BINOCULARS_OUTRO") >= 0.68f) || iLocal_713 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
			{
				OBJECT::DELETE_OBJECT(&iLocal_731);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_731))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_733, "ODDJOBS@HUNTER", "binoculars_intro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_733, "ODDJOBS@HUNTER", "binoculars_intro") >= 0.242f)
			{
				iLocal_731 = OBJECT::CREATE_OBJECT(iLocal_727, ENTITY::GET_ENTITY_COORDS(iLocal_733, 1), 0, 0, 0);
			}
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_731, iLocal_733))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_731, iLocal_733, PED::GET_PED_BONE_INDEX(iLocal_733, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
	}
}

void func_464(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x33A00
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
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
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
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
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
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}


















void func_482()//Position - 0x34511
{
	if (!iLocal_630)
	{
		PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_607);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_733, iLocal_607);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_607, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_607);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_607, -2065892691);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -2065892691);
		iLocal_630 = 1;
	}
}



int func_485(var uParam0)//Position - 0x3468A
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = iLocal_80;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "CLETUS_MCS_1_concat", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "special_ped@cletus@base", "cletus_base", 0);
			STREAMING::REQUEST_ANIM_DICT("special_ped@cletus@base");
			iLocal_78 = 1;
			break;
		
		case 1:
			if ((!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48))) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@cletus@base"))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 54, 1804.33f, 3931.33f, 33.83f, 91.63f, "RC HUNTER 1", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_sniperrifle"), 0, 1, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_486(&(uParam0->f_35[0]), 1806.732f, 3934.353f, 33.3275f, 76.1155f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(1804.501f, 3922.917f, 32.8091f, 2f, 0, 0, 0, 0, 0);
			}
			if (bVar4)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uParam0->f_28[0], joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 104, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_28[0], joaat("weapon_sniperrifle"), 1);
				if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@cletus@base"))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "special_ped@cletus@base", "cletus_base", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
			}
			MISC::CLEAR_AREA_OF_PEDS(1801.159f, 3919.606f, 33.0662f, 5f, 0);
			PED::SET_PED_NON_CREATION_AREA(1803.603f, 3920.191f, 32.9855f, 1798.416f, 3918.291f, 35.0579f);
			MISC::CLEAR_AREA_OF_PEDS(1797.286f, 3927.359f, 33.0176f, 4f, 0);
			PED::SET_PED_NON_CREATION_AREA(1793.765f, 3926.749f, 35.1276f, 1799.73f, 3927.815f, 32.9875f);
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET", 0);
			}
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING", 0);
			}
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING", 0);
			}
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_486(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x3493E
{
	func_487(uParam0, iLocal_80, Param1, fParam4);
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

void func_487(var uParam0, int iParam1, struct<3> Param2, var uParam5)//Position - 0x3499F
{
	GlobalFunc_7089(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}










void func_497()//Position - 0x34C85
{
	GlobalFunc_53();
	GlobalFunc_9161();
	GlobalFunc_4967(0, -1, 1);
	func_7();
	func_329();
	func_354();
	func_508();
	func_289();
	func_419(1);
	if (!bLocal_631)
	{
		func_216();
	}
	if (GlobalFunc_9162())
	{
	}
	if (iLocal_718 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_718);
	}
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET", 1);
	}
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING", 1);
	}
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING", 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_733))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_733, GlobalFunc_468()))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_733);
		}
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_733, 1);
		GlobalFunc_2297(&iLocal_733, 1, 0, 1);
	}
	if (iLocal_611)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_727);
	}
	if (bLocal_610)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_734, 0);
	}
	if (iLocal_639)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_735, 0);
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	func_498(&Local_91, 0, 0, 0);
	HUD::CLEAR_ADDITIONAL_TEXT(6, 1);
}

void func_498(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x34D81
{
	GlobalFunc_7246(uParam0, iParam1);
	GlobalFunc_8534(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}










void func_508()//Position - 0x34FAE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_726);
}























