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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	struct<3> Local_70[5];
	int iLocal_86[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	struct<3> Local_164 = { 0, 0, 0 } ;
	struct<3> Local_167 = { 0, 0, 0 } ;
	struct<3> Local_170 = { 0, 0, 0 } ;
	struct<3> Local_173 = { 0, 0, 0 } ;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_185 = { 0, 0, 0 } ;
	struct<3> Local_188 = { 0, 0, 0 } ;
	struct<3> Local_191 = { 0, 0, 0 } ;
	struct<3> Local_194 = { 0, 0, 0 } ;
	struct<3> Local_197 = { 0, 0, 0 } ;
	float fLocal_200 = 0f;
	struct<3> Local_201 = { 0, 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	float fLocal_207 = 0f;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_214 = { 0, 0, 0 } ;
	struct<3> Local_217 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	struct<3> Local_223 = { 0, 0, 0 } ;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	float fLocal_232 = 0f;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
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
	char[] cLocal_260[8] = 0;
	char[] cLocal_261[8] = 0;
	char[] cLocal_262[8] = 0;
	char[] cLocal_263[8] = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char[] cLocal_266[8] = 0;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char[] cLocal_269[8] = 0;
	char[] cLocal_270[8] = 0;
	char* sLocal_271 = NULL;
	char[] cLocal_272[8] = 0;
	char* sLocal_273 = NULL;
	char[] cLocal_274[8] = 0;
	char[] cLocal_275[8] = 0;
	char[] cLocal_276[8] = 0;
	char[] cLocal_277[8] = 0;
	char[] cLocal_278[8] = 0;
	char[] cLocal_279[8] = 0;
	char[] cLocal_280[8] = 0;
	char[] cLocal_281[8] = 0;
	char[] cLocal_282[8] = 0;
	char[] cLocal_283[8] = 0;
	char[] cLocal_284[8] = 0;
	char[] cLocal_285[8] = 0;
	char[] cLocal_286[8] = 0;
	char* sLocal_287 = NULL;
	char[] cLocal_288[8] = 0;
	char[] cLocal_289[8] = 0;
	char[] cLocal_290[8] = 0;
	char[] cLocal_291[8] = 0;
	char* sLocal_292 = NULL;
	char* sLocal_293 = NULL;
	char* sLocal_294 = NULL;
	char* sLocal_295 = NULL;
	char* sLocal_296 = NULL;
	char* sLocal_297 = NULL;
	char* sLocal_298 = NULL;
	char[] cLocal_299[8] = 0;
	char[] cLocal_300[8] = 0;
	char[] cLocal_301[8] = 0;
	char[] cLocal_302[8] = 0;
	char[] cLocal_303[8] = 0;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	char* sLocal_310 = NULL;
	char* sLocal_311 = NULL;
	char* sLocal_312 = NULL;
	char* sLocal_313 = NULL;
	char* sLocal_314 = NULL;
	char* sLocal_315 = NULL;
	char* sLocal_316 = NULL;
	char* sLocal_317 = NULL;
	char* sLocal_318 = NULL;
	char* sLocal_319 = NULL;
	char* sLocal_320 = NULL;
	char* sLocal_321 = NULL;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char* sLocal_331 = NULL;
	char* sLocal_332 = NULL;
	char* sLocal_333 = NULL;
	char* sLocal_334 = NULL;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	struct<2> Local_338[16];
	int iLocal_371[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<36> Local_384[7];
	struct<3> Local_637 = { 0, 0, 0 } ;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	struct<2> Local_659 = { 0, 0 } ;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	int iLocal_681 = 0;
	struct<6> Local_682 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_688 = 0;
	var uLocal_689 = 1092616192;
	var uLocal_690 = 1101004800;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 3;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 30;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
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
	var uLocal_858 = 10;
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
	var uLocal_909 = 10;
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
	var uLocal_980 = 20;
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
	var uLocal_1022 = 0;
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
	var uLocal_1081 = 20;
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
	var uLocal_1182 = 30;
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
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
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
	var uLocal_1363 = 5;
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
	var uLocal_1394 = 7;
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
	var uLocal_1444 = 5;
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
	var uLocal_1470 = 3;
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
	var uLocal_1486 = 15;
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
	var uLocal_1581 = 10;
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
	var uLocal_1632 = 5;
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
	var uLocal_1658 = 5;
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
	var uLocal_1687 = 10;
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
	var uLocal_1705 = 12;
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
	var uLocal_1718 = 12;
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
	var uLocal_1731 = 12;
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
	var uLocal_1744 = 9;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 9;
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
	var uLocal_1787 = 12;
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
	var uLocal_1800 = 12;
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
	var uLocal_1813 = 12;
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
	var uLocal_1826 = 9;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 9;
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
	var uLocal_1869 = 12;
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
	var uLocal_1882 = 12;
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
	var uLocal_1895 = 12;
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
	var uLocal_1908 = 9;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 9;
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
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 12;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 12;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 12;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 9;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 9;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
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
	var uLocal_2033 = 12;
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
	var uLocal_2046 = 12;
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
	var uLocal_2059 = 12;
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
	var uLocal_2072 = 9;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 9;
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
	var uLocal_2115 = 12;
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
	var uLocal_2128 = 12;
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
	var uLocal_2141 = 12;
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
	var uLocal_2154 = 9;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 9;
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
	var uLocal_2197 = 12;
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
	var uLocal_2210 = 12;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
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
	var uLocal_2223 = 12;
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
	var uLocal_2236 = 9;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 9;
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
	var uLocal_2279 = 12;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 12;
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
	var uLocal_2305 = 12;
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
	var uLocal_2318 = 9;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 9;
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
	var uLocal_2361 = 12;
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
	var uLocal_2374 = 12;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 12;
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
	var uLocal_2400 = 9;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 9;
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
	var uLocal_2443 = 12;
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
	var uLocal_2456 = 12;
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
	var uLocal_2469 = 12;
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
	var uLocal_2482 = 9;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 9;
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
	var uLocal_2508 = 30;
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
	struct<3> Local_2569[6];
	int iLocal_2588[3] = { 0, 0, 0 };
	int iLocal_2592 = 0;
	bool bLocal_2593 = 0;
	bool bLocal_2594 = 0;
	bool bLocal_2595 = 0;
	char* sLocal_2596 = NULL;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	bool bLocal_2599 = 0;
	struct<3> Local_2600 = { 0, 0, 0 } ;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	char cLocal_2606[24] = "";
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	int iLocal_2612 = 0;
	int iLocal_2613 = 0;
	bool bLocal_2614 = 0;
	int iLocal_2615 = 0;
	bool bLocal_2616 = 0;
	bool bLocal_2617 = 0;
	bool bLocal_2618 = 0;
	bool bLocal_2619 = 0;
	int iLocal_2620 = 0;
	int iLocal_2621 = 0;
	int iLocal_2622 = 0;
	int iLocal_2623 = 0;
	int iLocal_2624 = 0;
	int iLocal_2625 = 0;
	int iLocal_2626 = 0;
	int iLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 1065353216;
	var uLocal_2633 = 1065353216;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 1065353216;
	var uLocal_2638 = 1065353216;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 1065353216;
	var uLocal_2643 = 1065353216;
	var uLocal_2644 = 0;
	var uLocal_2645 = 1040187392;
	var uLocal_2646 = 1040187392;
	var uLocal_2647 = -1;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	int iLocal_2650 = 0;
	int iLocal_2651 = 0;
	bool bLocal_2652 = 0;
	int iLocal_2653 = 0;
	int iLocal_2654 = 0;
	int iLocal_2655 = 0;
	int iLocal_2656 = 0;
	int iLocal_2657 = 0;
	float fLocal_2658 = 0f;
	float fLocal_2659 = 0f;
	float fLocal_2660 = 0f;
	float fLocal_2661 = 0f;
	float fLocal_2662 = 0f;
	float fLocal_2663 = 0f;
	float fLocal_2664 = 0f;
	float fLocal_2665 = 0f;
	float fLocal_2666 = 0f;
	float fLocal_2667 = 0f;
	float fLocal_2668 = 0f;
	float fLocal_2669 = 0f;
	int iLocal_2670 = 0;
	int iLocal_2671 = 0;
	int iLocal_2672 = 0;
	int iLocal_2673 = 0;
	int iLocal_2674 = 0;
	float fLocal_2675 = 0f;
	float fLocal_2676 = 0f;
	float fLocal_2677 = 0f;
	float fLocal_2678 = 0f;
	int iLocal_2679 = 0;
	int iLocal_2680 = 0;
	int iLocal_2681 = 0;
	int iLocal_2682 = 0;
	int iLocal_2683 = 0;
	int iLocal_2684 = 0;
	struct<3> Local_2685 = { 0, 0, 0 } ;
	int iLocal_2688 = 0;
	int iLocal_2689 = 0;
	int iLocal_2690 = 0;
	bool bLocal_2691 = 0;
	int iLocal_2692[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2698[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_2704 = 0;
	int iLocal_2705 = 0;
	int iLocal_2706 = 0;
	int iLocal_2707 = 0;
	int iLocal_2708[3] = { 0, 0, 0 };
	int iLocal_2712 = 0;
	int iLocal_2713 = 0;
	bool bLocal_2714 = 0;
	int iLocal_2715 = 0;
	int iLocal_2716 = 0;
	int iLocal_2717 = 0;
	int iLocal_2718 = 0;
	int iLocal_2719 = 0;
	bool bLocal_2720 = 0;
	int iLocal_2721 = 0;
	int iLocal_2722 = 0;
	int iLocal_2723 = 0;
	int iLocal_2724 = 0;
	bool bLocal_2725 = 0;
	int iLocal_2726 = 0;
	bool bLocal_2727 = 0;
	int iLocal_2728 = 0;
	int iLocal_2729 = 0;
	int iLocal_2730 = 0;
	int iLocal_2731 = 0;
	int iLocal_2732 = 0;
	int iLocal_2733 = 0;
	bool bLocal_2734 = 0;
	struct<3> Local_2735 = { 0, 0, 0 } ;
	bool bLocal_2738 = 0;
	int iLocal_2739 = 0;
	int iLocal_2740 = 0;
	int iLocal_2741 = 0;
	int iLocal_2742 = 0;
	int iLocal_2743[3] = { 0, 0, 0 };
	int iLocal_2747 = 0;
	bool bLocal_2748 = 0;
	int iLocal_2749 = 0;
	int iLocal_2750 = 0;
	int iLocal_2751 = 0;
	int iLocal_2752 = 0;
	int iLocal_2753 = 0;
	int iLocal_2754 = 0;
	int iLocal_2755 = 0;
	int iLocal_2756[3] = { 0, 0, 0 };
	var uLocal_2760 = 0;
	char* sLocal_2761 = NULL;
	var uLocal_2762 = 0;
	int iLocal_2763 = 0;
	int iLocal_2764 = 0;
	int iLocal_2765 = 0;
	int iLocal_2766 = 0;
	int iLocal_2767 = 0;
	int iLocal_2768 = 0;
	int iLocal_2769 = 0;
	int iLocal_2770 = 0;
	int iLocal_2771 = 0;
	int iLocal_2772 = 0;
	int iLocal_2773 = 0;
	float fLocal_2774 = 0f;
	float fLocal_2775 = 0f;
	int iLocal_2776 = 0;
	float fLocal_2777 = 0f;
	float fLocal_2778 = 0f;
	float fLocal_2779 = 0f;
	float fLocal_2780 = 0f;
	int iLocal_2781 = 0;
	int iLocal_2782 = 0;
	int iLocal_2783 = 0;
	int iLocal_2784 = 0;
	int iLocal_2785 = 0;
	float fLocal_2786 = 0f;
	float fLocal_2787 = 0f;
	float fLocal_2788 = 0f;
	float fLocal_2789 = 0f;
	float fLocal_2790 = 0f;
	float fLocal_2791 = 0f;
	bool bLocal_2792 = 0;
	int iLocal_2793 = 0;
	float fLocal_2794 = 0f;
	int iLocal_2795 = 0;
	int iLocal_2796 = 0;
	struct<3> Local_2797 = { 0, 0, 0 } ;
	int iLocal_2800 = 0;
	int iLocal_2801 = 0;
	struct<20> Local_2802 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_2836 = 4;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 4;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 4;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 4;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 4;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 4;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 4;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 16;
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
	var uLocal_2935 = 0;
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
	var uLocal_2961 = 0;
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
	var uLocal_2990 = 0;
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
	var uLocal_3008 = 0;
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
	var uLocal_3021 = 0;
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
	var uLocal_3034 = 0;
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
	int iLocal_3045 = 0;
	int iLocal_3046 = 0;
	int iLocal_3047 = 0;
	int iLocal_3048[5] = { 0, 0, 0, 0, 0 };
	int iLocal_3054 = 0;
	int iLocal_3055[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3064 = 0;
	int iLocal_3065 = 0;
	int iLocal_3066 = 0;
	int iLocal_3067 = 0;
	int iLocal_3068 = 0;
	int iLocal_3069[3] = { 0, 0, 0 };
	int iLocal_3073 = 0;
	int iLocal_3074 = 0;
	int iLocal_3075 = 0;
	int iLocal_3076 = 0;
	int iLocal_3077 = 0;
	int iLocal_3078 = 0;
	int iLocal_3079 = 0;
	int iLocal_3080 = 0;
	int iLocal_3081 = 0;
	int iLocal_3082 = 0;
	var uLocal_3083 = 0;
	int iLocal_3084 = 0;
	int iLocal_3085 = 0;
	int iLocal_3086 = 0;
	int iLocal_3087 = 0;
	int iLocal_3088 = 0;
	int iLocal_3089 = 0;
	int iLocal_3090 = 0;
	int iLocal_3091 = 0;
	int iLocal_3092 = 0;
	int iLocal_3093[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3139 = 0;
	int iLocal_3140 = 0;
	int iLocal_3141 = 0;
	int iLocal_3142 = 0;
	char[] cLocal_3143[8] = 0;
	char[] cLocal_3144[8] = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	int iLocal_3152 = 0;
	struct<2> Local_3153 = { 0, 0 } ;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	char cLocal_3157[16] = "";
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	struct<3> Local_3161 = { 0, 0, 0 } ;
	struct<3> Local_3164[19];
	int iLocal_3222 = 0;
	int iLocal_3223[3] = { 0, 0, 0 };
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
	Local_61 = { 0f, 0f, 0f };
	Local_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_95 = 120;
	iLocal_96 = 117;
	iLocal_97 = 118;
	Local_98 = { 141.9461f, -2201.9f, 3.686588f };
	Local_101 = { 129.34f, -2203.33f, 5.03f };
	Local_104 = { 133.7404f, -2196.815f, 6.1353f };
	Local_107 = { 142.8228f, -2202.241f, 3.6867f };
	Local_110 = { -2956.279f, 314.3996f, 29.6051f };
	Local_113 = { -2954.543f, 310.1234f, 29.1099f };
	Local_116 = { 142.99f, -2201.98f, 4.07f };
	Local_119 = { -0.45f, 0f, 96.61f };
	Local_122 = { Local_116 };
	Local_125 = { Local_119 + Vector(180f, 0f, 0f) };
	Local_128 = { 0f, 0f, 0f };
	Local_131 = { 0f, 0f, 0f };
	Local_134 = { 0f, 0f, 0f };
	Local_137 = { 0f, 0f, 0f };
	Local_140 = { 143.1199f, -2201.345f, 4.35f };
	Local_143 = { 0f, 0f, 0f };
	Local_146 = { 143.1f, -2201.345f, 4.502f };
	Local_149 = { 0f, 0f, 173.1f };
	Local_152 = { 120.04f, -2195.461f, 5.0328f };
	Local_155 = { 128.3181f, -2195.584f, 5.0324f };
	Local_158 = { 111.0266f, -2189.034f, 4.9691f };
	Local_161 = { 169.2886f, -2194.267f, 5.033f };
	Local_164 = { -876.0392f, -13.2516f, 41.5182f };
	Local_167 = { -2965.707f, 359.8771f, 13.7698f };
	Local_170 = { -1263.865f, -892.5212f, 10.4036f };
	Local_173 = { -1268.427f, -888.1281f, 10.4502f };
	Local_176 = { -1268.129f, -886.0143f, 10.5154f };
	Local_179 = { -1033.514f, -2729.645f, 20.1064f };
	Local_182 = { 126.8514f, -2198.861f, 6.1049f };
	Local_185 = { 141.6254f, -2198.832f, 4.6875f };
	Local_188 = { -2956.042f, 315.845f, 29.638f };
	Local_191 = { 3.5f, 0f, 76f };
	Local_194 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2955.56f, 316.1508f, 30.1988f, 77.1451f, -0.075f, 0.25f, 0f) };
	Local_197 = { -6.3088f, 0f, 91.127f };
	fLocal_200 = 43f;
	Local_201 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2955.56f, 316.1508f, 30.1988f, 77.1451f, 0.075f, 0.25f, 0f) };
	Local_204 = { -6.3088f, 0f, 91.127f };
	fLocal_207 = 43f;
	Local_208 = { -3095.699f, 344.77f, 13.46f };
	Local_211 = { 0f, 0f, 75f };
	Local_214 = { -1267.915f, -881.06f, 11.727f };
	Local_217 = { 0f, 0f, -58.2f };
	Local_220 = { -886.168f, -12.005f, 42.165f };
	Local_223 = { 0f, 0f, 85f };
	Local_226 = { -2955.346f, 316.2738f, 30.2934f };
	Local_229 = { Vector(11.0148f, 285.2572f, -3173.528f) - Local_226 };
	fLocal_232 = 500f;
	iLocal_233 = joaat("cs_mrk");
	iLocal_234 = joaat("u_m_m_partytarget");
	iLocal_235 = joaat("u_m_y_party_01");
	iLocal_236 = joaat("a_f_y_bevhills_04");
	iLocal_237 = joaat("g_m_m_armboss_01");
	iLocal_238 = joaat("a_f_m_bevhills_01");
	iLocal_239 = joaat("a_m_y_hipster_03");
	iLocal_240 = joaat("a_f_y_hipster_04");
	iLocal_241 = joaat("prop_v_cam_01");
	iLocal_242 = joaat("prop_v_bmike_01");
	iLocal_243 = joaat("p_amb_clipboard_01");
	iLocal_244 = joaat("p_cs_trolley_01_s");
	iLocal_245 = joaat("v_ilev_tort_stool");
	iLocal_246 = joaat("prop_cs_wrench");
	iLocal_247 = joaat("p_pliers_01_s");
	iLocal_248 = joaat("prop_torture_01");
	iLocal_249 = joaat("prop_syringe_01");
	iLocal_250 = joaat("prop_torture_ch_01");
	iLocal_251 = joaat("p_ld_crocclips01_s");
	iLocal_252 = joaat("p_ld_crocclips02_s");
	iLocal_253 = joaat("prop_ld_tooth");
	iLocal_254 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_petrolcan"));
	iLocal_255 = joaat("p_loose_rag_01_s");
	iLocal_256 = joaat("prop_ecg_01");
	iLocal_257 = joaat("p_arm_bind_cut_s");
	iLocal_258 = joaat("p_wboard_clth_s");
	iLocal_259 = joaat("prop_big_shit_01");
	cLocal_260 = "missfbi3_party";
	cLocal_261 = "MISSFBI3_STEVE_PHONE";
	cLocal_262 = "MISSFBI3_CamCrew";
	cLocal_263 = "MISSFBI3_SNIPING";
	sLocal_264 = "prone_michael";
	sLocal_265 = "prone_dave";
	cLocal_266 = "switch@michael@coffee_w_dave";
	sLocal_267 = "ROAD_VIBRATION_SHAKE";
	sLocal_268 = "HAND_SHAKE";
	cLocal_269 = "ECG_MONITOR";
	cLocal_270 = "TEETH_PULLING";
	sLocal_271 = "Trevor";
	cLocal_272 = "Dave_FBI";
	sLocal_273 = "Trevors_car";
	cLocal_274 = "TORTURE_Trolley";
	cLocal_275 = "Torture_table_for_ECG";
	cLocal_276 = "TORTURE_Battery";
	cLocal_277 = "TORTURE_Chair";
	cLocal_278 = "TORTURE_ECG_Machine";
	cLocal_279 = "TORTURE_Wrench";
	cLocal_280 = "TORTURE_Pliers";
	cLocal_281 = "TORTURE_Battery_clip_right";
	cLocal_282 = "TORTURE_Battery_clip_left";
	cLocal_283 = "TORTURE_Jerrycan";
	cLocal_284 = "TORTURE_Syringe";
	cLocal_285 = "Steve_FBI";
	cLocal_286 = "MR_K";
	sLocal_287 = "MRK_toothless";
	cLocal_288 = "Torture_Binding_Arm";
	cLocal_289 = "Torture_Binding_Arm_2";
	cLocal_290 = "Torture_Rag";
	sLocal_293 = "TFT_HTSWPTREV";
	sLocal_294 = "TFT_SHOOT";
	sLocal_295 = "TFT_DRIVE2";
	sLocal_296 = "TFT_DRIVE3";
	sLocal_297 = "CMN_GENGETIN";
	sLocal_298 = "CMN_GENGETBCK";
	cLocal_299 = "FBI_03_TORTURE_General";
	cLocal_300 = "FBI_03_TORTURE_Electric";
	cLocal_301 = "FBI_03_TORTURE_Teeth";
	cLocal_302 = "FBI_03_TORTURE_Water";
	cLocal_303 = "FBI_03_TORTURE_Wrench";
	sLocal_304 = "FBI_03_TORTURE_Heart_Monitor_Single";
	sLocal_305 = "FBI_03_TORTURE_Heart_Monitor_Flatline";
	sLocal_306 = "FBI_3_TORTURE_ZOOM";
	sLocal_307 = "EARLYCUT_IN";
	sLocal_308 = "scr_fbi3_blood_extraction";
	sLocal_309 = "scr_fbi3_blood_mouth";
	sLocal_310 = "scr_fbi3_blood_throwaway";
	sLocal_311 = "scr_fbi3_elec_smoulder";
	sLocal_312 = "scr_fbi3_elec_sparks";
	sLocal_313 = "scr_fbi3_dirty_water_pour";
	sLocal_314 = "hlp_TOR1";
	sLocal_315 = "hlp_TOR2";
	sLocal_316 = "hlp_TOR3";
	sLocal_317 = "hlp_TOR4";
	sLocal_318 = "hlp_WRENCH";
	sLocal_319 = "hlp_PLIER1";
	sLocal_320 = "hlp_PLIER2";
	sLocal_321 = "hlp_BATTERY";
	sLocal_322 = "hlp_CHAIR";
	sLocal_323 = "hlp_POUR";
	sLocal_324 = "hlp_SYRINGE";
	sLocal_325 = "hlp_MENU";
	sLocal_326 = "FBI_03_TORTURE_Choose_Electric";
	sLocal_327 = "FBI_03_TORTURE_Choose_Pliers";
	sLocal_328 = "FBI_03_TORTURE_Choose_Water";
	sLocal_329 = "FBI_03_TORTURE_Choose_Wrench";
	sLocal_330 = "FBI_03_TORTURE_Electric_Hum";
	sLocal_331 = "FBI_03_TORTURE_Electric_Zap";
	sLocal_332 = "FBI_03_TORTURE_Electric_Spark";
	sLocal_333 = "FBI_03_TORTURE_Teeth_Pulling";
	sLocal_334 = "FBI_03_TORTURE_Teeth_Tooth_Out";
	sLocal_335 = "FBI_03_TORTURE_Water_Pour_Water";
	sLocal_336 = "FBI_03_TORTURE_Water_Pick_Up";
	sLocal_337 = "FBI_03_TORTURE_Wrench_Hit_Shin";
	sLocal_2596 = "";
	StringCopy(&Local_2600, "", 24);
	StringCopy(&cLocal_2606, "", 24);
	iLocal_2612 = -1;
	iLocal_2654 = 1;
	iLocal_2674 = -1;
	fLocal_2675 = 100f;
	fLocal_2676 = 0f;
	fLocal_2677 = 0f;
	fLocal_2678 = 0f;
	iLocal_2684 = -1;
	Local_2685 = { 0.15f, 0.025f, 0.2f };
	iLocal_2706 = -1;
	Local_2735 = { 0f, 0f, 0f };
	iLocal_2739 = -1;
	iLocal_2742 = -1;
	sLocal_2761 = "ECG";
	iLocal_2763 = 255;
	iLocal_2768 = 1631749045;
	iLocal_2769 = -40354734;
	iLocal_2771 = -1;
	iLocal_2773 = -1;
	fLocal_2774 = 0f;
	fLocal_2775 = 100f;
	fLocal_2786 = 0f;
	fLocal_2787 = 0f;
	fLocal_2788 = 0f;
	fLocal_2789 = 0f;
	fLocal_2790 = 0f;
	fLocal_2794 = 0.5f;
	iLocal_3084 = joaat("weapon_sniperrifle");
	cLocal_3143 = "FB3AUD";
	cLocal_3144 = "FBI3";
	Local_3161 = { 0f, 0f, 0f };
	func_814();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		iLocal_69 = 0;
		func_799();
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_BTB", 0);
		if (iLocal_2770 == 0)
		{
			cLocal_291 = cLocal_286;
			sLocal_292 = sLocal_287;
		}
		else
		{
			cLocal_291 = sLocal_287;
			sLocal_292 = cLocal_286;
		}
		bLocal_2618 = false;
		bLocal_2619 = false;
		bLocal_2720 = false;
		bLocal_2616 = false;
		func_798(&uLocal_2508, 0);
		GlobalFunc_8012(&uLocal_707);
		GlobalFunc_5195(&uLocal_1687);
		if (GlobalFunc_111())
		{
			iLocal_2772 = -1;
		}
		else if (iLocal_2772 == -1)
		{
			iLocal_2772 = MISC::GET_GAME_TIMER();
		}
		if (!bLocal_2593)
		{
			func_789();
		}
		func_767();
		if (!bLocal_2593)
		{
			func_766();
			func_199();
		}
		if (bLocal_2594)
		{
			if (!bLocal_2595)
			{
				func_799();
			}
			else
			{
				func_1();
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x7FB
{
	if (!GlobalFunc_145())
	{
		if (iLocal_2773 != -1)
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && (CUTSCENE::GET_CUTSCENE_TIME() - iLocal_2773) > 2500)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(2500);
				}
			}
		}
	}
	else
	{
		func_2(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_2(int iParam0)//Position - 0x84F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	GlobalFunc_5652(&Local_682, 1, 0);
	switch (iParam0)
	{
		case 0:
			bVar1 = true;
			break;
		
		case 1:
			bVar1 = true;
			break;
		
		case 2:
			bVar1 = false;
			GlobalFunc_2237(4);
			break;
		
		case 3:
			bVar1 = false;
			break;
	}
	if (iParam0 != 0)
	{
		GlobalFunc_7621(63, 0, 0, 1, 0);
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_11038(func_181(), 4, -1) == GlobalFunc_4915(func_181(), 25, 0, 4))
		{
			GlobalFunc_11271(func_181(), 4, GlobalFunc_4915(func_181(), 0, 0, 4), 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11038(func_181(), 8, -1) == GlobalFunc_4915(func_181(), 12, 0, 8))
		{
			GlobalFunc_11271(func_181(), 8, GlobalFunc_4915(func_181(), 0, 0, 8), 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11038(func_181(), 6, -1) == GlobalFunc_4915(func_181(), 11, 0, 6))
		{
			GlobalFunc_11271(func_181(), 6, GlobalFunc_4915(func_181(), 0, 0, 6), 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	func_64();
	GlobalFunc_705(&uLocal_1687);
	if (bVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			iLocal_2692[iVar2] = 0;
			iVar2++;
		}
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(sLocal_2761);
		}
		if (iLocal_2716)
		{
			AUDIO::STOP_AUDIO_SCENE(sLocal_306);
			AUDIO::STOP_STREAM();
			iLocal_2716 = 0;
		}
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		func_60(0);
		func_50();
		GRAPHICS::REMOVE_DECALS_IN_RANGE(-3095.93f, 344.02f, 13.5f, 34.375f);
		CAM::DESTROY_ALL_CAMS(0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	iVar2 = 0;
	while (iVar2 <= (45 - 1))
	{
		iLocal_3093[iVar2] = -1;
		iVar2++;
	}
	if (iLocal_2622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3078))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3078, -1000f, 0);
		}
	}
	func_49();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(1);
	GlobalFunc_7139(&Local_682, 0);
	iVar2 = 0;
	while (iVar2 <= (7 - 1))
	{
		func_46(&(Local_384[iVar2 /*36*/]), 1);
		iVar2++;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3139))
	{
		HUD::REMOVE_BLIP(&uLocal_3139);
	}
	func_44(&iLocal_3075, bVar1);
	func_44(&iLocal_3076, bVar1);
	func_44(&iLocal_3077, bVar1);
	func_44(&iLocal_3078, bVar1);
	func_44(&iLocal_3079, bVar1);
	func_44(&iLocal_3080, bVar1);
	func_44(&iLocal_3073, bVar1);
	func_44(&iLocal_3074, bVar1);
	func_44(&iLocal_3081, bVar1);
	func_44(&iLocal_3082, bVar1);
	iVar0 = 0;
	while (iVar0 < iLocal_3069)
	{
		func_44(&(iLocal_3069[iVar0]), bVar1);
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < iLocal_371)
	{
		func_44(&(iLocal_371[iVar3]), bVar1);
		iVar3++;
	}
	func_42(&iLocal_3066, bVar1);
	func_42(&iLocal_3064, bVar1);
	func_42(&iLocal_3065, bVar1);
	if (bVar1)
	{
		VEHICLE::DELETE_ALL_TRAINS();
	}
	else
	{
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_3067, 0);
	}
	func_39(&(iLocal_2836[0]), bVar1);
	func_39(&(iLocal_2836[2]), bVar1);
	func_39(&iLocal_3045, bVar1);
	func_39(&iLocal_3046, bVar1);
	func_39(&iLocal_3047, bVar1);
	func_39(&iLocal_3054, bVar1);
	iVar0 = 0;
	while (iVar0 < iLocal_3048)
	{
		func_39(&(iLocal_3048[iVar0]), bVar1);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < Local_338)
	{
		func_39(&(Local_338[iVar4 /*2*/]), bVar1);
		Local_338[iVar4 /*2*/].f_1 = 0;
		iVar4++;
	}
	iLocal_2766 = 0;
	iLocal_2767 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
			if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	GlobalFunc_7632(0);
	GlobalFunc_563(0);
	StringCopy(&Local_3153, "", 16);
	iLocal_3152 = 0;
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sLocal_2761);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	HUD::DISPLAY_RADAR(1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3140);
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
	}
	iLocal_2622 = 0;
	iLocal_2688 = 0;
	iLocal_2713 = 0;
	if (iParam0 != 0)
	{
		AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_234, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(2, 0), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_5112(30, 0), 0);
	}
	func_25(1, 1, 1);
	MISC::SET_TIME_SCALE(1f);
	VEHICLE::SET_RANDOM_TRAINS(1);
	if (iLocal_69 == 0 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
	{
		STREAMING::STOP_PLAYER_SWITCH();
	}
	iLocal_2624 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
	{
		AUDIO::CANCEL_MUSIC_EVENT(sLocal_2596);
		sLocal_2596 = "";
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (GlobalFunc_2567(23))
	{
		GlobalFunc_601(23, 0);
	}
	AUDIO::STOP_AUDIO_SCENES();
	if (iLocal_2793)
	{
		GlobalFunc_689();
		iLocal_2793 = 0;
	}
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	if (iLocal_2796)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_20()))
		{
			GlobalFunc_7704(func_20(), 0);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[0 /*284*/][21 /*3*/] = { Local_2797 };
		if (ENTITY::DOES_ENTITY_EXIST(func_20()))
		{
			GlobalFunc_7694(func_20(), 1, 0);
		}
		iLocal_2796 = 0;
	}
	func_798(&uLocal_2508, 1);
	Global_17098.f_113 = 0;
	iLocal_2706 = -1;
	func_4();
	GlobalFunc_702(0, 0, 1);
}


void func_4()//Position - 0xE0E
{
	if (iLocal_2795)
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
		iLocal_2795 = 0;
	}
}
















int func_20()//Position - 0x2751
{
	if (GlobalFunc_237(GlobalFunc_8315()) == 0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_2836[0];
}





void func_25(bool bParam0, bool bParam1, bool bParam2)//Position - 0x289C
{
	if (bParam0)
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4935();
		}
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (bParam2)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
	}
}














void func_39(var uParam0, bool bParam1)//Position - 0x3254
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && *uParam0 != PLAYER::PLAYER_PED_ID())
	{
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
			}
			func_40(&uLocal_2508, uParam0, 0);
		}
		else
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::SET_PED_KEEP_TASK(*uParam0, 1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_40(var uParam0, var uParam1, int iParam2)//Position - 0x32B2
{
	if (func_41(uParam0, *uParam1, iParam2))
	{
		*uParam1 = 0;
	}
}

int func_41(var uParam0, int iParam1, int iParam2)//Position - 0x32CC
{
	char cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, "entity does not exist", 64);
		return 0;
	}
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	bVar17 = true;
	while (bVar17)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar16 /*2*/]))
		{
			iVar18 = 0;
			while (iVar18 < *uParam0)
			{
				if ((*uParam0)[iVar18 /*2*/] == iParam1)
				{
					return 1;
				}
				iVar18++;
			}
			(*uParam0)[iVar16 /*2*/] = iParam1;
			(uParam0[iVar16 /*2*/])->f_1 = (MISC::GET_GAME_TIMER() + iParam2);
			bVar17 = false;
			return 1;
		}
		else
		{
			if ((*uParam0)[iVar16 /*2*/] == iParam1)
			{
				return 1;
			}
			iVar16++;
			if (iVar16 > (*uParam0 - 1))
			{
				bVar17 = false;
			}
		}
	}
	return 0;
}

void func_42(var uParam0, bool bParam1)//Position - 0x3373
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
		}
		if (bParam1 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
		{
			func_43(&uLocal_2508, uParam0, 0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_43(var uParam0, var uParam1, int iParam2)//Position - 0x33C3
{
	if (func_41(uParam0, *uParam1, iParam2))
	{
		*uParam1 = 0;
	}
}

void func_44(int iParam0, bool bParam1)//Position - 0x33DD
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 1);
		}
		if (bParam1)
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 0, 1);
			}
			func_45(&uLocal_2508, iParam0, 0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_45(var uParam0, var uParam1, int iParam2)//Position - 0x342E
{
	if (func_41(uParam0, *uParam1, iParam2))
	{
		*uParam1 = 0;
	}
}

void func_46(var uParam0, bool bParam1)//Position - 0x3448
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		func_47(uParam0, -1000f);
		func_44(uParam0, bParam1);
	}
	uParam0->f_8 = 0;
	uParam0->f_15 = 0;
}

void func_47(var uParam0, float fParam1)//Position - 0x3477
{
	if (uParam0->f_15)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_17)))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_16, &(uParam0->f_17), 3))
			{
				ENTITY::STOP_ENTITY_ANIM(*uParam0, &(uParam0->f_17), uParam0->f_16, fParam1);
				uParam0->f_15 = 0;
			}
		}
		else
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam1, 0);
			uParam0->f_15 = 0;
		}
		uParam0->f_16 = "";
		StringCopy(&(uParam0->f_17), "", 64);
	}
}


void func_49()//Position - 0x3500
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iLocal_2692[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_2708[iVar0] = 0;
		iVar0++;
	}
	StringCopy(&Local_2600, "", 24);
	StringCopy(&cLocal_2606, "", 24);
	iLocal_2724 = 0;
	iLocal_2721 = 0;
	iLocal_2623 = 0;
	fLocal_2774 = 0f;
	iLocal_2801 = 0;
	fLocal_2788 = 0f;
	iLocal_2654 = 1;
	iLocal_2655 = 0;
	iLocal_2650 = 0;
	iLocal_2651 = 0;
	iLocal_2680 = 0;
	if (iLocal_3090)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3089))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3089, 0);
		}
		iLocal_3090 = 0;
	}
}

void func_50()//Position - 0x3596
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_181()) && !PED::IS_PED_INJURED(func_181()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(func_181(), 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(func_181(), 1);
		if (PLAYER::PLAYER_PED_ID() != func_181())
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 0);
		}
	}
	GlobalFunc_5174(&uLocal_707, iLocal_245);
	GlobalFunc_5174(&uLocal_707, iLocal_244);
	GlobalFunc_5174(&uLocal_707, iLocal_256);
	GlobalFunc_5174(&uLocal_707, iLocal_250);
	GlobalFunc_5174(&uLocal_707, iLocal_248);
	GlobalFunc_5174(&uLocal_707, iLocal_253);
	GlobalFunc_5174(&uLocal_707, iLocal_246);
	GlobalFunc_5174(&uLocal_707, iLocal_251);
	GlobalFunc_5174(&uLocal_707, iLocal_252);
	GlobalFunc_5174(&uLocal_707, iLocal_254);
	GlobalFunc_5174(&uLocal_707, iLocal_255);
	GlobalFunc_5174(&uLocal_707, iLocal_247);
	GlobalFunc_5174(&uLocal_707, iLocal_249);
	GlobalFunc_5174(&uLocal_707, iLocal_257);
	GlobalFunc_5174(&uLocal_707, iLocal_258);
	GlobalFunc_5174(&uLocal_707, iLocal_259);
	GlobalFunc_5175(&uLocal_707, cLocal_261);
	GlobalFunc_5175(&uLocal_707, "missfbi3_weapon_select");
	GlobalFunc_5175(&uLocal_707, "missfbi3_weapon_select_trolley");
	GlobalFunc_5175(&uLocal_707, "SHAKE_CAM_medium");
	GlobalFunc_5178(&uLocal_707, &iLocal_3141);
	GlobalFunc_5178(&uLocal_707, &iLocal_3142);
	GlobalFunc_5177(&uLocal_707, cLocal_299);
	GlobalFunc_5177(&uLocal_707, cLocal_300);
	GlobalFunc_5177(&uLocal_707, cLocal_301);
	GlobalFunc_5177(&uLocal_707, "FBI_03_Torture_Teeth_Pain");
	GlobalFunc_5177(&uLocal_707, cLocal_302);
	GlobalFunc_5177(&uLocal_707, cLocal_303);
	GlobalFunc_5177(&uLocal_707, "FBI_03_Torture_Chair");
	GlobalFunc_5174(&uLocal_707, GlobalFunc_4946(23));
	GlobalFunc_5174(&uLocal_707, joaat("ig_mrk"));
	fLocal_2787 = -1f;
	fLocal_2786 = -1f;
	func_51();
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sLocal_2761);
	}
	func_44(&iLocal_3075, 1);
	func_44(&iLocal_3076, 1);
	func_44(&iLocal_3077, 1);
	func_44(&iLocal_3078, 1);
	func_44(&iLocal_3079, 1);
	func_44(&iLocal_3080, 1);
	func_44(&(iLocal_371[10]), 1);
	func_44(&iLocal_3081, 1);
	func_44(&iLocal_3082, 1);
	func_44(&iLocal_3074, 1);
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		func_46(&(Local_384[iVar0 /*36*/]), 1);
		iVar0++;
	}
	func_39(&iLocal_3046, 1);
	func_39(&iLocal_3045, 1);
	func_42(&iLocal_3066, 1);
	if (GlobalFunc_2567(23))
	{
		GlobalFunc_601(23, 0);
	}
	iLocal_2690 = 0;
}

void func_51()//Position - 0x37DC
{
	func_52(3);
	func_52(4);
	func_52(5);
	func_52(6);
	func_52(9);
	func_52(10);
	func_52(11);
	func_52(12);
	func_52(13);
	func_52(14);
}

void func_52(int iParam0)//Position - 0x381C
{
	if (func_53(iParam0))
	{
		if (Local_3164[iParam0 /*3*/] != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(Local_3164[iParam0 /*3*/]))
			{
				AUDIO::STOP_SOUND(Local_3164[iParam0 /*3*/]);
			}
			AUDIO::RELEASE_SOUND_ID(Local_3164[iParam0 /*3*/]);
			Local_3164[iParam0 /*3*/] = -1;
		}
		Local_3164[iParam0 /*3*/].f_1 = 0;
		Local_3164[iParam0 /*3*/].f_2 = 0;
	}
}

int func_53(int iParam0)//Position - 0x3879
{
	if (Local_3164[iParam0 /*3*/].f_2)
	{
		return 1;
	}
	return 0;
}







void func_60(bool bParam0)//Position - 0x3AB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_20()) && !PED::IS_PED_INJURED(func_20()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_20(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(func_20(), 1);
		}
	}
	func_62(&(iLocal_3093[38]));
	func_62(&(iLocal_3093[39]));
	func_62(&(iLocal_3093[40]));
	func_62(&(iLocal_3093[41]));
	func_62(&(iLocal_3093[42]));
	func_62(&(iLocal_3093[43]));
	GlobalFunc_5174(&uLocal_707, iLocal_235);
	GlobalFunc_5174(&uLocal_707, iLocal_236);
	GlobalFunc_5174(&uLocal_707, iLocal_234);
	GlobalFunc_5174(&uLocal_707, joaat("prop_cs_ciggy_01b"));
	GlobalFunc_5174(&uLocal_707, joaat("p_fag_packet_01_s"));
	GlobalFunc_5174(&uLocal_707, joaat("p_ing_coffeecup_01"));
	GlobalFunc_5174(&uLocal_707, joaat("prop_npc_phone"));
	GlobalFunc_5174(&uLocal_707, joaat("prop_chair_01a"));
	GlobalFunc_5174(&uLocal_707, joaat("prop_fbi3_coffee_table"));
	GlobalFunc_5174(&uLocal_707, joaat("prop_binoc_01"));
	GlobalFunc_5175(&uLocal_707, cLocal_266);
	GlobalFunc_5175(&uLocal_707, cLocal_263);
	GlobalFunc_5175(&uLocal_707, "MISSFBI3_PARTY");
	GlobalFunc_5175(&uLocal_707, "MISSFBI3_PARTY_B");
	GlobalFunc_5175(&uLocal_707, "MISSFBI3_PARTY_C");
	GlobalFunc_5175(&uLocal_707, "MISSFBI3_PARTY_D");
	GlobalFunc_5175(&uLocal_707, "MISSFBI3_PARTY_E");
	GlobalFunc_5175(&uLocal_707, cLocal_260);
	func_61(&uLocal_707, iLocal_3084);
	GlobalFunc_5177(&uLocal_707, "FBI_03_Panic");
	iVar0 = 0;
	while (iVar0 < iLocal_3223)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3223[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3223[iVar0], 0);
		}
		iVar0++;
	}
	if (!bParam0)
	{
		func_42(&iLocal_3064, 1);
		func_39(&iLocal_3047, 1);
	}
	func_39(&iLocal_3054, 1);
	func_44(&iLocal_3073, 1);
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		func_44(&(iLocal_371[iVar1]), 1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 <= 15)
	{
		func_39(&(Local_338[iVar2 /*2*/]), 1);
		iVar2++;
	}
	if (iLocal_2716)
	{
		AUDIO::STOP_AUDIO_SCENE(sLocal_306);
		AUDIO::STOP_STREAM();
		iLocal_2716 = 0;
	}
	if (iLocal_2750 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2750, 0);
	}
	if (GlobalFunc_2567(23))
	{
		GlobalFunc_601(23, 0);
	}
	iLocal_2715 = 0;
}

void func_61(var uParam0, int iParam1)//Position - 0x3CDD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_202)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			if (uParam0->f_202[iVar0 /*7*/].f_4 == iParam1)
			{
				if (uParam0->f_202[iVar0 /*7*/].f_1)
				{
					WEAPON::REMOVE_WEAPON_ASSET(iParam1);
					GlobalFunc_700(&(uParam0->f_202[iVar0 /*7*/]));
					return;
				}
				else
				{
					uParam0->f_202[iVar0 /*7*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_62(var uParam0)//Position - 0x3D4D
{
	*uParam0 = -1;
}


void func_64()//Position - 0x3DC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_2698)
	{
		iLocal_2698[iVar0] = 0;
		iVar0++;
	}
}





















































































































int func_181()//Position - 0x1FFA0
{
	if (GlobalFunc_237(GlobalFunc_8315()) == 2)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_2836[2];
}


















void func_199()//Position - 0x246C7
{
	iLocal_2627 = iLocal_2626;
	iLocal_2626 = 0;
	switch (iLocal_681)
	{
		case 0:
			func_742();
			break;
		
		case 1:
			func_727();
			break;
		
		case 2:
			func_720();
			break;
		
		case 3:
			func_717();
			break;
		
		case 4:
			func_708();
			break;
		
		case 5:
			func_707();
			break;
		
		case 6:
			func_706();
			break;
		
		case 7:
			func_705();
			break;
		
		case 8:
			func_704();
			break;
		
		case 9:
			func_511();
			break;
		
		case 10:
			func_389();
			break;
		
		case 11:
			func_257();
			break;
		
		case 12:
			func_249();
			break;
		
		case 13:
			if (!iLocal_2592)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				func_248(800);
				iLocal_2592 = 1;
			}
			else if (CAM::IS_SCREEN_FADED_IN())
			{
				func_244();
			}
			break;
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_3149) || !CAM::IS_CAM_ACTIVE(uLocal_3149))
	{
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
		}
	}
	GlobalFunc_2453(fLocal_2794);
	if (bLocal_2618)
	{
		func_241();
		func_238();
		func_236();
	}
	func_207();
	func_200();
}

void func_200()//Position - 0x24808
{
	var uVar0;
	
	if (!iLocal_86[5])
	{
		if (func_206(29, 0.339f, 1f))
		{
			iLocal_86[5] = 1;
		}
	}
	if (iLocal_86[0])
	{
		if (func_206(29, 0.1f, 1f))
		{
			iLocal_86[0] = 0;
		}
	}
	if (func_206(8, 0.245f, 0.268f))
	{
		if (!CAM::IS_CAM_SHAKING(uLocal_3149))
		{
			CAM::SHAKE_CAM(uLocal_3149, "JOLT_SHAKE", 1.5f);
		}
		if (!iLocal_86[2])
		{
			iLocal_86[2] = 1;
		}
	}
	if (func_206(7, 0.186f, 0.217f))
	{
		if (!CAM::IS_CAM_SHAKING(uLocal_3149))
		{
			CAM::SHAKE_CAM(uLocal_3149, "JOLT_SHAKE", 1.5f);
		}
		if (!iLocal_86[3])
		{
			iLocal_86[3] = 1;
		}
	}
	if (func_206(6, 0.395f, 0.435f))
	{
		if (!CAM::IS_CAM_SHAKING(uLocal_3149))
		{
			CAM::SHAKE_CAM(uLocal_3149, "JOLT_SHAKE", 1.5f);
		}
		if (!iLocal_86[4])
		{
			iLocal_86[4] = 1;
		}
	}
	if (!iLocal_86[1])
	{
		if (func_205(iLocal_3093[22]) || fLocal_2788 > 0.2f)
		{
			iLocal_86[1] = 1;
		}
	}
	if (!iLocal_86[0])
	{
		if (func_206(13, 0.064f, 0.087f) || func_206(14, 0.06f, 0.082f))
		{
			iLocal_86[0] = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
	{
		uVar0 = 12;
		uVar0.f_13 = 12;
		uVar0.f_26 = 12;
		uVar0.f_39 = 9;
		uVar0.f_49 = 9;
		GlobalFunc_8358(iLocal_3045, &uVar0, 1);
		if (iLocal_86[7])
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_3045, 8, 2, 0);
			}
			else if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_3045))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 8, 2, 0, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_3045);
			}
		}
		if (iLocal_86[6])
		{
			if (uVar0.f_13[7] != 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 7, 2, 0, 0);
			}
		}
		else if (iLocal_2770 == 0)
		{
			if (uVar0.f_13[7] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 7, 0, 0, 0);
			}
		}
		else if (uVar0.f_13[7] != 1 || uVar0[7] != iLocal_2770)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 7, 1, iLocal_2770, 0);
		}
		if (iLocal_86[0])
		{
			if (uVar0.f_13[0] != 0 || uVar0[0] != 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 0, 0, 2, 0);
			}
		}
		else if (uVar0.f_13[0] != 0 || uVar0[0] != 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 0, 0, 1, 0);
		}
		if (iLocal_86[2])
		{
			if (uVar0.f_13[6] != 1 || uVar0[6] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 6, 1, 0, 0);
			}
		}
		else if (uVar0.f_13[6] != 0 || uVar0[6] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 6, 0, 0, 0);
		}
		if (iLocal_86[3])
		{
			if (uVar0.f_13[11] != 1 || uVar0[11] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 11, 1, 0, 0);
			}
		}
		else if (uVar0.f_13[11] != 0 || uVar0[11] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 11, 0, 0, 0);
		}
		if (iLocal_86[4])
		{
			if (uVar0.f_13[1] != 1 || uVar0[1] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 1, 1, 0, 0);
			}
		}
		else if (uVar0.f_13[1] != 0 || uVar0[1] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 1, 0, 0, 0);
		}
		if (iLocal_86[1])
		{
			if (uVar0.f_13[10] != 1 || uVar0[10] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 10, 1, 0, 0);
			}
		}
		else if (uVar0.f_13[10] != 0 || uVar0[10] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 10, 0, 0, 0);
		}
		if (iLocal_86[5])
		{
			if (uVar0.f_13[9] != 1 || uVar0[9] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 9, 1, 0, 0);
			}
		}
		else if (uVar0.f_13[9] != 0 || uVar0[9] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 9, 0, 0, 0);
		}
	}
}





int func_205(int iParam0)//Position - 0x255B0
{
	if (iParam0 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0) < 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, float fParam1, float fParam2)//Position - 0x255DA
{
	float fVar0;
	
	if (iLocal_3093[iParam0] != -1 && func_205(iLocal_3093[iParam0]))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[iParam0]);
		if (fVar0 > fParam1 && fVar0 < fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_207()//Position - 0x25622
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
	{
		HUD::SET_TEXT_RENDER_ID(uLocal_2760);
		if (bLocal_2618)
		{
			fLocal_2775 = GlobalFunc_253(fLocal_2775, 0f, 100f);
			GlobalFunc_1327(0f, 0f, 1f, 1f, 0, 0, 0, 255);
			if (iLocal_3141 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3141))
			{
				if (!iLocal_2690)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3141, "SET_COLOUR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(235);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_2690 = 1;
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3141, 0.2f, 0.3f, 0.4f, 0.6f, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_2690 = 0;
			}
		}
		else
		{
			GlobalFunc_1327(0f, 0f, 1f, 1f, 0, 0, 0, 255);
		}
		HUD::SET_TEXT_RENDER_ID(uLocal_2762);
	}
	if (bLocal_2619)
	{
		HUD::SET_TEXT_RENDER_ID(uLocal_2762);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3142))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3142, 0.5f, 0.825f, 0.2f, 0.3f, 255, 255, 255, iLocal_2763, 0);
		}
	}
	if (bLocal_2720)
	{
		GlobalFunc_10374(&iLocal_2836, 0, 1);
	}
}





























void func_236()//Position - 0x27231
{
	if (bLocal_2616)
	{
		func_52(0);
		AUDIO::STOP_SOUND(Local_3164[0 /*3*/]);
		if (!Local_3164[2 /*3*/].f_2)
		{
			Local_3164[2 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		AUDIO::PLAY_SOUND_FROM_COORD(Local_3164[2 /*3*/], sLocal_304, 143.0145f, -2201.359f, 4.3415f, 0, 0, 0, 0);
		Local_3164[2 /*3*/].f_2 = 1;
		AUDIO::SET_VARIABLE_ON_SOUND(Local_3164[2 /*3*/], "BPM", (fLocal_2777 + fLocal_2778));
	}
	else if ((fLocal_2777 + fLocal_2778) == 0f)
	{
		func_52(2);
		AUDIO::STOP_SOUND(Local_3164[2 /*3*/]);
		if (!Local_3164[0 /*3*/].f_2)
		{
			Local_3164[0 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_3164[0 /*3*/]))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(Local_3164[0 /*3*/], sLocal_305, 143.0145f, -2201.359f, 4.3415f, 0, 0, 0, 0);
			Local_3164[0 /*3*/].f_2 = 1;
		}
	}
	if ((func_206(8, 0.245f, 0.268f) || func_206(7, 0.185f, 0.202f)) || func_206(6, 0.393f, 0.407f))
	{
		func_237(14, sLocal_337, iLocal_3045, 1, 0);
	}
	else
	{
		Local_3164[14 /*3*/].f_1 = 0;
	}
	if (func_206(3, 0.222f, 1f))
	{
		if (!func_53(3))
		{
			func_237(3, sLocal_330, iLocal_3075, 1, 0);
		}
	}
	else if (func_206(22, 0.904f, 1f))
	{
		func_52(3);
	}
	if (fLocal_2660 > 0.704f)
	{
		func_237(5, "Electrical_Clamp_On", Local_384[3 /*36*/], 1, "FBI_03_Torture_Sounds");
		Local_3164[7 /*3*/].f_1 = 0;
	}
	else
	{
		func_237(7, "Electrical_Clamp_Off", Local_384[3 /*36*/], 1, "FBI_03_Torture_Sounds");
		Local_3164[5 /*3*/].f_1 = 0;
	}
	if (fLocal_2661 > 0.704f)
	{
		func_237(6, "Electrical_Clamp_On", Local_384[4 /*36*/], 1, "FBI_03_Torture_Sounds");
		Local_3164[8 /*3*/].f_1 = 0;
	}
	else
	{
		func_237(8, "Electrical_Clamp_Off", Local_384[4 /*36*/], 1, "FBI_03_Torture_Sounds");
		Local_3164[6 /*3*/].f_1 = 0;
	}
	if (fLocal_2658 > 0f)
	{
		if (!func_53(4))
		{
			func_237(4, sLocal_331, iLocal_3045, 1, 0);
		}
	}
	else if (!func_205(iLocal_3093[22]) || func_206(22, 0.198f, 1f))
	{
		func_52(4);
	}
	if (func_206(21, 0.146f, 0.246f))
	{
		func_237(9, sLocal_332, func_181(), 1, 0);
	}
	else
	{
		Local_3164[9 /*3*/].f_1 = 0;
	}
	if (func_206(4, 0.14f, 0.192f))
	{
		func_237(13, sLocal_336, func_181(), 1, 0);
	}
	else
	{
		Local_3164[13 /*3*/].f_1 = 0;
	}
	if (func_206(29, 0f, 1f))
	{
		if (!func_53(12))
		{
			func_237(12, sLocal_335, iLocal_3045, 1, 0);
		}
	}
	else
	{
		func_52(12);
	}
	if (func_206(13, 0.01f, 0.02f) || func_206(14, 0.06f, 0.082f))
	{
		func_237(11, sLocal_334, func_181(), 1, 0);
	}
	else
	{
		Local_3164[11 /*3*/].f_1 = 0;
	}
	if (bLocal_2792)
	{
		if (!func_53(10))
		{
			func_237(10, sLocal_333, iLocal_3045, 1, 0);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(Local_3164[10 /*3*/], "Intensity", fLocal_2791);
	}
	else
	{
		func_52(10);
	}
}

void func_237(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x27581
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!Local_3164[iParam0 /*3*/].f_1)
		{
			if (!Local_3164[iParam0 /*3*/].f_2)
			{
				Local_3164[iParam0 /*3*/] = AUDIO::GET_SOUND_ID();
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_3164[iParam0 /*3*/], sParam1, iParam2, iParam4, 0, 0);
			Local_3164[iParam0 /*3*/].f_2 = 1;
			if (bParam3)
			{
				Local_3164[iParam0 /*3*/].f_1 = 1;
			}
		}
	}
}

void func_238()//Position - 0x275E3
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar1 = 0;
	fVar2 = 0f;
	iVar4 = 0;
	iVar6 = 0;
	if (bLocal_2616 && !bLocal_2617)
	{
		iVar0 = GlobalFunc_3003(iVar0, 130);
		iVar1 = GlobalFunc_3003(iVar1, 130);
	}
	if (func_205(iLocal_3093[6]) && iLocal_2620 == 6)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[6]);
		if (fVar2 > 0.393f && fVar2 < 0.407f)
		{
			iVar0 = GlobalFunc_3003(iVar0, 260);
			iVar1 = GlobalFunc_3003(iVar1, 255);
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 260);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			func_239();
		}
	}
	if (func_205(iLocal_3093[7]) && iLocal_2620 == 7)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[7]);
		if (fVar2 > 0.185f && fVar2 < 0.202f)
		{
			iVar0 = GlobalFunc_3003(iVar0, 260);
			iVar1 = GlobalFunc_3003(iVar1, 255);
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 260);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			func_239();
		}
	}
	if (func_205(iLocal_3093[8]) && iLocal_2620 == 8)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[8]);
		if (fVar2 > 0.245f && fVar2 < 0.268f)
		{
			iVar0 = GlobalFunc_3003(iVar0, 260);
			iVar1 = GlobalFunc_3003(iVar1, 255);
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 260);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			func_239();
		}
	}
	if ((func_205(iLocal_3093[12]) && iLocal_2620 == 12) || (func_205(iLocal_3093[18]) && iLocal_2620 == 18))
	{
		if (func_205(iLocal_3093[12]) && iLocal_2620 == 12)
		{
			fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[12]);
			if (fVar2 > 0.762f && fVar2 < 0.837f)
			{
				bVar7 = true;
			}
		}
		else if (func_205(iLocal_3093[18]) && iLocal_2620 == 18)
		{
			fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[18]);
			if (fVar2 > 0.444f && fVar2 < 0.581f)
			{
				bVar7 = true;
			}
		}
		if (bVar7)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 130);
				iVar6 = GlobalFunc_3003(iVar5, 200);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, 130);
				iVar1 = GlobalFunc_3003(iVar1, 200);
			}
		}
	}
	else if (func_205(iLocal_3093[16]) && iLocal_2620 == 16)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[16]);
		if (fVar2 < 0.14f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 100);
				iVar6 = GlobalFunc_3003(iVar5, 100);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, 100);
				iVar1 = GlobalFunc_3003(iVar1, 100);
			}
		}
	}
	if (bLocal_2792)
	{
		if (fLocal_2791 > 0f)
		{
			iVar8 = 130;
			iVar9 = ((20 + SYSTEM::ROUND((20f * GlobalFunc_253((fLocal_2774 / 5f), 0f, 1f)))) + SYSTEM::ROUND((215f * fLocal_2791)));
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (bLocal_2616 && !bLocal_2617)
			{
				iVar8 = 130;
				iVar9 = 130;
			}
		}
		if (MISC::IS_DURANGO_VERSION())
		{
			iVar5 = GlobalFunc_3003(iVar5, iVar8);
			iVar6 = GlobalFunc_3003(iVar6, iVar9);
		}
		else
		{
			iVar0 = GlobalFunc_3003(iVar0, iVar8);
			iVar1 = GlobalFunc_3003(iVar1, iVar9);
		}
	}
	if (func_205(iLocal_3093[13]) && iLocal_2620 == 13)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[13]);
		if (fVar2 > 0.014f && fVar2 < 0.032f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 260);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, 260);
				iVar1 = GlobalFunc_3003(iVar1, 255);
			}
			func_239();
		}
	}
	if (func_205(iLocal_3093[14]) && iLocal_2620 == 14)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[14]);
		if (fVar2 > 0.06f && fVar2 < 0.082f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 260);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, 260);
				iVar1 = GlobalFunc_3003(iVar1, 255);
			}
			func_239();
		}
	}
	if (func_205(iLocal_3093[18]) && iLocal_2620 == 14)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[18]);
		if (fVar2 > 0.562f && fVar2 < 1f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, 130);
				iVar6 = GlobalFunc_3003(iVar6, 200);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, 130);
				iVar1 = GlobalFunc_3003(iVar1, 200);
			}
		}
	}
	if (func_205(iLocal_3093[21]) && iLocal_2620 == 21)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[21]);
		if (fVar2 > 0.142f && fVar2 < 0.213f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar3 = GlobalFunc_3003(iVar3, 130);
				iVar4 = GlobalFunc_3003(iVar4, 255);
				iVar5 = GlobalFunc_3003(iVar5, 130);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			iVar0 = GlobalFunc_3003(iVar0, 130);
			iVar1 = GlobalFunc_3003(iVar1, 255);
			func_239();
		}
	}
	if (func_205(iLocal_3093[22]) && iLocal_2620 == 22)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[22]);
		if (fVar2 > 0f && fVar2 < 0.198f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar3 = GlobalFunc_3003(iVar3, 130);
				iVar4 = GlobalFunc_3003(iVar4, 255);
				iVar5 = GlobalFunc_3003(iVar5, 130);
				iVar6 = GlobalFunc_3003(iVar6, 255);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, 130);
				iVar1 = GlobalFunc_3003(iVar1, 255);
			}
			func_239();
		}
	}
	if (fLocal_2660 >= 1f && fLocal_2661 >= 1f)
	{
		iVar10 = 130;
		iVar11 = SYSTEM::ROUND(((255f * fLocal_2658) * GlobalFunc_253((fLocal_2774 / 6.5f), 0.5f, 1f)));
		if (MISC::IS_DURANGO_VERSION())
		{
			iVar3 = GlobalFunc_3003(iVar3, iVar10);
			iVar4 = GlobalFunc_3003(iVar4, iVar11);
			iVar5 = GlobalFunc_3003(iVar5, iVar10);
			iVar6 = GlobalFunc_3003(iVar6, iVar11);
		}
		else
		{
			iVar0 = GlobalFunc_3003(iVar0, iVar10);
			iVar1 = GlobalFunc_3003(iVar1, iVar11);
		}
	}
	else
	{
		if (fLocal_2660 >= 1f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				if (bLocal_2616 && !bLocal_2617)
				{
					iVar3 = GlobalFunc_3003(iVar3, 130);
					iVar4 = GlobalFunc_3003(iVar4, 130);
				}
			}
		}
		else if (fLocal_2660 > 0.704f && fLocal_2660 < 1f)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				iVar12 = 130;
				iVar13 = 200;
			}
			else
			{
				iVar12 = 100;
				iVar13 = 100;
			}
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar3 = GlobalFunc_3003(iVar3, iVar12);
				iVar4 = GlobalFunc_3003(iVar4, iVar13);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, iVar12);
				iVar1 = GlobalFunc_3003(iVar1, iVar13);
			}
		}
		if (fLocal_2661 >= 1f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				if (bLocal_2616 && !bLocal_2617)
				{
					iVar5 = GlobalFunc_3003(iVar5, 130);
					iVar6 = GlobalFunc_3003(iVar6, 130);
				}
			}
		}
		else if (fLocal_2661 > 0.704f && fLocal_2661 < 1f)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 229))
			{
				iVar14 = 130;
				iVar15 = 200;
			}
			else
			{
				iVar14 = 100;
				iVar15 = 100;
			}
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = GlobalFunc_3003(iVar5, iVar14);
				iVar6 = GlobalFunc_3003(iVar6, iVar15);
			}
			else
			{
				iVar0 = GlobalFunc_3003(iVar0, iVar14);
				iVar1 = GlobalFunc_3003(iVar1, iVar15);
			}
		}
	}
	if (func_205(iLocal_3093[26]) && iLocal_2620 == 26)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[26]);
		if (fVar2 > 0.107f && fVar2 < 0.112f)
		{
			iVar0 = GlobalFunc_3003(iVar0, 260);
			iVar1 = GlobalFunc_3003(iVar1, 255);
		}
	}
	if (func_205(iLocal_3093[32]) && iLocal_2620 == 32)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[32]);
		if (fVar2 > 0f && fVar2 < 0.043f)
		{
			iVar0 = GlobalFunc_3003(iVar0, 130);
			iVar1 = GlobalFunc_3003(iVar1, 200);
		}
	}
	if (func_205(iLocal_3093[34]) && iLocal_2620 == 34)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[34]);
		if (fVar2 > 0.03f && fVar2 < 0.043f)
		{
			iVar0 = GlobalFunc_3003(iVar0, 260);
			iVar1 = GlobalFunc_3003(iVar1, 255);
			func_239();
		}
	}
	if (func_205(iLocal_3093[29]) && iLocal_2620 == 29)
	{
		iVar0 = GlobalFunc_3003(iVar0, 130);
		iVar1 = GlobalFunc_3003(iVar1, 200);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		if ((iVar3 != 0 && iVar4 != 0) || (iVar5 != 0 && iVar6 != 0))
		{
			PAD::_0x14D29BB12D47F68C(0, 0, 0, 0, 0);
			PAD::_0x14D29BB12D47F68C(0, iVar3, iVar4, iVar5, iVar6);
		}
	}
	if (iVar0 != 0 && iVar1 != 0)
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::SET_PAD_SHAKE(0, iVar0, iVar1);
	}
}

void func_239()//Position - 0x27EED
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3046, cLocal_261, "steve_phone_reaction", 3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3046);
		ENTITY::SET_ENTITY_COORDS(iLocal_3046, Local_185, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_3046, 190.2745f);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_reaction", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 786440, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_a", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_a", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_b", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_a", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_b", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3083, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_3046, uLocal_3083);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
	}
}


void func_241()//Position - 0x28061
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (bLocal_2617)
	{
		bLocal_2616 = false;
		fLocal_2777 = 0f;
		fLocal_2778 = 0f;
		fLocal_2780 = 0f;
		fLocal_2779 = 0f;
		fVar0 = 0f;
	}
	else
	{
		fLocal_2777 = GlobalFunc_253((80f + ((1f - (fLocal_2775 / 100f)) * (200f - 80f))), 0f, 200f);
		if (fLocal_2780 == 0f)
		{
			fLocal_2778 = 0f;
		}
		else
		{
			iVar1 = (MISC::GET_GAME_TIMER() - iLocal_2784);
			if (iVar1 <= iLocal_2781)
			{
				fVar2 = GlobalFunc_253((IntToFloat(iVar1) / SYSTEM::TO_FLOAT(iLocal_2781)), 0f, 1f);
				fLocal_2778 = GlobalFunc_551(fLocal_2779, fLocal_2780, fVar2);
			}
			else if (iVar1 <= iLocal_2782)
			{
				fLocal_2778 = fLocal_2780;
			}
			else if (iVar1 <= iLocal_2783)
			{
				fVar2 = GlobalFunc_253((IntToFloat(((iVar1 - iLocal_2782) - iLocal_2781)) / SYSTEM::TO_FLOAT(iLocal_2783)), 0f, 1f);
				fLocal_2778 = GlobalFunc_551(fLocal_2780, 0f, fVar2);
			}
			else
			{
				fLocal_2778 = 0f;
				fLocal_2780 = 0f;
				fLocal_2779 = 0f;
				iLocal_2784 = 0;
				iLocal_2781 = 0;
				iLocal_2782 = 0;
				iLocal_2783 = 0;
			}
		}
		fVar0 = ((fLocal_2777 + fLocal_2778) + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)));
		if (MISC::GET_GAME_TIMER() - iLocal_2776) >= SYSTEM::ROUND((60000f / fVar0))
		{
			bLocal_2616 = true;
			iLocal_2776 = MISC::GET_GAME_TIMER();
		}
		else
		{
			bLocal_2616 = false;
		}
	}
	if (iLocal_3141 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3141))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_2785) > 500)
		{
			if (fLocal_2787 != fVar0)
			{
				fLocal_2787 = fVar0;
				iVar3 = SYSTEM::ROUND(fLocal_2787);
				fVar4 = SYSTEM::TO_FLOAT(iVar3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3141, "SET_HEART_RATE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iLocal_2785 = MISC::GET_GAME_TIMER();
		}
		if (fLocal_2786 != fLocal_2775)
		{
			fLocal_2786 = fLocal_2775;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3141, "SET_HEALTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_2786);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!bLocal_2617)
		{
			if (bLocal_2616)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3141, "SET_HEART_BEAT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3.5f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}



void func_244()//Position - 0x28262
{
	func_25(1, 1, 1);
	func_2(3);
	GlobalFunc_5103(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_248(int iParam0)//Position - 0x283C9
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

void func_249()//Position - 0x283E8
{
	if (!iLocal_2592)
	{
		iLocal_2800 = 0;
		iLocal_2764 = 0;
		iLocal_2592 = 1;
		iLocal_3222 = 0;
	}
	if (iLocal_2592)
	{
		switch (iLocal_2800)
		{
			case 0:
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					if (!PED::IS_PED_INJURED(iLocal_3045))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3045, cLocal_291, 1, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, joaat("cs_mrk"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3066, sLocal_273, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_3055[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[0], "Ped_1", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_1", 2, joaat("a_f_y_bevhills_01"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[1]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[1], "Ped_2", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_2", 2, joaat("a_f_y_bevhills_01"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[2], "Ped_3", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[3]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[3], "Ped_4", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_4", 2, joaat("a_f_y_bevhills_01"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[4]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[4], "Ped_6", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[5]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[5], "Ped_7", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[6]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[6], "Ped_8", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3055[7]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3055[7], "Ped_11", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_11", 2, joaat("s_f_y_airhostess_01"), 0);
					}
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x48621C9FCA3EBD28(4);
					}
					GlobalFunc_4956();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_DRIVE_TO_AIRPORT"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_DRIVE_TO_AIRPORT");
					}
					iLocal_2800++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_248(800);
					PATHFIND::SET_ROADS_IN_AREA(Vector(61.21365f, -2519.508f, -909.8268f) - Vector(49.75f, 250f, 231.75f), Vector(61.21365f, -2519.508f, -909.8268f) + Vector(49.75f, 250f, 231.75f), 0, 1);
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_3066))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_3066);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(func_181()))
					{
						FIRE::STOP_ENTITY_FIRE(func_181());
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_3045))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_3045);
					}
					MISC::CLEAR_AREA_OF_PEDS(-1036.71f, -2731.66f, 19.17f, 5f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(-950.4f, -2561.11f, 12.83f, 250f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-1032.9f, -2731.43f, 19.04f, 30f, 0);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_3066, 1), 15f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_3066, 0, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_3066, 0, 0, 0f);
					iLocal_2800++;
				}
				break;
			
			case 2:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3055[0]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_1", 0))
					{
						iLocal_3055[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_1", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_1", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_3055[0]))
					{
						if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.32f, -2735.31f, 19.22f, "WORLD_HUMAN_SMOKING", 0.25f, 0))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[0], -1031.32f, -2735.31f, 19.22f, 0.25f, -1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3055[0], 0, 0);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3055[1]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_2", 0))
					{
						iLocal_3055[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_2", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_2", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_3055[1]))
					{
						if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.93f, -2739.68f, 19.66f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[1], -1031.93f, -2739.68f, 19.66f, 0.25f, -1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3055[1], 0, 0);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3055[3]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_4", 0))
					{
						iLocal_3055[3] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_4", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_4", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_3055[3]))
					{
						if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1042.16f, -2729.93f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[3], -1042.16f, -2729.93f, 19.17f, 0.25f, -1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3055[3], 0, 0);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3055[7]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_11", 0))
					{
						iLocal_3055[7] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_11", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_11", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_3055[7]))
					{
						if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1046.8f, -2735.29f, 19.59f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[7], -1046.8f, -2735.29f, 19.59f, 0.25f, -1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3055[7], 0, 0);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x81CBAE94390F9F89();
					}
					bLocal_2734 = true;
				}
				if (bLocal_2734)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_273, 0))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_3066, 1, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_3066, 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_3066, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3066, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_271, 0))
				{
					if (iLocal_2749 != 0)
					{
						PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2749, 0);
					}
					PED::CLEAR_PED_NON_CREATION_AREA();
					PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0);
					PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(61.21365f, -2519.508f, -909.8268f) - Vector(49.75f, 250f, 231.75f), Vector(61.21365f, -2519.508f, -909.8268f) + Vector(49.75f, 250f, 231.75f), 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_INTO_VEHICLE(func_181(), iLocal_3066, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_181(), 0, 0);
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2749, 0);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_2756[0]);
					GlobalFunc_8380(0, 1, 0, 0);
					iLocal_681 = 13;
				}
				break;
		}
		if (iLocal_681 != 12)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_3139))
			{
				HUD::REMOVE_BLIP(&uLocal_3139);
			}
			if (iLocal_2756[0] != -1)
			{
				VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_2756[0]);
				iLocal_2756[0] = -1;
			}
			func_49();
			iLocal_2592 = 0;
		}
	}
}








void func_257()//Position - 0x28CBF
{
	if (!iLocal_2592)
	{
		func_332(11, "12. Trevor Drives MrK to Airport", 1, 0, 0, 1);
		func_328();
		GlobalFunc_5652(&Local_682, 1, 0);
		SYSTEM::SETTIMERB(0);
		PED::SET_PED_CONFIG_FLAG(iLocal_3045, 116, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3066) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3066, 0))
		{
			VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3066, 1);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(1);
		func_327(iLocal_3045);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3045, 1);
		INTERIOR::UNPIN_INTERIOR(uLocal_2754);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3066, 1);
		AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_DRIVE_TO_AIRPORT");
		PED::SET_PED_NON_CREATION_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f));
		PATHFIND::SET_PED_PATHS_IN_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0, 0);
		iLocal_2749 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(-1038.28f, -2738.568f, 21.23223f, 40.813f, 1, 0, 0, 0);
		if (iLocal_2756[0] != -1)
		{
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_2756[0]);
		}
		iLocal_2756[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-1057.38f, -2715.4f, 19.12f, 4.375f, 0f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_179, 100f, 0, 0, 0, 0, 0);
		if (iLocal_2796)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_20()))
			{
				GlobalFunc_7704(func_20(), 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[0 /*284*/][21 /*3*/] = { Local_2797 };
			if (ENTITY::DOES_ENTITY_EXIST(func_20()))
			{
				GlobalFunc_7694(func_20(), 1, 0);
			}
			iLocal_2796 = 0;
		}
		func_248(800);
		iLocal_2800 = 0;
		iLocal_2764 = 0;
		iLocal_2592 = 1;
		iLocal_3222 = 0;
		if (!RECORDING::_IS_RECORDING())
		{
			RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
		}
	}
	if (iLocal_2592)
	{
		switch (iLocal_2800)
		{
			case 0:
				if (!iLocal_2692[0])
				{
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_179, 1) < 250f)
					{
						iLocal_2692[0] = 1;
					}
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_179, 1) > 300f)
				{
					iLocal_2692[0] = 0;
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if ((iLocal_2692[1] && iLocal_2692[2]) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_179, 1) < 100f)
					{
						if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
						{
							AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
						}
						CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_8", 8);
						func_324(1, 0, cLocal_291, 1);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[0], "Ped_1", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[1], "Ped_2", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[2], "Ped_3", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[3], "Ped_4", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[4], "Ped_6", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[5], "Ped_7", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[6], "Ped_8", 0);
						GlobalFunc_9024(&uLocal_1687, iLocal_3055[7], "Ped_11", 0);
					}
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_179, 1) > 120f)
				{
					if (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
				if (iLocal_2692[0])
				{
					if (!iLocal_2692[1] || !iLocal_2692[2])
					{
						switch (iLocal_3222)
						{
							case 0:
								GlobalFunc_718(&uLocal_707, joaat("a_f_y_bevhills_01"));
								iLocal_3222++;
								break;
							
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_bevhills_01")))
								{
									GlobalFunc_718(&uLocal_707, joaat("a_m_m_bevhills_01"));
									iLocal_3222++;
								}
								break;
							
							case 2:
								if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")))
								{
									GlobalFunc_718(&uLocal_707, joaat("s_f_y_airhostess_01"));
									iLocal_3222++;
								}
								break;
							
							case 3:
								if (STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_airhostess_01")))
								{
									iLocal_3222++;
								}
								break;
						}
						if (iLocal_3222 >= 4)
						{
							if (!iLocal_2692[1])
							{
								iLocal_3055[0] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1031.32f, -2735.31f, 19.22f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[0], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[0], "Ped_1");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 1, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 3, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 4, 23, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 5, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 6, 10, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[0], 10, 0, 0, 0);
								iLocal_3055[1] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1031.93f, -2739.68f, 19.66f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[1], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[1], "Ped_2");
								iLocal_3055[2] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1033.03f, -2735.05f, 19.17f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[2], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[2], "Ped_3");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[2], 0, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[2], 2, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[2], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[2], 4, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[2], 6, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[2], 8, 1, 0, 0);
								iLocal_3055[3] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1042.16f, -2729.93f, 19.17f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[3], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[3], "Ped_4");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[3], 0, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[3], 2, 4, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[3], 3, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[3], 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[3], 6, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[3], 8, 0, 2, 0);
								iLocal_3055[4] = PED::CREATE_PED(26, joaat("s_f_y_airhostess_01"), -1040.61f, -2730.07f, 19.17f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[4], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[4], "Ped_6");
								iLocal_3055[5] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -1030.32f, -2738.53f, 19.17f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[5], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[5], "Ped_7");
								iLocal_3055[6] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -1035.18f, -2740.79f, 19.17f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[6], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[6], "Ped_8");
								iLocal_3055[7] = PED::CREATE_PED(26, joaat("s_f_y_airhostess_01"), -1046.8f, -2735.29f, 19.59f, 0f, 1, 1);
								PED::SET_PED_KEEP_TASK(iLocal_3055[7], 1);
								PED::SET_PED_NAME_DEBUG(iLocal_3055[7], "Ped_11");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[7], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[7], 2, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[7], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3055[7], 4, 0, 1, 0);
								iLocal_2692[1] = 1;
							}
							else if (!iLocal_2692[2])
							{
								iLocal_2692[2] = 1;
								if ((!PED::IS_PED_INJURED(iLocal_3055[0]) && !GlobalFunc_709(iLocal_3055[0], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.32f, -2735.31f, 19.22f, "WORLD_HUMAN_SMOKING", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[0], -1031.32f, -2735.31f, 19.22f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[1]) && !GlobalFunc_709(iLocal_3055[1], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.93f, -2739.68f, 19.66f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[1], -1031.93f, -2739.68f, 19.66f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[2]) && !GlobalFunc_709(iLocal_3055[2], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1033.03f, -2735.05f, 19.17f, "WORLD_HUMAN_HANG_OUT_STREET", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[2], -1033.03f, -2735.05f, 19.17f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[3]) && !GlobalFunc_709(iLocal_3055[3], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1042.16f, -2729.93f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[3], -1042.16f, -2729.93f, 19.17f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[4]) && !GlobalFunc_709(iLocal_3055[4], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1040.61f, -2730.07f, 19.17f, "WORLD_HUMAN_LEANING", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[4], -1040.61f, -2730.07f, 19.17f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[5]) && !GlobalFunc_709(iLocal_3055[5], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1030.32f, -2738.53f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[5], -1030.32f, -2738.53f, 19.17f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[6]) && !GlobalFunc_709(iLocal_3055[6], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1035.18f, -2740.79f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[6], -1035.18f, -2740.79f, 19.17f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_3055[7]) && !GlobalFunc_709(iLocal_3055[7], 1647992574, 1)) && TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1046.8f, -2735.29f, 19.59f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_3055[7], -1046.8f, -2735.29f, 19.59f, 0.25f, -1);
									iLocal_2692[2] = 0;
								}
							}
						}
					}
				}
				else
				{
					GlobalFunc_5174(&uLocal_707, joaat("a_f_y_bevhills_01"));
					GlobalFunc_5174(&uLocal_707, joaat("a_m_m_bevhills_01"));
					GlobalFunc_5174(&uLocal_707, joaat("s_f_y_airhostess_01"));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[0]))
					{
						PED::DELETE_PED(&(iLocal_3055[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[1]))
					{
						PED::DELETE_PED(&(iLocal_3055[1]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[2]))
					{
						PED::DELETE_PED(&(iLocal_3055[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[3]))
					{
						PED::DELETE_PED(&(iLocal_3055[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[4]))
					{
						PED::DELETE_PED(&(iLocal_3055[4]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[5]))
					{
						PED::DELETE_PED(&(iLocal_3055[5]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[6]))
					{
						PED::DELETE_PED(&(iLocal_3055[6]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3055[7]))
					{
						PED::DELETE_PED(&(iLocal_3055[7]));
					}
					iLocal_2692[1] = 0;
					iLocal_2692[2] = 0;
					iLocal_2692[3] = 0;
				}
				if (func_274(&Local_682, Local_179, 5.0625f, 4.8125f, 2.8125f, 1, iLocal_3045, iLocal_3066, sLocal_296, "", "", "CMN_GENGETBCKYT", 1, 1, 1, -1))
				{
					GlobalFunc_5652(&Local_682, 1, 0);
					GlobalFunc_5105();
					iLocal_2800++;
				}
				else
				{
					switch (iLocal_2764)
					{
						case 0:
							if (GlobalFunc_5170())
							{
								iLocal_2764++;
							}
							break;
						
						case 1:
							if (GlobalFunc_5170())
							{
								if ((PED::IS_PED_IN_VEHICLE(func_181(), iLocal_3066, 0) && PED::IS_PED_IN_VEHICLE(iLocal_3045, iLocal_3066, 0)) && SYSTEM::TIMERB() >= 2000)
								{
									func_260("F3_DRV3", "", 1);
									if (iLocal_2749 != 0)
									{
										PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2749, 0);
									}
									iLocal_2764++;
								}
							}
							break;
						
						case 2:
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_179, 1) < 100f)
							{
								if (!GlobalFunc_5170())
								{
									GlobalFunc_5105();
								}
								else
								{
									func_260("F3_AIRPORT", 0, 0);
									iLocal_2764++;
								}
							}
							else if (GlobalFunc_111())
							{
								if ((!PED::IS_PED_IN_VEHICLE(func_181(), iLocal_3066, 0) || !PED::IS_PED_IN_VEHICLE(iLocal_3045, iLocal_3066, 0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									GlobalFunc_619(1);
								}
								else
								{
									GlobalFunc_619(0);
								}
							}
							break;
						}
				}
				break;
			
			case 1:
				if (GlobalFunc_530(iLocal_3066, 4f, 2, 0.25f, 0, 1))
				{
					iLocal_681 = 12;
				}
				break;
		}
		if (iLocal_681 != 11)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_3139))
			{
				HUD::REMOVE_BLIP(&uLocal_3139);
			}
			func_49();
			iLocal_2592 = 0;
		}
	}
}



void func_260(char* sParam0, char* sParam1, int iParam2)//Position - 0x29C28
{
	struct<4> Var0;
	
	GlobalFunc_4956();
	StringCopy(&Var0, sParam0, 16);
	if (iParam2 && iLocal_2770 > 0)
	{
		StringConCat(&Var0, "_TL", 16);
	}
	iLocal_3152 = 1;
	Local_3153 = { Var0 };
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (GlobalFunc_10618(&uLocal_2880, cLocal_3143, &Local_3153, 8, 0, 0, 0))
		{
			iLocal_3152 = 0;
			StringCopy(&Local_3153, "", 16);
		}
	}
	else
	{
		StringCopy(&cLocal_3157, sParam1, 16);
		if (GlobalFunc_10626(&uLocal_2880, cLocal_3143, &Local_3153, &cLocal_3157, 8, 0, 0))
		{
			iLocal_3152 = 0;
			StringCopy(&Local_3153, "", 16);
			StringCopy(&cLocal_3157, "", 16);
		}
	}
}














bool func_274(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x2A372
{
	return func_275(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_275(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x2A3A6
{
	return func_276(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_276(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, char* sParam32, char* sParam33, char* sParam34, bool bParam35, float fParam36)//Position - 0x2A3F0
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
	if (GlobalFunc_7721(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, sParam32, sParam33, sParam34, iParam14, bParam26))
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
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
										GlobalFunc_5122(uParam0->f_17[0], "GET_IN_CAR", 3);
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
										GlobalFunc_5122(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
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
















































void func_324(bool bParam0, bool bParam1, char[4] cParam2, bool bParam3)//Position - 0x2D150
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	
	if (iLocal_2770 == 0)
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 7, 0, 0, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 7, 1, iLocal_2770, joaat("cs_mrk"));
	}
	GlobalFunc_711(&uLocal_1687, cParam2, 3, 1, 0, joaat("cs_mrk"));
	GlobalFunc_711(&uLocal_1687, cParam2, 8, 0, 0, joaat("cs_mrk"));
	if (iLocal_86[0])
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 0, 0, 2, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 0, 0, 1, joaat("cs_mrk"));
	}
	if (iLocal_86[2])
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 6, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 6, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_86[3])
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 11, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 11, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_86[4])
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 1, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 1, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_86[1])
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 10, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 10, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_86[5])
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 9, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		GlobalFunc_711(&uLocal_1687, cParam2, 9, 0, 0, joaat("cs_mrk"));
	}
	if (!bParam3)
	{
		GlobalFunc_711(&uLocal_1687, cLocal_285, 3, 0, 1, 0);
		GlobalFunc_711(&uLocal_1687, cLocal_285, 4, 0, 1, 0);
		if (bParam0)
		{
			Var2 = { func_325(bParam1) };
			iVar0 = 0;
			while (iVar0 < 12)
			{
				GlobalFunc_711(&uLocal_1687, cLocal_272, iVar0, Var2.f_13[iVar0], Var2[iVar0], 0);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 9)
			{
				GlobalFunc_712(&uLocal_1687, cLocal_272, iVar1, Var2.f_39[iVar1], Var2.f_49[iVar1], 0);
				iVar1++;
			}
		}
	}
}

struct<65> func_325(bool bParam0)//Position - 0x2D34D
{
	struct<65> Var0;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	Var0.f_13[0] = 0;
	Var0[0] = 0;
	Var0.f_13[2] = 0;
	Var0[2] = 0;
	Var0.f_13[1] = 0;
	Var0[1] = 0;
	Var0.f_13[3] = 0;
	Var0[3] = 2;
	Var0.f_13[4] = 0;
	Var0[4] = 3;
	Var0.f_13[6] = 0;
	Var0[6] = 0;
	Var0.f_13[8] = 0;
	Var0[8] = 0;
	Var0.f_13[9] = 0;
	Var0[9] = 0;
	Var0.f_13[5] = 0;
	Var0[5] = 0;
	Var0.f_13[10] = 0;
	Var0[10] = 0;
	Var0.f_13[11] = 0;
	Var0[11] = 0;
	Var0.f_39[0] = -1;
	Var0.f_49[0] = 0;
	if (bParam0)
	{
		Var0.f_39[1] = 0;
		Var0.f_49[1] = 0;
	}
	else
	{
		Var0.f_39[1] = -1;
		Var0.f_49[1] = 0;
	}
	Var0.f_39[2] = -1;
	Var0.f_49[2] = 0;
	Var0.f_39[8] = -1;
	Var0.f_49[8] = 0;
	Var0.f_39[4] = -1;
	Var0.f_49[4] = 0;
	Var0.f_39[6] = -1;
	Var0.f_49[6] = 0;
	Var0.f_39[5] = -1;
	Var0.f_49[5] = 0;
	Var0.f_39[7] = -1;
	Var0.f_49[7] = 0;
	Var0.f_39[3] = -1;
	Var0.f_49[3] = 0;
	return Var0;
}


void func_327(int iParam0)//Position - 0x2D503
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_3140);
			}
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
		}
	}
}

void func_328()//Position - 0x2D593
{
	func_329(func_20(), 0, "MICHAEL");
	func_329(func_181(), 2, "TREVOR");
	func_329(iLocal_3046, 3, "STEVE");
	func_329(iLocal_3047, 4, "DAVE");
	func_329(iLocal_3045, 5, "MisterK");
}

void func_329(int iParam0, int iParam1, char* sParam2)//Position - 0x2D5D9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_173(&uLocal_2880, iParam1, iParam0, sParam2, 0, 1);
	}
	else
	{
		GlobalFunc_200(&uLocal_2880, iParam1);
		GlobalFunc_173(&uLocal_2880, iParam1, 0, sParam2, 0, 1);
	}
}



void func_332(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2D6D7
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
		func_333(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_333(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2D84D
{
	func_334(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_334(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2D869
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7732();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7704(PLAYER::PLAYER_PED_ID(), 0);
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























































void func_389()//Position - 0x32C00
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (!iLocal_2592)
	{
		func_332(10, "10. Michael Kills Target", 0, 0, 0, 1);
		func_510();
		HUD::DISPLAY_RADAR(0);
		GlobalFunc_7632(1);
		func_328();
		iLocal_2719 = 0;
		iLocal_2718 = 0;
		iLocal_86[5] = 0;
		GlobalFunc_574(303, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI3_BACK_TO_MICHAEL");
		bLocal_2714 = true;
		iLocal_2592 = 1;
		iLocal_2800 = 0;
		iLocal_2722 = 0;
		iLocal_3222 = 0;
		iLocal_2706 = -1;
	}
	if (iLocal_2592)
	{
		if (bLocal_2714)
		{
			func_507(1);
			func_504();
			func_503();
		}
		if (iLocal_2713 != 0)
		{
			if (GlobalFunc_663(sLocal_293, 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		if (iLocal_2713 == 0 || iLocal_2713 == 1)
		{
			if ((!iLocal_2719 && ENTITY::DOES_ENTITY_EXIST(Local_338[15 /*2*/])) && PED::IS_PED_INJURED(Local_338[15 /*2*/]))
			{
				if (!RECORDING::_IS_RECORDING())
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
				}
				GlobalFunc_4956();
				iLocal_2719 = 1;
			}
		}
		if (iLocal_2713 == 0)
		{
			switch (iLocal_2800)
			{
				case 0:
					if (iLocal_2740)
					{
						iLocal_2740 = 0;
						iLocal_2800 = 2;
					}
					else if (!PED::IS_PED_INJURED(Local_338[15 /*2*/]))
					{
						if (GlobalFunc_5170())
						{
							if (iLocal_2698[4] || (iLocal_2706 != -1 && MISC::GET_GAME_TIMER() > iLocal_2706))
							{
								iLocal_2800++;
							}
							else if (!iLocal_2692[0])
							{
								func_260("F3_SCOPE3", 0, 0);
								iLocal_2692[0] = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 5000)
							{
								func_260("F3_ZOOMD", 0, 0);
							}
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_5170())
					{
						func_260("F3_SPOT3", 0, 0);
						iLocal_2800++;
					}
					break;
				
				case 2:
					if (GlobalFunc_5170())
					{
						func_260("F3_SPOT3l", 0, 0);
						iLocal_2800++;
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(Local_338[15 /*2*/]) && !PED::IS_PED_INJURED(Local_338[15 /*2*/]))
					{
						if (bLocal_2738)
						{
							GlobalFunc_4956();
							func_260("F3_SPOT3b", 0, 0);
							iLocal_2800++;
						}
					}
					break;
				
				case 4:
					if (GlobalFunc_5170())
					{
						func_260("F3_SPOT3c", 0, 0);
						iLocal_2718 = 1;
						iLocal_2800++;
					}
					break;
			}
		}
		else if (func_501())
		{
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
				{
					AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
				}
				CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_7", 8);
				func_324(0, 0, cLocal_291, 0);
			}
			if (func_391(10))
			{
				iLocal_681 = 11;
			}
		}
		if (iLocal_681 != 10)
		{
			GlobalFunc_571(0, -1);
			func_49();
			GlobalFunc_7632(0);
			iLocal_2592 = 0;
		}
	}
}


int func_391(int iParam0)//Position - 0x32F41
{
	bool bVar0;
	char cVar1[64];
	char cVar17[64];
	int iVar33;
	
	if (!iLocal_2726)
	{
		switch (iParam0)
		{
			case 4:
			case 6:
			case 8:
				GlobalFunc_5184(&uLocal_707, Local_98, 10f, 1);
				func_498(0, 0);
				break;
			
			case 10:
				GlobalFunc_5184(&uLocal_707, Local_98, 10f, 1);
				GlobalFunc_733(&uLocal_707, cLocal_269, &iLocal_3141, 0);
				break;
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 1);
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
		Global_17098.f_113 = 1;
		iLocal_2728 = 0;
		iLocal_2724 = 0;
		iLocal_2726 = 1;
		iLocal_2733 = 0;
		iLocal_2730 = 0;
		iLocal_2625 = 0;
		iLocal_3222 = 0;
		iLocal_2742 = -1;
	}
	if (iLocal_2726 && iLocal_2722)
	{
		if (!bLocal_2725)
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				switch (iParam0)
				{
					case 4:
						if ((!GlobalFunc_111() && !CAM::IS_SCREEN_FADING_OUT()) && func_466(0, 0, 0))
						{
							GlobalFunc_4956();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_181(), "Trevor", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3047, cLocal_272, 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_285, 2, joaat("ig_stevehains"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_291, 2, iLocal_233, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, iLocal_233, 0);
							func_464(1, 1);
							func_463();
							func_25(1, 1, 1);
							iLocal_2721 = 1;
							bLocal_2720 = false;
							bLocal_2714 = false;
							bLocal_2725 = true;
							iLocal_2624 = 0;
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_DRIVE_CHUMASH"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_DRIVE_CHUMASH");
							}
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(2048);
							GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
							AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 6:
					case 8:
						if ((STREAMING::IS_NEW_LOAD_SCENE_LOADED() && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_181())) && func_466(0, 0, 0))
						{
							if (CAM::IS_SCREEN_FADED_IN())
							{
								iLocal_2742 = -1;
								if (!GlobalFunc_10374(&iLocal_2836, 0, 1))
								{
									GlobalFunc_2904(&iLocal_2836, 2, 1);
									func_461(&iLocal_2836, 2, 11);
									if (!iLocal_2724)
									{
										GlobalFunc_164(sLocal_293, 7500, 1);
										iLocal_2724 = 1;
									}
								}
								else
								{
									bVar0 = true;
								}
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!GlobalFunc_111())
								{
									bVar0 = true;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							if (iLocal_2742 == -1)
							{
								iLocal_2742 = MISC::GET_GAME_TIMER();
							}
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_2742) > 7000 && !GlobalFunc_111())
								{
									func_460(800);
								}
								StringCopy(&cVar1, "iSwitchFailTimer: ", 64);
								StringIntConCat(&cVar1, (MISC::GET_GAME_TIMER() - iLocal_2742), 64);
								GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar1, 0.05f, 0.5f, 0f, 0, 0, 0, 255);
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (GlobalFunc_8315() != 2)
								{
									ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
									GlobalFunc_9019(&iLocal_2836, 2);
									func_419(&iLocal_2836, 1, 0, 0);
									func_60(0);
									CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
									if (CAM::DOES_CAM_EXIST(Local_659))
									{
										CAM::DESTROY_CAM(Local_659, 0);
									}
									if (CAM::DOES_CAM_EXIST(Local_659.f_1))
									{
										CAM::DESTROY_CAM(Local_659.f_1, 0);
									}
								}
							}
						}
						if (bVar0)
						{
							GlobalFunc_4956();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_181(), "Trevor", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_285, 2, joaat("ig_stevehains"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_291, 2, iLocal_233, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, iLocal_233, 0);
							func_463();
							func_464(1, 0);
							func_25(1, 1, 1);
							iLocal_2721 = 1;
							bLocal_2720 = false;
							bLocal_2714 = false;
							bLocal_2725 = true;
							iLocal_2729 = 0;
							if (iLocal_681 == 6)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_1"))
								{
									AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_1");
								}
							}
							else if (iLocal_681 == 8)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_2"))
								{
									AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_2");
								}
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE");
							}
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(2052);
							AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE");
							iLocal_2624 = 1;
						}
						break;
					
					case 10:
						if (((STREAMING::IS_NEW_LOAD_SCENE_LOADED() && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_181())) && HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3141))
						{
							if (!GlobalFunc_111())
							{
								if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADED_OUT())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
							{
								HUD::REGISTER_NAMED_RENDERTARGET(sLocal_2761, 0);
								if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iLocal_256))
								{
									HUD::LINK_NAMED_RENDERTARGET(iLocal_256);
								}
								uLocal_2760 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sLocal_2761);
							}
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (!GlobalFunc_111())
								{
									if (iLocal_2742 == -1)
									{
										iLocal_2742 = MISC::GET_GAME_TIMER();
									}
									if ((MISC::GET_GAME_TIMER() - iLocal_2742) > 7000)
									{
										func_460(800);
									}
								}
								StringCopy(&cVar17, "iSwitchFailTimer: ", 64);
								StringIntConCat(&cVar17, (MISC::GET_GAME_TIMER() - iLocal_2742), 64);
								GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar17, 0.05f, 0.5f, 0f, 0, 0, 0, 255);
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (GlobalFunc_8315() != 2)
								{
									ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
									GlobalFunc_9019(&iLocal_2836, 2);
									func_419(&iLocal_2836, 1, 0, 0);
									func_60(0);
									CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
									if (CAM::DOES_CAM_EXIST(Local_659))
									{
										CAM::DESTROY_CAM(Local_659, 0);
									}
									if (CAM::DOES_CAM_EXIST(Local_659.f_1))
									{
										CAM::DESTROY_CAM(Local_659.f_1, 0);
									}
								}
							}
						}
						if (bVar0)
						{
							GlobalFunc_4956();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_181(), "Trevor", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_291, 2, joaat("ig_mrk"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_273, 2, GlobalFunc_4931(2, 0), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, iLocal_233, 0);
							func_463();
							func_464(0, 0);
							iLocal_86[7] = 0;
							func_25(1, 1, 1);
							iLocal_2721 = 1;
							bLocal_2720 = false;
							bLocal_2714 = false;
							bLocal_2725 = true;
							iLocal_2729 = 0;
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_3"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_3");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET");
							}
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(0);
							AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							MISC::CLEAR_AREA_OF_VEHICLES(Local_122, 500f, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
		}
		else
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			switch (iParam0)
			{
				case 4:
					if (!iLocal_2728)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_60(0);
							func_418(0);
							func_416(1);
							if (CUTSCENE::GET_CUTSCENE_TIME() >= 13600)
							{
								if ((!iLocal_2624 && CUTSCENE::GET_CUTSCENE_TIME() < 14600) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE");
									iLocal_2624 = 1;
									GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								}
								bLocal_2618 = true;
							}
							CUTSCENE::_0xC61B86C9F61EB404(1);
						}
						func_414(1);
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							bLocal_2734 = true;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 0);
							GlobalFunc_9019(&iLocal_2836, 2);
							func_419(&iLocal_2836, 1, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(func_181(), 0);
							iLocal_2623 = 0;
							func_400();
							func_396();
							func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
							AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_2");
							func_248(800);
							iLocal_2728 = 1;
							iLocal_2733 = 1;
						}
					}
					else
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						GlobalFunc_5181(&uLocal_707);
						iLocal_2721 = 0;
						bLocal_2725 = false;
						iLocal_2726 = 0;
						iLocal_3222 = 0;
						return 1;
					}
					break;
				
				case 6:
				case 8:
					if (!iLocal_2728)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!iLocal_2729)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_2729 = 1;
							}
							func_60(0);
							func_418(0);
							func_416(0);
							CUTSCENE::_0xC61B86C9F61EB404(1);
							bLocal_2618 = true;
							if (!iLocal_2625)
							{
								func_248(800);
								iLocal_2625 = 1;
							}
						}
						func_414(1);
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							bLocal_2734 = true;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
							if (GlobalFunc_8315() != 2)
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 0);
								GlobalFunc_9019(&iLocal_2836, 2);
								func_419(&iLocal_2836, 1, 0, 0);
							}
							ENTITY::FREEZE_ENTITY_POSITION(func_181(), 0);
							iLocal_2623 = 0;
							func_400();
							func_396();
							func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
							if (iLocal_681 == 6)
							{
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_3");
							}
							else if (iLocal_681 == 8)
							{
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_4");
							}
							func_248(800);
							iLocal_2733 = 1;
							iLocal_2728 = 1;
						}
					}
					else
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						GlobalFunc_5181(&uLocal_707);
						iLocal_2728 = 0;
						iLocal_2721 = 0;
						bLocal_2725 = false;
						iLocal_2726 = 0;
						iLocal_3222 = 0;
						return 1;
					}
					break;
				
				case 10:
					if (!iLocal_2728)
					{
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						if (!iLocal_2730)
						{
							STREAMING::SET_FOCUS_ENTITY(func_181());
							GlobalFunc_5181(&uLocal_707);
							GlobalFunc_5184(&uLocal_707, 130.6803f, -2193.349f, 5.0325f, 500f, 0);
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							CAM::DESTROY_ALL_CAMS(0);
							iLocal_2730 = 1;
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								INTERIOR::UNPIN_INTERIOR(uLocal_2754);
								GlobalFunc_5181(&uLocal_707);
							}
						}
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!iLocal_2729)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_2729 = 1;
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() < 38750)
							{
								bLocal_2618 = true;
								if (CUTSCENE::GET_CUTSCENE_TIME() > 15540)
								{
									bLocal_2617 = true;
								}
							}
							else
							{
								bLocal_2618 = false;
								bLocal_2617 = false;
								AUDIO::STOP_SOUND(Local_3164[0 /*3*/]);
								func_52(0);
							}
							if (!iLocal_2625)
							{
								func_248(800);
								iLocal_2625 = 1;
							}
							func_60(0);
							func_418(joaat("ig_mrk"));
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
							{
								iVar33 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_273, GlobalFunc_4931(2, 0));
								if (ENTITY::DOES_ENTITY_EXIST(iVar33))
								{
									iLocal_3066 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar33);
								}
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
						{
							bLocal_2734 = true;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_291, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3045, iLocal_3066, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3045, iLocal_3066, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
							if (GlobalFunc_8315() != 2)
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 0);
								GlobalFunc_9019(&iLocal_2836, 2);
								func_419(&iLocal_2836, 1, 0, 0);
							}
							ENTITY::FREEZE_ENTITY_POSITION(func_181(), 0);
							if (!PED::IS_PED_IN_VEHICLE(func_181(), iLocal_3066, 0))
							{
								PED::SET_PED_INTO_VEHICLE(func_181(), iLocal_3066, -1);
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_3066, Local_182, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_3066, 311.4299f);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_3066, 0, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_3066, 1, 1);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3066);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							HUD::DISPLAY_RADAR(1);
							func_414(0);
							PED::DELETE_PED(&(iLocal_2836[0]));
							iLocal_2733 = 1;
							iLocal_2728 = 1;
							bLocal_2617 = false;
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								INTERIOR::UNPIN_INTERIOR(uLocal_2754);
								GlobalFunc_5181(&uLocal_707);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							GlobalFunc_5184(&uLocal_707, 130.6803f, -2193.349f, 5.0325f, 100f, 1);
						}
						else if ((STREAMING::IS_NEW_LOAD_SCENE_LOADED() && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_181())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3045))
						{
							func_248(800);
						}
					}
					else
					{
						STREAMING::CLEAR_FOCUS();
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						GlobalFunc_5181(&uLocal_707);
						iLocal_2721 = 0;
						bLocal_2725 = false;
						iLocal_2726 = 0;
						iLocal_2728 = 0;
						iLocal_3222 = 0;
						bLocal_2617 = false;
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}


int func_393(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6)//Position - 0x33A85
{
	struct<26> Var0;
	struct<24> Var26;
	int iVar52;
	struct<16> Var53;
	struct<16> Var69;
	char* sVar85;
	
	if ((func_395(iParam0) && !iLocal_2627) && !iLocal_2626)
	{
		Var0.f_23 = 1;
		if (func_394(iParam0, &Var0) && !Var0.f_25)
		{
			if (CAM::IS_SCREEN_FADED_OUT() && !bLocal_2593)
			{
				fParam3 = 1000f;
				Var0.f_24 = 1;
				func_248(250);
			}
			iLocal_3093[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_122, Local_125, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3093[iParam0], 1);
			if (Var0.f_22)
			{
				iLocal_3093[37] = PED::CREATE_SYNCHRONIZED_SCENE(Local_122, Local_125, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3093[37], 1);
			}
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_181(), 0, 1, 1, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_1))
			{
				if (!Var0.f_21)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_181(), iLocal_3093[iParam0], Var0, Var0.f_1, fParam3, fParam4, iParam5, 0, 1148846080, 0);
				}
				else
				{
					Var26.f_23 = 1;
					if (func_394(0, &Var26) && MISC::ARE_STRINGS_EQUAL(cVar0, Var26))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(func_181(), Var26, Var26.f_1, 144.053f, -2203.052f, 4.706f, 0f, 0f, 180f, 1000f, -1000f, -1, 5129, 0f, 2, 0);
					}
				}
			}
			if (cVar0.f_22)
			{
				iVar52 = 37;
			}
			else
			{
				iVar52 = iParam0;
			}
			if (!MISC::IS_STRING_NULL(cVar0.f_2))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3045, cVar0, cVar0.f_2, 3))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3045, iLocal_3093[iVar52], cVar0, cVar0.f_2, fParam3, fParam4, iParam6, 0, 1148846080, 0);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_6))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3078))
				{
					ENTITY::DETACH_ENTITY(iLocal_3078, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3078, cVar0, cVar0.f_6, 3))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3078, iLocal_3093[iVar52], cVar0.f_6, cVar0, fParam3, fParam4, iParam6, 1148846080);
					iLocal_2622 = 1;
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3078))
				{
					ENTITY::DETACH_ENTITY(iLocal_3078, 0, 1);
				}
				if (iLocal_2622)
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3078, fParam4, 0);
					iLocal_2622 = 0;
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_3078, Local_116, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_3078, Local_119, 2, 1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_10))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3081))
				{
					ENTITY::DETACH_ENTITY(iLocal_3081, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3081, cVar0, cVar0.f_9, 3))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3081, iLocal_3093[iVar52], cVar0.f_9, cVar0, fParam3, fParam4, iParam6, 1148846080);
				}
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3082))
				{
					ENTITY::DETACH_ENTITY(iLocal_3082, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3082, cVar0, cVar0.f_10, 3))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3082, iLocal_3093[iVar52], cVar0.f_10, cVar0, fParam3, fParam4, iParam6, 1148846080);
				}
				iLocal_2688 = 1;
			}
			if (iParam0 != 0)
			{
				func_47(&(Local_384[iLocal_2755 /*36*/]), fParam4);
				if (iLocal_2755 == 4)
				{
					func_47(&(Local_384[iLocal_2755 /*36*/]), fParam4);
				}
				if (cVar0.f_23)
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_384[iLocal_2755 /*36*/]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[iLocal_2755 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 28422), Local_384[iLocal_2755 /*36*/].f_9, Local_384[iLocal_2755 /*36*/].f_12, 0, 0, 0, 0, 2, 1);
					}
					if (iLocal_2755 == 3)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_384[4 /*36*/]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[4 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 60309), Local_384[4 /*36*/].f_9, Local_384[4 /*36*/].f_12, 0, 0, 0, 0, 2, 1);
						}
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[iLocal_2755 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[iLocal_2755 /*36*/], 0, 1);
					}
					if (iLocal_2755 == 3)
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_384[4 /*36*/]))
						{
							ENTITY::DETACH_ENTITY(Local_384[4 /*36*/], 0, 1);
						}
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_5))
				{
					StringCopy(&Var53, cVar0.f_5, 64);
					StringCopy(&Var69, cVar0.f_5, 64);
					if (iLocal_2755 == 3)
					{
						StringConCat(&Var53, "_R_Clip", 64);
						StringConCat(&Var69, "_L_Clip", 64);
					}
					if (!cVar0.f_23)
					{
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[iLocal_2755 /*36*/], iLocal_3093[iParam0], &Var53, cVar0, fParam3, fParam4, iParam5, 1148846080);
						Local_384[iLocal_2755 /*36*/].f_16 = "";
						StringCopy(&(Local_384[iLocal_2755 /*36*/].f_17), "", 64);
						Local_384[iLocal_2755 /*36*/].f_15 = 1;
						if (iLocal_2755 == 3)
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[4 /*36*/], iLocal_3093[iParam0], &Var69, cVar0, fParam3, fParam4, iParam5, 1148846080);
							Local_384[4 /*36*/].f_16 = "";
							StringCopy(&(Local_384[4 /*36*/].f_17), "", 64);
							Local_384[4 /*36*/].f_15 = 1;
						}
					}
					else
					{
						ENTITY::PLAY_ENTITY_ANIM(Local_384[iLocal_2755 /*36*/], &Var53, cVar0, fParam3, iParam1, 1, 0, iParam2, 0);
						Local_384[4 /*36*/].f_16 = cVar0;
						Local_384[4 /*36*/].f_17 = { Var53 };
						Local_384[4 /*36*/].f_15 = 1;
						if (iLocal_2755 == 4)
						{
							func_47(&(Local_384[iLocal_2755 /*36*/]), fParam4);
						}
						if (iLocal_2755 == 3)
						{
							ENTITY::PLAY_ENTITY_ANIM(Local_384[4 /*36*/], &Var69, cVar0, fParam3, iParam1, 1, 0, iParam2, 0);
							Local_384[4 /*36*/].f_16 = cVar0;
							Local_384[4 /*36*/].f_17 = { Var69 };
							Local_384[4 /*36*/].f_15 = 1;
						}
					}
				}
			}
			if (iParam0 == 0)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_11))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[5 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[5 /*36*/], 1, 1);
					}
					func_47(&(Local_384[5 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[5 /*36*/], cVar0.f_11, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[5 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[5 /*36*/].f_17), cVar0.f_11, 64);
					Local_384[5 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[5 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_15))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[2 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[2 /*36*/], 1, 1);
					}
					func_47(&(Local_384[2 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[2 /*36*/], cVar0.f_15, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[2 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[2 /*36*/].f_17), cVar0.f_15, 64);
					Local_384[2 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[2 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_12))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[3 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[3 /*36*/], 1, 1);
					}
					func_47(&(Local_384[3 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[3 /*36*/], cVar0.f_12, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[3 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[3 /*36*/].f_17), cVar0.f_12, 64);
					Local_384[3 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[3 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_13))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[4 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[4 /*36*/], 1, 1);
					}
					func_47(&(Local_384[4 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[4 /*36*/], cVar0.f_13, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[4 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[4 /*36*/].f_17), cVar0.f_13, 64);
					Local_384[4 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[4 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_14))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[0 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[0 /*36*/], 1, 1);
					}
					func_47(&(Local_384[0 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[0 /*36*/], cVar0.f_14, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[0 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[0 /*36*/].f_17), cVar0.f_14, 64);
					Local_384[0 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[0 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_19))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[1 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[1 /*36*/], 1, 1);
					}
					func_47(&(Local_384[1 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[1 /*36*/], cVar0.f_19, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[1 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[1 /*36*/].f_17), cVar0.f_19, 64);
					Local_384[1 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[1 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_18))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[6 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[6 /*36*/], 1, 1);
					}
					func_47(&(Local_384[6 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_384[6 /*36*/], cVar0.f_18, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_384[6 /*36*/].f_16 = "missfbi3_weapon_select";
					StringCopy(&(Local_384[6 /*36*/].f_17), cVar0.f_18, 64);
					Local_384[6 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[6 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_17))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3075))
					{
						ENTITY::DETACH_ENTITY(iLocal_3075, 1, 1);
					}
					ENTITY::PLAY_ENTITY_ANIM(iLocal_3075, cVar0.f_17, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3075);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_16))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3077))
					{
						ENTITY::DETACH_ENTITY(iLocal_3077, 1, 1);
					}
					ENTITY::PLAY_ENTITY_ANIM(iLocal_3077, cVar0.f_16, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3077);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_20))
				{
					sVar85 = cVar0.f_20;
				}
				else
				{
					sVar85 = "missfbi3_weapon_select_trolley";
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_11))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[5 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[5 /*36*/], 1, 1);
					}
					func_47(&(Local_384[5 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[5 /*36*/], iLocal_3093[iParam0], cVar0.f_11, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[5 /*36*/].f_16 = "";
					StringCopy(&(Local_384[5 /*36*/].f_17), "", 64);
					Local_384[5 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[5 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_12))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[3 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[3 /*36*/], 1, 1);
					}
					func_47(&(Local_384[3 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[3 /*36*/], iLocal_3093[iParam0], cVar0.f_12, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[3 /*36*/].f_16 = "";
					StringCopy(&(Local_384[3 /*36*/].f_17), "", 64);
					Local_384[3 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[3 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_13))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[4 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[4 /*36*/], 1, 1);
					}
					func_47(&(Local_384[4 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[4 /*36*/], iLocal_3093[iParam0], cVar0.f_13, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[4 /*36*/].f_16 = "";
					StringCopy(&(Local_384[4 /*36*/].f_17), "", 64);
					Local_384[4 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[4 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_15))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[2 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[2 /*36*/], 1, 1);
					}
					func_47(&(Local_384[2 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[2 /*36*/], iLocal_3093[iParam0], cVar0.f_15, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[2 /*36*/].f_16 = "";
					StringCopy(&(Local_384[2 /*36*/].f_17), "", 64);
					Local_384[2 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[2 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_14))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[0 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[0 /*36*/], 1, 1);
					}
					func_47(&(Local_384[0 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[0 /*36*/], iLocal_3093[iParam0], cVar0.f_14, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[0 /*36*/].f_16 = "";
					StringCopy(&(Local_384[0 /*36*/].f_17), "", 64);
					Local_384[0 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[0 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_18))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[6 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[6 /*36*/], 1, 1);
					}
					func_47(&(Local_384[6 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[6 /*36*/], iLocal_3093[iParam0], cVar0.f_18, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[6 /*36*/].f_16 = "";
					StringCopy(&(Local_384[6 /*36*/].f_17), "", 64);
					Local_384[6 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[6 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_19))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_384[1 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_384[1 /*36*/], 1, 1);
					}
					func_47(&(Local_384[1 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[1 /*36*/], iLocal_3093[iParam0], cVar0.f_19, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_384[1 /*36*/].f_16 = "";
					StringCopy(&(Local_384[1 /*36*/].f_17), "", 64);
					Local_384[1 /*36*/].f_15 = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[1 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_17))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3075))
					{
						ENTITY::DETACH_ENTITY(iLocal_3075, 1, 1);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3075, iLocal_3093[iParam0], cVar0.f_17, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3075);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_16))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3077))
					{
						ENTITY::DETACH_ENTITY(iLocal_3077, 1, 1);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3077, iLocal_3093[iParam0], cVar0.f_16, sVar85, fParam3, fParam4, iParam5 | 64, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3077);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_3))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3046, iLocal_3093[iParam0], cVar0, cVar0.f_3, fParam3, fParam4, 0, 0, 1148846080, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3046) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3046, 242628503) != 1)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3046);
				ENTITY::SET_ENTITY_COORDS(iLocal_3046, Local_185, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_3046, 190.2745f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_a", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 786440, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_a", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_b", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_a", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_261, "steve_phone_idle_b", Local_185, 0f, 0f, 190.2745f, 8f, -8f, -1, 262152, 0f, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3083, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_3046, uLocal_3083);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_3074))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3074, iLocal_3046, PED::GET_PED_BONE_INDEX(iLocal_3046, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_4))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_3149))
				{
					uLocal_3149 = CAM::CREATE_CAMERA(964613260, 0);
					CAM::SET_CAM_DEBUG_NAME(uLocal_3149, "Torture Cam");
				}
				else
				{
					CAM::STOP_CAM_SHAKING(uLocal_3149, 1);
				}
				CAM::SET_CAM_ACTIVE(uLocal_3149, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3149, iLocal_3093[iParam0], cVar0.f_4, cVar0);
				if (!CAM::IS_SCRIPT_GLOBAL_SHAKING())
				{
					CAM::ANIMATED_SHAKE_SCRIPT_GLOBAL("SHAKE_CAM_medium", "medium", "", fLocal_2794);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0.f_8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_384[1 /*36*/]))
				{
					ENTITY::DETACH_ENTITY(Local_384[1 /*36*/], 0, 1);
				}
				func_47(&(Local_384[1 /*36*/]), fParam4);
				if (iLocal_2755 == 0)
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[1 /*36*/], iLocal_3093[iParam0], cVar0.f_8, cVar0, fParam3, fParam4, iParam5 | 64, 1148846080);
				}
				else
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_384[1 /*36*/], iLocal_3093[iParam0], cVar0.f_8, "missfbi3_weapon_select_trolley", fParam3, fParam4, iParam5 | 64, 1148846080);
				}
				Local_384[1 /*36*/].f_15 = 1;
				if (cVar0.f_24)
				{
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[1 /*36*/]);
				}
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[iParam0], iParam1);
			if (cVar0.f_22)
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[37], 1);
			}
			if (cVar0.f_24 || fParam3 == 1000f)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_181(), 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3045, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3046, 0, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3078);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[iLocal_2755 /*36*/]);
				if (iLocal_2755 == 3)
				{
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[4 /*36*/]);
				}
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3081);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3082);
				iLocal_2626 = 1;
			}
			iLocal_2620 = iParam0;
			return 1;
		}
	}
	return 0;
}

int func_394(int iParam0, char[4] cParam1)//Position - 0x34B5D
{
	if (func_395(iParam0))
	{
		switch (iParam0)
		{
			case 19:
			case 23:
			case 24:
			case 25:
			case 20:
				*cParam1 = "MISSFBI3_electrocute";
				break;
			
			case 21:
				*cParam1 = "MISSFBI3_electrocute";
				cParam1->f_1 = "Electrocute_Spark_Player";
				cParam1->f_2 = "Electrocute_Spark_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Electrocute_Spark_Cam";
				cParam1->f_5 = "Electrocute_Spark";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Electrocute_Spark_hand_l";
				cParam1->f_10 = "Electrocute_Spark_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 22:
				*cParam1 = "MISSFBI3_electrocute";
				cParam1->f_1 = "Electrocute_Both_Outro_Player";
				cParam1->f_2 = "Electrocute_Both_Outro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Electrocute_Both_Outro_Cam";
				cParam1->f_5 = "Electrocute_Both_Outro";
				cParam1->f_6 = "Electrocute_Both_Outro_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Electrocute_Both_Outro_hand_l";
				cParam1->f_10 = "Electrocute_Both_Outro_hand_r";
				cParam1->f_24 = 1;
				break;
			
			case 15:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Idle_Player";
				cParam1->f_2 = "Pull_Tooth_Idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Idle_Cam";
				cParam1->f_5 = "Pull_Tooth_Idle_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Idle_hand_l";
				cParam1->f_10 = "Pull_Tooth_Idle_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 12:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Intro_Player";
				cParam1->f_2 = "Pull_Tooth_Intro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Intro_Cam";
				cParam1->f_5 = "Pull_Tooth_Intro_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Intro_hand_l";
				cParam1->f_10 = "Pull_Tooth_Intro_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 11:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Loop_Weak_Player";
				cParam1->f_2 = "Pull_Tooth_Loop_Weak_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Loop_Weak_Cam";
				cParam1->f_5 = "Pull_Tooth_Loop_Weak_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Loop_Weak_hand_l";
				cParam1->f_10 = "Pull_Tooth_Loop_Weak_hand_r";
				cParam1->f_24 = 0;
				cParam1->f_25 = 1;
				break;
			
			case 10:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Loop_Player";
				cParam1->f_2 = "Pull_Tooth_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Loop_Cam";
				cParam1->f_5 = "Pull_Tooth_Loop_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Loop_hand_l";
				cParam1->f_10 = "Pull_Tooth_Loop_hand_r";
				cParam1->f_24 = 0;
				cParam1->f_25 = 1;
				break;
			
			case 13:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Outro_Player";
				cParam1->f_2 = "Pull_Tooth_Outro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Outro_Cam";
				cParam1->f_5 = "Pull_Tooth_Outro_Pliers";
				cParam1->f_6 = "Pull_Tooth_Outro_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Outro_hand_l";
				cParam1->f_10 = "Pull_Tooth_Outro_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 14:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Outro_B_Player";
				cParam1->f_2 = "Pull_Tooth_Outro_B_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Outro_B_Cam";
				cParam1->f_5 = "Pull_Tooth_Outro_B_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Outro_B_hand_l";
				cParam1->f_10 = "Pull_Tooth_Outro_B_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 16:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Ready_Intro_Player";
				cParam1->f_2 = "Pull_Tooth_Ready_Intro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Ready_Intro_Cam";
				cParam1->f_5 = "Pull_Tooth_Ready_Intro_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Ready_Intro_hand_l";
				cParam1->f_10 = "Pull_Tooth_Ready_Intro_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 17:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Ready_Loop_Player";
				cParam1->f_2 = "Pull_Tooth_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Ready_Loop_Cam";
				cParam1->f_5 = "Pull_Tooth_Ready_Loop_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Ready_Loop_hand_l";
				cParam1->f_10 = "Pull_Tooth_Ready_Loop_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 18:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Ready_Outro_Player";
				cParam1->f_2 = "Pull_Tooth_Ready_Outro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Ready_Outro_Cam";
				cParam1->f_5 = "Pull_Tooth_Ready_Outro_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Ready_Outro_hand_l";
				cParam1->f_10 = "Pull_Tooth_Ready_Outro_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 35:
				*cParam1 = "MISSFBI3_SYRINGE";
				cParam1->f_1 = "Syringe_Idle_Player";
				cParam1->f_2 = "flatline_loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Syringe_Idle_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "flatline_loop_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "flatline_loop_hand_l";
				cParam1->f_10 = "flatline_loop_hand_r";
				cParam1->f_24 = 1;
				break;
			
			case 34:
				*cParam1 = "MISSFBI3_SYRINGE";
				cParam1->f_1 = "Syringe_Use_Player";
				cParam1->f_2 = "Syringe_Use_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Syringe_Use_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Syringe_Use_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Syringe_Use_hand_l";
				cParam1->f_10 = "Syringe_Use_hand_r";
				cParam1->f_24 = 1;
				break;
			
			case 26:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_kick_Player";
				cParam1->f_2 = "Waterboard_Kick_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Kick_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Kick_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Kick_Rag";
				cParam1->f_9 = "Waterboard_Kick_hand_l";
				cParam1->f_10 = "Waterboard_Kick_hand_r";
				cParam1->f_24 = 1;
				break;
			
			case 27:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Idle_Player";
				cParam1->f_2 = "Waterboard_Idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Idle_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Idle_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Idle_Rag";
				cParam1->f_9 = "Waterboard_Idle_hand_l";
				cParam1->f_10 = "Waterboard_Idle_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 31:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Loop_To_Ready_Player";
				cParam1->f_2 = "Waterboard_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Loop_Rag";
				cParam1->f_9 = "Waterboard_Loop_hand_l";
				cParam1->f_10 = "Waterboard_Loop_hand_r";
				cParam1->f_24 = 0;
				cParam1->f_22 = 1;
				break;
			
			case 32:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Outro_Player";
				cParam1->f_2 = "Waterboard_Outro_Victim";
				cParam1->f_3 = "Waterboard_Outro_Steve";
				cParam1->f_4 = "Waterboard_Outro_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Outro_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Outro_Rag";
				cParam1->f_9 = "Waterboard_Outro_hand_l";
				cParam1->f_10 = "Waterboard_Outro_hand_r";
				cParam1->f_24 = 1;
				break;
			
			case 29:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Loop_Player";
				cParam1->f_2 = "Waterboard_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Loop_Rag";
				cParam1->f_9 = "Waterboard_Loop_hand_l";
				cParam1->f_10 = "Waterboard_Loop_hand_r";
				cParam1->f_24 = 1;
				break;
			
			case 28:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Ready_To_Loop_Player";
				cParam1->f_2 = "Waterboard_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Ready_To_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Ready_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Ready_To_Loop_Rag";
				cParam1->f_9 = "Waterboard_Ready_Loop_hand_l";
				cParam1->f_10 = "Waterboard_Ready_Loop_hand_r";
				cParam1->f_24 = 0;
				cParam1->f_22 = 1;
				break;
			
			case 30:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Loop_To_Ready_Player";
				cParam1->f_2 = "Waterboard_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Loop_To_Ready_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Ready_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Loop_To_Ready_Rag";
				cParam1->f_9 = "Waterboard_Ready_Loop_hand_l";
				cParam1->f_10 = "Waterboard_Ready_Loop_hand_r";
				cParam1->f_24 = 1;
				cParam1->f_22 = 1;
				break;
			
			case 33:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Ready_Loop_Player";
				cParam1->f_2 = "Waterboard_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Ready_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Ready_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Ready_Loop_Rag";
				cParam1->f_9 = "Waterboard_Ready_Loop_hand_l";
				cParam1->f_10 = "Waterboard_Ready_Loop_hand_r";
				cParam1->f_24 = 0;
				break;
			
			case 9:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Idle_Player";
				cParam1->f_2 = "Wrench_Idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Idle_Cam";
				cParam1->f_5 = "Wrench_Idle_Wrench";
				cParam1->f_6 = "Wrench_Idle_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Idle_hand_l";
				cParam1->f_10 = "Wrench_Idle_hand_r";
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				break;
			
			case 6:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Attack_Left_Player";
				cParam1->f_2 = "Wrench_Attack_Left_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Attack_Left_Cam";
				cParam1->f_5 = "Wrench_Attack_Left_Wrench";
				cParam1->f_6 = "Wrench_Attack_Left_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Attack_Left_hand_l";
				cParam1->f_10 = "Wrench_Attack_Left_hand_r";
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				break;
			
			case 7:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Attack_Mid_Player";
				cParam1->f_2 = "Wrench_Attack_Mid_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Attack_Mid_Cam";
				cParam1->f_5 = "Wrench_Attack_Mid_Wrench";
				cParam1->f_6 = "Wrench_Attack_Mid_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Attack_Mid_hand_l";
				cParam1->f_10 = "Wrench_Attack_Mid_hand_r";
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				break;
			
			case 8:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Attack_Right_Player";
				cParam1->f_2 = "Wrench_Attack_Right_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Attack_Right_Cam";
				cParam1->f_5 = "Wrench_Attack_Right_Wrench";
				cParam1->f_6 = "Wrench_Attack_Right_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Attack_Right_hand_l";
				cParam1->f_10 = "Wrench_Attack_Right_hand_r";
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				break;
			
			case 0:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Loop";
				cParam1->f_2 = "waterboard_idle_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "";
				cParam1->f_5 = "";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_10 = "waterboard_idle_hand_r";
				cParam1->f_21 = 1;
				cParam1->f_22 = 0;
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				cParam1->f_11 = "weapon_select_bench_wrench";
				cParam1->f_12 = "weapon_select_bench_clip1";
				cParam1->f_13 = "weapon_select_bench_clip2";
				cParam1->f_14 = "weapon_select_bench_can";
				cParam1->f_15 = "weapon_select_bench_pliers";
				cParam1->f_16 = "weapon_select_bench_battery";
				cParam1->f_17 = "weapon_select_bench_bench";
				cParam1->f_18 = "weapon_select_bench_syringe";
				cParam1->f_19 = "weapon_select_bench_rag";
				break;
			
			case 3:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Electrocute_Player";
				cParam1->f_2 = "waterboard_idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Electrocute_Cam";
				cParam1->f_5 = "Weapon_Select_Electrocute";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_10 = "waterboard_idle_hand_r";
				cParam1->f_21 = 0;
				cParam1->f_22 = 1;
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				break;
			
			case 2:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Pliers_Player";
				cParam1->f_2 = "weapon_select_pliers_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Pliers_Cam";
				cParam1->f_5 = "Weapon_Select_Pliers_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Weapon_Select_Pliers_hand_l";
				cParam1->f_10 = "Weapon_Select_Pliers_hand_r";
				cParam1->f_21 = 0;
				cParam1->f_22 = 0;
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				cParam1->f_11 = "weapon_bench_toothpull_wrench";
				cParam1->f_12 = "weapon_bench_toothpull_clip1";
				cParam1->f_13 = "weapon_bench_toothpull_clip2";
				cParam1->f_14 = "weapon_bench_toothpull_can";
				cParam1->f_15 = "";
				cParam1->f_16 = "weapon_bench_toothpull_battery";
				cParam1->f_17 = "weapon_bench_toothpull_trolley";
				cParam1->f_18 = "weapon_bench_toothpull_syringe";
				cParam1->f_19 = "weapon_bench_toothpull_rag";
				break;
			
			case 5:
				*cParam1 = "MISSFBI3_SYRINGE";
				cParam1->f_1 = "Weapon_Select_Syringe_Player";
				cParam1->f_2 = "flatline_intro_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Syringe_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "flatline_intro_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "flatline_intro_hand_l";
				cParam1->f_10 = "flatline_intro_hand_r";
				cParam1->f_21 = 0;
				cParam1->f_22 = 0;
				cParam1->f_25 = 0;
				cParam1->f_23 = 1;
				cParam1->f_11 = "weapon_bench_syringe_wrench";
				cParam1->f_12 = "weapon_bench_syringe_clip1";
				cParam1->f_13 = "weapon_bench_syringe_clip2";
				cParam1->f_14 = "weapon_bench_syringe_can";
				cParam1->f_15 = "weapon_bench_syringe_pliers";
				cParam1->f_16 = "weapon_bench_syringe_battery";
				cParam1->f_17 = "weapon_bench_syringe_trolley";
				cParam1->f_18 = "";
				cParam1->f_19 = "weapon_bench_syringe_rag";
				break;
			
			case 4:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Waterboard_Player";
				cParam1->f_2 = "waterboard_idle_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Waterboard_Cam";
				cParam1->f_5 = "Weapon_Select_Waterboard_jerryCan";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Weapon_Select_Waterboard_rag";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_10 = "waterboard_idle_hand_r";
				cParam1->f_21 = 0;
				cParam1->f_22 = 1;
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				cParam1->f_11 = "weapon_bench_waterboard_wrench";
				cParam1->f_12 = "weapon_bench_waterboard_clip1";
				cParam1->f_13 = "weapon_bench_waterboard_clip2";
				cParam1->f_14 = "";
				cParam1->f_15 = "weapon_bench_waterboard_pliers";
				cParam1->f_16 = "weapon_bench_waterboard_battery";
				cParam1->f_17 = "weapon_bench_waterboard_trolley";
				cParam1->f_18 = "weapon_bench_waterboard_syringe";
				cParam1->f_19 = "";
				break;
			
			case 1:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Wrench_Player";
				cParam1->f_2 = "waterboard_idle_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Wrench_Cam";
				cParam1->f_5 = "Weapon_Select_Wrench_Wrench";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_10 = "waterboard_idle_hand_r";
				cParam1->f_21 = 0;
				cParam1->f_22 = 1;
				cParam1->f_24 = 1;
				cParam1->f_23 = 0;
				cParam1->f_11 = "";
				cParam1->f_12 = "weapon_bench_wrench_clip1";
				cParam1->f_13 = "weapon_bench_wrench_clip2";
				cParam1->f_14 = "weapon_bench_wrench_can";
				cParam1->f_15 = "weapon_bench_wrench_pliers";
				cParam1->f_16 = "weapon_bench_wrench_battery";
				cParam1->f_17 = "weapon_bench_wrench_trolley";
				cParam1->f_18 = "weapon_bench_wrench_syringe";
				cParam1->f_19 = "weapon_bench_wrench_rag";
				break;
		}
		return 1;
	}
	return 0;
}

int func_395(int iParam0)//Position - 0x35AE0
{
	switch (iParam0)
	{
		case 19:
		case 23:
		case 22:
		case 24:
		case 20:
		case 21:
		case 12:
		case 15:
		case 10:
		case 13:
		case 14:
		case 11:
		case 16:
		case 17:
		case 18:
		case 35:
		case 34:
		case 26:
		case 27:
		case 31:
		case 32:
		case 29:
		case 30:
		case 28:
		case 33:
		case 9:
		case 6:
		case 7:
		case 8:
		case 0:
		case 3:
		case 2:
		case 5:
		case 4:
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_396()//Position - 0x35BC9
{
	func_397(&Local_637, 142.3567f, -2202.379f, 6.6759f, -41.1685f, -9.3446f, -125.0095f, 29.0273f, 142.2558f, -2202.592f, 6.7048f, -42.4644f, -9.3446f, -118.1968f, 29.0273f, 10000, 1, sLocal_267, 0.1f, "WEAP_SEL");
}

void func_397(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, struct<3> Param8, struct<3> Param11, float fParam14, int iParam15, int iParam16, char* sParam17, float fParam18, char* sParam19)//Position - 0x35C2F
{
	char cVar0[24];
	char cVar6[24];
	
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	*uParam0 = CAM::CREATE_CAMERA(26379945, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
	{
		StringCopy(&cVar0, sParam19, 24);
		StringConCat(&cVar0, "_Init", 24);
		CAM::SET_CAM_DEBUG_NAME(*uParam0, &cVar0);
	}
	CAM::SET_CAM_AFFECTS_AIMING(*uParam0, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
	{
		StringCopy(&cVar6, sParam19, 24);
		StringConCat(&cVar6, "_Dest", 24);
		CAM::SET_CAM_DEBUG_NAME(uParam0->f_1, &cVar6);
	}
	CAM::SET_CAM_AFFECTS_AIMING(uParam0->f_1, 0);
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = { Param4 };
	uParam0->f_9 = fParam7;
	uParam0->f_10 = { Param8 };
	uParam0->f_13 = { Param11 };
	uParam0->f_16 = fParam14;
	uParam0->f_17 = iParam15;
	uParam0->f_18 = iParam16;
	uParam0->f_19 = sParam17;
	uParam0->f_20 = fParam18;
	uParam0->f_21 = 0;
	func_399(uParam0, &(uParam0->f_1), uParam0->f_3, uParam0->f_6, uParam0->f_9, uParam0->f_10, uParam0->f_13, uParam0->f_16, (uParam0->f_17 / 2), 1, 0);
	uParam0->f_21 = 1;
	if (uParam0->f_18)
	{
		func_398(*uParam0, uParam0->f_1, sParam17, fParam18);
	}
	SYSTEM::SETTIMERA(0);
}

void func_398(var uParam0, var uParam1, char* sParam2, float fParam3)//Position - 0x35D71
{
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		CAM::SHAKE_CAM(uParam0, sParam2, fParam3);
	}
	if (CAM::DOES_CAM_EXIST(uParam1))
	{
		CAM::SHAKE_CAM(uParam1, sParam2, fParam3);
	}
}

void func_399(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, float fParam8, struct<3> Param9, struct<3> Param12, float fParam15, int iParam16, int iParam17, char* sParam18)//Position - 0x35D9F
{
	char cVar0[24];
	char cVar6[24];
	
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DETACH_CAM(*uParam0);
		CAM::STOP_CAM_POINTING(*uParam0);
	}
	else
	{
		*uParam0 = CAM::CREATE_CAMERA(26379945, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam18))
		{
			StringCopy(&cVar0, sParam18, 24);
			StringConCat(&cVar0, "_Init", 24);
			CAM::SET_CAM_DEBUG_NAME(*uParam0, &cVar0);
		}
	}
	CAM::SET_CAM_COORD(*uParam0, Param2);
	CAM::SET_CAM_ROT(*uParam0, Param5, 2);
	CAM::SET_CAM_FOV(*uParam0, fParam8);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DETACH_CAM(*uParam1);
		CAM::STOP_CAM_POINTING(*uParam1);
	}
	else
	{
		*uParam1 = CAM::CREATE_CAMERA(26379945, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam18))
		{
			StringCopy(&cVar6, sParam18, 24);
			StringConCat(&cVar6, "_Dest", 24);
			CAM::SET_CAM_DEBUG_NAME(*uParam1, &cVar6);
		}
	}
	CAM::SET_CAM_COORD(*uParam1, Param9);
	CAM::SET_CAM_ROT(*uParam1, Param12, 2);
	CAM::SET_CAM_FOV(*uParam1, fParam15);
	CAM::SET_CAM_ACTIVE(*uParam1, 0);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam1, *uParam0, iParam16, iParam17, iParam17);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

int func_400()//Position - 0x35EA7
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	var uVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	struct<2> Var19;
	struct<2> Var23;
	char cVar27[192];
	bool bVar53;
	
	if (iLocal_2721)
	{
		return 0;
	}
	bVar10 = false;
	if (!GlobalFunc_2567(23))
	{
		GlobalFunc_601(23, 1);
	}
	if (iLocal_2801 < 2)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		if (iLocal_2801 == 0)
		{
			CAM::DESTROY_CAM(uLocal_3145, 0);
			CAM::DESTROY_CAM(uLocal_3146, 0);
		}
		if (Local_637.f_2)
		{
			func_413(&Local_637);
		}
	}
	switch (iLocal_2801)
	{
		case 0:
			if (!func_205(iLocal_3093[0]))
			{
				func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
			}
			func_396();
			func_413(&Local_637);
			iVar11 = -1;
			iVar12 = 0;
			while (iVar12 <= 3)
			{
				switch (iVar12)
				{
					case 0:
						iVar13 = 2;
						break;
					
					case 1:
						iVar13 = 3;
						break;
					
					case 2:
						iVar13 = 5;
						break;
					
					case 3:
						iVar13 = 0;
						break;
				}
				if (iVar11 == -1 || (iVar11 >= 0 && Local_384[iVar13 /*36*/].f_34 < Local_384[iVar11 /*36*/].f_34))
				{
					iVar11 = iVar13;
				}
				iVar12++;
			}
			if (iVar11 != -1)
			{
				iLocal_2755 = iVar11;
			}
			if (iLocal_2755 == 5)
			{
				fVar8 = 0.06f;
			}
			else if (iLocal_2755 == 2)
			{
				fVar8 = 0.06f;
			}
			else if (iLocal_2755 == 3)
			{
				fVar8 = 0.06f;
			}
			else if (iLocal_2755 == 4)
			{
				fVar8 = 0.06f;
			}
			else if (iLocal_2755 == 0)
			{
				fVar8 = 0.04f;
			}
			else
			{
				fVar8 = 0.02f;
			}
			if (bLocal_2652)
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_384[iLocal_2755 /*36*/], Local_384[iLocal_2755 /*36*/].f_2 + Vector(fVar8, 0f, 0f), 0, 0, 1);
				Local_384[iLocal_2755 /*36*/].f_8 = 1;
			}
			iLocal_2682 = MISC::GET_GAME_TIMER();
			iLocal_2683 = 5000;
			func_248(250);
			func_412("FBI3 MINIGAME SELECT");
			iLocal_2764 = 0;
			iLocal_2801++;
			break;
		
		case 1:
			func_411();
			if (!bLocal_2691)
			{
				if (MISC::IS_PC_VERSION() && PAD::_IS_USING_KEYBOARD(2))
				{
					if (!GlobalFunc_74("hlp_MENU2"))
					{
						GlobalFunc_Display_Help_Text("hlp_MENU2");
					}
				}
				else if (!GlobalFunc_74(sLocal_325))
				{
					GlobalFunc_Display_Help_Text(sLocal_325);
				}
			}
			PAD::_0x7F4724035FDCA1DD(2);
			func_408(&iVar2, &iVar3, &uVar0, &uVar1, 0);
			if (((((iVar2 > 50 || iVar3 > 50) && !bLocal_2691) || func_407(235, 1, 1)) || func_407(233, 1, 1)) && !iLocal_2650)
			{
				iLocal_2650 = 1;
				bVar10 = true;
				if (bLocal_2652)
				{
					iLocal_2755++;
					if (iLocal_2755 >= 6)
					{
						iLocal_2755 = 0;
					}
					while (!Local_384[iLocal_2755 /*36*/].f_33)
					{
						iLocal_2755++;
						if (iLocal_2755 >= 6)
						{
							iLocal_2755 = 0;
						}
					}
				}
			}
			else if (iVar2 <= 50 && iVar3 <= 50)
			{
				iLocal_2650 = 0;
			}
			if (((((iVar2 < -50 || iVar3 < -50) && !bLocal_2691) || func_407(234, 1, 1)) || func_407(232, 1, 1)) && !iLocal_2651)
			{
				iLocal_2651 = 1;
				bVar10 = true;
				if (bLocal_2652)
				{
					iLocal_2755 = (iLocal_2755 - 1);
					if (iLocal_2755 < 0)
					{
						iLocal_2755 = (6 - 1);
					}
					while (!Local_384[iLocal_2755 /*36*/].f_33)
					{
						iLocal_2755 = (iLocal_2755 - 1);
						if (iLocal_2755 < 0)
						{
							iLocal_2755 = (6 - 1);
						}
					}
				}
			}
			else if (iVar2 >= -50 && iVar3 >= -50)
			{
				iLocal_2651 = 0;
			}
			if (bVar10)
			{
				switch (iLocal_2755)
				{
					case 5:
						func_237(18, sLocal_329, Local_384[iLocal_2755 /*36*/], 0, 0);
						break;
					
					case 2:
						func_237(16, sLocal_327, Local_384[iLocal_2755 /*36*/], 0, 0);
						break;
					
					case 3:
						func_237(15, sLocal_326, Local_384[iLocal_2755 /*36*/], 0, 0);
						break;
					
					case 0:
						func_237(17, sLocal_328, Local_384[iLocal_2755 /*36*/], 0, 0);
						break;
				}
				bLocal_2652 = true;
			}
			iVar14 = 0;
			while (iVar14 <= (7 - 1))
			{
				Local_384[iVar14 /*36*/].f_8 = 0;
				iVar14++;
			}
			iVar14 = 0;
			while (iVar14 <= (7 - 1))
			{
				if (bLocal_2652)
				{
					if (iVar14 == iLocal_2755)
					{
						Local_384[iVar14 /*36*/].f_8 = 1;
						if (iVar14 == 3)
						{
							Local_384[4 /*36*/].f_8 = 1;
						}
						else if (iVar14 == 0)
						{
							Local_384[1 /*36*/].f_8 = 1;
						}
					}
				}
				iVar14++;
			}
			iVar14 = 0;
			while (iVar14 <= (7 - 1))
			{
				if (Local_384[iVar14 /*36*/].f_8)
				{
					if (iVar14 == 5)
					{
						fVar8 = 0.06f;
					}
					else if (iVar14 == 2)
					{
						fVar8 = 0.06f;
					}
					else if (iVar14 == 3)
					{
						fVar8 = 0.08f;
					}
					else if (iVar14 == 4)
					{
						fVar8 = 0.06f;
					}
					else if (iVar14 == 0 || iVar14 == 1)
					{
						fVar8 = 0.04f;
					}
					else
					{
						fVar8 = 0.02f;
					}
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_384[iVar14 /*36*/], 1) };
					fVar7 = (((Local_384[iVar14 /*36*/].f_2.f_2 + fVar8) - Var4.f_2) / 2f);
					fVar7 = (SYSTEM::SQRT((fVar7 * fVar7)) / 3f);
					OBJECT::SLIDE_OBJECT(Local_384[iVar14 /*36*/], Local_384[iVar14 /*36*/].f_2 + Vector(fVar8, 0f, 0f), 0f, 0f, fVar7, 0);
					if (iVar14 != 4)
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(Local_384[iVar14 /*36*/], 1) };
						if (iVar14 == 5)
						{
							Var4 = { 144.0282f, -2203.534f, 4.7336f };
						}
						if (iVar14 != 1)
						{
							if (iVar14 != 0)
							{
								GRAPHICS::DRAW_LIGHT_WITH_RANGE(Var4.x, Var4.f_1, (Var4.f_2 + 0.05f), 255, 255, 255, 0.2f, 0.5f);
							}
							GRAPHICS::DRAW_LIGHT_WITH_RANGE(Var4.x, Var4.f_1, 4.69f, 255, 255, 255, 0.2f, 0.5f);
						}
					}
				}
				else
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_384[iVar14 /*36*/], 1) };
					fVar7 = ((Local_384[iVar14 /*36*/].f_2.f_2 - Var4.f_2) / 2f);
					fVar7 = (SYSTEM::SQRT((fVar7 * fVar7)) / 3f);
					OBJECT::SLIDE_OBJECT(Local_384[iVar14 /*36*/], Local_384[iVar14 /*36*/].f_2, 0f, 0f, fVar7, 0);
				}
				iVar14++;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) && !bLocal_2594)
			{
				if (iLocal_2755 != 5)
				{
					if (iLocal_2755 == 2)
					{
						func_406(1, 2, iLocal_2770 + 1);
					}
					else
					{
						func_406(1, iLocal_2755, 0);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (iLocal_2755 == 3)
					{
						func_412("FBI3 MINIGAME ELECTRODES");
					}
					else
					{
						func_412("FBI3 MINIGAME DEFAULT");
					}
				}
				Local_384[iLocal_2755 /*36*/].f_34++;
				GlobalFunc_5105();
				fLocal_2678 = 0f;
				iLocal_2681 = 0;
				func_25(0, 1, 1);
				iLocal_2764 = 0;
				iLocal_2801++;
			}
			else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2682) >= iLocal_2683)
			{
				switch (iLocal_681)
				{
					case 3:
						StringCopy(&Var15, "F3_HMM1", 16);
						StringCopy(&Var19, "F3_TORGO1", 16);
						StringCopy(&Var23, "F3_KMENU", 16);
						break;
					
					case 5:
						StringCopy(&Var15, "F3_HMM2", 16);
						StringCopy(&Var19, "F3_TORGO2", 16);
						StringCopy(&Var23, "F3_WTF2", 16);
						break;
					
					case 7:
						StringCopy(&Var15, "F3_HMM3", 16);
						StringCopy(&Var19, "F3_TORGO3", 16);
						StringCopy(&Var23, "F3_WTF3", 16);
						break;
					
					case 9:
						StringCopy(&Var15, "F3_HMM4", 16);
						StringCopy(&Var19, "F3_TORGO4", 16);
						StringCopy(&Var23, "F3_WTF4", 16);
						break;
				}
				switch (iLocal_2764)
				{
					case 0:
						if (GlobalFunc_5170())
						{
							func_260(&Var19, 0, 0);
							iLocal_2764++;
						}
						break;
					
					case 1:
					case 2:
					case 4:
					case 5:
					case 6:
						if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 1000)
						{
							func_260(&Var23, "", 1);
							iLocal_2764++;
						}
						break;
					
					case 3:
						if (GlobalFunc_5170())
						{
							func_260(&Var15, 0, 0);
							iLocal_2764++;
						}
						break;
				}
				if (iLocal_2764 > 6)
				{
					iLocal_2764 = 0;
				}
			}
			break;
		
		case 2:
			if (!iLocal_2623)
			{
				cVar27.f_23 = 1;
				switch (iLocal_2755)
				{
					case 5:
						if (func_393(1, 0, fLocal_2678, 1148846080, -998637568, 0, 0))
						{
							if (func_394(9, &cVar27))
							{
								GlobalFunc_719(&uLocal_707, cVar27);
								GlobalFunc_724(&uLocal_707, cLocal_303);
								func_403("FBI3_WRENCH_HIT");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_WRENCH");
								if (func_394(1, &cVar27))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar27, cVar27.f_1, sLocal_307, &fLocal_2678, &uVar9);
								}
								if (GlobalFunc_5170())
								{
									switch (iLocal_681)
									{
										case 3:
											func_260("F3_WREN1", "", 1);
											break;
										
										case 5:
											func_260("F3_WREN2", "", 1);
											break;
										
										case 7:
											func_260("F3_WREN3", "", 1);
											break;
										
										case 9:
											func_260("F3_WREN4", "", 1);
											break;
										}
								}
								iLocal_2623 = 1;
							}
						}
						break;
					
					case 3:
						if (func_393(3, 0, fLocal_2678, 1148846080, -998637568, 0, 0))
						{
							if (func_394(19, &cVar27))
							{
								GlobalFunc_719(&uLocal_707, cVar27);
								GlobalFunc_724(&uLocal_707, cLocal_300);
								func_403("FBI3_BATTERY_GRIPPED");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_ELECTRIC");
								if (func_394(3, &cVar27))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar27, cVar27.f_1, sLocal_307, &fLocal_2678, &uVar9);
								}
								if (GlobalFunc_5170())
								{
									func_260("F3_EWAIT", 0, 0);
								}
								iLocal_2623 = 1;
							}
						}
						break;
					
					case 2:
						if (func_393(2, 0, fLocal_2678, 1148846080, -998637568, 0, 0))
						{
							if (func_394(15, &cVar27))
							{
								GlobalFunc_719(&uLocal_707, cVar27);
								GlobalFunc_718(&uLocal_707, iLocal_253);
								GlobalFunc_724(&uLocal_707, cLocal_301);
								GlobalFunc_724(&uLocal_707, "FBI_03_Torture_Teeth_Pain");
								func_403("FBI3_TOOTH_PULLED");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_PLIERS");
								if (func_394(2, &cVar27))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar27, cVar27.f_1, sLocal_307, &fLocal_2678, &uVar9);
								}
								if (GlobalFunc_5170())
								{
									func_260("F3_PWAIT", 0, 0);
								}
								iLocal_2623 = 1;
							}
						}
						break;
					
					case 0:
						if (func_393(4, 0, fLocal_2678, 1148846080, -998637568, 0, 0))
						{
							if (func_394(27, &cVar27))
							{
								GlobalFunc_719(&uLocal_707, cVar27);
								GlobalFunc_724(&uLocal_707, cLocal_302);
								func_403("FBI3_WATER_BOARDED");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_WATER");
								if (func_394(4, &cVar27))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar27, cVar27.f_1, sLocal_307, &fLocal_2678, &uVar9);
								}
								if (GlobalFunc_5170())
								{
									func_260("F3_KWAIT", 0, 0);
								}
								iLocal_2623 = 1;
							}
						}
						break;
				}
				if (iLocal_2623)
				{
					if (func_394(35, &cVar27))
					{
						GlobalFunc_719(&uLocal_707, cVar27);
					}
				}
			}
			else
			{
				bVar53 = false;
				if (iLocal_2755 == 6)
				{
					if (!func_205(iLocal_3093[5]))
					{
						bVar53 = true;
					}
				}
				else if ((((!func_205(iLocal_3093[1]) && !func_205(iLocal_3093[2])) && !func_205(iLocal_3093[3])) && !func_205(iLocal_3093[4])) && !func_205(iLocal_3093[5]))
				{
					bVar53 = true;
				}
				if (bVar53)
				{
					iLocal_2801 = 0;
					return 1;
				}
				else
				{
					if (GlobalFunc_4926(1000) && !bLocal_2594)
					{
						func_460(250);
					}
					if (func_205(iLocal_3093[1]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_4956();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[1], 1f);
						}
						else if (GlobalFunc_5170())
						{
							switch (iLocal_2764)
							{
								case 0:
									func_260("F3_NOWREN", "", 1);
									iLocal_2764++;
									break;
								
								case 1:
									if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
									{
										func_260("F3_NOWREN", "", 1);
									}
									break;
								}
							}
					}
					if (func_205(iLocal_3093[2]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_4956();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[2], 1f);
						}
						else if (GlobalFunc_5170())
						{
							switch (iLocal_2764)
							{
								case 0:
									func_260("F3_NOPLI", "", 1);
									iLocal_2764++;
									break;
								
								case 1:
									if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
									{
										func_260("F3_NOPLI", "", 1);
									}
									break;
								}
							}
					}
					if (func_205(iLocal_3093[4]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_4956();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[4], 1f);
						}
						else if (GlobalFunc_5170())
						{
							switch (iLocal_2764)
							{
								case 0:
									func_260("F3_NOCAN", "", 1);
									iLocal_2764++;
									break;
								
								case 1:
									func_260("F3_CAN", "", 1);
									iLocal_2764++;
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
									{
										func_260("F3_CAN", "", 1);
									}
									break;
								}
							}
					}
					if (func_205(iLocal_3093[5]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_4956();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[5], 1f);
						}
					}
					if (func_205(iLocal_3093[3]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_4956();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[3], 1f);
						}
						else if (GlobalFunc_5170())
						{
							switch (iLocal_2764)
							{
								case 0:
									func_260("F3_NOJUMP", "", 1);
									iLocal_2764++;
									break;
								
								case 1:
									func_260("F3_JUMP", "", 1);
									iLocal_2764++;
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
									{
										func_260("F3_JUMP", "", 1);
									}
									break;
								}
							}
						}
					}
			}
			break;
	}
	return 0;
}



void func_403(char* sParam0)//Position - 0x36CBF
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
	{
		if (!MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_2596))
		{
			AUDIO::CANCEL_MUSIC_EVENT(sLocal_2596);
			sLocal_2596 = sParam0;
			AUDIO::PREPARE_MUSIC_EVENT(sLocal_2596);
		}
	}
	else
	{
		sLocal_2596 = sParam0;
		AUDIO::PREPARE_MUSIC_EVENT(sLocal_2596);
	}
}



void func_406(bool bParam0, int iParam1, int iParam2)//Position - 0x36E94
{
	int iVar0;
	char[] cVar1[8];
	
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!bParam0)
	{
		func_324(0, 0, cLocal_291, 0);
	}
	else
	{
		if (iParam1 == 2 || iLocal_2770 > 0)
		{
			cVar1 = sLocal_287;
			iVar0 = 1;
		}
		else
		{
			cVar1 = cLocal_286;
		}
		func_324(0, 0, cVar1, 0);
		switch (iParam1)
		{
			case 2:
				if (!iLocal_86[0])
				{
					GlobalFunc_711(&uLocal_1687, cVar1, 0, 0, 1, joaat("cs_mrk"));
				}
				GlobalFunc_711(&uLocal_1687, cVar1, 7, 1, iParam2, joaat("cs_mrk"));
				break;
			
			case 3:
				if (!iLocal_86[1])
				{
					GlobalFunc_711(&uLocal_1687, cVar1, 10, 1, 0, joaat("cs_mrk"));
				}
				break;
			
			case 0:
				if (!iLocal_86[5])
				{
					GlobalFunc_711(&uLocal_1687, cVar1, 9, 1, 0, joaat("cs_mrk"));
				}
				if (iLocal_86[0])
				{
					GlobalFunc_711(&uLocal_1687, cVar1, 0, 0, 0, joaat("cs_mrk"));
				}
				break;
			
			case 5:
				switch (iParam2)
				{
					case 0:
						if (!iLocal_86[2])
						{
							GlobalFunc_711(&uLocal_1687, cVar1, 6, 1, 0, joaat("cs_mrk"));
						}
						break;
					
					case 1:
						if (!iLocal_86[4])
						{
							GlobalFunc_711(&uLocal_1687, cVar1, 1, 1, 0, joaat("cs_mrk"));
						}
						break;
					
					case 2:
						if (!iLocal_86[3])
						{
							GlobalFunc_711(&uLocal_1687, cVar1, 11, 1, 0, joaat("cs_mrk"));
						}
						break;
				}
				break;
			}
	}
	if (fLocal_2775 <= 0f)
	{
		CUTSCENE::REQUEST_CUTSCENE("FBI_3_MCS_6p1_b", 8);
	}
	else
	{
		if (iVar0 || iLocal_2770 > 0)
		{
			AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
		}
		switch (iLocal_681)
		{
			case 3:
				CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_1", 8);
				break;
			
			case 5:
				CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_3", 8);
				break;
			
			case 7:
				CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_5", 8);
				break;
			
			case 9:
				CUTSCENE::REQUEST_CUTSCENE("FBI_3_mcs_6p2", 8);
				break;
			}
	}
}

int func_407(int iParam0, bool bParam1, bool bParam2)//Position - 0x37082
{
	if (bLocal_2594)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, iParam0))
		{
			if (!bParam2 || !bLocal_2691)
			{
				return 1;
			}
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, iParam0))
	{
		if (!bParam2 || !bLocal_2691)
		{
			return 1;
		}
	}
	return 0;
}

void func_408(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x370D9
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*iParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*iParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*iParam2) == 0f && IntToFloat(*iParam3) == 0f)
		{
			*iParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*iParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}



void func_411()//Position - 0x371D7
{
	switch (iLocal_2689)
	{
		case 0:
			if (((((((func_205(iLocal_3093[0]) || func_205(iLocal_3093[15])) || func_205(iLocal_3093[17])) || func_205(iLocal_3093[27])) || func_205(iLocal_3093[33])) || func_205(iLocal_3093[35])) || func_205(iLocal_3093[9])) || iLocal_2621)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 225))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_3147))
					{
						CAM::DESTROY_CAM(uLocal_3147, 0);
					}
					func_25(0, 0, 1);
					iLocal_2689 = 1;
				}
			}
			break;
		
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_3147))
			{
				uLocal_3147 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 143.0422f, -2200.806f, 4.8667f, -24.0583f, 0f, 174.2966f, 21.9763f, 0, 2);
				CAM::SET_CAM_DEBUG_NAME(uLocal_3147, "camECG_1");
				CAM::SHAKE_CAM(uLocal_3147, sLocal_268, 0.2f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_3147, 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3147, CAM::GET_RENDERING_CAM(), 500, 2, 1);
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 225))
			{
				iLocal_2689 = 2;
			}
			else if (!CAM::IS_CAM_INTERPOLATING(uLocal_3147))
			{
				if (CAM::DOES_CAM_EXIST(Local_637.x))
				{
					CAM::DESTROY_CAM(Local_637.x, 0);
				}
				if (CAM::DOES_CAM_EXIST(Local_637.f_1))
				{
					CAM::DESTROY_CAM(Local_637.f_1, 0);
				}
				iLocal_2689 = 2;
			}
			break;
		
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(2, 225))
			{
				if (func_205(iLocal_3093[0]))
				{
					func_396();
					CAM::SET_CAM_ACTIVE(uLocal_3147, 1);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_637.x, uLocal_3147, 500, 3, 1);
				}
				else if (CAM::DOES_CAM_EXIST(uLocal_3149))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3149, uLocal_3147, 500, 3, 1);
				}
				iLocal_2689 = 3;
			}
			break;
		
		case 3:
			if (!PAD::IS_CONTROL_PRESSED(2, 225))
			{
				iLocal_2689 = 0;
			}
			else if (!CAM::IS_CAM_INTERPOLATING(uLocal_3147))
			{
				if (func_205(iLocal_3093[0]))
				{
					if (!CAM::IS_CAM_INTERPOLATING(Local_637.x))
					{
						func_396();
						CAM::DESTROY_CAM(uLocal_3147, 0);
					}
				}
				else
				{
					if (CAM::DOES_CAM_EXIST(uLocal_3149))
					{
						CAM::SET_CAM_ACTIVE(uLocal_3149, 1);
					}
					CAM::DESTROY_CAM(uLocal_3147, 0);
				}
				iLocal_2689 = 0;
			}
			break;
	}
	if (iLocal_2689 == 0)
	{
		bLocal_2691 = false;
	}
	else
	{
		bLocal_2691 = true;
	}
}

void func_412(char* sParam0)//Position - 0x37430
{
	func_4();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME(sParam0);
	iLocal_2795 = 1;
}

void func_413(var uParam0)//Position - 0x37447
{
	if (SYSTEM::TIMERA() >= (uParam0->f_17 / 2))
	{
		if (!CAM::DOES_CAM_EXIST(*uParam0))
		{
			*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_3, uParam0->f_6, uParam0->f_9, 1, 2);
		}
		if (!CAM::IS_CAM_SHAKING(*uParam0))
		{
			CAM::SHAKE_CAM(*uParam0, uParam0->f_19, uParam0->f_20);
		}
		if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
		{
			uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_10, uParam0->f_13, uParam0->f_16, 1, 2);
		}
		if (!CAM::IS_CAM_SHAKING(uParam0->f_1))
		{
			CAM::SHAKE_CAM(uParam0->f_1, uParam0->f_19, uParam0->f_20);
		}
		if (uParam0->f_21 == 0)
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_1, *uParam0, (uParam0->f_17 / 2), 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam0, uParam0->f_1, (uParam0->f_17 / 2), 1, 1);
		}
		uParam0->f_21 = !uParam0->f_21;
		SYSTEM::SETTIMERA(0);
	}
}

void func_414(bool bParam0)//Position - 0x37536
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_384[iVar0 /*36*/]) && (!bParam0 || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(Local_384[iVar0 /*36*/].f_35, 0))) && !GlobalFunc_105(Local_384[iVar0 /*36*/].f_2)) && !GlobalFunc_105(Local_384[iVar0 /*36*/].f_5))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_384[iVar0 /*36*/]))
			{
				ENTITY::DETACH_ENTITY(Local_384[iVar0 /*36*/], 0, 1);
			}
			ENTITY::SET_ENTITY_COLLISION(Local_384[iVar0 /*36*/], 0, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_384[iVar0 /*36*/], Local_384[iVar0 /*36*/].f_2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_384[iVar0 /*36*/], Local_384[iVar0 /*36*/].f_5, 2, 1);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[iVar0 /*36*/]);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3078) && (!bParam0 || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_277, 0)))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3078, Local_116, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3078, Local_119, 2, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3078);
		iLocal_2622 = 0;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_3075) && (!bParam0 || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_274, 0))) && !GlobalFunc_105(Local_128)) && !GlobalFunc_105(Local_131))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3075, Local_128, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3075, Local_131, 2, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3075);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3079) && (!bParam0 || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_278, 0)))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3079, Local_146, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3079, Local_149, 2, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3079);
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_3077) && (!bParam0 || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_276, 0))) && !GlobalFunc_105(Local_134)) && !GlobalFunc_105(Local_137))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3077, Local_134, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3077, Local_137, 2, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3077);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3076) && (!bParam0 || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_275, 0)))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3076, Local_140, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3076, Local_143, 2, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3076);
	}
}


int func_416(bool bParam0)//Position - 0x377BA
{
	int iVar0;
	
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	iVar0 = 1;
	if (bParam0)
	{
		if (!func_417(&iLocal_3074, "DaveNortons_Phone", joaat("prop_npc_phone")))
		{
			iVar0 = 0;
		}
	}
	else if (!func_417(&iLocal_3074, "SteveHains_Phone", joaat("prop_npc_phone")))
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3075, cLocal_274, iLocal_244))
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3076, cLocal_275, iLocal_245))
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3078, cLocal_277, iLocal_250))
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3079, cLocal_278, iLocal_256))
	{
		iVar0 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3079))
	{
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(sLocal_2761, 0);
			HUD::LINK_NAMED_RENDERTARGET(iLocal_256);
			uLocal_2760 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sLocal_2761);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3077, cLocal_276, iLocal_248))
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3081, cLocal_288, iLocal_257))
	{
		iVar0 = 0;
	}
	if (!func_417(&iLocal_3082, cLocal_289, iLocal_257))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[5 /*36*/]), cLocal_279, iLocal_246))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[0 /*36*/]), cLocal_283, iLocal_254))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[1 /*36*/]), cLocal_290, iLocal_255))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[3 /*36*/]), cLocal_281, iLocal_251))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[4 /*36*/]), cLocal_282, iLocal_252))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[2 /*36*/]), cLocal_280, iLocal_247))
	{
		iVar0 = 0;
	}
	if (!func_417(&(Local_384[6 /*36*/]), cLocal_284, iLocal_249))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_417(int iParam0, char[4] cParam1, int iParam2)//Position - 0x37965
{
	int iVar0;
	
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(cParam1, iParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*iParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_418(int iParam0)//Position - 0x379AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2836[2]))
	{
		iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iLocal_2836[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3045))
	{
		if (iParam0 == 0)
		{
			iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(cLocal_291, iLocal_233);
		}
		else
		{
			iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(cLocal_291, iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iLocal_3045 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			func_200();
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3046))
	{
		iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(cLocal_285, joaat("ig_stevehains"));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iLocal_3046 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_419(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x37A66
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
			func_454(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(iParam0->f_7);
		func_454((*iParam0)[iParam0->f_7], 0);
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
		func_426(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}







void func_426(int iParam0)//Position - 0x38154
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_427(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_427(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_427(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_427(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_427(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_427(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_427(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_427(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_427(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_427(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_427(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_427(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_427(50, 0);
			break;
	}
}

void func_427(int iParam0, int iParam1)//Position - 0x382E4
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_429(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_429(int iParam0)//Position - 0x3842B
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_434(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9135(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_8989())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}





void func_434(int iParam0, var uParam1)//Position - 0x38C57
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = GlobalFunc_7732();
	iVar1 = GlobalFunc_208(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (GlobalFunc_5097(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (GlobalFunc_5097(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (GlobalFunc_5097(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[4])
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[4])
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (GlobalFunc_5097(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[70 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!GlobalFunc_5097(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[26 /*34*/].f_6) == 0)
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[43 /*34*/].f_6) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[93 /*34*/].f_6) > 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[10 /*34*/].f_6) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[47 /*34*/].f_6) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[70 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[48 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[39 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
	}
}




















void func_454(int iParam0, bool bParam1)//Position - 0x3D1F6
{
	GlobalFunc_8565(iParam0);
	GlobalFunc_7704(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}






void func_460(int iParam0)//Position - 0x3D4D3
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
}

void func_461(int iParam0, int iParam1, int iParam2)//Position - 0x3D4F2
{
	if ((iParam1 != iParam1 && iParam2 != iParam2) && iParam0->f_23)
	{
	}
}


void func_463()//Position - 0x3D52D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_384[iVar0 /*36*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_384[iVar0 /*36*/]))
			{
				ENTITY::DETACH_ENTITY(Local_384[iVar0 /*36*/], 0, 1);
			}
			ENTITY::SET_ENTITY_COLLISION(Local_384[iVar0 /*36*/], 0, 0);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3074))
		{
			ENTITY::DETACH_ENTITY(iLocal_3074, 1, 1);
		}
	}
}

void func_464(bool bParam0, bool bParam1)//Position - 0x3D59C
{
	char cVar0[24];
	
	if (bParam1)
	{
		StringCopy(&cVar0, "DaveNortons_Phone", 24);
	}
	else
	{
		StringCopy(&cVar0, "SteveHains_Phone", 24);
	}
	if (!bParam0)
	{
		func_465(&iLocal_3074, &cVar0, joaat("prop_npc_phone"), 1);
		func_465(&iLocal_3075, cLocal_274, iLocal_244, 1);
		func_465(&iLocal_3076, cLocal_275, iLocal_245, 1);
		func_465(&iLocal_3077, cLocal_276, iLocal_248, 1);
		func_465(&iLocal_3078, cLocal_277, iLocal_250, 1);
		func_465(&iLocal_3079, cLocal_278, iLocal_256, 1);
		func_465(&iLocal_3081, cLocal_288, iLocal_257, 1);
		func_465(&iLocal_3082, cLocal_289, iLocal_257, 1);
		func_465(&(Local_384[5 /*36*/]), cLocal_279, iLocal_246, 1);
		func_465(&(Local_384[2 /*36*/]), cLocal_280, iLocal_247, 1);
		func_465(&(Local_384[3 /*36*/]), cLocal_281, iLocal_251, 1);
		func_465(&(Local_384[4 /*36*/]), cLocal_282, iLocal_252, 1);
		func_465(&(Local_384[0 /*36*/]), cLocal_283, iLocal_254, 1);
		func_465(&(Local_384[1 /*36*/]), cLocal_290, iLocal_255, 1);
		func_465(&(Local_384[6 /*36*/]), cLocal_284, iLocal_249, 1);
	}
	else
	{
		func_465(&iLocal_3074, &cVar0, joaat("prop_npc_phone"), 2);
		func_465(&iLocal_3075, cLocal_274, iLocal_244, 2);
		func_465(&iLocal_3076, cLocal_275, iLocal_245, 2);
		func_465(&iLocal_3077, cLocal_276, iLocal_248, 2);
		func_465(&iLocal_3078, cLocal_277, iLocal_250, 2);
		func_465(&iLocal_3079, cLocal_278, iLocal_256, 2);
		func_465(&iLocal_3081, cLocal_288, iLocal_257, 2);
		func_465(&iLocal_3082, cLocal_289, iLocal_257, 2);
		func_465(&(Local_384[5 /*36*/]), cLocal_279, iLocal_246, 2);
		func_465(&(Local_384[2 /*36*/]), cLocal_280, iLocal_247, 2);
		func_465(&(Local_384[3 /*36*/]), cLocal_281, iLocal_251, 2);
		func_465(&(Local_384[4 /*36*/]), cLocal_282, iLocal_252, 2);
		func_465(&(Local_384[0 /*36*/]), cLocal_283, iLocal_254, 2);
		func_465(&(Local_384[1 /*36*/]), cLocal_290, iLocal_255, 2);
		func_465(&(Local_384[6 /*36*/]), cLocal_284, iLocal_249, 2);
	}
}

void func_465(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3D781
{
	if (iParam3 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(*iParam0, sParam1, 0, iParam2, 0);
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sParam1, 2, iParam2, 0);
		}
	}
	else if (iParam3 == 1 || iParam3 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(*iParam0, sParam1, iParam3, iParam2, 0);
		}
	}
}

int func_466(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3D7E0
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<24> Var8;
	int iVar34;
	
	iVar0 = 1;
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
		{
			if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(2, 0)))
			{
				if (!bVar1)
				{
					if (GlobalFunc_9748(&iLocal_3066, 2, Local_182, 311.4299f, 1, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3066, 1, 1);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3066, 0, 0);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_3066, 1, 0);
						bVar1 = true;
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_371[10]))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_259))
			{
				if (!bVar1)
				{
					iLocal_371[10] = OBJECT::CREATE_OBJECT(iLocal_259, Local_101, 1, 1, 0);
					GlobalFunc_5174(&uLocal_707, iLocal_259);
					bVar1 = true;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3046))
		{
			if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(23)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_261))
			{
				if (!bVar1)
				{
					if (GlobalFunc_7047(&iLocal_3046, 23, Local_185, 190.2745f, 0))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3046, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_3046, 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_3046, 4, 0, 1, 0);
						GlobalFunc_5174(&uLocal_707, GlobalFunc_4946(23));
						func_327(iLocal_3046);
						bVar1 = true;
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3046))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
				{
					if (!bVar1)
					{
						iLocal_3074 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_3046, 60309, 0f, 0f, 0f), 1, 1, 0);
						GlobalFunc_5174(&uLocal_707, joaat("prop_npc_phone"));
						bVar1 = true;
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3074, iLocal_3046))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3074))
					{
						ENTITY::DETACH_ENTITY(iLocal_3074, 0, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3046))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3074, iLocal_3046, PED::GET_PED_BONE_INDEX(iLocal_3046, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3045))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_233))
			{
				if (!bVar1)
				{
					iLocal_3045 = PED::CREATE_PED(26, iLocal_233, 143.5551f, -2201.591f, 3.688f, 261.297f, 1, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3045, 1);
					GlobalFunc_5174(&uLocal_707, iLocal_233);
					func_468();
					func_200();
					func_327(iLocal_3045);
					bVar1 = true;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3045))
			{
				iVar0 = 0;
			}
		}
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi3_weapon_select"))
	{
		Var8.f_23 = 1;
		if (func_394(0, &Var8))
		{
			if (Local_384[5 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_11, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_11, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[5 /*36*/]), Var2, Var5, Local_3161, Local_3161, 1, "TORTURE_Wrench", iLocal_246);
			}
			if (Local_384[2 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_15, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_15, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[2 /*36*/]), Var2, Var5, Local_3161, Local_3161, 1, "TORTURE_Pliers", iLocal_247);
			}
			if (Local_384[3 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_12, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_12, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[3 /*36*/]), Var2, Var5, Local_3161, Local_3161, 1, "TORTURE_Battery_clip_right", iLocal_251);
			}
			if (Local_384[4 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_13, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_13, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[4 /*36*/]), Var2, Var5, Local_3161, Local_3161, 0, "TORTURE_Battery_clip_left", iLocal_252);
			}
			if (Local_384[0 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_14, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_14, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[0 /*36*/]), Var2, Var5, Local_3161, Local_3161, 1, "TORTURE_Jerrycan", iLocal_254);
			}
			if (Local_384[1 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_19, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_19, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[1 /*36*/]), Var2, Var5, Local_3161, Local_3161, 0, "TORTURE_rag", iLocal_255);
			}
			if (Local_384[6 /*36*/].f_1 == 0)
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_18, Local_122, Local_125, 0, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_18, Local_122, Local_125, 0, 2) };
				func_467(&(Local_384[6 /*36*/]), Var2, Var5, Local_3161, Local_3161, 0, "TORTURE_Syringe", iLocal_249);
			}
			if (GlobalFunc_105(Local_128) || GlobalFunc_105(Local_131))
			{
				Local_128 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_17, Local_122, Local_125, 0, 2) };
				Local_131 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_17, Local_122, Local_125, 0, 2) };
			}
			if (GlobalFunc_105(Local_134) || GlobalFunc_105(Local_137))
			{
				Local_134 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi3_weapon_select", Var8.f_16, Local_122, Local_125, 0, 2) };
				Local_137 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi3_weapon_select", Var8.f_16, Local_122, Local_125, 0, 2) };
			}
			if (bParam1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3075))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_244))
					{
						if (!bVar1)
						{
							iLocal_3075 = OBJECT::CREATE_OBJECT(iLocal_244, Local_128, 1, 1, 0);
							GlobalFunc_5174(&uLocal_707, iLocal_244);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3075, Local_128, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3075, Local_131, 2, 1);
							ENTITY::SET_ENTITY_COLLISION(iLocal_3075, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3075, 1);
							bVar1 = true;
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3076))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_245))
					{
						if (!bVar1)
						{
							iLocal_3076 = OBJECT::CREATE_OBJECT(iLocal_245, Local_140, 1, 1, 0);
							GlobalFunc_5174(&uLocal_707, iLocal_245);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3076, Local_140, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3076, Local_143, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3076, 1);
							ENTITY::SET_ENTITY_COLLISION(iLocal_3076, 0, 0);
							bVar1 = true;
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3077))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_248))
					{
						if (!bVar1)
						{
							iLocal_3077 = OBJECT::CREATE_OBJECT(iLocal_248, Local_134, 1, 1, 0);
							GlobalFunc_5174(&uLocal_707, iLocal_248);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3077, Local_134, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3077, Local_137, 2, 1);
							ENTITY::SET_ENTITY_COLLISION(iLocal_3077, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3077, 1);
							bVar1 = true;
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3079))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_256))
					{
						if (!bVar1)
						{
							iLocal_3079 = OBJECT::CREATE_OBJECT(iLocal_256, Local_146, 1, 1, 0);
							GlobalFunc_5174(&uLocal_707, iLocal_256);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3079, Local_146, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3079, Local_149, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3079, 1);
							bVar1 = true;
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
				{
					HUD::REGISTER_NAMED_RENDERTARGET(sLocal_2761, 0);
					HUD::LINK_NAMED_RENDERTARGET(iLocal_256);
					uLocal_2760 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sLocal_2761);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3078))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_250))
					{
						if (!bVar1)
						{
							iLocal_3078 = OBJECT::CREATE_OBJECT(iLocal_250, Local_116, 1, 1, 0);
							GlobalFunc_5174(&uLocal_707, iLocal_250);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3078, Local_116, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3078, Local_119, 2, 1);
							ENTITY::SET_ENTITY_COLLISION(iLocal_3078, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3078, 1);
							bVar1 = true;
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3078))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3081))
					{
						if (STREAMING::HAS_MODEL_LOADED(iLocal_257))
						{
							if (!bVar1)
							{
								iLocal_3081 = OBJECT::CREATE_OBJECT(iLocal_257, Local_122 + Vector(0f, 0f, 0.1f), 1, 1, 0);
								bVar1 = true;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3082))
					{
						if (STREAMING::HAS_MODEL_LOADED(iLocal_257))
						{
							if (!bVar1)
							{
								iLocal_3082 = OBJECT::CREATE_OBJECT(iLocal_257, Local_122 - Vector(0f, 0f, 0.1f), 1, 1, 0);
								bVar1 = true;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				iVar34 = 0;
				while (iVar34 < Local_384)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_384[iVar34 /*36*/]))
					{
						if (STREAMING::HAS_MODEL_LOADED(Local_384[iVar34 /*36*/].f_1))
						{
							if (!bVar1)
							{
								Local_384[iVar34 /*36*/] = OBJECT::CREATE_OBJECT(Local_384[iVar34 /*36*/].f_1, Local_384[iVar34 /*36*/].f_2, 1, 1, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_384[iVar34 /*36*/], Local_384[iVar34 /*36*/].f_2, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_384[iVar34 /*36*/], Local_384[iVar34 /*36*/].f_5, 2, 1);
								ENTITY::SET_ENTITY_COLLISION(Local_384[iVar34 /*36*/], 0, 0);
								bVar1 = true;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					iVar34++;
				}
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (((!STREAMING::HAS_ANIM_DICT_LOADED("missfbi3_weapon_select") || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi3_weapon_select_trolley")) || !STREAMING::HAS_ANIM_DICT_LOADED(cLocal_261)) || !STREAMING::HAS_ANIM_DICT_LOADED("SHAKE_CAM_medium"))
	{
		iVar0 = 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3141) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3142))
	{
		iVar0 = 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(cLocal_299, 0))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_467(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, char* sParam14, int iParam15)//Position - 0x3E1E7
{
	uParam0->f_2 = { Param1 };
	uParam0->f_5 = { Param4 };
	uParam0->f_9 = { Param7 };
	uParam0->f_12 = { Param10 };
	uParam0->f_15 = 0;
	uParam0->f_33 = iParam13;
	uParam0->f_35 = sParam14;
	uParam0->f_1 = iParam15;
}

void func_468()//Position - 0x3E22E
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_3045, 10, 0, 0, 0);
	iLocal_86[7] = 1;
}






























void func_498(bool bParam0, bool bParam1)//Position - 0x4272C
{
	if (bParam0)
	{
		GlobalFunc_718(&uLocal_707, GlobalFunc_4946(23));
		GlobalFunc_718(&uLocal_707, iLocal_233);
		GlobalFunc_718(&uLocal_707, joaat("prop_npc_phone"));
		GlobalFunc_719(&uLocal_707, cLocal_261);
	}
	if (bParam1)
	{
		GlobalFunc_718(&uLocal_707, iLocal_245);
		GlobalFunc_718(&uLocal_707, iLocal_244);
		GlobalFunc_718(&uLocal_707, iLocal_246);
		GlobalFunc_718(&uLocal_707, iLocal_247);
		GlobalFunc_718(&uLocal_707, iLocal_248);
		GlobalFunc_718(&uLocal_707, iLocal_251);
		GlobalFunc_718(&uLocal_707, iLocal_252);
		GlobalFunc_718(&uLocal_707, iLocal_249);
		GlobalFunc_718(&uLocal_707, iLocal_254);
		GlobalFunc_718(&uLocal_707, iLocal_255);
		GlobalFunc_718(&uLocal_707, iLocal_250);
		GlobalFunc_718(&uLocal_707, iLocal_256);
		GlobalFunc_718(&uLocal_707, iLocal_257);
	}
	GlobalFunc_719(&uLocal_707, "missfbi3_weapon_select");
	GlobalFunc_719(&uLocal_707, "missfbi3_weapon_select_trolley");
	GlobalFunc_719(&uLocal_707, "SHAKE_CAM_medium");
	GlobalFunc_719(&uLocal_707, cLocal_261);
	GlobalFunc_733(&uLocal_707, cLocal_269, &iLocal_3141, 0);
	GlobalFunc_733(&uLocal_707, cLocal_270, &iLocal_3142, 0);
	GlobalFunc_718(&uLocal_707, iLocal_258);
	GlobalFunc_724(&uLocal_707, cLocal_299);
	GlobalFunc_724(&uLocal_707, "FBI_03_Torture_Chair");
	GlobalFunc_734(&uLocal_707);
}



int func_501()//Position - 0x42953
{
	if (iLocal_2713 != 0)
	{
		switch (iLocal_2800)
		{
			case 0:
				if (GlobalFunc_5170())
				{
					if (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					switch (iLocal_2713)
					{
						case 4:
							if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
							{
								AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
							}
							CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_7", 8);
							func_324(0, 0, cLocal_291, 0);
							if (iLocal_2718)
							{
								func_260("F3_KTARGET", 0, 0);
								iLocal_2800 = 3;
							}
							else
							{
								func_260("F3_RIGHTONE", 0, 0);
								iLocal_2800 = 301;
							}
							break;
						
						case 1:
							if (iLocal_2718)
							{
								func_260("F3_SPOOKEDa", 0, 0);
								iLocal_69 = 10;
								iLocal_2800 = 101;
							}
							else
							{
								func_260("F3_SPOOKEDe", 0, 0);
								iLocal_69 = 10;
								iLocal_2800 = 2;
							}
							break;
						
						case 2:
							if (iLocal_2718)
							{
								func_260("F3_WRNGM2", 0, 0);
								iLocal_69 = 11;
								iLocal_2800 = 2;
							}
							else
							{
								func_260("F3_KILLWRNGM", 0, 0);
								iLocal_69 = 12;
								iLocal_2800 = 2;
							}
							break;
						
						case 3:
							func_260("F3_KILLWRNGF", 0, 0);
							iLocal_69 = 11;
							iLocal_2800 = 2;
							break;
					}
				}
				else if (!GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				break;
			
			case 101:
				if (GlobalFunc_5170())
				{
					if (iLocal_2713 != 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_338[15 /*2*/]))
						{
							func_260("F3_SPOOKEDb", 0, 0);
							iLocal_2800 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					bLocal_2594 = true;
				}
				break;
			
			case 301:
				if (GlobalFunc_5170())
				{
					func_260("F3_TELLSTEVE", 0, 0);
					iLocal_2800 = 3;
				}
				break;
			
			case 3:
				if (!GlobalFunc_111())
				{
					iLocal_2722 = 1;
					return 1;
				}
				break;
			}
	}
	return 0;
}


void func_503()//Position - 0x42B26
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (iLocal_2713 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[iVar0 /*2*/]) && !PED::IS_PED_INJURED(Local_338[iVar0 /*2*/]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_338[iVar0 /*2*/], 1) };
				if (!Local_338[iVar0 /*2*/].f_1)
				{
					if (Var1.f_2 > 13.5f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
						switch (iVar0)
						{
							case 0:
								TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_260, "Shot_Reaction_Male1", Local_208, Local_211, 8f, -1.5f, -1, 790528, 0f, 2, 0);
								break;
							
							case 1:
								TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_260, "Shot_Reaction_Male3", Local_208, Local_211, 8f, -1.5f, -1, 790528, 0f, 2, 0);
								break;
							
							case 2:
								TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_260, "Shot_Reaction_Male5", Local_208, Local_211, 8f, -1.5f, -1, 790528, 0f, 2, 0);
								break;
							
							case 3:
								TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_260, "Shot_Reaction_Female", Local_208, Local_211, 8f, -1.5f, -1, 790528, 0f, 2, 0);
								break;
							
							case 15:
								switch (iLocal_681)
								{
									case 6:
										TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_260, "Shot_Reaction_Male3", Local_208, Local_211, 8f, -1.5f, -1, 790528, 0f, 2, 0);
										break;
									
									case 8:
										TASK::TASK_PLAY_ANIM_ADVANCED(0, cLocal_260, "Shot_Reaction_Male2", Local_208, Local_211, 8f, -1.5f, -1, 790528, 0f, 2, 0);
										break;
								}
								break;
						}
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3111.284f, 352.5119f, 13.4585f, 2f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
						TASK::TASK_PERFORM_SEQUENCE(Local_338[iVar0 /*2*/], uLocal_3083);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
					}
					else if (Var1.f_2 <= 13.5f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_338[iVar0 /*2*/], -3106.137f, 347.9758f, 9.8209f, 2f, 20000, 1048576000, 0, 1193033728);
					}
					Local_338[iVar0 /*2*/].f_1 = 1;
				}
				else if (Var1.f_2 > 13.5f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_338[iVar0 /*2*/], -3110.091f, 355.7968f, 13.45838f, -3113.503f, 343.2243f, 16.23163f, 6.8125f, 0, 1, 0))
					{
						PED::DELETE_PED(&(Local_338[iVar0 /*2*/]));
					}
				}
				else if (Var1.f_2 <= 13.5f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_338[iVar0 /*2*/], -3106.898f, 346.1204f, 9.820868f, -3104.993f, 353.2351f, 13.08003f, 6.8125f, 0, 1, 0))
					{
						PED::DELETE_PED(&(Local_338[iVar0 /*2*/]));
					}
				}
			}
			iVar0++;
		}
		iVar4 = 0;
		while (iVar4 < iLocal_3223)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3223[iVar4]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3223[iVar4], 0);
			}
			iVar4++;
		}
	}
	switch (iLocal_2713)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_338[iVar0 /*2*/]))
				{
					if (PED::IS_PED_INJURED(Local_338[iVar0 /*2*/]))
					{
						if (iVar0 == 15)
						{
							iLocal_2713 = 4;
						}
						else if (ENTITY::GET_ENTITY_MODEL(Local_338[iVar0 /*2*/]) == iLocal_236)
						{
							iLocal_2713 = 3;
						}
						else
						{
							iLocal_2713 = 2;
						}
						GlobalFunc_4956();
						iLocal_2800 = 0;
					}
					else if ((PED::HAS_PED_RECEIVED_EVENT(Local_338[iVar0 /*2*/], 122) || PED::HAS_PED_RECEIVED_EVENT(Local_338[iVar0 /*2*/], 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_338[iVar0 /*2*/], 124))
					{
						iLocal_2713 = 1;
						GlobalFunc_4956();
						iLocal_2800 = 0;
					}
				}
				iVar0++;
			}
			if (iLocal_2713 != 0)
			{
				AUDIO::_0x062D5EAD4DA2FA6A();
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Party_panic", -3094.668f, 347.225f, 13.4458f, "FBI_03_Torture_Sounds", 0, 0, 0);
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_338[iVar0 /*2*/]))
				{
					if (PED::IS_PED_INJURED(Local_338[iVar0 /*2*/]))
					{
						if (iVar0 == 15)
						{
							iLocal_2713 = 4;
						}
						else if (ENTITY::GET_ENTITY_MODEL(Local_338[iVar0 /*2*/]) == iLocal_236)
						{
							iLocal_2713 = 3;
						}
						else
						{
							iLocal_2713 = 2;
						}
						GlobalFunc_4956();
						iLocal_2800 = 0;
					}
				}
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_338[iVar0 /*2*/]))
				{
					if (PED::IS_PED_INJURED(Local_338[iVar0 /*2*/]))
					{
						if (iVar0 != 15)
						{
							if (ENTITY::GET_ENTITY_MODEL(Local_338[iVar0 /*2*/]) == iLocal_236)
							{
								iLocal_2713 = 3;
								GlobalFunc_4956();
								iLocal_2800 = 0;
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_338[iVar0 /*2*/]))
				{
					if (PED::IS_PED_INJURED(Local_338[iVar0 /*2*/]))
					{
						if (iVar0 != 15)
						{
							if (ENTITY::GET_ENTITY_MODEL(Local_338[iVar0 /*2*/]) == iLocal_236)
							{
								iLocal_2713 = 3;
							}
							else
							{
								iLocal_2713 = 2;
							}
							GlobalFunc_4956();
							iLocal_2800 = 0;
						}
					}
				}
				iVar0++;
			}
			break;
	}
}

void func_504()//Position - 0x4302E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	bVar0 = false;
	HUD::DISPLAY_RADAR(0);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (WEAPON::GET_CURRENT_PED_WEAPON(func_20(), &iVar1, 1))
	{
		if (iVar1 != iLocal_3084)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_20(), iLocal_3084, 1);
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_20(), iLocal_3084) <= 10)
		{
			WEAPON::SET_PED_AMMO(func_20(), iLocal_3084, 20);
		}
	}
	iVar1 = joaat("weapon_unarmed");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054) && !PED::IS_PED_INJURED(iLocal_3054))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_3054, &iVar1, 1))
		{
			if (iVar1 != iLocal_3084)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_3054, iLocal_3084, 1);
			}
			iVar1 = joaat("weapon_unarmed");
			if (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_3054, &iVar1, 1))
			{
				if (iVar1 == iLocal_3084)
				{
					iVar2 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_3054);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar2));
					}
				}
			}
		}
	}
	if (iLocal_2705)
	{
		if ((!PAD::IS_CONTROL_PRESSED(2, 25) || GlobalFunc_126(1)) || bLocal_2594)
		{
			ENTITY::SET_ENTITY_VISIBLE(func_20(), 0);
			ENTITY::SET_ENTITY_COLLISION(func_20(), 0, 0);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_20(), 0, 0, 1, 0);
			func_397(&Local_659, Local_194, Local_197, fLocal_200, Local_201, Local_204, fLocal_207, 40000, 1, sLocal_268, 0.5f, "SNIPE");
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
			AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
			CAM::_0x271401846BD26E92(1, 1);
			iLocal_2705 = 0;
		}
		else
		{
			if (iLocal_681 == 10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET"))
				{
					AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE"))
			{
				AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE");
			}
			Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			fVar6 = (MISC::ABSF((Var3.x - Local_2735.x)) / SYSTEM::TIMESTEP());
			fVar7 = (MISC::ABSF((Var3.f_2 - Local_2735.f_2)) / SYSTEM::TIMESTEP());
			if (((((ENTITY::DOES_ENTITY_EXIST(Local_338[15 /*2*/]) && !PED::IS_PED_INJURED(Local_338[15 /*2*/])) && (GlobalFunc_2517(ENTITY::GET_ENTITY_COORDS(Local_338[15 /*2*/], 1), 0.4f, 0.4f, 0.6f, 0.6f) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_338[15 /*2*/]))) && CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() >= 3.65f) && fVar6 < 1.5f) && fVar7 < 1.5f)
			{
				if (iLocal_2739 == -1)
				{
					iLocal_2739 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else
			{
				iLocal_2739 = -1;
			}
			if (iLocal_2739 != -1 && MISC::GET_GAME_TIMER() > iLocal_2739)
			{
				bLocal_2738 = true;
			}
			else
			{
				bLocal_2738 = false;
			}
			Local_2735 = { Var3 };
			bVar0 = true;
		}
	}
	else
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 25) && !GlobalFunc_126(1)) && !bLocal_2594)
		{
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
			if (iLocal_2706 == -1)
			{
				iLocal_2706 = MISC::GET_GAME_TIMER() + 32000;
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			AUDIO::SET_MICROPHONE_POSITION(1, ENTITY::GET_ENTITY_COORDS(iLocal_3054, 1), ENTITY::GET_ENTITY_COORDS(iLocal_3054, 1), ENTITY::GET_ENTITY_COORDS(iLocal_3054, 1));
			bVar0 = true;
			iLocal_2705 = 1;
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(func_20(), 0);
			ENTITY::SET_ENTITY_COLLISION(func_20(), 0, 0);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_20(), 0, 0, 1, 0);
			PAD::DISABLE_CONTROL_ACTION(2, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 257, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET");
			}
			CAM::_0x271401846BD26E92(1, 1);
			func_413(&Local_659);
		}
		bLocal_2738 = false;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 27, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 26, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 22, 1);
	if (!GlobalFunc_2567(23))
	{
		GlobalFunc_601(23, 1);
	}
	PED::_0xA52D5247A4227E14(func_20());
	if (bVar0)
	{
		fVar8 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		fVar9 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		if (iLocal_2707 == 0)
		{
			if ((fVar8 <= (1.072f - 1f) || fVar8 >= (1.072f + 1f)) || (fVar9 <= (-7.008f - 1f) || fVar9 >= (-7.008f + 1f)))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(1.072f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7.008f, 1065353216);
			}
			else
			{
				iLocal_2707 = 1;
			}
		}
		ENTITY::SET_ENTITY_HEADING(func_20(), 76.0353f);
		CAM::_0x2F7F2B26DD3F18EE(-13.92f, 15.755f);
		CAM::_SET_FIRST_PERSON_CAM_PITCH_RANGE(-12.941f, -1.999f);
		CAM::_0xCED08CBE8EBB97C7(1.464f, 10f);
	}
}



void func_507(bool bParam0)//Position - 0x43512
{
	char cVar0[16];
	
	if (!iLocal_2716)
	{
		switch (iLocal_681)
		{
			case 6:
				StringCopy(&cVar0, "Party", 16);
				break;
			
			case 8:
				StringCopy(&cVar0, "Party_2", 16);
				break;
			
			case 10:
				StringCopy(&cVar0, "Party_3", 16);
				break;
		}
		if (AUDIO::LOAD_STREAM(&cVar0, "FBI_03_Torture_Sounds"))
		{
			if (bParam0)
			{
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
				AUDIO::PLAY_STREAM_FROM_POSITION(-3024.751f, 332.2954f, 13.6596f);
				AUDIO::START_AUDIO_SCENE(sLocal_306);
				fLocal_2789 = 0f;
				fLocal_2790 = 0f;
				AUDIO::SET_VARIABLE_ON_STREAM("ZoomLevel", fLocal_2789);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sLocal_306, "apply", fLocal_2789);
				iLocal_2716 = 1;
			}
		}
	}
	func_508();
	if (iLocal_681 == 10)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_338[15 /*2*/]) && !PED::IS_PED_INJURED(Local_338[15 /*2*/])) && !Local_338[15 /*2*/].f_1)
		{
			if (!GlobalFunc_709(Local_338[15 /*2*/], 242628503, 1))
			{
				ENTITY::SET_ENTITY_COORDS(Local_338[15 /*2*/], Local_2569[iLocal_2588[0] /*3*/], 1, 0, 0, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_A", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_C", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_D", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_B", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_A", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_C", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_D", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_B", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_C", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_A", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_D", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Male_B", Local_2569[iLocal_2588[0] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3083, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
				TASK::TASK_PERFORM_SEQUENCE(Local_338[15 /*2*/], uLocal_3083);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_338[15 /*2*/], -1864400582))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", Local_338[15 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_338[13 /*2*/]) && !PED::IS_PED_INJURED(Local_338[13 /*2*/])) && !Local_338[13 /*2*/].f_1)
	{
		if (!GlobalFunc_709(Local_338[13 /*2*/], 242628503, 1))
		{
			ENTITY::SET_ENTITY_COORDS(Local_338[13 /*2*/], Local_2569[iLocal_2588[1] /*3*/], 1, 0, 0, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_A", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_C", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_D", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_B", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_A", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_C", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_D", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_B", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_C", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_A", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_D", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_LH_Female_B", Local_2569[iLocal_2588[1] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3083, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
			TASK::TASK_PERFORM_SEQUENCE(Local_338[13 /*2*/], uLocal_3083);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_338[13 /*2*/], -1864400582))
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", Local_338[13 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_338[14 /*2*/]) && !PED::IS_PED_INJURED(Local_338[14 /*2*/])) && !Local_338[14 /*2*/].f_1)
	{
		if (!GlobalFunc_709(Local_338[14 /*2*/], 242628503, 1))
		{
			ENTITY::SET_ENTITY_COORDS(Local_338[14 /*2*/], Local_2569[iLocal_2588[2] /*3*/], 1, 0, 0, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_A", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_C", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_D", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_B", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_A", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_C", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_D", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_B", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_C", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_A", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_D", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSFBI3_PARTY_E", "Target_Smoke_RH_Male_B", Local_2569[iLocal_2588[2] /*3*/], 0f, 0f, 259.4096f, 8f, -8f, -1, 33816584, 0f, 2, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3083, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
			TASK::TASK_PERFORM_SEQUENCE(Local_338[14 /*2*/], uLocal_3083);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_338[14 /*2*/], -1864400582))
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", Local_338[14 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
		}
	}
	if (!func_205(iLocal_3093[40]))
	{
		if ((iLocal_2698[0] && iLocal_681 != 8) && (!iLocal_2717 || (iLocal_2717 && (MISC::GET_GAME_TIMER() - iLocal_2765) >= 15000)))
		{
			if (((((!PED::IS_PED_INJURED(Local_338[0 /*2*/]) && !Local_338[0 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[1 /*2*/]) && !Local_338[1 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[2 /*2*/]) && !Local_338[2 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[3 /*2*/]) && !Local_338[3 /*2*/].f_1)) || (((((iLocal_681 == 5 || iLocal_681 == 6) || iLocal_681 == 7) || iLocal_681 == 8) && !PED::IS_PED_INJURED(Local_338[15 /*2*/])) && !Local_338[15 /*2*/].f_1))
			{
				iLocal_3093[40] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
			}
			if (!PED::IS_PED_INJURED(Local_338[0 /*2*/]) && !Local_338[0 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[0 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_B_Male1", 8f, -8f, 0, 0, 1148846080, 0);
			}
			if (iLocal_681 == 7 || iLocal_681 == 8)
			{
				if (!PED::IS_PED_INJURED(Local_338[15 /*2*/]) && !Local_338[15 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[15 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_B_Male2", 8f, -8f, 0, 0, 1148846080, 0);
				}
			}
			if (iLocal_681 == 5 || iLocal_681 == 6)
			{
				if (!PED::IS_PED_INJURED(Local_338[15 /*2*/]) && !Local_338[15 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[15 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_B_Male3", 8f, -8f, 0, 0, 1148846080, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_338[1 /*2*/]) && !Local_338[1 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[1 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_B_Male3", 8f, -8f, 0, 0, 1148846080, 0);
			}
			if (!PED::IS_PED_INJURED(Local_338[2 /*2*/]) && !Local_338[2 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[2 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_B_Male5", 8f, -8f, 0, 0, 1148846080, 0);
			}
			if (!PED::IS_PED_INJURED(Local_338[3 /*2*/]) && !Local_338[3 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[3 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_B_Female", 8f, -8f, 0, 0, 1148846080, 0);
			}
			iLocal_2717 = 1;
			iLocal_2765 = MISC::GET_GAME_TIMER();
		}
		else
		{
			if (((((!PED::IS_PED_INJURED(Local_338[0 /*2*/]) && !Local_338[0 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[1 /*2*/]) && !Local_338[1 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[2 /*2*/]) && !Local_338[2 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[3 /*2*/]) && !Local_338[3 /*2*/].f_1)) || (((((iLocal_681 == 5 || iLocal_681 == 6) || iLocal_681 == 7) || iLocal_681 == 8) && !PED::IS_PED_INJURED(Local_338[15 /*2*/])) && !Local_338[15 /*2*/].f_1))
			{
				iLocal_3093[40] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
			}
			if (!PED::IS_PED_INJURED(Local_338[0 /*2*/]) && !Local_338[0 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[0 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_A_Male1", 8f, -8f, 0, 0, 1148846080, 0);
			}
			if (iLocal_681 == 5 || iLocal_681 == 6)
			{
				if (!PED::IS_PED_INJURED(Local_338[15 /*2*/]) && !Local_338[15 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[15 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_A_Male3", 8f, -8f, 0, 0, 1148846080, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_338[1 /*2*/]) && !Local_338[1 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[1 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_A_Male3", 8f, -8f, 0, 0, 1148846080, 0);
			}
			if (iLocal_681 == 7 || iLocal_681 == 8)
			{
				if (!PED::IS_PED_INJURED(Local_338[15 /*2*/]) && !Local_338[15 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[15 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_A_Male2", 8f, -8f, 0, 0, 1148846080, 0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_338[2 /*2*/]) && !Local_338[2 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[2 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_A_Male5", 8f, -8f, 0, 0, 1148846080, 0);
			}
			if (!PED::IS_PED_INJURED(Local_338[3 /*2*/]) && !Local_338[3 /*2*/].f_1)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_338[3 /*2*/], iLocal_3093[40], "MISSFBI3_PARTY", "Snort_Coke_A_Female", 8f, -8f, 0, 0, 1148846080, 0);
			}
		}
	}
	if (!func_205(iLocal_3093[41]))
	{
		switch (iLocal_2766)
		{
			case 0:
				if (((!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1))
				{
					iLocal_3093[41] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[4 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Talk_Balcony_Loop_Male1", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[5 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Talk_Balcony_Loop_Male2", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[6 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Talk_Balcony_Loop_Female", 8f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2766++;
				break;
			
			case 1:
				if (((!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1))
				{
					iLocal_3093[41] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[4 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Walk_Inside_Male1", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[5 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Walk_Inside_Male2", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[6 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Walk_Inside_Female", 8f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2766++;
				break;
			
			case 2:
				if (((!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1))
				{
					iLocal_3093[41] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[4 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Talk_Inside_Loop_Male1", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[5 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Talk_Inside_Loop_Male2", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[6 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Talk_Inside_Loop_Female", 8f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2766++;
				break;
			
			case 3:
				if (((!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1))
				{
					iLocal_3093[41] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[4 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Walk_To_Balcony_Male1", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[5 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Walk_To_Balcony_Male2", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[6 /*2*/], iLocal_3093[41], "MISSFBI3_PARTY_B", "Walk_To_Balcony_Female", 8f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2766 = 0;
				break;
			}
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3093[42]))
	{
		if ((!PED::IS_PED_INJURED(Local_338[7 /*2*/]) && !Local_338[7 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[8 /*2*/]) && !Local_338[8 /*2*/].f_1))
		{
			iLocal_3093[42] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[42], 1);
		}
		if (!PED::IS_PED_INJURED(Local_338[7 /*2*/]) && !Local_338[7 /*2*/].f_1)
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Local_338[7 /*2*/], iLocal_3093[42], "MISSFBI3_PARTY_C", "Marijuana_Loop_A_Male1", 1000f, -8f, 0, 0, 1148846080, 0);
		}
		if (!PED::IS_PED_INJURED(Local_338[8 /*2*/]) && !Local_338[8 /*2*/].f_1)
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Local_338[8 /*2*/], iLocal_3093[42], "MISSFBI3_PARTY_C", "Marijuana_Loop_A_Male2", 1000f, -8f, 0, 0, 1148846080, 0);
		}
	}
	if (!func_205(iLocal_3093[43]))
	{
		switch (iLocal_2767)
		{
			case 0:
				if ((((!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1))
				{
					iLocal_3093[43] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[9 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_A_Male1", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[10 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_A_Male2", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[11 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_A_Male3", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[12 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_A_Female", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2767++;
				break;
			
			case 1:
				if ((((!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1))
				{
					iLocal_3093[43] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[9 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_A_To_B_Male1", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[10 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_A_To_B_Male2", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[11 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_A_To_B_Male3", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[12 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_A_To_B_Female", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2767++;
				break;
			
			case 2:
				if ((((!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1))
				{
					iLocal_3093[43] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[9 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_B_Male1", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[10 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_B_Male2", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[11 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_B_Male3", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[12 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Stand_Talk_Loop_B_Female", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2767++;
				break;
			
			case 3:
				if ((((!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1) || (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)) || (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1))
				{
					iLocal_3093[43] = PED::CREATE_SYNCHRONIZED_SCENE(Local_208, Local_211, 2);
				}
				if (!PED::IS_PED_INJURED(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[9 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_B_To_A_Male1", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[10 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_B_To_A_Male2", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[11 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_B_To_A_Male3", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_338[12 /*2*/], iLocal_3093[43], "MISSFBI3_PARTY_D", "Walk_From_B_To_A_Female", 1000f, -8f, 0, 0, 1148846080, 0);
				}
				iLocal_2767 = 0;
				break;
			}
	}
	fLocal_2789 = (1f - ((CAM::GET_GAMEPLAY_CAM_FOV() - 5f) / 45f));
	if (fLocal_2789 != fLocal_2790)
	{
		AUDIO::SET_VARIABLE_ON_STREAM("ZoomLevel", fLocal_2789);
		AUDIO::SET_AUDIO_SCENE_VARIABLE(sLocal_306, "apply", fLocal_2789);
		fLocal_2790 = fLocal_2789;
	}
	if (iLocal_2713 != 0)
	{
		if (fLocal_2789 != fLocal_2790)
		{
			AUDIO::_0x149AEE66F0CB3A99((fLocal_2789 / 1.5f), 1f);
		}
	}
	else
	{
		AUDIO::_0x149AEE66F0CB3A99(0f, 0f);
	}
}

void func_508()//Position - 0x4536F
{
	if (CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() >= 3.65f)
	{
		if (!iLocal_2698[4])
		{
			if (CAM::IS_SPHERE_VISIBLE(Local_70[4 /*3*/], 0.1f))
			{
				iLocal_2698[4] = 1;
			}
		}
		if (!iLocal_2698[0])
		{
			if (CAM::IS_SPHERE_VISIBLE(Local_70[0 /*3*/], 0.1f))
			{
				iLocal_2698[0] = 1;
			}
		}
		if (!iLocal_2698[1])
		{
			if (CAM::IS_SPHERE_VISIBLE(Local_70[1 /*3*/], 0.1f))
			{
				iLocal_2698[1] = 1;
			}
		}
		if (!iLocal_2698[2])
		{
			if (CAM::IS_SPHERE_VISIBLE(Local_70[2 /*3*/], 0.1f))
			{
				iLocal_2698[2] = 1;
			}
		}
		if (!iLocal_2698[3])
		{
			if (CAM::IS_SPHERE_VISIBLE(Local_70[3 /*3*/], 0.1f))
			{
				iLocal_2698[3] = 1;
			}
		}
	}
}


void func_510()//Position - 0x45482
{
	int iVar0;
	int iVar1;
	
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] - Global_Mission_Fail_State.f_12[1] & 127);
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] || SYSTEM::ROUND(fLocal_2775));
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] - Global_Mission_Fail_State.f_12[1] & 32640);
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_86)
	{
		if (iLocal_86[iVar1])
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] || SYSTEM::SHIFT_LEFT(iVar0, 7));
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] - Global_Mission_Fail_State.f_12[1] & 491520);
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] || SYSTEM::SHIFT_LEFT(iLocal_2770, 15));
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] - Global_Mission_Fail_State.f_12[1] & 7864320);
	Global_Mission_Fail_State.f_12[1] = (Global_Mission_Fail_State.f_12[1] || SYSTEM::SHIFT_LEFT(iLocal_2673, 19));
}

void func_511()//Position - 0x455A9
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	GlobalFunc_2516();
	GlobalFunc_5077();
	if (!iLocal_2592)
	{
		func_332(9, "9. Trevor tortures Final", 0, 0, 0, 1);
		func_510();
		HUD::DISPLAY_RADAR(0);
		func_328();
		iLocal_2800 = 0;
		iLocal_2592 = 1;
		iLocal_3222 = 0;
		GlobalFunc_702(1, 0, 1);
	}
	if (iLocal_2592)
	{
		bLocal_2618 = true;
		switch (iLocal_2800)
		{
			case 0:
				if (func_400())
				{
					iLocal_2800++;
				}
				break;
			
			case 1:
				if (func_693())
				{
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(15f, 5f, 4);
					}
					func_4();
					func_512();
					iLocal_2800++;
				}
				break;
			
			case 2:
				if (func_512())
				{
					func_507(1);
					func_504();
					iLocal_681 = 10;
				}
				break;
		}
		if (iLocal_681 != 9)
		{
			func_25(1, 1, 1);
			func_49();
			iLocal_2801 = 0;
			iLocal_2623 = 0;
			iLocal_2592 = 0;
		}
	}
}

int func_512()//Position - 0x45690
{
	if (!bLocal_2725)
	{
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			STREAMING::SET_FOCUS_ENTITY(func_20());
			func_692(&uLocal_707, Local_226, Local_229, fLocal_232, 1);
			switch (iLocal_681)
			{
				case 5:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_2"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_2");
					}
					break;
				
				case 7:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_3"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_3");
					}
					break;
				
				case 9:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_4"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_4");
					}
					break;
			}
			if (!iLocal_2796)
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_20()))
				{
					GlobalFunc_7704(func_20(), 0);
				}
				Local_2797 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[0 /*284*/][21 /*3*/] };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[0 /*284*/][21 /*3*/].f_1 = 0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[0 /*284*/][21 /*3*/].f_2 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(func_20()))
				{
					GlobalFunc_7694(func_20(), 1, 0);
				}
				iLocal_2796 = 1;
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3046, cLocal_285, 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3045, cLocal_291, 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, joaat("cs_mrk"), 0);
			func_463();
			func_464(0, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			if (!RECORDING::_IS_RECORDING())
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
			}
			func_25(1, 1, 1);
			bLocal_2720 = false;
			bLocal_2725 = true;
			iLocal_2715 = 0;
			iLocal_2625 = 0;
			iLocal_2733 = 0;
			bLocal_2734 = false;
			iLocal_2728 = 0;
			iLocal_3222 = 0;
		}
	}
	else if (!iLocal_2728)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::_0xC61B86C9F61EB404(1);
			if (!iLocal_2625)
			{
				func_248(250);
				iLocal_2625 = 1;
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
			iLocal_2733 = 1;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_0x81CBAE94390F9F89();
			}
			func_397(&Local_659, Local_194, Local_197, fLocal_200, Local_201, Local_204, fLocal_207, 40000, 1, sLocal_268, 0.5f, "SNIPE");
			func_413(&Local_659);
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			bLocal_2734 = true;
		}
		if (((((func_687(0, 1, 0, 0) && func_513(0, 1, iLocal_681 + 1, 0, 0)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_20())) && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && iLocal_2733) && bLocal_2734)
		{
			GlobalFunc_9019(&iLocal_2836, 0);
			func_419(&iLocal_2836, 1, 0, 0);
			func_327(func_181());
			func_327(func_20());
			func_50();
			switch (iLocal_681)
			{
				case 5:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_1"))
					{
						AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_1");
					}
					break;
				
				case 7:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_2"))
					{
						AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_2");
					}
					break;
				
				case 9:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_3"))
					{
						AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_3");
					}
					break;
			}
			iLocal_2728 = 1;
			func_248(800);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
		}
	}
	else
	{
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
		STREAMING::CLEAR_FOCUS();
		GlobalFunc_5181(&uLocal_707);
		iLocal_2721 = 0;
		bLocal_2725 = false;
		iLocal_2625 = 0;
		iLocal_3222 = 0;
		return 1;
	}
	return 0;
}

bool func_513(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x459D7
{
	bool bVar0;
	bool bVar1;
	struct<65> Var2;
	struct<3> Var67;
	struct<3> Var70;
	struct<65> Var73;
	int iVar138;
	
	bVar0 = true;
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3064))
		{
			if (!bVar1)
			{
				if (GlobalFunc_7698())
				{
					if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_622()))
					{
						iLocal_3064 = GlobalFunc_10154(Local_170, 123.59f);
						bVar1 = true;
					}
					else
					{
						bVar0 = false;
					}
				}
				else if (GlobalFunc_8038(&iLocal_3064, 30, Local_170, 123.59f, 1, 0))
				{
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
		{
			if (!bVar1)
			{
				if (GlobalFunc_7047(&iLocal_3047, 30, Local_176, 213.1984f, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_3047, 100);
					PED::SET_PED_LOD_MULTIPLIER(iLocal_3047, 1.5f);
					func_327(iLocal_3047);
					Var2 = 12;
					Var2.f_13 = 12;
					Var2.f_26 = 12;
					Var2.f_39 = 9;
					Var2.f_49 = 9;
					Var2 = { func_325(1) };
					func_543(iLocal_3047, &Var2, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(30));
					bVar0 = false;
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_3047))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3047))
			{
				bVar0 = false;
			}
		}
		if (bParam4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_3047, iLocal_3064, 1))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_3047, iLocal_3064, 0);
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_3064) && !PED::IS_PED_INJURED(func_20())) && !PED::IS_PED_INJURED(iLocal_3047))
		{
			if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_371[5]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_371[6])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_371[7])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_3073))
			{
				bVar0 = false;
				if (!bVar1)
				{
					if ((STREAMING::HAS_MODEL_LOADED(joaat("p_ing_coffeecup_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_chair_01a")))
					{
						iLocal_371[5] = OBJECT::CREATE_OBJECT(joaat("p_ing_coffeecup_01"), ENTITY::GET_ENTITY_COORDS(func_20(), 1), 1, 1, 0);
						iLocal_371[6] = OBJECT::CREATE_OBJECT(joaat("p_ing_coffeecup_01"), ENTITY::GET_ENTITY_COORDS(iLocal_3047, 1), 1, 1, 0);
						ENTITY::CREATE_MODEL_HIDE(-1267.62f, -880.46f, 10.95f, 0.25f, joaat("prop_chair_01a"), 1);
						iLocal_371[7] = OBJECT::CREATE_OBJECT(joaat("prop_chair_01a"), -1267.62f, -880.46f, 10.95f, 1, 1, 0);
						iLocal_2750 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(10.95f, -880.46f, -1267.62f) - Vector(10f, 10f, 10f), Vector(10.95f, -880.46f, -1267.62f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
						iLocal_3073 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), ENTITY::GET_ENTITY_COORDS(iLocal_3047, 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[5], func_20(), PED::GET_PED_BONE_INDEX(func_20(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[6], iLocal_3047, PED::GET_PED_BONE_INDEX(iLocal_3047, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3073, iLocal_3047, PED::GET_PED_BONE_INDEX(iLocal_3047, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						bVar1 = true;
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			else if (!func_205(iLocal_3093[38]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_266))
				{
					iLocal_3093[38] = PED::CREATE_SYNCHRONIZED_SCENE(Local_214, Local_217, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_20(), iLocal_3093[38], cLocal_266, "002291_02_fbi_3_coffee_w_dave_idle_mic", 1000f, -1000f, 4, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3047, iLocal_3093[38], cLocal_266, "002291_02_fbi_3_coffee_w_dave_idle_dave", 1000f, -1000f, 4, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_371[7], iLocal_3093[38], "002291_02_fbi_3_coffee_w_dave_idle_chair", cLocal_266, 1000f, -1000f, 4, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[38], 1);
					Var67 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_266, "002291_02_fbi_3_coffee_w_dave_exit_cam", Local_214, Local_217, 0f, 2) };
					Var70 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_266, "002291_02_fbi_3_coffee_w_dave_exit_cam", Local_214, Local_217, 0f, 2) };
				}
				else
				{
					bVar0 = false;
				}
			}
		}
	}
	else if (!bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
		{
			if (!bVar1)
			{
				if (GlobalFunc_7047(&iLocal_3047, 30, Local_113, 75.1103f, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_3047, 100);
					PED::SET_PED_LOD_MULTIPLIER(iLocal_3047, 1.5f);
					func_327(iLocal_3047);
					Var73 = 12;
					Var73.f_13 = 12;
					Var73.f_26 = 12;
					Var73.f_39 = 9;
					Var73.f_49 = 9;
					Var73 = { func_325(1) };
					func_543(iLocal_3047, &Var73, 0);
					bVar0 = false;
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(30));
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_3047))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3047))
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
		{
			if (!bVar1)
			{
				if (func_515(&iLocal_3054, 0, Local_110, 76.1479f, 1, 0, 0))
				{
					iVar138 = 0;
					while (iVar138 < Global_89952)
					{
						if (Global_89952[iVar138] == func_20() || Global_89952[iVar138] == iLocal_3054)
						{
							Global_89952[iVar138] = 0;
						}
						iVar138++;
					}
					func_327(iLocal_3054);
					bVar1 = true;
					bVar0 = false;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_3054))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3054))
			{
				bVar0 = false;
			}
		}
		if (!iLocal_2715)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iLocal_3047) && ENTITY::DOES_ENTITY_EXIST(iLocal_3054)) && !PED::IS_PED_INJURED(iLocal_3054)) && !PED::IS_PED_INJURED(iLocal_3047))
			{
				if (((STREAMING::HAS_ANIM_DICT_LOADED(cLocal_263) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_3084)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_binoc_01")))
				{
					ENTITY::SET_ENTITY_COORDS(func_20(), -3024.751f, 332.2954f, 19.361f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(func_20(), 0f, 0f, 76.0353f, 2, 1);
					ENTITY::SET_ENTITY_VISIBLE(func_20(), 0);
					ENTITY::SET_ENTITY_COLLISION(func_20(), 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
					iLocal_3093[39] = PED::CREATE_SYNCHRONIZED_SCENE(Local_188, Local_191, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3047, iLocal_3093[39], cLocal_263, sLocal_265, 1000f, -1000f, 0, 0, 1148846080, 4);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3073))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3073))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3073, iLocal_3047))
							{
								ENTITY::DETACH_ENTITY(iLocal_3073, 0, 1);
							}
						}
					}
					else
					{
						iLocal_3073 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_3047, 28422, 0f, 0f, 0f), 1, 1, 0);
						GlobalFunc_5174(&uLocal_707, joaat("prop_npc_phone"));
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_3073))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3073, iLocal_3047, PED::GET_PED_BONE_INDEX(iLocal_3047, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[8]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_371[8]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_371[8], iLocal_3047))
							{
								ENTITY::DETACH_ENTITY(iLocal_371[8], 0, 1);
							}
						}
					}
					else
					{
						iLocal_371[8] = OBJECT::CREATE_OBJECT(joaat("prop_binoc_01"), PED::GET_PED_BONE_COORDS(iLocal_3047, 60309, 0f, 0f, 0f), 1, 1, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_371[8]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[8], iLocal_3047, PED::GET_PED_BONE_INDEX(iLocal_3047, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3054, iLocal_3093[39], cLocal_263, sLocal_264, 1000f, -1000f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[39], 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3054, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3047, 0, 0);
					func_514(func_20());
					func_514(iLocal_3054);
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					iLocal_2705 = 0;
					iLocal_2707 = 0;
					iLocal_2715 = 1;
					bVar0 = false;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
	}
	if (bParam1)
	{
		if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_235) && STREAMING::HAS_MODEL_LOADED(iLocal_236)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_B")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_C")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_D")) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_260)) && AUDIO::REQUEST_MISSION_AUDIO_BANK("FBI_03_Panic", 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[0 /*2*/]))
			{
				if (!bVar1)
				{
					Local_338[0 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0f, 0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[0 /*2*/], "COKE_M_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[0 /*2*/], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[0 /*2*/], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[0 /*2*/], 3, 2, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[0 /*2*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[0 /*2*/], 8, 1, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[0 /*2*/], 1, 0, 1, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[0 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[0 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[0 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (iParam2 != 6 && iParam2 != 5)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_338[1 /*2*/]))
				{
					if (!bVar1)
					{
						Local_338[1 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0.5f, 0.5f), 0f, 1, 1);
						PED::SET_PED_NAME_DEBUG(Local_338[1 /*2*/], "COKE_M_3");
						PED::SET_PED_COMPONENT_VARIATION(Local_338[1 /*2*/], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[1 /*2*/], 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[1 /*2*/], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[1 /*2*/], 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[1 /*2*/], 8, 2, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_338[1 /*2*/], 0, 1, 0, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[1 /*2*/], 1);
						PED::SET_PED_STEERS_AROUND_PEDS(Local_338[1 /*2*/], 0);
						PED::SET_PED_LOD_MULTIPLIER(Local_338[1 /*2*/], 2.5f);
						bVar1 = true;
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[2 /*2*/]))
			{
				if (!bVar1)
				{
					Local_338[2 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, -0.5f, 0f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[2 /*2*/], "COKE_M_5");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[2 /*2*/], 0, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[2 /*2*/], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[2 /*2*/], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[2 /*2*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[2 /*2*/], 8, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[2 /*2*/], 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_338[2 /*2*/], 1, 0, 1, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[2 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[2 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[2 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[3 /*2*/]))
			{
				if (!bVar1)
				{
					Local_338[3 /*2*/] = PED::CREATE_PED(26, iLocal_236, Local_208 + Vector(0f, 0.5f, -0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[3 /*2*/], "COKE_F_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[3 /*2*/], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[3 /*2*/], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[3 /*2*/], 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[3 /*2*/], 4, 1, 1, 0);
					PED::SET_PED_PROP_INDEX(Local_338[3 /*2*/], 1, 0, 1, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[3 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[3 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[3 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[4 /*2*/]) && !Local_338[4 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[4 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0f, 0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[4 /*2*/], "B_M_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[4 /*2*/], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[4 /*2*/], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[4 /*2*/], 3, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[4 /*2*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[4 /*2*/], 8, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[4 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[4 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[4 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[5 /*2*/]) && !Local_338[5 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[5 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0.5f, 0f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[5 /*2*/], "B_M_2");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[5 /*2*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[5 /*2*/], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[5 /*2*/], 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[5 /*2*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[5 /*2*/], 8, 2, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[5 /*2*/], 1, 1, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[5 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[5 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[5 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[6 /*2*/]) && !Local_338[6 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[6 /*2*/] = PED::CREATE_PED(26, iLocal_236, Local_208 + Vector(0f, 0.5f, -0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[6 /*2*/], "B_F_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[6 /*2*/], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[6 /*2*/], 2, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[6 /*2*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[6 /*2*/], 4, 0, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[6 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[6 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[6 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[7 /*2*/]) && !Local_338[7 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[7 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0f, 0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[7 /*2*/], "C_M_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[7 /*2*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[7 /*2*/], 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[7 /*2*/], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[7 /*2*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[7 /*2*/], 8, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[7 /*2*/], 0, 0, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[7 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[7 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[7 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[8 /*2*/]) && !Local_338[8 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[8 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0.5f, 0f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[8 /*2*/], "C_M_2");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[8 /*2*/], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[8 /*2*/], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[8 /*2*/], 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[8 /*2*/], 4, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[8 /*2*/], 8, 1, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[8 /*2*/], 1, 1, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[8 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[8 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[8 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[9 /*2*/]) && !Local_338[9 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[9 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0f, 0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[9 /*2*/], "D_M_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[9 /*2*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[9 /*2*/], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[9 /*2*/], 3, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[9 /*2*/], 4, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[9 /*2*/], 8, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[9 /*2*/], 0, 0, 1, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[9 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[9 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[9 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[10 /*2*/]) && !Local_338[10 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[10 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0.5f, 0f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[10 /*2*/], "D_M_2");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[10 /*2*/], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[10 /*2*/], 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[10 /*2*/], 3, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[10 /*2*/], 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[10 /*2*/], 8, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[10 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[10 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[10 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[11 /*2*/]) && !Local_338[11 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[11 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0.5f, 0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[11 /*2*/], "D_M_3");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[11 /*2*/], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[11 /*2*/], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[11 /*2*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[11 /*2*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[11 /*2*/], 8, 2, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_338[11 /*2*/], 1, 0, 1, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[11 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[11 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[11 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[12 /*2*/]) && !Local_338[12 /*2*/].f_1)
			{
				if (!bVar1)
				{
					Local_338[12 /*2*/] = PED::CREATE_PED(26, iLocal_236, Local_208 + Vector(0f, 0.5f, -0.5f), 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(Local_338[12 /*2*/], "D_F_1");
					PED::SET_PED_COMPONENT_VARIATION(Local_338[12 /*2*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[12 /*2*/], 2, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[12 /*2*/], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_338[12 /*2*/], 4, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[12 /*2*/], 1);
					PED::SET_PED_STEERS_AROUND_PEDS(Local_338[12 /*2*/], 0);
					PED::SET_PED_LOD_MULTIPLIER(Local_338[12 /*2*/], 2.5f);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_338[15 /*2*/]))
			{
				switch (iParam2)
				{
					case 6:
					case 8:
						if (STREAMING::HAS_MODEL_LOADED(iLocal_234))
						{
							if (!bVar1)
							{
								Local_338[15 /*2*/] = PED::CREATE_PED(26, iLocal_234, Local_208 + Vector(0f, 0f, 0.5f), 0f, 1, 1);
								PED::SET_PED_STEERS_AROUND_PEDS(Local_338[15 /*2*/], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[15 /*2*/], 1);
								PED::SET_PED_NAME_DEBUG(Local_338[15 /*2*/], "THE TARGET");
								PED::SET_PED_LOD_MULTIPLIER(Local_338[15 /*2*/], 2.5f);
								bVar1 = true;
							}
							else
							{
								bVar0 = false;
							}
						}
						else
						{
							bVar0 = false;
						}
						break;
					
					case 10:
						if (((STREAMING::HAS_MODEL_LOADED(iLocal_234) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_ciggy_01b"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_fag_packet_01_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_E"))
						{
							if (!bVar1)
							{
								Local_338[15 /*2*/] = PED::CREATE_PED(26, iLocal_234, Local_208 + Vector(0f, 0f, 0.5f), 0f, 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[15 /*2*/], 1);
								PED::SET_PED_STEERS_AROUND_PEDS(Local_338[15 /*2*/], 0);
								PED::SET_PED_NAME_DEBUG(Local_338[15 /*2*/], "THE TARGET");
								iLocal_371[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), ENTITY::GET_ENTITY_COORDS(Local_338[15 /*2*/], 1), 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[0], Local_338[15 /*2*/], PED::GET_PED_BONE_INDEX(Local_338[15 /*2*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								iLocal_3223[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_cig_smoke", iLocal_371[0], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_371[1] = OBJECT::CREATE_OBJECT(joaat("p_fag_packet_01_s"), ENTITY::GET_ENTITY_COORDS(Local_338[15 /*2*/], 1), 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[1], Local_338[15 /*2*/], PED::GET_PED_BONE_INDEX(Local_338[15 /*2*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								ENTITY::SET_ENTITY_COLLISION(iLocal_371[1], 0, 0);
								PED::SET_PED_LOD_MULTIPLIER(Local_338[15 /*2*/], 2.5f);
								bVar1 = true;
							}
							else
							{
								bVar0 = false;
							}
						}
						else
						{
							bVar0 = false;
						}
						break;
					}
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_ciggy_01b")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_E"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_338[14 /*2*/]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_235))
					{
						if (!bVar1)
						{
							Local_338[14 /*2*/] = PED::CREATE_PED(26, iLocal_235, Local_208 + Vector(0f, 0.5f, 0.5f), 0f, 1, 1);
							PED::SET_PED_COMPONENT_VARIATION(Local_338[14 /*2*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_338[14 /*2*/], 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_338[14 /*2*/], 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_338[14 /*2*/], 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_338[14 /*2*/], 8, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_338[14 /*2*/], 0, 1, 1, false);
							PED::SET_PED_NAME_DEBUG(Local_338[14 /*2*/], "DECOY M");
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[14 /*2*/], 1);
							PED::SET_PED_STEERS_AROUND_PEDS(Local_338[14 /*2*/], 0);
							iLocal_371[3] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), ENTITY::GET_ENTITY_COORDS(Local_338[14 /*2*/], 1), 1, 1, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[3], Local_338[14 /*2*/], PED::GET_PED_BONE_INDEX(Local_338[14 /*2*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							iLocal_3223[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_cig_smoke", iLocal_371[3], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
							PED::SET_PED_LOD_MULTIPLIER(Local_338[14 /*2*/], 2.5f);
							bVar1 = true;
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						bVar0 = false;
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_338[13 /*2*/]))
				{
					if (!bVar1)
					{
						Local_338[13 /*2*/] = PED::CREATE_PED(26, iLocal_236, Local_208 + Vector(0f, 0.5f, 0f), 0f, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_338[13 /*2*/], 1);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[13 /*2*/], 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[13 /*2*/], 2, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[13 /*2*/], 3, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_338[13 /*2*/], 4, 1, 1, 0);
						PED::SET_PED_PROP_INDEX(Local_338[13 /*2*/], 1, 1, 0, false);
						PED::SET_PED_NAME_DEBUG(Local_338[13 /*2*/], "DECOY F");
						PED::SET_PED_STEERS_AROUND_PEDS(Local_338[13 /*2*/], 0);
						iLocal_371[2] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), ENTITY::GET_ENTITY_COORDS(Local_338[13 /*2*/], 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[2], Local_338[13 /*2*/], PED::GET_PED_BONE_INDEX(Local_338[13 /*2*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						iLocal_3223[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_cig_smoke", iLocal_371[2], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						PED::SET_PED_LOD_MULTIPLIER(Local_338[13 /*2*/], 2.5f);
						bVar1 = true;
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_371[4]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_fbi3_coffee_table")))
			{
				if (!bVar1)
				{
					iLocal_371[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_fbi3_coffee_table"), -3099.306f, 342.8378f, 13.5146f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_371[4], 0f, 0f, 75.355f, 2, 1);
					bVar1 = true;
				}
				else
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
			func_507(0);
		}
	}
	return bVar0;
}

void func_514(int iParam0)//Position - 0x471BD
{
	if (iParam0 == func_20())
	{
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iLocal_3084, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iLocal_3084, 20, 0, 0);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iLocal_3084, joaat("component_at_scope_max"));
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iLocal_3084, 1);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), 0);
		WEAPON::SET_PED_AMMO(iParam0, iLocal_3084, 20);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iLocal_3084, joaat("component_at_scope_max"));
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iLocal_3084, 1);
	}
}

int func_515(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x47236
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8564(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_535(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_8016(*iParam0);
			func_517(*iParam0, bParam8);
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


int func_517(int iParam0, bool bParam1)//Position - 0x4734E
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_521(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_521(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_11271(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11271(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11271(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11271(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11271(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11271(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11271(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11271(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_521(int iParam0, int iParam1)//Position - 0x47A9D
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
					func_543(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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














void func_535(int iParam0)//Position - 0x4B97C
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
		func_543(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
				func_543(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_543(int iParam0, var uParam1, bool bParam2)//Position - 0x4C38C
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
				GlobalFunc_11271(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11271(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_546(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_546(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_546(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x4C623
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
		Global_68106[1 /*14*/] = { func_630(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_628(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { func_630(iVar5, 10, 0) };
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
						func_628(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { func_630(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { func_630(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									func_628(iVar5, iVar0, uVar15[iVar0], 1);
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
								func_628(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { func_630(iVar5, iVar0, func_627(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_546(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9234();
			if (iVar57 != -1)
			{
				func_624(iVar57, 0, Global_68104);
			}
			func_622(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { func_630(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				func_628(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_620(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_546(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = func_620(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			func_628(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_546(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = func_620(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_546(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { func_630(iVar5, iParam1, iParam2) };
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
								func_546(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { func_630(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_546(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { func_630(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { func_630(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { func_630(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { func_630(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { func_630(iVar5, 11, iVar82) };
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
								func_546(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_546(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { func_630(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					func_606(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_622(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_627(iParam0, 8, -1), iParam2);
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
				func_586(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_622(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				func_606(iVar5, iVar85);
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
						iVar3 = func_620(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_546(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!func_563(iParam0, 9, iVar97))
						{
							func_546(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_546(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_546(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = func_627(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_627(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_546(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_546(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_546(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_546(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_547(iParam0, &uVar4))
		{
			func_546(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_546(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_546(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_546(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_546(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_547(int iParam0, var uParam1)//Position - 0x4D6E7
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_627(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_563(iParam0, iVar1, iVar0))
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
















int func_563(int iParam0, int iParam1, int iParam2)//Position - 0x4EC32
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
	Global_68106[1 /*14*/] = { func_630(iVar0, iParam1, iParam2) };
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
				if (!func_563(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_563(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68106[2 /*14*/] = { func_630(iVar0, 14, iVar6) };
									if (Global_68106[2 /*14*/].f_12 == iVar5)
									{
										if (func_563(iParam0, 14, iVar6))
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
						iVar1 = GlobalFunc_6669(iParam0, iVar4);
						Global_68106[2 /*14*/] = { func_630(iVar0, iVar4, iVar1) };
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
			if (!func_563(iParam0, 14, uVar35[iVar34]))
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
			if (GlobalFunc_6729(iVar0, 11, GlobalFunc_6669(iParam0, 11)))
			{
				if (GlobalFunc_6727(iVar0, 4, iParam2, &uVar45))
				{
					return func_563(iParam0, 4, uVar45);
				}
			}
			else if (GlobalFunc_6726(iVar0, 4, iParam2, &uVar45))
			{
				return func_563(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}























void func_586(int iParam0, int iParam1, bool bParam2)//Position - 0x5269F
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_605(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		func_624(iVar1, 1, Global_68104);
	}
	func_587(iParam0, bParam2, 0);
}

void func_587(int iParam0, bool bParam1, bool bParam2)//Position - 0x526E2
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
		bVar15 = func_598(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_595(iParam0);
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
			if (GlobalFunc_8609(iVar18, iVar0))
			{
				if (GlobalFunc_5008(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9230(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8609(123, iVar0))
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
					if (GlobalFunc_8609(iVar36, iVar0))
					{
						if (GlobalFunc_9230(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
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








int func_595(int iParam0)//Position - 0x52CCC
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
				iVar2 = func_627(iParam0, 11, -1);
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
				iVar4 = func_627(iParam0, 11, -1);
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



int func_598(int iParam0)//Position - 0x52E9B
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
						iVar2 = func_627(iParam0, 11, -1);
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
						iVar4 = func_627(iParam0, 8, -1);
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
						iVar6 = func_627(iParam0, 11, -1);
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
						iVar8 = func_627(iParam0, 8, -1);
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







void func_605(int iParam0, int iParam1)//Position - 0x55EF9
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar13 = GlobalFunc_303(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_624(13, 0, Global_68104);
					func_624(14, 0, Global_68104);
					func_624(15, 0, Global_68104);
					func_624(16, 0, Global_68104);
					func_624(71, 0, Global_68104);
					func_624(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						func_624(73, 0, Global_68104);
						func_624(74, 0, Global_68104);
						func_624(75, 0, Global_68104);
						func_624(76, 0, Global_68104);
						func_624(77, 0, Global_68104);
						func_624(78, 0, Global_68104);
						func_624(79, 0, Global_68104);
						func_624(80, 0, Global_68104);
						func_624(81, 0, Global_68104);
						func_624(82, 0, Global_68104);
						func_624(83, 0, Global_68104);
						func_624(84, 0, Global_68104);
						func_624(85, 0, Global_68104);
						func_624(86, 0, Global_68104);
						func_624(90, 0, Global_68104);
						func_624(91, 0, Global_68104);
						func_624(124, 0, Global_68104);
						func_624(125, 0, Global_68104);
						func_624(87, 0, Global_68104);
						func_624(88, 0, Global_68104);
						func_624(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									func_624((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_624(73, 0, Global_68104);
						func_624(74, 0, Global_68104);
						func_624(75, 0, Global_68104);
						func_624(76, 0, Global_68104);
						func_624(77, 0, Global_68104);
						func_624(78, 0, Global_68104);
						func_624(79, 0, Global_68104);
						func_624(80, 0, Global_68104);
						func_624(81, 0, Global_68104);
						func_624(82, 0, Global_68104);
						func_624(83, 0, Global_68104);
						func_624(84, 0, Global_68104);
						func_624(85, 0, Global_68104);
						func_624(92, 0, Global_68104);
						func_624(87, 0, Global_68104);
						func_624(88, 0, Global_68104);
						func_624(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									func_624((129 + iVar31), 0, Global_68104);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						func_624(93, 0, Global_68104);
						func_624(94, 0, Global_68104);
						func_624(95, 0, Global_68104);
						func_624(96, 0, Global_68104);
						func_624(97, 0, Global_68104);
						func_624(98, 0, Global_68104);
						func_624(99, 0, Global_68104);
						func_624(100, 0, Global_68104);
						func_624(101, 0, Global_68104);
						func_624(102, 0, Global_68104);
						func_624(103, 0, Global_68104);
						func_624(104, 0, Global_68104);
						func_624(105, 0, Global_68104);
						func_624(106, 0, Global_68104);
						func_624(107, 0, Global_68104);
						func_624(108, 0, Global_68104);
						func_624(109, 0, Global_68104);
						func_624(110, 0, Global_68104);
						func_624(111, 0, Global_68104);
						func_624(112, 0, Global_68104);
						func_624(113, 0, Global_68104);
						func_624(114, 0, Global_68104);
						func_624(115, 0, Global_68104);
						func_624(116, 0, Global_68104);
						func_624(117, 0, Global_68104);
						func_624(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_624((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_624(93, 0, Global_68104);
						func_624(94, 0, Global_68104);
						func_624(95, 0, Global_68104);
						func_624(96, 0, Global_68104);
						func_624(97, 0, Global_68104);
						func_624(98, 0, Global_68104);
						func_624(99, 0, Global_68104);
						func_624(100, 0, Global_68104);
						func_624(101, 0, Global_68104);
						func_624(102, 0, Global_68104);
						func_624(103, 0, Global_68104);
						func_624(104, 0, Global_68104);
						func_624(105, 0, Global_68104);
						func_624(106, 0, Global_68104);
						func_624(107, 0, Global_68104);
						func_624(108, 0, Global_68104);
						func_624(109, 0, Global_68104);
						func_624(110, 0, Global_68104);
						func_624(111, 0, Global_68104);
						func_624(112, 0, Global_68104);
						func_624(113, 0, Global_68104);
						func_624(114, 0, Global_68104);
						func_624(115, 0, Global_68104);
						func_624(116, 0, Global_68104);
						func_624(117, 0, Global_68104);
						func_624(118, 0, Global_68104);
						func_624(119, 0, Global_68104);
						func_624(120, 0, Global_68104);
						func_624(121, 0, Global_68104);
						func_624(122, 0, Global_68104);
						func_624(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_624((129 + iVar65), 0, Global_68104);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (GlobalFunc_5008(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_624(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}

void func_606(int iParam0, int iParam1)//Position - 0x564F6
{
	int iVar0;
	
	iVar0 = GlobalFunc_9234();
	if (iVar0 != -1)
	{
		if (!func_607(iParam0, iParam1, iVar0))
		{
			func_624(iVar0, 0, Global_68104);
		}
	}
}

int func_607(int iParam0, int iParam1, int iParam2)//Position - 0x56529
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!GlobalFunc_6737(iParam0, iParam1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = GlobalFunc_4913(iParam0, iParam1, 11, 3);
				iVar0 = GlobalFunc_306(iVar1);
			}
			if (iVar1 != -1 && GlobalFunc_284(iVar1, 0) != -1)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_608(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = GlobalFunc_4913(iParam0, iParam1, 11, 4);
				iVar2 = GlobalFunc_306(iVar3);
			}
			if (iVar3 != -1 && GlobalFunc_284(iVar3, 0) != -1)
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_608(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_608(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_608(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x56805
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
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_609(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_609(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_609(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = GlobalFunc_4913(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != joaat("0"))
								{
									return GlobalFunc_5011(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = GlobalFunc_6671(1743, -1, 0);
						}
						return GlobalFunc_5011(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_609(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_609(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_609(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_609(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				if (func_609(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 236)
			{
				if (func_609(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = GlobalFunc_4913(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != joaat("0"))
								{
									return GlobalFunc_5011(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = GlobalFunc_6671(1743, -1, 0);
						}
						return GlobalFunc_5011(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_609(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_609(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_609(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = GlobalFunc_4913(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar13 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != joaat("0"))
								{
									return GlobalFunc_5011(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = GlobalFunc_6671(1743, -1, 0);
						}
						return GlobalFunc_5011(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_609(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_609(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_609(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_609(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				if (func_609(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 25)
			{
				if (func_609(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = GlobalFunc_4913(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar19 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != joaat("0"))
								{
									return GlobalFunc_5011(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = GlobalFunc_6671(1743, -1, 0);
						}
						return GlobalFunc_5011(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

bool func_609(int iParam0, int iParam1)//Position - 0x57065
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_5012(iParam0) == 2903)
	{
		return 0;
	}
	iVar0 = GlobalFunc_7691(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, GlobalFunc_299(iVar1));
}











int func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5A11E
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
		func_621(iParam0, iParam1, iParam2, iParam3, &iVar0);
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
					iVar2 = GlobalFunc_6669(iParam0, 8);
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
							iVar2 = GlobalFunc_6669(iParam0, 8);
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
					iVar2 = GlobalFunc_6669(iParam0, 8);
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
					iVar2 = GlobalFunc_6669(iParam0, 8);
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
					iVar55 = GlobalFunc_6669(iParam0, 11);
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
				iVar62 = GlobalFunc_6669(iParam0, 11);
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

int func_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5B4AC
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
						func_630(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = GlobalFunc_6669(iParam0, 1);
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
						func_630(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = GlobalFunc_6669(iParam0, 1);
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

void func_622(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5B773
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
					iParam2 = GlobalFunc_6669(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_6669(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			func_605(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_607(iVar0, iParam2, 13) && !func_607(iVar0, iParam2, 14)) && !func_607(iVar0, iParam2, 15)) && !func_607(iVar0, iParam2, 16)) && !func_607(iVar0, iParam2, 71)) && !func_607(iVar0, iParam2, 72))
				{
					func_605(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_608(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9232(iParam0, iVar2);
				}
				else
				{
					func_624(iVar2, 1, Global_68104);
				}
			}
		}
	}
}


void func_624(int iParam0, bool bParam1, int iParam2)//Position - 0x5B8F0
{
	if (bParam1)
	{
		if (!GlobalFunc_8609(iParam0, iParam2))
		{
			GlobalFunc_8363(iParam0, 1, iParam2);
		}
	}
	else if (GlobalFunc_8609(iParam0, iParam2))
	{
		GlobalFunc_8363(iParam0, 0, iParam2);
	}
}



int func_627(int iParam0, int iParam1, int iParam2)//Position - 0x5B9E6
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
				if (func_563(iParam0, iParam1, iVar0))
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
				if (func_563(iParam0, iParam1, iVar1))
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
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}

void func_628(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5BA87
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
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
		Global_68106[2 /*14*/] = { func_630(iParam0, iParam1, iParam2) };
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				GlobalFunc_7684(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				GlobalFunc_7684(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				GlobalFunc_7684(Global_2621444, 2, 1, 1, -1);
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
							GlobalFunc_7684(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2542253)
							{
								Global_2542253[iVar1] = iVar2;
								Global_2542364[iVar1] = iVar4;
							}
						}
						else
						{
							func_628(iParam0, GlobalFunc_33(iVar4), uVar3, 0);
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
									func_628(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 3), 1);
								}
								else
								{
									func_628(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 4), 1);
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
				uVar6 = GlobalFunc_6671(iVar5, Global_68104, 0);
				MISC::SET_BIT(&uVar6, Global_68106[2 /*14*/].f_1);
				GlobalFunc_6784(iVar5, uVar6, Global_68104, 1);
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
							func_628(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_68106[2 /*14*/].f_4);
							func_628(iParam0, 8, iVar7, 0);
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
										func_628(iParam0, 8, (241 + iVar30), 0);
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
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_628(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_628(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_68106[2 /*14*/] = { func_630(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = GlobalFunc_6741(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_628(iParam0, 8, iVar8, 0);
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
									func_628(iParam0, 8, (136 + iVar51), 0);
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
						func_628(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}


struct<14> func_630(int iParam0, int iParam1, int iParam2)//Position - 0x5CC78
{
	GlobalFunc_41();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_647(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_631(iParam1, iParam2);
	}
	return Global_68106[0 /*14*/];
}

void func_631(int iParam0, int iParam1)//Position - 0x5CCB5
{
	switch (iParam0)
	{
		case 2:
			GlobalFunc_9733(iParam1);
			break;
		
		case 11:
			func_645(iParam1);
			break;
		
		case 8:
			func_644(iParam1);
			break;
		
		case 9:
			GlobalFunc_9730(iParam1);
			break;
		
		case 3:
			GlobalFunc_9729(iParam1);
			break;
		
		case 4:
			GlobalFunc_9728(iParam1);
			break;
		
		case 6:
			GlobalFunc_9727(iParam1);
			break;
		
		case 1:
			GlobalFunc_9726(iParam1);
			break;
		
		case 7:
			GlobalFunc_9725(iParam1);
			break;
		
		case 10:
			GlobalFunc_9724(iParam1);
			break;
		
		case 14:
			GlobalFunc_9723(iParam1);
			break;
		
		case 12:
			GlobalFunc_9722(iParam1);
			break;
		
		case 5:
			GlobalFunc_9721(iParam1);
			break;
		
		case 0:
			GlobalFunc_9720(iParam1);
			break;
		
		case 13:
			GlobalFunc_9006(iParam1);
			break;
	}
}













void func_644(int iParam0)//Position - 0x63E93
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_68106[0 /*14*/].f_5 = 4;
			GlobalFunc_8991(iVar10, iParam0, 136);
			if (Global_68106[0 /*14*/].f_7 > 0)
			{
				Global_68106[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_68106[0 /*14*/].f_7) * Global_270421.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_609(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2950));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1475[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		if (func_609(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2949));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_1475[7]));
		}
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_609(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2948));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1475[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_270421.f_24));
	GlobalFunc_8356(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_645(int iParam0)//Position - 0x65429
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_609(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2950) * Global_270421.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1475[4]) * Global_270421.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		if (func_609(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2949) * Global_270421.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_1475[7]) * Global_270421.f_24));
		}
	}
	else if (iParam0 == 9)
	{
		if (func_609(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2948) * Global_270421.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1475[9]) * Global_270421.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1475[iVar11]) * Global_270421.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_68106[0 /*14*/].f_5 = 4;
		GlobalFunc_8991(iVar10, iParam0, 256);
		if (Global_68106[0 /*14*/].f_7 > 0)
		{
			Global_68106[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_68106[0 /*14*/].f_7) * Global_270421.f_24));
		}
	}
	else
	{
		GlobalFunc_8356(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}


void func_647(int iParam0, int iParam1)//Position - 0x67A8D
{
	switch (iParam0)
	{
		case 2:
			GlobalFunc_9747(iParam1);
			break;
		
		case 11:
			func_661(iParam1);
			break;
		
		case 8:
			func_660(iParam1);
			break;
		
		case 9:
			GlobalFunc_9744(iParam1);
			break;
		
		case 3:
			GlobalFunc_9743(iParam1);
			break;
		
		case 4:
			GlobalFunc_9742(iParam1);
			break;
		
		case 6:
			GlobalFunc_9741(iParam1);
			break;
		
		case 1:
			GlobalFunc_9740(iParam1);
			break;
		
		case 7:
			GlobalFunc_9739(iParam1);
			break;
		
		case 10:
			GlobalFunc_9738(iParam1);
			break;
		
		case 14:
			GlobalFunc_9737(iParam1);
			break;
		
		case 12:
			GlobalFunc_9736(iParam1);
			break;
		
		case 5:
			GlobalFunc_9735(iParam1);
			break;
		
		case 0:
			GlobalFunc_9734(iParam1);
			break;
		
		case 13:
			GlobalFunc_9007(iParam1);
			break;
	}
}













void func_660(int iParam0)//Position - 0x6EE28
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_609(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2950));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_405[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		if (func_609(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2949));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(60) * Global_262145.f_405[17]));
		}
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_609(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2948));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_405[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[iVar14]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_270421.f_16));
	if (iParam0 >= 241)
	{
		Global_68106[0 /*14*/].f_5 = 3;
		GlobalFunc_8991(iVar10, iParam0, 241);
		if (Global_68106[0 /*14*/].f_7 > 0)
		{
			Global_68106[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_68106[0 /*14*/].f_7) * Global_270421.f_16));
		}
	}
	else
	{
		GlobalFunc_8356(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_661(int iParam0)//Position - 0x71431
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_609(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2950) * Global_270421.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_405[23]) * Global_270421.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		if (func_609(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2949) * Global_270421.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(60) * Global_262145.f_405[17]) * Global_270421.f_16));
		}
	}
	else if (iParam0 == 28)
	{
		if (func_609(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2948) * Global_270421.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_405[28]) * Global_270421.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_405[iVar11]) * Global_270421.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_68106[0 /*14*/].f_5 = 3;
		GlobalFunc_8991(iVar10, iParam0, 237);
		if (Global_68106[0 /*14*/].f_7 > 0)
		{
			Global_68106[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_68106[0 /*14*/].f_7) * Global_270421.f_16));
		}
	}
	else
	{
		GlobalFunc_8356(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}


























int func_687(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x766B8
{
	if (bParam0)
	{
		if (!bParam3)
		{
			switch (iLocal_3222)
			{
				case 0:
					GlobalFunc_718(&uLocal_707, joaat("p_ing_coffeecup_01"));
					iLocal_3222++;
					break;
				
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(joaat("p_ing_coffeecup_01")))
					{
						GlobalFunc_718(&uLocal_707, joaat("prop_npc_phone"));
						iLocal_3222++;
					}
					break;
				
				case 2:
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
					{
						GlobalFunc_718(&uLocal_707, joaat("prop_chair_01a"));
						iLocal_3222++;
					}
					break;
				
				case 3:
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_chair_01a")))
					{
						GlobalFunc_719(&uLocal_707, cLocal_266);
						iLocal_3222++;
					}
					break;
				
				case 4:
					if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_266))
					{
						iLocal_3222++;
					}
					break;
			}
		}
		else if (iLocal_3222 < 5)
		{
			iLocal_3222 = 5;
		}
		if (iLocal_3222 >= 5)
		{
			if (GlobalFunc_7698())
			{
				switch (iLocal_3222)
				{
					case 5:
						GlobalFunc_8368();
						iLocal_3222++;
						break;
					
					case 6:
						if (GlobalFunc_8367())
						{
							iLocal_3222 = 8;
						}
						break;
				}
			}
			else if (iLocal_3222 <= 5)
			{
				iLocal_3222 = 8;
			}
		}
	}
	else if (!bParam2)
	{
		switch (iLocal_3222)
		{
			case 0:
				GlobalFunc_719(&uLocal_707, cLocal_263);
				iLocal_3222++;
				break;
			
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_263))
				{
					GlobalFunc_718(&uLocal_707, joaat("prop_npc_phone"));
					iLocal_3222++;
				}
				break;
			
			case 2:
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
				{
					GlobalFunc_736(&uLocal_707, iLocal_3084, 31, 2);
					iLocal_3222++;
				}
				break;
			
			case 3:
				if (WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_3084))
				{
					GlobalFunc_718(&uLocal_707, joaat("prop_binoc_01"));
					iLocal_3222++;
				}
				break;
			
			case 4:
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_binoc_01")))
				{
					iLocal_3222 = 8;
				}
				break;
		}
	}
	else if (iLocal_3222 < 8)
	{
		iLocal_3222 = 8;
	}
	if (iLocal_3222 >= 8)
	{
		if (bParam1)
		{
			switch (iLocal_3222)
			{
				case 8:
					GlobalFunc_734(&uLocal_707);
					iLocal_3222++;
					break;
				
				case 9:
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GlobalFunc_718(&uLocal_707, iLocal_234);
						iLocal_3222++;
					}
					break;
				
				case 10:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_234))
					{
						GlobalFunc_718(&uLocal_707, iLocal_235);
						iLocal_3222++;
					}
					break;
				
				case 11:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_235))
					{
						GlobalFunc_718(&uLocal_707, iLocal_236);
						iLocal_3222++;
					}
					break;
				
				case 12:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_236))
					{
						GlobalFunc_718(&uLocal_707, joaat("prop_cs_ciggy_01b"));
						iLocal_3222++;
					}
					break;
				
				case 13:
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_ciggy_01b")))
					{
						GlobalFunc_718(&uLocal_707, joaat("p_fag_packet_01_s"));
						iLocal_3222++;
					}
					break;
				
				case 14:
					if (STREAMING::HAS_MODEL_LOADED(joaat("p_fag_packet_01_s")))
					{
						GlobalFunc_718(&uLocal_707, joaat("prop_fbi3_coffee_table"));
						iLocal_3222++;
					}
					break;
				
				case 15:
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_fbi3_coffee_table")))
					{
						GlobalFunc_719(&uLocal_707, "MISSFBI3_PARTY");
						iLocal_3222++;
					}
					break;
				
				case 16:
					if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY"))
					{
						GlobalFunc_719(&uLocal_707, "MISSFBI3_PARTY_B");
						iLocal_3222++;
					}
					break;
				
				case 17:
					if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_B"))
					{
						GlobalFunc_719(&uLocal_707, "MISSFBI3_PARTY_C");
						iLocal_3222++;
					}
					break;
				
				case 18:
					if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_C"))
					{
						GlobalFunc_719(&uLocal_707, "MISSFBI3_PARTY_D");
						iLocal_3222++;
					}
					break;
				
				case 19:
					if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_D"))
					{
						GlobalFunc_719(&uLocal_707, "MISSFBI3_PARTY_E");
						iLocal_3222++;
					}
					break;
				
				case 20:
					if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_PARTY_E"))
					{
						GlobalFunc_719(&uLocal_707, cLocal_260);
						iLocal_3222++;
					}
					break;
				
				case 21:
					if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_260))
					{
						GlobalFunc_724(&uLocal_707, "FBI_03_Panic");
						iLocal_3222++;
					}
					break;
				
				case 22:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_03_Panic", 0))
					{
						iLocal_3222 = 23;
					}
					break;
			}
		}
		else if (iLocal_3222 < 23)
		{
			iLocal_3222 = 23;
		}
	}
	if (iLocal_3222 == 23)
	{
		return 1;
	}
	return 0;
}





int func_692(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)//Position - 0x76C86
{
	if (GlobalFunc_105(Param1) || GlobalFunc_105(Param4))
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if ((GlobalFunc_100(uParam0->f_863.f_4, Param1) && GlobalFunc_100(uParam0->f_863.f_7, Param4)) && uParam0->f_863.f_10 == fParam7)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
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
		STREAMING::NEW_LOAD_SCENE_START(Param1, Param4, fParam7, iParam8);
		uParam0->f_863 = 1;
		uParam0->f_863.f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_863.f_4 = { Param1 };
		uParam0->f_863.f_7 = { Param4 };
		uParam0->f_863.f_10 = fParam7;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_693()//Position - 0x76D6A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	struct<24> Var14;
	char cVar40[64];
	char cVar56[64];
	char cVar72[64];
	struct<21> Var88;
	struct<21> Var110;
	struct<21> Var132;
	struct<21> Var154;
	struct<21> Var176;
	struct<21> Var198;
	struct<21> Var220;
	struct<21> Var242;
	struct<21> Var264;
	struct<21> Var286;
	struct<21> Var308;
	struct<21> Var330;
	float fVar352;
	int iVar353;
	struct<21> Var354;
	struct<21> Var376;
	struct<21> Var398;
	struct<21> Var420;
	struct<21> Var442;
	struct<21> Var464;
	struct<21> Var486;
	struct<21> Var508;
	struct<21> Var530;
	struct<21> Var552;
	struct<21> Var574;
	struct<21> Var596;
	struct<21> Var618;
	struct<21> Var640;
	struct<21> Var662;
	char cVar684[64];
	char cVar700[64];
	float fVar716;
	float fVar717;
	struct<3> Var718;
	struct<3> Var721;
	float fVar724;
	struct<24> Var725;
	char cVar751[192];
	
	if (iLocal_2721)
	{
		return 0;
	}
	if (2 != iLocal_2755)
	{
		PAD::_0x7F4724035FDCA1DD(2);
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = 0f;
	fVar9 = 0f;
	fVar10 = 0f;
	switch (iLocal_2680)
	{
		case 0:
			iVar0 = iLocal_2755;
			func_411();
			switch (iVar0)
			{
				case 5:
					if (iLocal_2654)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_WRENCH"))
						{
							if (!func_205(iLocal_3093[9]))
							{
								if (func_393(9, 1, 0, 1148846080, -998637568, 0, 0))
								{
									if (!GlobalFunc_74(sLocal_318) && !bLocal_2691)
									{
										GlobalFunc_Display_Help_Text(sLocal_318);
									}
									iLocal_2654 = 0;
								}
							}
						}
					}
					else if (func_407(229, 1, 1))
					{
						fVar8 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[9]);
						if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1872971840))
						{
							if (func_393(6, 0, 0, 1148846080, -998637568, 0, 0))
							{
								func_406(1, 5, 1);
								func_25(1, 1, 1);
								switch (iLocal_681)
								{
									case 3:
										func_260("F3_ARM1", "", 0);
										break;
									
									case 5:
										func_260("F3_ARM2", "", 0);
										break;
									
									case 7:
										func_260("F3_ARM3", "", 0);
										break;
									
									case 9:
										func_260("F3_ARM4", "", 0);
										break;
								}
								bVar13 = true;
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1194540231))
						{
							if (func_393(8, 0, 0, 1148846080, -998637568, 0, 0))
							{
								func_406(1, 5, 0);
								func_25(1, 1, 1);
								switch (iLocal_681)
								{
									case 3:
										func_260("F3_KNEE1", "", 0);
										break;
									
									case 5:
										func_260("F3_KNEE2", "", 0);
										break;
									
									case 7:
										func_260("F3_KNEE3", "", 0);
										break;
									
									case 9:
										func_260("F3_KNEE1", "", 0);
										break;
								}
								bVar13 = true;
							}
						}
						else if (func_393(7, 0, 0, 1148846080, -998637568, 0, 0))
						{
							func_406(1, 5, 2);
							func_25(1, 1, 1);
							switch (iLocal_681)
							{
								case 3:
									func_260("F3_BALLS1", "", 0);
									break;
								
								case 5:
									func_260("F3_BALLS2", "", 0);
									break;
								
								case 7:
									func_260("F3_BALLS3", "", 0);
									break;
								
								case 9:
									func_260("F3_BALLS1", "", 0);
									break;
							}
							bVar13 = true;
						}
						if (bVar13)
						{
							func_700(0.5f, 3000, 2500, 7000);
							GlobalFunc_553(297);
							iLocal_2654 = 1;
							iLocal_2680++;
						}
					}
					else if (GlobalFunc_5170())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
						{
							func_260("F3_NOWREN", "", 1);
						}
					}
					break;
				
				case 2:
					switch (iLocal_2681)
					{
						case 0:
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_TOOTHPULL"))
							{
								if ((!func_205(iLocal_3093[15]) && !func_205(iLocal_3093[16])) && !func_205(iLocal_3093[17]))
								{
									if (iLocal_2654)
									{
										if (func_393(15, 1, 0f, 1000f, -8f, 0, 0))
										{
											iLocal_2682 = MISC::GET_GAME_TIMER();
											iLocal_2683 = 14000;
											iLocal_2654 = 0;
										}
									}
									else if (func_393(17, 1, 0f, 1000f, -8f, 0, 0))
									{
										iLocal_2682 = MISC::GET_GAME_TIMER();
										iLocal_2683 = 14000;
									}
								}
								else
								{
									if (!GlobalFunc_74(sLocal_319) && !bLocal_2691)
									{
										GlobalFunc_Display_Help_Text(sLocal_319);
									}
									if (func_407(229, 0, 1))
									{
										if (func_205(iLocal_3093[15]))
										{
											if (func_393(12, 0, 0f, 1.5f, -8f, 0, 0))
											{
												iLocal_2657 = 0;
												iLocal_2681++;
											}
										}
										else if (func_205(iLocal_3093[17]))
										{
											if (func_393(18, 0, 0f, 8f, -8f, 0, 0))
											{
												iLocal_2657 = 0;
												iLocal_2681++;
											}
										}
									}
									else if (GlobalFunc_5170())
									{
										if (func_205(iLocal_3093[15]))
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
											{
												func_260("F3_NOPLI", "", 1);
											}
										}
										else if (func_205(iLocal_3093[17]))
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 1000)
											{
												func_260("F3_HEAD", "", 1);
											}
										}
									}
								}
							}
							break;
						
						case 1:
							if (func_205(iLocal_3093[12]))
							{
								if (iLocal_2764 == 0)
								{
									if (GlobalFunc_5170())
									{
										func_260("F3_INMOUTH", 0, 0);
										iLocal_2764++;
									}
								}
								if (func_206(12, 0.949f, 1f))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
									{
										func_698();
									}
								}
								if (func_206(12, 0.949f, 1f))
								{
									if ((GlobalFunc_111() && AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_3045)) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_3045))
									{
										GlobalFunc_4956();
									}
									if (!iLocal_2657)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Teeth_Initial_Pain", iLocal_3045, "FBI_03_Torture_Sounds", 0, 0);
										iLocal_2657 = 1;
									}
								}
							}
							if (func_205(iLocal_3093[18]))
							{
								if (func_206(18, 0.496f, 1f))
								{
									if ((GlobalFunc_111() && AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_3045)) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_3045))
									{
										GlobalFunc_4956();
									}
									if (!iLocal_2657)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Teeth_Initial_Pain", iLocal_3045, "FBI_03_Torture_Sounds", 0, 0);
										iLocal_2657 = 1;
									}
								}
							}
							if (!func_205(iLocal_3093[12]) && !func_205(iLocal_3093[18]))
							{
								Var14.f_23 = 1;
								Var88.f_4 = 1065353216;
								Var88.f_5 = 1065353216;
								Var88.f_9 = 1065353216;
								Var88.f_10 = 1065353216;
								Var88.f_14 = 1065353216;
								Var88.f_15 = 1065353216;
								Var88.f_17 = 1040187392;
								Var88.f_18 = 1040187392;
								Var88.f_19 = -1;
								Var110.f_4 = 1065353216;
								Var110.f_5 = 1065353216;
								Var110.f_9 = 1065353216;
								Var110.f_10 = 1065353216;
								Var110.f_14 = 1065353216;
								Var110.f_15 = 1065353216;
								Var110.f_17 = 1040187392;
								Var110.f_18 = 1040187392;
								Var110.f_19 = -1;
								Var132.f_4 = 1065353216;
								Var132.f_5 = 1065353216;
								Var132.f_9 = 1065353216;
								Var132.f_10 = 1065353216;
								Var132.f_14 = 1065353216;
								Var132.f_15 = 1065353216;
								Var132.f_17 = 1040187392;
								Var132.f_18 = 1040187392;
								Var132.f_19 = -1;
								Var154.f_4 = 1065353216;
								Var154.f_5 = 1065353216;
								Var154.f_9 = 1065353216;
								Var154.f_10 = 1065353216;
								Var154.f_14 = 1065353216;
								Var154.f_15 = 1065353216;
								Var154.f_17 = 1040187392;
								Var154.f_18 = 1040187392;
								Var154.f_19 = -1;
								Var176.f_4 = 1065353216;
								Var176.f_5 = 1065353216;
								Var176.f_9 = 1065353216;
								Var176.f_10 = 1065353216;
								Var176.f_14 = 1065353216;
								Var176.f_15 = 1065353216;
								Var176.f_17 = 1040187392;
								Var176.f_18 = 1040187392;
								Var176.f_19 = -1;
								Var198.f_4 = 1065353216;
								Var198.f_5 = 1065353216;
								Var198.f_9 = 1065353216;
								Var198.f_10 = 1065353216;
								Var198.f_14 = 1065353216;
								Var198.f_15 = 1065353216;
								Var198.f_17 = 1040187392;
								Var198.f_18 = 1040187392;
								Var198.f_19 = -1;
								Var220.f_4 = 1065353216;
								Var220.f_5 = 1065353216;
								Var220.f_9 = 1065353216;
								Var220.f_10 = 1065353216;
								Var220.f_14 = 1065353216;
								Var220.f_15 = 1065353216;
								Var220.f_17 = 1040187392;
								Var220.f_18 = 1040187392;
								Var220.f_19 = -1;
								Var242.f_4 = 1065353216;
								Var242.f_5 = 1065353216;
								Var242.f_9 = 1065353216;
								Var242.f_10 = 1065353216;
								Var242.f_14 = 1065353216;
								Var242.f_15 = 1065353216;
								Var242.f_17 = 1040187392;
								Var242.f_18 = 1040187392;
								Var242.f_19 = -1;
								Var264.f_4 = 1065353216;
								Var264.f_5 = 1065353216;
								Var264.f_9 = 1065353216;
								Var264.f_10 = 1065353216;
								Var264.f_14 = 1065353216;
								Var264.f_15 = 1065353216;
								Var264.f_17 = 1040187392;
								Var264.f_18 = 1040187392;
								Var264.f_19 = -1;
								Var286.f_4 = 1065353216;
								Var286.f_5 = 1065353216;
								Var286.f_9 = 1065353216;
								Var286.f_10 = 1065353216;
								Var286.f_14 = 1065353216;
								Var286.f_15 = 1065353216;
								Var286.f_17 = 1040187392;
								Var286.f_18 = 1040187392;
								Var286.f_19 = -1;
								Var308.f_4 = 1065353216;
								Var308.f_5 = 1065353216;
								Var308.f_9 = 1065353216;
								Var308.f_10 = 1065353216;
								Var308.f_14 = 1065353216;
								Var308.f_15 = 1065353216;
								Var308.f_17 = 1040187392;
								Var308.f_18 = 1040187392;
								Var308.f_19 = -1;
								Var330.f_4 = 1065353216;
								Var330.f_5 = 1065353216;
								Var330.f_9 = 1065353216;
								Var330.f_10 = 1065353216;
								Var330.f_14 = 1065353216;
								Var330.f_15 = 1065353216;
								Var330.f_17 = 1040187392;
								Var330.f_18 = 1040187392;
								Var330.f_19 = -1;
								if (func_394(11, &Var14))
								{
									Var88 = 1;
									Var88.f_20 = 1025;
									Var88.f_1 = Var14;
									Var88.f_2 = Var14.f_1;
									Var88.f_5 = 1f;
									Var132 = 1;
									Var132.f_20 = 1;
									Var132.f_1 = Var14;
									Var132.f_2 = Var14.f_5;
									Var132.f_5 = 1f;
									StringCopy(&cVar40, Var14.f_2, 64);
									StringConCat(&cVar40, "_facial", 64);
									Var176 = 1;
									Var176.f_20 = 1025;
									Var176.f_1 = Var14;
									Var176.f_2 = Var14.f_2;
									Var176.f_5 = 1f;
									Var220 = 1;
									Var220.f_20 = 1057;
									Var220.f_1 = Var14;
									Var220.f_2 = GlobalFunc_444(&cVar40);
									Var220.f_5 = 1f;
								}
								if (func_394(10, &Var14))
								{
									Var110 = 1;
									Var110.f_20 = 1025;
									Var110.f_1 = Var14;
									Var110.f_2 = Var14.f_1;
									Var110.f_5 = 0f;
									Var154 = 1;
									Var154.f_20 = 1;
									Var154.f_1 = Var14;
									Var154.f_2 = Var14.f_5;
									Var154.f_5 = 0f;
									StringCopy(&cVar40, Var14.f_2, 64);
									StringConCat(&cVar40, "_facial", 64);
									Var198 = 1;
									Var198.f_20 = 1025;
									Var198.f_1 = Var14;
									Var198.f_2 = Var14.f_2;
									Var198.f_5 = 0f;
									Var242 = 1;
									Var242.f_20 = 1057;
									Var242.f_1 = Var14;
									Var242.f_2 = GlobalFunc_444(&cVar40);
									Var242.f_5 = 0f;
									StringCopy(&cVar56, Var14.f_4, 64);
									StringCopy(&cVar72, Var14, 64);
									Var264 = 1;
									Var264.f_20 = 1;
									Var264.f_1 = Var14;
									Var264.f_2 = Var14.f_9;
									Var264.f_5 = 1f;
									Var308 = 1;
									Var308.f_20 = 1;
									Var308.f_1 = Var14;
									Var308.f_2 = Var14.f_10;
									Var308.f_5 = 1f;
									Var286 = 1;
									Var286.f_20 = 1;
									Var286.f_1 = Var14;
									Var286.f_2 = Var14.f_9;
									Var286.f_5 = 0f;
									Var330 = 1;
									Var330.f_20 = 1;
									Var330.f_1 = Var14;
									Var330.f_2 = Var14.f_10;
									Var330.f_5 = 0f;
								}
								TASK::TASK_SCRIPTED_ANIMATION(func_181(), &Var88, &Var110, &uLocal_2628, 0.125f, 0.125f);
								TASK::TASK_SCRIPTED_ANIMATION(iLocal_3045, &Var176, &Var198, &uLocal_2628, 0.125f, 0.125f);
								TASK::TASK_SCRIPTED_ANIMATION(iLocal_3045, &Var220, &Var242, &uLocal_2628, 0.125f, 0.125f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_181(), 0, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3045, 0, 1);
								func_47(&(Local_384[2 /*36*/]), -8f);
								if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_384[2 /*36*/], func_181()))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_384[2 /*36*/]))
									{
										ENTITY::DETACH_ENTITY(Local_384[2 /*36*/], 1, 1);
									}
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[2 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								TASK::PLAY_ENTITY_SCRIPTED_ANIM(Local_384[2 /*36*/], &Var132, &Var154, &uLocal_2628, 0.125f, 0.125f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_384[2 /*36*/]);
								if (iLocal_2688)
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3081, -8f, 0);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3082, -8f, 0);
									iLocal_2688 = 0;
								}
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3081))
								{
									ENTITY::DETACH_ENTITY(iLocal_3081, 1, 1);
								}
								TASK::PLAY_ENTITY_SCRIPTED_ANIM(iLocal_3081, &Var264, &Var286, &uLocal_2628, 0.125f, 0.125f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3081);
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3082))
								{
									ENTITY::DETACH_ENTITY(iLocal_3082, 1, 1);
								}
								TASK::PLAY_ENTITY_SCRIPTED_ANIM(iLocal_3082, &Var308, &Var330, &uLocal_2628, 0.125f, 0.125f);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3082);
								if (!CAM::DOES_CAM_EXIST(uLocal_3149))
								{
									uLocal_3149 = CAM::CREATE_CAMERA(964613260, 0);
									CAM::SET_CAM_DEBUG_NAME(uLocal_3149, "Torture Cam");
								}
								CAM::PLAY_CAM_ANIM(uLocal_3149, &cVar56, &cVar72, Local_122, Local_125, 1, 2);
								CAM::SET_CAM_ACTIVE(uLocal_3149, 1);
								if (!CAM::IS_SCRIPT_GLOBAL_SHAKING())
								{
									CAM::ANIMATED_SHAKE_SCRIPT_GLOBAL("SHAKE_CAM_medium", "medium", "", fLocal_2794);
								}
								iLocal_2620 = 11;
								bLocal_2792 = true;
								func_700(0.5f, 100, 500, 7000);
								iLocal_2681++;
							}
							break;
						
						case 2:
							if (GlobalFunc_709(func_181(), -2017877118, 1))
							{
								if (!func_407(229, 0, 1))
								{
									if (func_393(16, 0, 0f, 8f, -8f, 0, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(func_181()) && !PED::IS_PED_INJURED(func_181()))
										{
											if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_181()))
											{
												AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_181());
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
										{
											if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
											{
												AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
											}
										}
										if (iLocal_3086)
										{
											if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3085))
											{
												GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3085, 0);
											}
											iLocal_3086 = 0;
										}
										func_260("F3_HEAD", "", 1);
										bLocal_2792 = false;
										fLocal_2791 = 0f;
										iLocal_2681 = 0;
									}
								}
								else
								{
									bLocal_2619 = true;
									if (!bLocal_2691)
									{
										if (!PAD::_IS_USING_KEYBOARD(2))
										{
											if (!GlobalFunc_74(sLocal_320))
											{
												GlobalFunc_Display_Help_Text(sLocal_320);
											}
										}
										else if (!GlobalFunc_74("HLP_PLIER2_KM"))
										{
											GlobalFunc_Display_Help_Text("HLP_PLIER2_KM");
										}
									}
									func_696(&iVar1, &iVar2, &iVar3, &iVar4, 0, 1);
									fVar5 = SYSTEM::TO_FLOAT((iVar3 - iLocal_2671));
									fVar6 = SYSTEM::TO_FLOAT((iVar4 - iLocal_2672));
									fVar11 = SYSTEM::SQRT(((SYSTEM::TO_FLOAT(iVar3) * SYSTEM::TO_FLOAT(iVar3)) + (SYSTEM::TO_FLOAT(iVar4) * SYSTEM::TO_FLOAT(iVar4))));
									if (fVar11 > 100f || PAD::_IS_USING_KEYBOARD(0))
									{
										fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar4), SYSTEM::TO_FLOAT(iLocal_2671), SYSTEM::TO_FLOAT(iLocal_2672));
									}
									else
									{
										fVar12 = 0f;
									}
									iLocal_2671 = iVar3;
									iLocal_2672 = iVar4;
									if (((fVar11 > 100f || PAD::_IS_USING_KEYBOARD(0)) && fVar12 > (360f * SYSTEM::TIMESTEP())) && ((((iVar4 > 0 && fVar5 < 0f) || (iVar3 > 0 && fVar6 > 0f)) || (iVar4 < 0 && fVar5 > 0f)) || (iVar3 < 0 && fVar6 < 0f)))
									{
										fLocal_2791 = (fLocal_2791 + (0.5f * SYSTEM::TIMESTEP()));
									}
									else
									{
										fLocal_2791 = (fLocal_2791 - (0.25f * SYSTEM::TIMESTEP()));
									}
									fLocal_2791 = GlobalFunc_253(fLocal_2791, 0f, 1f);
									TASK::SET_ANIM_WEIGHT(func_181(), fLocal_2791, 1, 0, 0);
									TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2791, 1, 0, 0);
									TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2791, 1, 0, 1);
									TASK::SET_ANIM_WEIGHT(iLocal_3081, fLocal_2791, 1, 0, 1);
									TASK::SET_ANIM_WEIGHT(iLocal_3082, fLocal_2791, 1, 0, 1);
									TASK::SET_ANIM_WEIGHT(Local_384[2 /*36*/], fLocal_2791, 1, 0, 1);
									if (fLocal_2791 > 0.5f)
									{
										fLocal_2774 = (fLocal_2774 + (fLocal_2791 * SYSTEM::TIMESTEP()));
										fLocal_2775 = (fLocal_2775 - ((25f - 5f) * ((fLocal_2791 * SYSTEM::TIMESTEP()) / 5f)));
										if (!iLocal_3086)
										{
											iLocal_3085 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(sLocal_309, iLocal_3045, 0f, 0.1f, 0f, Local_3161, 31086, 1065353216, 0, 0, 0);
											iLocal_3086 = 1;
										}
									}
									else if (iLocal_3086)
									{
										if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3085))
										{
											GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3085, 0);
										}
										iLocal_3086 = 0;
									}
									fVar9 = SYSTEM::POW((fLocal_2774 / 5f), 3f);
									fVar9 = (fVar9 * 0.6f);
									fVar10 = (SYSTEM::TO_FLOAT(iVar3) * fVar9);
									if (iVar3 > 0 && fVar10 < 5f)
									{
										fVar10 = 5f;
									}
									if (iVar3 < 0 && fVar10 > -5f)
									{
										fVar10 = -5f;
									}
									fVar10 = (((fVar10 / 128f) * 30f) + 30f);
									if (fLocal_2677 != fVar10)
									{
										fLocal_2677 = fVar10;
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3142, "SET_TEETH_ANGLE");
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_2677);
										GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									}
									fVar9 = (fVar9 * 100f);
									if (fLocal_2676 != fVar9)
									{
										fLocal_2676 = fVar9;
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3142, "SET_TEETH_DEPTH");
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_2676);
										GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									}
									if (fLocal_2774 >= 5f)
									{
										fVar352 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);
										if (fVar352 >= 0.5f)
										{
											iVar353 = 13;
										}
										else
										{
											iVar353 = 14;
										}
										if (func_393(iVar353, 0, 0f, 1000f, -4f, 0, 0))
										{
											TASK::CLEAR_PED_SECONDARY_TASK(iLocal_3045);
											if (iLocal_3086)
											{
												if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3085))
												{
													GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3085, 0);
												}
												iLocal_3086 = 0;
											}
											if (iLocal_3086)
											{
												if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3085))
												{
													GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3085, 0);
												}
												iLocal_3086 = 0;
											}
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3142, "SET_TEETH_ANGLE");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(30f);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3142, "SET_TEETH_DEPTH");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											func_25(1, 1, 1);
											if (ENTITY::DOES_ENTITY_EXIST(func_181()) && !PED::IS_PED_INJURED(func_181()))
											{
												if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_181()))
												{
													AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_181());
												}
											}
											iLocal_2770++;
											switch (iLocal_681)
											{
												case 3:
													func_260("F3_PHIT1", "", 1);
													break;
												
												case 5:
													func_260("F3_PHIT2", "", 1);
													break;
												
												case 7:
													func_260("F3_PHIT3", "", 1);
													break;
												
												case 9:
													func_260("F3_PHIT4", "", 1);
													break;
											}
											GlobalFunc_553(296);
											fLocal_2774 = 0f;
											iLocal_2654 = 1;
											bLocal_2792 = false;
											fLocal_2791 = 0f;
											iLocal_2680++;
										}
									}
									else if (fLocal_2791 > 0.25f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(func_181()) && !PED::IS_PED_INJURED(func_181()))
										{
											if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(func_181()))
											{
												GlobalFunc_5105();
											}
											else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_181()))
											{
												GlobalFunc_5653(func_181(), "FBI3_BUAA", "Trevor", 6);
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
										{
											if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_3045))
											{
												GlobalFunc_4956();
											}
											else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
											{
												GlobalFunc_5653(iLocal_3045, "Toothpull_pain", "MisterK", 6);
											}
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
									{
										if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
										{
											GlobalFunc_5653(iLocal_3045, "Pliers_Panting", "MisterK", 6);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 3:
					switch (iLocal_2681)
					{
						case 0:
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_electrocute"))
							{
								if (!func_205(iLocal_3093[21]))
								{
									Var354.f_4 = 1065353216;
									Var354.f_5 = 1065353216;
									Var354.f_9 = 1065353216;
									Var354.f_10 = 1065353216;
									Var354.f_14 = 1065353216;
									Var354.f_15 = 1065353216;
									Var354.f_17 = 1040187392;
									Var354.f_18 = 1040187392;
									Var354.f_19 = -1;
									Var376.f_4 = 1065353216;
									Var376.f_5 = 1065353216;
									Var376.f_9 = 1065353216;
									Var376.f_10 = 1065353216;
									Var376.f_14 = 1065353216;
									Var376.f_15 = 1065353216;
									Var376.f_17 = 1040187392;
									Var376.f_18 = 1040187392;
									Var376.f_19 = -1;
									Var398.f_4 = 1065353216;
									Var398.f_5 = 1065353216;
									Var398.f_9 = 1065353216;
									Var398.f_10 = 1065353216;
									Var398.f_14 = 1065353216;
									Var398.f_15 = 1065353216;
									Var398.f_17 = 1040187392;
									Var398.f_18 = 1040187392;
									Var398.f_19 = -1;
									Var420.f_4 = 1065353216;
									Var420.f_5 = 1065353216;
									Var420.f_9 = 1065353216;
									Var420.f_10 = 1065353216;
									Var420.f_14 = 1065353216;
									Var420.f_15 = 1065353216;
									Var420.f_17 = 1040187392;
									Var420.f_18 = 1040187392;
									Var420.f_19 = -1;
									Var442.f_4 = 1065353216;
									Var442.f_5 = 1065353216;
									Var442.f_9 = 1065353216;
									Var442.f_10 = 1065353216;
									Var442.f_14 = 1065353216;
									Var442.f_15 = 1065353216;
									Var442.f_17 = 1040187392;
									Var442.f_18 = 1040187392;
									Var442.f_19 = -1;
									Var464.f_4 = 1065353216;
									Var464.f_5 = 1065353216;
									Var464.f_9 = 1065353216;
									Var464.f_10 = 1065353216;
									Var464.f_14 = 1065353216;
									Var464.f_15 = 1065353216;
									Var464.f_17 = 1040187392;
									Var464.f_18 = 1040187392;
									Var464.f_19 = -1;
									Var486.f_4 = 1065353216;
									Var486.f_5 = 1065353216;
									Var486.f_9 = 1065353216;
									Var486.f_10 = 1065353216;
									Var486.f_14 = 1065353216;
									Var486.f_15 = 1065353216;
									Var486.f_17 = 1040187392;
									Var486.f_18 = 1040187392;
									Var486.f_19 = -1;
									Var508.f_4 = 1065353216;
									Var508.f_5 = 1065353216;
									Var508.f_9 = 1065353216;
									Var508.f_10 = 1065353216;
									Var508.f_14 = 1065353216;
									Var508.f_15 = 1065353216;
									Var508.f_17 = 1040187392;
									Var508.f_18 = 1040187392;
									Var508.f_19 = -1;
									Var530.f_4 = 1065353216;
									Var530.f_5 = 1065353216;
									Var530.f_9 = 1065353216;
									Var530.f_10 = 1065353216;
									Var530.f_14 = 1065353216;
									Var530.f_15 = 1065353216;
									Var530.f_17 = 1040187392;
									Var530.f_18 = 1040187392;
									Var530.f_19 = -1;
									Var552.f_4 = 1065353216;
									Var552.f_5 = 1065353216;
									Var552.f_9 = 1065353216;
									Var552.f_10 = 1065353216;
									Var552.f_14 = 1065353216;
									Var552.f_15 = 1065353216;
									Var552.f_17 = 1040187392;
									Var552.f_18 = 1040187392;
									Var552.f_19 = -1;
									Var574.f_4 = 1065353216;
									Var574.f_5 = 1065353216;
									Var574.f_9 = 1065353216;
									Var574.f_10 = 1065353216;
									Var574.f_14 = 1065353216;
									Var574.f_15 = 1065353216;
									Var574.f_17 = 1040187392;
									Var574.f_18 = 1040187392;
									Var574.f_19 = -1;
									Var596.f_4 = 1065353216;
									Var596.f_5 = 1065353216;
									Var596.f_9 = 1065353216;
									Var596.f_10 = 1065353216;
									Var596.f_14 = 1065353216;
									Var596.f_15 = 1065353216;
									Var596.f_17 = 1040187392;
									Var596.f_18 = 1040187392;
									Var596.f_19 = -1;
									Var618.f_4 = 1065353216;
									Var618.f_5 = 1065353216;
									Var618.f_9 = 1065353216;
									Var618.f_10 = 1065353216;
									Var618.f_14 = 1065353216;
									Var618.f_15 = 1065353216;
									Var618.f_17 = 1040187392;
									Var618.f_18 = 1040187392;
									Var618.f_19 = -1;
									Var640.f_4 = 1065353216;
									Var640.f_5 = 1065353216;
									Var640.f_9 = 1065353216;
									Var640.f_10 = 1065353216;
									Var640.f_14 = 1065353216;
									Var640.f_15 = 1065353216;
									Var640.f_17 = 1040187392;
									Var640.f_18 = 1040187392;
									Var640.f_19 = -1;
									Var662.f_4 = 1065353216;
									Var662.f_5 = 1065353216;
									Var662.f_9 = 1065353216;
									Var662.f_10 = 1065353216;
									Var662.f_14 = 1065353216;
									Var662.f_15 = 1065353216;
									Var662.f_17 = 1040187392;
									Var662.f_18 = 1040187392;
									Var662.f_19 = -1;
									Var354 = 1;
									Var354.f_20 = 1025;
									Var420 = 1;
									Var420.f_20 = 1025;
									Var486 = 1;
									Var486.f_20 = 1057;
									Var552 = 1;
									Var552.f_20 = 1;
									Var618 = 1;
									Var618.f_20 = 1;
									Var376 = 2;
									Var376.f_20 = 1025;
									Var442 = 2;
									Var442.f_20 = 1025;
									Var508 = 2;
									Var508.f_20 = 1057;
									Var574 = 2;
									Var574.f_20 = 1;
									Var640 = 2;
									Var640.f_20 = 1;
									Var398 = 1;
									Var398.f_20 = 1025;
									Var464 = 1;
									Var464.f_20 = 1025;
									Var530 = 1;
									Var530.f_20 = 1057;
									Var596 = 1;
									Var596.f_20 = 1;
									Var662 = 1;
									Var662.f_20 = 1;
									StringCopy(&cVar700, "MISSFBI3_electrocute", 64);
									StringCopy(&cVar684, "Clamp_Wait_Loop_Cam", 64);
									Var354.f_1 = "MISSFBI3_electrocute";
									Var354.f_2 = "Clamp_Wait_Loop_Player";
									Var420.f_1 = "MISSFBI3_electrocute";
									Var420.f_2 = "Clamp_Wait_Loop_Victim";
									Var486.f_1 = "MISSFBI3_electrocute";
									Var486.f_2 = "Clamp_Wait_Loop_Victim_facial";
									Var486.f_5 = 1f;
									Var552.f_1 = "MISSFBI3_electrocute";
									Var552.f_2 = "Clamp_Wait_Loop_l_clip";
									Var618.f_1 = "MISSFBI3_electrocute";
									Var618.f_2 = "Clamp_Wait_Loop_r_clip";
									Var376.f_1 = "MISSFBI3_electrocute";
									Var376.f_2 = "Clamp_Left_Loop_Player";
									Var376.f_5 = 0f;
									Var442.f_1 = "MISSFBI3_electrocute";
									Var442.f_2 = "Clamp_Left_Loop_Victim";
									Var442.f_5 = 0f;
									Var508.f_1 = "MISSFBI3_electrocute";
									Var508.f_2 = "Clamp_Left_Loop_Victim_facial";
									Var508.f_5 = 0f;
									Var574.f_1 = "MISSFBI3_electrocute";
									Var574.f_2 = "Clamp_Left_Loop_l_clip";
									Var574.f_5 = 0f;
									Var640.f_1 = "MISSFBI3_electrocute";
									Var640.f_2 = "Clamp_Left_Loop_r_clip";
									Var640.f_5 = 0f;
									Var376.f_11 = "MISSFBI3_electrocute";
									Var376.f_12 = "Clamp_Right_Loop_Player";
									Var376.f_15 = 0f;
									Var442.f_11 = "MISSFBI3_electrocute";
									Var442.f_12 = "Clamp_Right_Loop_Victim";
									Var442.f_15 = 0f;
									Var508.f_11 = "MISSFBI3_electrocute";
									Var508.f_12 = "Clamp_Right_Loop_Victim_facial";
									Var508.f_15 = 0f;
									Var574.f_11 = "MISSFBI3_electrocute";
									Var574.f_12 = "Clamp_Right_Loop_l_clip";
									Var574.f_15 = 0f;
									Var640.f_11 = "MISSFBI3_electrocute";
									Var640.f_12 = "Clamp_Right_Loop_r_clip";
									Var640.f_15 = 0f;
									Var376.f_6 = "MISSFBI3_electrocute";
									Var376.f_7 = "Electrocute_Both_Loop_Player";
									Var376.f_10 = 0f;
									Var442.f_6 = "MISSFBI3_electrocute";
									Var442.f_7 = "Electrocute_Both_Loop_Victim";
									Var442.f_10 = 0f;
									Var508.f_6 = "MISSFBI3_electrocute";
									Var508.f_7 = "Electrocute_Both_Loop_Victim_facial";
									Var508.f_10 = 0f;
									Var574.f_6 = "MISSFBI3_electrocute";
									Var574.f_7 = "electrocute_both_loop_l_clip";
									Var574.f_10 = 0f;
									Var640.f_6 = "MISSFBI3_electrocute";
									Var640.f_7 = "electrocute_both_loop_r_clip";
									Var640.f_10 = 0f;
									Var398.f_1 = "MISSFBI3_electrocute";
									Var398.f_2 = "Electrocute_Both_Loop_Player";
									Var398.f_5 = 0f;
									Var464.f_1 = "MISSFBI3_electrocute";
									Var464.f_2 = "Electrocute_Both_Loop_Victim";
									Var464.f_5 = 0f;
									Var530.f_1 = "MISSFBI3_electrocute";
									Var530.f_2 = "Electrocute_Both_Loop_Victim_facial";
									Var530.f_5 = 0f;
									Var596.f_1 = "MISSFBI3_electrocute";
									Var596.f_2 = "electrocute_both_loop_l_clip";
									Var596.f_5 = 0f;
									Var662.f_1 = "MISSFBI3_electrocute";
									Var662.f_2 = "electrocute_both_loop_r_clip";
									Var662.f_5 = 0f;
									if (iLocal_2654)
									{
										fVar716 = 0f;
										fVar717 = 1000f;
									}
									else
									{
										fVar716 = 0.25f;
										fVar717 = 4f;
									}
									if (iLocal_2622)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3078))
										{
											ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3078, -1000f, 0);
											iLocal_2622 = 0;
										}
									}
									func_47(&(Local_384[3 /*36*/]), -fVar717);
									func_47(&(Local_384[4 /*36*/]), -fVar717);
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_384[3 /*36*/]))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[3 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_384[4 /*36*/]))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[4 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									if (iLocal_2688)
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3081, -fVar717, 0);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3082, -fVar717, 0);
										iLocal_2688 = 0;
									}
									Var718 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFBI3_electrocute", "Electrocute_Both_Loop_hand_l", Local_116, Local_119 - Vector(180f, 0f, 0f), 0, 2) };
									Var721 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MISSFBI3_electrocute", "Electrocute_Both_Loop_hand_l", Local_116, Local_119 - Vector(180f, 0f, 0f), 0, 2) };
									ENTITY::SET_ENTITY_COORDS(iLocal_3081, Var718, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_ROTATION(iLocal_3081, Var721, 2, 1);
									ENTITY::PLAY_ENTITY_ANIM(iLocal_3081, "Electrocute_Both_Loop_hand_l", "MISSFBI3_electrocute", fVar717, 1, 0, 0, 0, 0);
									Var718 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFBI3_electrocute", "Electrocute_Both_Loop_hand_r", Local_116, Local_119 - Vector(180f, 0f, 0f), 0, 2) };
									Var721 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MISSFBI3_electrocute", "Electrocute_Both_Loop_hand_r", Local_116, Local_119 - Vector(180f, 0f, 0f), 0, 2) };
									ENTITY::SET_ENTITY_COORDS(iLocal_3082, Var718, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_ROTATION(iLocal_3082, Var721, 2, 1);
									ENTITY::PLAY_ENTITY_ANIM(iLocal_3082, "Electrocute_Both_Loop_hand_r", "MISSFBI3_electrocute", fVar717, 1, 0, 0, 0, 0);
									TASK::TASK_SCRIPTED_ANIMATION(func_181(), &Var376, &Var354, &Var398, fVar716, 0.125f);
									TASK::TASK_SCRIPTED_ANIMATION(iLocal_3045, &Var442, &Var420, &Var464, fVar716, 0.125f);
									TASK::TASK_SCRIPTED_ANIMATION(iLocal_3045, &Var508, &Var486, &Var530, fVar716, 0.125f);
									TASK::PLAY_ENTITY_SCRIPTED_ANIM(Local_384[3 /*36*/], &Var640, &Var618, &Var662, fVar716, 0.125f);
									TASK::PLAY_ENTITY_SCRIPTED_ANIM(Local_384[4 /*36*/], &Var574, &Var552, &Var596, fVar716, 0.125f);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_181(), 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3045, 0, 0);
									iLocal_2626 = 1;
									func_248(250);
									if (!CAM::DOES_CAM_EXIST(uLocal_3149))
									{
										uLocal_3149 = CAM::CREATE_CAMERA(964613260, 1);
										CAM::SET_CAM_DEBUG_NAME(uLocal_3149, "Torture Cam");
									}
									CAM::PLAY_CAM_ANIM(uLocal_3149, &cVar684, &cVar700, Local_122, Local_125, 1, 2);
									CAM::SHAKE_CAM(uLocal_3149, sLocal_267, 0.25f);
									if (!CAM::IS_SCRIPT_GLOBAL_SHAKING())
									{
										CAM::ANIMATED_SHAKE_SCRIPT_GLOBAL("SHAKE_CAM_medium", "medium", "", fLocal_2794);
									}
									if (!iLocal_3090)
									{
										iLocal_3089 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(sLocal_311, iLocal_3045, 0f, 0f, 0f, Local_3161, 39317, 1065353216, 0, 0, 0);
										fLocal_2788 = 0f;
										iLocal_3090 = 1;
									}
									iLocal_2684 = 0;
									iLocal_2670 = 0;
									iLocal_2654 = 0;
									iLocal_2681++;
								}
							}
							break;
						
						case 1:
							if (((fLocal_2774 > 6.5f || (fLocal_2774 > (6.5f / 4f) && fLocal_2775 <= 20f)) && (!func_407(228, 0, 1) || !func_407(229, 0, 1))) || fLocal_2775 <= 0f)
							{
								if (func_393(22, 0, 0f, 1000f, -4f, 0, 0))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_3045);
									fLocal_2774 = 0f;
									fLocal_2660 = 0f;
									fLocal_2661 = 0f;
									fLocal_2662 = 0f;
									fLocal_2663 = 0f;
									fLocal_2668 = 0f;
									fLocal_2669 = 0f;
									fLocal_2664 = 0f;
									fLocal_2665 = 0f;
									fLocal_2666 = 0f;
									fLocal_2667 = 0f;
									fLocal_2658 = 0f;
									fLocal_2659 = 0f;
									func_25(1, 1, 1);
									func_260("F3_EHIT1", 0, 0);
									iLocal_2680++;
								}
							}
							else if (func_407(223, 1, 1) && MISC::GET_GAME_TIMER() > iLocal_2679)
							{
								if (!func_205(iLocal_3093[21]))
								{
									if (func_393(21, 0, 0, 8f, -4f, 0, 0))
									{
										if (GlobalFunc_111())
										{
											GlobalFunc_4956();
										}
										func_260("F3_REACT", 0, 1);
										fLocal_2660 = 0f;
										fLocal_2661 = 0f;
										fLocal_2662 = 0f;
										fLocal_2663 = 0f;
										fLocal_2668 = 0f;
										fLocal_2669 = 0f;
										fLocal_2664 = 0f;
										fLocal_2665 = 0f;
										fLocal_2666 = 0f;
										fLocal_2667 = 0f;
										fLocal_2658 = 0f;
										fLocal_2659 = 0f;
										iLocal_2679 = MISC::GET_GAME_TIMER() + 500;
										iLocal_2681++;
									}
								}
							}
							else
							{
								if (!ENTITY::IS_ENTITY_ATTACHED(Local_384[3 /*36*/]))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[3 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 28422), Local_384[4 /*36*/].f_9, Local_384[4 /*36*/].f_12, 0, 0, 0, 0, 2, 1);
								}
								if (!ENTITY::IS_ENTITY_ATTACHED(Local_384[4 /*36*/]))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_384[4 /*36*/], func_181(), PED::GET_PED_BONE_INDEX(func_181(), 60309), Local_384[4 /*36*/].f_9, Local_384[4 /*36*/].f_12, 0, 0, 0, 0, 2, 1);
								}
								fVar724 = (SYSTEM::TIMESTEP() / 0.25f);
								if (fLocal_2660 == 0f)
								{
									if (func_407(228, 0, 1))
									{
										fLocal_2662 = fVar724;
									}
								}
								else if (fLocal_2660 == 1f)
								{
									if (!func_407(228, 0, 1))
									{
										fLocal_2662 = -fVar724;
									}
								}
								if (fLocal_2661 == 0f)
								{
									if (func_407(229, 0, 1))
									{
										fLocal_2663 = fVar724;
									}
								}
								else if (fLocal_2661 == 1f)
								{
									if (!func_407(229, 0, 1))
									{
										fLocal_2663 = -fVar724;
									}
								}
								fLocal_2660 = GlobalFunc_253((fLocal_2660 + fLocal_2662), 0f, 1f);
								fLocal_2661 = GlobalFunc_253((fLocal_2661 + fLocal_2663), 0f, 1f);
								fLocal_2668 = (fLocal_2661 - fLocal_2660);
								fLocal_2669 = (((fLocal_2661 - fLocal_2660) + 1f) / 2f);
								fLocal_2664 = MISC::ABSF(GlobalFunc_253(fLocal_2668, -1f, 0f));
								fLocal_2665 = MISC::ABSF(GlobalFunc_253(fLocal_2668, 0f, 1f));
								fLocal_2666 = (1f - ((fLocal_2660 * (1f - fLocal_2669)) + (fLocal_2661 * fLocal_2669)));
								fLocal_2667 = (1f - MISC::ABSF(fLocal_2668));
								if (fLocal_2660 == 1f && fLocal_2661 == 1f)
								{
									if (fLocal_2658 == 0f)
									{
										fLocal_2659 = (SYSTEM::TIMESTEP() / 0.125f);
									}
								}
								else if (fLocal_2658 > 0f)
								{
									fLocal_2659 = (-SYSTEM::TIMESTEP() / 0.125f);
								}
								fLocal_2658 = GlobalFunc_253((fLocal_2658 + fLocal_2659), 0f, 1f);
								TASK::SET_ANIM_WEIGHT(func_181(), fLocal_2658, 2, 0, 0);
								TASK::SET_ANIM_WEIGHT(func_181(), fLocal_2666, 1, 0, 0);
								TASK::SET_ANIM_WEIGHT(func_181(), fLocal_2664, 0, 0, 0);
								TASK::SET_ANIM_WEIGHT(func_181(), fLocal_2665, 0, 2, 0);
								TASK::SET_ANIM_WEIGHT(func_181(), fLocal_2667, 0, 1, 0);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2658, 2, 0, 0);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2666, 1, 0, 0);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2664, 0, 0, 0);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2665, 0, 2, 0);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2667, 0, 1, 0);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2658, 2, 0, 1);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2666, 1, 0, 1);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2664, 0, 0, 1);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2665, 0, 2, 1);
								TASK::SET_ANIM_WEIGHT(iLocal_3045, fLocal_2667, 0, 1, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[3 /*36*/], fLocal_2658, 2, 0, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[3 /*36*/], fLocal_2666, 1, 0, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[3 /*36*/], fLocal_2664, 0, 0, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[3 /*36*/], fLocal_2665, 0, 2, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[3 /*36*/], fLocal_2667, 0, 1, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[4 /*36*/], fLocal_2658, 2, 0, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[4 /*36*/], fLocal_2666, 1, 0, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[4 /*36*/], fLocal_2664, 0, 0, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[4 /*36*/], fLocal_2665, 0, 2, 1);
								TASK::SET_ANIM_WEIGHT(Local_384[4 /*36*/], fLocal_2667, 0, 1, 1);
								if (!GlobalFunc_74(sLocal_321) && !bLocal_2691)
								{
									GlobalFunc_Display_Help_Text(sLocal_321);
								}
								if (fLocal_2666 == 1f)
								{
									iLocal_2621 = 1;
								}
								else
								{
									iLocal_2621 = 0;
								}
								if (fLocal_2658 == 1f)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
									{
										func_698();
									}
									GlobalFunc_553(295);
									fLocal_2774 = (fLocal_2774 + SYSTEM::TIMESTEP());
									fLocal_2775 = (fLocal_2775 - ((35f / 6.5f) * SYSTEM::TIMESTEP()));
									fLocal_2788 = (fLocal_2788 + 0.02f);
									if (fLocal_2774 > 6.5f || fLocal_2775 <= 20f)
									{
										if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											func_260("F3_ENOUGH1", 0, 0);
										}
									}
								}
								else if ((fLocal_2660 == 1f && fLocal_2661 == 0f) || (fLocal_2660 == 0f && fLocal_2661 == 1f))
								{
									if (!iLocal_2670)
									{
										func_700(0.5f, 100, 500, 7000);
										iLocal_2682 = MISC::GET_GAME_TIMER();
										iLocal_2683 = 1500;
										iLocal_2670 = 1;
									}
								}
								else
								{
									iLocal_2670 = 0;
								}
								if (fLocal_2658 != 0f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
									{
										if (iLocal_2684 != -1)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
											{
												AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
											}
											iLocal_2684 = -1;
										}
										if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_3045))
										{
											GlobalFunc_4956();
										}
										else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
										{
											GlobalFunc_5653(iLocal_3045, "Electrocution", "MisterK", 6);
										}
									}
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
								{
									if (iLocal_2684 == -1)
									{
										iLocal_2684 = MISC::GET_GAME_TIMER() + 2000;
										if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
										{
											AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
										}
									}
									if (MISC::GET_GAME_TIMER() <= iLocal_2684)
									{
										if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
										{
											GlobalFunc_5653(iLocal_3045, "Pliers_Panting", "MisterK", 3);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
										{
											if (GlobalFunc_5170())
											{
												func_260("F3_JUMP", "", 1);
											}
										}
									}
								}
								if (iLocal_3090 && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3089))
								{
									fLocal_2788 = GlobalFunc_253((fLocal_2788 - (0.02f / 2f)), 0f, 1f);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3089, "smoke", fLocal_2788, 0);
								}
							}
							break;
						
						case 2:
							if (func_205(iLocal_3093[21]))
							{
								if (func_206(21, 0.11f, 1f))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(sLocal_312, Local_384[3 /*36*/], Local_3161, Local_3161, 1065353216, 0, 0, 0);
									func_700(0.5f, 100, 500, 7000);
									iLocal_2681 = 0;
								}
							}
							break;
					}
					break;
				
				case 0:
					switch (iLocal_2681)
					{
						case 0:
							if (!func_205(iLocal_3093[27]))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_WATERBOARD"))
								{
									if (func_393(27, 1, 0f, 4f, -4f, 0, 0))
									{
										iLocal_2654 = 0;
									}
								}
							}
							else if (func_407(229, 1, 1))
							{
								if (func_393(26, 0, 0, 1148846080, -998637568, 0, 0))
								{
									HUD::CLEAR_HELP(1);
									iLocal_2681++;
								}
							}
							else
							{
								if (!GlobalFunc_74(sLocal_322) && !bLocal_2691)
								{
									GlobalFunc_Display_Help_Text(sLocal_322);
								}
								if (GlobalFunc_5170())
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 2000)
									{
										func_260("F3_CAN", "", 1);
									}
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_4926(1000) && !bLocal_2594)
							{
								func_460(250);
							}
							if (func_205(iLocal_3093[26]))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[26], 1f);
									ENTITY::SET_ENTITY_VISIBLE(Local_384[1 /*36*/], 0);
									iLocal_86[6] = 1;
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_371[11]) && STREAMING::HAS_MODEL_LOADED(iLocal_258))
									{
										iLocal_371[11] = OBJECT::CREATE_OBJECT(iLocal_258, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_3045, PED::GET_PED_BONE_INDEX(iLocal_3045, 31086)), 1, 1, 0);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[11], iLocal_3045, PED::GET_PED_BONE_INDEX(iLocal_3045, 31086), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										ENTITY::SET_ENTITY_VISIBLE(iLocal_371[11], 0);
									}
								}
								else
								{
									fVar8 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[26]);
									if (fVar8 >= 0.524f)
									{
										ENTITY::SET_ENTITY_VISIBLE(Local_384[1 /*36*/], 0);
										iLocal_86[6] = 1;
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_371[11]) && STREAMING::HAS_MODEL_LOADED(iLocal_258))
										{
											iLocal_371[11] = OBJECT::CREATE_OBJECT(iLocal_258, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_3045, PED::GET_PED_BONE_INDEX(iLocal_3045, 31086)), 1, 1, 0);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[11], iLocal_3045, PED::GET_PED_BONE_INDEX(iLocal_3045, 31086), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											ENTITY::SET_ENTITY_VISIBLE(iLocal_371[11], 0);
										}
									}
									if (fVar8 >= 0.096f)
									{
										if (fVar8 <= 0.15f)
										{
											GlobalFunc_5653(iLocal_3045, "FBI3_GBAA", "MisterK", 3);
										}
										else if (iLocal_86[6])
										{
											if (GlobalFunc_111() && AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_3045))
											{
												GlobalFunc_4956();
											}
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
											{
												GlobalFunc_5653(iLocal_3045, "FBI3_GCAA", "MisterK", 3);
											}
										}
										else if (GlobalFunc_5170())
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_2772) > 1000)
											{
												func_260("F3_CAN", "", 1);
											}
										}
									}
								}
							}
							else if (func_393(33, 1, 0f, 1000f, -8f, 0, 0))
							{
								if (iLocal_3092)
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3091))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3091, 0);
									}
									iLocal_3092 = 0;
								}
								iLocal_2682 = MISC::GET_GAME_TIMER() + 2000;
								iLocal_2681++;
							}
							break;
						
						case 2:
							if (func_205(iLocal_3093[33]))
							{
								if (!bLocal_2691)
								{
									if (!PAD::_IS_USING_KEYBOARD(0))
									{
										if (!GlobalFunc_74(sLocal_323))
										{
											GlobalFunc_Display_Help_Text(sLocal_323);
										}
									}
									else if (!GlobalFunc_74("HLP_POUR_KM"))
									{
										GlobalFunc_Display_Help_Text("HLP_POUR_KM");
									}
								}
								func_408(&iVar1, &iVar2, &iVar3, &iVar4, 0);
								func_694(&iVar2);
								if (iVar2 < -50 && !bLocal_2691)
								{
									if (func_393(28, 0, 0f, 8f, -8f, 0, 0))
									{
										func_25(0, 0, 1);
										iLocal_2681++;
									}
								}
								else
								{
									if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 8000)
									{
										func_260("F3_BWAIT", 0, 0);
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
									{
										if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
										{
											GlobalFunc_5653(iLocal_3045, "FBI3_GCAA", "MisterK", 3);
										}
									}
								}
							}
							break;
						
						case 3:
							if (!func_205(iLocal_3093[28]))
							{
								func_408(&iVar1, &iVar2, &iVar3, &iVar4, 0);
								func_694(&iVar2);
								if (func_393(29, 1, 0, 1148846080, -998637568, 0, 0))
								{
									if (!iLocal_3092)
									{
										iLocal_3091 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_313, Local_384[0 /*36*/], Local_2685, Local_3161, 1f, 0, 0, 0);
										iLocal_3092 = 1;
									}
									GlobalFunc_553(298);
									iLocal_2656 = MISC::GET_GAME_TIMER();
									iLocal_2681++;
								}
							}
							break;
						
						case 4:
							if ((MISC::GET_GAME_TIMER() - iLocal_2656) > 500)
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
								{
									func_698();
								}
							}
							if (func_205(iLocal_3093[29]) && (MISC::GET_GAME_TIMER() - iLocal_2656) > 1000)
							{
								func_408(&iVar1, &iVar2, &iVar3, &iVar4, 0);
								func_694(&iVar2);
								if ((iVar2 >= -50 && (fLocal_2774 > 6.5f || (fLocal_2774 > (6.5f / 2f) && fLocal_2775 <= 10f))) || fLocal_2775 <= 0f)
								{
									if (func_393(31, 0, 0f, 8f, -8f, 0, 0))
									{
										HUD::CLEAR_HELP(1);
										if (iLocal_3092)
										{
											if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3091))
											{
												GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3091, 0);
											}
											iLocal_3092 = 0;
										}
										iLocal_2681 = 6;
									}
								}
								else if (iVar2 >= -50)
								{
									if (func_393(30, 0, 0, 1148846080, -998637568, 0, 0))
									{
										if (iLocal_3092)
										{
											if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3091))
											{
												GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3091, 0);
											}
											iLocal_3092 = 0;
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[11]))
										{
											ENTITY::SET_ENTITY_VISIBLE(iLocal_371[11], 0);
										}
										GlobalFunc_5105();
										iLocal_2681 = 5;
									}
								}
								else if (iVar2 < -50)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[11]))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_371[11], 1);
									}
									fLocal_2774 = (fLocal_2774 + SYSTEM::TIMESTEP());
									if (fLocal_2774 > 6.5f)
									{
										fLocal_2775 = (fLocal_2775 - ((40f / 6.5f) * SYSTEM::TIMESTEP()));
									}
									else
									{
										fLocal_2775 = (fLocal_2775 - ((10f / 6.5f) * SYSTEM::TIMESTEP()));
									}
									if (fLocal_2774 > 6.5f)
									{
										if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 1000)
										{
											func_260("F3_ENOUGH2", 0, 0);
										}
									}
								}
							}
							break;
						
						case 5:
							if (!func_205(iLocal_3093[30]))
							{
								if (func_393(33, 1, 0f, 8f, -8f, 0, 0))
								{
									if (iLocal_3092)
									{
										iLocal_3091 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_313, Local_384[0 /*36*/], Local_2685, Local_3161, 1f, 0, 0, 0);
										iLocal_3092 = 0;
									}
									GlobalFunc_553(298);
									iLocal_2681 = 2;
								}
							}
							break;
						
						case 6:
							Var725.f_23 = 1;
							if (func_394(31, &Var725))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(func_181(), Var725, Var725.f_1, 3))
								{
									if (func_393(32, 0, 0, 1148846080, -998637568, 0, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[11]))
										{
											OBJECT::DELETE_OBJECT(&(iLocal_371[11]));
										}
										GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(143.1187f, -2202.033f, 3.688f, 10f);
										fLocal_2774 = 0f;
										iLocal_2764 = 0;
										iLocal_2680++;
									}
								}
							}
							break;
					}
					break;
				
				case 6:
					if (!iLocal_2655)
					{
						if (!iLocal_2623)
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI3_SYRINGE"))
							{
								if (func_393(5, 0, 0, 1148846080, -998637568, 0, 0))
								{
									fLocal_2678 = 0f;
									func_403("FBI3_SYRINGE");
									AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_ADRENALINE");
									func_412("FBI3 MINIGAME DEFAULT");
									iLocal_2623 = 1;
								}
							}
						}
						else if (!func_205(iLocal_3093[5]) || TASK::GET_SCRIPT_TASK_STATUS(func_181(), 1785177548) != 1)
						{
							bLocal_2617 = true;
							if (func_407(229, 1, 1))
							{
								if (func_393(34, 0, 0, 1148846080, -998637568, 0, 0))
								{
									if (GlobalFunc_74(sLocal_324))
									{
										HUD::CLEAR_HELP(1);
									}
									GlobalFunc_5105();
									SYSTEM::SETTIMERB(1);
									fLocal_2675 = 5f;
									iLocal_2673++;
									if (iLocal_2673 == 1)
									{
										fLocal_2675 = 80f;
									}
									else if (iLocal_2673 == 2)
									{
										fLocal_2675 = 60f;
									}
									else if (iLocal_2673 == 3)
									{
										fLocal_2675 = 40f;
									}
									else
									{
										iLocal_2673 = 4;
										fLocal_2675 = 20f;
									}
									Local_384[6 /*36*/].f_34++;
									iLocal_2655 = 1;
									iLocal_2764 = 0;
									iLocal_2680++;
								}
							}
							else if (iLocal_2674 != -1 && (MISC::GET_GAME_TIMER() - iLocal_2674) >= 15000)
							{
								if (GlobalFunc_74(sLocal_324))
								{
									HUD::CLEAR_HELP(1);
								}
								iLocal_2680 = 2;
							}
							else if (!func_205(iLocal_3093[35]) && !func_205(iLocal_3093[34]))
							{
								if (func_393(35, 1, 0f, 1000f, -1000f, 64, 64))
								{
									iLocal_2674 = MISC::GET_GAME_TIMER();
								}
							}
							else if (func_205(iLocal_3093[35]))
							{
								if (!GlobalFunc_74(sLocal_324) && !bLocal_2691)
								{
									GlobalFunc_Display_Help_Text(sLocal_324);
								}
							}
						}
						else
						{
							if (iLocal_2764 == 0)
							{
								if (GlobalFunc_5170())
								{
									func_260("F3_DIE", 0, 0);
									iLocal_2764++;
								}
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[5]) >= 0.2f)
							{
								bLocal_2617 = true;
								iLocal_2653 = 0;
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
								{
									if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
									{
										AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
									}
								}
							}
							else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
								{
									GlobalFunc_5653(iLocal_3045, "about_to_die", "MisterK", 6);
								}
							}
						}
					}
					break;
			}
			if (fLocal_2775 <= 0f && iLocal_2680 == 1)
			{
				if (iVar0 != 5)
				{
					if (iVar0 == 2)
					{
						func_406(1, 2, iLocal_2770 + 1);
					}
					else
					{
						func_406(1, iVar0, 0);
					}
				}
			}
			break;
		
		case 1:
			if (((((((!func_205(iLocal_3093[7]) && !func_205(iLocal_3093[6])) && !func_205(iLocal_3093[8])) && !func_205(iLocal_3093[13])) && !func_205(iLocal_3093[14])) && !func_205(iLocal_3093[22])) && !func_205(iLocal_3093[34])) && (!func_205(iLocal_3093[32]) || (fLocal_2775 <= 0f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[32]) >= 0.719f)))
			{
				func_51();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3080))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3080))
					{
						ENTITY::DETACH_ENTITY(iLocal_3080, 1, 1);
					}
					OBJECT::DELETE_OBJECT(&iLocal_3080);
					if (iLocal_3088)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3087))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3087, 0);
						}
						iLocal_3088 = 0;
					}
				}
				if (iLocal_3086)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3085))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3085, 0);
					}
					iLocal_3086 = 0;
				}
				if (iLocal_3088)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3087))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3087, 0);
					}
					iLocal_3088 = 0;
				}
				if (iLocal_3090)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3089))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3089, 0);
					}
					iLocal_3090 = 0;
				}
				if (iLocal_3092)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3091))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3091, 0);
					}
					iLocal_3092 = 0;
				}
				cVar751.f_23 = 1;
				if (func_394(19, &cVar751))
				{
					GlobalFunc_5175(&uLocal_707, cVar751);
				}
				GlobalFunc_5177(&uLocal_707, cLocal_300);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_ELECTRIC"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_ELECTRIC");
				}
				if (func_394(15, &cVar751))
				{
					GlobalFunc_5175(&uLocal_707, cVar751);
				}
				GlobalFunc_5177(&uLocal_707, cLocal_301);
				GlobalFunc_5177(&uLocal_707, "FBI_03_Torture_Teeth_Pain");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_PLIERS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_PLIERS");
				}
				if (func_394(9, &cVar751))
				{
					GlobalFunc_5175(&uLocal_707, cVar751);
				}
				GlobalFunc_5177(&uLocal_707, cLocal_303);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_WRENCH"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_WRENCH");
				}
				if (func_394(27, &cVar751))
				{
					GlobalFunc_5175(&uLocal_707, cVar751);
				}
				GlobalFunc_5177(&uLocal_707, cLocal_302);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_WATER"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_WATER");
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_3074, 1);
				if (fLocal_2775 <= 0f)
				{
					func_414(0);
					func_51();
					GlobalFunc_553(294);
					if (iLocal_2673 >= 3)
					{
						iLocal_2680 = 2;
					}
					else
					{
						iLocal_2755 = 6;
						iLocal_2680 = 0;
						fLocal_2774 = 0f;
						iLocal_2764 = 0;
						iLocal_2655 = 0;
						iLocal_2623 = 0;
					}
				}
				else
				{
					iLocal_2680 = 0;
					if (iLocal_2624)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
						iLocal_2624 = 0;
					}
					if (func_394(35, &cVar751))
					{
						GlobalFunc_5175(&uLocal_707, cVar751);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_ADRENALINE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_ADRENALINE");
					}
					func_25(1, 1, 1);
					return 1;
				}
			}
			else
			{
				if (GlobalFunc_4926(1000) && !bLocal_2594)
				{
					func_460(250);
				}
				if (func_205(iLocal_3093[13]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[13], 1f);
						fLocal_2775 = (fLocal_2775 - 5f);
						if (fLocal_2775 > 0f)
						{
							if (iLocal_2624)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
								iLocal_2624 = 0;
							}
						}
						else
						{
							func_406(1, 2, iLocal_2770);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_3045))
						{
							if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
							{
								AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
						{
							GlobalFunc_5653(iLocal_3045, "Pliers_Panting", "MisterK", 3);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3080))
					{
						if (func_206(13, 0.071f, 1f))
						{
							iLocal_3080 = OBJECT::CREATE_OBJECT(iLocal_253, ENTITY::GET_ENTITY_COORDS(func_181(), 1), 1, 1, 0);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sLocal_308, iLocal_3045, 0f, 0.1f, 0f, Local_3161, 31086, 1f, 0, 0, 0);
							if (!iLocal_3088)
							{
								iLocal_3087 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_310, iLocal_3080, Local_3161, Local_3161, 1f, 0, 0, 0);
								iLocal_3088 = 1;
							}
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3080))
							{
								ENTITY::DETACH_ENTITY(iLocal_3080, 1, 1);
							}
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3080, func_181(), PED::GET_PED_BONE_INDEX(func_181(), 60309), Local_3161, Local_3161, 0, 0, 0, 0, 2, 1);
							fLocal_2775 = (fLocal_2775 - 5f);
							if (fLocal_2775 > 0f)
							{
								if (iLocal_2624)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
									iLocal_2624 = 0;
								}
							}
							else
							{
								func_406(1, 2, iLocal_2770);
							}
						}
					}
				}
				if (func_205(iLocal_3093[14]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[14], 1f);
						fLocal_2775 = (fLocal_2775 - 5f);
						if (fLocal_2775 > 0f)
						{
							if (iLocal_2624)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
								iLocal_2624 = 0;
							}
						}
						else
						{
							func_406(1, 2, iLocal_2770);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_3045))
						{
							if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
							{
								AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
						{
							GlobalFunc_5653(iLocal_3045, "Pliers_Panting", "MisterK", 3);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3080))
					{
						if (func_206(14, 0.071f, 1f))
						{
							iLocal_3080 = OBJECT::CREATE_OBJECT(iLocal_253, ENTITY::GET_ENTITY_COORDS(func_181(), 1), 1, 1, 0);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sLocal_308, iLocal_3045, 0f, 0.1f, 0f, Local_3161, 31086, 1f, 0, 0, 0);
							if (!iLocal_3088)
							{
								iLocal_3087 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_310, iLocal_3080, Local_3161, Local_3161, 1f, 0, 0, 0);
								iLocal_3088 = 1;
							}
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3080))
							{
								ENTITY::DETACH_ENTITY(iLocal_3080, 1, 1);
							}
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3080, func_181(), PED::GET_PED_BONE_INDEX(func_181(), 60309), Local_3161, Local_3161, 0, 0, 0, 0, 2, 1);
							fLocal_2775 = (fLocal_2775 - 5f);
							if (fLocal_2775 > 0f)
							{
								if (iLocal_2624)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
									iLocal_2624 = 0;
								}
							}
							else
							{
								func_406(1, 2, iLocal_2770);
							}
						}
					}
				}
				if (func_205(iLocal_3093[6]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[6], 1f);
						if (fLocal_2774 != 1f)
						{
							fLocal_2774 = 1f;
							fLocal_2775 = (fLocal_2775 - 25f);
						}
						if (fLocal_2775 <= 0f)
						{
							func_406(1, 5, 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
					{
						if (func_206(6, 0.395f, 0.435f))
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
							{
								GlobalFunc_5653(iLocal_3045, "FBI3_BSAA", "MisterK", 10);
							}
						}
					}
					if (func_206(6, 0.395f, 1f))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
						{
							func_698();
						}
						if (fLocal_2774 != 1f)
						{
							fLocal_2774 = 1f;
							fLocal_2775 = (fLocal_2775 - 25f);
							if (fLocal_2775 <= 0f)
							{
								func_406(1, 5, 1);
							}
						}
					}
				}
				if (func_205(iLocal_3093[7]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[7], 1f);
						if (fLocal_2774 != 1f)
						{
							fLocal_2774 = 1f;
							fLocal_2775 = (fLocal_2775 - 25f);
						}
						if (fLocal_2775 <= 0f)
						{
							func_406(1, 5, 2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
					{
						if (func_206(7, 0.186f, 0.217f))
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
							{
								GlobalFunc_5653(iLocal_3045, "FBI3_BSAA", "MisterK", 10);
							}
						}
					}
					if (func_206(7, 0.18f, 1f))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
						{
							func_698();
						}
						if (fLocal_2774 != 1f)
						{
							fLocal_2774 = 1f;
							fLocal_2775 = (fLocal_2775 - 25f);
							if (fLocal_2775 <= 0f)
							{
								func_406(1, 5, 2);
							}
						}
					}
				}
				if (func_205(iLocal_3093[8]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[8], 1f);
						if (fLocal_2774 != 1f)
						{
							fLocal_2774 = 1f;
							fLocal_2775 = (fLocal_2775 - 25f);
						}
						if (fLocal_2775 <= 0f)
						{
							func_406(1, 5, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
					{
						if (func_206(8, 0.245f, 0.268f))
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
							{
								GlobalFunc_5653(iLocal_3045, "FBI3_BSAA", "MisterK", 10);
							}
						}
					}
					if (func_206(8, 0.245f, 1f))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
						{
							func_698();
						}
						if (fLocal_2774 != 1f)
						{
							fLocal_2774 = (fLocal_2774 + 1f);
							fLocal_2775 = (fLocal_2775 - 25f);
							if (fLocal_2775 <= 0f)
							{
								func_406(1, 5, 0);
							}
						}
					}
				}
				if (func_205(iLocal_3093[22]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[22], 1f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
						{
							if (func_206(32, 0f, 0.198f))
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
								{
									GlobalFunc_5653(iLocal_3045, "Electrocution", "MisterK", 3);
								}
							}
							else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
							{
								if (fLocal_2775 <= 0f)
								{
									GlobalFunc_5653(iLocal_3045, "about_to_die", "MisterK", 3);
								}
								else
								{
									GlobalFunc_5653(iLocal_3045, "Pliers_Panting", "MisterK", 3);
								}
							}
						}
					}
					if (fLocal_2775 > 0f)
					{
						if (iLocal_2624)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
							iLocal_2624 = 0;
						}
					}
				}
				if (func_205(iLocal_3093[32]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[32], 1f);
						iLocal_86[6] = 0;
						ENTITY::SET_ENTITY_VISIBLE(Local_384[1 /*36*/], 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_3074, 1);
					}
					if (ENTITY::IS_ENTITY_VISIBLE(iLocal_3074))
					{
						if (func_206(32, 0.325f, 1f))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_3074, 0);
						}
					}
					switch (iLocal_2764)
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
								{
									GlobalFunc_5653(iLocal_3045, "FBI3_GCAA", "MisterK", 3);
								}
							}
							if (GlobalFunc_5170())
							{
								func_260("F3_GETUP", 0, 0);
								iLocal_2764++;
							}
							break;
						
						case 1:
							if (func_206(32, 0.179f, 1f))
							{
								iLocal_86[6] = 0;
								ENTITY::SET_ENTITY_VISIBLE(Local_384[1 /*36*/], 1);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
								{
									if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
									{
										AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_3045);
									}
								}
								iLocal_2764++;
							}
							else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
								{
									GlobalFunc_5653(iLocal_3045, "FBI3_GCAA", "MisterK", 3);
								}
							}
							break;
						
						case 2:
							if (fLocal_2775 > 0f)
							{
								if (GlobalFunc_5170())
								{
									func_260("F3_TOWEL2", "", 1);
									iLocal_2764++;
								}
							}
							break;
						
						case 3:
							if (GlobalFunc_5170())
							{
								switch (iLocal_681)
								{
									case 3:
										func_260("F3_BHIT1", "", 1);
										break;
									
									case 5:
										func_260("F3_BHIT2", "", 1);
										break;
									
									case 7:
										func_260("F3_BHIT3", "", 1);
										break;
									
									case 9:
										func_260("F3_BHIT4", "", 1);
										break;
								}
								iLocal_2764++;
							}
							break;
					}
					if (fLocal_2775 > 0f)
					{
						if (iLocal_2624)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
							iLocal_2624 = 0;
						}
					}
				}
				if (func_205(iLocal_3093[34]))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[34], 1f);
						bLocal_2617 = false;
						iLocal_2654 = 0;
					}
					else
					{
						switch (iLocal_2764)
						{
							case 0:
								if (GlobalFunc_5170())
								{
									if ((3 - iLocal_2673) == 0)
									{
										func_260("F3_OUT", 0, 0);
									}
									else
									{
										func_260("F3_DIE2", 0, 0);
									}
									iLocal_2764++;
								}
								break;
							}
					}
					if (bLocal_2617)
					{
						if (fLocal_2775 <= 0f)
						{
							fLocal_2775 = 1E-07f;
							func_406(0, 5, 0);
							iLocal_2674 = -1;
						}
						if (func_206(34, 0.045f, 1f))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
							{
								func_698();
							}
							if (iLocal_2624)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_DONE");
								iLocal_2624 = 0;
							}
							bLocal_2617 = false;
							iLocal_2654 = 0;
						}
					}
					else if (iLocal_2654 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[34]) >= 0.689f)
						{
							fLocal_2775 = fLocal_2675;
							iLocal_2654 = 1;
							iLocal_2755 = 5;
						}
						else
						{
							fVar7 = GlobalFunc_253((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[34]) / (0.689f - 0.045f)), 0f, 1f);
							fLocal_2775 = GlobalFunc_551(0f, fLocal_2675, fVar7);
							if ((!iLocal_2653 && func_206(34, 0.176f, 1f)) && GlobalFunc_5170())
							{
								func_260("F3_WAKE", "", 1);
								iLocal_2653 = 1;
							}
						}
					}
				}
			}
			break;
	}
	if (iLocal_2680 == 2)
	{
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_463();
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3045, cLocal_291, 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, joaat("cs_mrk"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3046, cLocal_285, 1, 0, 0);
			func_464(0, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_2680++;
		}
	}
	else if (iLocal_2680 == 3)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 33500 || GlobalFunc_4926(1000))
			{
				iLocal_69 = 4;
				bLocal_2594 = true;
				iLocal_2773 = CUTSCENE::GET_CUTSCENE_TIME();
				iLocal_2680++;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045) && !PED::IS_PED_INJURED(iLocal_3045))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3045))
		{
			PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_3045, 0, 1);
		}
	}
	return 0;
}

void func_694(int iParam0)//Position - 0x7AB6A
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_PRESSED(2, 229))
		{
			*iParam0 = -100;
		}
		else
		{
			*iParam0 = 0;
		}
	}
}


void func_696(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x7ABAA
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*iParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*iParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*iParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*iParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*iParam3 = (*iParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*iParam3 = (*iParam3 * -1);
			}
		}
	}
}


int func_698()//Position - 0x7ACB8
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2596))
	{
	}
	else if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2596))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2596);
		sLocal_2596 = "";
		return 1;
	}
	return 0;
}


void func_700(float fParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7AD5F
{
	fLocal_2780 = ((200f - fLocal_2777) * fParam0);
	fLocal_2779 = fLocal_2778;
	iLocal_2784 = MISC::GET_GAME_TIMER();
	iLocal_2781 = iParam1;
	iLocal_2782 = iParam2;
	iLocal_2783 = iParam3;
}




void func_704()//Position - 0x7ADBD
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (!iLocal_2592)
	{
		HUD::DISPLAY_RADAR(0);
		func_332(8, "8. Michael Reacts to 3rd", 0, 0, 0, 1);
		func_510();
		GlobalFunc_7632(1);
		func_328();
		func_64();
		GlobalFunc_574(303, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI3_BACK_TO_MICHAEL");
		iLocal_2800 = 0;
		bLocal_2714 = true;
		iLocal_2592 = 1;
		iLocal_2722 = 0;
		iLocal_3222 = 0;
		iLocal_2706 = -1;
		GlobalFunc_702(0, 0, 1);
	}
	if (iLocal_2592)
	{
		if (bLocal_2714)
		{
			func_507(1);
			func_504();
			func_503();
		}
		if (iLocal_2713 != 0)
		{
			if (GlobalFunc_663(sLocal_293, 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		if (iLocal_2713 == 0)
		{
			switch (iLocal_2800)
			{
				case 0:
					if (iLocal_2740)
					{
						iLocal_2740 = 0;
						iLocal_2800 = 2;
					}
					else if (iLocal_2698[4] || (iLocal_2706 != -1 && MISC::GET_GAME_TIMER() > iLocal_2706))
					{
						if (GlobalFunc_5170())
						{
							func_260("F3_ZOOM2", 0, 0);
							iLocal_2800++;
						}
						else if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
					}
					else if (!iLocal_2692[0])
					{
						if (GlobalFunc_5170())
						{
							func_260("F3_SCOPE2", 0, 0);
							iLocal_2692[0] = 1;
						}
					}
					else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 5000)
					{
						func_260("F3_ZOOMD", 0, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_5170())
					{
						func_260("F3_SPOT2", 0, 0);
						iLocal_2800++;
					}
					break;
				
				case 2:
					if (GlobalFunc_5170())
					{
						if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
						{
							AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
						}
						CUTSCENE::REQUEST_CUTSCENE("FBI_3_MCS_5p2", 8);
						func_324(0, 0, cLocal_291, 0);
						func_260("F3_SPOT2b", 0, 0);
						iLocal_2800++;
					}
					break;
				
				case 3:
					if (!GlobalFunc_111())
					{
						iLocal_2722 = 1;
						iLocal_2800++;
					}
					break;
				
				case 4:
					if (func_391(8))
					{
						HUD::DISPLAY_RADAR(0);
						iLocal_681 = 9;
					}
					else if (bLocal_2725)
					{
						bLocal_2714 = false;
					}
					else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 15000)
					{
						func_260("F3_PROMPT", 0, 0);
					}
					break;
			}
		}
		else if (func_501())
		{
			if (func_391(10))
			{
				iLocal_681 = 11;
			}
		}
		if (iLocal_681 != 8)
		{
			GlobalFunc_571(0, -1);
			GlobalFunc_7632(0);
			func_49();
			iLocal_2592 = 0;
		}
	}
}

void func_705()//Position - 0x7B024
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	GlobalFunc_2516();
	GlobalFunc_5077();
	if (!iLocal_2592)
	{
		HUD::DISPLAY_RADAR(0);
		func_332(7, "7. Trevor tortures thrid", 0, 0, 0, 1);
		func_510();
		func_328();
		iLocal_3222 = 0;
		iLocal_2800 = 0;
		iLocal_2592 = 1;
		GlobalFunc_702(1, 0, 1);
	}
	if (iLocal_2592)
	{
		bLocal_2618 = true;
		switch (iLocal_2800)
		{
			case 0:
				if (func_400())
				{
					iLocal_2800++;
				}
				break;
			
			case 1:
				if (func_693())
				{
					func_4();
					func_512();
					iLocal_2800++;
				}
				break;
			
			case 2:
				if (func_512())
				{
					func_507(1);
					func_504();
					iLocal_681 = 8;
				}
				break;
		}
		if (iLocal_681 != 7)
		{
			func_25(1, 1, 1);
			func_49();
			iLocal_2801 = 0;
			iLocal_2623 = 0;
			iLocal_2592 = 0;
		}
	}
}

void func_706()//Position - 0x7B0F6
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (!iLocal_2592)
	{
		func_332(6, "6. Michael Reacts to 2nd", 0, 0, 0, 1);
		func_510();
		HUD::DISPLAY_RADAR(0);
		GlobalFunc_7632(1);
		func_328();
		if (!iLocal_2740)
		{
			GlobalFunc_164(sLocal_294, 7500, 1);
		}
		func_64();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		GlobalFunc_574(303, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI3_BACK_TO_MICHAEL");
		iLocal_2800 = 0;
		bLocal_2714 = true;
		iLocal_2592 = 1;
		iLocal_2722 = 0;
		iLocal_3222 = 0;
		iLocal_2706 = -1;
		GlobalFunc_702(0, 0, 1);
	}
	if (iLocal_2592)
	{
		if (bLocal_2714)
		{
			func_507(1);
			func_504();
			func_503();
		}
		if (iLocal_2713 != 0)
		{
			if (GlobalFunc_663(sLocal_294, 0, 0) || GlobalFunc_663(sLocal_293, 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		if (iLocal_2713 == 0)
		{
			switch (iLocal_2800)
			{
				case 0:
					if (iLocal_2740)
					{
						iLocal_2740 = 0;
						iLocal_2800 = 2;
					}
					else if (iLocal_2698[4] || (iLocal_2706 != -1 && MISC::GET_GAME_TIMER() > iLocal_2706))
					{
						if (GlobalFunc_5170())
						{
							func_260("F3_ZOOM1", 0, 0);
							iLocal_2800++;
						}
						else if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
					}
					else if (!iLocal_2692[0])
					{
						if (GlobalFunc_5170())
						{
							func_260("F3_SCOPE1", 0, 0);
							iLocal_2692[0] = 1;
						}
					}
					else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 5000)
					{
						func_260("F3_ZOOMD", 0, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_5170())
					{
						func_260("F3_SPOT1", 0, 0);
						if (!RECORDING::_IS_RECORDING())
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						}
						iLocal_2800++;
					}
					break;
				
				case 2:
					if (GlobalFunc_5170())
					{
						if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
						{
							AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
						}
						CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_4p2", 8);
						func_324(0, 0, cLocal_291, 0);
						func_260("F3_SPOT1b", 0, 0);
						iLocal_2800++;
					}
					break;
				
				case 3:
					if (!GlobalFunc_111())
					{
						iLocal_2722 = 1;
						iLocal_2800++;
					}
					break;
				
				case 4:
					if (func_391(6))
					{
						HUD::DISPLAY_RADAR(0);
						iLocal_681 = 7;
					}
					else if (bLocal_2725)
					{
						bLocal_2714 = false;
					}
					else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2772) > 15000)
					{
						func_260("F3_PROMPT", 0, 0);
					}
					break;
			}
		}
		else if (func_501())
		{
			if (func_391(10))
			{
				iLocal_681 = 11;
			}
		}
		if (iLocal_681 != 6)
		{
			GlobalFunc_571(0, -1);
			GlobalFunc_7632(0);
			func_49();
			iLocal_2592 = 0;
		}
	}
}

void func_707()//Position - 0x7B393
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	GlobalFunc_2516();
	GlobalFunc_5077();
	if (!iLocal_2592)
	{
		HUD::DISPLAY_RADAR(0);
		func_332(5, "5.Trevor Tortures Second", 0, 0, 0, 1);
		func_510();
		func_328();
		iLocal_2800 = 0;
		iLocal_2592 = 1;
		iLocal_3222 = 0;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PED::SET_CREATE_RANDOM_COPS(0);
		GlobalFunc_702(1, 0, 1);
	}
	if (iLocal_2592)
	{
		bLocal_2618 = true;
		switch (iLocal_2800)
		{
			case 0:
				if (func_400())
				{
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
					}
					iLocal_2800++;
				}
				break;
			
			case 1:
				if (func_693())
				{
					func_4();
					func_512();
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(15f, 5f, 4);
					}
					iLocal_2800++;
				}
				break;
			
			case 2:
				if (func_512())
				{
					func_507(0);
					func_504();
					iLocal_681 = 6;
				}
				break;
		}
		if (iLocal_681 != 5)
		{
			func_25(1, 1, 1);
			func_49();
			iLocal_2801 = 0;
			iLocal_2623 = 0;
			iLocal_2592 = 0;
		}
	}
}

void func_708()//Position - 0x7B495
{
	if (!iLocal_2592)
	{
		func_332(4, "4. Michael Drives 2nd", 0, 0, 0, 1);
		func_510();
		func_328();
		HUD::DISPLAY_RADAR(1);
		GlobalFunc_5652(&Local_682, 1, 0);
		PED::SET_PED_CONFIG_FLAG(func_20(), 170, 1);
		iLocal_2800 = 0;
		iLocal_2592 = 1;
		iLocal_2731 = 0;
		iLocal_2732 = 0;
		PED::SET_PED_NON_CREATION_AREA(Vector(16.20654f, 351.9778f, -2969.646f) - Vector(2.6875f, 26.125f, 24.4375f), Vector(16.20654f, 351.9778f, -2969.646f) + Vector(2.6875f, 26.125f, 24.4375f));
		PATHFIND::SET_PED_PATHS_IN_AREA(Vector(16.20654f, 351.9778f, -2969.646f) - Vector(2.6875f, 26.125f, 24.4375f), Vector(16.20654f, 351.9778f, -2969.646f) + Vector(2.6875f, 26.125f, 24.4375f), 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(16.20654f, 351.9778f, -2969.646f) - Vector(2.6875f, 26.125f, 24.4375f), Vector(16.20654f, 351.9778f, -2969.646f) + Vector(2.6875f, 26.125f, 24.4375f), 0, 1);
		iLocal_2752 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(16.20654f, 351.9778f, -2969.646f) - Vector(2.6875f, 26.125f, 24.4375f), Vector(16.20654f, 351.9778f, -2969.646f) + Vector(2.6875f, 26.125f, 24.4375f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(Local_167, 100f, 1, 0, 0, 0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
		{
			GlobalFunc_690(&Local_682, iLocal_3064);
		}
		iLocal_2713 = 0;
		bLocal_2614 = false;
		iLocal_2615 = 0;
		iLocal_2712 = 0;
		iLocal_3222 = 0;
		iLocal_2692[0] = 0;
		GlobalFunc_702(0, 0, 1);
	}
	if (iLocal_2592)
	{
		if (bLocal_2714)
		{
			func_507(1);
			func_503();
			if (GlobalFunc_5170())
			{
				switch (iLocal_2713)
				{
					case 1:
						GlobalFunc_5653(iLocal_3047, "GENERIC_SHOCKED_MED", "Dave", 3);
						iLocal_69 = 10;
						break;
					
					case 2:
						GlobalFunc_5653(iLocal_3047, "GENERIC_SHOCKED_MED", "Dave", 3);
						iLocal_69 = 12;
						break;
					
					case 3:
						GlobalFunc_5653(iLocal_3047, "GENERIC_SHOCKED_MED", "Dave", 3);
						iLocal_69 = 11;
						break;
				}
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
				{
					if (iLocal_2713 != 0)
					{
						bLocal_2594 = true;
					}
				}
			}
		}
		if (iLocal_2713 == 0)
		{
			switch (iLocal_2800)
			{
				case 0:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_COFFEE_BREAK"))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_COFFEE_BREAK");
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_DRIVE_CHUMASH"))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_DRIVE_CHUMASH");
						}
					}
					func_713("F3_DRV2", Local_167, 30f);
					if (!iLocal_2692[0])
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -3102.1f, 349.82f, 16.71f, 1) < 250f)
						{
							iLocal_2692[0] = 1;
						}
					}
					else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -3102.1f, 349.82f, 16.71f, 1) > 300f)
					{
						func_60(1);
						iLocal_3222 = 0;
						iLocal_2692[0] = 0;
						bLocal_2714 = false;
					}
					if (iLocal_2692[0])
					{
						if (func_687(0, 1, 1, 0) && func_513(0, 1, 2, 1, 0))
						{
							bLocal_2714 = true;
						}
					}
					if (func_710(&Local_682, Local_167, -2958.951f, 370.9063f, 13.51989f, -2967.798f, 352.6486f, 16.83169f, 4.625f, 1, iLocal_3047, sLocal_295, "TFT_RTNDAV", sLocal_297, sLocal_298, 1, 1, 2, 1, -1))
					{
						GlobalFunc_5652(&Local_682, 1, 0);
						func_25(0, 1, 1);
						GlobalFunc_7632(1);
						GlobalFunc_5105();
						iLocal_2800++;
					}
					else
					{
						if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_167, 1) < 100f)
							{
								if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
								{
									AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
								}
								CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_2", 8);
								func_324(1, 1, cLocal_291, 0);
							}
						}
						else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_167, 1) > 120f || GlobalFunc_2233())
						{
							CUTSCENE::REMOVE_CUTSCENE();
						}
						if (bLocal_2614)
						{
							if (!iLocal_2615)
							{
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_167, 1) < 25f)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FBI3_MICHAEL_ARRIVES_2");
									iLocal_2615 = 1;
								}
							}
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))))
					{
						if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 1, 0.1f, 0, 1))
						{
							iLocal_2722 = 1;
							iLocal_2800++;
						}
					}
					else
					{
						iLocal_2722 = 1;
						iLocal_2800++;
					}
					break;
				
				case 2:
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_3047, 1))
					{
						GlobalFunc_702(1, 0, 1);
						iLocal_2800++;
					}
					else
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!GlobalFunc_709(PLAYER::PLAYER_PED_ID(), -828834893, 1))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3047, 1))
						{
							if (!GlobalFunc_709(iLocal_3047, -828834893, 1))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_3047, 500, 0);
							}
						}
					}
					break;
				
				case 3:
					if (func_391(4))
					{
						HUD::DISPLAY_RADAR(0);
						iLocal_681 = 5;
					}
					break;
				}
		}
		if (iLocal_681 != 4)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_3139))
			{
				HUD::REMOVE_BLIP(&uLocal_3139);
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(16.20654f, 351.9778f, -2969.646f) - Vector(2.6875f, 26.125f, 24.4375f), Vector(16.20654f, 351.9778f, -2969.646f) + Vector(2.6875f, 26.125f, 24.4375f), 0);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2752, 0);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2753, 0);
			GlobalFunc_7632(0);
			func_49();
			iLocal_2592 = 0;
		}
	}
}


bool func_710(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, int iParam19, bool bParam20, int iParam21)//Position - 0x7BA8E
{
	return func_276(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 1, iParam12, 0, 0, 0, sParam13, sParam14, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam15, bParam17, bParam18, sParam16, 1, iParam19, bParam20, iParam21, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}



void func_713(char* sParam0, struct<3> Param1, float fParam4)//Position - 0x7BAF7
{
	if (!iLocal_2708[0])
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_3047))
		{
			iLocal_2612 = MISC::GET_GAME_TIMER() + 5000;
			iLocal_2613 = -1;
			StringCopy(&Local_2600, sParam0, 24);
			iLocal_2708[0] = 1;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_2600) && MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2606))
	{
		if (((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_3047))) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) || (!GlobalFunc_111() && GlobalFunc_644(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
		{
			if (iLocal_2612 == -1)
			{
				iLocal_2612 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
		else
		{
			iLocal_2612 = -1;
		}
		if (iLocal_2612 != -1 && MISC::GET_GAME_TIMER() > iLocal_2612)
		{
			if (GlobalFunc_111())
			{
				Local_2600 = { GlobalFunc_560() };
				cLocal_2606 = { GlobalFunc_514() };
				GlobalFunc_5105();
			}
			else
			{
				StringCopy(&Local_2600, "NOCONVO", 24);
				StringCopy(&cLocal_2606, "NOCONVO", 24);
			}
			if (!iLocal_2708[1])
			{
				iLocal_2613 = -1;
				iLocal_2708[2] = 0;
			}
			else
			{
				iLocal_2613 = -2;
			}
		}
	}
	else if (((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0 && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_3047)) && !GlobalFunc_644(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_5105();
		}
		else if (!iLocal_2708[1] && !MISC::ARE_STRINGS_EQUAL(&Local_2600, "NOCONVO"))
		{
			if (!iLocal_2708[2])
			{
				iLocal_2612 = -1;
				iLocal_2708[2] = 1;
			}
			if (iLocal_2612 == -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_682.f_5))
				{
					if (GlobalFunc_5170())
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(func_20()) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_3047, PED::GET_VEHICLE_PED_IS_IN(func_20(), 0)))
						{
							iLocal_2612 = MISC::GET_GAME_TIMER() + 5000;
						}
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_2612)
			{
				func_260(&Local_2600, 0, 0);
				StringCopy(&Local_2600, "", 24);
				StringCopy(&cLocal_2606, "", 24);
				iLocal_2708[1] = 1;
				iLocal_2612 = MISC::GET_GAME_TIMER();
			}
		}
		else if (((!MISC::IS_STRING_NULL_OR_EMPTY(&Local_2600) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2606)) && !MISC::ARE_STRINGS_EQUAL(&Local_2600, "NOCONVO")) && !MISC::ARE_STRINGS_EQUAL(&cLocal_2606, "NOCONVO"))
		{
			if (iLocal_2612 == -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_682.f_5))
				{
					if (GlobalFunc_5170())
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(func_20()) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_3047, PED::GET_VEHICLE_PED_IS_IN(func_20(), 0)))
						{
							iLocal_2612 = MISC::GET_GAME_TIMER() + 2000;
						}
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_2612)
			{
				func_260(&Local_2600, &cLocal_2606, 0);
				StringCopy(&Local_2600, "", 24);
				StringCopy(&cLocal_2606, "", 24);
			}
		}
		else
		{
			StringCopy(&Local_2600, "", 24);
			StringCopy(&cLocal_2606, "", 24);
		}
	}
	else
	{
		iLocal_2708[2] = 0;
		if (!GlobalFunc_111())
		{
			if (iLocal_2613 == -2)
			{
				iLocal_2613 = MISC::GET_GAME_TIMER() + 1000;
			}
			else if (iLocal_2613 == -1)
			{
				iLocal_2613 = MISC::GET_GAME_TIMER() + 20000;
			}
		}
		if (GlobalFunc_5170())
		{
			if (iLocal_2613 >= 0 && MISC::GET_GAME_TIMER() > iLocal_2613)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					GlobalFunc_5653(iLocal_3047, "FBI3_DLAA", "Dave", 6);
					iLocal_2613 = -1;
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) > fParam4)
				{
					if ((!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_3047)) && iLocal_2712 < 2)
					{
						GlobalFunc_5653(iLocal_3047, "NEED_A_VEHICLE", "Dave", 6);
						iLocal_2613 = -1;
						iLocal_2712++;
					}
					else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || GlobalFunc_644(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						GlobalFunc_5653(iLocal_3047, "FBI3_DKAA", "Dave", 6);
						iLocal_2613 = -1;
					}
				}
			}
		}
	}
}




void func_717()//Position - 0x7BFCF
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	GlobalFunc_2516();
	GlobalFunc_5077();
	if (!iLocal_2592)
	{
		func_328();
		func_332(3, "3. Trevor Tortures First", 0, 0, 0, 0);
		func_510();
		HUD::DISPLAY_RADAR(0);
		GlobalFunc_7632(1);
		bLocal_2652 = false;
		iLocal_2800 = 0;
		iLocal_2592 = 1;
		iLocal_3222 = 0;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PED::SET_CREATE_RANDOM_COPS(0);
		func_412("FBI3 MINIGAME SELECT");
		GlobalFunc_702(1, 0, 1);
	}
	if (iLocal_2592)
	{
		bLocal_2618 = true;
		if (iLocal_2800 < 5)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (GlobalFunc_4926(1000) && !bLocal_2594)
				{
					func_460(800);
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_4956();
			}
		}
		switch (iLocal_2800)
		{
			case 0:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_START");
				iLocal_2624 = 1;
				if (!bLocal_2727)
				{
					func_399(&uLocal_3145, &uLocal_3146, 146.789f, -2204.114f, 5.6386f, -10.8642f, 7.4269f, 61.6078f, 17.461f, 146.789f, -2204.114f, 5.6386f, -10.8642f, 7.4269f, 61.6078f, 16.0803f, 5000, 0, 0);
					func_398(uLocal_3145, uLocal_3146, sLocal_268, 0.3f);
				}
				SYSTEM::SETTIMERB(0);
				func_260("F3_CALL1B", 0, 0);
				func_248(800);
				GlobalFunc_Display_Help_Text(sLocal_314);
				iLocal_2800++;
				break;
			
			case 1:
				if (SYSTEM::TIMERB() > 5000 || CAM::IS_SCREEN_FADED_OUT())
				{
					func_399(&uLocal_3145, &uLocal_3146, 143.8915f, -2202.999f, 7.543f, -73.9446f, -17.3188f, -160.2916f, 16.3626f, 143.661f, -2203.036f, 7.5307f, -72.307f, -17.3188f, -154.9457f, 16.3626f, 5000, 0, 0);
					func_398(uLocal_3145, uLocal_3146, sLocal_268, 0.3f);
					SYSTEM::SETTIMERB(0);
					GlobalFunc_Display_Help_Text(sLocal_315);
					iLocal_2800++;
				}
				break;
			
			case 2:
				if (SYSTEM::TIMERB() > 5000 || CAM::IS_SCREEN_FADED_OUT())
				{
					func_399(&uLocal_3145, &uLocal_3146, 142.5872f, -2200.365f, 4.5637f, 7.3505f, -5f, -159.0778f, 24.4943f, 142.5258f, -2200.388f, 4.5588f, 7.3505f, -5f, -157.9305f, 24.4943f, 5000, 0, 0);
					func_398(uLocal_3145, uLocal_3146, sLocal_268, 0.3f);
					SYSTEM::SETTIMERB(0);
					GlobalFunc_Display_Help_Text(sLocal_316);
					iLocal_2800++;
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERB() > 5000 || CAM::IS_SCREEN_FADED_OUT())
				{
					func_399(&uLocal_3145, &uLocal_3146, 143.4552f, -2204.979f, 4.8811f, -3.6438f, 2.7744f, 7.1743f, 18.4641f, 143.4501f, -2204.992f, 4.8f, -3.6438f, 2.7744f, 7.1743f, 18.4641f, 5000, 0, 0);
					func_398(uLocal_3145, uLocal_3146, sLocal_268, 0.3f);
					SYSTEM::SETTIMERB(0);
					GlobalFunc_Display_Help_Text(sLocal_317);
					iLocal_2800++;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERB() > 5000 || CAM::IS_SCREEN_FADED_OUT())
				{
					func_400();
					func_248(250);
					iLocal_2800++;
				}
				break;
			
			case 5:
				if (func_400())
				{
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
					}
					iLocal_2800++;
				}
				break;
			
			case 6:
				if (func_693())
				{
					func_4();
					func_718();
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(15f, 0f, 4);
					}
					iLocal_2800++;
				}
				break;
			
			case 7:
				if (func_718())
				{
					iLocal_681 = 4;
				}
				break;
		}
		if (iLocal_681 != 3)
		{
			func_25(1, 1, 1);
			func_50();
			func_49();
			iLocal_2592 = 0;
		}
	}
}

int func_718()//Position - 0x7C3BD
{
	float fVar0;
	var uVar1;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (!bLocal_2725)
	{
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			if (ENTITY::DOES_ENTITY_EXIST(func_20()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(func_20(), 0);
				ENTITY::SET_ENTITY_COORDS(func_20(), Local_173, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_20(), 208.924f);
				ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
				STREAMING::SET_FOCUS_ENTITY(func_20());
				if (STREAMING::IS_ENTITY_FOCUS(func_20()))
				{
				}
			}
			if (func_692(&uLocal_707, -1270.998f, -891.1161f, 12.0253f, GlobalFunc_107(Vector(16.8556f, -870.2449f, -1267.347f) - Vector(12.0253f, -891.1161f, -1270.998f)), 40f, 1))
			{
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_TORTURE_1"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_1");
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3046, cLocal_285, 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3045, cLocal_291, 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_292, 3, joaat("cs_mrk"), 0);
			func_463();
			func_464(0, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(4);
			if (!RECORDING::_IS_RECORDING())
			{
				RECORDING::_0x48621C9FCA3EBD28(4);
			}
			func_25(1, 1, 1);
			bLocal_2720 = false;
			bLocal_2725 = true;
			iLocal_2715 = 0;
			iLocal_2625 = 0;
			iLocal_2733 = 0;
			bLocal_2734 = false;
			iLocal_2741 = 0;
			iLocal_3222 = 0;
			bLocal_2614 = false;
		}
	}
	else
	{
		switch (iLocal_2741)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::_0xC61B86C9F61EB404(1);
					if (!iLocal_2625)
					{
						func_248(250);
						iLocal_2625 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x81CBAE94390F9F89();
					}
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(0f, 8f, 4);
					}
					bLocal_2734 = true;
					GRAPHICS::_0xE3E2C1B4C59DBC77(6);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					iLocal_2733 = 1;
					ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
				}
				if ((((((func_687(1, 0, 0, 0) && func_513(1, 0, 4, 0, 0)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_20())) && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_266)) && iLocal_2733) && bLocal_2734)
				{
					GlobalFunc_9019(&iLocal_2836, 0);
					func_419(&iLocal_2836, 1, 0, 0);
					func_327(func_181());
					func_327(func_20());
					if ((PLAYER::PLAYER_PED_ID() == func_20() && STREAMING::IS_ENTITY_FOCUS(func_20())) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						STREAMING::CLEAR_FOCUS();
						GlobalFunc_5181(&uLocal_707);
					}
					func_50();
					ENTITY::FREEZE_ENTITY_POSITION(func_20(), 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_248(800);
					func_328();
					func_260("F3_COFFEE", 0, 0);
					uLocal_3148 = CAM::CREATE_CAMERA(964613260, 1);
					iLocal_3093[38] = PED::CREATE_SYNCHRONIZED_SCENE(Local_214, Local_217, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_20(), iLocal_3093[38], cLocal_266, "002291_02_fbi_3_coffee_w_dave_exit_mic", 1000f, -1.5f, 6, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3047, iLocal_3093[38], cLocal_266, "002291_02_fbi_3_coffee_w_dave_exit_dave", 1000f, -1.5f, 6, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_371[7], iLocal_3093[38], "002291_02_fbi_3_coffee_w_dave_exit_chair", cLocal_266, 1000f, -8f, 4, 1148846080);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3148, iLocal_3093[38], "002291_02_fbi_3_coffee_w_dave_exit_cam", cLocal_266);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3093[38], 0);
					if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
					{
						CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_20(), 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3047, 0, 0);
					PED::SET_FORCE_FOOTSTEP_UPDATE(func_20(), 1);
					PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_3047, 1);
					GlobalFunc_8380(1, 1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_COFFEE_BREAK");
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_BACK_TO_MICHAEL");
					SYSTEM::SETTIMERB(0);
					HUD::DISPLAY_RADAR(0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_2753 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(12.52045f, -887.2061f, -1267.129f) - Vector(2.5f, 9.4375f, 12.4375f), Vector(12.52045f, -887.2061f, -1267.129f) - Vector(2.5f, 9.4375f, 12.4375f), 0, 1, 1, 1);
					MISC::CLEAR_AREA(-1267.129f, -887.2061f, 12.52045f, 15f, 1, 0, 0, 0);
					iLocal_2625 = 0;
					iLocal_2731 = 0;
					iLocal_2732 = 0;
					bLocal_2734 = false;
					iLocal_2741++;
				}
				break;
			
			case 1:
				if (!bLocal_2614)
				{
					if (SYSTEM::TIMERB() > 3500)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI3_MICHAEL_MUSIC_2");
						bLocal_2614 = true;
					}
				}
				if (func_205(iLocal_3093[38]))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if ((GlobalFunc_4926(1000) && func_206(38, 0f, 0.675f)) && !bLocal_2594)
						{
							func_460(800);
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_5181(&uLocal_707);
						func_692(&uLocal_707, -1272.163f, -880.3244f, 12.8902f, GlobalFunc_107(Vector(12.5055f, -883.1075f, -1270.223f) - Vector(12.8902f, -880.3244f, -1272.163f)), 100f, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						CAM::DESTROY_CAM(uLocal_3148, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[38], 1f);
						ENTITY::SET_ENTITY_COORDS(func_20(), -1267.295f, -888.0948f, 10.4967f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_20(), 209.4294f);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_20(), 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3047, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[6]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_371[6]))
							{
								ENTITY::DETACH_ENTITY(iLocal_371[6], 1, 1);
							}
							OBJECT::DELETE_OBJECT(&(iLocal_371[6]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[5]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_371[5]))
							{
								ENTITY::DETACH_ENTITY(iLocal_371[5], 1, 1);
							}
							OBJECT::DELETE_OBJECT(&(iLocal_371[5]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3073))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3073))
							{
								ENTITY::DETACH_ENTITY(iLocal_3073, 1, 1);
							}
							OBJECT::DELETE_OBJECT(&iLocal_3073);
						}
						if (!bLocal_2614)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_MICHAEL_MUSIC_2");
							bLocal_2614 = true;
						}
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_371[5]))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_20(), MISC::GET_HASH_KEY("DetachCup")))
							{
								ENTITY::DETACH_ENTITY(iLocal_371[5], 0, 1);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_371[5], 1);
							}
						}
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_371[6]))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[38]) >= 0.675f)
							{
								ENTITY::DETACH_ENTITY(iLocal_371[6], 1, 1);
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[38]) >= 0.9f)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3073))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3073))
								{
									ENTITY::DETACH_ENTITY(iLocal_3073, 1, 1);
								}
								OBJECT::DELETE_OBJECT(&iLocal_3073);
							}
						}
						if (!iLocal_2732)
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_3047, MISC::GET_HASH_KEY("ENDS_IN_WALK")))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
								TASK::TASK_FORCE_MOTION_STATE(0, -668482597, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
								{
									TASK::TASK_ENTER_VEHICLE(0, iLocal_3064, 20000, 0, 1f, 1, 0);
								}
								else
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, func_20(), -1);
								}
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3047, uLocal_3083);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
								iLocal_2732 = 1;
							}
						}
						if (!iLocal_2731)
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_20(), MISC::GET_HASH_KEY("WalkInterruptible")))
							{
								TASK::TASK_FORCE_MOTION_STATE(func_20(), -668482597, 0);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 192.2249f, 0, 0);
								PED::SET_FORCE_FOOTSTEP_UPDATE(func_20(), 0);
								iLocal_2731 = 1;
							}
						}
						if (!iLocal_2731)
						{
						}
						if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::_0x3044240D2E0FA842())
						{
							if (ENTITY::FIND_ANIM_EVENT_PHASE(cLocal_266, "002291_02_fbi_3_coffee_w_dave_exit_mic", "WalkInterruptible", &fVar0, &uVar1))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[38]) >= (fVar0 - (3f / 16.667f)))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((212.243f - ENTITY::GET_ENTITY_HEADING(func_20())));
									CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 0, 0, 0);
								}
							}
						}
					}
				}
				else if ((CAM::IS_SCREEN_FADED_IN() || !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					GlobalFunc_8380(0, 1, 1, 0);
					GlobalFunc_7632(0);
					HUD::DISPLAY_RADAR(1);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(func_20(), -8f, 1);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3047, -8f, 1);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_371[7], -8f, 1);
					OBJECT::DELETE_OBJECT(&(iLocal_371[7]));
					ENTITY::REMOVE_MODEL_HIDE(-1267.62f, -880.46f, 10.95f, 0.25f, joaat("prop_chair_01a"), 0);
					CAM::DESTROY_CAM(uLocal_3148, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3047, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
					{
						GlobalFunc_690(&Local_682, iLocal_3064);
					}
					func_248(800);
					iLocal_2612 = -1;
					iLocal_2613 = -1;
					iLocal_2692[0] = 0;
					iLocal_2692[1] = 0;
					iLocal_2692[2] = 0;
					iLocal_2692[3] = 0;
					StringCopy(&cLocal_2606, "", 24);
					StringCopy(&Local_2600, "", 24);
					bLocal_2714 = false;
					iLocal_2721 = 0;
					bLocal_2725 = false;
					iLocal_3222 = 0;
					bLocal_2618 = false;
					GlobalFunc_5181(&uLocal_707);
					return 1;
				}
				break;
		}
		if (iLocal_2741 > 0)
		{
			bLocal_2618 = false;
		}
	}
	return 0;
}


void func_720()//Position - 0x7CCCF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	char cVar7[16];
	struct<3> Var11;
	struct<3> Var14;
	
	if (!iLocal_2592)
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
		func_332(2, "2. Michael Drives 1st", 0, 0, 0, 0);
		if (Global_93588.f_2167.f_11 == 2 && Global_93588.f_2167.f_7)
		{
			GlobalFunc_4910(&(Global_93588.f_2167));
		}
		func_328();
		if (bLocal_2748)
		{
			GlobalFunc_718(&uLocal_707, joaat("freight"));
			GlobalFunc_718(&uLocal_707, joaat("freightcont1"));
			GlobalFunc_718(&uLocal_707, joaat("freightcont2"));
			GlobalFunc_718(&uLocal_707, joaat("freightgrain"));
			GlobalFunc_718(&uLocal_707, joaat("tankercar"));
			GlobalFunc_718(&uLocal_707, joaat("freightcar"));
			VEHICLE::SET_RANDOM_TRAINS(0);
			VEHICLE::DELETE_ALL_TRAINS();
		}
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_2768, joaat("prop_lrggate_02_ld"), -880.59f, -9.56f, 41.97f, 1, 1, 0);
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_2769, joaat("prop_lrggate_02_ld"), -893.16f, 8.63f, 43.71f, 1, 1, 0);
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_2768) || !OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_2769))
		{
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_2768, 1, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_2769, 1, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3064) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
		{
			GlobalFunc_690(&Local_682, iLocal_3064);
		}
		func_260("F3_WHERE", 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3047, 1);
		MISC::CLEAR_AREA(-890.9f, -4.3f, 42.39f, 38.688f, 1, 0, 0, 0);
		iLocal_2751 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(48.06837f, -4.52605f, -890.9593f) - Vector(10.4375f, 30f, 35f), Vector(48.06837f, -4.52605f, -890.9593f) + Vector(10.4375f, 30f, 35f), 0, 1, 1, 1);
		PED::SET_PED_NON_CREATION_AREA(Vector(48.06837f, -4.52605f, -890.9593f) - Vector(10.4375f, 30f, 35f), Vector(48.06837f, -4.52605f, -890.9593f) + Vector(10.4375f, 30f, 35f));
		PATHFIND::SET_PED_PATHS_IN_AREA(Vector(48.06837f, -4.52605f, -890.9593f) - Vector(10.4375f, 30f, 35f), Vector(48.06837f, -4.52605f, -890.9593f) + Vector(10.4375f, 30f, 35f), 0, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_3047, joaat("weapon_pistol"), -1, 0, 1);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 1, 2500, 0, 0, 0);
		}
		iLocal_2712 = 0;
		iLocal_2771 = -1;
		iLocal_2612 = -1;
		iLocal_2613 = 0;
		iLocal_2800 = 0;
		StringCopy(&Local_2600, "", 24);
		StringCopy(&cLocal_2606, "", 24);
		iLocal_2592 = 1;
		iLocal_2692[1] = 0;
		iLocal_2692[2] = 0;
		iLocal_2692[3] = 0;
		bLocal_2614 = false;
		iLocal_2615 = 0;
		iLocal_2747 = 0;
		iLocal_2743[0] = 0;
		iLocal_2743[1] = 0;
		iLocal_2743[2] = 0;
		iLocal_3222 = 0;
	}
	if (iLocal_2592)
	{
		func_725();
		switch (iLocal_2800)
		{
			case 0:
				if (!iLocal_2692[4])
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3047, 0))
					{
						iLocal_2692[4] = 1;
					}
					else
					{
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
					}
				}
				if (func_724(&Local_682, Local_164, -874.999f, -21.77999f, 40.75119f, -871.3933f, -6.139875f, 45.71211f, 13.0625f, 1, iLocal_3047, "TFT_DRIVE1", "TFT_RTNDAV", 0, 1, 1, -1))
				{
					iLocal_2747 = 1;
					HUD::CLEAR_PRINTS();
					GlobalFunc_5105();
					GlobalFunc_5652(&Local_682, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
					}
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var1, &Var4);
					if (FIRE::IS_ENTITY_ON_FIRE(func_20()))
					{
						FIRE::STOP_ENTITY_FIRE(func_20());
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_3047))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_3047);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
					{
						FIRE::STOP_ENTITY_FIRE(iVar0);
					}
					VEHICLE::SET_VEHICLE_BODY_HEALTH(iVar0, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, 1000f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 1000f);
					if ((((((PED::IS_PED_IN_VEHICLE(func_20(), iVar0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && !GlobalFunc_543(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0))) && MISC::ABSF((Var4.f_2 - Var1.f_2)) < 2.5f)
					{
						iLocal_3068 = iVar0;
						MISC::CLEAR_AREA(Local_164, 10f, 1, 0, 0, 0);
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3068)))
						{
							StringCopy(&cVar7, "seat_f", 16);
						}
						else
						{
							StringCopy(&cVar7, "seat_dside_f", 16);
						}
						ENTITY::SET_ENTITY_COORDS(iLocal_3068, -876.7368f, -14.0188f, 41.4273f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_3068, 164.5692f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3068);
						Var11 = { Vector(0.80946f, -1.3507f, 1.79144f) + Vector(0.15f, 0f, 0f) + ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_3068, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3068, &cVar7)) };
						Var14 = { Vector(0.810997f, -0.806258f, 2.34113f) + Vector(0.15f, 0f, 0f) + ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_3068, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3068, &cVar7)) };
						uLocal_3150 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var11, -3.7418f, -0.0529f, 76.249f, 33.469f, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_3150, Var14, -3.7418f, -0.0529f, 76.249f, 33.469f, 3000, 1, 1, 2);
						CAM::SHAKE_CAM(uLocal_3150, sLocal_268, 0.5f);
						ENTITY::SET_ENTITY_COORDS(iLocal_3068, -875.0729f, -9.6045f, 41.7469f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_3068, 162.8776f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3068);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), iLocal_3068, -877.7476f, -17.7999f, 41.2598f, 2f, 0, ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 262144, 0.1f, 10f);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3068, 2f);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -878.9167f, -13.8135f, 41.5259f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 84.7426f);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3048[0], -1);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						MISC::CLEAR_AREA(Local_164, 10f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS(iLocal_3047, -878.7094f, -12.4876f, 41.5789f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_3047, 83.8295f);
						PED::FORCE_PED_MOTION_STATE(iLocal_3047, -1871534317, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_3047, iLocal_3048[0], -1);
						uLocal_3150 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -876.639f, -12.2161f, 44.6939f, -7.0418f, 0f, 90.6103f, 30.4f, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_3150, -876.7625f, -13.8252f, 43.4649f, -5.5399f, 0f, 72.9562f, 30.4f, 7000, 1, 1, 2);
					}
					CAM::SET_CAM_FAR_CLIP(uLocal_3150, 30f);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && GlobalFunc_713(iVar0, Local_164, 1) < 100f)
					{
						GlobalFunc_9138(iVar0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_3066);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3064) && (!ENTITY::DOES_ENTITY_EXIST(iLocal_3068) || iLocal_3068 != iLocal_3064))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 == iLocal_3064)
						{
							iVar0 = 0;
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3064);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3065) && (!ENTITY::DOES_ENTITY_EXIST(iLocal_3068) || iLocal_3068 != iLocal_3065))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 == iLocal_3065)
						{
							iVar0 = 0;
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3065);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && (!ENTITY::DOES_ENTITY_EXIST(iLocal_3068) || iLocal_3068 != iVar0))
					{
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
					HUD::DISPLAY_RADAR(0);
					CAM::SHAKE_CAM(uLocal_3150, sLocal_268, 0.2f);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3048[1], -1, 2064, 4);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_3047, iLocal_3048[1], -1, 2064, 4);
					func_498(1, 1);
					AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_DRIVE_FIRST");
					AUDIO::START_AUDIO_SCENE("FBI_3_FOCUS_CAM_PHOTOSHOOT");
					GlobalFunc_8380(1, 1, 1, 0);
					iLocal_2771 = 0;
					iLocal_2800++;
				}
				else
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_164, 1) < 50f)
						{
							func_692(&uLocal_707, -872.9581f, -13.6342f, 42.8937f, Vector(43.8704f, -12.381f, -883.684f) - Vector(42.8937f, -13.6342f, -872.9581f), 30f, 0);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_164, 1) > 75f)
					{
						GlobalFunc_5181(&uLocal_707);
					}
					if (!bLocal_2614)
					{
						if (SYSTEM::TIMERB() > 3500 || PED::IS_PED_IN_ANY_VEHICLE(func_20(), 1))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_MICHAEL_MUSIC_1");
							bLocal_2614 = true;
						}
					}
					else if (!iLocal_2615)
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_164, 1) < 25f)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_MICHAEL_ARRIVES_1");
							iLocal_2615 = 1;
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_DRIVE_FIRST"))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							AUDIO::START_AUDIO_SCENE("FBI_3_MICHAEL_DRIVE_FIRST");
						}
					}
					if (bLocal_2748)
					{
						if (!iLocal_2692[3])
						{
							if ((((((!ENTITY::DOES_ENTITY_EXIST(iLocal_3067) && STREAMING::HAS_MODEL_LOADED(joaat("freight"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightgrain"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) && STREAMING::HAS_MODEL_LOADED(joaat("tankercar")))
							{
								iLocal_3067 = VEHICLE::CREATE_MISSION_TRAIN(15, 217.616f, -2215.75f, 11.6666f, 1);
								GlobalFunc_5174(&uLocal_707, joaat("freight"));
								GlobalFunc_5174(&uLocal_707, joaat("freightcont1"));
								GlobalFunc_5174(&uLocal_707, joaat("freightcont2"));
								GlobalFunc_5174(&uLocal_707, joaat("freightgrain"));
								GlobalFunc_5174(&uLocal_707, joaat("tankercar"));
								GlobalFunc_5174(&uLocal_707, joaat("freightcar"));
								VEHICLE::SET_TRAIN_SPEED(iLocal_3067, 15f);
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_3067, 15f);
								iLocal_2692[3] = 1;
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3067))
						{
							if (GlobalFunc_156(iLocal_3067, func_20(), 1) > 200f)
							{
								VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_3067, 0);
								iLocal_3067 = 0;
								VEHICLE::SET_RANDOM_TRAINS(1);
							}
						}
					}
					func_713("F3_DRV1", Local_164, 30f);
				}
				break;
			
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3068) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3068, 0))
				{
					VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(iLocal_3068);
				}
				iLocal_2800++;
				break;
			
			case 2:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -876.7066f, -17.07964f, 40.98713f, -875.8317f, -13.64763f, 44.56224f, 5.25f, 0, 1, 0))
						{
							if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1f, -1, 1056964608, 0, 1))
							{
								if (GlobalFunc_709(PLAYER::PLAYER_PED_ID(), -1817882002, 1))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								}
							}
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				if (func_721())
				{
					GlobalFunc_8380(0, 1, 0, 0);
					iLocal_681 = 3;
				}
				else if (!GlobalFunc_709(PLAYER::PLAYER_PED_ID(), 150319005, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3048[1], -1, 2064, 4);
				}
				break;
		}
		switch (iLocal_2771)
		{
			case 0:
				if (!GlobalFunc_111())
				{
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
						RECORDING::_0x48621C9FCA3EBD28(4);
					}
					func_260("F3_CALL1Ai", 0, 0);
					iLocal_2771++;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_3047);
					TASK::TASK_USE_MOBILE_PHONE(iLocal_3047, 1, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PED_PHONE_DIAL_01", iLocal_3047, 0, 0, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_2771++;
				}
				break;
			
			case 2:
				if (SYSTEM::TIMERB() > 3500)
				{
					func_260("F3_CALL1Aii", 0, 0);
					iLocal_2771++;
				}
				break;
			
			case 3:
				if (!GlobalFunc_111())
				{
					TASK::TASK_USE_MOBILE_PHONE(iLocal_3047, 0, 1);
					SYSTEM::SETTIMERB(0);
					iLocal_2771++;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERB() > 1000)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_3047, func_20(), -1, 2049, 2);
					iLocal_2771++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERB() > 2000)
				{
					func_260("F3_COFFEE2", 0, 0);
					iLocal_2771++;
				}
				break;
			
			case 6:
				if (!GlobalFunc_111())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_2771++;
				}
				break;
			
			case 7:
				if (SYSTEM::TIMERB() > 1000)
				{
					if (RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x81CBAE94390F9F89();
					}
					iLocal_2722 = 1;
				}
				break;
		}
		if (iLocal_2771 > -1 && iLocal_2771 <= 6)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_498(1, 1);
				iLocal_2722 = 1;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				if (GlobalFunc_4926(1000) && !bLocal_2594)
				{
					if (RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x13B350B8AD0EEE10();
					}
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
		}
		if (iLocal_681 != 2)
		{
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_0x81CBAE94390F9F89();
			}
			GlobalFunc_7632(0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3067))
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_3067, 0);
				iLocal_3067 = 0;
			}
			VEHICLE::SET_RANDOM_TRAINS(1);
			func_49();
			iLocal_2592 = 0;
		}
	}
}

int func_721()//Position - 0x7DA5C
{
	int iVar0;
	
	if (!bLocal_2725)
	{
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 1);
		func_498(1, 1);
		GlobalFunc_5184(&uLocal_707, Local_98, 10f, 1);
		func_25(0, 1, 1);
		bLocal_2720 = false;
		bLocal_2725 = true;
		iLocal_2715 = 0;
		iLocal_2722 = 0;
		bLocal_2727 = false;
		iLocal_3222 = 0;
	}
	else if ((func_466(1, 1, 0) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_181())) && iLocal_2722)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_FOCUS_CAM_PHOTOSHOOT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_3_FOCUS_CAM_PHOTOSHOOT");
		}
		AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_1");
		func_399(&uLocal_3145, &uLocal_3146, 146.789f, -2204.114f, 5.6386f, -10.8642f, 7.4269f, 61.6078f, 17.461f, 146.789f, -2204.114f, 5.6386f, -10.8642f, 7.4269f, 61.6078f, 16.0803f, 5000, 0, 0);
		func_398(uLocal_3145, uLocal_3146, sLocal_268, 0.1f);
		bLocal_2727 = true;
		if (CAM::DOES_CAM_EXIST(uLocal_3150))
		{
			CAM::DESTROY_CAM(uLocal_3150, 0);
		}
		GlobalFunc_9019(&iLocal_2836, 2);
		func_419(&iLocal_2836, 1, 1, 1);
		func_327(func_181());
		func_327(func_20());
		GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
		GlobalFunc_5181(&uLocal_707);
		func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
		iVar0 = 0;
		while (iVar0 < iLocal_3048)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3048[iVar0]))
			{
				PED::DELETE_PED(&(iLocal_3048[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_3069)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3069[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_3069[iVar0]));
			}
			iVar0++;
		}
		GlobalFunc_5175(&uLocal_707, cLocal_262);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
		{
			PED::DELETE_PED(&iLocal_3047);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3066);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3064))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3064);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3065))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3065);
		}
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2751, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(48.06837f, -4.52605f, -890.9593f) - Vector(10.4375f, 30f, 35f), Vector(48.06837f, -4.52605f, -890.9593f) + Vector(10.4375f, 30f, 35f), 0);
		GRAPHICS::FADE_UP_PED_LIGHT(1082130432);
		iLocal_2721 = 0;
		bLocal_2725 = false;
		iLocal_3222 = 0;
		return 1;
	}
	return 0;
}



bool func_724(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x7DD55
{
	return func_276(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 1, iParam12, 0, 0, 0, sParam13, sParam14, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam15, bParam16, GlobalFunc_648(), 1, 0, bParam17, iParam18, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}

void func_725()//Position - 0x7DDAC
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3048[0]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_164, 1) < 300f)
		{
			switch (iLocal_3222)
			{
				case 0:
					GlobalFunc_718(&uLocal_707, iLocal_237);
					iLocal_3222++;
					break;
				
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_237))
					{
						GlobalFunc_718(&uLocal_707, iLocal_238);
						iLocal_3222++;
					}
					break;
				
				case 2:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_238))
					{
						GlobalFunc_718(&uLocal_707, iLocal_239);
						iLocal_3222++;
					}
					break;
				
				case 3:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_239))
					{
						GlobalFunc_718(&uLocal_707, iLocal_240);
						iLocal_3222++;
					}
					break;
				
				case 4:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_240))
					{
						GlobalFunc_718(&uLocal_707, iLocal_241);
						iLocal_3222++;
					}
					break;
				
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_241))
					{
						GlobalFunc_718(&uLocal_707, iLocal_242);
						iLocal_3222++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_242))
					{
						GlobalFunc_718(&uLocal_707, iLocal_243);
						iLocal_3222++;
					}
					break;
				
				case 7:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_243))
					{
						GlobalFunc_719(&uLocal_707, cLocal_262);
						iLocal_3222++;
					}
					break;
				
				case 8:
					if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_262))
					{
						iLocal_3048[0] = PED::CREATE_PED(26, iLocal_237, -887.3506f, -12.2818f, 42.1914f, 224.8453f, 1, 1);
						iLocal_3048[1] = PED::CREATE_PED(26, iLocal_238, -887.3506f, -12.2818f, 42.1914f, 224.8453f, 1, 1);
						iLocal_3048[4] = PED::CREATE_PED(26, iLocal_240, -887.3506f, -12.2818f, 42.1914f, 224.8453f, 1, 1);
						iLocal_3048[2] = PED::CREATE_PED(26, iLocal_239, -887.3506f, -12.2818f, 42.1914f, 224.8453f, 1, 1);
						iLocal_3048[3] = PED::CREATE_PED(26, iLocal_239, -887.3506f, -12.2818f, 42.1914f, 224.8453f, 1, 1);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_3048[iVar0], 0);
							iVar0++;
						}
						iLocal_3069[2] = OBJECT::CREATE_OBJECT(iLocal_243, -887.3506f, -12.2818f, 42.1914f, 1, 1, 0);
						iLocal_3069[0] = OBJECT::CREATE_OBJECT(iLocal_241, -887.3506f, -12.2818f, 42.1914f, 1, 1, 0);
						iLocal_3069[1] = OBJECT::CREATE_OBJECT(iLocal_242, -887.3506f, -12.2818f, 42.1914f, 1, 1, 0);
						GlobalFunc_5174(&uLocal_707, iLocal_237);
						GlobalFunc_5174(&uLocal_707, iLocal_238);
						GlobalFunc_5174(&uLocal_707, iLocal_239);
						GlobalFunc_5174(&uLocal_707, iLocal_240);
						GlobalFunc_5174(&uLocal_707, iLocal_241);
						GlobalFunc_5174(&uLocal_707, iLocal_242);
						GlobalFunc_5174(&uLocal_707, iLocal_243);
						iLocal_3093[44] = PED::CREATE_SYNCHRONIZED_SCENE(Local_220, Local_223, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[44], 1);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[0], iLocal_3093[44], cLocal_262, "base_guy", 1000f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[1], iLocal_3093[44], cLocal_262, "base_gal", 1000f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[4], iLocal_3093[44], cLocal_262, "base_prod", 1000f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[2], iLocal_3093[44], cLocal_262, "base_cman", 1000f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[3], iLocal_3093[44], cLocal_262, "base_sman", 1000f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[2], iLocal_3093[44], "base_clip", cLocal_262, 1000f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[0], iLocal_3093[44], "base_vcam", cLocal_262, 1000f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[1], iLocal_3093[44], "base_bmik", cLocal_262, 1000f, -8f, 0, 1148846080);
						AUDIO::_0xC8EDE9BDBCCBA6D4("FBI_3_FIRST_ACTION", Local_220);
						iLocal_2743[0] = 1;
						iLocal_2743[1] = 1;
						iLocal_2743[2] = 1;
					}
					break;
				}
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_164, 1) > 350f)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_3048)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3048[iVar1]))
			{
				PED::DELETE_PED(&(iLocal_3048[iVar1]));
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < iLocal_3069)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3069[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_3069[iVar1]));
			}
			iVar1++;
		}
		GlobalFunc_5174(&uLocal_707, iLocal_237);
		GlobalFunc_5174(&uLocal_707, iLocal_238);
		GlobalFunc_5174(&uLocal_707, iLocal_240);
		GlobalFunc_5174(&uLocal_707, iLocal_239);
		GlobalFunc_5174(&uLocal_707, iLocal_241);
		GlobalFunc_5174(&uLocal_707, iLocal_242);
		GlobalFunc_5174(&uLocal_707, iLocal_243);
		GlobalFunc_5175(&uLocal_707, cLocal_262);
		iLocal_3222 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3048[0]))
	{
		switch (iLocal_2747)
		{
			case 1:
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("FBI_3_FIRST_ACTION", 0))
				{
					iLocal_3093[44] = PED::CREATE_SYNCHRONIZED_SCENE(Local_220, Local_223, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[44], 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3093[44], 1);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[0], iLocal_3093[44], cLocal_262, "first_action_guy", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[1], iLocal_3093[44], cLocal_262, "first_action_gal", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[4], iLocal_3093[44], cLocal_262, "first_action_prod", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[2], iLocal_3093[44], cLocal_262, "first_action_cman", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[3], iLocal_3093[44], cLocal_262, "first_action_sman", 1000f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[2], iLocal_3093[44], "first_action_clip", cLocal_262, 1000f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[0], iLocal_3093[44], "first_action_vcam", cLocal_262, 1000f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[1], iLocal_3093[44], "first_action_bmik", cLocal_262, 1000f, -8f, 0, 1148846080);
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_3093[44]);
					iLocal_2747++;
				}
				break;
			
			case 2:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3093[44]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3093[44]) >= 1f)
				{
					iLocal_3093[44] = PED::CREATE_SYNCHRONIZED_SCENE(Local_220, Local_223, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3093[44], 1);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3093[44], 1);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[0], iLocal_3093[44], cLocal_262, "final_loop_guy", 4f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[1], iLocal_3093[44], cLocal_262, "final_loop_gal", 4f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[4], iLocal_3093[44], cLocal_262, "final_loop_prod", 4f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[2], iLocal_3093[44], cLocal_262, "final_loop_cman", 4f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3048[3], iLocal_3093[44], cLocal_262, "final_loop_sman", 4f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[2], iLocal_3093[44], "final_loop_clip", cLocal_262, 4f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[0], iLocal_3093[44], "final_loop_vcam", cLocal_262, 4f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[1], iLocal_3093[44], "final_loop_bmik", cLocal_262, 4f, -8f, 0, 1148846080);
					iLocal_2747++;
				}
				break;
			}
	}
}


void func_727()//Position - 0x7E65B
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_2592)
	{
		GlobalFunc_7632(0);
		GlobalFunc_563(1);
		iLocal_2731 = 0;
		iLocal_2732 = 0;
		bLocal_2734 = false;
		bLocal_2599 = false;
		iLocal_2592 = 1;
		iLocal_2800 = 0;
	}
	if (iLocal_2592)
	{
		switch (iLocal_2800)
		{
			case 0:
				if (((CUTSCENE::HAS_CUTSCENE_LOADED() && !FIRE::IS_ENTITY_ON_FIRE(func_20())) && !FIRE::IS_ENTITY_ON_FIRE(func_181())) && ((!GlobalFunc_111() || CAM::IS_SCREEN_FADED_OUT()) || iLocal_2598))
				{
					func_332(1, "1. Intro cutscene", 0, 0, 0, 0);
					GlobalFunc_5177(&uLocal_707, "FBI_03_TREVOR_SHITTING");
					GlobalFunc_733(&uLocal_707, cLocal_269, &iLocal_3141, 0);
					if (PLAYER::PLAYER_PED_ID() == func_20())
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_181()))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_181(), "Trevor", 0, 0, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_20(), "Michael", 0, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_272, 2, joaat("ig_davenorton"), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_371[9]))
					{
						ENTITY::DETACH_ENTITY(iLocal_371[9], 1, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_371[9], "CigLit_Michael", 1, 0, 0);
					}
					if (iLocal_2793)
					{
						GlobalFunc_689();
						iLocal_2793 = 0;
					}
					func_464(0, 0);
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(2048);
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x48621C9FCA3EBD28(4);
					}
					iLocal_2800++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_248(800);
					HUD::DISPLAY_RADAR(1);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(uLocal_3151))
					{
						CAM::DESTROY_CAM(uLocal_3151, 0);
					}
					if (bLocal_2704)
					{
						GlobalFunc_5175(&uLocal_707, "MISSFBI3IG_0");
					}
					else
					{
						bLocal_2599 = true;
						GlobalFunc_5175(&uLocal_707, "missfbi3leadinout");
					}
					GlobalFunc_9807(115.6686f, -2198.093f, 5.032481f, 139.5173f, -2197.382f, 12.04859f, 16.5625f, Local_158, 268.2706f, 1, 1, 1, 0, 0);
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && !GlobalFunc_543(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							if (GlobalFunc_6795(iVar0, 2, 0))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
								}
								iLocal_3066 = iVar0;
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3066, 0, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3066, 0);
							}
							else
							{
								func_729(Local_158, 268.2706f, 0, 145);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							}
						}
						else
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
							}
							VEHICLE::DELETE_VEHICLE(&iVar0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3064))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_3064, Local_155, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_3064, 292.8319f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3064, 0, 1);
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_3064);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3066, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_3066, Local_152, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_3066, 309.4985f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3066, 0, 1);
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_3066);
						}
					}
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_155, 100f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(Local_155, 100f, 0);
					iLocal_2800++;
				}
				break;
			
			case 2:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::_0x583DF8E3D4AFBD98() >= 5)
					{
						if (!bLocal_2614)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_START");
							bLocal_2614 = true;
						}
					}
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 170000)
					{
						bLocal_2618 = true;
					}
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST(cLocal_278, 0))
					{
						if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2761))
						{
							HUD::REGISTER_NAMED_RENDERTARGET(sLocal_2761, 0);
							if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iLocal_256))
							{
								HUD::LINK_NAMED_RENDERTARGET(iLocal_256);
							}
							uLocal_2760 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sLocal_2761);
						}
						HUD::SET_TEXT_RENDER_ID(uLocal_2760);
						GlobalFunc_1327(0f, 0f, 1f, 1f, 0, 0, 0, 255);
						HUD::SET_TEXT_RENDER_ID(uLocal_2762);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(cLocal_272, joaat("ig_davenorton"));
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_3047 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						func_327(iLocal_3047);
					}
				}
				if (!bLocal_2599)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 11700)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 10, 0, 0);
						}
						bLocal_2599 = true;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					bLocal_2734 = true;
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_272, 0))
				{
					iLocal_2732 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3047) && !PED::IS_PED_INJURED(iLocal_3047))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_3047, 133.0303f, -2198.187f, 5.1692f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_3047, 41.7744f);
						PED::FORCE_PED_MOTION_STATE(iLocal_3047, -668482597, 0, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x81CBAE94390F9F89();
					}
					iLocal_2731 = 1;
					if (PLAYER::PLAYER_PED_ID() != func_20())
					{
						if (GlobalFunc_8315() != 0)
						{
							GlobalFunc_9019(&iLocal_2836, 0);
							func_419(&iLocal_2836, 1, 1, 0);
							func_327(func_20());
						}
					}
					if (!bLocal_2599)
					{
						GlobalFunc_11271(func_181(), 4, GlobalFunc_4915(func_181(), 0, 0, 4), 0, -1, 0, 0, 0, -1, -1, -1, 0);
						GlobalFunc_11271(func_181(), 8, GlobalFunc_4915(func_181(), 0, 0, 8), 0, -1, 0, 0, 0, -1, -1, -1, 0);
						GlobalFunc_11271(func_181(), 6, GlobalFunc_4915(func_181(), 0, 0, 6), 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3064, 0, 0);
					}
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3151))
						{
							CAM::DESTROY_CAM(uLocal_3151, 0);
						}
						uLocal_3151 = CAM::CREATE_CAMERA(26379945, 0);
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_3151, PLAYER::PLAYER_PED_ID(), 0.3996f, -2.3506f, 0.7873f, 0);
						CAM::POINT_CAM_AT_ENTITY(uLocal_3151, PLAYER::PLAYER_PED_ID(), 0.4001f, 0.6177f, 0.3519f, 0);
						CAM::SET_CAM_ACTIVE(uLocal_3151, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					}
					ENTITY::SET_ENTITY_COORDS(func_20(), 133.1413f, -2201.842f, 6.1864f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_20(), 3.0596f);
					PED::FORCE_PED_MOTION_STATE(func_20(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_BACK_TO_MICHAEL");
					SYSTEM::SETTIMERB(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
				}
				if ((iLocal_2731 && iLocal_2732) && bLocal_2734)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3064) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3064, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3064, 1);
					}
					GRAPHICS::_0x5DEBD9C4DC995692();
					GlobalFunc_5178(&uLocal_707, &iLocal_3141);
					iLocal_2690 = 0;
					bLocal_2618 = false;
					GlobalFunc_8380(0, 1, 1, 0);
					iLocal_681 = 2;
				}
				break;
		}
		if (iLocal_681 != 1)
		{
			func_49();
			SYSTEM::SETTIMERB(0);
			func_728(uLocal_3145, uLocal_3146, 0);
			func_49();
			func_328();
			iLocal_2592 = 0;
		}
	}
}

void func_728(var uParam0, var uParam1, int iParam2)//Position - 0x7ED55
{
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		CAM::STOP_CAM_SHAKING(uParam0, iParam2);
	}
	if (CAM::DOES_CAM_EXIST(uParam1))
	{
		CAM::STOP_CAM_SHAKING(uParam1, iParam2);
	}
}

void func_729(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x7ED7F
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (GlobalFunc_104(24) != PLAYER::GET_PLAYERS_LAST_VEHICLE())
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				GlobalFunc_10101(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Param0, fParam3, 24, 0);
			}
		}
	}
}













void func_742()//Position - 0x7FB2B
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_2592)
	{
		GlobalFunc_7632(0);
		if (bLocal_2704)
		{
			GlobalFunc_719(&uLocal_707, "missfbi3ig_0");
			GlobalFunc_724(&uLocal_707, "FBI_03_TREVOR_SHITTING");
			GlobalFunc_718(&uLocal_707, iLocal_259);
		}
		else
		{
			GlobalFunc_719(&uLocal_707, "missfbi3leadinout");
			GlobalFunc_718(&uLocal_707, joaat("prop_cs_ciggy_01b"));
		}
		MISC::CLEAR_AREA(125.25f, -2189.42f, 4.98f, 35f, 1, 0, 0, 0);
		iLocal_2793 = 0;
		iLocal_2598 = 0;
		iLocal_2592 = 1;
		iLocal_2800 = 0;
	}
	if (iLocal_2592)
	{
		switch (iLocal_2800)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3064))
				{
					if (GlobalFunc_8038(&iLocal_3064, 30, Local_155, 292.8319f, 1, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3064, 0);
					}
				}
				if (bLocal_2704)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(func_181()))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi3ig_0") && STREAMING::HAS_MODEL_LOADED(iLocal_259))
						{
							if (func_515(&(iLocal_2836[2]), 2, 129.173f, -2203.357f, 6.017f, 0, 1, 0, 0))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_181(), 1);
								TASK::TASK_PLAY_ANIM_ADVANCED(func_181(), "missfbi3ig_0", "shit_loop_trev", 129.173f, -2203.357f, 6.017f, 0f, 0f, 79.5f, 8f, -8f, -1, 262145, 0f, 2, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_181(), 1);
								PED::SET_PED_CONFIG_FLAG(func_181(), 208, 1);
								GlobalFunc_11271(func_181(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								GlobalFunc_11271(func_181(), 4, GlobalFunc_4915(func_181(), 25, 0, 4), 0, -1, 0, 0, 0, -1, -1, -1, 0);
								GlobalFunc_11271(func_181(), 8, GlobalFunc_4915(func_181(), 12, 0, 8), 0, -1, 0, 0, 0, -1, -1, -1, 0);
								GlobalFunc_11271(func_181(), 6, GlobalFunc_4915(func_181(), 11, 0, 6), 0, -1, 0, 0, 0, -1, -1, -1, 0);
								iLocal_371[10] = OBJECT::CREATE_OBJECT(iLocal_259, Local_101, 1, 1, 0);
								GlobalFunc_5174(&uLocal_707, iLocal_259);
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
					{
						if (GlobalFunc_9748(&iLocal_3066, 2, Local_152, 309.4985f, 1, 0))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3066, 0);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3066, 1);
						}
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(func_20()))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi3leadinout") && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_ciggy_01b")))
					{
						if (func_515(&(iLocal_2836[0]), 0, Local_104, 53.75f, 1, 0, 0))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_20(), 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3083);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi3leadinout", "idle_a", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262144, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi3leadinout", "idle_b", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262144, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi3leadinout", "idle_c", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262144, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi3leadinout", "idle_b", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262144, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi3leadinout", "idle_a", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262144, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi3leadinout", "idle_c", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262144, 0f, 2, 0);
							TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3083, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3083);
							TASK::TASK_PERFORM_SEQUENCE(func_20(), uLocal_3083);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3083);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_20(), 1);
							iLocal_371[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), PED::GET_PED_BONE_COORDS(func_20(), 28422, 0f, 0f, 0f), 1, 1, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[9], func_20(), PED::GET_PED_BONE_INDEX(func_20(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							GlobalFunc_5174(&uLocal_707, joaat("prop_cs_ciggy_01b"));
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(func_20()) && ENTITY::DOES_ENTITY_EXIST(func_181())) && ENTITY::DOES_ENTITY_EXIST(iLocal_3064))
				{
					if (!bLocal_2704 || ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
					{
						func_327(func_20());
						func_327(func_181());
						iLocal_2800++;
					}
				}
				break;
			
			case 1:
				if (func_749())
				{
					GlobalFunc_5652(&Local_682, 1, 0);
					iLocal_2598 = 1;
					iLocal_2800++;
				}
				else if (GlobalFunc_579())
				{
					if (iLocal_2721)
					{
						bLocal_2720 = false;
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_25(1, 1, 1);
						}
					}
				}
				else
				{
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 129.173f, -2203.357f, 6.017f, 1) < 100f)
						{
							if (bLocal_2704)
							{
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_3_INT", iLocal_96, 8);
								GlobalFunc_9024(&uLocal_1687, func_181(), sLocal_271, 0);
							}
							else
							{
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_3_INT", iLocal_95, 8);
							}
							func_324(1, 0, cLocal_291, 0);
						}
					}
					else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 129.173f, -2203.357f, 6.017f, 1) > 120f || GlobalFunc_2233())
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					if (bLocal_2704)
					{
						func_748(&Local_682, 129.173f, -2203.357f, 6.017f, 0.1f, 0.1f, 0.1f, 0, "TFT_GOTOW", 1, 1, -1, 1);
						if (((ENTITY::DOES_ENTITY_EXIST(func_181()) && !PED::IS_PED_INJURED(func_181())) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), func_181(), 1) <= 7.3125f) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || !ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
						{
							if (!iLocal_2793)
							{
								GlobalFunc_2571(1);
								iLocal_2793 = 1;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (ENTITY::GET_ENTITY_HEALTH(iVar0) < 1)
									{
										ENTITY::SET_ENTITY_HEALTH(iVar0, 1);
									}
									if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar0) < 1f)
									{
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 1f);
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar0) < 1f)
									{
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, 1f);
									}
									GlobalFunc_530(iVar0, 1f, 2, 0.1f, 0, 1);
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 64);
								}
							}
							if (GlobalFunc_5170())
							{
								func_329(func_20(), 0, "Michael");
								func_329(func_181(), 2, "Trevor");
								func_260("F3_MLDI", 0, 0);
								GlobalFunc_5652(&Local_682, 1, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(func_181(), "missfbi3ig_0", "shit_react_trev", 129.173f, -2203.357f, 6.017f, 0f, 0f, 79.5f, 8f, -8f, -1, 262146, 0f, 2, 0);
								TASK::TASK_LOOK_AT_ENTITY(func_20(), func_181(), -1, 2048, 4);
								iLocal_2597 = -1;
								iLocal_2800++;
							}
						}
					}
					else
					{
						func_748(&Local_682, Local_104, 0f, 0f, 0f, 0, "TFT_GOTOW", 1, 1, -1, 1);
						if (((ENTITY::DOES_ENTITY_EXIST(func_20()) && !PED::IS_PED_INJURED(func_20())) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), func_20(), 1) <= 7.3125f) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || !ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
						{
							if (!iLocal_2793)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (GlobalFunc_530(iVar1, 2.5f, 2, 0.5f, 0, 1))
									{
										if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 1)
										{
											ENTITY::SET_ENTITY_HEALTH(iVar1, 1);
										}
										if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar1) < 1f)
										{
											VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar1, 1f);
										}
										if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar1) < 1f)
										{
											VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar1, 1f);
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 64);
										GlobalFunc_2571(1);
										iLocal_2793 = 1;
									}
								}
								else
								{
									GlobalFunc_2571(1);
									iLocal_2793 = 1;
								}
							}
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (GlobalFunc_5170())
								{
									func_329(func_20(), 0, "Michael");
									func_329(func_181(), 2, "Trevor");
									func_260("F3_TLDI", 0, 0);
									GlobalFunc_5652(&Local_682, 1, 0);
									TASK::TASK_LOOK_AT_ENTITY(func_20(), func_181(), -1, 2048, 4);
									TASK::TASK_LOOK_AT_ENTITY(func_181(), func_20(), -1, 2048, 4);
									iLocal_2597 = -1;
									iLocal_2800++;
								}
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_682.f_5) && (!HUD::DOES_BLIP_EXIST(Global_96389) || Local_682.f_5 != Global_96389))
					{
						GlobalFunc_2269(&(Local_682.f_5), Local_161, 90f);
					}
				}
				break;
			
			case 2:
				if (iLocal_2597 != -1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_2597)
					{
						GlobalFunc_5164();
						GlobalFunc_7632(0);
						iLocal_681 = 1;
					}
					else
					{
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						if (!GlobalFunc_701())
						{
							GlobalFunc_7632(1);
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (bLocal_2704)
					{
						GlobalFunc_5164();
						iLocal_681 = 1;
					}
					else
					{
						GlobalFunc_5164();
						iLocal_681 = 1;
					}
				}
				break;
		}
		if (iLocal_2793)
		{
			GlobalFunc_2536(1, 0);
		}
		if (iLocal_681 != 0)
		{
			SYSTEM::SETTIMERB(0);
			func_728(uLocal_3145, uLocal_3146, 0);
			func_49();
			func_328();
			iLocal_2592 = 0;
		}
	}
}






int func_748(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x8068D
{
	return func_276(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}

int func_749()//Position - 0x806E8
{
	int iVar0;
	
	if (!iLocal_2721)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 128.64f, -2200.98f, 5.03f, 1) < 80f)
		{
			bLocal_2720 = false;
		}
		else
		{
			bLocal_2720 = true;
			Global_17098.f_113 = 0;
			if (!GlobalFunc_10374(&iLocal_2836, 1, 1))
			{
				if (bLocal_2704)
				{
					GlobalFunc_2904(&iLocal_2836, 2, 1);
					GlobalFunc_2904(&iLocal_2836, 0, 0);
				}
				else
				{
					GlobalFunc_2904(&iLocal_2836, 2, 0);
					GlobalFunc_2904(&iLocal_2836, 0, 1);
				}
			}
			else
			{
				if (bLocal_2704)
				{
					uLocal_3151 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 116.5f, -2184.8f, 7.5f, 2.2f, 0.1f, -147.7f, 39.5f, 1, 2);
					CAM::SHAKE_CAM(uLocal_3151, "HAND_SHAKE", 0.4f);
				}
				else
				{
					uLocal_3151 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 122.2f, -2182.5f, 6.2f, 8.2f, 0.9f, -149.4f, 39.9f, 1, 2);
					CAM::SHAKE_CAM(uLocal_3151, "HAND_SHAKE", 0.4f);
				}
				Local_2802.f_12 = iLocal_2836[iLocal_2836.f_7];
				Local_2802.f_10 = uLocal_3151;
				iLocal_2721 = 1;
				iLocal_2597 = -1;
				func_25(1, 1, 1);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				GRAPHICS::_0x1612C45F9E3E0D44();
				iLocal_2723 = 0;
				Global_89750++;
			}
		}
	}
	if (iLocal_2721)
	{
		if (func_750(&Local_2802, uLocal_3151, 0, 1148829696, 1148829696, 2))
		{
			iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
			if (iVar0 >= 7)
			{
				if (iVar0 >= 9)
				{
					if (!iLocal_2723)
					{
						if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (bLocal_2704)
							{
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_3_INT", iLocal_97, 8);
								GlobalFunc_9024(&uLocal_1687, func_181(), sLocal_271, 0);
							}
							else
							{
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_3_INT", iLocal_95, 8);
							}
							func_324(1, 0, cLocal_286, 0);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							HUD::DISPLAY_RADAR(0);
							iLocal_2597 = MISC::GET_GAME_TIMER() + 4500;
						}
						else if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							iLocal_2723 = 1;
						}
					}
				}
				if (Local_2802.f_18 && !Local_2802.f_19)
				{
					if (func_419(&iLocal_2836, 1, 0, 0))
					{
						if (bLocal_2704)
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(func_181(), "missfbi3ig_0", "shit_loop_trev", 129.173f, -2203.357f, 6.017f, 0f, 0f, 79.5f, 8f, -8f, -1, 262145, 0f, 2, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(func_20(), "missfbi3leadinout", "idle_c", Local_104, 0f, 0f, 53.75f, 8f, -8f, -1, 262145, 0f, 2, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_20(), 1);
						}
						Local_2802.f_19 = 1;
					}
				}
			}
		}
		else
		{
			func_327(func_181());
			func_327(func_20());
			iLocal_2721 = 0;
			iLocal_3222 = 0;
			return 1;
		}
	}
	return 0;
}

int func_750(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, int iParam5)//Position - 0x809BB
{
	return func_751(uParam0, uParam1, 1, iParam2, fParam3, fParam4, 0, 0, 0, iParam5, 0, 0, 0);
	return 1;
}

int func_751(var uParam0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, var uParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x809DE
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
				if (CAM::DOES_CAM_EXIST(uParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
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
				if (CAM::DOES_CAM_EXIST(uParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(uParam1), CAM::GET_CAM_ROT(uParam1, uParam9), CAM::GET_CAM_FOV(uParam1), CAM::GET_CAM_FAR_CLIP(uParam1), uParam9);
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















void func_766()//Position - 0x81285
{
	if (iLocal_3152)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3157))
		{
			if (GlobalFunc_10618(&uLocal_2880, cLocal_3143, &Local_3153, 8, 0, 0, 0))
			{
				iLocal_3152 = 0;
				StringCopy(&Local_3153, "", 16);
			}
		}
		else if (GlobalFunc_10626(&uLocal_2880, cLocal_3143, &Local_3153, &cLocal_3157, 8, 0, 0))
		{
			iLocal_3152 = 0;
			StringCopy(&Local_3153, "", 16);
			StringCopy(&cLocal_3157, "", 16);
		}
	}
}

void func_767()//Position - 0x812EF
{
	struct<3> Var0;
	var uVar3;
	struct<58> Var4;
	struct<3> Var78;
	struct<65> Var81;
	
	if (bLocal_2593)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_2(0);
			func_25(1, 1, 1);
			GlobalFunc_5181(&uLocal_707);
			GlobalFunc_762(&uLocal_707);
			if (!GlobalFunc_188())
			{
				func_786(iLocal_681, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_707, Var0, 50f, 0);
			}
			GlobalFunc_3005(&uLocal_707, cLocal_3144, 0);
			GlobalFunc_3005(&uLocal_707, cLocal_3143, 6);
			switch (iLocal_681)
			{
				case 0:
					if (bLocal_2704)
					{
						func_780(0, 1, 1);
					}
					else
					{
						func_780(2, 1, 1);
					}
					break;
				
				case 1:
					if (bLocal_2704)
					{
						func_780(0, 1, 1);
						GlobalFunc_718(&uLocal_707, iLocal_259);
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_3_INT", iLocal_97, 8);
					}
					else
					{
						func_780(2, 1, 1);
						GlobalFunc_718(&uLocal_707, joaat("prop_cs_ciggy_01b"));
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_3_INT", iLocal_95, 8);
					}
					func_324(1, 0, cLocal_291, 0);
					break;
				
				case 2:
					func_780(0, 1, 1);
					if (GlobalFunc_7698())
					{
						GlobalFunc_8368();
					}
					while (!func_515(&(iLocal_2836[2]), 2, Local_107, 211.8283f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_181(), 1);
					func_327(func_20());
					func_327(func_181());
					break;
				
				case 3:
					func_780(2, 1, 1);
					while (!func_515(&(iLocal_2836[0]), 0, Local_173, 208.924f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_20(), 1);
					func_327(func_20());
					func_327(func_181());
					func_498(1, 1);
					break;
				
				case 4:
					func_780(0, 1, 1);
					while (!func_515(&(iLocal_2836[2]), 2, Local_107, 211.8283f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_181(), 1);
					func_327(func_20());
					func_327(func_181());
					while (!func_687(1, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					break;
				
				case 5:
					func_780(2, 1, 1);
					while (!func_515(&(iLocal_2836[0]), 0, Local_110, 76.1479f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_20(), 1);
					func_327(func_20());
					func_327(func_181());
					func_498(1, 1);
					break;
				
				case 6:
					func_780(0, 1, 1);
					while (!func_515(&(iLocal_2836[2]), 2, Local_107, 211.8283f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_181(), 1);
					func_327(func_20());
					func_327(func_181());
					while (!func_687(0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					break;
				
				case 7:
					func_780(2, 1, 1);
					while (!func_515(&(iLocal_2836[0]), 0, Local_110, 76.1479f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_20(), 1);
					func_327(func_20());
					func_327(func_181());
					func_498(1, 1);
					break;
				
				case 8:
					func_780(0, 1, 1);
					while (!func_515(&(iLocal_2836[2]), 2, Local_107, 211.8283f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_181(), 1);
					func_327(func_20());
					func_327(func_181());
					while (!func_687(0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					break;
				
				case 9:
					func_780(2, 1, 1);
					while (!func_515(&(iLocal_2836[0]), 0, Local_110, 76.1479f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_20(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_20(), 1);
					func_327(func_20());
					func_327(func_181());
					func_498(1, 1);
					break;
				
				case 10:
					func_780(0, 1, 1);
					while (!func_515(&(iLocal_2836[2]), 2, Local_107, 211.8283f, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_181(), 1);
					ENTITY::SET_ENTITY_INVINCIBLE(func_181(), 1);
					func_327(func_20());
					func_327(func_181());
					while (!func_687(0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					break;
				
				case 11:
					func_780(2, 1, 1);
					func_327(func_181());
					GlobalFunc_718(&uLocal_707, joaat("ig_mrk"));
					break;
				
				case 12:
					func_780(2, 1, 1);
					func_327(func_181());
					if (MISC::ARE_STRINGS_EQUAL(cLocal_291, sLocal_287))
					{
						AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
					}
					CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_8", 8);
					func_324(1, 0, cLocal_291, 1);
					break;
				
				case 13:
					func_780(2, 1, 1);
					func_327(func_181());
					break;
			}
			while (!GlobalFunc_7725(&uLocal_707))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_681)
			{
				case 0:
					Var4.f_11 = 12;
					Var4.f_31 = 25;
					Var4.f_57 = 2;
					if (bLocal_2704)
					{
						func_772(&iLocal_3065, 0, 0, 0, 1, joaat("asterope"), 0, 145);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_3065)))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3065, 1, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3065, 30f);
						}
						if (GlobalFunc_188())
						{
							GlobalFunc_5108(iLocal_3065, -1, 1);
						}
						Var78 = { ENTITY::GET_ENTITY_COORDS(iLocal_3065, 1) };
					}
					else
					{
						GlobalFunc_97(2, &Var4, 0);
						func_772(&iLocal_3066, 0, 0, 0, 1, Var4, Var4.f_4, 2);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_3066)))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3066, 1, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3066, 30f);
						}
						if (GlobalFunc_188())
						{
							GlobalFunc_5108(iLocal_3066, -1, 1);
						}
						Var78 = { ENTITY::GET_ENTITY_COORDS(iLocal_3066, 1) };
					}
					MISC::CLEAR_AREA_OF_VEHICLES(Var78, 20f, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					while (!GlobalFunc_8038(&iLocal_3064, 30, Local_155, 292.8319f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (bLocal_2704)
					{
						while (!func_515(&(iLocal_2836[2]), 2, 129.173f, -2203.357f, 6.017f, 0, 1, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_181(), 1);
						GlobalFunc_11271(func_181(), 4, GlobalFunc_4915(func_181(), 25, 0, 4), 1, -1, 0, 0, 0, -1, -1, -1, 0);
						GlobalFunc_11271(func_181(), 8, GlobalFunc_4915(func_181(), 12, 0, 8), 1, -1, 0, 0, 0, -1, -1, -1, 0);
						GlobalFunc_11271(func_181(), 6, GlobalFunc_4915(func_181(), 11, 0, 6), 1, -1, 0, 0, 0, -1, -1, -1, 0);
						iLocal_371[10] = OBJECT::CREATE_OBJECT(iLocal_259, Local_101, 1, 1, 0);
						GlobalFunc_5174(&uLocal_707, iLocal_259);
						while (!GlobalFunc_9748(&iLocal_3066, 2, Local_152, 309.4985f, 1, 0))
						{
							SYSTEM::WAIT(0);
						}
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3066, 0);
					}
					else
					{
						while (!func_515(&(iLocal_2836[0]), 0, Local_104, 53.75f, 1, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_20(), 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_20(), 1);
						iLocal_371[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), PED::GET_PED_BONE_COORDS(func_20(), 28422, 0f, 0f, 0f), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_371[9], func_20(), PED::GET_PED_BONE_INDEX(func_20(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						GlobalFunc_5174(&uLocal_707, joaat("prop_cs_ciggy_01b"));
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				
				case 2:
					GlobalFunc_563(1);
					if (GlobalFunc_7698())
					{
						iLocal_3065 = GlobalFunc_10154(Local_158, 268.2706f);
					}
					while (!GlobalFunc_9748(&iLocal_3066, 2, Local_152, 309.4985f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3066, 0);
					while (!GlobalFunc_8038(&iLocal_3064, 30, Local_155, 292.8319f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3064);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3064, 1, 1);
					while (!GlobalFunc_6790(&iLocal_3047, 30, iLocal_3064, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					Var81 = 12;
					Var81.f_13 = 12;
					Var81.f_26 = 12;
					Var81.f_39 = 9;
					Var81.f_49 = 9;
					Var81 = { func_325(1) };
					func_543(iLocal_3047, &Var81, 0);
					func_327(iLocal_3047);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::SET_CREATE_RANDOM_COPS(1);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_3064, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3064, -1);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 3:
					GlobalFunc_563(1);
					while (!func_466(1, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_1");
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
					func_399(&uLocal_3145, &uLocal_3146, 146.789f, -2204.114f, 5.6386f, -10.8642f, 7.4269f, 61.6078f, 17.461f, 146.789f, -2204.114f, 5.6386f, -10.8642f, 7.4269f, 61.6078f, 16.0803f, 5000, 0, 0);
					func_398(uLocal_3145, uLocal_3146, sLocal_268, 0.1f);
					bLocal_2727 = true;
					SYSTEM::WAIT(0);
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_RT");
					iLocal_2624 = 1;
					break;
				
				case 4:
					GlobalFunc_563(1);
					while (!func_513(1, 0, -1, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::SET_CREATE_RANDOM_COPS(1);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_3064, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3064, -1);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_MICHAEL_MUSIC_1");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 5:
					GlobalFunc_563(1);
					while (!func_466(1, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
					AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_2");
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_RT");
					iLocal_2624 = 1;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				
				case 6:
					GlobalFunc_563(1);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					}
					while (!func_513(0, 1, 6, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_397(&Local_659, Local_194, Local_197, fLocal_200, Local_201, Local_204, fLocal_207, 40000, 1, sLocal_268, 0.5f, "SNIPE");
					func_507(0);
					func_504();
					break;
				
				case 7:
					GlobalFunc_563(1);
					while (!func_466(1, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
					AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_3");
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_RT");
					iLocal_2624 = 1;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				
				case 8:
					GlobalFunc_563(1);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					}
					while (!func_513(0, 1, 8, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_397(&Local_659, Local_194, Local_197, fLocal_200, Local_201, Local_204, fLocal_207, 40000, 1, sLocal_268, 0.5f, "SNIPE");
					func_507(0);
					func_504();
					break;
				
				case 9:
					GlobalFunc_563(1);
					while (!func_466(1, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					func_393(0, 1, 0, 1148846080, -998637568, 0, 0);
					AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_4");
					AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE_RT");
					iLocal_2624 = 1;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				
				case 10:
					GlobalFunc_563(1);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					}
					while (!func_513(0, 1, 10, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_397(&Local_659, Local_194, Local_197, fLocal_200, Local_201, Local_204, fLocal_207, 40000, 1, sLocal_268, 0.5f, "SNIPE");
					func_507(0);
					func_504();
					break;
				
				case 11:
					GlobalFunc_563(1);
					while (!GlobalFunc_9748(&iLocal_3066, 2, Local_182, 311.4299f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3045))
					{
						iLocal_3045 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3066, 26, joaat("ig_mrk"), 0, 1, 1);
						func_468();
						iLocal_86[7] = 0;
						func_200();
					}
					func_327(iLocal_3045);
					PED::SET_PED_INTO_VEHICLE(func_181(), iLocal_3066, -1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3066, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3066);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::SET_CREATE_RANDOM_COPS(1);
					while (((!PED::IS_PED_INJURED(func_181()) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_181())) && !PED::IS_PED_INJURED(iLocal_3045)) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_3045))
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_3066, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3066, -1);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 12:
					PED::SET_PED_NON_CREATION_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f));
					PATHFIND::SET_PED_PATHS_IN_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0, 0);
					iLocal_2749 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0, 1, 1, 1);
					if (iLocal_2756[0] != -1)
					{
						VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_2756[0]);
					}
					iLocal_2756[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-1057.38f, -2715.4f, 19.12f, 4.375f, 0f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_179, 100f, 0, 0, 0, 0, 0);
					if (iLocal_2796)
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_20()))
						{
							GlobalFunc_7704(func_20(), 0);
						}
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[0 /*284*/][21 /*3*/] = { Local_2797 };
						if (ENTITY::DOES_ENTITY_EXIST(func_20()))
						{
							GlobalFunc_7694(func_20(), 1, 0);
						}
						iLocal_2796 = 0;
					}
					GlobalFunc_563(1);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					while (!GlobalFunc_9748(&iLocal_3066, 2, -1034.647f, -2729.895f, 19.0672f, 240.9291f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_3066, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3066, -1);
					}
					break;
				
				case 13:
					GlobalFunc_563(1);
					MISC::CLEAR_AREA_OF_VEHICLES(-1032.141f, -2730.226f, 19.11623f, 15f, 0, 0, 1, 1, 0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					while (!GlobalFunc_9748(&iLocal_3066, 2, -1034.647f, -2729.895f, 19.0672f, 240.9291f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_3066, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3066, -1);
					}
					break;
			}
			GlobalFunc_5181(&uLocal_707);
			func_328();
			if (iLocal_681 != 1 && iLocal_681 != 12)
			{
				func_248(800);
			}
			bLocal_2593 = false;
		}
	}
}





void func_772(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x82559
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_3004() && GlobalFunc_9009(iParam1, iParam2, iParam3))
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		GlobalFunc_10717(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
	else if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Var0, &fVar3, 1, 1077936128, 0))
	{
		GlobalFunc_10717(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
}








int func_780(int iParam0, bool bParam1, bool bParam2)//Position - 0x832A6
{
	if (GlobalFunc_237(GlobalFunc_8315()) != iParam0)
	{
		if (iParam0 == 3)
		{
		}
		else if (bParam1)
		{
			while (!func_781(iParam0, bParam2))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_2836[iParam0] = PLAYER::PLAYER_PED_ID();
		}
		else if (func_781(iParam0, bParam2))
		{
			iLocal_2836[iParam0] = PLAYER::PLAYER_PED_ID();
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_781(int iParam0, bool bParam1)//Position - 0x83309
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
		func_784(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_515(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_419(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_784(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x834C1
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
				GlobalFunc_8564(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_535(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_8016(*iParam0);
				func_517(*iParam0, bParam6);
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


void func_786(int iParam0, var uParam1, var uParam2)//Position - 0x83617
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { Global_91351.f_2161 };
			*uParam2 = Global_91351.f_2161.f_3;
			break;
		
		case 1:
			*uParam1 = { 126.6574f, -2198.724f, 5.0325f };
			*uParam2 = 196.4746f;
			break;
		
		case 2:
			*uParam1 = { Local_155 };
			*uParam2 = 292.8319f;
			break;
		
		case 3:
			*uParam1 = { Local_107 };
			*uParam2 = 211.8283f;
			break;
		
		case 4:
			*uParam1 = { -1270.122f, -883.5477f, 10.9303f };
			*uParam2 = 219.3017f;
			break;
		
		case 5:
			*uParam1 = { Local_107 };
			*uParam2 = 211.8283f;
			break;
		
		case 6:
			*uParam1 = { Local_110 };
			*uParam2 = 76.1479f;
			break;
		
		case 7:
			*uParam1 = { Local_107 };
			*uParam2 = 211.8283f;
			break;
		
		case 8:
			*uParam1 = { Local_110 };
			*uParam2 = 76.1479f;
			break;
		
		case 9:
			*uParam1 = { Local_107 };
			*uParam2 = 211.8283f;
			break;
		
		case 10:
			*uParam1 = { Local_110 };
			*uParam2 = 76.1479f;
			break;
		
		case 11:
			*uParam1 = { Local_182 };
			*uParam2 = 311.4299f;
			break;
		
		case 13:
			*uParam1 = { -1034.647f, -2729.895f, 19.0672f };
			*uParam2 = 240.9291f;
			break;
	}
}



void func_789()//Position - 0x83A01
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
				GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
			}
		}
		else
		{
			GlobalFunc_504(0, -1);
			GlobalFunc_503(0, -1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_20()))
	{
		if (PED::IS_PED_INJURED(func_20()))
		{
			iLocal_69 = 2;
			bLocal_2594 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_181()))
	{
		if (PED::IS_PED_INJURED(func_181()))
		{
			iLocal_69 = 3;
			bLocal_2594 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045))
	{
		if (PED::IS_PED_INJURED(iLocal_3045))
		{
			iLocal_69 = 4;
			bLocal_2594 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3046))
	{
		if (PED::IS_PED_INJURED(iLocal_3046))
		{
			iLocal_69 = 6;
			bLocal_2594 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
	{
		if (PED::IS_PED_INJURED(iLocal_3047))
		{
			iLocal_69 = 5;
			bLocal_2594 = true;
		}
	}
	if (iLocal_681 >= 4 && iLocal_681 < 11)
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -3091.85f, 346.71f, 6.51f, 1) < 105f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3114.271f, 353.2274f, 6.238481f, -3082.558f, 345.2655f, 21.12496f, 23.125f, 0, 1, 0))
		{
			iLocal_69 = 9;
			bLocal_2594 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3066))
	{
		if (iLocal_681 > 1)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3066, 0))
			{
				iLocal_69 = 13;
				bLocal_2594 = true;
			}
			else if (func_792(iLocal_3066))
			{
				iLocal_69 = 14;
				bLocal_2594 = true;
			}
		}
	}
	switch (iLocal_681)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (PED::IS_COP_PED_IN_AREA_3D(Vector(13.53249f, -2193.831f, 126.3936f) - Vector(8.6875f, 14.6875f, 21.9375f), Vector(13.53249f, -2193.831f, 126.3936f) + Vector(8.6875f, 14.6875f, 21.9375f)))
				{
					iLocal_69 = 17;
					bLocal_2594 = true;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -893.2714f, -6.694348f, 42.69326f, 1) < 10f)
			{
				iLocal_69 = 7;
				bLocal_2594 = true;
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -889.04f, -11.79f, 42.22f, 1) < 48f && ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_SIREN_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))))
			{
				iVar0 = 1;
				iLocal_69 = 7;
				bLocal_2594 = true;
			}
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3048[iVar1]))
				{
					if (func_791(iLocal_3048[iVar1]))
					{
						iVar0 = 1;
						iLocal_69 = 8;
						bLocal_2594 = true;
					}
					else if (func_790(iLocal_3048[iVar1]))
					{
						iVar0 = 1;
						iLocal_69 = 7;
						bLocal_2594 = true;
					}
					else if (((PED::HAS_PED_RECEIVED_EVENT(iLocal_3048[iVar1], 122) || PED::HAS_PED_RECEIVED_EVENT(iLocal_3048[iVar1], 123)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_3048[iVar1], 124)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_3048[iVar1], 23))
					{
						iVar0 = 1;
						iLocal_69 = 7;
						bLocal_2594 = true;
					}
				}
				iVar1++;
			}
			if (bLocal_2594 && iVar0)
			{
				iVar1 = 0;
				while (iVar1 < iLocal_3048)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(iLocal_3048[iVar1]) && !PED::IS_PED_INJURED(iLocal_3048[iVar1])) && !GlobalFunc_709(iLocal_3048[iVar1], 1805844857, 1))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_3048[iVar1], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					}
					iVar1++;
				}
				if (iLocal_2743[0])
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[2], -8f, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_3069[2]);
					iLocal_2743[0] = 0;
				}
				if (iLocal_2743[1])
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[0], -8f, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_3069[0]);
					iLocal_2743[1] = 0;
				}
				if (iLocal_2743[2])
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3069[1], -8f, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_3069[1]);
					iLocal_2743[2] = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_20()) && ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
			{
				if (GlobalFunc_156(func_20(), iLocal_3047, 1) >= 150f)
				{
					iLocal_69 = 15;
					bLocal_2594 = true;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(func_20()) && ENTITY::DOES_ENTITY_EXIST(iLocal_3047))
			{
				if (GlobalFunc_156(func_20(), iLocal_3047, 1) >= 150f)
				{
					iLocal_69 = 15;
					bLocal_2594 = true;
				}
			}
			break;
		
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(func_181()) && ENTITY::DOES_ENTITY_EXIST(iLocal_3045))
			{
				if (GlobalFunc_156(func_181(), iLocal_3045, 1) >= 150f)
				{
					iLocal_69 = 16;
					bLocal_2594 = true;
				}
			}
			break;
	}
}

int func_790(int iParam0)//Position - 0x83F27
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_791(int iParam0)//Position - 0x83F55
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_792(int iParam0)//Position - 0x83F82
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000))
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






void func_798(var uParam0, bool bParam1)//Position - 0x841DF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	bVar1 = true;
	while (bVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*2*/]))
		{
			if ((bParam1 || (uParam0[iVar0 /*2*/])->f_1 == 0) || MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*2*/])->f_1)
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(ENTITY::GET_ENTITY_SCRIPT((*uParam0)[iVar0 /*2*/], &iVar2), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					switch (ENTITY::GET_ENTITY_TYPE((*uParam0)[iVar0 /*2*/]))
					{
						case 1:
							uVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((*uParam0)[iVar0 /*2*/]);
							PED::DELETE_PED(&uVar3);
							break;
						
						case 2:
							uVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX((*uParam0)[iVar0 /*2*/]);
							VEHICLE::DELETE_VEHICLE(&uVar4);
							break;
						
						case 3:
							uVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX((*uParam0)[iVar0 /*2*/]);
							OBJECT::DELETE_OBJECT(&uVar5);
							break;
						
						default:
							ENTITY::DELETE_ENTITY(uParam0[iVar0 /*2*/]);
							break;
						}
				}
				(*uParam0)[iVar0 /*2*/] = 0;
				(uParam0[iVar0 /*2*/])->f_1 = 0;
				if (!bParam1)
				{
					bVar1 = false;
				}
			}
		}
		if (bVar1)
		{
			iVar0++;
			if (iVar0 > (*uParam0 - 1))
			{
				bVar1 = false;
			}
		}
	}
}

void func_799()//Position - 0x842DF
{
	char* sVar0;
	
	if ((iLocal_681 == 6 || iLocal_681 == 8) || iLocal_681 == 10)
	{
		GlobalFunc_5129(-2955.239f, 311.2846f, 29.0388f, 76.5327f);
	}
	else if (((iLocal_681 == 3 || iLocal_681 == 5) || iLocal_681 == 7) || iLocal_681 == 9)
	{
		GlobalFunc_5129(132.7334f, -2197.035f, 5.1073f, 292.9964f);
		GlobalFunc_5166(135.6781f, -2191.375f, 5.0119f, 270.0899f);
	}
	if (iLocal_69 == 0)
	{
		GlobalFunc_10632();
		func_2(2);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI3_FAIL");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		switch (iLocal_69)
		{
			case 1:
				sVar0 = "F_GEN";
				break;
			
			case 2:
				sVar0 = "F_MDEAD";
				break;
			
			case 3:
				sVar0 = "F_TDEAD";
				break;
			
			case 4:
				sVar0 = "F_KDEAD";
				break;
			
			case 5:
				sVar0 = "F_DDEAD";
				break;
			
			case 6:
				sVar0 = "F_SDEAD";
				break;
			
			case 14:
				if (GlobalFunc_8315() == 0)
				{
					sVar0 = "F_TRUCKSTUCK_M";
				}
				else
				{
					sVar0 = "F_TRUCKSTUCK_T";
				}
				break;
			
			case 13:
				if (GlobalFunc_8315() == 0)
				{
					sVar0 = "F_TRUCKDEAD_M";
				}
				else
				{
					sVar0 = "F_TRUCKDEAD_T";
				}
				break;
			
			case 7:
				sVar0 = "F_PHOTO_SPOOK";
				break;
			
			case 8:
				sVar0 = "F_PHOTO_INN";
				break;
			
			case 9:
				sVar0 = "F_PRTY_SEEN";
				break;
			
			case 10:
				sVar0 = "F_PRTY_SPOOK";
				break;
			
			case 12:
				sVar0 = "F_PRTY_INN_ID";
				break;
			
			case 11:
				sVar0 = "F_PRTY_INN";
				break;
			
			case 15:
				sVar0 = "F_ABAN_D";
				break;
			
			case 16:
				sVar0 = "F_ABAN_MRK";
				break;
			
			case 17:
				sVar0 = "F_COPS";
				break;
		}
		GlobalFunc_10835(sVar0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI3_FAIL");
		bLocal_2595 = true;
	}
}















void func_814()//Position - 0x8541E
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	MISC::SET_MISSION_FLAG(1);
	iLocal_2588[0] = -1;
	iLocal_2588[1] = -1;
	iLocal_2588[2] = -1;
	if (GlobalFunc_Is_Mission_Retry())
	{
		bLocal_2748 = false;
	}
	else
	{
		bLocal_2748 = true;
	}
	if (GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_Is_Mission_Retry())
		{
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544)
			{
				iVar0++;
			}
		}
		else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			iVar0 = 0;
		}
		switch (iVar0)
		{
			case 0:
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					iLocal_681 = 1;
				}
				else
				{
					iLocal_681 = 0;
				}
				break;
			
			case 1:
				iLocal_681 = 1;
				break;
			
			case 2:
				iLocal_681 = 2;
				break;
			
			case 3:
				iLocal_681 = 3;
				if (Global_84544)
				{
					GlobalFunc_4910(&(Global_93588.f_2167));
				}
				break;
			
			case 4:
				iLocal_681 = 4;
				break;
			
			case 5:
				iLocal_681 = 5;
				break;
			
			case 6:
				iLocal_681 = 6;
				break;
			
			case 7:
				iLocal_681 = 7;
				break;
			
			case 8:
				iLocal_681 = 8;
				break;
			
			case 9:
				iLocal_681 = 9;
				break;
			
			case 10:
				iLocal_681 = 10;
				break;
			
			case 11:
				iLocal_681 = 11;
				break;
			
			case 12:
				iLocal_681 = 12;
				break;
			
			case 13:
				iLocal_681 = 13;
				break;
		}
		if (!Global_84544)
		{
			if ((iLocal_681 == 6 || iLocal_681 == 8) || iLocal_681 == 10)
			{
				iLocal_2740 = 1;
			}
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_786(iLocal_681, &Var1, &uVar4);
			GlobalFunc_5812(Var1, uVar4, 1, 0);
		}
		bLocal_2593 = true;
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_234, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(2, 0), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_5112(30, 0), 1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	GlobalFunc_7621(63, 1, 0, 1, 0);
	GlobalFunc_3005(&uLocal_707, cLocal_3144, 0);
	GlobalFunc_3005(&uLocal_707, cLocal_3143, 6);
	if (Global_91351 == 0)
	{
		bLocal_2704 = true;
		iLocal_2836.f_6 = 0;
	}
	else
	{
		bLocal_2704 = false;
		iLocal_2836.f_6 = 2;
	}
	PED::ADD_RELATIONSHIP_GROUP("CREW", &iLocal_3140);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3140);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3140, 1862763509);
	Local_70[0 /*3*/] = { -3091.732f, 332.1709f, 18.6771f };
	Local_70[1 /*3*/] = { -3091.732f, 362.5945f, 18.6771f };
	Local_70[2 /*3*/] = { -3091.732f, 332.1709f, 7.5f };
	Local_70[3 /*3*/] = { -3091.732f, 362.5945f, 7.5f };
	Local_70[4 /*3*/] = { -3091.732f, 347.5537f, 12.96f };
	Local_2569[0 /*3*/] = { -3092.78f, 340.39f, 14.48f };
	Local_2569[1 /*3*/] = { -3091.56f, 344.96f, 14.48f };
	Local_2569[2 /*3*/] = { -3091.2f, 354.61f, 14.47f };
	Local_2569[3 /*3*/] = { -3092.49f, 342.06f, 10.82f };
	Local_2569[4 /*3*/] = { -3092.49f, 349.96f, 10.82f };
	Local_2569[5 /*3*/] = { -3091.08f, 355.04f, 10.84f };
	uLocal_2762 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
	PATHFIND::SET_ROADS_IN_AREA(77.0999f, -2243.13f, -2.8697f, 306.7302f, -2159.376f, 35.3531f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(77.0999f, -2243.13f, -2.8697f, 306.7302f, -2159.376f, 35.3531f, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(14.52083f, 357.9574f, -3100.807f) - Vector(1.3125f, 2.75f, 2.9375f), Vector(14.52083f, 357.9574f, -3100.807f) + Vector(1.3125f, 2.75f, 2.9375f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(10.92306f, 345.6138f, -3091.965f) - Vector(1.3125f, 1.875f, 1.5f), Vector(10.92306f, 345.6138f, -3091.965f) + Vector(1.3125f, 1.875f, 1.5f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(16.71564f, -2079.282f, 225.9817f) + Vector(1f, 1f, 1f), Vector(16.71564f, -2079.282f, 225.9817f) - Vector(1f, 1f, 1f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.348366f, -2184.235f, 248.9758f) + Vector(1f, 1f, 1f), Vector(8.348366f, -2184.235f, 248.9758f) - Vector(1f, 1f, 1f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(-3103.392f, 349.9644f, 8.943123f, 17.625f, 1, 0, 0, 0);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(13.84937f, -2189.285f, 153.994f) - Vector(10.1875f, 18.875f, 29.875f), Vector(13.84937f, -2189.285f, 153.994f) + Vector(10.1875f, 18.875f, 29.875f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(153.994f, -2189.285f, 13.84937f, 30f, 1, 0, 0, 0);
	iVar5 = 0;
	while (iVar5 <= (45 - 1))
	{
		iLocal_3093[iVar5] = -1;
		iVar5++;
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		iLocal_2588[0] = Global_Mission_Fail_State.f_12[0] & 31;
		iLocal_2588[1] = SYSTEM::SHIFT_RIGHT(Global_Mission_Fail_State.f_12[0], 5) & 31;
		iLocal_2588[2] = SYSTEM::SHIFT_RIGHT(Global_Mission_Fail_State.f_12[0], 10) & 31;
		fLocal_2775 = SYSTEM::TO_FLOAT(Global_Mission_Fail_State.f_12[1] & 127);
		uVar6 = SYSTEM::SHIFT_RIGHT(Global_Mission_Fail_State.f_12[1] & 32640, 7);
		iVar7 = 0;
		while (iVar7 < iLocal_86)
		{
			if (MISC::IS_BIT_SET(uVar6, iVar7))
			{
				iLocal_86[iVar7] = 1;
			}
			else
			{
				iLocal_86[iVar7] = 0;
			}
			iVar7++;
		}
		iLocal_2770 = SYSTEM::SHIFT_RIGHT(Global_Mission_Fail_State.f_12[1] & 491520, 15);
		iLocal_2673 = SYSTEM::SHIFT_RIGHT(Global_Mission_Fail_State.f_12[1] & 7864320, 19);
	}
	else
	{
		iLocal_2588[0] = -1;
		iLocal_2588[1] = -1;
		iLocal_2588[2] = -1;
		while (iLocal_2588[0] == -1 || iLocal_2588[0] == 6)
		{
			iLocal_2588[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		Global_Mission_Fail_State.f_12[0] = (Global_Mission_Fail_State.f_12[0] - Global_Mission_Fail_State.f_12[0] & 31);
		Global_Mission_Fail_State.f_12[0] = (Global_Mission_Fail_State.f_12[0] || iLocal_2588[0]);
		while ((iLocal_2588[1] == -1 || iLocal_2588[1] == iLocal_2588[0]) || iLocal_2588[1] == 6)
		{
			iLocal_2588[1] = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		Global_Mission_Fail_State.f_12[0] = (Global_Mission_Fail_State.f_12[0] - Global_Mission_Fail_State.f_12[0] & 992);
		Global_Mission_Fail_State.f_12[0] = (Global_Mission_Fail_State.f_12[0] || SYSTEM::SHIFT_LEFT(iLocal_2588[1], 5));
		while (((iLocal_2588[2] == -1 || iLocal_2588[2] == iLocal_2588[0]) || iLocal_2588[2] == iLocal_2588[1]) || iLocal_2588[2] == 6)
		{
			iLocal_2588[2] = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		Global_Mission_Fail_State.f_12[0] = (Global_Mission_Fail_State.f_12[0] - Global_Mission_Fail_State.f_12[0] & 31744);
		Global_Mission_Fail_State.f_12[0] = (Global_Mission_Fail_State.f_12[0] || SYSTEM::SHIFT_LEFT(iLocal_2588[2], 10));
		func_510();
	}
	uLocal_2754 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(143.355f, -2202.3f, 6.1902f, "v_torture");
	if (INTERIOR::IS_VALID_INTERIOR(uLocal_2754))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2754);
	}
	iLocal_86[7] = 1;
	GlobalFunc_705(&uLocal_1687);
}



