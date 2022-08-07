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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<13> Local_83[10];
	struct<10> Local_214 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<61> Local_224 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_285 = { 0, 0, 0, 0, 0 } ;
	struct<2> Local_290 = { 0, 0 } ;
	struct<354> Local_292 = { 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_646 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_659 = { 0, 0, 0 } ;
	struct<3> Local_662 = { 0, 0, 0 } ;
	struct<3> Local_665 = { 0, 0, 0 } ;
	float fLocal_668 = 0f;
	struct<3> Local_669 = { 0, 0, 0 } ;
	struct<3> Local_672 = { 0, 0, 0 } ;
	float fLocal_675 = 0f;
	struct<3> Local_676 = { 0, 0, 0 } ;
	struct<3> Local_679 = { 0, 0, 0 } ;
	float fLocal_682 = 0f;
	struct<16> Local_683[4];
	int iLocal_748 = 0;
	var uLocal_749 = 0;
	int iLocal_750 = 0;
	var uLocal_751 = 15;
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
	var uLocal_803 = 15;
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
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	bool bLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	var uLocal_887 = 16;
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
	int iLocal_1052 = 0;
	char* sLocal_1053[4] = { NULL, NULL, NULL, NULL };
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	int iLocal_1063 = 0;
	int iLocal_1064 = 0;
	int iLocal_1065 = 0;
	int iLocal_1066 = 0;
	int iLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	char* sLocal_1071 = NULL;
	char* sLocal_1072 = NULL;
	char* sLocal_1073 = NULL;
	int iLocal_1074 = 0;
	struct<3> Local_1075 = { 0, 0, 0 } ;
	float fLocal_1078 = 0f;
	var uLocal_1079 = 0;
	struct<3> Local_1080 = { 0, 0, 0 } ;
	float fLocal_1083 = 0f;
	struct<3> Local_1084 = { 0, 0, 0 } ;
	struct<3> Local_1087 = { 0, 0, 0 } ;
	struct<3> Local_1090 = { 0, 0, 0 } ;
	struct<3> Local_1093 = { 0, 0, 0 } ;
	struct<3> Local_1096 = { 0, 0, 0 } ;
	struct<3> Local_1099 = { 0, 0, 0 } ;
	float fLocal_1102 = 0f;
	struct<3> Local_1103 = { 0, 0, 0 } ;
	float fLocal_1106 = 0f;
	struct<3> Local_1107 = { 0, 0, 0 } ;
	struct<3> Local_1110 = { 0, 0, 0 } ;
	struct<3> Local_1113 = { 0, 0, 0 } ;
	struct<3> Local_1116 = { 0, 0, 0 } ;
	struct<3> Local_1119 = { 0, 0, 0 } ;
	struct<3> Local_1122 = { 0, 0, 0 } ;
	float fLocal_1125 = 0f;
	struct<3> Local_1126 = { 0, 0, 0 } ;
	struct<3> Local_1129 = { 0, 0, 0 } ;
	struct<3> Local_1132 = { 0, 0, 0 } ;
	struct<3> Local_1135 = { 0, 0, 0 } ;
	struct<3> Local_1138 = { 0, 0, 0 } ;
	struct<3> Local_1141 = { 0, 0, 0 } ;
	bool bLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_79 = joaat("ig_hunter");
	Local_659 = { -1568.868f, 4542.425f, 16.1893f };
	Local_662 = { -1295.969f, 4641.689f, 104.3786f };
	Local_665 = { -1303.089f, 4639.47f, 107.9841f };
	fLocal_668 = 6f;
	Local_669 = { -1568.374f, 4546.2f, 15.21728f };
	Local_672 = { -1568.956f, 4539.637f, 18.19509f };
	fLocal_675 = 7f;
	Local_676 = { -1537.228f, 4535.78f, 45.62731f };
	Local_679 = { -1538.339f, 4540.549f, 48.82236f };
	fLocal_682 = 8f;
	iLocal_861 = 1;
	iLocal_869 = 1;
	iLocal_870 = 1;
	iLocal_875 = -1;
	iLocal_876 = -1;
	iLocal_878 = -1;
	iLocal_879 = -1;
	iLocal_880 = -1;
	iLocal_1060 = joaat("weapon_sniperrifle");
	iLocal_1061 = joaat("weapon_pumpshotgun");
	iLocal_1062 = joaat("ig_orleans");
	iLocal_1063 = joaat("ig_hunter");
	iLocal_1064 = joaat("dune");
	iLocal_1065 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_1060);
	iLocal_1066 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_1061);
	iLocal_1067 = joaat("prop_crate_07a");
	iLocal_1068 = joaat("prop_big_shit_02");
	iLocal_1069 = joaat("rebel");
	iLocal_1070 = joaat("a_c_mtlion");
	sLocal_1071 = "rcmlastone1";
	sLocal_1072 = "rcmlastone2leadinout";
	sLocal_1073 = "EMPTY";
	iLocal_1074 = 786440;
	Local_1075 = { -1582.891f, 4758.95f, 49.7778f };
	fLocal_1078 = 357.0128f;
	Local_1080 = { -1557.559f, 4592.091f, 18.7528f };
	fLocal_1083 = 352.949f;
	Local_1090 = { -1581.156f, 4698.456f, 46.33023f };
	Local_1107 = { -1297.85f, 4639.92f, 106.64f };
	Local_1110 = { -1297.21f, 4637.65f, 105.66f };
	Local_1113 = { -100.08f, -59.6f, -103.04f };
	Local_1116 = { -1296.76f, 4637.52f, 105.67f };
	Local_1119 = { -90f, -55.19f, -141.85f };
	Local_1126 = { -1651.232f, 4672.71f, 30.9844f };
	Local_1129 = { -1625.128f, 4586.006f, 42.1184f };
	Local_1132 = { -1486.236f, 4551.295f, 42.7094f };
	Local_1135 = { -1565.463f, 4601.732f, 19.5286f };
	Local_1138 = { -1315.815f, 4627.917f, 94.3871f };
	Local_1141 = { -1273.392f, 4659.724f, 113.7975f };
	bLocal_1144 = true;
	iLocal_1145 = -1;
	iLocal_1146 = 1;
	Local_224 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_224);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_477();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
		{
			Global_68490 = 1;
			iLocal_78 = 0;
			while (!func_472(&Local_224))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_4923(&Local_224, 0, 1);
			Global_68490 = 0;
		}
	}
	func_459();
	func_458();
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_TheLastOne", 0);
		func_442(Local_224.f_9, 0, 0, 0, 0, 0);
		GlobalFunc_163();
		if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_2))
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_214)
			{
				case 0:
					func_437();
					break;
				
				case 1:
					func_432();
					break;
				
				case 2:
					func_385();
					break;
				
				case 3:
					func_351();
					break;
				
				case 4:
					func_231();
					break;
				
				case 5:
					func_17();
					break;
				
				case 6:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x3E0
{
	char* sVar0;
	
	switch (Local_214.f_1)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			if (func_16(Local_285))
			{
				Local_214.f_9 = 2;
			}
			if (!AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_DISTANT_SASQUATCH"))
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_DISTANT_SASQUATCH", 1, 1);
			}
			sVar0 = sLocal_1073;
			switch (Local_214.f_9)
			{
				case 2:
					sVar0 = "SAS1_X0";
					break;
				
				case 3:
					sVar0 = "SAS1_X1";
					break;
				
				case 4:
					sVar0 = "SAS1_X6";
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_1073))
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			Local_214.f_1 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_12();
				func_10(1);
				func_8(1);
				func_2(1);
				func_477();
			}
			break;
	}
}

void func_2(bool bParam0)//Position - 0x4A0
{
	if (Local_285.f_4 == 1)
	{
		if (bParam0)
		{
			GlobalFunc_881(&Local_285);
			GlobalFunc_841(&(Local_285.f_2));
			GlobalFunc_841(&(Local_285.f_3));
			GlobalFunc_2346(&(Local_285.f_1));
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_285))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_285))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_285, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_285, 0);
				}
				GlobalFunc_132(&Local_285, 1, 0, 1);
			}
			GlobalFunc_841(&(Local_285.f_2));
			GlobalFunc_841(&(Local_285.f_3));
			GlobalFunc_129(&(Local_285.f_1), 0);
		}
		Local_285.f_4 = 0;
	}
}






void func_8(bool bParam0)//Position - 0x638
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_748)
	{
		if (Local_683[iVar0 /*16*/].f_1 != 0)
		{
			GlobalFunc_589(&(Local_683[iVar0 /*16*/].f_3));
			if (bParam0)
			{
				GlobalFunc_881(&(Local_683[iVar0 /*16*/]));
			}
			else
			{
				GlobalFunc_132(&(Local_683[iVar0 /*16*/]), 1, 0, 1);
			}
			Local_683[iVar0 /*16*/].f_1 = 0;
			Local_683[iVar0 /*16*/].f_2 = 0;
		}
		iVar0++;
	}
}


void func_10(bool bParam0)//Position - 0x711
{
	GlobalFunc_846(&(Local_646.f_3));
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_646.f_2, 0);
	}
	if (bParam0)
	{
		GlobalFunc_881(&(Local_646.f_2));
	}
	else
	{
		GlobalFunc_132(&(Local_646.f_2), 1, 0, 1);
	}
	AUDIO::STOP_SOUND(Local_646.f_6);
	AUDIO::STOP_SOUND(Local_646.f_7);
	Local_646 = 0;
}


void func_12()//Position - 0x78B
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	HUD::CLEAR_PRINTS();
}




int func_16(int iParam0)//Position - 0x81D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_17()//Position - 0x83C
{
	switch (Local_214.f_1)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				GlobalFunc_173(&uLocal_887, 3, Local_646.f_2, "ORLEANS", 0, 1);
				if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_LEADOUT", 8, 0, 0, 0))
				{
					HUD::CLEAR_PRINTS();
					RECORDING::_0x293220DA1B46CEBC(2f, 4f, 3);
					iLocal_877 = MISC::GET_GAME_TIMER() + 5000;
					Local_214.f_1 = 1;
				}
			}
			else
			{
				func_19();
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() > iLocal_877 && !GlobalFunc_111()) || !GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				func_19();
			}
			break;
	}
}


void func_19()//Position - 0x8FE
{
	if (bLocal_1144)
	{
		GlobalFunc_553(809);
	}
	func_12();
	GlobalFunc_11329(108, 1);
	func_477();
}




















































































































































































































void func_231()//Position - 0x256C0
{
	int iVar0;
	var uVar1;
	
	if (Local_214.f_3 == 1)
	{
		func_349(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		func_348();
		while (!func_347())
		{
			SYSTEM::WAIT(0);
		}
		while (!ENTITY::DOES_ENTITY_EXIST(Local_646.f_2))
		{
			func_344();
			SYSTEM::WAIT(0);
		}
		func_343(Local_646.f_2, 1);
		while (!func_342())
		{
			SYSTEM::WAIT(0);
		}
		while (!func_341())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::REQUEST_MODEL(iLocal_1069);
		STREAMING::REQUEST_MODEL(iLocal_1062);
		GlobalFunc_9623("sas_2_rcm_t7", 0);
		while (!GlobalFunc_8034(1, 1093140480, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_79(500, 1);
			func_330(1, 1, 1);
		}
		else
		{
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
		}
		Local_214.f_3 = 0;
	}
	if (Local_214.f_1 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_1069);
		STREAMING::REQUEST_MODEL(iLocal_1062);
		GlobalFunc_9623("sas_2_rcm_t7", 0);
		if (GlobalFunc_8034(1, 1093140480, 0))
		{
			if (bLocal_868)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(2000);
				}
				func_321(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1);
				SYSTEM::WAIT(3000);
				if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_2) && PED::IS_PED_INJURED(Local_646.f_2))
				{
					PED::RESURRECT_PED(Local_646.f_2);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 110);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_646.f_2, "Orleans", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE_AT_COORDS(Local_659, 0);
				SYSTEM::WAIT(0);
				RECORDING::_0x208784099002BC30("SF_TheLastOne", 0);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_10063(Local_669, Local_672, fLocal_675, -1519.915f, 4524.7f, 44.4031f, 116.3951f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_321(Local_659, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_2) && PED::IS_PED_INJURED(Local_646.f_2))
				{
					PED::RESURRECT_PED(Local_646.f_2);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 110);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_646.f_2, "Orleans", 0, 0, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_646.f_2, 0, 1, 1);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_646.f_2, 1, 1, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_646.f_2, 8, 1, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_646.f_2, 7, 1, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				RECORDING::_0x208784099002BC30("SF_TheLastOne", 0);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_10063(Local_676, Local_679, fLocal_682, -1530.614f, 4538.023f, 46.8171f, 318.992f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_321(Local_1093, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			}
			func_8(0);
			func_2(1);
			iLocal_1145 = MISC::GET_GAME_TIMER() + 500;
			iLocal_1146 = 1;
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			MISC::CLEAR_AREA(Local_1080, 200f, 1, 0, 0, 0);
			iLocal_885 = (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300);
			iLocal_886 = 1;
			if (GlobalFunc_4940(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, Local_1080, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_1083);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
			}
			Local_214.f_1 = 1;
		}
	}
	if (Local_214.f_1 == 1)
	{
		if (!GlobalFunc_4940(uLocal_1079))
		{
			uLocal_1079 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!GlobalFunc_4940(uLocal_1079) && STREAMING::HAS_MODEL_LOADED(iLocal_1069))
			{
				uLocal_1079 = VEHICLE::CREATE_VEHICLE(iLocal_1069, Local_1080, fLocal_1083, 1, 1);
				if (GlobalFunc_4940(uLocal_1079))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_1079, 1);
				}
			}
		}
		if (GlobalFunc_1720())
		{
			if (iLocal_886)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > iLocal_885)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					iLocal_886 = 0;
				}
			}
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-36.1791f, 1065353216);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Orleans", 0))
			{
				if (bLocal_868)
				{
					GlobalFunc_5724(Local_646.f_2, -1569.3f, 4542.46f, 17.21f);
				}
				else
				{
					GlobalFunc_5724(Local_646.f_2, -1538.96f, 4538.03f, 47.83f);
				}
				PED::SET_PED_CONFIG_FLAG(Local_646.f_2, 185, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_646.f_2, 0);
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_PLAY_ANIM(0, sLocal_1072, "leadout_sas_3_rcm_sas", 1000f, -8f, -1, 17039368, 0, 0, 1, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_1072, "sas_idle_sit", 1000f, -1000f, -1, 17039369, 0, 0, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_646.f_2, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_646.f_2, 1, 0);
				PED::SET_PED_MONEY(Local_646.f_2, 0);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Local_646.f_2, 1, 0.81f, 0.733f, 1);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Local_646.f_2, 0, 0.94f, 0.59f, 1);
				if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_646.f_2, -1, 2050, 4);
					TASK::TASK_LOOK_AT_ENTITY(Local_646.f_2, PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
				}
			}
			if (iLocal_1146)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1145)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 8, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 7, 1, 0, 0);
					iLocal_1146 = 0;
				}
			}
		}
		if (Local_214.f_5)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			func_243();
			Local_214.f_4 = 0;
			Local_214.f_5 = 0;
			Local_214.f_6 = 0;
		}
		else if (Local_214.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			func_242(5);
			Local_214.f_1 = 3;
		}
		else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_242(5);
			Local_214.f_1 = 3;
		}
	}
	if (Local_214.f_1 == 3)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			RECORDING::_0x81CBAE94390F9F89();
			func_233(1, 1, 1, 1);
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-36.1791f, 1065353216);
				}
			}
			func_232();
			GlobalFunc_2346(&iLocal_750);
		}
	}
}

void func_232()//Position - 0x25CB2
{
	if ((Local_214.f_4 || Local_214.f_5) || Local_214.f_6)
	{
		Local_214.f_3 = 1;
	}
	else
	{
		Local_214.f_3 = 0;
	}
	if (Local_214.f_6)
	{
		switch (Local_214.f_7)
		{
			case 0:
				Local_214.f_8 = 1;
				break;
			
			case 1:
				Local_214.f_8 = 2;
				break;
			
			case 2:
				Local_214.f_8 = 3;
				break;
			
			case 4:
				Local_214.f_8 = 4;
				break;
			
			case 5:
				Local_214.f_8 = 2;
				break;
			
			case 3:
				Local_214.f_8 = 3;
				break;
			}
	}
	Local_214 = Local_214.f_8;
	Local_214.f_1 = 0;
	Local_214.f_2 = 0;
	if (Local_214.f_6 && Local_214.f_7 == 3)
	{
		func_243();
	}
	Local_214.f_4 = 0;
	Local_214.f_5 = 0;
	Local_214.f_6 = 0;
}

void func_233(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25D7B
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
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









void func_242(int iParam0)//Position - 0x26045
{
	Local_214.f_8 = iParam0;
}

void func_243()//Position - 0x26053
{
	func_349(1, 1);
	func_10(1);
	func_8(1);
	func_2(1);
	GlobalFunc_6689(&(Local_224.f_35[0]));
	func_348();
	while (!func_347())
	{
		SYSTEM::WAIT(0);
	}
	func_344();
	GlobalFunc_5921(Local_646.f_2, -1539.342f, 4539.53f, 46.8468f, 0, 0, 1);
	func_343(Local_646.f_2, 1);
	Local_646 = 5;
	Local_646.f_1 = 0;
	GlobalFunc_846(&(Local_646.f_3));
	Local_646.f_3 = GlobalFunc_5739(Local_646.f_2, 1, 0, 5);
	HUD::SET_BLIP_SCALE(Local_646.f_3, 1f);
	Local_292.f_352 = (Local_292.f_353 - 1);
	Local_292 = 1;
	iLocal_867 = 1;
	if (!GlobalFunc_188())
	{
		GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), -1518.762f, 4540.353f, 44.5008f, 95.2894f, 0, 1);
	}
	CUTSCENE::REQUEST_CUTSCENE("sas_2_rcm_t7", 8);
	GlobalFunc_Checkpoint8(3, "Kill Sasquatch", 1, 0, 0, 1);
	Local_214 = 3;
	Local_214.f_1 = 1;
	Local_214.f_8 = -1;
	Local_214.f_3 = 0;
	iLocal_871 = 1;
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	func_330(1, 1, 1);
}














































































void func_321(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2C064
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
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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









void func_330(int iParam0, int iParam1, int iParam2)//Position - 0x2C44C
{
	func_233(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}











int func_341()//Position - 0x2C8B6
{
	if (Local_290.f_1)
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_1068);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_1068))
		{
			Local_290 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_1068, Local_1084, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_290))
			{
				ENTITY::SET_ENTITY_ROTATION(Local_290, Local_1087, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1068);
				ENTITY::FREEZE_ENTITY_POSITION(Local_290, true);
			}
			else
			{
				return 0;
			}
			Local_290.f_1 = 1;
			return 1;
		}
	}
	return 0;
}

int func_342()//Position - 0x2C929
{
	HUD::REQUEST_ADDITIONAL_TEXT("SAS1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("SAS1AUD", 6);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		return 1;
	}
	return 0;
}

void func_343(int iParam0, bool bParam1)//Position - 0x2C959
{
	ENTITY::FREEZE_ENTITY_POSITION(uParam0, !bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, bParam1, 0);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1);
}

int func_344()//Position - 0x2C97B
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_646.f_2 = PED::CREATE_PED(25, iLocal_1062, Local_292.f_1[1 /*14*/].f_1, 0f, 1, 1);
	}
	else
	{
		Local_646.f_2 = PED::CREATE_PED(25, iLocal_1062, Local_292.f_1[0 /*14*/].f_1, 0f, 1, 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
	{
		iLocal_876 = func_345(PLAYER::PLAYER_PED_ID(), Local_646.f_2, 0f);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_646.f_2, 1);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_646.f_2, 0);
		PED::SET_PED_CAN_BE_TARGETTED(Local_646.f_2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_646.f_2, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_646.f_2, joaat("weapon_unarmed"), -1, 1, 1);
		PED::SET_PED_MONEY(Local_646.f_2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_646.f_2, 8, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(Local_646.f_2, 185, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_646.f_2, 46, 1);
		AUDIO::STOP_PED_SPEAKING(Local_646.f_2, 1);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_646.f_2, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_646.f_2, 1);
		GlobalFunc_173(&uLocal_887, 3, Local_646.f_2, "ORLEANS", 0, 1);
		func_343(Local_646.f_2, 0);
		Local_646 = 0;
		Local_646.f_1 = 2;
		Local_646.f_4 = 0;
		Local_646.f_5 = AUDIO::GET_SOUND_ID();
		Local_646.f_6 = AUDIO::GET_SOUND_ID();
		Local_646.f_7 = AUDIO::GET_SOUND_ID();
		Local_646.f_11 = 0;
		return 1;
	}
	return 0;
}

int func_345(int iParam0, int iParam1, float fParam2)//Position - 0x2CADC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_83)
	{
		if (Local_83[iVar0 /*13*/].f_1 == iParam0 && Local_83[iVar0 /*13*/].f_2 == iParam1)
		{
			Local_83[iVar0 /*13*/].f_3 = fParam2;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = func_346();
	if (iVar0 == -1)
	{
		return -1;
	}
	Local_83[iVar0 /*13*/] = 0;
	Local_83[iVar0 /*13*/].f_1 = iParam0;
	Local_83[iVar0 /*13*/].f_2 = iParam1;
	Local_83[iVar0 /*13*/].f_4 = 0;
	Local_83[iVar0 /*13*/].f_3 = fParam2;
	Local_83[iVar0 /*13*/].f_5 = 0;
	Local_83[iVar0 /*13*/].f_12 = iVar0;
	return iVar0;
}

int func_346()//Position - 0x2CB77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_83)
	{
		if (Local_83[iVar0 /*13*/] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_347()//Position - 0x2CBA2
{
	if ((STREAMING::HAS_MODEL_LOADED(iLocal_1062) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1071)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1072))
	{
		return 1;
	}
	return 0;
}

void func_348()//Position - 0x2CBD1
{
	STREAMING::REQUEST_MODEL(iLocal_1062);
	STREAMING::REQUEST_ANIM_DICT(sLocal_1071);
	STREAMING::REQUEST_ANIM_DICT(sLocal_1072);
}

void func_349(bool bParam0, bool bParam1)//Position - 0x2CBEE
{
	if (bParam0)
	{
		func_350(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_321(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_350(bool bParam0, int iParam1, int iParam2)//Position - 0x2CC21
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_233(iParam1, iParam2, 1, 1);
		}
	}
}

void func_351()//Position - 0x2CC80
{
	if (Local_214.f_3 == 1)
	{
		func_349(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1122, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1125);
		}
		while (!func_342())
		{
			SYSTEM::WAIT(0);
		}
		while (!func_341())
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 1);
		}
		else
		{
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
		}
		func_330(1, 1, 1);
		Local_214.f_3 = 0;
	}
	if (Local_214.f_1 == 0)
	{
		func_348();
		func_384();
		if (func_347() && func_383())
		{
			func_2(0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_646.f_2))
			{
				func_344();
			}
			func_382();
			func_381();
			func_380();
			CUTSCENE::REQUEST_CUTSCENE("sas_2_rcm_t7", 8);
			GlobalFunc_Checkpoint8(2, "Chase", 0, 0, 0, 1);
			iLocal_866 = 0;
			iLocal_867 = 0;
			PED::SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(0.2f);
			PED::SET_AI_WEAPON_DAMAGE_MODIFIER(0.2f);
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
			iLocal_873 = 0;
			iLocal_874 = 0;
			iLocal_859 = 0;
			iLocal_858 = 0;
			iLocal_856 = 0;
			iLocal_871 = 0;
			Local_214.f_1 = 1;
		}
	}
	if (Local_214.f_1 == 1)
	{
		if (!GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			func_242(6);
			Local_214.f_9 = 1;
			Local_214.f_1 = 3;
		}
		else if (func_379())
		{
			func_242(6);
			Local_214.f_9 = 4;
			Local_214.f_1 = 3;
		}
		else if (!GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 1), 4f) || iLocal_859)
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 4);
				func_19();
			}
			else
			{
				func_242(4);
				GlobalFunc_4956();
				iLocal_1052 = MISC::GET_GAME_TIMER() + 3000;
				Local_214.f_1 = 3;
				GlobalFunc_846(&(Local_646.f_3));
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 1), 4f))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_874)
			{
				iLocal_873++;
				iLocal_874 = MISC::GET_GAME_TIMER() + 1000;
				GlobalFunc_565(807, 1, 0);
			}
			if ((iLocal_867 && iLocal_873 > 0) || (!iLocal_867 && iLocal_873 > 1))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 99);
				}
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
				func_19();
			}
		}
		else if (Local_214.f_6)
		{
			Local_214.f_1 = 3;
		}
		else if (Local_214.f_4)
		{
			if (iLocal_867)
			{
				func_242(4);
				GlobalFunc_4956();
				iLocal_1052 = MISC::GET_GAME_TIMER() + 3000;
				Local_214.f_1 = 3;
			}
			else
			{
				func_243();
				Local_214.f_4 = 0;
				Local_214.f_5 = 0;
				Local_214.f_6 = 0;
			}
		}
		else if (Local_214.f_5)
		{
			func_242(2);
			Local_214.f_1 = 3;
		}
		else
		{
			func_364();
			func_362();
			func_360();
			if (Local_292 == 2)
			{
				Local_292 = 0;
				if (Local_292.f_352 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Local_292.f_352 = 2;
				}
				else
				{
					Local_292.f_352++;
				}
			}
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_292.f_1[10 /*14*/].f_5, 100f))
			{
				CUTSCENE::REQUEST_CUTSCENE("sas_2_rcm_t7", 8);
			}
			if (iLocal_858 == 0)
			{
				GlobalFunc_164("SAS1_C1", 7500, 0);
				iLocal_858 = 1;
				iLocal_872 = MISC::GET_GAME_TIMER() + 1000;
			}
			else if (iLocal_871 == 0)
			{
				if (iLocal_872 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_159("SAS1_H0", -1);
					iLocal_871 = 1;
				}
			}
			else if (iLocal_866 == 0)
			{
				if (Local_292.f_352 < 5)
				{
					if (!GlobalFunc_111() && func_356(iLocal_876, 250))
					{
						GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						GlobalFunc_5157(&uLocal_887, "SAS1AUD", "SAS1_CHASE1b", 7, 1, 0);
						iLocal_866 = 1;
					}
				}
			}
			else if (iLocal_867 == 0)
			{
				if (Local_292.f_352 >= (Local_292.f_353 - 1))
				{
					if (!GlobalFunc_111() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1096, 35f, 35f, 35f, 0, 1, 0))
					{
						func_354();
						GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_CHASE3", 7, 0, 0, 0))
						{
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_646.f_2, -1536.6f, 4543.7f, 45.5f, -1538.2f, 4536.2f, 48.6f, 5f, 0, 0);
							iLocal_867 = 1;
						}
					}
				}
			}
			if (iLocal_856 == 0)
			{
				if (!GlobalFunc_496(&uLocal_751, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					GlobalFunc_164("SAS1_C2", 7500, 0);
					iLocal_856 = 1;
					iLocal_860 = MISC::GET_GAME_TIMER() + 30000;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_860)
			{
				if (GlobalFunc_496(&uLocal_751, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					iLocal_856 = 0;
				}
			}
		}
	}
	if (Local_214.f_1 == 3)
	{
		if (Local_214.f_8 == 4)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1052)
			{
				func_352();
			}
		}
		else
		{
			GlobalFunc_846(&(Local_646.f_3));
			HUD::CLEAR_PRINTS();
			func_232();
		}
	}
}

void func_352()//Position - 0x2D16E
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_846(&(Local_646.f_3));
	if (GlobalFunc_496(&uLocal_803, ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 0)))
	{
		bLocal_868 = false;
	}
	else
	{
		bLocal_868 = true;
	}
	func_232();
}


void func_354()//Position - 0x2D262
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_748)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_683[iVar0 /*16*/]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_683[iVar0 /*16*/], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			GlobalFunc_132(&(Local_683[iVar0 /*16*/]), 1, 0, 1);
		}
		iVar0++;
	}
}


bool func_356(int iParam0, int iParam1)//Position - 0x2D2EC
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= Local_83)
	{
		return 0;
	}
	if (Local_83[iParam0 /*13*/] == 1 || Local_83[iParam0 /*13*/].f_4 == 0)
	{
		return 0;
	}
	return (MISC::GET_GAME_TIMER() - Local_83[iParam0 /*13*/].f_4) < iParam1;
}




void func_360()//Position - 0x2D385
{
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 1), 1.5f, 1, 1))
	{
		if (Local_292.f_352 < (Local_292.f_353 - 1))
		{
			func_361();
			GlobalFunc_565(807, 1, 0);
			if (!GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_CHASE2", 7, 0, 0, 0);
			}
		}
	}
	else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 1), 5f, 1, 1))
	{
		if (Local_292.f_352 < (Local_292.f_353 - 1))
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_MISS", 7, 0, 0, 0);
			}
		}
	}
}

void func_361()//Position - 0x2D445
{
	if ((Local_646 == 3 && Local_646.f_1 == 1) && GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
	{
		AUDIO::STOP_SOUND(Local_646.f_6);
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_646.f_6, "WOUNDED", Local_646.f_2, "SASQUATCH_01_SOUNDSET", 0, 0);
		Local_646.f_10 = 1;
	}
}

void func_362()//Position - 0x2D496
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		switch (iVar0)
		{
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (func_363(iVar3))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar3))
							{
								GlobalFunc_565(808, 1, 0);
							}
							else if (PED::IS_PED_INJURED(iVar3))
							{
								ENTITY::SET_ENTITY_HEALTH(iVar3, 0);
								GlobalFunc_565(808, 1, 0);
							}
						}
					}
				}
				break;
		}
		iVar2++;
	}
}

int func_363(int iParam0)//Position - 0x2D52C
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((((((((((((iVar0 == joaat("a_c_boar") || iVar0 == joaat("a_c_chickenhawk")) || iVar0 == joaat("a_c_chimp")) || iVar0 == joaat("a_c_chop")) || iVar0 == joaat("a_c_cormorant")) || iVar0 == joaat("a_c_cow")) || iVar0 == joaat("a_c_coyote")) || iVar0 == joaat("a_c_crow")) || iVar0 == joaat("a_c_deer")) || iVar0 == joaat("a_c_hen")) || iVar0 == joaat("a_c_mtlion")) || iVar0 == joaat("a_c_pig")) || iVar0 == joaat("a_c_pigeon")) || iVar0 == joaat("a_c_rat")) || iVar0 == joaat("a_c_retriever")) || iVar0 == joaat("a_c_rhesus")) || iVar0 == joaat("a_c_rottweiler")) || iVar0 == joaat("a_c_seagull"))
	{
		return 1;
	}
	return 0;
}

void func_364()//Position - 0x2D63A
{
	int iVar0;
	
	switch (Local_292.f_1[Local_292.f_352 /*14*/])
	{
		case 0:
		case 1:
			if (Local_292 == 0)
			{
				func_375(Local_292.f_352);
				Local_292 = 1;
			}
			else if (Local_292 == 1)
			{
				func_368(&(Local_292.f_1[Local_646.f_8 /*14*/]));
				if (Local_646 == 0 && Local_646.f_1 == 2)
				{
					Local_292 = 2;
				}
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_748)
	{
		func_365(&(Local_683[iVar0 /*16*/]));
		iVar0++;
	}
}

void func_365(var uParam0)//Position - 0x2D6CA
{
	GlobalFunc_661(*uParam0, &(uParam0->f_3), -1, 0, 0, 0, -1082130432, 0);
	switch (uParam0->f_1)
	{
		case 1:
			if (!GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), uParam0->f_15))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 17))
				{
					uParam0->f_1 = 2;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				uParam0->f_2 = 1;
			}
			break;
		
		case 0:
			if (uParam0->f_2 == 0)
			{
				GlobalFunc_132(uParam0, 1, 0, 1);
				uParam0->f_2 = 1;
			}
			break;
	}
}



void func_368(var uParam0)//Position - 0x2D8FA
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	fVar0 = uParam0->f_8;
	iVar1 = uParam0->f_10;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		fVar0 = uParam0->f_9;
		iVar1 = 2000;
	}
	switch (Local_646)
	{
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				if (Local_646.f_1 == 0)
				{
					func_343(Local_646.f_2, 0);
					if (Local_646.f_8 > 0)
					{
						GlobalFunc_846(&(Local_646.f_3));
					}
					ENTITY::SET_ENTITY_COORDS(Local_646.f_2, uParam0->f_1, 1, 0, 0, 1);
					if (*uParam0 == 1)
					{
						GlobalFunc_2294(Local_646.f_2, uParam0->f_5);
					}
					Local_646.f_4 = (MISC::GET_GAME_TIMER() + iVar1);
					Local_646.f_1 = 1;
				}
				else if (Local_646.f_1 == 1)
				{
					if (fVar0 == -1f)
					{
						Local_646 = 0;
						Local_646.f_1 = 0;
					}
					else if (MISC::GET_GAME_TIMER() > Local_646.f_4)
					{
						Local_646 = 2;
						Local_646.f_1 = 0;
					}
					else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), uParam0->f_1, fVar0))
					{
						Local_646 = 2;
						Local_646.f_1 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				if (Local_646.f_1 == 0)
				{
					Local_646.f_12 = (MISC::GET_GAME_TIMER() + 60000);
					Local_646.f_4 = 0;
					Local_646.f_1 = 1;
				}
				else if (fVar0 == -1f || GlobalFunc_155(Local_646.f_2, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					if ((*uParam0 == 1 && fVar0 != -1f) && func_373(uParam0))
					{
						Local_646 = 3;
						Local_646.f_1 = 0;
					}
					else
					{
						Local_646 = 4;
						Local_646.f_1 = 0;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_646.f_3))
				{
					iVar2 = (HUD::GET_BLIP_ALPHA(Local_646.f_3) - 5);
					if (iVar2 > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_646.f_3, iVar2);
					}
					else
					{
						GlobalFunc_846(&(Local_646.f_3));
					}
				}
				else if (MISC::GET_GAME_TIMER() > Local_646.f_12)
				{
					Local_646.f_11 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > Local_646.f_4)
				{
					if ((AUDIO::HAS_SOUND_FINISHED(Local_646.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_7))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_646.f_5, "ALERT", Local_646.f_2, "SASQUATCH_01_SOUNDSET", 0, 0);
						HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 1), 30f, 6);
					}
					Local_646.f_4 = MISC::GET_GAME_TIMER() + 7500;
				}
				HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
				func_372();
			}
			break;
		
		case 3:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				if (Local_646.f_1 == 0)
				{
					func_343(Local_646.f_2, 1);
					TASK::TASK_GO_STRAIGHT_TO_COORD(Local_646.f_2, uParam0->f_5, 3f, -1, 1193033728, 1056964608);
					if ((AUDIO::HAS_SOUND_FINISHED(Local_646.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_7))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_646.f_6, "RUNNING", Local_646.f_2, "SASQUATCH_01_SOUNDSET", 0, 0);
					}
					Local_646.f_10 = 0;
					if (!HUD::DOES_BLIP_EXIST(Local_646.f_3))
					{
						Local_646.f_3 = GlobalFunc_5739(Local_646.f_2, 1, 0, 5);
						HUD::SET_BLIP_SCALE(Local_646.f_3, 1f);
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_646.f_3, 255);
					}
					if (Local_292.f_352 == (Local_292.f_353 - 1))
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_646.f_2, 1);
						PED::SET_PED_CAN_BE_TARGETTED(Local_646.f_2, 1);
						ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 110);
					}
					Local_646.f_1 = 1;
				}
				else if (Local_646.f_1 == 1)
				{
					if ((Local_292.f_352 < (Local_292.f_353 - 1) && GlobalFunc_775(Local_646.f_2, uParam0->f_5, 4f)) && !GlobalFunc_6964(Local_646.f_2, -2017877118))
					{
						TASK::TASK_PLAY_ANIM(Local_646.f_2, sLocal_1071, "tlo_leap_out", 8f, -8f, -1, 512, 0, 0, 0, 0);
						Local_646.f_1 = 2;
					}
					else if (Local_292.f_352 >= (Local_292.f_353 - 1) && GlobalFunc_775(Local_646.f_2, uParam0->f_5, 1.5f))
					{
						Local_646.f_1 = 2;
					}
					else if ((AUDIO::HAS_SOUND_FINISHED(Local_646.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_7))
					{
						if (Local_646.f_10 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_646.f_6, "RUNNING", Local_646.f_2, "SASQUATCH_01_SOUNDSET", 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_646.f_6, "WOUNDED", Local_646.f_2, "SASQUATCH_01_SOUNDSET", 0, 0);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (GlobalFunc_4940(iVar3) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, Local_646.f_2))
						{
							Local_646 = 6;
							Local_646.f_1 = 0;
						}
					}
				}
				func_371();
				if ((Local_646.f_1 == 2 && GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2)) && !GlobalFunc_6964(Local_646.f_2, -2017877118))
				{
					TASK::CLEAR_PED_TASKS(Local_646.f_2);
					if (Local_292.f_352 < (Local_292.f_353 - 1))
					{
						if ((AUDIO::HAS_SOUND_FINISHED(Local_646.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_646.f_7))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_646.f_7, "COUGH", Local_646.f_2, "SASQUATCH_01_SOUNDSET", 0, 0);
						}
						Local_646 = 4;
						Local_646.f_1 = 0;
					}
					else
					{
						Local_646 = 5;
						Local_646.f_1 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (Local_646.f_1 == 0)
			{
				func_343(Local_646.f_2, 0);
				Local_646.f_1 = 1;
			}
			func_372();
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				if (HUD::DOES_BLIP_EXIST(Local_646.f_3))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar5 = 16;
					}
					else
					{
						iVar5 = 8;
					}
					iVar4 = (HUD::GET_BLIP_ALPHA(Local_646.f_3) - iVar5);
					if (iVar4 > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_646.f_3, iVar4);
					}
					else
					{
						GlobalFunc_846(&(Local_646.f_3));
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_646.f_3))
			{
				Local_646 = 0;
				Local_646.f_1 = 0;
			}
			break;
		
		case 5:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				if (Local_646.f_1 == 0)
				{
					GlobalFunc_173(&uLocal_887, 3, Local_646.f_2, "ORLEANS", 0, 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_646.f_2, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_646.f_2, 1);
					func_343(Local_646.f_2, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_646.f_3))
					{
						Local_646.f_3 = GlobalFunc_5739(Local_646.f_2, 1, 0, 5);
						HUD::SET_BLIP_SCALE(Local_646.f_3, 1f);
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_646.f_3, 255);
					}
					GlobalFunc_Checkpoint8(3, "Kill Sasquatch", 1, 0, 0, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
					TASK::TASK_COWER(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_646.f_2, uVar6);
					func_354();
					Local_646.f_1 = 1;
					Local_646.f_9 = 0;
				}
				else if (Local_646.f_1 == 1)
				{
					if (Local_646.f_9 == 0)
					{
						if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_646.f_2, 20f))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 110);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_646.f_2, -2065892691);
							PED::SET_PED_CONFIG_FLAG(Local_646.f_2, 185, 1);
							func_354();
							iLocal_1058 = 0;
							iLocal_1059 = MISC::GET_GAME_TIMER();
							Local_646.f_9 = 1;
						}
					}
					else if (Local_646.f_9 == 1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_1059)
						{
							if (GlobalFunc_10630(&uLocal_887, "SAS1AUD", "SAS1_LEADOUT", sLocal_1053[iLocal_1058], 7, 0, 0))
							{
								iLocal_1059 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
								iLocal_1058 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							}
						}
					}
					func_369();
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_646.f_2))
			{
				if (Local_646.f_1 == 0)
				{
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_646.f_2, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_646.f_2, 1);
					ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 120);
					func_343(Local_646.f_2, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_646.f_3))
					{
						Local_646.f_3 = GlobalFunc_5739(Local_646.f_2, 1, 0, 5);
						HUD::SET_BLIP_SCALE(Local_646.f_3, 1f);
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_646.f_3, 255);
					}
					iLocal_859 = 1;
					TASK::TASK_COMBAT_PED(Local_646.f_2, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_354();
					Local_646.f_1 = 1;
				}
				else if (Local_646.f_1 == 1)
				{
				}
			}
			break;
		
		case 0:
			if (Local_646.f_1 == 0)
			{
				GlobalFunc_846(&(Local_646.f_3));
				Local_646.f_1 = 2;
			}
			break;
	}
}

void func_369()//Position - 0x2E0FA
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_646.f_2, PLAYER::PLAYER_PED_ID(), 1))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_646.f_2, 99);
	}
}


void func_371()//Position - 0x2E172
{
	if (iLocal_879 < 0)
	{
		iLocal_879 = MISC::GET_GAME_TIMER() + 7000;
		iLocal_880 = -1;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_879)
	{
		if ((!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_RUNS", 7, 0, 0, 0))
			{
				iLocal_879 = MISC::GET_GAME_TIMER() + 7000;
			}
		}
	}
}

void func_372()//Position - 0x2E1DB
{
	if (iLocal_880 < 0)
	{
		iLocal_880 = MISC::GET_GAME_TIMER() + 7000;
		iLocal_879 = -1;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_880)
	{
		if ((!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_HIDE", 7, 0, 0, 0))
			{
				iLocal_880 = MISC::GET_GAME_TIMER() + 7000;
			}
		}
	}
}

int func_373(var uParam0)//Position - 0x2E244
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (Local_292.f_352 == (Local_292.f_353 - 1))
	{
		return 1;
	}
	Var0 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - uParam0->f_1) };
	Var3 = { GlobalFunc_107(uParam0->f_5 - uParam0->f_1) };
	if ((Var0.x * Var3.x) + (Var0.f_1 * Var3.f_1)) < SYSTEM::COS(SYSTEM::TO_FLOAT(uParam0->f_11))
	{
		if (uParam0->f_1 < uParam0->f_5)
		{
			Var6.x = (uParam0->f_1 - 4f);
			Var9.x = (uParam0->f_5 + 4f);
		}
		else
		{
			Var6.x = (uParam0->f_5 - 4f);
			Var9.x = (uParam0->f_1 + 4f);
		}
		if (uParam0->f_1.f_1 < uParam0->f_5.f_1)
		{
			Var6.f_1 = (uParam0->f_1.f_1 - 4f);
			Var9.f_1 = (uParam0->f_5.f_1 + 4f);
		}
		else
		{
			Var6.f_1 = (uParam0->f_5.f_1 - 4f);
			Var9.f_1 = (uParam0->f_1.f_1 + 4f);
		}
		if (uParam0->f_1.f_2 < uParam0->f_5.f_2)
		{
			Var6.f_2 = (uParam0->f_1.f_2 - 4f);
			Var9.f_2 = (uParam0->f_5.f_2 + 4f);
		}
		else
		{
			Var6.f_2 = (uParam0->f_5.f_2 - 4f);
			Var9.f_2 = (uParam0->f_1.f_2 + 4f);
		}
		return !MISC::IS_AREA_OCCUPIED(Var6, Var9, 0, 1, 0, 0, 0, 0, 0);
	}
	return 0;
}


int func_375(int iParam0)//Position - 0x2E3D9
{
	if (Local_646 == 0)
	{
		if (iParam0 <= 1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Local_646 = 3;
		}
		else
		{
			Local_646 = 1;
		}
		Local_646.f_1 = 0;
		Local_646.f_8 = iParam0;
		return 1;
	}
	return 0;
}




bool func_379()//Position - 0x2E4F5
{
	return Local_646.f_11;
}

void func_380()//Position - 0x2E502
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1070);
}

void func_381()//Position - 0x2E511
{
	Local_292 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_292.f_352 = 1;
	}
	else
	{
		Local_292.f_352 = 0;
	}
}

void func_382()//Position - 0x2E53A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_748)
	{
		Local_683[iVar0 /*16*/] = PED::CREATE_PED(25, iLocal_1070, Local_683[iVar0 /*16*/].f_11, Local_683[iVar0 /*16*/].f_14, 1, 1);
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_683[iVar0 /*16*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_683[iVar0 /*16*/], 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_683[iVar0 /*16*/], 1);
			TASK::TASK_WANDER_IN_AREA(Local_683[iVar0 /*16*/], Local_683[iVar0 /*16*/].f_11, 15f, 1077936128, 1086324736);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_683[iVar0 /*16*/], 46, 1);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(Local_683[iVar0 /*16*/], joaat("weapon_cougar"), -1, 1);
			Local_683[iVar0 /*16*/].f_1 = 1;
			Local_683[iVar0 /*16*/].f_2 = 0;
		}
		iVar0++;
	}
}

bool func_383()//Position - 0x2E5FE
{
	return STREAMING::HAS_MODEL_LOADED(iLocal_1070);
}

void func_384()//Position - 0x2E60D
{
	STREAMING::REQUEST_MODEL(iLocal_1070);
}

void func_385()//Position - 0x2E61C
{
	bool bVar0;
	
	if (MISC::GET_GAME_TIMER() > iLocal_875 && iLocal_875 > 0)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_875 = -1;
		}
	}
	if (Local_214.f_3 == 1)
	{
		func_349(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		func_424(&Local_224, 1, 1, 1);
		iLocal_78 = 0;
		while (!func_472(&Local_224))
		{
			SYSTEM::WAIT(0);
		}
		func_423();
		while (!func_422())
		{
			SYSTEM::WAIT(0);
		}
		func_419(1);
		while (!func_342())
		{
			SYSTEM::WAIT(0);
		}
		while (!func_341())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_869 = 1;
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 1);
		}
		else
		{
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
		}
		func_330(1, 1, 1);
		Local_214.f_3 = 0;
	}
	if (Local_214.f_1 == 0)
	{
		func_423();
		if (func_422())
		{
			func_418();
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_285))
			{
				PED::SET_PED_CONFIG_FLAG(Local_285, 185, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_285, 0);
			}
			uLocal_749 = HUD::ADD_BLIP_FOR_RADIUS(Local_1090, 75f);
			HUD::SET_BLIP_COLOUR(uLocal_749, 5);
			HUD::SET_BLIP_ALPHA(uLocal_749, 128);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_749, 0);
			MISC::CLEAR_AREA(Local_1126, 100f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(Local_1129, 100f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(Local_1132, 100f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(Local_1135, 100f, 1, 0, 0, 0);
			iLocal_855 = 0;
			iLocal_856 = 0;
			iLocal_857 = 0;
			iLocal_862 = 0;
			iLocal_863 = 0;
			iLocal_864 = 0;
			iLocal_865 = 0;
			iLocal_861 = 1;
			iLocal_869 = 1;
			iLocal_870 = 1;
			iLocal_884 = (MISC::GET_GAME_TIMER() + 40000);
			AUDIO::START_AUDIO_SCENE("SASQUATCH_MIX");
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
			Local_214.f_1 = 1;
		}
	}
	if (Local_214.f_1 == 1)
	{
		func_362();
		func_414();
		func_413();
		if (!GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			func_242(6);
			Local_214.f_9 = 1;
			Local_214.f_1 = 3;
		}
		else if (func_16(Local_285))
		{
			func_242(6);
			GlobalFunc_164("Hunnter dead", 7000, 1);
			Local_214.f_9 = 2;
			Local_214.f_1 = 3;
		}
		else if ((func_406(Local_285, 0, 70f, 170f, 1, 0, 0, 0) || !GlobalFunc_775(Local_285, Local_1107, 1.5f)) || PED::IS_PED_RAGDOLL(Local_285))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_285, -2065892691);
			TASK::TASK_COMBAT_PED(Local_285, PLAYER::PLAYER_PED_ID(), 0, 16);
			GlobalFunc_4956();
			func_242(6);
			Local_214.f_9 = 3;
			Local_214.f_1 = 3;
		}
		else if (Local_214.f_6)
		{
			Local_214.f_1 = 3;
		}
		else if (Local_214.f_4)
		{
			func_242(3);
			Local_214.f_1 = 3;
		}
		else if (Local_214.f_5)
		{
			func_242(1);
			Local_214.f_1 = 3;
		}
		else
		{
			bVar0 = GlobalFunc_496(&uLocal_751, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			if (iLocal_870 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1084, 250f))
			{
				func_348();
				func_384();
				iLocal_870 = 0;
			}
			if (bLocal_1144)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					bLocal_1144 = false;
				}
			}
			func_393();
			if (iLocal_862 == 0)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_173(&uLocal_887, 4, Local_285, "HUNTER", 0, 1);
					if (func_390(&uLocal_887, "SAS1AUD", "SAS1_LO", "SAS1_LO_1", "SAS1_START1", "SAS1_START1_1", "SAS1_START1", "SAS1_START1_2", 7, 0, 0))
					{
						iLocal_862 = 1;
					}
				}
			}
			else if (iLocal_863 == 0)
			{
				func_389();
				if (!GlobalFunc_111())
				{
					GlobalFunc_173(&uLocal_887, 4, Local_285, "HUNTER", 0, 1);
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_285, 25f, 25f, 25f, 0, 1, 0))
					{
						if ((((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_specialcarbine"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
						{
							if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_START2", 7, 0, 0, 0))
							{
								iLocal_863 = 1;
							}
						}
						else if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_START1B", 7, 0, 0, 0))
						{
							iLocal_863 = 1;
						}
					}
					else
					{
						iLocal_863 = 1;
					}
				}
			}
			else if (iLocal_855 == 0)
			{
				func_389();
				if (GlobalFunc_111())
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_285) > 25f)
					{
						GlobalFunc_4956();
					}
				}
				else
				{
					GlobalFunc_164("SAS1_B1", 7500, 0);
					iLocal_855 = 1;
				}
			}
			else
			{
				if (iLocal_857 == 0)
				{
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_1084, 5f))
					{
						GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_SCAT", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 4f, 3);
							iLocal_857 = 1;
						}
					}
				}
				if (iLocal_864 == 0)
				{
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_292.f_1[0 /*14*/].f_1, 40f))
					{
						if (func_344())
						{
							GlobalFunc_846(&uLocal_749);
							Local_646.f_3 = GlobalFunc_5739(Local_646.f_2, 1, 0, 5);
							HUD::SET_BLIP_SCALE(Local_646.f_3, 1f);
							AUDIO::PLAY_SOUND_FROM_COORD(Local_646.f_5, "ALERT", -1541.965f, 4692.725f, 44.0651f, "SASQUATCH_01_SOUNDSET", 0, 0, 0);
							HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(Local_646.f_2, 1), 30f, 6);
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_292.f_1[0 /*14*/].f_1, 6000, 1024, 2);
							iLocal_864 = 1;
							iLocal_878 = -1;
							func_386();
						}
					}
				}
				else if (iLocal_865 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_878 < 0)
						{
							iLocal_878 = MISC::GET_GAME_TIMER() + 2000;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_878)
						{
							GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_CHASE1a", 7, 0, 0, 0))
							{
								iLocal_865 = 1;
								func_242(3);
								Local_214.f_1 = 3;
							}
						}
					}
				}
				if (iLocal_856 == 0)
				{
					if (bVar0 == 0)
					{
						GlobalFunc_164("SAS1_A0", 7500, 0);
						iLocal_856 = 1;
						iLocal_860 = MISC::GET_GAME_TIMER() + 30000;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_860)
				{
					if (bVar0)
					{
						iLocal_856 = 0;
					}
				}
			}
		}
	}
	if (Local_214.f_1 == 3)
	{
		GlobalFunc_846(&uLocal_749);
		func_232();
	}
}

void func_386()//Position - 0x2EC5E
{
	int iVar0;
	
	MISC::CLEAR_AREA(Local_1126, 50f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(Local_1129, 50f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(Local_1132, 50f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(Local_1135, 20f, 1, 0, 0, 0);
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (((GlobalFunc_775(iVar0, Local_1126, 50f) || GlobalFunc_775(iVar0, Local_1129, 50f)) || GlobalFunc_775(iVar0, Local_1132, 50f)) || GlobalFunc_775(iVar0, Local_1135, 20f))
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, Local_1075, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_1078);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
		}
	}
}



void func_389()//Position - 0x2EDAA
{
	if (iLocal_861)
	{
		if (!GlobalFunc_4940(Local_224.f_35[0]) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_285) < 25f)
		{
			GlobalFunc_4956();
			if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", "SAS1_BUGGY", 8, 0, 0, 0))
			{
				iLocal_861 = 0;
			}
		}
	}
}

bool func_390(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2EDFB
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, 145, sParam1, iParam9, iParam10, 0);
	if (iParam8 > 7)
	{
		if (iParam8 < 12)
		{
			iParam8 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_392(3, &uVar0, &uVar11, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, 0, 0, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam8, 0);
}


void func_392(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2F1C0
{
	Global_15689 = iParam0;
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_393()//Position - 0x2F248
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_285) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_285, 50f))
		{
			if (func_395(Local_285, 1126825984))
			{
				func_394(&uLocal_882, 7000, "SAS1_TARGET");
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_394(&uLocal_883, 7000, "SAS1_GUN");
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_285))
			{
				func_394(&uLocal_881, 10000, "SAS1_BUMP");
			}
			func_394(&iLocal_884, 40000, "SAS1_RETURN");
		}
	}
}

void func_394(int iParam0, int iParam1, char* sParam2)//Position - 0x2F2DB
{
	if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		GlobalFunc_173(&uLocal_887, 4, Local_285, "HUNTER", 0, 1);
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", sParam2, 7, 1, 0, 0))
			{
				*iParam0 = (MISC::GET_GAME_TIMER() + iParam1);
			}
		}
		else if (GlobalFunc_10618(&uLocal_887, "SAS1AUD", sParam2, 7, 0, 0, 0))
		{
			*iParam0 = (MISC::GET_GAME_TIMER() + iParam1);
		}
	}
}

int func_395(int iParam0, float fParam1)//Position - 0x2F342
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_396(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_396(int iParam0, float fParam1)//Position - 0x2F3B8
{
	return func_397(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_397(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F3D0
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_404(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_400();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_400()//Position - 0x2F682
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}




int func_404(int iParam0, int iParam1)//Position - 0x2F799
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


int func_406(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2F800
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_395(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}







void func_413()//Position - 0x2FC74
{
	var uVar0;
	
	if (iLocal_869 && GlobalFunc_IsPedNotInjuredOrDead(Local_285))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_285, sLocal_1071, "hunter_leadout", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_285, sLocal_1071, "hunter_leadout") > 0.9f)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1071))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle", 8f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle_action", 1000f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle_look", 1000f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle_action", 1000f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle", 1000f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle", 1000f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_1071, "hunter_idle_look", 1000f, -1000f, -1, iLocal_1074, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uVar0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_285, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_869 = 0;
				}
			}
		}
	}
}

void func_414()//Position - 0x2FDB9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_83)
	{
		if (!(Local_83[iVar0 /*13*/].f_11 == 3 && MISC::GET_GAME_TIMER() < Local_83[iVar0 /*13*/].f_10))
		{
			Local_83[iVar0 /*13*/].f_11 = func_415(&(Local_83[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

int func_415(var uParam0)//Position - 0x2FE06
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	var uVar7;
	var uVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	bool bVar24;
	float fVar25;
	
	iVar3 = 0;
	if (*uParam0 == 1)
	{
		return 1;
	}
	if (!GlobalFunc_115(uParam0->f_1) || !GlobalFunc_115(uParam0->f_2))
	{
		if (uParam0->f_5 != 0)
		{
			iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_5, &iVar3, &Var4, &uVar7, &uVar10);
			uParam0->f_5 = 0;
		}
		if (!GlobalFunc_115(uParam0->f_1))
		{
			func_416(uParam0->f_1);
		}
		if (!GlobalFunc_115(uParam0->f_2))
		{
			func_416(uParam0->f_2);
		}
		return 1;
	}
	fVar12 = (uParam0->f_3 / 2f);
	Var13 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 1) };
	Var16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1) };
	if (uParam0->f_3 > 0f)
	{
		Var19 = { GlobalFunc_107(Var16 - Var13) };
		fVar22 = GlobalFunc_168(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), Var19);
		if (fVar22 <= SYSTEM::COS(fVar12))
		{
			if (uParam0->f_5 != 0)
			{
				iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_5, &iVar3, &Var4, &uVar7, &uVar10);
				uParam0->f_5 = 0;
			}
			return 1;
		}
	}
	if (uParam0->f_5 == 0)
	{
		Var13 = { PED::GET_PED_BONE_COORDS(uParam0->f_1, 31086, 0f, 0.6f, 0f) };
		uParam0->f_7 = { Var16 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_2) * FtoV(MISC::GET_FRAME_TIME()) };
		Var0 = { uParam0->f_7 - Var13 * Vector(1.25f, 1.25f, 1.25f) + Var13 };
		uParam0->f_5 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var13, Var0, 511, 0, 7);
		return 2;
	}
	bVar24 = false;
	iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_5, &iVar3, &Var4, &uVar7, &uVar10);
	if (iVar11 == 0)
	{
		uParam0->f_5 = 0;
		return 1;
	}
	else if (iVar11 == 1)
	{
		return 2;
	}
	if (iVar3 == 0)
	{
		uParam0->f_4 = MISC::GET_GAME_TIMER();
	}
	else
	{
		fVar25 = MISC::ABSF((ENTITY::GET_ENTITY_SPEED(uParam0->f_1) * MISC::GET_FRAME_TIME()));
		fVar25 = 0f;
		fVar23 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_7, Var4, 0);
		if (PED::IS_PED_IN_ANY_HELI(uParam0->f_1))
		{
			bVar24 = fVar23 <= (5f + fVar25);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
		{
			bVar24 = fVar23 <= (2.5f + fVar25);
		}
		else if (TASK::IS_PED_RUNNING(uParam0->f_2))
		{
			bVar24 = fVar23 <= (0.8f + fVar25);
		}
		else if (PED::IS_PED_IN_COVER(uParam0->f_2, 0))
		{
			bVar24 = fVar23 <= (0.31f + fVar25);
		}
		else
		{
			bVar24 = fVar23 <= (0.5f + fVar25);
		}
		if (bVar24 && MISC::ABSF((uParam0->f_7.f_2 - Var4.f_2)) > 1f)
		{
			bVar24 = false;
		}
		uParam0->f_6 = bVar24;
		if (bVar24)
		{
			uParam0->f_4 = MISC::GET_GAME_TIMER();
		}
	}
	uParam0->f_10 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(64, 256));
	uParam0->f_5 = 0;
	return 3;
}

void func_416(int iParam0)//Position - 0x30095
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_83)
	{
		if (Local_83[iVar0 /*13*/] == 0)
		{
			if (Local_83[iVar0 /*13*/].f_1 == iParam0 || Local_83[iVar0 /*13*/].f_2 == iParam0)
			{
				func_417(&(Local_83[iVar0 /*13*/]));
			}
		}
		iVar0++;
	}
}

void func_417(var uParam0)//Position - 0x300E3
{
	if (*uParam0 == 0)
	{
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		uParam0->f_4 = 0;
		uParam0->f_10 = 0;
		uParam0->f_11 = 1;
		uParam0->f_5 = 0;
	}
}

void func_418()//Position - 0x30114
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1063);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1064);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1065);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1066);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1067);
}

void func_419(bool bParam0)//Position - 0x3013F
{
	if (Local_285.f_4 == 0)
	{
		if (bParam0)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1099, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uLocal_1102);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_224.f_28[0]))
			{
				Local_285 = Local_224.f_28[0];
				ENTITY::SET_ENTITY_COORDS(Local_285, Local_1103, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_285, fLocal_1106);
			}
			else
			{
				Local_285 = PED::CREATE_PED(26, iLocal_1063, Local_1103, fLocal_1106, 1, 1);
				GlobalFunc_881(&(Local_224.f_28[0]));
			}
			if (func_421(Local_285, 1862763509, iLocal_1060))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_285, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
				}
			}
		}
		func_420();
		Local_285.f_4 = 1;
	}
}

void func_420()//Position - 0x30222
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 4);
	if (!OBJECT::DOES_PICKUP_EXIST(Local_285.f_2))
	{
		Local_285.f_2 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_sniperrifle"), Local_1110, Local_1113, iVar0, 100, 0, 1, 0);
	}
	if (!OBJECT::DOES_PICKUP_EXIST(Local_285.f_3))
	{
		if (Local_1116.f_2 != 0f)
		{
			Local_285.f_3 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_pumpshotgun"), Local_1116, Local_1119, iVar0, 48, 0, 1, 0);
		}
	}
}

int func_421(int iParam0, int iParam1, int iParam2)//Position - 0x30296
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
		if (iParam2 != joaat("weapon_unarmed"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam2, 100, 1, 1);
			PED::SET_PED_ACCURACY(iParam0, 10);
		}
		return 1;
	}
	return 0;
}

int func_422()//Position - 0x302F0
{
	if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_1063) && STREAMING::HAS_MODEL_LOADED(iLocal_1064)) && STREAMING::HAS_MODEL_LOADED(iLocal_1065)) && STREAMING::HAS_MODEL_LOADED(iLocal_1066)) && STREAMING::HAS_MODEL_LOADED(iLocal_1067)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_1064)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1071)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1072))
	{
		return 1;
	}
	return 0;
}

void func_423()//Position - 0x3035B
{
	STREAMING::REQUEST_MODEL(iLocal_1063);
	STREAMING::REQUEST_MODEL(iLocal_1064);
	STREAMING::REQUEST_MODEL(iLocal_1065);
	STREAMING::REQUEST_MODEL(iLocal_1066);
	STREAMING::REQUEST_MODEL(iLocal_1067);
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_1064, 3);
	STREAMING::REQUEST_ANIM_DICT(sLocal_1071);
	STREAMING::REQUEST_ANIM_DICT(sLocal_1072);
}

void func_424(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3039C
{
	GlobalFunc_7101(uParam0, iParam1);
	GlobalFunc_8321(uParam0, bParam2);
	GlobalFunc_7100(uParam0, bParam3);
}








void func_432()//Position - 0x304E5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (Local_214.f_3 == 1)
	{
		func_349(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		func_424(&Local_224, 1, 1, 1);
		iLocal_78 = 0;
		while (!func_472(&Local_224))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_Has_Cutscene_Loaded())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
		func_330(1, 1, 1);
		Local_214.f_3 = 0;
	}
	if (Local_214.f_1 == 0)
	{
		GlobalFunc_8955(0);
		fVar0 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1295.844f, 4641.988f, 105.3325f, 1);
		fVar1 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1301.435f, 4641.214f, 105.6249f, 1);
		fVar2 = (fVar0 - fVar1);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
		if (fVar0 < fVar1)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("sas_1_rcm_concat", 5, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("sas_1_rcm_concat", 6, 8);
		}
		if (GlobalFunc_8034(1, 1093140480, 0))
		{
			func_420();
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_224.f_28[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_224.f_28[0], "Hunter", 0, 0, 0);
				iLocal_750 = GlobalFunc_7936(Local_224.f_28[0], 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_750))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_750, "SAS_SniperRifle", 0, 0, 0);
				}
			}
			GlobalFunc_79(500, 0);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_1138, Local_1141, 0, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
			GlobalFunc_9161();
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			RECORDING::_0x208784099002BC30("SF_TheLastOne", 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			GlobalFunc_10063(Local_662, Local_665, fLocal_668, -1310.38f, 4642.96f, 107.35f, 313.34f, GlobalFunc_625(), 1, 1, 1, 0, 0);
			func_321(-1298.98f, 4640.16f, 105.67f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			MISC::CLEAR_AREA(-1561.793f, 4668.806f, 48.04337f, 218.9074f, 1, 0, 0, 0);
			func_423();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			Local_214.f_1 = 1;
		}
	}
	if (Local_214.f_1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
			}
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_224.f_28[0]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Hunter", 0))
			{
				Local_285 = Local_224.f_28[0];
				if (func_421(Local_285, 1862763509, iLocal_1060))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1071))
					{
						TASK::TASK_PLAY_ANIM(Local_285, sLocal_1071, "hunter_leadout", 1000f, -8f, -1, iLocal_1074, 0, 0, 0, 0);
					}
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
		if (Local_214.f_4)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			func_242(2);
			Local_214.f_1 = 3;
		}
		else if (Local_214.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			Local_214.f_1 = 3;
		}
		else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			func_423();
			if (func_422())
			{
				Local_214.f_1 = 3;
			}
		}
	}
	if (Local_214.f_1 == 3)
	{
		if (CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			RECORDING::_0x81CBAE94390F9F89();
			func_233(1, 1, 1, 0);
			GlobalFunc_4923(&Local_224, 0, 1);
			GlobalFunc_2346(&iLocal_750);
			iLocal_875 = MISC::GET_GAME_TIMER() + 500;
			func_242(2);
			func_232();
		}
	}
}





void func_437()//Position - 0x309DB
{
	int iVar0;
	var uVar1;
	
	if ((((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SAS_BANK_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SAS_BANK_02", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAS_BANK_03", 0)) && func_342()) && func_341())
	{
		if (AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_DISTANT_SASQUATCH"))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_DISTANT_SASQUATCH", 0, 1);
		}
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1070, 1);
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_887, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				if (iVar0 == 0)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0++;
				}
				bLocal_1144 = false;
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
			{
				uVar1 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"));
				if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), uVar1) < 8)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 8, 1, 1);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 8, 1, 1);
			}
			switch (iVar0)
			{
				case 0:
					GlobalFunc_4972(Local_1099, fLocal_1102, 1, 0);
					func_438(1);
					func_232();
					break;
				
				case 2:
					GlobalFunc_4972(Local_1122, fLocal_1125, 1, 0);
					func_438(2);
					func_232();
					break;
				
				case 3:
					GlobalFunc_4972(-1518.762f, 4540.353f, 44.5008f, 95.2894f, 1, 0);
					func_438(3);
					func_232();
					break;
				
				case 4:
					func_438(4);
					func_232();
					break;
				
				default:
					break;
			}
		}
		else
		{
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("sas_1_rcm_concat", 5, 8);
				while (!GlobalFunc_Has_Cutscene_Loaded())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			STREAMING::REQUEST_ANIM_DICT(sLocal_1071);
			STREAMING::REQUEST_ANIM_DICT(sLocal_1072);
			func_242(1);
			func_232();
		}
	}
}

void func_438(int iParam0)//Position - 0x30BAE
{
	Local_214.f_7 = iParam0;
	Local_214.f_6 = 1;
}




void func_442(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x30C86
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
















void func_458()//Position - 0x316A1
{
	Local_214.f_4 = 0;
	Local_214.f_5 = 0;
	Local_214.f_6 = 0;
	Local_214.f_3 = 0;
	Local_214.f_8 = -1;
}

void func_459()//Position - 0x316C2
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	Local_292.f_353 = 0;
	Local_1122.f_2 = 0f;
	Local_1099.f_2 = 0f;
	Local_1103.f_2 = 0f;
	func_470(-1301.927f, 4640.904f, 105.6265f, 105.2908f);
	func_469(-1298.755f, 4639.871f, 105.6797f, 31.4224f);
	func_468(-1562.72f, 4699.07f, 49.81f, 9f, 3f, 0f);
	func_467(-1562.89f, 4699.224f, 49.9836f, 81.8633f);
	func_465(-1608.569f, 4704.62f, 40.975f, -1638.412f, 4669.233f, 33.01702f, 46.5f, -1f, 0, 60);
	func_465(-1641.137f, 4665.74f, 31.6091f, -1636.581f, 4651.864f, 32.58714f, 70f, 80f, 2000, 60);
	func_464(-1628.334f, 4624.631f, 40.8662f, 19.5915f, 30f);
	func_465(-1640.163f, 4616.747f, 42.6314f, -1629.573f, 4595.201f, 40.98951f, 30f, -1f, 2000, 60);
	func_465(-1617.907f, 4577.033f, 42.3259f, -1594.581f, 4587.923f, 35.4044f, 40f, 50f, 6000, 60);
	func_465(-1579.042f, 4612.706f, 29.0916f, -1547.631f, 4600.674f, 21.0284f, 30f, -1f, 4000, 60);
	func_465(-1530.213f, 4619.229f, 29.8095f, -1508.77f, 4618.628f, 38.1616f, 25f, 45f, 4000, 60);
	func_465(-1499.076f, 4618.754f, 42.87984f, -1491.312f, 4608.316f, 43.9719f, 25f, 45f, 2500, 60);
	func_465(-1476.713f, 4613.295f, 47.398f, -1469.927f, 4596.369f, 45.79645f, 22.5f, -1f, 2500, 60);
	func_464(-1458.928f, 4590.889f, 46.9975f, 25.5399f, 25f);
	func_464(-1495.754f, 4569.355f, 37.39832f, -70.47f, 25f);
	func_464(-1487.861f, 4550.374f, 42.688f, 149.2f, 25f);
	func_465(-1453.76f, 4579.532f, 44.3204f, -1461.225f, 4559.684f, 43.08227f, 27.5f, 80f, 3000, 60);
	func_465(-1469.611f, 4552.746f, 45.561f, -1490.854f, 4546.87f, 43.32331f, 27.5f, 2250f, 4000, 60);
	func_465(-1505.981f, 4534.826f, 44.4468f, -1539.342f, 4539.53f, 46.8468f, 45f, 80f, 0, 60);
	func_463(-1537.53f, 4539.51f, 47.87f, -1537.53f, 4539.51f, 47.87f, 10f);
	GlobalFunc_500(&uLocal_751);
	GlobalFunc_499(&uLocal_751, -1241.771f, 4394.965f, 3.8679f);
	GlobalFunc_499(&uLocal_751, -1240.532f, 4611.695f, 130.3852f);
	GlobalFunc_499(&uLocal_751, -1221.613f, 4702.286f, 125.4371f);
	GlobalFunc_499(&uLocal_751, -1461.12f, 4795.818f, 84.8864f);
	GlobalFunc_499(&uLocal_751, -1545.03f, 4769.507f, 61.4836f);
	GlobalFunc_499(&uLocal_751, -1649.403f, 4828.104f, 59.7308f);
	GlobalFunc_499(&uLocal_751, -1828.723f, 4677.121f, 56.0479f);
	GlobalFunc_499(&uLocal_751, -1721.592f, 4503.228f, 0.0447f);
	GlobalFunc_499(&uLocal_751, -1640.807f, 4488.236f, 0.3443f);
	GlobalFunc_499(&uLocal_751, -1561.473f, 4377.037f, 2.2095f);
	GlobalFunc_499(&uLocal_751, -1359.169f, 4339.531f, 3.8651f);
	GlobalFunc_498(&uLocal_751);
	GlobalFunc_500(&uLocal_803);
	GlobalFunc_499(&uLocal_803, -1541.932f, 4538.026f, 46.20551f);
	GlobalFunc_499(&uLocal_803, -1530.173f, 4515.2f, 41.43694f);
	GlobalFunc_499(&uLocal_803, -1507.497f, 4498.376f, 45.2857f);
	GlobalFunc_499(&uLocal_803, -1489.46f, 4511.402f, 47.72325f);
	GlobalFunc_499(&uLocal_803, -1507.927f, 4587.872f, 34.03341f);
	GlobalFunc_499(&uLocal_803, -1535.494f, 4571.508f, 38.5085f);
	GlobalFunc_499(&uLocal_803, -1543.281f, 4554.625f, 35.51556f);
	GlobalFunc_499(&uLocal_803, -1539.657f, 4545.945f, 45.68447f);
	GlobalFunc_498(&uLocal_803);
	sLocal_1053[0] = "SAS1_LEADOUT_3";
	sLocal_1053[1] = "SAS1_LEADOUT_4";
	sLocal_1053[2] = "SAS1_LEADOUT_5";
	sLocal_1053[3] = "SAS1_LEADOUT_6";
}




void func_463(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x31CD3
{
	Local_1093 = { Param0 };
	Local_1096 = { Param3 };
	fParam6 = fParam6;
}

void func_464(struct<3> Param0, float fParam3, float fParam4)//Position - 0x31CF1
{
	int iVar0;
	
	if (iLocal_748 >= 4)
	{
	}
	iVar0 = iLocal_748;
	Local_683[iVar0 /*16*/].f_1 = 0;
	Local_683[iVar0 /*16*/].f_11 = { Param0 };
	Local_683[iVar0 /*16*/].f_14 = fParam3;
	Local_683[iVar0 /*16*/].f_15 = fParam4;
	iLocal_748++;
}

void func_465(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, int iParam8, int iParam9)//Position - 0x31D3C
{
	func_466(1, Param0, 0f, Param3, fParam6, fParam7, iParam8, iParam9);
}

void func_466(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x31D5A
{
	int iVar0;
	
	if (Local_292.f_353 >= 25)
	{
	}
	iVar0 = Local_292.f_353;
	Local_292.f_1[iVar0 /*14*/] = iParam0;
	Local_292.f_1[iVar0 /*14*/].f_12 = 0;
	Local_292.f_1[iVar0 /*14*/].f_13 = 0;
	Local_292.f_1[iVar0 /*14*/].f_1 = { Param1 };
	Local_292.f_1[iVar0 /*14*/].f_4 = fParam4;
	Local_292.f_1[iVar0 /*14*/].f_5 = { Param5 };
	Local_292.f_1[iVar0 /*14*/].f_8 = uParam8;
	Local_292.f_1[iVar0 /*14*/].f_9 = uParam9;
	Local_292.f_1[iVar0 /*14*/].f_10 = uParam10;
	Local_292.f_1[iVar0 /*14*/].f_11 = uParam11;
	Local_292.f_353++;
}

void func_467(struct<3> Param0, float fParam3)//Position - 0x31E09
{
	Local_1122 = { Param0 };
	fLocal_1125 = fParam3;
}

void func_468(struct<3> Param0, struct<3> Param3)//Position - 0x31E1F
{
	Local_1084 = { Param0 };
	Local_1087 = { Param3 };
}

void func_469(struct<3> Param0, float fParam3)//Position - 0x31E39
{
	Local_1103 = { Param0 };
	fLocal_1106 = fParam3;
}

void func_470(struct<3> Param0, float fParam3)//Position - 0x31E4F
{
	Local_1099 = { Param0 };
	fLocal_1102 = fParam3;
}


int func_472(var uParam0)//Position - 0x31F59
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = iLocal_79;
	iVar0[1] = joaat("dune");
	iVar0[2] = joaat("prop_crate_07a");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "sas_1_rcm_concat", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmlastone1");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sniperrifle"), 31, 0);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (((!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmlastone1")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_sniperrifle")))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar5 = true;
			uParam0->f_28[0] = PED::CREATE_PED(25, iLocal_79, -1299.02f, 4639.86f, 106.66f, 345.7769f, 1, 1);
			if (GlobalFunc_IsPedNotInjuredOrDead(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_sniperrifle"), 100, 1, 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmlastone1", "idle_action_01", 8f, -8f, -1, 1, 0, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
			}
			else
			{
				bVar5 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], -1303.163f, 4648.085f, 104.9664f, 293.1504f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (bVar5)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}





void func_477()//Position - 0x321F9
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_478();
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (GlobalFunc_111())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	PED::RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER();
	PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SASQUATCH_MIX"))
	{
		AUDIO::STOP_AUDIO_SCENE("SASQUATCH_MIX");
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1070, 0);
	func_10(0);
	func_8(0);
	func_2(0);
	GlobalFunc_131(&uLocal_1079);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_1138, Local_1141, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 1);
	func_424(&Local_224, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_478()//Position - 0x322AE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1062);
}





















