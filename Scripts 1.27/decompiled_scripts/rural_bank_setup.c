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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[4] = { 0, 0, 0, 0 };
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<5> Local_70 = { 0, 0, 0, 0, 0 } ;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 21;
	var uLocal_78 = 6;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	struct<2> Local_95 = { 0, 0 } ;
	var uLocal_97 = -1;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 1000;
	var uLocal_105 = 1000;
	var uLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	struct<3> Local_122 = { 0, 0, 0 } ;
	float fLocal_125 = 0f;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_129 = 0f;
	struct<3> Local_130 = { 0, 0, 0 } ;
	float fLocal_133 = 0f;
	struct<3> Local_134 = { 0, 0, 0 } ;
	float fLocal_137 = 0f;
	struct<3> Local_138 = { 0, 0, 0 } ;
	float fLocal_141 = 0f;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	struct<3> Local_148 = { 0, 0, 0 } ;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_163 = { 0, 0, 0 } ;
	struct<3> Local_166 = { 0, 0, 0 } ;
	struct<3> Local_169[4];
	struct<3> Local_182[4];
	struct<3> Local_195 = { 0, 0, 0 } ;
	float fLocal_198 = 0f;
	struct<3> Local_199[3];
	int iLocal_209 = 0;
	struct<3> Local_210[6];
	bool bLocal_229 = 0;
	int iLocal_230 = 0;
	bool bLocal_231 = 0;
	int iLocal_232 = 0;
	bool bLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	bool bLocal_236 = 0;
	bool bLocal_237 = 0;
	bool bLocal_238 = 0;
	bool bLocal_239 = 0;
	int iLocal_240 = 0;
	bool bLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	float fLocal_249 = 0f;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	struct<3> Local_268 = { 0, 0, 0 } ;
	struct<3> Local_271 = { 0, 0, 0 } ;
	float fLocal_274 = 0f;
	char[] cLocal_275[8] = 0;
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	struct<20> Local_278 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_312 = 4;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 4;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 4;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 4;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 4;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 4;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 4;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	struct<10> Local_359[16];
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	struct<2> Local_524 = { 0, 0 } ;
	struct<2> Local_526 = { 0, 0 } ;
	struct<2> Local_528 = { 0, 0 } ;
	struct<2> Local_530 = { 0, 0 } ;
	struct<2> Local_532 = { 0, 0 } ;
	struct<2> Local_534 = { 0, 0 } ;
	struct<2> Local_536 = { 0, 0 } ;
	struct<2> Local_538 = { 0, 0 } ;
	struct<2> Local_540 = { 0, 0 } ;
	struct<2> Local_542 = { 0, 0 } ;
	struct<2> Local_544 = { 0, 0 } ;
	struct<9> Local_546[4];
	struct<15> Local_583 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_598[9];
	float fLocal_626[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645[4] = { 0, 0, 0, 0 };
	int iLocal_650[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_657[2] = { 0, 0 };
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	bool bLocal_662 = 0;
	char cLocal_663[24] = "";
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	bool bLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	char* sLocal_682 = NULL;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	var uLocal_694[4] = { 0, 0, 0, 0 };
	float fLocal_699[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_704 = { 0, 0, 0 } ;
	float fLocal_707 = 0f;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	var uLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	struct<3> Local_716 = { 0, 0, 0 } ;
	int iLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 100;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 100;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
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
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
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
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
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
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
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
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	float fLocal_1323 = 0f;
	float fLocal_1324 = 0f;
	float fLocal_1325 = 0f;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	char* sLocal_1328[2] = { NULL, NULL };
	int iLocal_1331[2] = { 0, 0 };
	int iLocal_1334[2] = { 0, 0 };
	bool bLocal_1337 = 0;
	struct<3> Local_1338 = { 0, 0, 0 } ;
	struct<3> Local_1341 = { 0, 0, 0 } ;
	float fLocal_1344 = 0f;
	struct<3> Local_1345 = { 0, 0, 0 } ;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	bool bLocal_1352 = 0;
	bool bLocal_1353 = 0;
	bool bLocal_1354 = 0;
	int iLocal_1355 = 0;
	int iLocal_1356 = 0;
	struct<6> Local_1357 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	int iLocal_1366 = 0;
	int iLocal_1367 = 0;
	int iLocal_1368 = 4;
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
	int iLocal_1389 = 5;
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
	int iLocal_1415 = 0;
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	bool bLocal_1430 = 0;
	bool bLocal_1431 = 0;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	int iVar11;
	
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
	Local_107 = { 1397.882f, 3594.626f, 33.9272f };
	fLocal_110 = 199.4271f;
	Local_111 = { -132.2826f, 6498.744f, 28.6281f };
	fLocal_114 = -102.1659f;
	Local_115 = { -124.71f, 6504.69f, 28.63f };
	Local_118 = { -88.9369f, 6418.164f, 30.4645f };
	fLocal_121 = 318.126f;
	Local_122 = { -348.9985f, 6194.592f, 30.7398f };
	fLocal_125 = 134.3799f;
	Local_126 = { 1393.052f, 3613.763f, 37.9419f };
	fLocal_129 = 88.1351f;
	Local_130 = { -131.6681f, 6500.699f, 28.628f };
	fLocal_133 = 214.1093f;
	Local_134 = { 1396.415f, 3610.146f, 37.9419f };
	fLocal_137 = 23.6499f;
	Local_138 = { -144.3017f, 6359.261f, 30.4905f };
	fLocal_141 = 29.4514f;
	Local_142 = { -113.86f, 6463.06f, 34.1f };
	Local_145 = { 0f, 0f, -45f };
	Local_148 = { -131.0836f, 6445.028f, 30.45136f };
	Local_151 = { -111.19f, 6462.28f, 32.08f };
	Local_154 = { -105.6964f, 6467.58f, 31.6343f };
	Local_157 = { -110.3759f, 6482.127f, (33.93835f - 0.23f) };
	Local_160 = { 0f, 0f, -135f };
	iLocal_250 = -1;
	iLocal_251 = -1;
	iLocal_252 = -1;
	iLocal_257 = 1;
	iLocal_266 = -1;
	Local_268 = { -66.02775f, 6432.555f, 29.62774f };
	Local_271 = { -101.9678f, 6396.955f, 52.85154f };
	fLocal_274 = 26.75f;
	cLocal_275 = "RBS1AUD";
	sLocal_276 = "RBsetup";
	iLocal_358 = -1;
	StringCopy(&cLocal_663, "", 24);
	sLocal_682 = "palsetupwalk";
	iLocal_685 = 5;
	fLocal_1325 = 100f;
	Local_1338 = { 1391.68f, 3582.978f, 33.74656f };
	Local_1341 = { 1430.258f, 3597.642f, 40.45911f };
	fLocal_1344 = 33f;
	Local_1345 = { 1403.741f, 3593.747f, 33.8199f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_585(37, 0);
		GlobalFunc_585(38, 0);
		GlobalFunc_10632();
		func_753();
	}
	MISC::SET_MISSION_FLAG(1);
	func_745();
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("premier"), 3);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
		if (iLocal_643)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]) && !PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					fVar1 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_51[iVar0], 0)) < (fVar1 * fVar1))
					{
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					}
				}
				iVar0++;
			}
		}
		if (!iLocal_232)
		{
			if (iLocal_47 != 13)
			{
				func_691(iLocal_47);
			}
			iLocal_232 = 1;
		}
		switch (iLocal_47)
		{
			case 0:
				func_403();
				break;
			
			case 1:
				func_372();
				func_369();
				break;
			
			case 2:
				func_356();
				break;
			
			case 3:
				func_350();
				func_369();
				break;
			
			case 4:
				func_349();
				break;
			
			case 5:
				func_341();
				func_369();
				break;
			
			case 6:
				func_295();
				break;
			
			case 7:
				func_294();
				func_177();
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -986.0042f, 5367.315f, 50.05532f, -1003.946f, 5402.259f, 39.60506f, 24.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1511.873f, 6236.63f, -81.14642f, 1527.35f, 6704.018f, 71.62516f, 215.5f, 0, 1, 0))
				{
					if (GlobalFunc_8315() == 0)
					{
						func_87("CBH_COPFAIL");
					}
					else
					{
						func_87("CBH_COPFAILT");
					}
				}
				break;
			
			case 8:
				func_82();
				break;
			
			case 11:
				func_76();
				break;
			
			case 9:
				func_27();
				break;
			
			case 13:
				break;
			
			case 10:
				if ((MISC::GET_GAME_TIMER() - iLocal_265) > 1000)
				{
					if (!Local_583.f_9)
					{
						Local_583.f_9 = 1;
					}
					GlobalFunc_4956();
					HUD::CLEAR_PRINTS();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_265) > 2000)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_265) > 500)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_51)
					{
						if (!PED::IS_PED_INJURED(iLocal_51[iVar2]) && !PED::IS_PED_FLEEING(iLocal_51[iVar2]))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_265) > (500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1500))
							{
								TASK::CLEAR_PED_TASKS(iLocal_51[iVar2]);
								TASK::TASK_SMART_FLEE_PED(iLocal_51[iVar2], PLAYER::PLAYER_PED_ID(), 200f, 200000, 0, 0);
							}
						}
						iVar2++;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_265) > 3500)
				{
					func_87("CBH_BNKFAIL");
				}
				break;
		}
		if (func_24())
		{
			if (GlobalFunc_8315() == 0)
			{
				func_87("CBH_BNKFAIL");
			}
			else
			{
				func_87("CBH_BNKFAILT");
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_FOCUS_ON_BANK"))
			{
				AUDIO::START_AUDIO_SCENE("PS_1_FOCUS_ON_BANK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_FOCUS_ON_BANK"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_1_FOCUS_ON_BANK");
		}
		func_22();
		func_21();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			if ((PED::IS_PED_INJURED(iLocal_50) || ENTITY::IS_ENTITY_DEAD(iLocal_50)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_50))
			{
				func_87("CBH_LESTDED");
			}
		}
		if (iLocal_47 < 7 || iLocal_47 == 8)
		{
			func_20();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
			{
				if ((PED::IS_PED_INJURED(uLocal_312[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_312[2])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_312[2]))
				{
					func_87("CMN_TDIED");
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_1433) > 3000)
		{
			bVar3 = false;
			if (func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &bVar3))
			{
				if (bVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]) || ENTITY::DOES_ENTITY_EXIST(iLocal_50))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
						{
							iVar4 = uLocal_312[2];
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
						{
							iVar4 = iLocal_50;
						}
						if (!PED::IS_PED_INJURED(iVar4))
						{
							if (GlobalFunc_2227(iVar4, PLAYER::PLAYER_PED_ID()) || ((!PED::IS_PED_IN_ANY_VEHICLE(iVar4, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar4, 1)) < 400f))
							{
								if (iLocal_1434 == 0)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_50)
									{
										StringConCat(&Var5, "LCITY1", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY1", 24);
									}
									if (GlobalFunc_10618(&Local_359, cLocal_275, &Var5, 8, 0, 0, 0))
									{
										iLocal_1434++;
									}
								}
								else if (iLocal_1434 == 1)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_50)
									{
										StringConCat(&Var5, "LCITY2", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY2", 24);
									}
									if (GlobalFunc_10618(&Local_359, cLocal_275, &Var5, 8, 0, 0, 0))
									{
										iLocal_1434++;
									}
								}
								else if (iLocal_1434 == 2)
								{
									func_87("CBH_CFAIL");
								}
							}
						}
					}
				}
			}
			iLocal_1433 = MISC::GET_GAME_TIMER();
		}
		func_5();
		if (!bLocal_236)
		{
			if (func_3())
			{
				iVar11 = 0;
				while (iVar11 < iLocal_51)
				{
					if (!PED::IS_PED_INJURED(iLocal_51[iVar11]))
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_51[iVar11], PLAYER::PLAYER_PED_ID());
					}
					iVar11++;
				}
				bLocal_236 = true;
				Local_583.f_9 = 1;
				func_1();
				iLocal_265 = MISC::GET_GAME_TIMER();
				iLocal_47 = 10;
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && !bLocal_236)
		{
			if (iLocal_47 > 0 && iLocal_47 < 6)
			{
				func_82();
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
		{
			if (iLocal_47 == 1)
			{
				if (!bLocal_239 && iLocal_253 > 1)
				{
					if (!PED::IS_PED_INJURED(uLocal_312[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_312[2], iLocal_66, -1, 0, 2f, 1, 0);
						}
					}
				}
			}
			else if ((iLocal_47 == 3 || iLocal_47 == 5) || iLocal_47 == 6)
			{
				if (!PED::IS_PED_INJURED(uLocal_312[2]))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(uLocal_312[2], iLocal_66, -1, 2, 2f, 1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_66, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50, -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_50, iLocal_66, -1, 0, 2f, 1, 0);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_66, 0))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_50, 0);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_312[2]))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uLocal_312[2], 0);
				}
			}
		}
		if (bLocal_233)
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("SKIP IS ACTIVE", 0.9f, 0.02f, 0f, 0, 0, 255, 255);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x978
{
	GlobalFunc_703(&uLocal_59);
	GlobalFunc_703(&uLocal_60);
	GlobalFunc_703(&uLocal_58);
	GlobalFunc_703(&uLocal_57);
	GlobalFunc_703(&uLocal_57);
	GlobalFunc_703(&uLocal_61);
	GlobalFunc_703(&uLocal_62);
}


int func_3()//Position - 0x9C2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	iVar0 = 0;
	if (iLocal_47 == 1)
	{
		if (Local_583.f_9)
		{
			iVar0 = 1;
		}
	}
	if (func_24())
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			iVar0 = 1;
		}
		if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -109.2893f, 6468.679f, 30.54522f, -114.6985f, 6474.16f, 33.92928f, 1.5f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	if (iLocal_47 < 6)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar1]))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_51[iVar1], 1) };
				if (MISC::IS_BULLET_IN_AREA(Var2, 2f, 1))
				{
					iVar0 = 1;
				}
				if (((((((FIRE::IS_EXPLOSION_IN_SPHERE(10, Var2, 20f) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Var2, 20f))
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_INJURED(iLocal_51[iVar1]))
				{
					iVar0 = 1;
				}
				else if (PED::IS_PED_RAGDOLL(iLocal_51[iVar1]) || PED::IS_PED_FLEEING(iLocal_51[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
	}
	if (!func_4())
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar5, 1);
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		iVar6 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar6, -107.3918f, 6466.308f, 30.63434f, -112.6943f, 6461.029f, 33.96836f, 4.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && Local_583.f_9) && iLocal_47 < 7)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_4()//Position - 0xC01
{
	return ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -120.7033f, 6486.524f, 35.46841f, -141.6632f, 6466.175f, 30.68864f, 9.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -98.36755f, 6455.173f, 42.13557f, -122.3198f, 6479.52f, 30.4585f, 45.75f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -112.9958f, 6484.136f, 35.46868f, -124.8357f, 6485.98f, 30.29035f, 8f, 0, 1, 0));
}

void func_5()//Position - 0xCA0
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1398.831f, 3609.659f, 37.9892f, 1387.375f, 3605.516f, 41.0859f, 15.75f, 0, 1, 0))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_83))
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				uLocal_83 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("cs_rbhs_int_delap_dust", 1392.172f, 3604.299f, 39.19458f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_83))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_83, 0);
		STREAMING::REMOVE_PTFX_ASSET();
	}
}














int func_19(struct<2> Param0, Vector3 vParam2, int iParam3)//Position - 0x1401
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam3 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_20()//Position - 0x1490
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_66, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_66, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_66, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_66, 1, 40000))
			{
				func_87("CBH_VEHSTUCK");
			}
		}
		else
		{
			func_87("CMN_GENDEST");
		}
	}
}

void func_21()//Position - 0x14FA
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_640) || !ENTITY::DOES_ENTITY_EXIST(iLocal_639))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_154) < SYSTEM::POW(100f, 2f))
		{
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cbankvauldoor01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cbankvauldoor01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_640))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), 0))
					{
						iLocal_640 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), 1, 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_640, 0);
					}
				}
				else
				{
					iLocal_639 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cbankvauldoor01"), -104.6f, 6473.44f, 31.8f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_639, 0f, 0f, 45.72f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_639, 1);
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_154) > SYSTEM::POW(150f, 2f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_640))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_640))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_640, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_640);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_639))
		{
			OBJECT::DELETE_OBJECT(&iLocal_639);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cbankvauldoor01"));
	}
}

void func_22()//Position - 0x1637
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64) || !ENTITY::DOES_ENTITY_EXIST(Local_583))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_157) < SYSTEM::POW(100f, 2f))
		{
			STREAMING::REQUEST_MODEL(Local_583.f_7);
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_MODEL_LOADED(Local_583.f_7))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_157, 1f, joaat("prop_ld_alarm_01"), 0))
					{
						iLocal_64 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_157, 1f, joaat("prop_ld_alarm_01"), 1, 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_64, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_64, 0, 0);
					}
				}
				else
				{
					Local_583 = OBJECT::CREATE_OBJECT(Local_583.f_7, Local_157, 1, 1, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_583, 50);
					Local_583.f_14 = 50;
					ENTITY::SET_ENTITY_ROTATION(Local_583, Local_160, 2, 1);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_583))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_583) != Local_583.f_7)
			{
				STREAMING::REQUEST_MODEL(Local_583.f_7);
				if (STREAMING::HAS_MODEL_LOADED(Local_583.f_7))
				{
					OBJECT::DELETE_OBJECT(&Local_583);
				}
			}
			if (!Local_583.f_9)
			{
				if (func_23())
				{
					Local_583.f_7 = joaat("prop_ld_alarm_01_dam");
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Shoot_box", Local_583, "Paleto_Score_Setup_Sounds", 0, 0);
					Local_583.f_9 = 1;
				}
			}
			else if (!iLocal_243 && Local_583.f_13 > 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_alarm_damage_sparks", Local_157, Local_160, 1065353216, 0, 0, 0);
					iLocal_243 = 1;
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_583.f_1) < SYSTEM::POW(150f, 2f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_583))
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_583) != Local_583.f_7)
					{
						STREAMING::REQUEST_MODEL(Local_583.f_7);
						AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM");
						if (STREAMING::HAS_MODEL_LOADED(Local_583.f_7))
						{
							OBJECT::DELETE_OBJECT(&Local_583);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_583))
				{
					STREAMING::REQUEST_MODEL(Local_583.f_7);
					if (STREAMING::HAS_MODEL_LOADED(Local_583.f_7))
					{
						Local_583 = OBJECT::CREATE_OBJECT(Local_583.f_7, Local_583.f_1, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(Local_583, Local_583.f_4, 2, 1);
					}
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_157) > SYSTEM::POW(150f, 2f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_64))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_64, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_64);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_583))
			{
				OBJECT::DELETE_OBJECT(&Local_583);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_alarm_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_alarm_01_dam"));
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
	if (Local_583.f_9)
	{
		if (!AUDIO::IS_ALARM_PLAYING("PALETO_BAY_SCORE_ALARM"))
		{
			if (AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM"))
			{
				AUDIO::START_ALARM("PALETO_BAY_SCORE_ALARM", 0);
			}
		}
	}
	if (!Local_583.f_9)
	{
		if (AUDIO::IS_ALARM_PLAYING("PALETO_BAY_SCORE_ALARM"))
		{
			AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 0);
		}
	}
}

bool func_23()//Position - 0x18F6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_583))
	{
		if (ENTITY::GET_ENTITY_HEALTH(Local_583) < Local_583.f_14)
		{
			if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_583, PLAYER::PLAYER_PED_ID(), 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(25, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f))
			{
				Local_583.f_13 = (Local_583.f_13 + (Local_583.f_14 - ENTITY::GET_ENTITY_HEALTH(Local_583)));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_583);
				Local_583.f_14 = ENTITY::GET_ENTITY_HEALTH(Local_583);
			}
		}
		Local_583.f_14 = ENTITY::GET_ENTITY_HEALTH(Local_583);
	}
	return Local_583.f_13 > 0;
}

bool func_24()//Position - 0x1A55
{
	return ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -116.8022f, 6472.056f, 33.47937f, -111.1819f, 6466.363f, 30.63431f, 7.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -102.2175f, 6471.64f, 34.32764f, -110.6665f, 6463.194f, 30.63855f, 5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -99.39606f, 6461.184f, 33.66985f, -104.3902f, 6466.2f, 30.63431f, 2f, 0, 1, 0));
}



void func_27()//Position - 0x1B1C
{
	if (GlobalFunc_2033(0) < 500 && !func_74())
	{
		GlobalFunc_10829(0, 1, 500, 0, 0);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && !PED::IS_PED_INJURED(iLocal_50)) && !PED::IS_PED_INJURED(uLocal_312[2]))
	{
		switch (iLocal_689)
		{
			case 0:
				iLocal_690 = 0;
				iLocal_691 = 0;
				iLocal_692 = 0;
				iLocal_693 = 0;
				if (HUD::DOES_BLIP_EXIST(uLocal_61))
				{
					HUD::REMOVE_BLIP(&uLocal_61);
				}
				HUD::CLEAR_PRINTS();
				GlobalFunc_5105();
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_527("CMN_GENGETIN", 7500, 1);
				}
				iLocal_689++;
				break;
			
			case 1:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					if (!iLocal_693)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 10f && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_NOGUN", 8, 0, 0, 0))
							{
								iLocal_693 = 1;
							}
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						uLocal_57 = GlobalFunc_5104(-316.8679f, 6071.798f, 30.1981f, 1);
						if (!iLocal_693 || (iLocal_693 && !GlobalFunc_111()))
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if ((!iLocal_690 && iLocal_693) && !GlobalFunc_111())
					{
						GlobalFunc_527("CBH_GOTOSHOP", 7500, 1);
						iLocal_690 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						HUD::REMOVE_BLIP(&uLocal_58);
					}
				}
				else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_66, 1), -326.3011f, 6077.182f, 30.4548f) > 20f)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
				}
				else if (!GlobalFunc_537(HUD::GET_BLIP_COORDS(uLocal_57), -326.3011f, 6077.182f, 30.4548f, 15f))
				{
					if (!iLocal_691)
					{
						GlobalFunc_527("CBH_BUYGUN", 7500, 1);
						iLocal_691 = 1;
					}
					HUD::SET_BLIP_COORDS(uLocal_57, -326.3011f, 6077.182f, 30.4548f);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -316.8679f, 6071.798f, 30.1981f, Global_18, 1, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						HUD::REMOVE_BLIP(&uLocal_58);
					}
					iLocal_689++;
				}
				if (((GlobalFunc_8372(32) && HUD::DOES_BLIP_EXIST(uLocal_57)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && GlobalFunc_100(HUD::GET_BLIP_COORDS(uLocal_57), -326.3011f, 6077.182f, 30.4548f))
				{
					iLocal_689 = 5;
				}
				break;
			
			case 2:
				if (GlobalFunc_530(iLocal_66, 1093140480, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0);
					iLocal_689++;
				}
				break;
			
			case 3:
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					if (!iLocal_691)
					{
						GlobalFunc_527("CBH_BUYGUN", 7500, 1);
						iLocal_691 = 1;
					}
					uLocal_57 = GlobalFunc_5104(-326.3011f, 6077.182f, 30.4548f, 0);
				}
				if (GlobalFunc_8372(32))
				{
					iLocal_689++;
				}
				break;
			
			case 4:
				if (GlobalFunc_8372(32))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (!GlobalFunc_331())
					{
						if (func_74())
						{
							uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
							GlobalFunc_527("CMN_GENGETBCK", 7500, 1);
							iLocal_693 = 0;
							iLocal_689++;
						}
						else if (!iLocal_693)
						{
							GlobalFunc_527("CBH_GUNREM", 7500, 1);
							iLocal_693 = 1;
						}
					}
					else if (iLocal_693)
					{
						iLocal_693 = 0;
					}
				}
				else
				{
					iLocal_689 = (iLocal_689 - 1);
				}
				break;
			
			case 5:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					if (!iLocal_693)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 10f && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_GUNBACK", 8, 0, 0, 0))
							{
								iLocal_693 = 1;
							}
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						uLocal_57 = GlobalFunc_5104(Local_111, 1);
					}
					if ((!iLocal_692 && iLocal_693) && !GlobalFunc_111())
					{
						GlobalFunc_527("CBH_GOBKBNK", 7500, 1);
						iLocal_692 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						HUD::REMOVE_BLIP(&uLocal_58);
					}
				}
				else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_66, 1), Local_111) > 30f)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
				}
				else
				{
					func_28(5);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, Global_18, 1, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					iLocal_689++;
				}
				break;
			
			case 6:
				if (GlobalFunc_530(iLocal_66, 1093140480, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0);
					iLocal_689 = 0;
					func_28(5);
				}
				break;
			}
	}
	if (Local_583.f_9)
	{
		func_28(5);
	}
	if (iLocal_689 < 5)
	{
		if (func_74())
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::REMOVE_BLIP(&uLocal_57);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			iLocal_689 = 5;
		}
	}
	else if (!func_74())
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::REMOVE_BLIP(&uLocal_57);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			HUD::REMOVE_BLIP(&uLocal_58);
		}
		iLocal_689 = 0;
	}
}

void func_28(int iParam0)//Position - 0x2093
{
	if (iParam0 != 13 && iParam0 != 0)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		iLocal_234 = 0;
		if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	iLocal_253 = 0;
	iLocal_47 = iParam0;
	iLocal_232 = 0;
}














































int func_74()//Position - 0x380E
{
	if ((((((((((((((((((((((((((((((((((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")) == 0) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_mg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_mg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatmg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatmg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sawnoffshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sawnoffshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_remotesniper"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_remotesniper")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_minigun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_minigun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol50"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol50")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultsmg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultsmg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpupshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpupshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_specialcarbine"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_specialcarbine")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpuprifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_bullpuprifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavypistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavypistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_snspistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_snspistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_vintagepistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_vintagepistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_gusenberg"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_gusenberg")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_musket"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_musket")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavyshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavyshotgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpdw"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpdw")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanpistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanpistol")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_railgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_railgun")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_compactrifle"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_compactrifle")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_dbshotgun"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_dbshotgun")) == 0))
	{
		return 0;
	}
	return 1;
}


void func_76()//Position - 0x3D9A
{
	switch (iLocal_49)
	{
		case 4:
			switch (iLocal_719)
			{
				case 0:
					GlobalFunc_4956();
					if (!PED::IS_PED_INJURED(iLocal_356) && !PED::IS_PED_FLEEING(iLocal_356))
					{
						if (!PED::IS_PED_INJURED(iLocal_356))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_356, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						}
					}
					if (func_80("RBS1_BKRFAIL", iLocal_356))
					{
						iLocal_719++;
					}
					break;
				
				case 1:
					if (!GlobalFunc_111() && SYSTEM::TIMERA() > 2000)
					{
						func_87("CBH_SECALT");
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_719)
			{
				case 0:
					GlobalFunc_4956();
					func_77();
					iLocal_719++;
					break;
				
				case 1:
					if (!GlobalFunc_111() && SYSTEM::TIMERA() > 2000)
					{
						if (bLocal_231)
						{
							func_87("CBH_SPOTLT");
						}
						else
						{
							func_87("CBH_SPOTLT");
						}
					}
					break;
			}
			break;
		
		case 2:
		case 1:
			switch (iLocal_719)
			{
				case 0:
					GlobalFunc_4956();
					func_77();
					iLocal_719++;
					break;
				
				case 1:
					if (func_80("RBS1_BNKFAIL", iLocal_51[0]))
					{
						iLocal_719++;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111() && SYSTEM::TIMERA() > 2000)
					{
						if (bLocal_231)
						{
							func_87("CBH_COPFAIL");
						}
						else
						{
							func_87("CBH_BNKFAIL");
						}
					}
					break;
			}
			break;
		
		case 5:
			switch (iLocal_719)
			{
				case 0:
					GlobalFunc_4956();
					func_77();
					iLocal_719++;
					break;
				
				case 1:
					if (func_80("RBS1_WLFAIL", 0))
					{
						iLocal_719++;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111() && SYSTEM::TIMERA() > 2000)
					{
						func_87("CBH_COPFAIL");
					}
					break;
			}
			break;
		
		case 6:
			break;
	}
}

void func_77()//Position - 0x3F93
{
	int iVar0;
	
	uLocal_720 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1082130432);
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51[iVar0], 17, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51[iVar0], -2065892691);
			if (!bLocal_231)
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_51[iVar0], PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_SHOCKING_EVENT_REACT(iLocal_51[iVar0], uLocal_720);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_546)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_546[iVar0 /*9*/].f_3))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_546[iVar0 /*9*/].f_3);
			}
		}
		if (!PED::IS_PED_INJURED(Local_546[iVar0 /*9*/][0]))
		{
			Local_716 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + func_78(ENTITY::GET_ENTITY_COORDS(Local_546[iVar0 /*9*/][0], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f) };
			TASK::OPEN_SEQUENCE_TASK(&uLocal_714);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0) && PED::IS_PED_IN_VEHICLE(Local_546[iVar0 /*9*/][0], Local_546[iVar0 /*9*/].f_3, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_546[iVar0 /*9*/].f_3, 1)) < 900f)
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_546[iVar0 /*9*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 20f, 786469, 20f, 10f, 1);
				}
				TASK::TASK_VEHICLE_MISSION(0, Local_546[iVar0 /*9*/].f_3, 0, 5, 10f, 786469, 10f, 10f, 1);
				TASK::TASK_LEAVE_VEHICLE(0, Local_546[iVar0 /*9*/].f_3, 256);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_716, PLAYER::PLAYER_PED_ID(), 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_714);
			TASK::TASK_PERFORM_SEQUENCE(Local_546[iVar0 /*9*/][0], uLocal_714);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_714);
		}
		if (!PED::IS_PED_INJURED(Local_546[iVar0 /*9*/][1]))
		{
			Local_716 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + func_78(ENTITY::GET_ENTITY_COORDS(Local_546[iVar0 /*9*/][1], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f) };
			TASK::OPEN_SEQUENCE_TASK(&uLocal_715);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0) && PED::IS_PED_IN_VEHICLE(Local_546[iVar0 /*9*/][1], Local_546[iVar0 /*9*/].f_3, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(0, Local_546[iVar0 /*9*/].f_3, 256);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_716, PLAYER::PLAYER_PED_ID(), 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_715);
			TASK::TASK_PERFORM_SEQUENCE(Local_546[iVar0 /*9*/][1], uLocal_715);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_715);
		}
		iVar0++;
	}
}

Vector3 func_78(struct<3> Param0, float fParam3)//Position - 0x4268
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_107(Param0) };
	Var0.x = (Var0.x * fParam3);
	Var0.f_1 = (Var0.f_1 * fParam3);
	Var0.f_2 = (Var0.f_2 * fParam3);
	return Var0;
}


int func_80(char* sParam0, int iParam1)//Position - 0x42DC
{
	struct<8> Var0;
	struct<8> Var16;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1) && !PED::IS_PED_INJURED(iLocal_50))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 400f && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 400f)
			{
				if (GlobalFunc_10618(&Local_359, cLocal_275, sParam0, 9, 0, 0, 0))
				{
					return 1;
				}
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 400f)
			{
				StringCopy(&Var0, sParam0, 64);
				StringConCat(&Var0, "_1", 64);
				if (GlobalFunc_10630(&Local_359, cLocal_275, sParam0, &Var0, 9, 0, 0))
				{
					return 1;
				}
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 400f)
			{
				StringCopy(&Var16, sParam0, 64);
				StringConCat(&Var16, "_2", 64);
				if (GlobalFunc_10630(&Local_359, cLocal_275, sParam0, &Var16, 9, 0, 0))
				{
					return 1;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_50) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 400f)
	{
		if (GlobalFunc_10618(&Local_359, cLocal_275, sParam0, 9, 0, 0, 0))
		{
			return 1;
		}
	}
	else
	{
		SYSTEM::SETTIMERA(0);
		return 1;
	}
	return 0;
}


void func_82()//Position - 0x44A2
{
	if (iLocal_47 != 8)
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		GlobalFunc_4935();
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::REMOVE_BLIP(&uLocal_57);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_59))
		{
			HUD::SET_BLIP_ALPHA(uLocal_59, 0);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_60))
		{
			HUD::SET_BLIP_ALPHA(uLocal_60, 0);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_61))
		{
			HUD::SET_BLIP_ALPHA(uLocal_61, 0);
		}
		HUD::CLEAR_GPS_MULTI_ROUTE();
		HUD::CLEAR_GPS_CUSTOM_ROUTE();
		iLocal_48 = iLocal_47;
		iLocal_47 = 8;
		iLocal_669 = 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			if (!iLocal_669)
			{
				if ((!PED::IS_PED_INJURED(uLocal_312[2]) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_312[2], iLocal_66)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_WANTED", 8, 0, 0, 0))
					{
						iLocal_669 = 1;
					}
				}
			}
			func_84(&Local_536);
		}
		else if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (iLocal_48 == 1)
	{
		if (func_83(uLocal_312[2], &Local_540))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4956();
			func_87("CBH_AB2TREV");
		}
	}
	else if (iLocal_48 != 7)
	{
		if (func_83(uLocal_312[2], &Local_542))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4956();
			func_87("CBH_AB2BOTH");
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_669 = 0;
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::SET_BLIP_ROUTE(uLocal_57, 1);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_59))
		{
			HUD::SET_BLIP_ALPHA(uLocal_59, 255);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_60))
		{
			HUD::SET_BLIP_ALPHA(uLocal_60, 255);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_61))
		{
			HUD::SET_BLIP_ALPHA(uLocal_61, 255);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
		iLocal_47 = iLocal_48;
		Local_536.f_1 = 0;
	}
	else if (Local_583.f_9)
	{
		func_87("CBH_COPFAIL");
	}
}

int func_83(int iParam0, var uParam1)//Position - 0x4665
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 22500f)
			{
				return 1;
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 10000f && (MISC::GET_GAME_TIMER() - iLocal_660) > 20000)
			{
				iLocal_660 = MISC::GET_GAME_TIMER();
				uParam1->f_1 = 0;
				func_84(uParam1);
			}
		}
	}
	return 0;
}

void func_84(var uParam0)//Position - 0x46E5
{
	if (!uParam0->f_1)
	{
		if (!MISC::IS_STRING_NULL(*uParam0))
		{
			GlobalFunc_164(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}



void func_87(char* sParam0)//Position - 0x4739
{
	GlobalFunc_10835(sParam0);
	func_164();
	GlobalFunc_4935();
	GlobalFunc_4956();
	AUDIO::TRIGGER_MUSIC_EVENT("RH1_FAIL");
	while (!GlobalFunc_145())
	{
		func_22();
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (uLocal_312.f_7 == 2)
			{
				GlobalFunc_10991(&uLocal_312, 1, 1, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (uLocal_312.f_7 == 2)
		{
			GlobalFunc_10991(&uLocal_312, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		PED::DELETE_PED(&iLocal_50);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[0]))
	{
		PED::DELETE_PED(&(uLocal_312[0]));
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
	{
		PED::DELETE_PED(&(uLocal_312[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_357);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, -112.9441f, 6461.442f, 27.96845f, -98.55077f, 6476.093f, 35.10856f, 25f, 0, 1, 0))
	{
		if (GlobalFunc_8315() == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_66, -116.9822f, 6453.094f, 30.9129f, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_66, -0.004f, 0.0094f, 0.3691f, 0.9293f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_66);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_66);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_357) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_357, -112.9441f, 6461.442f, 27.96845f, -98.55077f, 6476.093f, 35.10856f, 25f, 0, 1, 0))
	{
		if (GlobalFunc_8315() == 2 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_357, -115.937f, 6455.014f, 30.9471f, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_357, 0.0006f, -0.1305f, -0.0066f, 0.9914f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_357);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_357);
		}
	}
	if (func_24() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -137.3856f, 6475.481f, 32.4512f, 5f, 5f, 5f, 0, 1, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -117.3143f, 6461.553f, 30.4684f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 195.5377f);
	}
	GlobalFunc_585(37, 0);
	GlobalFunc_585(38, 0);
	CUTSCENE::REMOVE_CUTSCENE();
	func_753();
}













































































void func_164()//Position - 0xC445
{
	int iVar0;
	
	if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_251))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
			}
			iVar0++;
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
		{
			if (!PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][0]))
			{
				TASK::CLEAR_PED_TASKS(Local_546[iLocal_257 /*9*/][0]);
			}
			if (!PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][1]))
			{
				TASK::CLEAR_PED_TASKS(Local_546[iLocal_257 /*9*/][1]);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_546[iLocal_257 /*9*/].f_3, -8f, 1);
				}
			}
		}
	}
}













void func_177()//Position - 0xD3AD
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	var uVar14;
	struct<2> Var15;
	struct<3> Var19;
	int iVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	
	GlobalFunc_502();
	switch (iLocal_253)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && !PED::IS_PED_INJURED(uLocal_312[2]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 242628503) != 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, 1);
					iLocal_247 = 1;
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_TRUCK_LOGS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
					PED::SET_PED_HELMET(uLocal_312[2], 0);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_357, 0);
					iLocal_1351 = 0;
					iVar0 = 0;
					while (iVar0 < iLocal_1331)
					{
						iLocal_1331[iVar0] = 0;
						iLocal_1334[iVar0] = 0;
						iVar0++;
					}
					bLocal_1337 = false;
					bLocal_1352 = true;
					bLocal_1353 = false;
					bLocal_1354 = false;
					iLocal_246 = 0;
					iLocal_1417 = 0;
					iLocal_1418 = 0;
					iLocal_1419 = 0;
					iLocal_1420 = 0;
					iLocal_1421 = 0;
					iLocal_1422 = 0;
					iLocal_643 = 0;
					iLocal_1432 = 0;
					iLocal_1428 = 0;
					iLocal_1429 = 0;
					Local_210[0 /*3*/] = { 262.3121f, 4447.511f, 53.83961f };
					Local_210[1 /*3*/] = { -210.8312f, 4482.656f, 60.27203f };
					Local_210[2 /*3*/] = { -1119.857f, 5254.628f, 74.45103f };
					Local_210[3 /*3*/] = { -912.0435f, 5407.727f, 36.07696f };
					Local_210[4 /*3*/] = { -791.7217f, 5470.604f, 33.07196f };
					Local_210[5 /*3*/] = { -625.3994f, 5531.649f, 44.20467f };
					iLocal_1416 = (iLocal_1368 - 1);
					iLocal_1415 = (iLocal_1389 - 1);
					func_292(-415.5206f, 6124.96f, 30.3722f, &iLocal_1389);
					func_292(-653.8552f, 5356.884f, 57.9293f, &iLocal_1389);
					func_292(-943.5536f, 5257.132f, 81.4484f, &iLocal_1389);
					func_292(-483.123f, 4917.299f, 145.827f, &iLocal_1389);
					func_292(Local_1345, &iLocal_1389);
					func_292(-415.5206f, 6124.96f, 30.3722f, &iLocal_1368);
					func_292(-653.8552f, 5356.884f, 57.9293f, &iLocal_1368);
					func_292(-483.123f, 4917.299f, 145.827f, &iLocal_1368);
					func_292(Local_1345, &iLocal_1368);
					iLocal_1348 = 2;
					iLocal_1349 = iLocal_66;
					iLocal_1350 = iLocal_357;
					VEHICLE::REQUEST_VEHICLE_RECORDING(10, "RBsetup");
					VEHICLE::REQUEST_VEHICLE_RECORDING(11, "RBsetup");
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_276);
					VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_276);
					VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_276);
					VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_276);
					GlobalFunc_729(&uLocal_312, 1, 1);
					GlobalFunc_729(&uLocal_312, 0, 1);
					GlobalFunc_729(&uLocal_312, 2, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, 1, 0);
					RECORDING::_0x293220DA1B46CEBC(3f, 12f, 4);
					CUTSCENE::REMOVE_CUTSCENE();
					RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
					iLocal_253++;
				}
			}
			break;
		
		case 1:
			if ((!PED::IS_PED_INJURED(uLocal_312[iLocal_1348]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
			{
				if ((!iLocal_1351 && PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_66, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_RACE", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						func_290(500);
						iLocal_1351 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 451360105) != 1)
						{
							TASK::TASK_LEAVE_VEHICLE(uLocal_312[2], iLocal_66, 512);
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					if (((SYSTEM::TIMERA() > 1500 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[iLocal_1348], 242628503) != 1) && !PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_357, 0)) && !PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_66, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_357, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_312[iLocal_1348], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						iLocal_253++;
					}
				}
			}
			break;
		
		case 2:
			if ((!PED::IS_PED_INJURED(uLocal_312[iLocal_1348]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_66, 0))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_66, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
					}
					AUDIO::START_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
					uLocal_57 = GlobalFunc_5104(Local_1345, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(162.8428f, 4416.564f, 46.24126f, 102.7305f, 4437.815f, 82.75628f, 12.75f, 1, 0, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(84.0697f, 4480.673f, 12.78804f, -201.9954f, 4211.447f, 99.18795f, 131.75f, 1, 0, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_253++;
				}
			}
			break;
		
		case 3:
			if (!iLocal_1418)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && iLocal_1348 == 2) && !PED::IS_PED_INJURED(uLocal_312[iLocal_1348]))
				{
					if (iLocal_247)
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 1))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, 0);
							iLocal_247 = 0;
						}
					}
					if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[iLocal_1348], 242628503) != 1 && PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_357, 0)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_312[iLocal_1348], 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -91.8094f, 6431.147f, 30.3459f, 15f, 0, joaat("ruffian"), 262275, 3f, 20f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						iLocal_1418 = 1;
					}
					if ((!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF") && !PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_357, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_312[iLocal_1348], 1), ENTITY::GET_ENTITY_COORDS(iLocal_357, 1)) < 4f)
					{
						AUDIO::START_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_357, "PS_1_TREVOR_BIKE", 0);
					}
				}
			}
			else
			{
				if (!iLocal_1419)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_312[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_357))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_312[2], -90.50787f, 6423.877f, 30.38944f, -103.0677f, 6409.822f, 35.4915f, 41.5f, 0, 1, 0))
						{
							TASK::CLEAR_PED_TASKS(uLocal_312[2]);
							TASK::OPEN_SEQUENCE_TASK(&uVar3);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 262275, 5f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(uVar3);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uVar3);
							TASK::CLEAR_SEQUENCE_TASK(&uVar3);
							iLocal_1419 = 1;
						}
					}
				}
				if (!iLocal_1420)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_312[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_357))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_357, Local_118, 40f, 40f, 40f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_312[2]);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_357, 11, "RBsetup", 10f, 786469);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_312[iLocal_1348], 1);
								iLocal_1420 = 1;
							}
						}
					}
				}
			}
			if (bLocal_1352)
			{
				GlobalFunc_2518(&uLocal_312, 2, 1);
				GlobalFunc_1("CBH_SWITCH");
				if (GlobalFunc_10061(&uLocal_312, 0, 1))
				{
					func_266(&Local_95, 0, 0);
					uLocal_312.f_7 = 2;
					Local_278.f_12 = uLocal_312[2];
					HUD::CLEAR_HELP(1);
					bLocal_1353 = true;
				}
			}
			if (bLocal_1353)
			{
				if (GlobalFunc_9809(&Local_278, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if ((Local_278.f_18 && !Local_278.f_19) && uLocal_312.f_7 == 2)
					{
						GlobalFunc_10991(&uLocal_312, 1, 1, 0);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_357, AUDIO::GET_RADIO_STATION_NAME(6));
						AUDIO::SET_INITIAL_PLAYER_STATION(AUDIO::GET_RADIO_STATION_NAME(6));
						RECORDING::_0x293220DA1B46CEBC(3f, 12f, 4);
					}
				}
				else
				{
					AUDIO::_0xB542DE8C3D1CB210(1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, 0);
					iLocal_247 = 0;
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF"))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_357, 0);
						AUDIO::STOP_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_MICHAEL"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
					}
					AUDIO::START_AUDIO_SCENE("PS_1_RACE_AS_TREVOR");
					if (!PED::IS_PED_INJURED(uLocal_312[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_312[0], iLocal_66, 0))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_312[0], iLocal_66, -1, -1, 2f, 1, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_66, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_50, iLocal_66, 0);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_357))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_357, 1) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_357))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
					GlobalFunc_565(714, 1, 0);
					Local_278.f_19 = 1;
					Local_278.f_12 = 0;
					bLocal_1352 = false;
					iLocal_1348 = 0;
					iLocal_1349 = iLocal_357;
					iLocal_1350 = iLocal_66;
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					HUD::REMOVE_BLIP(&uLocal_62);
				}
			}
			else
			{
				if (SYSTEM::TIMERA() > 20000 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1)) > 10000f)
				{
					bLocal_1352 = false;
				}
				if (!iLocal_1421)
				{
					if (((SYSTEM::TIMERA() > 10000 && ENTITY::DOES_ENTITY_EXIST(uLocal_312[2])) && PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1)) < SYSTEM::POW(30f, 2f))
					{
						if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_TRE1", 8, 0, 0, 0))
						{
							iLocal_1421 = 1;
						}
					}
				}
			}
			if ((((!bLocal_1352 && !bLocal_1354) && !PED::IS_PED_INJURED(uLocal_312[iLocal_1348])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1350, 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_1350, 1, 1, 0, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_312[iLocal_1348], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_312[iLocal_1348], 1);
				func_241(&uLocal_721, 10, "RBsetup");
				func_241(&uLocal_1022, 11, "RBsetup");
				if (GlobalFunc_8315() == 2)
				{
					AUDIO::_0xD2DCCD8E16E20997(iLocal_357);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_66, 1);
					func_240(&iLocal_1368, 11, "RBsetup", &uLocal_1022);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_66, 0);
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_357, 0);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_357, 1);
					func_240(&iLocal_1389, 10, "RBsetup", &uLocal_721);
				}
				AUDIO::SET_HORN_ENABLED(iLocal_1350, 0);
				bLocal_1354 = true;
			}
			if (!PED::IS_PED_INJURED(uLocal_312[iLocal_1348]))
			{
				if (bLocal_1354)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (GlobalFunc_8315() == 2)
					{
						iLocal_1418 = 0;
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
						AUDIO::_0xD2DCCD8E16E20997(iLocal_357);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_357, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
						{
							VEHICLE::SET_VEHICLE_STRONG(iLocal_66, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_66, 0, 1, 1, 0, 0, 0, 0, 0);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_66, 0);
						}
						iLocal_253 = 5;
					}
					else
					{
						iLocal_253 = 4;
					}
					AUDIO::TRIGGER_MUSIC_EVENT("RH1_RACE");
					PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_312[iLocal_1348], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_312[iLocal_1348], 1);
					HUD::CLEAR_HELP(1);
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		
		case 4:
			func_20();
			if ((!PED::IS_PED_INJURED(uLocal_312[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
			{
				if (iLocal_247)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, 0);
						iLocal_247 = 0;
					}
				}
				if (!iLocal_1418)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && iLocal_1348 == 2) && !PED::IS_PED_INJURED(uLocal_312[iLocal_1348]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[iLocal_1348], 242628503) != 1 && PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_357, 0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_312[iLocal_1348], 1);
							TASK::OPEN_SEQUENCE_TASK(&uVar4);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -91.8094f, 6431.147f, 30.3459f, 15f, 0, joaat("ruffian"), 786603, 3f, 20f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(uVar4);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uVar4);
							TASK::CLEAR_SEQUENCE_TASK(&uVar4);
							iLocal_1418 = 1;
						}
						if ((!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF") && !PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_357, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_312[iLocal_1348], 1), ENTITY::GET_ENTITY_COORDS(iLocal_357, 1)) < 4f)
						{
							AUDIO::START_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_357, "PS_1_TREVOR_BIKE", 0);
						}
					}
				}
				else if (!iLocal_1419)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 242628503) == 1 && PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_312[2], -90.50787f, 6423.877f, 30.38944f, -103.0677f, 6409.822f, 35.4915f, 41.5f, 0, 1, 0))
						{
							TASK::CLEAR_PED_TASKS(uLocal_312[2]);
							TASK::OPEN_SEQUENCE_TASK(&uVar5);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_357, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(uVar5);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uVar5);
							TASK::CLEAR_SEQUENCE_TASK(&uVar5);
							iLocal_1419 = 1;
						}
					}
				}
				if ((((!iLocal_1417 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)) && !GlobalFunc_111()) && SYSTEM::TIMERA() > 1000)
				{
					HUD::CLEAR_PRINTS();
					sLocal_277 = "RBS1_BANT1";
					GlobalFunc_164("CBH_RACEM", 7500, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_1417 = 1;
				}
				if (iLocal_1417 && SYSTEM::TIMERA() > 7500)
				{
					func_235();
				}
				if (!iLocal_1420)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357) && (!ENTITY::IS_ENTITY_AT_COORD(iLocal_357, Local_118, 40f, 40f, 40f, 0, 1, 0) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 242628503) != 1))
						{
							TASK::CLEAR_PED_TASKS(uLocal_312[2]);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_357, 11, "RBsetup", 10f, 786469);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_312[iLocal_1348], 1);
							iLocal_1420 = 1;
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						uLocal_57 = GlobalFunc_5104(Local_1345, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						HUD::REMOVE_BLIP(&uLocal_58);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
					}
				}
				if (!bLocal_1337)
				{
					func_230(uLocal_312[2], iLocal_357, 11, "RBsetup", &uLocal_1022, 0, 0f);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_312[2], Local_1338, Local_1341, fLocal_1344, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_357, 1, 0);
						}
						bLocal_1337 = true;
					}
					fVar6 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 11, "RBsetup", &uLocal_1022);
					if (fVar6 > fLocal_1323)
					{
						if (GlobalFunc_485(38))
						{
							GlobalFunc_585(38, 0);
						}
						if (!GlobalFunc_485(37))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) < SYSTEM::POW(100f, 2f))
							{
								GlobalFunc_585(37, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) > SYSTEM::POW(120f, 2f))
						{
							GlobalFunc_585(37, 0);
						}
					}
					else
					{
						if (GlobalFunc_485(37))
						{
							GlobalFunc_585(37, 0);
						}
						if (!GlobalFunc_485(38))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) < SYSTEM::POW(100f, 2f))
							{
								GlobalFunc_585(38, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) > SYSTEM::POW(120f, 2f))
						{
							GlobalFunc_585(38, 0);
						}
					}
				}
				else
				{
					if (GlobalFunc_485(37))
					{
						GlobalFunc_585(37, 0);
					}
					if (!GlobalFunc_485(38))
					{
						GlobalFunc_585(38, 1);
					}
					func_227();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1338, Local_1341, fLocal_1344, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_50) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 10000f)
					{
						GlobalFunc_5105();
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_357))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_357, 786469);
						}
						iLocal_253 = 6;
					}
				}
				if (func_83(iLocal_50, &Local_544))
				{
					func_87("CBH_LLEFT");
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(uLocal_312[0]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					fLocal_1324 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 11, "RBsetup", &uLocal_1022);
					func_226(&iLocal_1368, &iLocal_1416, fLocal_1324);
				}
				fVar7 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10, "RBsetup", &uLocal_721);
				if (!iLocal_1421)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_312[0], iLocal_66, 0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[0], 1)) < SYSTEM::POW(30f, 2f))
						{
							if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_ASSHLEM", 8, 0, 0, 0))
							{
								iLocal_1421 = 1;
							}
						}
						else
						{
							iLocal_1421 = 1;
						}
					}
				}
				if (((!iLocal_1417 && iLocal_1421) && !GlobalFunc_111()) && SYSTEM::TIMERA() > 1000)
				{
					HUD::CLEAR_PRINTS();
					sLocal_277 = "RBS1_BANT2";
					GlobalFunc_200(&Local_359, 0);
					GlobalFunc_173(&Local_359, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					GlobalFunc_164("CBH_RACET", 7500, 1);
					iLocal_1417 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_1417 && SYSTEM::TIMERA() > 7500)
				{
					func_235();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_66, 0);
					if (PED::IS_PED_IN_VEHICLE(uLocal_312[0], iLocal_66, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_66, Local_118, 40f, 40f, 40f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_312[0]);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_66, 10, "RBsetup", 10f, 786469);
							}
							else if (!iLocal_1418)
							{
								if ((!PED::IS_PED_INJURED(uLocal_312[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0)) && PED::IS_PED_IN_VEHICLE(uLocal_312[0], iLocal_66, 0))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, -85.30544f, 6422.383f, 30.48431f, -102.2567f, 6405.208f, 34.74021f, 7.5f, 0, 1, 0))
									{
										Var8 = { Vector(30.48431f, 6422.383f, -85.30544f) - Vector(34.74021f, 6405.208f, -102.2567f) };
										Var8.f_2 = 0f;
										Var11 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_66) };
										if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var8.x, Var8.f_1, Var11.x, Var11.f_1)) < 90f)
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_82);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_66, -83.4558f, 6424.933f, 30.4905f, 10f, 0, joaat("premier"), 262144, 2f, 20f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_66, -88.8696f, 6432.077f, 30.4084f, 10f, 0, joaat("premier"), 786469, 10f, 100f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_66, -132.3165f, 6403.165f, 30.4015f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_66, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_82);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_312[0], uLocal_82);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_82);
										}
										else
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_312[0], iLocal_66, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
										}
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_312[0], iLocal_66, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
									}
									iLocal_1418 = 1;
									PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uLocal_312[0], 0);
								}
							}
						}
					}
				}
				if (!bLocal_1337)
				{
					func_230(uLocal_312[0], iLocal_66, 10, "RBsetup", &uLocal_721, 1, fVar7);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_312[0], Local_1338, Local_1341, fLocal_1344, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_66, 1, 0);
						}
						bLocal_1337 = true;
					}
					if (fVar7 > fLocal_1323)
					{
						if (GlobalFunc_485(37))
						{
							GlobalFunc_585(37, 0);
						}
						if (!GlobalFunc_485(38))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) < SYSTEM::POW(100f, 2f))
							{
								GlobalFunc_585(38, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) > SYSTEM::POW(120f, 2f))
						{
							GlobalFunc_585(38, 0);
						}
					}
					else
					{
						if (GlobalFunc_485(38))
						{
							GlobalFunc_585(38, 0);
						}
						if (!GlobalFunc_485(37))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) < SYSTEM::POW(100f, 2f))
							{
								GlobalFunc_585(37, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1345) > SYSTEM::POW(120f, 2f))
						{
							GlobalFunc_585(37, 0);
						}
					}
				}
				else
				{
					if (GlobalFunc_485(38))
					{
						GlobalFunc_585(38, 0);
					}
					if (!GlobalFunc_485(37))
					{
						GlobalFunc_585(37, 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1338, Local_1341, fLocal_1344, 0, 1, 0))
				{
					GlobalFunc_5105();
					SYSTEM::SETTIMERA(0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_66))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_312[0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 1000f)
						{
							TASK::CLEAR_PED_TASKS(uLocal_312[0]);
							TASK::OPEN_SEQUENCE_TASK(&uVar14);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_66, 1412.297f, 3599.638f, 33.8914f, 20f, 0, joaat("premier"), 786469, 3f, 3f);
							TASK::TASK_PAUSE(0, 10000);
							TASK::CLOSE_SEQUENCE_TASK(uVar14);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_312[0], uVar14);
							TASK::CLEAR_SEQUENCE_TASK(&uVar14);
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_66, 786469);
							PED::SET_PED_KEEP_TASK(uLocal_312[0], 1);
						}
						else
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_66, 786469);
						}
						PED::SET_PED_KEEP_TASK(uLocal_312[0], 1);
					}
					PED::SET_PED_KEEP_TASK(uLocal_312[0], 1);
					iLocal_253++;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						HUD::REMOVE_BLIP(&uLocal_58);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						uLocal_58 = GlobalFunc_6783(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && (!VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
			}
			break;
		
		case 6:
			if (HUD::DOES_BLIP_EXIST(uLocal_62))
			{
				HUD::REMOVE_BLIP(&uLocal_62);
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1350) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1350, 0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_1350, 1f);
				ENTITY::SET_ENTITY_COLLISION(iLocal_1350, 1, 0);
			}
			if (!bLocal_1337)
			{
				if (GlobalFunc_8315() == 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1350, Local_1345, 10f, 10f, 10f, 0, 1, 0))
					{
						func_227();
					}
				}
			}
			if (!bLocal_1430)
			{
				if (!bLocal_1337)
				{
					GlobalFunc_553(715);
					StringCopy(&Var15, "RBS1_LES4", 16);
				}
				else
				{
					StringCopy(&Var15, "RBS1_LES5", 16);
				}
				if (GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10618(&Local_359, cLocal_275, &Var15, 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
						bLocal_1430 = true;
					}
				}
				else if (!bLocal_1337)
				{
					SYSTEM::SETTIMERA(0);
					RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
					bLocal_1430 = true;
				}
				else if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_TRE5", 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
					bLocal_1430 = true;
				}
			}
			if (!bLocal_1431)
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1345, Global_18, 1, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_57))
							{
								HUD::REMOVE_BLIP(&uLocal_57);
							}
							while (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1))
							{
								SYSTEM::WAIT(0);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							bLocal_1431 = true;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1338, Local_1341, fLocal_1344, 0, 1, 0))
				{
					bLocal_1431 = true;
				}
			}
			if (bLocal_1431)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
				if (bLocal_1430)
				{
					if (GlobalFunc_8315() == 0)
					{
						if (iLocal_1424 > 0)
						{
							if (!PED::IS_PED_INJURED(uLocal_312[2]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_312[2]);
								Var19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1) };
								iVar22 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var19.x, Var19.f_1);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), 1000, 2052, 4);
								TASK::OPEN_SEQUENCE_TASK(&uVar23);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1), 1f, -1, 0.25f, 512, iVar22);
								TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_arrival_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar23);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uVar23);
								TASK::CLEAR_SEQUENCE_TASK(&uVar23);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_253++;
					}
					else if (SYSTEM::TIMERA() > 3000)
					{
						iLocal_253++;
					}
				}
			}
			break;
		
		case 7:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_TREVOR"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_TREVOR");
			}
			if (GlobalFunc_8315() == 0)
			{
				if (!iLocal_1432 && !PED::IS_PED_INJURED(uLocal_312[2]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missheistpaletoscoresetup", "trevor_arrival_1", 3))
					{
						GlobalFunc_5130(uLocal_312[2], "GENERIC_SHOCKED_MED", 10);
						iLocal_1432 = 1;
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
			if (GlobalFunc_8315() != 0 || SYSTEM::TIMERA() > 3500)
			{
				if (!GlobalFunc_111())
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
					func_185();
				}
			}
			break;
	}
	if (iLocal_253 > 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1345, 1f, 1f, Global_18.f_2, 1, 1, 0);
			if (GlobalFunc_8315() == 2)
			{
				fLocal_1324 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 11, "RBsetup", &uLocal_1022);
				func_226(&iLocal_1368, &iLocal_1416, fLocal_1324);
			}
			else
			{
				fLocal_1324 = func_228(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10, "RBsetup", &uLocal_721);
				func_226(&iLocal_1389, &iLocal_1415, fLocal_1324);
			}
		}
		else if (GlobalFunc_8315() == 2)
		{
			func_184(&iLocal_1416);
		}
		else
		{
			func_184(&iLocal_1415);
		}
	}
	if (GlobalFunc_485(37))
	{
		GRAPHICS::DRAW_DEBUG_TEXT_2D("MIKE WIN CUTSCENE SET TO LOAD", 0f, 0.02f, 0f, 255, 0, 0, 255);
	}
	if (GlobalFunc_485(38))
	{
		GRAPHICS::DRAW_DEBUG_TEXT_2D("TREVOR WIN CUTSCENE SET TO LOAD", 0f, 0.04f, 0f, 255, 0, 0, 255);
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(uLocal_312[iLocal_1348]) && !PED::IS_PED_INJURED(uLocal_312[iLocal_1348])) && PED::IS_PED_IN_ANY_VEHICLE(uLocal_312[iLocal_1348], 0)) && GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), uLocal_312[iLocal_1348])) || HUD::DOES_BLIP_EXIST(uLocal_58)) || iLocal_253 > 6)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_62))
		{
			HUD::REMOVE_BLIP(&uLocal_62);
		}
	}
	else
	{
		func_183(uLocal_312[iLocal_1348], iLocal_1350);
	}
	if (GlobalFunc_8315() == 2)
	{
		if (func_182(iLocal_357, (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) < 0.9f)))
		{
			func_87("CBH_BNKFAILT");
		}
	}
	else if (func_182(iLocal_66, (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) < 0.9f)))
	{
		func_87("CBH_BNKFAIL");
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.7f)
		{
			if (!Local_546[0 /*9*/].f_6)
			{
				func_181(0);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.3f)
		{
			if (!Local_546[2 /*9*/].f_6)
			{
				func_181(2);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.37f)
		{
			if (Local_583.f_9)
			{
				Local_583.f_9 = 0;
				Local_583.f_13 = 0;
				AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 1);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.45f)
		{
			if (!Local_546[3 /*9*/].f_6)
			{
				func_181(3);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.8f)
		{
			if (!iLocal_643)
			{
				func_180();
			}
			if (!Local_546[3 /*9*/].f_6)
			{
				func_181(3);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
			}
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(178228075, 1);
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1852297978, 1);
		}
		if (!iLocal_1429)
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.828f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
			{
				TASK::TASK_ENTER_VEHICLE(Local_546[iLocal_257 /*9*/][1], Local_546[iLocal_257 /*9*/].f_3, -1, 0, 1f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(Local_546[iLocal_257 /*9*/][1], -668482597, 0, 0, 0);
				iLocal_1429 = 1;
			}
		}
		if (!iLocal_1428)
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.828f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
			{
				TASK::TASK_ENTER_VEHICLE(Local_546[iLocal_257 /*9*/][0], Local_546[iLocal_257 /*9*/].f_3, -1, -1, 1f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(Local_546[iLocal_257 /*9*/][1], -668482597, 0, 0, 0);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_546[iLocal_257 /*9*/].f_3, -8f, 1);
				}
				iLocal_1428 = 1;
			}
		}
	}
	else if (!Local_546[iLocal_257 /*9*/].f_6)
	{
		if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0) && !PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][0])) && !PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][1])) && PED::IS_PED_SITTING_IN_VEHICLE(Local_546[iLocal_257 /*9*/][0], Local_546[iLocal_257 /*9*/].f_3)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_546[iLocal_257 /*9*/][1], Local_546[iLocal_257 /*9*/].f_3))
		{
			func_181(1);
		}
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup3");
	}
	iVar24 = 0;
	while (iVar24 < Local_546)
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(Local_546[iVar24 /*9*/].f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar24 /*9*/].f_3, 0)) && !PED::IS_PED_INJURED(Local_546[iVar24 /*9*/][0])) && Local_546[iVar24 /*9*/].f_6) && PED::IS_PED_IN_VEHICLE(Local_546[iVar24 /*9*/][0], Local_546[iVar24 /*9*/].f_3, 0)) && PED::IS_PED_IN_VEHICLE(Local_546[iVar24 /*9*/][1], Local_546[iVar24 /*9*/].f_3, 0))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(Local_546[iVar24 /*9*/][0], -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_546[iVar24 /*9*/][0], -258271821) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_546[iVar24 /*9*/][0], -258271821) != 2)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_546[iVar24 /*9*/].f_3, 1), 119.2184f, 6559.774f, 30.6237f) < SYSTEM::POW(250f, 2f))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_546[iVar24 /*9*/][0], Local_546[iVar24 /*9*/].f_3, 10f, 786491);
				}
			}
			if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_546[iVar24 /*9*/].f_3, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > SYSTEM::POW(100f, 2f) && ENTITY::IS_ENTITY_OCCLUDED(Local_546[iVar24 /*9*/].f_3)) && ENTITY::IS_ENTITY_OCCLUDED(Local_546[iVar24 /*9*/][0])) && ENTITY::IS_ENTITY_OCCLUDED(Local_546[iVar24 /*9*/][1]))
			{
				func_179(&(Local_546[iVar24 /*9*/]));
			}
		}
		iVar24++;
	}
	func_178();
	iVar25 = 0;
	while (iVar25 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar25]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51[iVar25], -100.0933f, 6461.712f, 30.6267f, 3f, 3f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_51[iVar25]))
			{
				PED::DELETE_PED(&(iLocal_51[iVar25]));
			}
		}
		iVar25++;
	}
	if (!iLocal_1422 && iLocal_253 > 3)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_151, 100f, 100f, 100f, 0, 1, 0))
		{
			iVar25 = 0;
			while (iVar25 < iLocal_51)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar25]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_51[iVar25]));
				}
				iVar25++;
			}
			iVar25 = 0;
			while (iVar25 < Local_546)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_546[iVar25 /*9*/][0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_546[iVar25 /*9*/][0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_546[iVar25 /*9*/][1]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_546[iVar25 /*9*/][1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_546[iVar25 /*9*/].f_3))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_546[iVar25 /*9*/].f_3));
				}
				iVar25++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_356);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup3");
			iLocal_1422 = 1;
		}
	}
}

void func_178()//Position - 0xF7AB
{
	if (GlobalFunc_8315() == 0)
	{
		if ((PED::IS_PED_INJURED(uLocal_312[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_312[2])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_312[2]))
		{
			func_87("CMN_TDIED");
		}
		if ((PED::IS_PED_INJURED(iLocal_50) || ENTITY::IS_ENTITY_DEAD(iLocal_50)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_50))
		{
			func_87("CBH_LESTDED");
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_66))
		{
			func_87("CMN_GENDEST");
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_87("CBH_COPFAIL");
		}
	}
	if (GlobalFunc_8315() == 2)
	{
		if ((PED::IS_PED_INJURED(uLocal_312[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_312[0])) || FIRE::IS_ENTITY_ON_FIRE(uLocal_312[0]))
		{
			func_87("CMN_MDIED");
		}
		if ((PED::IS_PED_INJURED(iLocal_50) || ENTITY::IS_ENTITY_DEAD(iLocal_50)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_50))
		{
			func_87("CBH_LESTDED");
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_87("CBH_COPFAILT");
		}
	}
}

void func_179(var uParam0)//Position - 0xF8C0
{
	int iVar0;
	
	if (uParam0->f_5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
			{
				PED::DELETE_PED(uParam0[iVar0]);
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_3));
		}
		uParam0->f_5 = 0;
	}
}

void func_180()//Position - 0xF915
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]) && !PED::IS_PED_INJURED(iLocal_51[iVar0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51[iVar0], 713668775) != 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51[iVar0], -100.5008f, 6461.73f, 30.6343f, 1f, -1, 0.25f, 0, 1193033728);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51[iVar0], -100.5008f, 6461.73f, 30.6343f, 2f, 2f, 3f, 0, 1, 0))
			{
				PED::DELETE_PED(&(iLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	iLocal_643 = 1;
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, 1, 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, 1, 0);
	}
}

void func_181(int iParam0)//Position - 0xFA09
{
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iParam0 /*9*/].f_3, 0) && !PED::IS_PED_INJURED(Local_546[iParam0 /*9*/][0])) && !PED::IS_PED_INJURED(Local_546[iParam0 /*9*/][1]))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_546[iParam0 /*9*/][0], Local_546[iParam0 /*9*/].f_3, 0))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_546[iParam0 /*9*/][0], Local_546[iParam0 /*9*/].f_3, 119.2184f, 6559.774f, 30.6237f, 15f, 0, joaat("sheriff"), 786485, 5f, 5f);
		}
		Local_546[iParam0 /*9*/].f_6 = 1;
	}
}

int func_182(int iParam0, bool bParam1)//Position - 0xFAA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_546)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_546[iVar1 /*9*/][iVar2]))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_546[iVar1 /*9*/][iVar2], PLAYER::PLAYER_PED_ID(), 1) || (!PED::IS_PED_INJURED(Local_546[iVar1 /*9*/][iVar2]) && PED::IS_PED_IN_MELEE_COMBAT(Local_546[iVar1 /*9*/][iVar2]))) || (!PED::IS_PED_INJURED(Local_546[iVar1 /*9*/][iVar2]) && PED::IS_PED_BEING_STEALTH_KILLED(Local_546[iVar1 /*9*/][iVar2])))
				{
					iVar0 = 1;
				}
			}
			iVar2++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar1 /*9*/].f_3, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_546[iVar1 /*9*/].f_3, 5f, 5f, 5f, 0, 1, 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Local_546[iVar1 /*9*/].f_3))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_546[iVar1 /*9*/].f_3))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_546[iVar1 /*9*/].f_3);
							}
							if (iVar1 == iLocal_257 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_546[iLocal_257 /*9*/].f_3, 1f, 1);
							}
							iVar0 = 1;
						}
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_546[iVar1 /*9*/].f_3, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[iVar1], PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = 1;
			}
			if (!PED::IS_PED_INJURED(iLocal_51[iVar1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_51[iVar1], iParam0))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -138.9828f, 6475.819f, 51.22334f, -90.29582f, 6426.385f, 1.471224f, 77.75f, 0, 1, 0))
	{
		iVar0 = 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(3, Local_151, 100f) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && FIRE::IS_ENTITY_ON_FIRE(iLocal_357)))
	{
		iVar0 = 1;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(77, Local_151, 15f))
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -126.4656f, 6476.683f, 30.46826f, -103.3576f, 6453.125f, 37.21962f, 29.5f, 0, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -126.4656f, 6476.683f, 30.46826f, -103.3576f, 6453.125f, 37.21962f, 29.5f, 0, 1, 0)))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_183(int iParam0, int iParam1)//Position - 0xFD73
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_62))
		{
			if (iLocal_1427)
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
				{
					HUD::SET_BLIP_SCALE(uLocal_62, 0.7f);
					iLocal_1427 = 0;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				HUD::SET_BLIP_SCALE(uLocal_62, 1f);
				iLocal_1427 = 1;
			}
			Var0 = { HUD::GET_BLIP_COORDS(uLocal_62) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var0.x = (Var0.x + ((Var3.x - Var0.x) / 10f));
			Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / 10f));
			Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / 10f));
			HUD::SET_BLIP_COORDS(uLocal_62, Var0);
		}
		else
		{
			uLocal_62 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0);
			HUD::SET_BLIP_COLOUR(uLocal_62, 3);
			HUD::SET_BLIP_PRIORITY(uLocal_62, 3);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_62, "CBH_BLIPTREV");
			}
			else
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_62, "CBH_BLIPMIKE");
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_62))
	{
		HUD::REMOVE_BLIP(&uLocal_62);
	}
}

void func_184(int iParam0)//Position - 0xFE8A
{
	if (*iParam0 != -1)
	{
		HUD::CLEAR_GPS_MULTI_ROUTE();
		*iParam0 = -1;
	}
}

void func_185()//Position - 0xFEA1
{
	GlobalFunc_4935();
	GlobalFunc_5103(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_357, 1), Local_126) < 2500f || GlobalFunc_8315() == 0))
	{
		if (VEHICLE::IS_BIG_VEHICLE(iLocal_357))
		{
			GlobalFunc_10236(iLocal_357, 1422.663f, 3614.979f, 33.9476f, 46.7525f, 24, 0);
		}
		else
		{
			GlobalFunc_10236(iLocal_357, 1405.848f, 3598.6f, 34.4038f, 49.567f, 24, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		Global_86864.f_9[0] = iLocal_50;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		Global_86864[0] = iLocal_66;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
	{
		Global_86864[1] = iLocal_357;
	}
	func_753();
}









































void func_226(int iParam0, int iParam1, float fParam2)//Position - 0x13290
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = (*iParam0 - 1);
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (fParam2 <= (iParam0[iVar0 /*5*/])->f_3 && iVar1 == (*iParam0 - 1))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (*iParam1 != iVar1)
	{
		if ((*iParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(iParam0[*iParam1 /*5*/])) > 100f) || *iParam1 == -1)
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[iVar0 /*5*/]));
				iVar0++;
			}
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
		}
		*iParam1 = iVar1;
	}
}

void func_227()//Position - 0x1334A
{
	var uVar0;
	
	if (iLocal_1424 < 3 && iLocal_1424 > 0)
	{
		if ((!CAM::IS_SPHERE_VISIBLE(1405.935f, 3589.429f, 33.9496f, 15f) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1)) > 22500f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1)) > 5625f)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_357, 1405.848f, 3598.6f, 34.4038f, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_357, 0.0483f, -0.1174f, 0.4164f, 0.9003f);
			ENTITY::SET_ENTITY_COORDS(uLocal_312[2], 1404.87f, 3597.943f, 34.894f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_312[2], 135f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_357);
			iLocal_1424 = 3;
		}
	}
	switch (iLocal_1424)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup"))
			{
				if (!PED::IS_PED_INJURED(uLocal_312[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_357))
				{
					TASK::TASK_VEHICLE_PARK(uLocal_312[2], iLocal_357, 1405.848f, 3598.6f, 34.4038f, 49.567f, 1, 90f, 0);
					iLocal_1424++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_312[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_357))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], -272084098) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_357, ENTITY::GET_ENTITY_COORDS(iLocal_357, 1), 5, 1f, 786469, 10f, 10f, 1);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_357, 131072);
					TASK::TASK_ACHIEVE_HEADING(0, 135f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_1424++;
				}
			}
			break;
		
		case 2:
			if ((!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_357, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 242628503) != 1) && ENTITY::GET_ENTITY_SPEED(iLocal_357) < 0.1f)
			{
				iLocal_1424++;
			}
			break;
		
		case 3:
			if (iLocal_1423 > 1)
			{
				if (!PED::IS_PED_FACING_PED(uLocal_312[2], PLAYER::PLAYER_PED_ID(), 60f))
				{
					iLocal_1423 = 0;
				}
			}
			switch (iLocal_1423)
			{
				case 0:
					TASK::CLEAR_PED_TASKS(uLocal_312[2]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), -1, 2064, 4);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1425);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1425);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uLocal_1425);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1425);
					iLocal_1423++;
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], 242628503) != 1)
					{
						iLocal_1423++;
					}
					break;
				
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1426);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_2", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_3", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_4", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1426);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_312[2], uLocal_1426);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1426);
					iLocal_1423++;
					break;
			}
			break;
	}
}

float func_228(struct<3> Param0, int iParam3, char* sParam4, var uParam5)//Position - 0x136EC
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	bool bVar28;
	float fVar29;
	float fVar30;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam3 > 0)
	{
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam3, sParam4))
		{
			iVar2[0] = 99;
			iVar2[1] = 98;
			iVar2[2] = 97;
			iVar0 = 0;
			while (iVar0 < *uParam5)
			{
				fVar6 = MISC::ABSF((Param0.x - (*uParam5)[iVar0 /*3*/]));
				fVar7 = MISC::ABSF((Param0.f_1 - (uParam5[iVar0 /*3*/])->f_1));
				fVar8 = (fVar6 + fVar7);
				fVar9 = 0f;
				iVar10 = 0;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar0 != iVar2[iVar1])
					{
						fVar11 = MISC::ABSF((Param0.x - (*uParam5)[iVar2[iVar1] /*3*/]));
						fVar12 = MISC::ABSF((Param0.f_1 - (uParam5[iVar2[iVar1] /*3*/])->f_1));
						fVar13 = (fVar11 + fVar12);
						if (fVar13 > fVar9)
						{
							iVar10 = iVar1;
							fVar9 = fVar13;
						}
					}
					iVar1++;
				}
				if (fVar8 < fVar9)
				{
					iVar2[iVar10] = iVar0;
				}
				iVar0++;
			}
			fVar14 = 999999f;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 0)
				{
					Var19 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam5[iVar2[iVar0] /*3*/]), *(uParam5[(iVar2[iVar0] - 1) /*3*/]), 1) };
				}
				else
				{
					Var19 = { *(uParam5[0 /*3*/]) };
				}
				if (iVar2[iVar0] < (*uParam5 - 2))
				{
					Var22 = { MISC::_0x21C235BC64831E5A(Param0, *(uParam5[iVar2[iVar0] /*3*/]), *(uParam5[iVar2[iVar0] + 1 /*3*/]), 1) };
				}
				else
				{
					Var22 = { *(uParam5[(*uParam5 - 1) /*3*/]) };
				}
				bVar28 = false;
				if (SYSTEM::VDIST2(Param0, Var19) < SYSTEM::VDIST2(Param0, Var22))
				{
					Var25 = { Var19 };
				}
				else
				{
					bVar28 = true;
					Var25 = { Var22 };
				}
				if (SYSTEM::VDIST2(Param0, Var25) < fVar14)
				{
					if (bVar28)
					{
						iVar15 = iVar2[iVar0];
					}
					else
					{
						iVar15 = (iVar2[iVar0] - 1);
					}
					fVar14 = SYSTEM::VDIST2(Param0, Var25);
					Var16 = { Var25 };
				}
				iVar0++;
			}
			iVar15 = GlobalFunc_254(iVar15, 0, 98);
			fVar29 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam3, sParam4) / 99f);
			fVar30 = ((SYSTEM::VDIST(*(uParam5[iVar15 /*3*/]), Var16) / SYSTEM::VDIST(*(uParam5[iVar15 /*3*/]), *(uParam5[iVar15 + 1 /*3*/]))) * fVar29);
			return (fVar30 + (IntToFloat(iVar15) * fVar29));
		}
	}
	return -1f;
}


void func_230(int iParam0, int iParam1, int iParam2, char* sParam3, var uParam4, bool bParam5, float fParam6)//Position - 0x1396E
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		fLocal_1323 = func_228(ENTITY::GET_ENTITY_COORDS(iParam1, 1), iParam2, sParam3, uParam4);
		if (func_234(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(iParam0, 25f);
			}
			if (iLocal_1326 != 262144)
			{
				iLocal_1326 = 262144;
			}
		}
		else
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(iParam0, VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(ENTITY::GET_ENTITY_MODEL(iParam1)));
			}
			if (iLocal_1326 != 786469)
			{
				iLocal_1326 = 786469;
			}
		}
		if (func_232(ENTITY::GET_ENTITY_COORDS(iParam1, 1), &Local_210))
		{
			if (fLocal_1325 != 50f)
			{
				fLocal_1325 = 50f;
			}
			if (iLocal_1326 != 262144)
			{
				iLocal_1326 = 262144;
			}
		}
		else
		{
			if (iLocal_1326 != 786469)
			{
				iLocal_1326 = 786469;
			}
			if (fLocal_1325 != 100f)
			{
				fLocal_1325 = 100f;
			}
		}
		if (iLocal_1326 != iLocal_1327)
		{
			if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iParam1))
			{
				VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam1, iLocal_1326);
			}
			iLocal_1327 = iLocal_1326;
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			if (!iLocal_246)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iParam1))
				{
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam1, iLocal_1326);
				}
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_1323, sParam3), -494.9343f, 4928.82f, 157.1242f, -134.4572f, 4615.544f, 124.0836f, 30.25f, 0, 1))
				{
					fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
					if (((fVar0 > (fLocal_1325 * fLocal_1325) && (fLocal_1323 > 10000f || fVar0 > 10000f)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam3)) && fLocal_1323 < (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam2, sParam3) - 10000f))
					{
						if ((ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_OCCLUDED(iParam1)) && !CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_1323, sParam3), 4f))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, -1);
							}
							ENTITY::SET_ENTITY_COLLISION(iParam1, 0, 0);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam2, sParam3, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam1, fLocal_1323);
							iLocal_246 = 1;
						}
					}
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < ((fLocal_1325 * fLocal_1325) * 0.9f) || (!ENTITY::IS_ENTITY_OCCLUDED(iParam1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < ((100f * 100f) * 1.5f)))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam1, 1f);
					ENTITY::SET_ENTITY_COLLISION(iParam1, 1, 0);
					iLocal_246 = 0;
				}
			}
			else if (bParam5)
			{
				if (fParam6 > fLocal_1323)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iParam1, GlobalFunc_253(((fParam6 - fLocal_1323) / 1000f), 1f, 3f));
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam1, 1f);
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, -1, 2f, 1, 0);
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(iParam1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 50f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 50f)
			{
				if (!CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_1323, sParam3), 2f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_1323, sParam3), 1, 0, 0, 1);
				}
				if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, -1);
				}
			}
		}
	}
}


int func_232(struct<3> Param0, var uParam3)//Position - 0x13D61
{
	int iVar0;
	
	if (*uParam3 < 3)
	{
	}
	iVar0 = 1;
	while (iVar0 <= (*uParam3 - 1))
	{
		if (!func_233(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[(iVar0 - 1) /*3*/])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_233(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)//Position - 0x13DA9
{
	return (((Param6 - Param3) * (Param0.f_1 - Param3.f_1)) - ((Param6.f_1 - Param3.f_1) * (Param0 - Param3))) >= 0f;
}

bool func_234(int iParam0)//Position - 0x13DD2
{
	return ((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -824.9688f, 5228.711f, 116.8678f, -852.0287f, 5341.012f, 54.16111f, 65.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -171.5547f, 4652.35f, 140.7038f, -33.91709f, 4546.747f, 106.9574f, 65.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -89.91727f, 4308.34f, 58.66524f, -193.9387f, 4219.964f, 35.34774f, 38.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -223.0244f, 3932.076f, 48.88577f, -215.2881f, 3832.037f, 28.85036f, 56.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -215.4631f, 3720.156f, 61.35942f, -125.2304f, 3631.989f, 35.59824f, 56.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 85.41956f, 3496.506f, 51.25703f, 177.0784f, 3396.792f, 28.67663f, 119.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 35.18766f, 4455.669f, 81.75587f, -37.35991f, 4422.036f, 54.01874f, 62.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -809.7636f, 5265.459f, 77.19865f, -726.4775f, 5220.505f, 124.4587f, 61.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -652.9576f, 5133.302f, 114.4135f, -587.3712f, 5025.89f, 164.5662f, 61.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -243.4116f, 4721.371f, 91.37091f, -97.04164f, 4589.317f, 148.162f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -51.04823f, 4561.023f, 76.79493f, 24.16429f, 4525.127f, 129.62f, 43f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -35.08501f, 3605.692f, -0.894375f, 128.6888f, 3553.019f, 63.64628f, 70.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -419.153f, 6119.916f, 30.15674f, -435.4348f, 6059.348f, 38.9021f, 39.25f, 0, 1, 0));
}

void func_235()//Position - 0x14060
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1349, 0) && GlobalFunc_8315() == 0)
	{
		switch (iLocal_1364)
		{
			case 0:
				sLocal_1328[0] = "RBS1_LES2";
				sLocal_1328[1] = "RBS1_LES3";
				iLocal_1364++;
				break;
			
			case 1:
				if (((!iLocal_1331[0] || (iLocal_1331[0] && iLocal_1334[0])) && (!iLocal_1331[1] || (iLocal_1331[1] && iLocal_1334[1]))) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1349, 0))
				{
					if (!iLocal_1356)
					{
						if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_LES1", 8, 0, 0, 0))
						{
							iLocal_1356 = 1;
						}
					}
					if (iLocal_1355)
					{
						if (GlobalFunc_10626(&Local_359, cLocal_275, "RBS1_LES1", &Local_1357, 8, 0, 0))
						{
							iLocal_1355 = 0;
						}
					}
				}
				else if (!iLocal_1355)
				{
					Local_1357 = { GlobalFunc_514() };
					GlobalFunc_5105();
					iLocal_1355 = 1;
					iLocal_1365 = iLocal_1364;
					iLocal_1364 = 100;
				}
				if (!GlobalFunc_111() && !iLocal_1355)
				{
					iLocal_1356 = 0;
					StringCopy(&Local_1357, "", 24);
					iLocal_1364++;
				}
				break;
			
			case 2:
				if (((!iLocal_1331[0] || (iLocal_1331[0] && iLocal_1334[0])) && (!iLocal_1331[1] || (iLocal_1331[1] && iLocal_1334[1]))) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1349, 0))
				{
					if (!iLocal_1356)
					{
						if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_LES1b", 8, 0, 0, 0))
						{
							iLocal_1356 = 1;
						}
					}
					if (iLocal_1355)
					{
						if (GlobalFunc_10626(&Local_359, cLocal_275, "RBS1_LES1b", &Local_1357, 8, 0, 0))
						{
							iLocal_1355 = 0;
						}
					}
				}
				else if (!iLocal_1355)
				{
					Local_1357 = { GlobalFunc_514() };
					GlobalFunc_5105();
					iLocal_1355 = 1;
					iLocal_1365 = iLocal_1364;
					iLocal_1364 = 100;
				}
				break;
			
			case 100:
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_1366 = -1;
					iVar0 = 0;
					while (iVar0 < iLocal_1334)
					{
						if (iLocal_1331[iVar0] && !iLocal_1334[iVar0])
						{
							if (iLocal_1366 == -1)
							{
								iLocal_1366 = iVar0;
							}
							func_237(sLocal_1328[iVar0], (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1349, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1349, 0)));
						}
						iVar0++;
					}
					if ((!GlobalFunc_111() && !bLocal_662) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1349, 0))
					{
						iLocal_661 = 0;
						if (iLocal_1366 != -1)
						{
							iLocal_1334[iLocal_1366] = 1;
						}
						StringCopy(&cLocal_663, "", 24);
						iLocal_1364 = iLocal_1365;
						iLocal_1365 = 1000;
					}
				}
				break;
		}
		if (!iLocal_1331[0])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -706.7669f, 5536.016f, 34.65338f, -805.0684f, 5471.531f, 39.91594f, 24f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1349, 0))
			{
				iLocal_1331[0] = 1;
			}
		}
		if (!iLocal_1331[1])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -262.86f, 4738.64f, 119.1165f, -163.3743f, 4644.937f, 147.8358f, 14.25f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1349, 0))
			{
				iLocal_1331[1] = 1;
			}
		}
	}
	if ((!PED::IS_PED_INJURED(uLocal_312[iLocal_1348]) && PED::IS_PED_IN_VEHICLE(uLocal_312[iLocal_1348], iLocal_1350, 0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_1348 == 2)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1363) > 6000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[iLocal_1348], 1)) < 25f)
				{
					if ((!bLocal_662 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1349, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1350, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_1350, iLocal_1349) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1350, ENTITY::GET_ENTITY_COORDS(iLocal_1349, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1349, 0f, 4f, 0f), 2f, 0, 1, 0))
							{
								if (GlobalFunc_745())
								{
									if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_ASSHLEM", 8, 0, 0, 0))
									{
										iLocal_1363 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10618(&Local_359, cLocal_275, sLocal_277, 8, 0, 0, 0))
								{
									iLocal_1363 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[iLocal_1348], 1)) < SYSTEM::POW(15f, 2f))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_312[iLocal_1348], joaat("weapon_unarmed"), 1);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_312[iLocal_1348], joaat("weapon_unarmed"));
				PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_312[iLocal_1348], 0);
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_312[iLocal_1348], &iVar1, 1);
				if (iVar1 == joaat("weapon_unarmed"))
				{
					if (!PED::IS_PED_DOING_DRIVEBY(uLocal_312[iLocal_1348]))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1367) > 8000)
						{
							TASK::TASK_DRIVE_BY(uLocal_312[iLocal_1348], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 25f, 80, 1, -753768974);
							iLocal_1367 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_1367) > 3000)
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_312[iLocal_1348]);
					}
				}
			}
		}
	}
}


void func_237(char* sParam0, bool bParam1)//Position - 0x145D0
{
	if (bParam1)
	{
		if (!iLocal_661)
		{
			if (GlobalFunc_10618(&Local_359, cLocal_275, sParam0, 8, 0, 0, 0))
			{
				bLocal_662 = false;
				iLocal_661 = 1;
			}
		}
		if (bLocal_662)
		{
			if (GlobalFunc_10626(&Local_359, cLocal_275, sParam0, &cLocal_663, 8, 0, 0))
			{
				bLocal_662 = false;
			}
		}
	}
	if (!bParam1)
	{
		if (!bLocal_662)
		{
			cLocal_663 = { GlobalFunc_514() };
			GlobalFunc_5105();
			bLocal_662 = true;
		}
	}
}



void func_240(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1473E
{
	int iVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			(iParam0[iVar0 /*5*/])->f_3 = func_228(*(iParam0[iVar0 /*5*/]), iParam1, sParam2, uParam3);
			(iParam0[iVar0 /*5*/])->f_4 = 1;
			iVar0++;
		}
	}
}

void func_241(var uParam0, int iParam1, char* sParam2)//Position - 0x14790
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 99f);
		*(uParam0[99 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

























void func_266(bool bParam0, int iParam1, int iParam2)//Position - 0x1534C
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (bParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			bParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	bParam0->f_1 = 0;
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_8 = 0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(bParam0->f_3))
	{
		if (GlobalFunc_74(bParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (GlobalFunc_74(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}
























void func_290(int iParam0)//Position - 0x16C82
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}


void func_292(struct<3> Param0, int iParam3)//Position - 0x16CBA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (GlobalFunc_100(*(iParam3[iVar0 /*5*/]), 0f, 0f, 0f))
		{
			*(iParam3[iVar0 /*5*/]) = { Param0 };
			return;
		}
		iVar0++;
	}
}


void func_294()//Position - 0x16D63
{
	int iVar0;
	
	switch (iLocal_644)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1054.748f, 5340.324f, -10f, 750f, 750f, 750f, 0, 1, 0))
			{
				iLocal_644 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1578.014f, 6427.994f, -10f, 750f, 750f, 750f, 0, 1, 0))
			{
				iLocal_644 = 3;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_645[0]))
				{
					iLocal_645[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), -990.6421f, 5391.671f, 40.4409f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_645[0], -0.0138f, 0.0194f, 0.0655f, 0.9976f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_645[1]))
				{
					iLocal_645[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), -994.824f, 5401.228f, 40.3984f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_645[1], 0.0221f, 0.0008f, 0.8693f, -0.4938f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[0]))
				{
					iLocal_650[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -992.679f, 5392.633f, 39.8664f, 324.3472f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[1]))
				{
					iLocal_650[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -994.6719f, 5399.035f, 39.8257f, 218.1417f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[2]))
				{
					iLocal_650[2] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -996.4119f, 5398.116f, 39.9129f, 270.4941f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[3]))
				{
					iLocal_650[3] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -995.2369f, 5390.152f, 40.0318f, 346.7168f, 1, 1);
					iVar0 = 0;
					while (iVar0 < iLocal_645)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_645[iVar0], 0))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_645[iVar0], true);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < iLocal_650)
					{
						if (!PED::IS_PED_INJURED(iLocal_650[iVar0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_650[iVar0], 1);
						}
						iVar0++;
					}
					uLocal_657[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-987.4105f, 5400.166f, 39.52042f, 15f, 7f, 1);
					uLocal_657[1] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-993.56f, 5395.73f, 39.85f, 3f, 1f, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -990.6421f, 5391.671f, 40.4409f, 1000f, 1000f, 1000f, 0, 1, 0))
			{
				iLocal_644 = 4;
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_645[0]))
				{
					iLocal_645[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1578.014f, 6427.994f, 24.4932f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_645[0], -0.0181f, -0.0008f, 0.9997f, -0.0188f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_645[1]))
				{
					iLocal_645[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1573.847f, 6423.33f, 24.4071f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_645[1], -0.0012f, -0.0163f, -0.3084f, 0.9511f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_645[2]))
				{
					iLocal_645[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1572.323f, 6409.776f, 24.5238f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_645[2], -0.0023f, -0.0158f, -0.2387f, 0.971f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_645[3]))
				{
					iLocal_645[3] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1564.12f, 6406.375f, 24.3283f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_645[3], 0.0037f, -0.0152f, -0.5892f, 0.8078f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[0]))
				{
					iLocal_650[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1577.882f, 6424.149f, 23.917f, 263.6635f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[1]))
				{
					iLocal_650[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1581.465f, 6429.496f, 23.9937f, 221.5831f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[2]))
				{
					iLocal_650[2] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1580.061f, 6421.476f, 24.012f, 276.7651f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[3]))
				{
					iLocal_650[3] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1568.118f, 6409.294f, 23.811f, 73.3582f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[4]))
				{
					iLocal_650[4] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1567.251f, 6415.109f, 23.7167f, 54.1765f, 1, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_650[5]))
				{
					iLocal_650[5] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 1564.104f, 6407.887f, 23.7113f, 54.9604f, 1, 1);
					iVar0 = 0;
					while (iVar0 < iLocal_645)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_645[iVar0], 0))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_645[iVar0], true);
						}
						iVar0++;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1578.014f, 6427.994f, -10f, 1000f, 1000f, 1000f, 0, 1, 0))
			{
				iLocal_644 = 4;
			}
			break;
		
		case 4:
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_657[0]);
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_657[1]);
			iVar0 = 0;
			while (iVar0 < iLocal_650)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_650[iVar0]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_645)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_645[iVar0]));
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			iLocal_644 = 0;
			break;
	}
}

void func_295()//Position - 0x173E4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_339();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_SHOOT_THE_ALARM"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_SHOOT_THE_ALARM");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
			{
				AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
			}
		}
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_253 < 5)
	{
		if (bLocal_231)
		{
			GlobalFunc_5105();
			bLocal_662 = false;
			iLocal_661 = 0;
			iLocal_708 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_240 = 0;
			iLocal_253 = 5;
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_151, -1, 16, 4);
			}
			if (!PED::IS_PED_INJURED(uLocal_312[2]))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_312[2], Local_151, -1, 16, 4);
			}
		}
	}
	switch (iLocal_253)
	{
		case 0:
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					if (GlobalFunc_116(0))
					{
						GlobalFunc_6685(0);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_58))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_66, 1)) > 9f)
						{
							if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_GETIN", 8, 0, 0, 0))
							{
								uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
							}
						}
						else
						{
							uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) || HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					iLocal_712 = 0;
					func_337(1, 1);
					func_290(500);
					iLocal_709 = 0;
					iLocal_253++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_527("CMN_GENGETBCK", 7500, 1);
					iLocal_253++;
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&uLocal_58);
				iLocal_253++;
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 1))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
				if (GlobalFunc_116(0))
				{
					GlobalFunc_6685(0);
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, Local_268, Local_271, fLocal_274, 0, 1, 0))
				{
					GlobalFunc_5105();
					if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_HIDE1", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_253++;
					}
				}
				else
				{
					SYSTEM::SETTIMERA(0);
					iLocal_253++;
				}
			}
			else
			{
				func_336();
			}
			break;
		
		case 3:
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_331();
			}
			if (SYSTEM::TIMERA() > 3000)
			{
				func_329();
				if (!iLocal_712 && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					iLocal_712 = 1;
				}
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, Local_268, Local_271, fLocal_274, 0, 1, 0))
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_164("CBH_HIDELOT", 5000, 1);
						SYSTEM::SETTIMERA(0);
						Local_163 = { Local_151 };
						iLocal_253++;
					}
				}
				else
				{
					iLocal_253++;
				}
			}
			else
			{
				func_336();
			}
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_331();
			}
			if (iLocal_710 > 0 && !HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				func_308();
			}
			break;
		
		case 5:
			func_308();
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_237("RBS1_COPARR", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
				if (!iLocal_708 && iLocal_661)
				{
					if (!PED::IS_PED_INJURED(uLocal_312[2]))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missrbhsig_2", "this_is_them_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(uLocal_312[2], "missrbhsig_2", "this_is_them_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "this_is_them_lester", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_50, "missrbhsig_2", "this_is_them_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_312[2]) && !PED::IS_PED_INJURED(iLocal_50))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missrbhsig_2", "this_is_them_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "this_is_them_Lester", 3))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
							iLocal_708 = 1;
						}
					}
				}
				if ((!GlobalFunc_111() && !bLocal_662) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) && SYSTEM::TIMERA() > 15000))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], iLocal_357, 15000, 16, 4);
					if (!PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][0]))
					{
						GlobalFunc_200(&Local_359, 5);
						GlobalFunc_173(&Local_359, 5, Local_546[iLocal_257 /*9*/][0], "PALETOCOP1", 0, 1);
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_253++;
					bLocal_662 = false;
					iLocal_661 = 0;
					StringCopy(&cLocal_663, "", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		
		case 6:
			func_308();
			func_237("RBS1_WAIT", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
			if ((!GlobalFunc_111() && !bLocal_662) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) && SYSTEM::TIMERA() > 15000))
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], iLocal_357, 15000, 16, 4);
				iLocal_253++;
				bLocal_662 = false;
				iLocal_661 = 0;
				StringCopy(&cLocal_663, "", 24);
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 7:
			iLocal_253++;
			break;
		
		case 8:
			func_308();
			if (SYSTEM::TIMERA() > 4000)
			{
				func_237("RBS1_COPREP", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
				if ((!bLocal_662 && !GlobalFunc_111()) || (SYSTEM::TIMERA() > 17000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_151, 10000, 16, 4);
					}
					bLocal_662 = false;
					iLocal_661 = 0;
					StringCopy(&cLocal_663, "", 24);
					EVENT::REMOVE_SHOCKING_EVENT(iLocal_713);
					iLocal_713 = 0;
					func_28(7);
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][0]) && bLocal_231)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_546[iLocal_257 /*9*/][0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(65f, 2f))
		{
			Local_163 = { ENTITY::GET_ENTITY_COORDS(Local_546[iLocal_257 /*9*/][0], 1) };
			fLocal_249 = 0.025f;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_258) < 7000)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (!bLocal_231)
	{
		if (func_306(&(Local_546[func_307() /*9*/].f_3)))
		{
			bLocal_231 = true;
		}
	}
	if (bLocal_231)
	{
		if (!iLocal_242)
		{
			if (GlobalFunc_74("CBH_FCUSHLP"))
			{
				HUD::CLEAR_HELP(0);
				iLocal_242 = 1;
			}
		}
	}
	if (iLocal_253 > 3)
	{
		func_329();
	}
	switch (iLocal_256)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_258) > 55000)
			{
				if (func_304(0))
				{
					iLocal_256++;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup3");
			if ((((!PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][0]) && !PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_546[iLocal_257 /*9*/].f_3)) && STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup3"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_546[iLocal_257 /*9*/].f_3, 1);
				Local_704 = { ENTITY::GET_ENTITY_COORDS(Local_546[iLocal_257 /*9*/].f_3, 1) };
				ENTITY::GET_ENTITY_QUATERNION(Local_546[iLocal_257 /*9*/].f_3, &(uLocal_694[0]), &(uLocal_694[1]), &(uLocal_694[2]), &(uLocal_694[3]));
				fLocal_699[0] = 0.0041f;
				fLocal_699[1] = 0.003f;
				fLocal_699[2] = 0.0955f;
				fLocal_699[3] = 0.9954f;
				fLocal_707 = 0f;
				iLocal_256++;
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0))
			{
				if (fLocal_707 <= 1f)
				{
					func_302(Local_546[iLocal_257 /*9*/].f_3, Local_704, -126.1263f, 6444.122f, 31.1441f, &uLocal_694, &fLocal_699, &fLocal_707);
					fLocal_707 = (fLocal_707 + 0.1f);
				}
			}
			if (fLocal_707 >= 1f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0))
				{
					func_302(Local_546[iLocal_257 /*9*/].f_3, Local_704, -126.1263f, 6444.122f, 31.1441f, &uLocal_694, &fLocal_699, &fLocal_707);
					if (func_301())
					{
						STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
						VEHICLE::SET_VEHICLE_SIREN(Local_546[iLocal_257 /*9*/].f_3, false);
						iLocal_256 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.3f)
				{
					if (!Local_546[2 /*9*/].f_6)
					{
						iVar0 = 0;
						while (iVar0 < Local_546)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_546[iVar0 /*9*/].f_3))
								{
									VEHICLE::REMOVE_VEHICLE_RECORDING(Local_546[iVar0 /*9*/].f_4, sLocal_276);
								}
							}
							iVar0++;
						}
						func_181(2);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.37f)
				{
					if (Local_583.f_9)
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
						Local_583.f_9 = 0;
						Local_583.f_13 = 0;
						AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 1);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.45f)
				{
					if (!Local_546[3 /*9*/].f_6)
					{
						func_181(3);
					}
				}
			}
			break;
	}
	if (bLocal_231 && iLocal_47 == 6)
	{
		iVar1 = 0;
		while (iVar1 < Local_546)
		{
			if (iVar1 != iLocal_257)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar1 /*9*/].f_3, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_546[iVar1 /*9*/].f_3))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(Local_546[iVar1 /*9*/].f_3))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_546[iVar1 /*9*/].f_3, false);
						}
					}
				}
			}
			iVar1++;
		}
	}
	switch (iLocal_254)
	{
		case 0:
			if (func_300())
			{
				iLocal_254++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
			{
				iLocal_254++;
			}
			break;
		
		case 2:
			if (func_299())
			{
				iLocal_254++;
			}
			break;
		
		case 3:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					fVar3 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iLocal_51[iVar0]) - Local_182[iVar0 /*3*/].f_2));
					if (fVar3 >= 180f)
					{
						fVar3 = (fVar3 - 360f);
					}
					if (fVar3 < -180f)
					{
						fVar3 = (fVar3 + 360f);
					}
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_51[iVar0], 1), Local_169[iVar0 /*3*/]) > 2f || fVar3 > 20f)
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				iLocal_254++;
			}
			break;
		
		case 4:
			if (func_298())
			{
				iLocal_254++;
			}
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) >= 1f)
				{
					iLocal_254++;
				}
			}
			break;
		
		case 6:
			if (func_297())
			{
				STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
				iLocal_254++;
			}
			break;
	}
	switch (iLocal_255)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_276);
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_276) && STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1leadinoutrbhs_int_1")) && (MISC::GET_GAME_TIMER() - iLocal_258) > 14000)
			{
				if (func_296())
				{
					iLocal_255++;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && !PED::IS_PED_INJURED(iLocal_356))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_357, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_357, 7, sLocal_276, 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_357, 0.85f);
				iLocal_255++;
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && !PED::IS_PED_INJURED(iLocal_356))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357))
				{
					GlobalFunc_5130(iLocal_356, "FIGHT_RUN", 10);
					VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_276);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_357, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_711);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_357, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -76.8476f, 6417.165f, 30.4902f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -59.8699f, 6423.774f, 30.4862f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -63.1039f, 6427.249f, 30.4869f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_711);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_356, uLocal_711);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_711);
					iLocal_255++;
				}
				else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357))
				{
					if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_357))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_357, 1) - Vector(2f, 0f, 0f) };
						Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_357, 0f, GlobalFunc_253(((ENTITY::GET_ENTITY_SPEED(iLocal_357) / 10f) + 12f), 12f, 25f), 2f) };
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var7, 3.5f, 0, 1, 0))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_357, 786469);
						}
					}
					if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_357))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_357, 1)) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_357) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_66, iLocal_357))
							{
								VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_357, 786469);
							}
						}
					}
				}
			}
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) || PED::IS_PED_INJURED(iLocal_356)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_357, PLAYER::PLAYER_PED_ID(), 1))) || (!PED::IS_PED_INJURED(iLocal_356) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_356, PLAYER::PLAYER_PED_ID(), 1)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_357))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_357))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_357);
					}
				}
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_356) && !PED::IS_PED_INJURED(iLocal_356))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_356, -64.70889f, 6428.823f, 30.48731f, -60.18451f, 6424.346f, 35.23688f, 3.75f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_356))
					{
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						PED::DELETE_PED(&iLocal_356);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_356, 242628503) != 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_356, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_356, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 4f, -4f, -1, 1, 0, 0, 0, 0);
							iLocal_255++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_356) && !PED::IS_PED_INJURED(iLocal_356))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_356) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_356, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 400f)
				{
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					PED::DELETE_PED(&iLocal_356);
				}
			}
			break;
	}
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(178228075, 1);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1852297978, 1);
}

bool func_296()//Position - 0x182E6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_356))
	{
		STREAMING::REQUEST_MODEL(joaat("ruffian"));
		STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("ruffian")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")))
		{
			iLocal_357 = VEHICLE::CREATE_VEHICLE(joaat("ruffian"), Local_138, fLocal_141, 1, 1);
			iLocal_356 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_357, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_356, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_356, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_356, 4, 0, 0, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_357, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_357, 3000f);
			AUDIO::_0xF1F8157B8C3F171C(iLocal_357, "Trevor_Revs_Off", "PALETO_SCORE_SETUP_SOUNDS");
			ENTITY::SET_ENTITY_HEALTH(iLocal_357, 3000);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_357, 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_356, 17, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_356, 128, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_356, 1024, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_356, 3);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_357, AUDIO::GET_RADIO_STATION_NAME(6));
			PED::SET_PED_HELMET(iLocal_356, 0);
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_356) && ENTITY::DOES_ENTITY_EXIST(iLocal_357));
}

int func_297()//Position - 0x183FA
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup2");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup2"))
	{
		if (((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_51[2])) && !PED::IS_PED_INJURED(iLocal_51[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				iVar0++;
			}
			iLocal_251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_142, Local_145, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], iLocal_251, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_manager", 8f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], iLocal_251, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk1", 8f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[2], iLocal_251, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk2", 8f, -4f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[3], iLocal_251, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk3", 8f, -4f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_251, 1);
			return 1;
		}
	}
	return 0;
}

int func_298()//Position - 0x1851A
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
	{
		if (((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_51[2])) && !PED::IS_PED_INJURED(iLocal_51[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				iVar0++;
			}
			iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(Local_142, Local_145, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], iLocal_250, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", 4f, -8f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], iLocal_250, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", 4f, -8f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[2], iLocal_250, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", 4f, -8f, 1, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[3], iLocal_250, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", 4f, -8f, 1, 0, 1148846080, 0);
			return 1;
		}
	}
	return 0;
}

int func_299()//Position - 0x18623
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
	{
		Local_169[0 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", Local_142, Local_145, 0, 2) };
		Local_169[1 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", Local_142, Local_145, 0, 2) };
		Local_169[2 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", Local_142, Local_145, 0, 2) };
		Local_169[3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", Local_142, Local_145, 0, 2) };
		Local_182[0 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", Local_142, Local_145, 0, 2) };
		Local_182[1 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", Local_142, Local_145, 0, 2) };
		Local_182[2 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", Local_142, Local_145, 0, 2) };
		Local_182[3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", Local_142, Local_145, 0, 2) };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51[iVar0], Local_169[iVar0 /*3*/], 1f, -1, 0.25f, 512, Local_182[iVar0 /*3*/].f_2);
			}
			iVar0++;
		}
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, 1, 0);
		return 1;
	}
	return 0;
}

int func_300()//Position - 0x18787
{
	int iVar0;
	int iVar1;
	
	STREAMING::REQUEST_MODEL(joaat("a_m_m_business_01"));
	STREAMING::REQUEST_MODEL(joaat("a_f_y_business_01"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_business_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_business_01")))
	{
		if (iLocal_636 == -1)
		{
			iLocal_636 = 0;
		}
		if (iLocal_636 == 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[0]))
		{
			iLocal_51[0] = PED::CREATE_PED(4, joaat("a_m_m_business_01"), Local_598[0 /*3*/], fLocal_626[0], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[0], 11, 0, 0, 0);
		}
		if (iLocal_636 == 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[1]))
		{
			iLocal_51[1] = PED::CREATE_PED(5, joaat("a_f_y_business_01"), Local_598[1 /*3*/], fLocal_626[1], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[1], 4, 0, 1, 0);
		}
		if (iLocal_636 == 2 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[2]))
		{
			iLocal_51[2] = PED::CREATE_PED(5, joaat("a_f_y_business_01"), Local_598[2 /*3*/], fLocal_626[2], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[2], 4, 1, 0, 0);
		}
		if (iLocal_636 == 3 && !ENTITY::DOES_ENTITY_EXIST(iLocal_51[3]))
		{
			iLocal_51[3] = PED::CREATE_PED(4, joaat("a_m_m_business_01"), Local_598[3 /*3*/], fLocal_626[3], 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_51[3], 11, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_51)
			{
				if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_51[iVar0], 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51[iVar0], 17, 1);
					PED::SET_PED_HEARING_RANGE(iLocal_51[iVar0], 15f);
					PED::SET_PED_SEEING_RANGE(iLocal_51[iVar0], 15f);
					PED::SET_PED_CONFIG_FLAG(iLocal_51[iVar0], 118, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51[iVar0], 1);
					PED::SET_PED_KEEP_TASK(iLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_636 = -1;
		}
		else
		{
			iLocal_636++;
		}
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_301()//Position - 0x18A2C
{
	int iVar0;
	
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup3");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup3"))
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_51[2])) && !PED::IS_PED_INJURED(iLocal_51[3])) && !PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][0])) && !PED::IS_PED_INJURED(Local_546[iLocal_257 /*9*/][1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_51[iVar0]);
				iVar0++;
			}
			TASK::CLEAR_PED_TASKS(Local_546[iLocal_257 /*9*/][0]);
			TASK::CLEAR_PED_TASKS(Local_546[iLocal_257 /*9*/][1]);
			iLocal_252 = PED::CREATE_SYNCHRONIZED_SCENE(Local_142, Local_145, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_546[iLocal_257 /*9*/][0], iLocal_252, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Driver", 1000f, -1000f, 20, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_546[iLocal_257 /*9*/][1], iLocal_252, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Passenger", 1000f, -1000f, 20, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], iLocal_252, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Manager", 4f, -4f, 17, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], iLocal_252, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk1", 4f, -4f, 17, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[2], iLocal_252, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk2", 4f, -4f, 17, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[3], iLocal_252, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk3", 4f, -4f, 17, 0, 1148846080, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_546[iLocal_257 /*9*/].f_3, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_546[iLocal_257 /*9*/].f_3, iLocal_252, "Cops_Response_Outro_CAR", "missheistpaletoscoresetup_setup3", 1000f, -1000f, 32 | 1 | 4, 1000f);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_546[iLocal_257 /*9*/].f_3);
			return 1;
		}
	}
	return 0;
}

void func_302(int iParam0, struct<3> Param1, struct<3> Param4, var uParam7, float fParam8, float fParam9)//Position - 0x18C38
{
	var uVar0[4];
	
	ENTITY::SET_ENTITY_COORDS(iParam0, GlobalFunc_721(Param1, Param4, *fParam9), 1, 0, 0, 1);
	MISC::SLERP_NEAR_QUATERNION(*fParam9, (*uParam7)[0], (*uParam7)[1], (*uParam7)[2], (*uParam7)[3], (*fParam8)[0], (*fParam8)[1], (*fParam8)[2], (*fParam8)[3], &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]));
	ENTITY::SET_ENTITY_QUATERNION(iParam0, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
}


int func_304(bool bParam0)//Position - 0x18CD6
{
	int iVar0;
	char cVar1[24];
	int iVar7;
	
	iVar0 = 0;
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_276);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_276);
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_276);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_276);
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_276)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, sLocal_276)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_276)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_276))
	{
		iVar0 = 0;
		while (iVar0 < Local_546)
		{
			Local_546[iVar0 /*9*/] = { func_305(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iVar0 + 1, 0f, sLocal_276), 0f, iVar0 + 1) };
			if ((!PED::IS_PED_INJURED(Local_546[iVar0 /*9*/][0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_546[iVar0 /*9*/].f_4, sLocal_276))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_546[iVar0 /*9*/].f_3, 1, 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_546[iVar0 /*9*/].f_3, !bParam0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_546[iVar0 /*9*/].f_3, Local_546[iVar0 /*9*/].f_4, sLocal_276, 1);
				if (bParam0)
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_546[iVar0 /*9*/].f_3);
				}
				StringCopy(&cVar1, "cop car ", 24);
				StringIntConCat(&cVar1, iVar0, 24);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(Local_546[iVar0 /*9*/].f_3, &cVar1);
			}
			iVar0++;
		}
	}
	iVar7 = 1;
	iVar0 = 0;
	while (iVar0 < Local_546)
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(Local_546[iVar0 /*9*/].f_3) || !ENTITY::DOES_ENTITY_EXIST(Local_546[iVar0 /*9*/][0])) || !ENTITY::DOES_ENTITY_EXIST(Local_546[iVar0 /*9*/][1]))
		{
			iVar7 = 0;
		}
		iVar0++;
	}
	return iVar7;
}

struct<9> func_305(struct<3> Param0, float fParam3, var uParam4)//Position - 0x18E8D
{
	struct<9> Var0;
	
	Var0 = 2;
	if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
	{
		Var0.f_5 = 1;
		Var0.f_4 = uParam4;
		Var0.f_3 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Param0, fParam3, 1, 1);
		Var0[0] = PED::CREATE_PED_INSIDE_VEHICLE(Var0.f_3, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Var0[0], joaat("weapon_pistol"), -1, 0, 1);
		Var0[1] = PED::CREATE_PED_INSIDE_VEHICLE(Var0.f_3, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Var0[1], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Var0[0], iLocal_92);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Var0[1], iLocal_92);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Var0.f_3, 1);
		Var0.f_7 = 0;
	}
	return Var0;
}

int func_306(var uParam0)//Position - 0x18F4D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1)) < 22500f)
		{
			return 1;
		}
	}
	return 0;
}

int func_307()//Position - 0x18F83
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 99999f;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_546)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_546[iVar0 /*9*/].f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_546[iVar0 /*9*/].f_3, 1)) < (fVar1 * fVar1))
				{
					iVar2 = iVar0;
					fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_546[iVar0 /*9*/].f_3, 1));
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_308()//Position - 0x19011
{
	Local_166 = { Local_166 + Local_163 - Local_166 * Vector(fLocal_249, fLocal_249, fLocal_249) };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_63 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_166, 1, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_63, 1);
			ENTITY::SET_ENTITY_COLLISION(iLocal_63, 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_63, Local_166, 1, 0, 0, 1);
	}
	func_309(&Local_95, iLocal_63, "CBH_FCUSHLP", 0, 1, 1, 1);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) || bLocal_241)
	{
		if (GlobalFunc_74("CBH_FCUSHLP"))
		{
			if (!iLocal_242)
			{
				HUD::CLEAR_HELP(0);
				iLocal_242 = 1;
			}
		}
		else if (!bLocal_241)
		{
			if (iLocal_240)
			{
				iLocal_240 = 0;
			}
			if (iLocal_242)
			{
				iLocal_242 = 0;
			}
		}
	}
}

void func_309(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x190DF
{
	func_310(bParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_310(bool bParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x190FC
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_266(bParam0, 0, 0);
	}
	bParam0->f_6 = 2;
	func_311(bParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_311(bool bParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x19134
{
	int iVar0;
	int iVar1;
	
	if (bParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (GlobalFunc_162(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_322(bParam0, bParam7, bParam9, 0))
			{
				func_319(bParam0, iParam1, Param2, iParam6);
			}
			if (*bParam0)
			{
				*bParam0 = 0;
			}
			else if (bParam0->f_6 == 2)
			{
				if (GlobalFunc_6696(iVar0))
				{
					if ((MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!GlobalFunc_74(iVar0))
							{
								GlobalFunc_159(iVar0, -1);
								bParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									GlobalFunc_158(1);
								}
							}
						}
					}
				}
			}
			else if (GlobalFunc_6696(iVar0))
			{
				if (MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							bParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (GlobalFunc_74(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_266(bParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			if (!func_322(bParam0, bParam7, bParam9, 0))
			{
				if ((!*bParam0 && !bParam0->f_1) && !func_313(bParam0))
				{
					func_312(bParam0);
				}
			}
		}
	}
	else
	{
		func_266(bParam0, iVar0, 0);
	}
}

void func_312(bool bParam0)//Position - 0x194A1
{
	if (GlobalFunc_162(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (bParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			bParam0->f_11 = 0;
		}
	}
	bParam0->f_2 = -1;
	*bParam0 = 1;
}

int func_313(bool bParam0)//Position - 0x1950A
{
	int iVar0;
	
	if (bParam0->f_2 > 0)
	{
		iVar0 = (bParam0->f_10 / 2);
		if (bParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}






void func_319(bool bParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x19820
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_266(bParam0, 0, 0);
	}
	if (GlobalFunc_100(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!GlobalFunc_4954())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = bParam0->f_9;
	iVar2 = bParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	bParam0->f_11 = 1;
	bParam0->f_8 = MISC::GET_GAME_TIMER();
	bParam0->f_1 = 1;
	*bParam0 = 0;
}



int func_322(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x19952
{
	if (bParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	switch (bParam0->f_5)
	{
		case 0:
			bParam0->f_7 = 0;
			if (bParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (GlobalFunc_6701(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 1;
						bParam0->f_7 = 1;
					}
				}
				else if (GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			else if (bParam0->f_6 == 1)
			{
				if (GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			else if (bParam0->f_6 == 2)
			{
				if (GlobalFunc_6701(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			if (func_313(bParam0))
			{
				bParam0->f_7 = 1;
				bParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - bParam0->f_4) <= 500)
			{
				if (bParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!GlobalFunc_6701(bParam1, bParam2, bParam3))
						{
							bParam0->f_4 = MISC::GET_GAME_TIMER();
							bParam0->f_5 = 3;
						}
					}
					else if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
				else if (bParam0->f_6 == 1)
				{
					if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
				else if (bParam0->f_6 == 2)
				{
					if (!GlobalFunc_6701(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
			}
			else
			{
				bParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (bParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!GlobalFunc_6701(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					bParam0->f_5 = 0;
				}
			}
			else if (bParam0->f_6 == 1)
			{
				if (!GlobalFunc_6700(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					bParam0->f_5 = 0;
				}
			}
			else if (bParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					bParam0->f_5 = 0;
				}
				else if (!GlobalFunc_6701(bParam1, bParam2, bParam3))
				{
					bParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - bParam0->f_4) > 500)
			{
				if (bParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (GlobalFunc_6699(bParam1, bParam2, bParam3))
						{
							bParam0->f_5 = 0;
						}
					}
					else if (GlobalFunc_6698(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (bParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_6698(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (bParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						bParam0->f_5 = 0;
					}
					else if (GlobalFunc_6699(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_313(bParam0))
			{
				bParam0->f_5 = 0;
			}
			break;
	}
	if (!GlobalFunc_4953(bParam1, bParam2, bParam3))
	{
		bParam0->f_5 = 0;
		bParam0->f_7 = 0;
	}
	if (bParam0->f_7)
	{
		GlobalFunc_163();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}







void func_329()//Position - 0x19E79
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && func_330(1))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			switch (iLocal_710)
			{
				case 0:
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						uLocal_57 = GlobalFunc_5104(Local_118, 1);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_50);
						TASK::TASK_CLEAR_LOOK_AT(uLocal_312[2]);
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -86.59003f, 6420.465f, 30.21417f, -91.02832f, 6416.428f, 34.71599f, 5.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -89.0773f, 6420.377f, 31.0252f, 1f, 1f, 2.5f, 1, 1, 0))
						{
							Local_163 = { Local_151 };
							HUD::REMOVE_BLIP(&uLocal_57);
							iLocal_710++;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_66) < 0.1f)
						{
							Local_163 = { Local_151 };
							HUD::REMOVE_BLIP(&uLocal_57);
							iLocal_710 = 2;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_530(iLocal_66, 3f, 3, 1056964608, 0, 1))
					{
						iLocal_710++;
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_50, iLocal_63))
						{
							TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_151, -1, 16, 4);
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(uLocal_312[2], iLocal_63))
						{
							TASK::TASK_LOOK_AT_COORD(uLocal_312[2], Local_151, -1, 16, 4);
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63))
						{
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_151, -1, 16, 4);
						}
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0))
					{
						iLocal_710 = 0;
					}
					break;
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::REMOVE_BLIP(&uLocal_57);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
				func_84(&Local_538);
			}
			func_336();
		}
	}
}

int func_330(bool bParam0)//Position - 0x1A089
{
	if (bParam0)
	{
		return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && !PED::IS_PED_INJURED(uLocal_312[2])) && !PED::IS_PED_INJURED(iLocal_50));
	}
	else
	{
		return (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && !PED::IS_PED_INJURED(uLocal_312[2]));
	}
	return 0;
}

void func_331()//Position - 0x1A0DA
{
	bool bVar0;
	struct<6> Var1;
	
	if (iLocal_266 == -1)
	{
		if (Local_534.f_1)
		{
			iLocal_266 = MISC::GET_GAME_TIMER();
		}
	}
	bLocal_238 = (MISC::GET_GAME_TIMER() - iLocal_266) < 5000;
	if ((((MISC::GET_GAME_TIMER() - iLocal_258) > 5000 && func_335()) && !PED::IS_PED_INJURED(uLocal_312[2])) && !PED::IS_PED_INJURED(iLocal_50))
	{
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)) && !bLocal_229) && !bLocal_237)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (GlobalFunc_111())
		{
			Var1 = { GlobalFunc_560() };
		}
		switch (iLocal_262)
		{
			case 0:
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_276);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_276);
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_276);
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_276);
				func_333("RBS1_HIDE1", bVar0, (MISC::GET_GAME_TIMER() - iLocal_258), 5000, 6000);
				if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_258) > 0)
				{
					bLocal_662 = false;
					iLocal_661 = 0;
					StringCopy(&cLocal_663, "", 24);
					iLocal_262++;
				}
				break;
			
			case 1:
				func_333("RBS1_HIDE2", bVar0, (MISC::GET_GAME_TIMER() - iLocal_258), 18000, 20000);
				if ((!GlobalFunc_111() || bLocal_662) && (MISC::GET_GAME_TIMER() - iLocal_258) > 20000)
				{
					bLocal_662 = false;
					iLocal_661 = 0;
					StringCopy(&cLocal_663, "", 24);
					iLocal_708 = 0;
					iLocal_262++;
				}
				break;
			
			case 2:
				func_333("RBS1_HIDE3", bVar0, (MISC::GET_GAME_TIMER() - iLocal_258), 35000, 39000);
				if (!iLocal_708 && iLocal_661)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missrbhsig_2", "four_cars_trevor", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_312[2], "missrbhsig_2", "four_cars_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "four_cars_lester", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_50, "missrbhsig_2", "four_cars_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missrbhsig_2", "four_cars_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "four_cars_Lester", 3))
					{
						iLocal_708 = 1;
					}
				}
				if ((!GlobalFunc_111() || bLocal_662) && (MISC::GET_GAME_TIMER() - iLocal_258) > 39000)
				{
					bLocal_662 = false;
					iLocal_661 = 0;
					StringCopy(&cLocal_663, "", 24);
					iLocal_708 = 0;
					iLocal_262++;
				}
				break;
			
			case 3:
				func_333("RBS1_HIDE4", bVar0, (MISC::GET_GAME_TIMER() - iLocal_258), 59000, 59000);
				if (!iLocal_708 && iLocal_661)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missrbhsig_2", "what_do_you_got_trevor", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_312[2], "missrbhsig_2", "what_do_you_got_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "what_do_you_got_lester", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_50, "missrbhsig_2", "what_do_you_got_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_312[2], "missrbhsig_2", "what_do_you_got_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50, "missrbhsig_2", "what_do_you_got_Lester", 3))
					{
						iLocal_708 = 1;
					}
				}
				if ((!GlobalFunc_111() || bLocal_662) && (MISC::GET_GAME_TIMER() - iLocal_258) > 59000)
				{
					bLocal_662 = false;
					iLocal_661 = 0;
					iLocal_708 = 0;
					StringCopy(&cLocal_663, "", 24);
					iLocal_262++;
				}
				break;
			
			case 4:
				break;
		}
	}
	else if (!func_335() && iLocal_262 > 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_263) > 5000 && !bLocal_238)
		{
			if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_CNTSEE", 8, 0, 0, 0))
			{
				iLocal_263 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((bLocal_229 && (bLocal_662 || GlobalFunc_2655())) && !iLocal_230)
	{
		GlobalFunc_5105();
		if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_HOTTY", 8, 0, 0, 0))
		{
			iLocal_230 = 1;
		}
	}
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -77.35259f, 6418.271f, 25.79452f, -165.4273f, 6505.104f, 33.55246f, 100f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_261) > 5000) && !GlobalFunc_111())
	{
		if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !bLocal_238))
		{
			GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_MESS", 8, 0, 0, 0);
			iLocal_261 = MISC::GET_GAME_TIMER();
		}
	}
}


void func_333(char* sParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A5AA
{
	if (bParam1)
	{
		if (!iLocal_661)
		{
			if (iParam2 < iParam3)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (GlobalFunc_10618(&Local_359, cLocal_275, sParam0, 8, 0, 0, 0))
					{
						bLocal_662 = false;
						iLocal_661 = 1;
					}
				}
			}
		}
		if (bLocal_662)
		{
			if (iParam2 < iParam4)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (GlobalFunc_10626(&Local_359, cLocal_275, sParam0, &cLocal_663, 8, 0, 0))
					{
						bLocal_662 = false;
					}
				}
			}
		}
	}
	if (!bParam1)
	{
		if (!bLocal_662)
		{
			cLocal_663 = { GlobalFunc_514() };
			GlobalFunc_5105();
			bLocal_662 = true;
		}
	}
}


bool func_335()//Position - 0x1A65A
{
	return (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, -113.9146f, 6415.774f, 20.92422f, -151.9467f, 6377.942f, 51.45014f, 50.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, -158.9227f, 6484.175f, 19.42225f, -89.31187f, 6412.26f, 57.34415f, 50.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, -135.8324f, 6496.841f, -8.871904f, -124.4626f, 6508.426f, 56.73236f, 14.5f, 0, 1, 0)));
}

void func_336()//Position - 0x1A6FE
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, Local_268, Local_271, fLocal_274, 0, 1, 0))
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !PED::IS_PED_INJURED(iLocal_50))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_660) > 5000 && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_50, 1)) < 15f)
			{
				if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_GETIN", 8, 0, 0, 0))
				{
					iLocal_660 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_337(int iParam0, bool bParam1)//Position - 0x1A77F
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { Vector(146.0607f, 4927.538f, -491.5252f) - Vector(20f, 50f, 50f) };
				Var3 = { Vector(146.0607f, 4927.538f, -491.5252f) + Vector(20f, 50f, 50f) };
				break;
			
			case 1:
				Var0 = { Local_151 - Vector(10f, 20f, 20f) };
				Var3 = { Local_151 + Vector(20f, 20f, 20f) };
				break;
			
			case 2:
				Var0 = { Vector(28.28359f, 6508.671f, -120.0073f) - Vector(1.75f, 32.5f, 19.75f) };
				Var3 = { Vector(28.28359f, 6508.671f, -120.0073f) + Vector(1.75f, 32.5f, 19.75f) };
				break;
			
			case 3:
				Var0 = { Local_122 - Vector(100f, 50f, 50f) };
				Var3 = { Local_122 + Vector(100f, 50f, 50f) };
				break;
			
			case 4:
				Var0 = { Local_118 - Vector(15f, 35f, 35f) };
				Var3 = { Local_118 + Vector(15f, 35f, 35f) };
				break;
			
			case 5:
				Var0 = { Local_107 - Vector(10f, 10f, 10f) };
				Var0 = { Local_107 + Vector(10f, 10f, 10f) };
				break;
		}
		if (!func_338(iParam0))
		{
			uLocal_84[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
			MISC::SET_BIT(&uLocal_91, iParam0);
		}
	}
	else if (func_338(iParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_84[iParam0], 0);
		MISC::CLEAR_BIT(&uLocal_91, iParam0);
	}
}

bool func_338(int iParam0)//Position - 0x1A95C
{
	return MISC::IS_BIT_SET(uLocal_91, iParam0);
}

void func_339()//Position - 0x1A96C
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -201.0272f, 6374.652f, 28.04661f, -41.19576f, 6532.621f, 40.49076f, 157.75f, 0, 1, 0))
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
		SYSTEM::WAIT(0);
		func_87("CBH_LFTAREA");
	}
	if (!iLocal_709)
	{
		iVar0 = 0;
		while (iVar0 < Local_546)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iVar0 /*9*/].f_3, 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_546[iVar0 /*9*/].f_3, -145.0855f, 6484.485f, 27.72799f, -92.52125f, 6431.291f, 40.35595f, 58f, 0, 1, 0))
				{
					iLocal_709 = 1;
				}
			}
			iVar0++;
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, Local_268, Local_271, fLocal_274, 0, 1, 0))
	{
		if (iLocal_49 == 0)
		{
			if (func_340(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_49 = 2;
			}
		}
		if (iLocal_49 == 0)
		{
			if (func_340(iLocal_66))
			{
				iLocal_49 = 3;
			}
		}
		if (iLocal_49 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0))
			{
				func_87("CBH_COPMISS");
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, Local_268, Local_271, fLocal_274, 0, 1, 0))
			{
				func_87("CBH_COPMILT");
			}
		}
	}
	if (func_182(iLocal_66, 0))
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		if (bLocal_231)
		{
			iLocal_49 = 2;
		}
		else
		{
			iLocal_49 = 1;
		}
	}
	if (func_83(uLocal_312[2], &Local_542))
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		func_87("CBH_AB2BOTH");
	}
	if (bLocal_231)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, Local_268, Local_271, fLocal_274, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_66, -104.1284f, 6385.127f, 22.43802f, -54.79927f, 6433.795f, 61.37744f, 26.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -104.1284f, 6385.127f, 22.43802f, -54.79927f, 6433.795f, 61.37744f, 26.75f, 0, 1, 0))
			{
				func_87("CBH_LFTAREA");
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_268, Local_271, fLocal_274, 0, 1, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			iLocal_49 = 2;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_49 = 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
		{
			if (((!PED::IS_PED_INJURED(iLocal_356) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_357, PLAYER::PLAYER_PED_ID(), 1)) && (PED::IS_PED_IN_VEHICLE(iLocal_356, iLocal_357, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_356, iLocal_357, 5f, 5f, 3f, 0, 1, 0)))
			{
				iLocal_49 = 4;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_356, PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_356))
			{
				iLocal_49 = 4;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
	{
		if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_357))
		{
			if (bLocal_231)
			{
				iLocal_49 = 2;
			}
			else
			{
				iLocal_49 = 1;
			}
		}
	}
	if (iLocal_49 != 0)
	{
		func_28(11);
	}
}

int func_340(int iParam0)//Position - 0x1ACC8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -90.57478f, 6424.711f, 40.48994f, -170.8789f, 6505.736f, 28.48912f, 69f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -168.8253f, 6502.429f, 39.78346f, -206.7632f, 6527.751f, 10.09798f, 69f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_341()//Position - 0x1AD3F
{
	bool bVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	GlobalFunc_502();
	if (ENTITY::DOES_ENTITY_EXIST(Local_583))
	{
		if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_583, PLAYER::PLAYER_PED_ID(), 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(25, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_583, 0f, 1.5f, 1.5f), 3f))
		{
			Local_583.f_13 = (Local_583.f_13 + (Local_583.f_14 - ENTITY::GET_ENTITY_HEALTH(Local_583)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_583);
			Local_583.f_14 = ENTITY::GET_ENTITY_HEALTH(Local_583);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_87("CBH_BANKALERT");
	}
	if (CAM::DOES_CAM_EXIST(uLocal_68))
	{
		bVar0 = false;
		GlobalFunc_255(&(iVar1[0]), &(iVar1[1]), &(iVar1[2]), &(iVar1[3]), 0, 0);
		iVar6 = 0;
		while (iVar6 < iVar1)
		{
			if (MISC::ABSI(iVar1[iVar6]) > 0)
			{
				bVar0 = true;
			}
			iVar6++;
		}
		if ((((((((((PAD::IS_CONTROL_JUST_PRESSED(0, 23) || PAD::IS_CONTROL_JUST_PRESSED(0, 24)) || PAD::IS_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_CONTROL_JUST_PRESSED(0, 27)) || PAD::IS_CONTROL_JUST_PRESSED(0, 28)) || PAD::IS_CONTROL_JUST_PRESSED(0, 29)) || PAD::IS_CONTROL_JUST_PRESSED(0, 36)) || PAD::IS_CONTROL_JUST_PRESSED(0, 37)) || PAD::IS_CONTROL_JUST_PRESSED(0, 44)) || PAD::IS_CONTROL_JUST_PRESSED(0, 45)) || PAD::IS_CONTROL_JUST_PRESSED(0, 47))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(1.5552f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2.8327f, 1065353216);
			CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(iLocal_68, 0);
		}
	}
	else
	{
		func_346(&Local_95, Local_157, 0, 1726668277, 1, 0, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && ENTITY::DOES_ENTITY_EXIST(Local_583))
	{
		if (!func_74() && !CAM::DOES_CAM_EXIST(iLocal_68))
		{
			func_290(500);
			func_28(9);
		}
		else
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_130) <= 10000f)
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				if (!HUD::DOES_BLIP_EXIST(uLocal_61))
				{
					uLocal_61 = GlobalFunc_6799(Local_583);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_61, "CBH_BLIPALARM");
					iLocal_687 = 0;
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_61, false);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
				if (iLocal_253 > 0)
				{
					if (GlobalFunc_74("CBH_FCUSALM"))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || Local_95.f_1)
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
				switch (iLocal_253)
				{
					case 0:
						iLocal_264 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(uLocal_312[2]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!PED::IS_PED_INJURED(iLocal_50))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						GlobalFunc_159("CBH_FCUSALM", -1);
						func_290(500);
						iLocal_253++;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						SYSTEM::SETTIMERA(0);
						break;
					
					case 1:
						if (!GlobalFunc_111())
						{
							SYSTEM::SETTIMERA(0);
							iLocal_253++;
						}
						break;
					
					case 2:
						if (SYSTEM::TIMERA() > 1000)
						{
							func_84(&Local_532);
							AUDIO::START_AUDIO_SCENE("PS_1_SHOOT_THE_ALARM");
							SYSTEM::SETTIMERA(0);
							RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
							iLocal_253++;
						}
						break;
					
					case 3:
						if (SYSTEM::TIMERA() > 5000)
						{
							iLocal_253++;
						}
						break;
					
					case 4:
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_66, 1)) <= 625f)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -125.8731f, 6486.835f, 25.79036f, -156.4628f, 6518.318f, 35.25981f, 55f, 0, 1, 0))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_264) > 7500)
									{
										if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_GOBACK", 8, 0, 0, 0))
										{
											iLocal_264 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_264) > 7500)
								{
									if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_GETOUT", 8, 0, 0, 0))
									{
										iLocal_264 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_4())
							{
								if (!iLocal_688)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_264) > 15000)
									{
										if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_SHOOT", 8, 0, 0, 0))
										{
											iLocal_264 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_264) > 7500)
								{
									if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_MISS", 8, 0, 0, 0))
									{
										iLocal_264 = MISC::GET_GAME_TIMER();
										iLocal_688 = 0;
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_264) > 7500)
							{
								if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_CLOSE", 8, 0, 0, 0))
								{
									iLocal_264 = MISC::GET_GAME_TIMER();
								}
							}
						}
						break;
				}
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar7, 1);
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && iVar7 != joaat("weapon_petrolcan"))
				{
					iLocal_267++;
					if (!Local_583.f_9)
					{
						if (!iLocal_688)
						{
							iLocal_688 = 1;
						}
					}
				}
				if (iLocal_267 > 20 && !Local_583.f_9)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					func_87("CBH_BNKFAIL");
				}
			}
			else
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_130) > 16900f)
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_4956();
					func_87("CBH_LFTAREA");
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_264) > 7500)
					{
						if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_GOBACK", 8, 0, 0, 0))
						{
							iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-1000, 1000));
						}
					}
				}
				if (!iLocal_687)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_527("CBH_SHTBOX2", 7500, 1);
						iLocal_687 = 1;
					}
				}
			}
			if (func_330(1))
			{
				if (Local_583.f_9 && ENTITY::DOES_ENTITY_EXIST(Local_583))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					HUD::CLEAR_PRINTS();
					GlobalFunc_4956();
					if (!PED::IS_PED_INJURED(uLocal_312[2]))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					}
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_61))
					{
						GlobalFunc_703(&uLocal_61);
					}
					func_342(6, 1, 0);
					func_266(&Local_95, "CBH_FCUSALM", 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-135.3092f, 6479.615f, 32.653f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-134.3872f, 6492.855f, 30.95585f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-134.5053f, 6507.014f, 30.96668f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-135.3438f, 6520.587f, 30.74896f, 11.75f, 6.75f, 4.5f, 1, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-116.3026f, 6492.045f, 33.90546f, 18f, 19.25f, 5.75f, 1, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					func_28(6);
				}
			}
		}
	}
}

int func_342(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B4FD
{
	int iVar0[15];
	int iVar16;
	int iVar17[15];
	int iVar33[6];
	int iVar40;
	
	iVar0[0] = joaat("player_two");
	iVar0[1] = joaat("a_m_m_salton_02");
	iVar0[2] = joaat("premier");
	iVar0[3] = joaat("prop_ld_alarm_01");
	iVar0[4] = joaat("sheriff");
	iVar0[5] = joaat("s_m_y_cop_01");
	iVar0[6] = joaat("bus");
	iVar0[7] = joaat("s_m_m_lsmetro_01");
	iVar0[8] = joaat("prop_ld_alarm_01_dam");
	iVar0[9] = joaat("a_m_m_business_01");
	iVar0[10] = joaat("a_f_y_business_01");
	iVar16 = 0;
	while (iVar16 < iVar17)
	{
		iVar17[iVar16] = 0;
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < iVar33)
	{
		iVar33[iVar16] = 0;
		iVar16++;
	}
	switch (iParam0)
	{
		case 0:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[3] = GlobalFunc_4946(12);
			break;
		
		case 1:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[4] = GlobalFunc_4946(12);
			break;
		
		case 2:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("bus");
			iVar17[2] = joaat("s_m_m_lsmetro_01");
			iVar17[3] = joaat("premier");
			iVar17[4] = joaat("prop_ld_alarm_01");
			iVar17[5] = GlobalFunc_4946(12);
			break;
		
		case 3:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("a_m_m_salton_02");
			iVar17[2] = joaat("bus");
			iVar17[3] = joaat("s_m_m_lsmetro_01");
			iVar17[4] = joaat("premier");
			iVar17[5] = joaat("prop_ld_alarm_01");
			iVar17[6] = GlobalFunc_4946(12);
			break;
		
		case 4:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[3] = GlobalFunc_4946(12);
			break;
		
		case 5:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[3] = joaat("prop_ld_alarm_01_dam");
			iVar17[4] = GlobalFunc_4946(12);
			break;
		
		case 6:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("sheriff");
			iVar17[3] = joaat("s_m_y_cop_01");
			iVar17[4] = joaat("prop_ld_alarm_01_dam");
			iVar17[5] = joaat("a_m_m_business_01");
			iVar17[6] = joaat("a_f_y_business_01");
			iVar17[7] = GlobalFunc_4946(12);
			iVar33[0] = 1;
			iVar33[1] = 2;
			iVar33[2] = 3;
			iVar33[3] = 4;
			break;
		
		case 7:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("sheriff");
			iVar17[3] = joaat("s_m_y_cop_01");
			iVar17[4] = joaat("prop_ld_alarm_01_dam");
			iVar17[5] = joaat("a_m_m_business_01");
			iVar17[6] = joaat("a_f_y_business_01");
			iVar17[7] = GlobalFunc_4946(12);
			iVar33[0] = 1;
			iVar33[1] = 2;
			iVar33[2] = 3;
			iVar33[3] = 4;
			break;
	}
	if (bParam1)
	{
		iVar40 = 1;
		iVar16 = 0;
		while (iVar16 < iVar17)
		{
			if (iVar17[iVar16] != 0)
			{
				STREAMING::REQUEST_MODEL(iVar17[iVar16]);
				if (!STREAMING::HAS_MODEL_LOADED(iVar17[iVar16]))
				{
					iVar40 = 0;
				}
			}
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < iVar33)
		{
			if (iVar33[iVar16] != 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iVar33[iVar16], sLocal_276);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar33[iVar16], sLocal_276))
				{
					iVar40 = 0;
				}
			}
			iVar16++;
		}
		return iVar40;
	}
	if (bParam2)
	{
		iVar16 = 0;
		while (iVar16 < iVar0)
		{
			if (!func_343(iVar0[iVar16], &iVar17))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar16]);
			}
			iVar16++;
		}
	}
	return 0;
}

bool func_343(int iParam0, int iParam1)//Position - 0x1B8C4
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!bVar1)
		{
			if (iParam0 == (*iParam1)[iVar0])
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	return bVar1;
}



void func_346(bool bParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1B934
{
	int iVar0;
	
	if (bParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_322(bParam0, bParam6, bParam8, 0))
		{
			GlobalFunc_735(bParam0, Param1, iParam5);
		}
		if (*bParam0)
		{
			*bParam0 = 0;
		}
		else if (bParam0->f_6 == 2)
		{
			if (GlobalFunc_6696(iVar0))
			{
				if ((MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							bParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else if (GlobalFunc_6696(iVar0))
		{
			if (MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
				{
					if (!GlobalFunc_74(iVar0))
					{
						GlobalFunc_159(iVar0, -1);
						bParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							GlobalFunc_158(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (GlobalFunc_74(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_266(bParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_266(bParam0, iVar0, 1);
			}
		}
		if (!func_322(bParam0, bParam6, bParam8, 0))
		{
			if ((!*bParam0 && !bParam0->f_1) && !func_313(bParam0))
			{
				func_312(bParam0);
			}
		}
	}
}



void func_349()//Position - 0x1BDAE
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_253)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1rbhs_mcs_2"))
			{
				iLocal_686 = 0;
				iLocal_253++;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && func_330(1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					CAM::SET_WIDESCREEN_BORDERS(1, 500);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_66, 1);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 4f, -8f, -1, 16, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_50, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 4f, -8f, -1, 16, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(uLocal_312[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 4f, -8f, -1, 16, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_583))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_583, -1, 2052, 4);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_50, Local_583, 5000, 2052, 4);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_312[2], Local_583, 7000, 2052, 4);
					}
					func_309(&Local_95, Local_583, 0, 1726668277, 0, 1, 1);
					HUD::CLEAR_PRINTS();
					iLocal_245 = 1;
					func_290(500);
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_253++;
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
					if (!iLocal_686)
					{
						GlobalFunc_164("CMN_GENGETBCK", 7500, 1);
						iLocal_686 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_245)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 0.13f);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_50, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 0.13f);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_312[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 0.13f);
				}
				iLocal_245 = 0;
			}
			func_309(&Local_95, Local_583, 0, 1726668277, 0, 1, 1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.19f)
			{
				if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_BNKBOX", 8, 0, 0, 0))
				{
					iLocal_253++;
				}
			}
			break;
		
		case 3:
			func_309(&Local_95, Local_583, 0, 1726668277, 0, 1, 1);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.99f) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (func_74() || GlobalFunc_2033(0) < 500)
				{
					if (GlobalFunc_2033(0) < 500)
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 500, 0, 1);
					}
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0);
					SYSTEM::SETTIMERA(0);
					iLocal_253++;
				}
				else
				{
					STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_WIDESCREEN_BORDERS(0, 500);
					func_28(9);
				}
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 1000)
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
				STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_WIDESCREEN_BORDERS(0, 500);
				func_28(5);
			}
			break;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_66))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_66, 1, 1);
		}
	}
}

void func_350()//Position - 0x1C132
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1)
		{
			func_266(&Local_95, 0, 0);
		}
	}
	GlobalFunc_502();
	if (func_330(1))
	{
		switch (iLocal_253)
		{
			case 0:
				iLocal_661 = 0;
				bLocal_662 = false;
				iLocal_683 = 0;
				iLocal_684 = 0;
				StringCopy(&cLocal_663, "", 24);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0) && !PED::IS_PED_INJURED(iLocal_56))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_67, -222.1229f, 6146.418f, 30.2385f, 7f, 0, joaat("bus"), 786599, 50f, 10f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67, 10f, 786597);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				MISC::CLEAR_AREA_OF_PEDS(-117.54f, 6484.41f, 30.46f, 50f, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-135.3092f, 6479.615f, 32.653f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-134.3872f, 6492.855f, 30.95585f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-134.5053f, 6507.014f, 30.96668f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-135.3438f, 6520.587f, 30.74896f, 11.75f, 6.75f, 4.5f, 0, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-116.3026f, 6492.045f, 33.90546f, 18f, 19.25f, 5.75f, 0, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_BANK"))
				{
					AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_BANK");
				}
				SYSTEM::SETTIMERA(0);
				RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
				iLocal_253++;
				break;
			
			case 1:
				if (func_355(1) && func_330(1))
				{
					func_290(500);
					if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_TOGO", 8, 0, 0, 0))
					{
						iLocal_253++;
					}
				}
				break;
			
			case 2:
				func_354(&uLocal_57, &uLocal_58, Local_148, &Local_528, 1, 1, 1, 0);
				if (!GlobalFunc_111())
				{
					func_84(&Local_528);
				}
				if (SYSTEM::TIMERA() > 5000 && Local_528.f_1)
				{
					iLocal_253++;
				}
				break;
			
			case 3:
				func_354(&uLocal_57, &uLocal_58, Local_148, &Local_528, 1, 1, 1, 1);
				func_237("RBS1_TOBANK", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -109.7728f, 6414.386f, 20.31285f, -151.9715f, 6458.521f, 42.39143f, 32.5f, 0, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					GlobalFunc_4935();
					func_342(4, 1, 0);
					iLocal_661 = 0;
					bLocal_662 = false;
					StringCopy(&cLocal_663, "", 24);
					iLocal_253++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 4:
				func_354(&uLocal_57, &uLocal_58, Local_148, &Local_528, 1, 1, 1, 1);
				if (SYSTEM::TIMERA() > 0 && SYSTEM::TIMERA() < 100)
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_50, Local_151, 10000, 0, 2);
				}
				if (SYSTEM::TIMERA() > 200 && SYSTEM::TIMERA() < 250)
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_151, 5000, 0, 2);
				}
				if (SYSTEM::TIMERA() > 300 && SYSTEM::TIMERA() < 350)
				{
					TASK::TASK_LOOK_AT_COORD(uLocal_312[2], Local_151, 7000, 0, 2);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_148, Global_18, 1, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -134.7231f, 6448.373f, 28.4724f, -127.3561f, 6440.835f, 34.43628f, 10.75f, 0, 1, 0))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
						SYSTEM::SETTIMERA(0);
						iLocal_253++;
					}
				}
				break;
			
			case 5:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				}
				if (GlobalFunc_530(iLocal_66, 1093140480, 1, 1056964608, 0, 1))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_253++;
					GlobalFunc_164("CBH_FOCGOD", 7500, 1);
					GlobalFunc_159("CBH_FCUSHLP", 15000);
					AUDIO::TRIGGER_MUSIC_EVENT("RH1_START");
					if ((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1)
					{
						iLocal_685 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					}
					else
					{
						iLocal_685 = 5;
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 6:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_148, Global_18 + Vector(0f, 2f, 2f), 0, 1, 0))
				{
					if (PAD::IS_CONTROL_PRESSED(0, 80) || CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
						func_353(&Local_95, Local_151 + Vector(1.5f, 0f, 0f), "", 1726668277, 1, 0, 1);
						HUD::CLEAR_HELP(1);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
							iLocal_253++;
						}
					}
				}
				else
				{
					if (!Local_95 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (iLocal_685 != 5)
						{
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_685);
							iLocal_685 = 5;
						}
					}
					HUD::CLEAR_HELP(1);
					iLocal_253 = 4;
				}
				break;
			
			case 7:
				if (!Local_95 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (iLocal_685 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_685);
						iLocal_685 = 5;
					}
				}
				func_237("RBS1_BNKCUT", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
				if (SYSTEM::TIMERA() < 3000)
				{
					func_354(&uLocal_57, &uLocal_58, Local_115, &Local_530, 0, 1, 1, 1);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						func_354(&uLocal_57, &uLocal_58, Local_115, &Local_528, 1, 1, 1, 0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, Global_18, 1, 1, 0))
				{
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_266(&Local_95, 0, 0);
				}
				if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66) && !GlobalFunc_111()) && SYSTEM::TIMERA() > 3000)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_661 = 0;
					bLocal_662 = false;
					SYSTEM::SETTIMERA(0);
					iLocal_253++;
					bLocal_241 = true;
					func_84(&Local_530);
					func_266(&Local_95, 0, 0);
				}
				break;
			
			case 8:
				if (iLocal_685 != 5)
				{
					if (!Local_95 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_685);
						iLocal_685 = 5;
					}
				}
				func_352();
				func_354(&uLocal_57, &uLocal_58, Local_115, &Local_528, 1, 1, 1, 0);
				if (!iLocal_683)
				{
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_355(1) && func_330(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -120.5001f, 6513.166f, 27.8153f, -152.4702f, 6478.05f, 39.48183f, 26f, 0, 1, 0))
							{
								iLocal_683 = 1;
							}
							else if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_CLARIFY", 8, 0, 0, 0))
							{
								iLocal_683 = 1;
							}
						}
					}
				}
				else if (SYSTEM::TIMERA() > 5000)
				{
					func_237("RBS1_ATBANK", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
				}
				if (((SYSTEM::TIMERA() > 25000 && !iLocal_684) && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_355(1) && func_330(1))
					{
						if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_SPEC", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 6f, 4);
							iLocal_684 = 1;
						}
					}
				}
				func_266(&Local_95, 0, 0);
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, Global_18, 1, 1, 0))
				{
				}
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && func_355(1)) && func_330(1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, 5f, 5f, 2.5f, 0, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
					{
						GlobalFunc_5105();
						HUD::CLEAR_PRINTS();
						if (HUD::DOES_BLIP_EXIST(uLocal_57))
						{
							HUD::REMOVE_BLIP(&uLocal_57);
						}
						while (!GlobalFunc_530(iLocal_66, 5f, 5, 1056964608, 0, 1))
						{
							SYSTEM::WAIT(0);
							RECORDING::_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
						}
						RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						iLocal_253++;
					}
				}
				break;
			
			case 9:
				if (!GlobalFunc_111())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_BANK"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_BANK");
					}
					func_266(&Local_95, "CMN_HINT", 1);
					func_28(4);
					iLocal_253 = 0;
				}
				break;
			}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0) && !PED::IS_PED_INJURED(iLocal_56))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_56, 1)) > 2500f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_67))
		{
			PED::DELETE_PED(&iLocal_56);
			VEHICLE::DELETE_VEHICLE(&iLocal_67);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_lsmetro_01"));
		}
	}
	if (Local_583.f_9)
	{
		GlobalFunc_4956();
		HUD::CLEAR_PRINTS();
		func_342(6, 1, 0);
		if (func_351(&Local_524))
		{
			HUD::REMOVE_BLIP(&uLocal_57);
			RECORDING::_0x293220DA1B46CEBC(5f, 6f, 4);
			func_28(6);
		}
	}
	if (func_83(uLocal_312[2], &Local_542))
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		func_87("CBH_AB2BOTH");
	}
	if (!iLocal_235)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_111) < SYSTEM::POW(50f, 2f))
		{
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
			iLocal_235 = 1;
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_111) > SYSTEM::POW(75f, 2f))
	{
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
		iLocal_235 = 0;
	}
}

int func_351(var uParam0)//Position - 0x1CACF
{
	if (!uParam0->f_1)
	{
		if (GlobalFunc_10618(&Local_359, cLocal_275, *uParam0, 9, 0, 0, 0))
		{
			uParam0->f_1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_352()//Position - 0x1CAFE
{
	struct<8> Var0;
	
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -104.0468f, 6493.076f, 30.41857f, -120.6202f, 6475.779f, 35.10751f, 19.25f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_260) > 10000) && !GlobalFunc_111())
	{
		StringCopy(&Var0, "RBS1_WRGWY_", 64);
		StringIntConCat(&Var0, iLocal_259, 64);
		GlobalFunc_10630(&Local_359, cLocal_275, "RBS1_WRGWY", &Var0, 8, 0, 0);
		iLocal_259++;
		if (iLocal_259 > 1)
		{
			iLocal_259 = 0;
		}
		iLocal_260 = MISC::GET_GAME_TIMER();
	}
}

void func_353(var uParam0, struct<3> Param1, char* sParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1CB90
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_266(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_346(uParam0, Param1, sParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_354(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x1CBC6
{
	if (func_330(bParam7))
	{
		if (func_355(bParam7))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::REMOVE_BLIP(uParam1);
			}
			if (bParam6)
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam0))
				{
					*uParam0 = GlobalFunc_5104(Param2, bParam8);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (bParam9)
				{
					func_84(uParam5);
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
		{
			if (bParam6)
			{
				if (HUD::DOES_BLIP_EXIST(*uParam0))
				{
					HUD::REMOVE_BLIP(uParam0);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
				{
					HUD::CLEAR_PRINTS();
				}
				func_84(&Local_538);
				*uParam1 = GlobalFunc_6783(iLocal_66, 0, 0);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::REMOVE_BLIP(uParam1);
		}
	}
}

int func_355(bool bParam0)//Position - 0x1CCAE
{
	if (func_330(bParam0))
	{
		if (bParam0)
		{
			return ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_66, 0));
		}
		else
		{
			return (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0));
		}
	}
	return 0;
}

void func_356()//Position - 0x1CD16
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f, 0f);
	if (!iLocal_234)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("rbhs_mcs_1", 8);
		}
		if (GlobalFunc_109())
		{
			if (GlobalFunc_550("rbhs_mcs_1"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
				{
					func_366(-397.9f, 6134.135f, 31.5204f, -45.28132f);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_50, "Lester", 2, joaat("ig_lestercrest"), 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_50))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_50, "Lester", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_312[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_312[2], "Trevor", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_66, 1);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_66, 0, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_66, 1, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_66, 3, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_66, 2, 0, 0f);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_66, "Michaels_car", 0, 0, 0);
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_66, 1, 1, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_67, "RBHS_bus", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_56, "S_M_M_LSMetro_01", 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_AREA(Local_122 + Vector(100f, 100f, 100f), Local_122 - Vector(100f, 100f, 100f), 0, 1);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_122 + Vector(100f, 100f, 100f), Local_122 - Vector(100f, 100f, 100f), 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(uLocal_312[2]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_312[2]);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_67, 0);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_BUS_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("PS_1_BUS_ARRIVES");
				}
				MISC::CLEAR_AREA(Local_122, 500f, 1, 0, 0, 0);
				func_342(3, 1, 0);
				GlobalFunc_2885();
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_234 = 1;
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
		{
			iLocal_50 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_67))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_67, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, -1);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_312[2]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_312[2], iLocal_66, 2);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_66, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_50, iLocal_66, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_66, 1);
				GRAPHICS::_0x0AE73D8DF3A762B2(1);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			RECORDING::_0x81CBAE94390F9F89();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_67))
			{
				if (!PED::IS_PED_INJURED(iLocal_56) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_56, iLocal_67, -1);
				}
			}
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
			GlobalFunc_9140(&Local_70, 0, 0, 0, 1, 0, 0, 1);
			GlobalFunc_657();
			GlobalFunc_8316(0, 1, 1, 0);
			iLocal_234 = 0;
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_122 + Vector(100f, 100f, 100f), Local_122 - Vector(100f, 100f, 100f), 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_122 + Vector(100f, 100f, 100f), Local_122 - Vector(100f, 100f, 100f), 1, 0);
			func_28(3);
		}
	}
}










bool func_366(struct<3> Param0, float fParam3)//Position - 0x1D453
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		STREAMING::REQUEST_MODEL(joaat("bus"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("bus")))
		{
			iLocal_67 = VEHICLE::CREATE_VEHICLE(joaat("bus"), Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_67);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_67, 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_m_lsmetro_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_lsmetro_01")))
		{
			iLocal_56 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_67, 26, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_56, 0);
			PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(iLocal_56, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, 1862763509);
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_67) && ENTITY::DOES_ENTITY_EXIST(iLocal_56));
}



void func_369()//Position - 0x1D53E
{
	var uVar0;
	
	switch (iLocal_638)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_637) > 1000)
			{
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_154, &uVar0))
				{
					iLocal_638++;
				}
				iLocal_637 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (func_371())
			{
				GlobalFunc_10639(73, 1);
				GlobalFunc_10639(74, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
				iLocal_642 = 1;
				iLocal_638++;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_637) > 1000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_154) > 40000f)
				{
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
						GlobalFunc_10639(73, 1);
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
						GlobalFunc_10639(74, 1);
					}
					func_370();
					iLocal_638 = 0;
				}
				else
				{
					iLocal_641 = GlobalFunc_7719();
					if (iLocal_642)
					{
						if (GlobalFunc_208(iLocal_641) >= 7 || GlobalFunc_208(iLocal_641) <= 17)
						{
							GlobalFunc_10639(73, 0);
							GlobalFunc_10639(74, 0);
							iLocal_642 = 0;
						}
					}
					else if (GlobalFunc_208(iLocal_641) < 7 || GlobalFunc_208(iLocal_641) > 17)
					{
						if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, 1, 0);
							GlobalFunc_10639(73, 1);
						}
						if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, 1, 0);
							GlobalFunc_10639(74, 1);
						}
						iLocal_642 = 1;
					}
				}
				iLocal_637 = MISC::GET_GAME_TIMER();
			}
			break;
	}
	if (((((FIRE::IS_EXPLOSION_IN_AREA(2, Local_151 - Vector(10f, 75f, 75f), Local_151 + Vector(100f, 75f, 75f)) || FIRE::IS_EXPLOSION_IN_AREA(0, Local_151 - Vector(10f, 75f, 75f), Local_151 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(1, Local_151 - Vector(10f, 75f, 75f), Local_151 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(9, Local_151 - Vector(10f, 75f, 75f), Local_151 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(4, Local_151 - Vector(10f, 75f, 75f), Local_151 + Vector(100f, 75f, 75f))) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_151 - Vector(10f, 75f, 75f), Local_151 + Vector(100f, 75f, 75f), joaat("weapon_rpg"), 0))
	{
		func_87("CBH_BANKALERT");
	}
}

void func_370()//Position - 0x1D821
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_51[iVar0]));
		}
		iVar0++;
	}
}

int func_371()//Position - 0x1D853
{
	if (func_300())
	{
		if (!PED::IS_PED_INJURED(iLocal_51[0]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_51[0], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_51[1]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_51[1], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_51[2]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_51[2], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[3]))
		{
			PED::DELETE_PED(&(iLocal_51[3]));
		}
		return 1;
	}
	return 0;
}

void func_372()//Position - 0x1D8D0
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	
	GlobalFunc_502();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		if (!bLocal_239)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_122) < 40000f)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			if (iLocal_253 > 1)
			{
				if (iLocal_253 < 4)
				{
					func_354(&uLocal_57, &uLocal_58, Local_151, &Local_526, 1, 0, SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_122) < 562500f, 1);
				}
				else
				{
					func_354(&uLocal_57, &uLocal_58, Local_122, &Local_526, 1, 0, SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_122) < 562500f, 1);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
				{
					func_402(&Local_199, &iLocal_209);
					iLocal_244 = 1;
				}
				else if (iLocal_244)
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_209 = (Local_199.x - 1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_248 = 1;
				}
			}
			if (iLocal_253 < 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_312[2]))
				{
					PED::SET_PED_RESET_FLAG(uLocal_312[2], 60, 1);
				}
			}
			switch (iLocal_253)
			{
				case 0:
					if (!PED::IS_PED_INJURED(uLocal_312[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
					{
						iLocal_679 = 1;
						PED::SET_PED_CONFIG_FLAG(uLocal_312[2], 104, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						}
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_682);
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						Local_199[0 /*3*/] = { 2356.379f, 5864.774f, 46.1486f };
						Local_199[1 /*3*/] = { 230.8756f, 6569.08f, 30.6632f };
						Local_199[2 /*3*/] = { Local_151 };
						iLocal_209 = (Local_199.x - 1);
						iLocal_244 = 0;
						iLocal_675 = -1;
						iLocal_676 = 0;
						iLocal_678 = 0;
						iLocal_680 = 0;
						iLocal_681 = 0;
						RECORDING::_0x293220DA1B46CEBC(1f, 10f, 4);
						iLocal_253++;
					}
					break;
				
				case 1:
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (iLocal_679)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						if (iLocal_253 != 0)
						{
							GlobalFunc_612(&uVar0, &uVar1, &uVar2, &uVar2, 0);
							if ((MISC::ABSI(uVar0) + MISC::ABSI(uVar1)) > 20 || SYSTEM::TIMERB() > 2000)
							{
								iLocal_679 = 0;
							}
						}
					}
					if ((((!PED::IS_PED_INJURED(uLocal_312[2]) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], -1794415470) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_312[2], -1794415470) != 0) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_312[2], 1)) && !HUD::DOES_BLIP_EXIST(uLocal_62))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_312[2]))
						{
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_682))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_312[2], sLocal_682, 0, 8, -1);
							}
							if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_312[2], iLocal_66, 3f, 3f, 3f, 0, 1, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_312[2]);
								TASK::TASK_ENTER_VEHICLE(uLocal_312[2], iLocal_66, 20000, 0, 1f, 1, 0);
							}
						}
						else
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_682, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar3);
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_682, ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1), &iVar4);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_682, iVar3, &Var5);
							if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_312[2]))
							{
								if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var5) < 6.25f && ENTITY::IS_ENTITY_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0)) && (iVar3 - iVar4) < 3) && iVar3 > iVar4)
								{
									TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_312[2], 1, 0);
								}
							}
							else if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var5) > 9f || !ENTITY::IS_ENTITY_AT_ENTITY(uLocal_312[2], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0)) || (iVar3 - iVar4) > 3) || iVar3 < iVar4)
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(uLocal_312[2], 1, -1, 0);
							}
							if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_312[2]) > 28)
							{
								TASK::CLEAR_PED_TASKS(uLocal_312[2]);
								TASK::TASK_ENTER_VEHICLE(uLocal_312[2], iLocal_66, 20000, 0, 1f, 1, 0);
							}
						}
					}
					if (!iLocal_680)
					{
						if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_DRV1", 8, 0, 0, 0))
							{
								iLocal_680 = 1;
							}
						}
					}
					else if (!iLocal_681)
					{
						if (!GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
							{
								GlobalFunc_164("CBH_GOTOCAR", 7500, 1);
								iLocal_681 = 1;
							}
						}
					}
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (!PED::IS_PED_INJURED(uLocal_312[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_62))
							{
								if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
								{
									HUD::REMOVE_BLIP(&uLocal_62);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0) && !PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
							{
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1)) > 3f)
								{
									TASK::TASK_ENTER_VEHICLE(uLocal_312[2], iLocal_66, 20000, 0, 3f, 1, 0);
								}
								uLocal_62 = GlobalFunc_6797(uLocal_312[2], 0, 145);
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
							{
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_PALETO"))
								{
									AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_PALETO");
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									HUD::REMOVE_BLIP(&uLocal_58);
								}
								if (PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_62))
									{
										HUD::REMOVE_BLIP(&uLocal_62);
									}
									PED::REMOVE_PED_FROM_GROUP(uLocal_312[2]);
									SYSTEM::SETTIMERA(0);
									GlobalFunc_574(709, 0);
									TASK::REMOVE_WAYPOINT_RECORDING(sLocal_682);
									iLocal_253++;
								}
								else if (!iLocal_677)
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_312[2], 1)) > 3f)
									{
										if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											GlobalFunc_527("CBH_BUDSOUT", 7500, 1);
											iLocal_677 = 1;
										}
									}
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									uLocal_58 = GlobalFunc_6783(iLocal_66, 0, 0);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_62))
								{
									HUD::REMOVE_BLIP(&uLocal_62);
								}
							}
						}
					}
					break;
				
				case 2:
					if ((SYSTEM::TIMERA() > 7000 && func_355(0)) && !GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_CALL", 8, 0, 0, 0))
						{
							iLocal_253++;
						}
					}
					break;
				
				case 3:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_199())
						{
							if (GlobalFunc_10638(&Local_359, 12, cLocal_275, "RBS1_PHONE", 9, 1, 0, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_253++;
							}
						}
						else if (GlobalFunc_10638(&Local_359, 12, cLocal_275, "RBS1_PHONE2", 9, 1, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_253++;
						}
					}
					break;
				
				case 4:
					if (func_355(0) && func_330(0))
					{
						if (GlobalFunc_1993())
						{
							SYSTEM::SETTIMERA(0);
							if (HUD::DOES_BLIP_EXIST(uLocal_57))
							{
								HUD::REMOVE_BLIP(&uLocal_57);
								HUD::CLEAR_GPS_MULTI_ROUTE();
								Local_199[0 /*3*/] = { 2356.379f, 5864.774f, 46.1486f };
								Local_199[1 /*3*/] = { 230.8756f, 6569.08f, 30.6632f };
								Local_199[2 /*3*/] = { Local_122 };
								iLocal_244 = 0;
								iLocal_209 = (Local_199.x - 1);
							}
							iLocal_253++;
						}
					}
					break;
				
				case 5:
					if (SYSTEM::TIMERA() > 3000)
					{
						PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_107 + Vector(500f, 500f, 500f), Local_107 - Vector(500f, 500f, 500f), 1);
						iLocal_253++;
					}
					break;
				
				case 6:
					if (GlobalFunc_199())
					{
						func_237("RBS1_DRV2", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
					}
					else
					{
						func_237("RBS1_DRV4", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
					}
					if (!GlobalFunc_111() && !bLocal_662)
					{
						iLocal_661 = 0;
						iLocal_253++;
					}
					break;
				
				case 7:
					if (GlobalFunc_199())
					{
						func_237("RBS1_DRV2b", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
					}
					else
					{
						func_237("RBS1_DRV4b", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0)));
					}
					break;
			}
			if (((((func_355(0) && func_330(0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_122.x, Local_122.f_1, 30.24f, Global_18, 1, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -351.5282f, 6189.989f, 28.29423f, -343.8886f, 6197.934f, 34.29549f, 7f, 0, 1, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_66, 1119092736))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
				GlobalFunc_571(0, -1);
				GlobalFunc_5105();
				HUD::CLEAR_GPS_MULTI_ROUTE();
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0);
				iLocal_253 = 0;
				bLocal_239 = true;
			}
		}
		else
		{
			if (!iLocal_676)
			{
				if (GlobalFunc_10618(&Local_359, cLocal_275, "RBS1_DRV3", 8, 0, 0, 0))
				{
					iLocal_676 = 1;
				}
			}
			switch (iLocal_253)
			{
				case 0:
					if (func_355(0) && func_330(0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_57))
						{
							HUD::REMOVE_BLIP(&uLocal_57);
						}
						iLocal_253++;
					}
					break;
				
				case 1:
					if (GlobalFunc_530(iLocal_66, 6f, 1, 1056964608, 0, 1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						SYSTEM::SETTIMERA(0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_66, 0, 0);
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_66, 0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_253++;
					}
					break;
				
				case 2:
					iLocal_253++;
					break;
				
				case 3:
					if (iLocal_676 && SYSTEM::TIMERA() > 2000)
					{
						if (!CAM::DOES_CAM_EXIST(uLocal_69))
						{
							iLocal_675 = PED::CREATE_SYNCHRONIZED_SCENE(-330.69f, 6190.95f, 30.49f, 0f, 0f, 0f, 2);
							iLocal_69 = CAM::CREATE_CAMERA(964613260, 1);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_69, iLocal_675, "not_for_cutscene_-_timelapse_lead_in_cam", "missheistpaletoscoresetup");
							GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.5f);
							GRAPHICS::_0x0AE73D8DF3A762B2(0);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_66, -348.9985f, 6194.592f, 30.7398f, 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_66, -0.0211f, 0.0095f, 0.9216f, 0.3876f);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_66, 1);
							GlobalFunc_8316(1, 1, 1, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							CAM::SET_WIDESCREEN_BORDERS(1, 0);
							AUDIO::START_AUDIO_SCENE("PS_1_BUS_ARRIVES");
							RECORDING::_0x48621C9FCA3EBD28(4);
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							STREAMING::REQUEST_MODEL(joaat("bus"));
							STREAMING::REQUEST_MODEL(joaat("s_m_m_lsmetro_01"));
							iLocal_253++;
						}
					}
					break;
				
				case 4:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_675))
					{
					}
					if ((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_675) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_675) > 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_675)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_50, 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_50, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, 0);
						STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup");
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						Local_70.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
						CAM::ADD_CAM_SPLINE_NODE(Local_70.f_4, -351.9567f, 6192.048f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_70.f_4, -351.9567f, 6192.048f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_70.f_4, 39f);
						CAM::SET_CAM_ACTIVE(Local_70.f_4, 1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, 1);
						Local_70 = GlobalFunc_7719();
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
						GlobalFunc_9140(&Local_70, 1, 1, 2000, 1, 1, 0, 1);
						iLocal_673 = GlobalFunc_208(Local_70) + 2;
						iLocal_674 = GlobalFunc_207(Local_70);
						if (iLocal_673 > 18 || iLocal_673 < 6)
						{
							iLocal_673 = 8;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_PALETO"))
						{
							AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_PALETO");
						}
						iLocal_253++;
					}
					break;
				
				case 5:
					func_366(-397.9f, 6134.135f, 31.5204f, -45.28132f);
					if (GlobalFunc_9141(iLocal_673, iLocal_674, "EXTRASUNNY", "cirrocumulus", &Local_70, -1f, 0, 0, 1065353216))
					{
						RECORDING::_0x81CBAE94390F9F89();
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_66, 0);
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
						func_28(2);
					}
					break;
			}
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_66))
			{
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				bLocal_239 = false;
				iLocal_253 = 7;
			}
		}
		if (func_83(uLocal_312[2], &Local_540))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4956();
			func_87("CBH_AB2TREV");
		}
	}
	if (!iLocal_235)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_122) < 22500f && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup");
			func_376("rbhs_mcs_1", Local_122, 100f, &iLocal_235);
			func_342(2, 1, 0);
		}
	}
	if (iLocal_235)
	{
		if (!iLocal_678)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_50) && !PED::IS_PED_INJURED(iLocal_50))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", iLocal_50, 0);
				}
				iLocal_678 = 1;
			}
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_122) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_235 = 0;
			iLocal_678 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_122) < 40000f)
		{
			if (GlobalFunc_7047(&iLocal_50, 12, -317.9068f, 6195.894f, 36.0577f, 72.1587f, 1))
			{
				func_373();
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_50, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_50, 0);
			}
		}
	}
}

void func_373()//Position - 0x1E675
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_50, 8, 1, 0, 0);
	PED::SET_PED_PROP_INDEX(iLocal_50, 1, 0, 0, false);
}



void func_376(char* sParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x1E7A2
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1) < (fParam4 * fParam4) && !*bParam5)
	{
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
		*bParam5 = 1;
	}
	else
	{
		*bParam5 = 0;
	}
}


























void func_402(var uParam0, var uParam1)//Position - 0x1F4B4
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		fVar6 = SYSTEM::VDIST2(Var3, *(uParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar6 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar6;
		}
		iVar0++;
	}
	if (SYSTEM::VDIST2(Var3, *(uParam0[iVar1 + 1 /*3*/])) < SYSTEM::VDIST2(*(uParam0[iVar1 /*3*/]), *(uParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*uParam1 != iVar1 || (iLocal_248 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
	{
		if ((*uParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(uParam0[*uParam1 /*3*/])) > 25f) || (iLocal_248 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*uParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(uParam0[iVar0 /*3*/]));
				iVar0++;
			}
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(uParam0[(*uParam0 - 1) /*3*/]));
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
			iLocal_248 = 0;
		}
		*uParam1 = iVar1;
	}
}

void func_403()//Position - 0x1F5F1
{
	int iVar0;
	
	switch (iLocal_253)
	{
		case 0:
			if (GlobalFunc_8315() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE("rbhs_INT", 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("rbhs_INT", 8);
			}
			iLocal_253++;
			break;
		
		case 1:
			iLocal_672 = MISC::GET_HASH_KEY("SIDE_DOOR_METHLAB");
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_672, joaat("v_ilev_methdoorscuff"), 1392.74f, 3611.367f, 39.0919f, 1, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_672, 3, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_672, 0f, 1, 0);
			iLocal_253++;
			break;
		
		case 2:
			if (GlobalFunc_109())
			{
				if (GlobalFunc_550("rbhs_int"))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_562(91);
						PATHFIND::SET_ROADS_IN_AREA(Local_107 + Vector(500f, 500f, 500f), Local_107 - Vector(500f, 500f, 500f), 0, 1);
						GlobalFunc_8316(1, 1, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
							uLocal_312[2] = Global_86864.f_9[0];
							Global_86864.f_9[0] = 0;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_312[2], "Trevor", 2, joaat("player_two"), 0);
						}
						else if (!PED::IS_PED_INJURED(uLocal_312[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_312[2], "Trevor", 0, 0, 0);
						}
						MISC::CLEAR_AREA_OF_COPS(Local_107, 500f, 0);
						if (GlobalFunc_8315() == 2)
						{
							CUTSCENE::START_CUTSCENE(256);
						}
						else
						{
							CUTSCENE::START_CUTSCENE(0);
						}
						RECORDING::_0x48621C9FCA3EBD28(4);
						if (GlobalFunc_8315() == 2)
						{
							bLocal_671 = true;
						}
						func_342(1, 1, 0);
						HUD::REQUEST_ADDITIONAL_TEXT("BANKS1", 0);
						HUD::REQUEST_ADDITIONAL_TEXT(cLocal_275, 6);
						STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
						iLocal_253++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_253 = 0;
				}
			}
			break;
		
		case 3:
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("premier"), 3);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 50f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						if (GlobalFunc_99(iVar0) == 0 || VEHICLE::IS_BIG_VEHICLE(iVar0))
						{
							VEHICLE::DELETE_VEHICLE(&iVar0);
						}
						else
						{
							GlobalFunc_10236(iVar0, 1416.653f, 3622.32f, 33.8648f, 20.6293f, 24, 0);
							ENTITY::SET_ENTITY_COORDS(iVar0, 1416.653f, 3622.32f, 33.8648f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, 20.6293f);
						}
					}
				}
			}
			MISC::CLEAR_AREA(Local_126, 25f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(1391.651f, 3607.269f, 37.9419f, 10f, 2);
			GlobalFunc_76(24);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_253++;
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
				{
					uLocal_312[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
				}
			}
			func_672(Local_107, fLocal_110);
			if (!iLocal_670)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_66) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_66, 0, 1);
					iLocal_670 = 1;
				}
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_126, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_129);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 10f, 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (bLocal_671)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
						{
							func_671(&(uLocal_312[2]), 2, Local_134, fLocal_137, 0, 0, 0);
						}
						func_404(0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_126, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_129);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 10f, 1, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_312[2]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_312[2], Local_134, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_312[2], fLocal_137);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_312[2]);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PED::SET_PED_RESET_FLAG(uLocal_312[2], 237, 1);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
				{
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(uLocal_312[2]))
				{
					PED::SET_PED_AS_ENEMY(uLocal_312[2], 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_312[2], 0);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_312[2], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_312[2], 1862763509);
				}
				RECORDING::_0x81CBAE94390F9F89();
				MISC::CLEAR_AREA(Local_107, 20f, 1, 0, 0, 0);
				GlobalFunc_76(24);
				GlobalFunc_8316(0, 1, 1, 0);
				iLocal_234 = 0;
				CUTSCENE::REMOVE_CUTSCENE();
				func_28(1);
			}
			break;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
}

int func_404(int iParam0, bool bParam1)//Position - 0x1FB84
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
		func_407(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_671(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10991(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_407(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1FD3C
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
				GlobalFunc_11322(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11335(*iParam0, bParam6);
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








































































































































































































































































int func_671(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x68AEE
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8386(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11322(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11335(*iParam0, bParam8);
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

int func_672(struct<3> Param0, float fParam3)//Position - 0x68B8D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		func_675(&iLocal_66, 0, Param0, fParam3, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_66, Param0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_66, fParam3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_66, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_66, 1, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_66, 0, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_66, 3, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_66, 2, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_66, 5, 0);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_66, 1.5f);
		GlobalFunc_503(iLocal_66, -1);
		GlobalFunc_504(iLocal_66, -1);
		return 1;
	}
	return 0;
}



int func_675(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x68CA4
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5121(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5121(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_5121(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}
















void func_691(int iParam0)//Position - 0x6C4F8
{
	func_742();
	func_342(iParam0, 0, 1);
	GlobalFunc_4935();
	GlobalFunc_4956();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
	STREAMING::REMOVE_ANIM_DICT("missrbhsig_2");
	if (iParam0 != 5 && iParam0 != 2)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_68))
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(iLocal_68, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_65);
	}
	if (iParam0 != 0)
	{
		if (GlobalFunc_8315() != 0)
		{
			func_404(0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[0]))
			{
				PED::DELETE_PED(&(uLocal_312[0]));
			}
		}
		func_266(&Local_95, 0, 0);
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	if (iLocal_47 != 0 && iLocal_47 != 6)
	{
		while (!func_342(iParam0, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		func_342(iParam0, 1, 0);
	}
	if (iLocal_47 == 6 || iLocal_47 == 7)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(99.73001f, 6625.367f, 28.8347f, -298.8353f, 6237.28f, 38.42799f, 201.375f, 1, 0, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(99.73001f, 6625.367f, 28.8347f, -298.8353f, 6237.28f, 38.42799f, 201.375f, 1);
	}
	if (iParam0 == 3)
	{
		GlobalFunc_11046(1, "stage_drive_to_bank", 0, 0, 0, 1);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		GlobalFunc_11046(2, "stage_shoot_box", 0, 0, 0, 1);
	}
	else if (iParam0 == 7)
	{
		GlobalFunc_11046(3, "stage_race_home", 1, 0, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		OBJECT::DELETE_OBJECT(&iLocal_63);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
	}
	func_337(4, iParam0 >= 3);
	func_337(2, iParam0 >= 3);
	if (bLocal_233)
	{
		if (iParam0 < 6)
		{
			func_708(Local_157, Local_160, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
		}
		else
		{
			func_708(Local_157, Local_160, 1);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		func_370();
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_583))
		{
			Local_583.f_9 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
		{
			PED::DELETE_PED(&iLocal_356);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_357, -1)))
				{
					if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_357, -1)))
					{
						ENTITY::SET_ENTITY_COORDS(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_357, -1), ENTITY::GET_ENTITY_COORDS(iLocal_357, 1), 1, 0, 0, 1);
					}
				}
			}
			VEHICLE::DELETE_VEHICLE(&iLocal_357);
		}
		if (CAM::DOES_CAM_EXIST(Local_70.f_4))
		{
			if (CAM::IS_CAM_RENDERING(Local_70.f_4))
			{
				GlobalFunc_9140(&Local_70, 0, 0, 0, 1, 0, 0, 1);
				CAM::DESTROY_CAM(Local_70.f_4, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_66, 1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_357, 1, 0);
		}
		AUDIO::STOP_AUDIO_SCENES();
	}
	if (CAM::DOES_CAM_EXIST(iLocal_69))
	{
		CAM::DESTROY_CAM(iLocal_69, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_66);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		AUDIO::SET_HORN_ENABLED(iLocal_66, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
	{
		AUDIO::SET_HORN_ENABLED(iLocal_357, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		OBJECT::DELETE_OBJECT(&iLocal_63);
	}
	iLocal_253 = 0;
	switch (iParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				PED::DELETE_PED(&iLocal_50);
			}
			if (bLocal_233)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					PED::DELETE_PED(&iLocal_50);
				}
				func_707(500);
				func_706(Local_126, fLocal_129, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_66, Local_107, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_66, fLocal_110);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_66);
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				func_290(500);
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				PED::DELETE_PED(&iLocal_50);
			}
			if (bLocal_233)
			{
				func_707(500);
				func_370();
				iLocal_638 = 0;
				if (!GlobalFunc_188())
				{
					func_706(Local_126, fLocal_129, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_126, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_129);
				}
				func_703(Local_107, fLocal_110, 0, 0);
				if (!PED::IS_PED_INJURED(uLocal_312[2]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_312[2], Local_134, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_312[2], fLocal_137);
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_AREA(Local_107, 50f, 1, 0, 0, 0);
				while (!func_702(uLocal_312[2]))
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_173(&Local_359, 1, 0, "LESTER", 0, 1);
			if (!GlobalFunc_188())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				PED::DELETE_PED(&iLocal_50);
			}
			func_701();
			bLocal_239 = false;
			func_700();
			break;
		
		case 2:
			if (bLocal_233)
			{
				func_707(500);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					while (!GlobalFunc_7047(&iLocal_50, 12, -317.9068f, 6195.894f, 36.0577f, 72.1587f, 1))
					{
						SYSTEM::WAIT(0);
					}
					func_373();
				}
				func_703(Local_122, fLocal_125, 1, 0);
				func_706(Local_122, fLocal_125, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			func_701();
			func_700();
			break;
		
		case 3:
			if (bLocal_233)
			{
				func_707(500);
				func_366(-333.1017f, 6190.6f, 30.2311f, 313.7933f);
				func_370();
				iLocal_638 = 0;
				func_706(Local_122, fLocal_125, 1);
				func_703(Local_122, fLocal_125, 1, 1);
				while (!func_702(uLocal_312[2]))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_702(iLocal_50))
				{
					SYSTEM::WAIT(0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_67, 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_67, -315.9196f, 6208.773f, 31.3002f, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_67, 0.0104f, 0.0149f, -0.3583f, 0.9334f);
			}
			GlobalFunc_200(&Local_359, 1);
			GlobalFunc_173(&Local_359, 1, iLocal_50, "LESTER", 0, 1);
			func_701();
			func_700();
			break;
		
		case 4:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			func_701();
			func_700();
			GlobalFunc_2886(&Local_95, 2000);
			GlobalFunc_1719(&Local_95, 2000);
			if (bLocal_233)
			{
				func_707(500);
				iLocal_245 = 1;
				func_370();
				iLocal_638 = 0;
				func_706(Local_111, fLocal_114, 1);
				func_703(Local_111, fLocal_114, 1, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 5:
			iLocal_267 = 0;
			func_701();
			func_700();
			GlobalFunc_2886(&Local_95, 2000);
			GlobalFunc_1719(&Local_95, 2000);
			if (bLocal_233)
			{
				func_707(500);
				MISC::CLEAR_AREA(Local_111, 1000f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_130, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_133);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(17.28f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(3.16f, 1065353216);
				func_706(-119.2339f, 6454.937f, 30.4069f, 316.912f, 1);
				func_703(Local_111, fLocal_114, 0, 1);
				while (!func_702(uLocal_312[2]))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_702(iLocal_50))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_66, -132.2803f, 6498.743f, 29.1556f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_66, 0.0108f, 0.0008f, 0.7774f, -0.6289f);
				}
				SYSTEM::WAIT(1000);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, 1, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, 1, 0);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")) != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol")) != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 1);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol")) != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 1);
			}
			iLocal_264 = MISC::GET_GAME_TIMER();
			break;
		
		case 6:
			iLocal_253 = 0;
			iLocal_254 = 0;
			iLocal_256 = 0;
			iLocal_255 = 0;
			bLocal_237 = false;
			iLocal_262 = 0;
			bLocal_229 = false;
			iLocal_230 = 0;
			bLocal_231 = false;
			iLocal_263 = MISC::GET_GAME_TIMER();
			iLocal_250 = -1;
			iLocal_251 = -1;
			iLocal_252 = -1;
			bLocal_241 = false;
			iLocal_242 = 0;
			if (bLocal_233)
			{
				func_707(500);
				MISC::CLEAR_AREA(Local_111, 300f, 1, 0, 0, 0);
				func_706(Local_111, fLocal_114, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				func_703(Local_111, fLocal_114, 1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_66, -132.2819f, 6498.744f, 29.1569f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_66, 0.0109f, 0.0008f, 0.778f, -0.6281f);
				}
			}
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, 1, 0);
			func_701();
			func_700();
			Local_166 = { Local_151 };
			Local_163 = { Local_151 };
			iLocal_258 = MISC::GET_GAME_TIMER();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, 5000, 0);
			break;
		
		case 7:
			CUTSCENE::REMOVE_CUTSCENE();
			func_700();
			if (bLocal_233)
			{
				func_707(500);
				MISC::CLEAR_AREA(Local_111, 300f, 1, 0, 0, 0);
				func_706(Local_118, fLocal_121, 1);
				func_703(Local_118, fLocal_121, 1, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				while (!func_702(uLocal_312[2]))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_702(iLocal_50))
				{
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
				{
					PED::DELETE_PED(&iLocal_356);
				}
				while (!func_296())
				{
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
				{
					PED::DELETE_PED(&iLocal_356);
				}
				func_697();
				func_701();
				func_164();
				func_304(1);
				func_179(&(Local_546[2 /*9*/]));
				func_179(&(Local_546[3 /*9*/]));
				while (!func_300())
				{
					SYSTEM::WAIT(0);
				}
				while (!func_301())
				{
					SYSTEM::WAIT(0);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_252, 0.3f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_357, -82.5716f, 6420.555f, 31.0215f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_357, 0.0792f, -0.1038f, 0.594f, 0.7938f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
					{
						PED::DELETE_PED(&iLocal_356);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_66, -89.3137f, 6420.157f, 30.9773f, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_66, 0.001f, 0.0036f, -0.4005f, 0.9163f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
				{
					AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
				}
			}
			break;
		
		case 8:
			func_700();
			if (bLocal_233)
			{
				func_703(Local_118, fLocal_121, 1, 1);
			}
			break;
	}
	if (GlobalFunc_188())
	{
		switch (iLocal_47)
		{
			case 1:
				GlobalFunc_4967(0, -1, 0);
				break;
			
			case 5:
				GlobalFunc_4967(0, -1, 1);
				break;
			
			default:
				GlobalFunc_4967(iLocal_66, -1, 1);
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		if (!PED::IS_PED_INJURED(iLocal_50))
		{
			if (Local_359[1 /*10*/] == 0)
			{
				GlobalFunc_173(&Local_359, 1, iLocal_50, "LESTER", 0, 1);
			}
		}
	}
	else if (iParam0 != 1)
	{
		if (Local_359[1 /*10*/] != 0)
		{
			GlobalFunc_200(&Local_359, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_312[2]))
		{
			if (Local_359[2 /*10*/] == 0)
			{
				GlobalFunc_173(&Local_359, 2, uLocal_312[2], "TREVOR", 0, 1);
			}
		}
	}
	else if (Local_359[2 /*10*/] != 0)
	{
		GlobalFunc_200(&Local_359, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_359[0 /*10*/]))
	{
		GlobalFunc_173(&Local_359, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	func_694(iLocal_50);
	func_694(uLocal_312[2]);
	func_342(iParam0, 0, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (iLocal_47 != 5 && iLocal_47 != 4)
	{
		GlobalFunc_2884(&Local_95);
		func_692(&Local_95);
	}
	bLocal_233 = false;
}

void func_692(var uParam0)//Position - 0x6D13C
{
	uParam0->f_10 = 1000;
}


void func_694(int iParam0)//Position - 0x6D15A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_AS_ENEMY(iParam0, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1862763509);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 29, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 0);
		PED::SET_PED_KEEP_TASK(iParam0, 1);
	}
}



void func_697()//Position - 0x6D2BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51[iVar0]);
			}
			PED::DELETE_PED(&(iLocal_51[iVar0]));
		}
		iVar0++;
	}
}



void func_700()//Position - 0x6D322
{
	func_1();
	iLocal_259 = 0;
	iLocal_235 = 0;
	iLocal_253 = 0;
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
}

void func_701()//Position - 0x6D342
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_546)
	{
		func_179(&(Local_546[iVar0 /*9*/]));
		iVar0++;
	}
}

int func_702(int iParam0)//Position - 0x6D36C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_703(struct<3> Param0, float fParam3, bool bParam4, bool bParam5)//Position - 0x6D38C
{
	int iVar0;
	
	while (!func_672(Param0, fParam3))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_312[2]) || PED::IS_PED_INJURED(uLocal_312[2]))
	{
		if (bParam5)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 0;
		}
		PED::DELETE_PED(&(uLocal_312[2]));
		while (!func_407(&(uLocal_312[2]), 2, iLocal_66, iVar0, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (!PED::IS_PED_INJURED(uLocal_312[2]))
		{
			func_694(uLocal_312[2]);
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_312[2]))
	{
		if ((bParam5 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_66, 0) == uLocal_312[2])
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_312[2], iLocal_66, 2);
		}
	}
	if (bParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50) || PED::IS_PED_INJURED(iLocal_50))
		{
			PED::DELETE_PED(&iLocal_50);
			while (!GlobalFunc_6790(&iLocal_50, 12, iLocal_66, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			func_373();
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				func_694(iLocal_50);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		if (bParam4)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, -1);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_312[2]))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_312[2], iLocal_66, 0))
			{
				if (bParam5)
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_312[2], iLocal_66, 2);
				}
				else
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_312[2], iLocal_66, 0);
				}
			}
		}
		if (bParam5)
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_50, iLocal_66, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, 0);
					ENTITY::SET_ENTITY_COLLISION(iLocal_50, 1, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_50, 1);
					PED::SET_PED_INTO_VEHICLE(iLocal_50, iLocal_66, 0);
				}
			}
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_66);
	}
}



void func_706(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x6D5E2
{
	if (!GlobalFunc_188())
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, SYSTEM::COS((fParam3 + 90f)), SYSTEM::SIN((fParam3 + 90f)), 0f);
		if (iLocal_358 == -1)
		{
			iLocal_358 = MISC::GET_GAME_TIMER();
		}
		STREAMING::NEW_LOAD_SCENE_START(Param0, SYSTEM::COS((fParam3 + 90f)), SYSTEM::SIN((fParam3 + 90f)), 0f, 100f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iLocal_358) < 20000)
		{
			SYSTEM::WAIT(0);
		}
		iLocal_358 = -1;
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(Param0, 500f, 1, 0, 0, 0);
		if (bParam4)
		{
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		}
	}
}

void func_707(int iParam0)//Position - 0x6D694
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
}

void func_708(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x6D6B4
{
	Local_583.f_1 = { Param0 };
	Local_583.f_4 = { Param3 };
	if (bParam6)
	{
		Local_583.f_7 = joaat("prop_ld_alarm_01_dam");
		iLocal_243 = 1;
	}
	else
	{
		Local_583.f_7 = joaat("prop_ld_alarm_01");
		iLocal_243 = 0;
	}
	Local_583.f_9 = bParam6;
	Local_583.f_8 = 1;
	Local_583.f_12 = 0;
	Local_583.f_13 = 0;
	AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 1);
}


































void func_742()//Position - 0x71C4E
{
	Local_526 = { GlobalFunc_541("CBH_GOTOPB") };
	Local_528 = { GlobalFunc_541("CBH_GOTOBNK") };
	Local_530 = { GlobalFunc_541("CBH_GORDBCK") };
	Local_532 = { GlobalFunc_541("CBH_SHTBOX") };
	Local_534 = { GlobalFunc_541("CBH_HIDELOT") };
	Local_536 = { GlobalFunc_541("CBH_LOSECOP") };
	Local_538 = { GlobalFunc_541("CMN_GENGETBCK") };
	Local_540 = { GlobalFunc_541("CBH_AB1TREV") };
	Local_542 = { GlobalFunc_541("CBH_AB1BOTH") };
	Local_544 = { GlobalFunc_541("CBH_LLEAVE") };
	Local_524 = { GlobalFunc_541("RBS1_PRESHT") };
}



void func_745()//Position - 0x71D18
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(joaat("player_two"));
	STREAMING::REQUEST_MODEL(joaat("premier"));
	HUD::REQUEST_ADDITIONAL_TEXT("BANKS1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(cLocal_275, 6);
	STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
	PED::ADD_RELATIONSHIP_GROUP("THE_COPS", &iLocal_92);
	PED::ADD_RELATIONSHIP_GROUP("BANK_PEDS", &uLocal_93);
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_107 + Vector(50f, 50f, 50f), Local_107 - Vector(50f, 50f, 50f), 0, 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, uLocal_93);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.46846f, 6451.529f, -122.7547f) - Vector(3f, 4f, 4f), Vector(30.46846f, 6451.529f, -122.7547f) + Vector(3f, 4f, 4f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(28.62807f, 6501.802f, -128.9157f) - Vector(3f, 6f, 6f), Vector(28.62807f, 6501.802f, -128.9157f) + Vector(3f, 6f, 6f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.47077f, 6424.185f, -94.00424f) - Vector(3f, 6f, 6f), Vector(30.47077f, 6424.185f, -94.00424f) + Vector(3f, 6f, 6f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.3076f, 6194.538f, -346.8897f) - Vector(10f, 20f, 20f), Vector(30.47077f, 6424.185f, -94.00424f) + Vector(10f, 20f, 20f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.1739f, 6460.759f, -157.2882f) - Vector(3f, 5f, 5f), Vector(30.1739f, 6460.759f, -157.2882f) + Vector(3f, 5f, 5f), 0, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_111, 1000f, 0, 0, 0, 0, 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\Alarms", 0);
	func_752();
	func_708(Local_157, Local_160, 0);
	if (GlobalFunc_199())
	{
		func_707(500);
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		if (iVar0 > 3)
		{
			if (GlobalFunc_8315() != 0)
			{
				while (!func_404(0, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_585(38, 1);
			GlobalFunc_585(37, 0);
			GlobalFunc_4972(1393.542f, 3580.138f, 33.9722f, 353.4546f, 1, 0);
			GlobalFunc_4967(0, -1, 1);
			func_185();
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					Local_195 = { Local_126 };
					fLocal_198 = fLocal_129;
					MISC::CLEAR_AREA(Local_107, 500f, 1, 0, 0, 0);
					func_28(1);
					break;
				
				case 1:
					MISC::CLEAR_AREA(Local_122, 500f, 1, 0, 0, 0);
					Local_195 = { Local_122 };
					fLocal_198 = fLocal_125;
					if (Global_84544)
					{
						func_28(2);
					}
					else
					{
						func_28(3);
					}
					break;
				
				case 2:
					MISC::CLEAR_AREA(Local_111, 1000f, 1, 0, 0, 0);
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")) == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 500, 1, 1);
					}
					if (Global_84544)
					{
						Local_195 = { Local_111 };
						fLocal_198 = fLocal_114;
						iLocal_245 = 1;
						func_28(4);
					}
					else
					{
						Local_195 = { Local_130 };
						fLocal_198 = fLocal_133;
						func_28(5);
					}
					break;
				
				case 3:
					func_337(1, 1);
					Local_195 = { Local_118 };
					fLocal_198 = fLocal_121;
					MISC::CLEAR_AREA(Local_118, 1000f, 1, 0, 0, 0);
					func_28(7);
					break;
			}
			bLocal_233 = true;
		}
		GlobalFunc_4972(Local_195, fLocal_198, 0, 0);
		if (GlobalFunc_8315() != 0)
		{
			while (!func_404(0, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.4401f, 6426.118f, -73.1887f) - Vector(1f, 7f, 7f), Vector(30.4401f, 6426.118f, -73.1887f) + Vector(2f, 7f, 7f), 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("premier"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ruffian"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_cop_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_f_y_cop_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_hwaycop_01"), 1);
	PED::SET_CREATE_RANDOM_COPS(0);
	func_337(0, 1);
	func_337(3, 1);
	func_337(5, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(32.21845f, 6448.463f, -118.875f) + Vector(2.25f, 6.25f, 8f), Vector(32.21845f, 6448.463f, -118.875f) - Vector(2.25f, 6.25f, 8f), 0, 1);
	func_708(Local_157, Local_160, 0);
	GlobalFunc_173(&Local_359, 4, 0, "PALETOSCANNER", 0, 1);
	GlobalFunc_173(&Local_359, 5, 0, "PALETOCOP1", 0, 1);
	GlobalFunc_8523(6, 1);
	GlobalFunc_563(1);
	AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM");
}







void func_752()//Position - 0x723A2
{
	Local_598[0 /*3*/] = { -107.2791f, 6468.418f, 30.6267f };
	Local_598[1 /*3*/] = { -105.5016f, 6467.449f, 30.6267f };
	Local_598[2 /*3*/] = { -105.3874f, 6470.759f, 30.6267f };
	Local_598[3 /*3*/] = { -102.1724f, 6464.298f, 30.6267f };
	fLocal_626[0] = 297.621f;
	fLocal_626[1] = 346.4444f;
	fLocal_626[2] = 142.5701f;
	fLocal_626[3] = 40.5428f;
}

void func_753()//Position - 0x72432
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (GlobalFunc_485(38))
	{
	}
	if (GlobalFunc_485(37))
	{
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_546[iLocal_257 /*9*/].f_3, 0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_546[iLocal_257 /*9*/].f_3, 0.8f, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_64, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_64);
	}
	func_266(&Local_95, 0, 0);
	CAM::STOP_GAMEPLAY_HINT(0);
	AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", 0);
	STREAMING::REMOVE_PTFX_ASSET();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_107 + Vector(50f, 50f, 50f), Local_107 - Vector(50f, 50f, 50f), 0);
	GlobalFunc_4935();
	GlobalFunc_563(0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.46846f, 6451.529f, -122.7547f) - Vector(3f, 4f, 4f), Vector(30.46846f, 6451.529f, -122.7547f) + Vector(3f, 4f, 4f), 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(28.62807f, 6501.802f, -128.9157f) - Vector(3f, 6f, 6f), Vector(28.62807f, 6501.802f, -128.9157f) + Vector(3f, 6f, 6f), 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.47077f, 6424.185f, -94.00424f) - Vector(3f, 6f, 6f), Vector(30.47077f, 6424.185f, -94.00424f) + Vector(3f, 6f, 6f), 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.3076f, 6194.538f, -346.8897f) - Vector(10f, 20f, 20f), Vector(30.47077f, 6424.185f, -94.00424f) + Vector(10f, 20f, 20f), 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.1739f, 6460.759f, -157.2882f) - Vector(3f, 5f, 5f), Vector(30.1739f, 6460.759f, -157.2882f) + Vector(3f, 5f, 5f), 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(32.21845f, 6448.463f, -118.875f) + Vector(2.25f, 6.25f, 8f), Vector(32.21845f, 6448.463f, -118.875f) - Vector(2.25f, 6.25f, 8f), 1, 1);
	if (AUDIO::IS_MUSIC_ONESHOT_PLAYING())
	{
		AUDIO::CANCEL_MUSIC_EVENT("RH1_START");
	}
	GlobalFunc_8523(6, 0);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_83))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_83, 0);
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_66, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_357, 0))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_357, 1);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.4401f, 6426.118f, -73.1887f) - Vector(1f, 7f, 7f), Vector(30.4401f, 6426.118f, -73.1887f) + Vector(3f, 7f, 7f), 1, 1);
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::_0x0AE73D8DF3A762B2(1);
	GlobalFunc_503(0, -1);
	GlobalFunc_504(0, -1);
	GlobalFunc_2884(&Local_95);
	func_692(&Local_95);
	GlobalFunc_10639(73, 6);
	GlobalFunc_10639(74, 6);
	GlobalFunc_10639(73, 1);
	GlobalFunc_10639(74, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_TRUCK_LOGS", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(40.81844f, 6464.545f, -116.5226f) + Vector(12.25f, 29.75f, 29.75f), Vector(40.81844f, 6464.545f, -116.5226f) - Vector(12.25f, 29.75f, 29.75f), 1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




