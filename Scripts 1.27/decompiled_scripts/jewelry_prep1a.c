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
	struct<110> Local_27[4];
	struct<94> Local_468 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	struct<8> Local_578[5];
	int iLocal_619[1] = { 0 };
	struct<4> Local_621 = { 0, 0, 0, 0 } ;
	char cLocal_625[64] = "";
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	struct<3> Local_641 = { 0, 0, 0 } ;
	char cLocal_644[24] = "";
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	bool bLocal_652 = 0;
	bool bLocal_653 = 0;
	int iLocal_654 = 0;
	bool bLocal_655 = 0;
	int iLocal_656 = 0;
	var uLocal_657 = 30;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
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
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
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
	var uLocal_808 = 10;
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
	var uLocal_859 = 10;
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
	var uLocal_930 = 20;
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
	var uLocal_1031 = 20;
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
	var uLocal_1132 = 30;
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
	var uLocal_1313 = 5;
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
	var uLocal_1344 = 7;
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
	var uLocal_1394 = 5;
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
	var uLocal_1420 = 3;
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
	var uLocal_1436 = 15;
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
	var uLocal_1531 = 10;
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
	var uLocal_1582 = 5;
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
	var uLocal_1608 = 5;
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
	var uLocal_1638 = 3;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 1092616192;
	var uLocal_1645 = 1101004800;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 3;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	struct<8> Local_1662[5];
	struct<32> Local_1703[20];
	char cLocal_2344[32] = "";
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 16;
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
	var uLocal_2384 = 0;
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
	var uLocal_2485 = 0;
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
	bool bLocal_2517 = 0;
	int iLocal_2518 = 0;
	int iLocal_2519 = 0;
	var uLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	struct<2> Local_2524 = { 0, 0 } ;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	char cLocal_2528[16] = "";
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	int iLocal_2532 = 0;
	float fLocal_2533 = 0f;
	int iLocal_2534 = 0;
	int iLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	char cLocal_2540[16] = "";
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	bool bLocal_2546 = 0;
	int iLocal_2547 = 0;
	int iLocal_2548 = 0;
	int iLocal_2549 = 0;
	int iLocal_2550 = 0;
	struct<2> Local_2551 = { 0, 0 } ;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	struct<2> Local_2555 = { 0, 0 } ;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	int iLocal_2559 = 0;
	bool bLocal_2560 = 0;
	int iLocal_2561 = 0;
	int iLocal_2562 = 0;
	int iLocal_2563 = 0;
	bool bLocal_2564 = 0;
	int iLocal_2565 = 0;
	int iLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	int iLocal_2570 = 0;
	int iLocal_2571 = 0;
	int iLocal_2572 = 0;
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
	StringCopy(&Local_621, "JHP1ADS", 16);
	StringCopy(&cLocal_625, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_641 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_644, "jhp1a_sec_arrive", 24);
	iLocal_650 = 0;
	iLocal_656 = 6;
	iLocal_2518 = -1;
	iLocal_2522 = -1;
	iLocal_2523 = -1;
	StringCopy(&Local_2524, "", 16);
	StringCopy(&cLocal_2528, "", 16);
	fLocal_2533 = 1E+08f;
	iLocal_2536 = 1;
	iLocal_2539 = -1;
	StringCopy(&cLocal_2540, "", 16);
	iLocal_2544 = -1;
	iLocal_2545 = 1;
	iLocal_2549 = -1;
	iLocal_2550 = -1;
	StringCopy(&Local_2551, "", 16);
	StringCopy(&Local_2555, "", 16);
	iLocal_2559 = 1;
	iLocal_2561 = 1;
	iLocal_2565 = -1;
	iLocal_2567 = -1;
	iLocal_2568 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_266(6);
	}
	MISC::SET_MISSION_FLAG(1);
	func_259();
	func_218();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_JewelStoreJobPrep1A", 0);
		if (bLocal_655)
		{
			func_216();
		}
		GlobalFunc_6821(&uLocal_657);
		func_176();
		if (!bLocal_653)
		{
			func_174();
			func_163();
			GlobalFunc_4494(&Local_1662);
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x140
{
	switch (iLocal_650)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x172
{
	int iVar0;
	
	if ((iLocal_2568 != -1 && ENTITY::DOES_ENTITY_EXIST(Local_578[iLocal_2568 /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iLocal_2568 /*8*/], 0))
	{
		iVar0 = ENTITY::GET_ENTITY_HEALTH(Local_578[iLocal_2568 /*8*/]);
		GlobalFunc_504(Local_578[iLocal_2568 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_86792 = 1000;
	}
	else
	{
		Global_86792 = iVar0;
	}
	if (!GlobalFunc_4492(&(Local_1662[3 /*8*/])))
	{
		GlobalFunc_553(699);
	}
	func_8(0);
	if (GlobalFunc_230(88))
	{
		GlobalFunc_5103(0, 1);
	}
	else
	{
		GlobalFunc_5103(0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}






void func_8(bool bParam0)//Position - 0x3B9
{
	int iVar0;
	int iVar1;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (bParam0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	func_18(&Local_1662);
	GlobalFunc_5652(&uLocal_1637, 1, 0);
	bLocal_2517 = false;
	iLocal_2518 = -1;
	iLocal_2562 = 0;
	iLocal_2563 = 0;
	bLocal_2564 = false;
	iLocal_2565 = -1;
	iLocal_2567 = -1;
	iLocal_2568 = -1;
	iLocal_2569 = 0;
	iLocal_2570 = 0;
	iLocal_2566 = 0;
	if (bParam0)
	{
		GlobalFunc_4956();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		MISC::CLEAR_AREA_OF_PEDS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_COPS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(158.78f, -3100.44f, 6.0019f, 100f, 0);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_619[iVar0]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(iLocal_619[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_619[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		func_10(&(Local_27[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_468, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_578)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					PED::DELETE_PED(&(Local_578[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_578[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_578[iVar0 /*8*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_578[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (AUDIO::IS_ALARM_PLAYING(&cLocal_625))
	{
		AUDIO::STOP_ALARM(&cLocal_625, bParam0);
	}
	if (iLocal_2572 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2572, 0);
	}
	GlobalFunc_771();
}


void func_10(var uParam0, bool bParam1)//Position - 0x61C
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_39 = 0;
	uParam0->f_41 = 0;
	uParam0->f_93 = 1;
	uParam0->f_102 = 0;
	uParam0->f_47 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_37 = -1;
	uParam0->f_103 = -1;
	uParam0->f_40 = 0;
	uParam0->f_92 = -1;
	uParam0->f_43 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	uParam0->f_91 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_105))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_105))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_105));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_105));
		}
	}
	uParam0->f_106 = -1;
	uParam0->f_107 = 0;
	uParam0->f_109 = 0;
	uParam0->f_104 = 0;
}








void func_18(var uParam0)//Position - 0x988
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)//Position - 0x9AE
{
	if (!GlobalFunc_4405(uParam0))
	{
		*uParam0 = 0;
	}
}





void func_24(int iParam0)//Position - 0xAE5
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_651 = 0;
		bLocal_652 = false;
		iLocal_650 = iParam0;
	}
}

int func_25()//Position - 0xB03
{
	bool bVar0;
	
	if (!bLocal_652)
	{
		GlobalFunc_724(&uLocal_657, "SCRIPT\JWL_HA_RAID_STORE");
		GlobalFunc_718(&uLocal_657, joaat("s_m_m_security_01"));
		GlobalFunc_4493(&(Local_1662[1 /*8*/]), 0, 0, 1);
		GlobalFunc_4493(&(Local_1662[0 /*8*/]), 0, 0, 1);
		GlobalFunc_4493(&(Local_1662[4 /*8*/]), 0, 0, 1);
		GlobalFunc_10718(0f, 0f, 0f, 0f, 1, GlobalFunc_8329());
		Global_86792 = 1000;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		GlobalFunc_164("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_652 = true;
	}
	if (bLocal_652)
	{
		switch (iLocal_651)
		{
			case 0:
				if (func_99(1) == 0)
				{
					GlobalFunc_5652(&uLocal_1637, 1, 0);
					GlobalFunc_504(0, -1);
					GlobalFunc_503(0, -1);
				}
				else if ((func_97() && ENTITY::DOES_ENTITY_EXIST(Local_578[func_96() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[func_96() /*8*/], 0))
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					if (iLocal_2568 != func_96())
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						GlobalFunc_504(Local_578[func_96() /*8*/], -1);
						GlobalFunc_503(Local_578[func_96() /*8*/], -1);
						iLocal_2568 = func_96();
					}
					if (func_94(&uLocal_1637, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_578[func_96() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_651++;
					}
				}
				else if (func_93())
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					func_49(&uLocal_1637, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2569, "", "", "", 1, 0, 1, -1);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_578[func_48() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						iLocal_651++;
					}
				}
				else
				{
					GlobalFunc_629(&uLocal_1637);
					GlobalFunc_504(0, -1);
					GlobalFunc_503(0, -1);
				}
				break;
			
			case 1:
				if (func_97())
				{
					if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f, 1, 1056964608, 0, 1))
					{
						bVar0 = true;
					}
				}
				else if (func_93())
				{
					if (GlobalFunc_530(iLocal_2569, 5f, 1, 1056964608, 0, 1))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (GlobalFunc_230(88))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_2571(1);
						GlobalFunc_2536(1, 0);
						iLocal_651 = 1000;
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_651++;
					}
					if (func_97())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_578[iLocal_2568 /*8*/], 0);
					}
					else if (func_93())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_578[func_48() /*8*/], 0);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_578[func_48() /*8*/], 1);
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_578[func_48() /*8*/]);
					}
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				GlobalFunc_2536(1, 0);
				if (!GlobalFunc_5170())
				{
					GlobalFunc_5105();
				}
				else
				{
					GlobalFunc_173(&uLocal_2352, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2352, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_651++;
					}
				}
				break;
			
			case 1001:
				GlobalFunc_2536(1, 0);
				if (GlobalFunc_617())
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_651++;
				}
				break;
			
			case 1002:
				GlobalFunc_2536(1, 0);
				if (!GlobalFunc_617())
				{
					GlobalFunc_689();
					return 1;
				}
				break;
			}
	}
	return 0;
}



bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xF8D
{
	GlobalFunc_513(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return GlobalFunc_9817(sParam3, iParam4, bParam8);
}




















int func_48()//Position - 0x19F9
{
	int iVar0;
	
	if (func_93())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2569, Local_578[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_49(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x1A50
{
	return func_50(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_50(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x1A9F
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
	if (func_72(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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






















int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2B76
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar25);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (GlobalFunc_634(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470) == 7 && !GlobalFunc_645(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (GlobalFunc_6810(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		if ((!GlobalFunc_5148(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
						{
							GlobalFunc_5122(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			GlobalFunc_635("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_5172(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (func_83(iVar13, uParam0))
						{
							GlobalFunc_5145(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					GlobalFunc_635("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!GlobalFunc_5148(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_642(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar13))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						iVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (GlobalFunc_634(iVar32, uParam0, 0))
							{
								if (GlobalFunc_641(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									GlobalFunc_627(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!GlobalFunc_641(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								GlobalFunc_640(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) && !GlobalFunc_5147(uParam0->f_17[iVar0], iParam10))
					{
						if (GlobalFunc_6810(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = GlobalFunc_6783(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((GlobalFunc_5144(uParam0->f_17[iVar0], 1) || GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								GlobalFunc_635(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!GlobalFunc_5144(uParam0->f_17[iVar0], 1))
										{
											if (GlobalFunc_630(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !GlobalFunc_645(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_638(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											if (MISC::IS_BIT_SET(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = GlobalFunc_6783(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (GlobalFunc_6810(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!GlobalFunc_5172(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (GlobalFunc_642(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !GlobalFunc_642(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 5))
							{
								GlobalFunc_5145(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!GlobalFunc_637(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												func_74(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												GlobalFunc_636(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!GlobalFunc_637(iVar0, uParam0))
										{
											GlobalFunc_5145(uParam0, uVar15[iVar0], 0);
											GlobalFunc_636(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
				iVar0++;
			}
			GlobalFunc_635("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}


void func_74(var uParam0, char* sParam1, var uParam2, bool bParam3)//Position - 0x3C2C
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(uParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_75(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3C65
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}








int func_83(int iParam0, var uParam1)//Position - 0x3EBD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1 = (iVar1 + 1);
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}










int func_93()//Position - 0x4349
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2569) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2569, 0))
	{
		return 1;
	}
	return 0;
}

bool func_94(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)//Position - 0x436D
{
	return func_50(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}


int func_96()//Position - 0x43CD
{
	int iVar0;
	
	if (func_97())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_578[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_97()//Position - 0x4434
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_578[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}


int func_99(bool bParam0)//Position - 0x44A3
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_578[iVar1 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar1 /*8*/], 0)) && !func_103(Local_578[iVar1 /*8*/])) && (!bParam0 || func_100(Local_578[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_100(int iParam0)//Position - 0x450E
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == iLocal_2521)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) < 500f)
		{
			return 1;
		}
	}
	else if (GlobalFunc_156(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}



int func_103(int iParam0)//Position - 0x45EE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}




























































void func_163()//Position - 0x7E48
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) < 70f)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	if (iLocal_2567 == 9)
	{
		if (!iLocal_2566)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2566 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_468))
		{
			if (GlobalFunc_156(Local_468, PLAYER::PLAYER_PED_ID(), 1) > 300f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_468);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2569) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2569, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2569, Local_578[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_2569 = 0;
		}
	}
	if (func_173())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_578[iVar0 /*8*/]))
				{
					iLocal_2569 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			iVar0++;
		}
	}
	func_166();
	if (iLocal_650 == 0)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar1 /*110*/]))
			{
				if ((Local_27[iVar1 /*110*/].f_5 == 5 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_27[iVar1 /*110*/], 1) > 300f) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) > 300f)
				{
					PED::DELETE_PED(&(Local_27[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_578[iVar0 /*8*/]));
					if (HUD::DOES_BLIP_EXIST(Local_578[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_578[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_103(Local_578[iVar0 /*8*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_578[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_578[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_100(Local_578[iVar0 /*8*/]))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_578[iVar0 /*8*/]) == iLocal_2521)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_2567 == 9 && func_96() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_578[func_96() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[func_96() /*8*/], 0)) && !func_103(Local_578[func_96() /*8*/])) || (((iLocal_2567 == 10 && func_48() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_578[func_48() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[func_48() /*8*/], 0)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_578[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_578[iVar0 /*8*/].f_1));
				}
			}
			else if ((((ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0)) && !func_103(Local_578[iVar0 /*8*/])) && func_100(Local_578[iVar0 /*8*/])) && iLocal_651 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_578[iVar0 /*8*/].f_1))
				{
					Local_578[iVar0 /*8*/].f_1 = GlobalFunc_6783(Local_578[iVar0 /*8*/], 0, 0);
					HUD::SET_BLIP_PRIORITY(Local_578[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2567 == 9 || iLocal_2567 == 10)
		{
			if (GlobalFunc_663("JHP1A_BKIN", 0, 0) || GlobalFunc_663("JHP1A_BKINANY", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		else if (iLocal_651 == 0)
		{
			if (!iLocal_2561)
			{
				if (func_99(1) == 1)
				{
					GlobalFunc_164("JHP1A_BKIN", 7500, 1);
				}
				iLocal_2561 = 1;
			}
		}
		if (func_99(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_266(iVar4);
			}
		}
	}
}



void func_166()//Position - 0x82BE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_578[3 /*8*/], 1))
		{
			iLocal_2567 = 11;
		}
		else if (func_172())
		{
			iLocal_2567 = 7;
		}
		else if (func_171())
		{
			iLocal_2567 = 6;
		}
		else if (func_97())
		{
			iLocal_2567 = 9;
			iLocal_2561 = 0;
		}
		else if (func_93())
		{
			iLocal_2567 = 10;
		}
		else if (func_170())
		{
			iLocal_2567 = 8;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_2570) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2570, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2570, 1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2570, Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2567 = 5;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_169()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2570 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_2567 = 5;
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2567 = 2;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_2570) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2570, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2570, 1)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2570, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_2570, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2567 = 4;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_169()) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2570 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_2567 = 4;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !func_169()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2570 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_2567 = 3;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !func_169()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0))
		{
			iLocal_2570 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_2567 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
		{
			iLocal_2567 = 1;
		}
		else
		{
			iLocal_2570 = 0;
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0))
			{
				iLocal_2567 = 0;
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
			{
				iLocal_2567 = 0;
			}
			else
			{
				iLocal_2567 = -1;
			}
		}
		if (iLocal_2567 == 1)
		{
			if (func_168(Local_27[0 /*110*/]))
			{
				GlobalFunc_4495(Local_27[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_168(Local_27[0 /*110*/]))
		{
			GlobalFunc_4495(Local_27[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2564)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 155, 1);
		}
		if ((iLocal_2567 != -1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && PED::IS_COP_PED_IN_AREA_3D(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}


int func_168(int iParam0)//Position - 0x87CE
{
	if (iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!ENTITY::IS_ENTITY_DEAD(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_169()//Position - 0x883B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
		{
			if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_578[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_170()//Position - 0x8887
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_578[iVar0 /*8*/], PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171()//Position - 0x88C9
{
	int iVar0;
	
	if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_578[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_172()//Position - 0x8927
{
	int iVar0;
	
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_578[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_173()//Position - 0x89A0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_174()//Position - 0x89F1
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_266(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/]))
		{
			if (Local_27[iVar0 /*110*/].f_93)
			{
				if (Local_27[iVar0 /*110*/].f_102)
				{
					GlobalFunc_661(Local_27[iVar0 /*110*/], &(Local_27[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					GlobalFunc_661(Local_27[iVar0 /*110*/], &(Local_27[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0);
				}
			}
			if (!func_168(Local_27[iVar0 /*110*/]))
			{
				if (Local_27[iVar0 /*110*/].f_103 == -1)
				{
					Local_27[iVar0 /*110*/].f_103 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Local_27[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_578)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && Local_578[iVar0 /*8*/].f_7)
		{
			if (!func_168(Local_578[iVar0 /*8*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_578[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_578[iVar0 /*8*/].f_1));
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_578[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}


void func_176()//Position - 0x8C3E
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_653 == 1)
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
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(0);
				CUTSCENE::REMOVE_CUTSCENE();
			}
			func_24(iLocal_654);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_8(1);
			if (!GlobalFunc_188())
			{
				func_211(iLocal_650, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_657, Var0, 50f, 0);
			}
			GlobalFunc_762(&uLocal_657);
			switch (iLocal_650)
			{
				case 0:
					GlobalFunc_718(&uLocal_657, joaat("burrito2"));
					GlobalFunc_718(&uLocal_657, joaat("s_m_y_pestcont_01"));
					GlobalFunc_718(&uLocal_657, joaat("s_m_m_security_01"));
					GlobalFunc_718(&uLocal_657, joaat("dilettante2"));
					GlobalFunc_718(&uLocal_657, joaat("p_amb_clipboard_01"));
					func_207(&uLocal_657, &cLocal_644);
					GlobalFunc_719(&uLocal_657, "misslsdhsclipboard@base");
					GlobalFunc_719(&uLocal_657, "misslsdhsclipboard@idle_a");
					GlobalFunc_719(&uLocal_657, "misstrevor3");
					GlobalFunc_710(&uLocal_657, iLocal_2521);
					if (((GlobalFunc_7698() && !VEHICLE::IS_THIS_MODEL_A_BOAT(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
					{
						GlobalFunc_718(&uLocal_657, GlobalFunc_622());
					}
					break;
				
				case 1:
					GlobalFunc_718(&uLocal_657, joaat("burrito2"));
					break;
			}
			while (!GlobalFunc_7725(&uLocal_657))
			{
				SYSTEM::WAIT(0);
				func_174();
			}
			switch (iLocal_650)
			{
				case 0:
					if (((GlobalFunc_7698() && !VEHICLE::IS_THIS_MODEL_A_BOAT(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
					{
						while (!GlobalFunc_8367())
						{
							SYSTEM::WAIT(0);
						}
						Local_578[4 /*8*/] = func_183(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (GlobalFunc_188())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_578[4 /*8*/]))
						{
							GlobalFunc_5108(Local_578[4 /*8*/], -1, 1);
						}
						else
						{
							GlobalFunc_5108(0, -1, 1);
						}
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_578[4 /*8*/]))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_578[4 /*8*/], -1);
						}
					}
					while (!func_177(0))
					{
						SYSTEM::WAIT(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 1:
					if (!GlobalFunc_230(88))
					{
						Local_578[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_578[0 /*8*/], 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_578[0 /*8*/]);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
			}
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				if (!GlobalFunc_230(88) || iLocal_650 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			bLocal_653 = false;
		}
	}
}

int func_177(bool bParam0)//Position - 0x8F90
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			Local_578[0 /*8*/] = Global_86864[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_578[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
		{
			Local_578[1 /*8*/] = Global_86864[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_578[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
		{
			Local_578[2 /*8*/] = Global_86864[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_578[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			Local_27[1 /*110*/] = Global_86864.f_9[0];
			if (!PED::IS_PED_INJURED(Local_27[1 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[1 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			Local_27[1 /*110*/].f_105 = Global_86864.f_28[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[1 /*110*/].f_105, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
		{
			Local_27[0 /*110*/] = Global_86864.f_9[2];
			if (!PED::IS_PED_INJURED(Local_27[0 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[0 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			Local_27[2 /*110*/] = Global_86864.f_9[3];
			if (!PED::IS_PED_INJURED(Local_27[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[2 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
			Local_27[3 /*110*/] = Global_86864.f_9[4];
			if (!PED::IS_PED_INJURED(Local_27[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27[3 /*110*/], 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[5]))
		{
			Local_468 = Global_86864.f_9[5];
			if (!PED::IS_PED_INJURED(Local_468))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_468, 0);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_468, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
		{
			Local_578[3 /*8*/] = Global_86864[3];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_578[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_578[0 /*8*/]))
		{
			Local_578[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_578[1 /*8*/]))
		{
			Local_578[1 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_578[2 /*8*/]))
		{
			Local_578[2 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/]))
		{
			Local_27[1 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
			ENTITY::SET_ENTITY_HEALTH(Local_27[1 /*110*/], 150);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[1 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[1 /*110*/], 0, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[1 /*110*/], 1, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[1 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/].f_105))
		{
			Local_27[1 /*110*/].f_105 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Local_27[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_27[1 /*110*/].f_105, Local_27[1 /*110*/], PED::GET_PED_BONE_INDEX(Local_27[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[0 /*110*/]))
		{
			Local_27[0 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[0 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[0 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[0 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[2 /*110*/]))
		{
			Local_27[2 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[2 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[2 /*110*/], 1, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[2 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_27[3 /*110*/]))
		{
			Local_27[3 /*110*/] = PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 4, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_27[3 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_27[3 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_27[3 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_468) && !ENTITY::DOES_ENTITY_EXIST(Local_578[3 /*8*/]))
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				Local_578[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1);
				Local_468 = PED::CREATE_PED_INSIDE_VEHICLE(Local_578[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_578[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1);
				Local_468 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_578[0 /*8*/]))
	{
		GlobalFunc_743(Local_578[0 /*8*/], 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_578[0 /*8*/], 7);
		VEHICLE::SET_VEHICLE_ALARM(Local_578[0 /*8*/], 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_578[0 /*8*/], 1);
		Local_578[0 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_578[1 /*8*/]))
	{
		GlobalFunc_743(Local_578[1 /*8*/], 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_578[1 /*8*/], 1, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_578[1 /*8*/], 4, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_578[1 /*8*/], 0, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_578[1 /*8*/], 4, 0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_578[1 /*8*/], 1);
		Local_578[1 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_578[2 /*8*/]))
	{
		GlobalFunc_743(Local_578[2 /*8*/], 2);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_578[2 /*8*/], 2, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_578[2 /*8*/], 3, 1, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_578[2 /*8*/], 1);
		Local_578[2 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[1 /*110*/], &(Local_27[1 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[1 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[1 /*110*/], iLocal_2519);
		AUDIO::STOP_PED_SPEAKING(Local_27[1 /*110*/], 1);
		GlobalFunc_4495(Local_27[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_27[1 /*110*/], 50f);
		StringCopy(&(Local_27[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_27[1 /*110*/].f_42 = 20f;
		Local_27[1 /*110*/].f_86 = 1;
		Local_27[1 /*110*/].f_87 = 1;
		Local_27[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_27[1 /*110*/].f_106 = 60309;
		Local_27[1 /*110*/].f_108 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[0 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[0 /*110*/], &(Local_27[0 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[0 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[0 /*110*/], iLocal_2519);
		AUDIO::STOP_PED_SPEAKING(Local_27[0 /*110*/], 1);
		GlobalFunc_4495(Local_27[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_27[0 /*110*/], 50f);
		StringCopy(&(Local_27[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_27[0 /*110*/].f_86 = 1;
		Local_27[0 /*110*/].f_87 = 1;
		Local_27[0 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[2 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[2 /*110*/], &(Local_27[2 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[2 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[2 /*110*/], iLocal_2519);
		GlobalFunc_4495(Local_27[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_27[2 /*110*/], 1);
		PED::SET_PED_HEARING_RANGE(Local_27[2 /*110*/], 50f);
		StringCopy(&(Local_27[2 /*110*/].f_1), "front 1", 16);
		Local_27[2 /*110*/].f_86 = 0;
		Local_27[2 /*110*/].f_87 = 0;
		Local_27[2 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_27[3 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_27[3 /*110*/], &(Local_27[3 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27[3 /*110*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27[3 /*110*/], iLocal_2519);
		PED::SET_PED_HEARING_RANGE(Local_27[3 /*110*/], 50f);
		GlobalFunc_4495(Local_27[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_27[3 /*110*/], 1);
		StringCopy(&(Local_27[3 /*110*/].f_1), "front 2", 16);
		Local_27[3 /*110*/].f_86 = 0;
		Local_27[3 /*110*/].f_87 = 0;
		Local_27[3 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_468) && ENTITY::DOES_ENTITY_EXIST(Local_578[3 /*8*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_468, &(Local_468.f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_468, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_468, iLocal_2519);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_468, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_468, 2, 0);
		WEAPON::GIVE_WEAPON_TO_PED(Local_468, joaat("weapon_nightstick"), -1, 0, 1);
		PED::SET_PED_ACCURACY(Local_468, 5);
		GlobalFunc_4495(Local_468, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_468.f_1), "sec", 16);
		Local_468.f_86 = 1;
		Local_468.f_87 = 1;
		Local_468.f_93 = 0;
		if (Global_86864.f_357 == 1)
		{
			if (!GlobalFunc_2664(Local_468, 242628503, 1))
			{
				if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_2571 = 0;
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_578[3 /*8*/], &cLocal_644, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					TASK::TASK_LEAVE_VEHICLE(0, Local_578[3 /*8*/], 0);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_468, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!GlobalFunc_2664(Local_468, -1680762137, 1))
		{
			if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_2571 = 1;
				TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Local_468, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((ENTITY::DOES_ENTITY_EXIST(Local_578[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_578[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_578[2 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_578[3 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[1 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[0 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[2 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27[3 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_468)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}






int func_183(struct<3> Param0, float fParam3)//Position - 0x9CB0
{
	return GlobalFunc_9228(&(Global_93588.f_2167), Param0, fParam3, 0);
}
























int func_207(var uParam0, char[4] cParam1)//Position - 0xAE93
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(cParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_374[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}




void func_211(int iParam0, var uParam1, var uParam2)//Position - 0xB293
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}





void func_216()//Position - 0xBD04
{
	if (GlobalFunc_145())
	{
		func_8(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_218()//Position - 0xBD49
{
	GlobalFunc_4498(&(Local_1662[1 /*8*/]), 51702/*func_237*/, "AI Controller");
	GlobalFunc_4498(&(Local_1662[0 /*8*/]), 50067/*func_228*/, "Dialogue");
	GlobalFunc_4498(&(Local_1662[3 /*8*/]), 49093/*func_223*/, "Alarms & Wanted Level");
	GlobalFunc_4498(&(Local_1662[4 /*8*/]), 48541/*func_219*/, "Music Manager");
}

void func_219(var uParam0)//Position - 0xBD9D
{
	if (!GlobalFunc_4497(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((AUDIO::IS_ALARM_PLAYING(&cLocal_625) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || GlobalFunc_4492(&(Local_1662[3 /*8*/])))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_ATTACK");
				func_221(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_START");
					func_221(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2567 == 3 || iLocal_2567 == 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_WAREHOUSE");
					func_221(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2567 == 6 || iLocal_2567 == 9)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_VAN");
					func_221(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (iLocal_2567 == 9 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_1"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_1");
							GlobalFunc_4496(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((AUDIO::IS_ALARM_PLAYING(&cLocal_625) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && iLocal_2563)
				{
					func_221(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_2"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_2");
						func_221(uParam0, 6, 0);
						GlobalFunc_4496(uParam0);
					}
				}
				break;
			}
	}
	if (GlobalFunc_4497(uParam0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}


void func_221(var uParam0, int iParam1, int iParam2)//Position - 0xBF88
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}


void func_223(var uParam0)//Position - 0xBFC5
{
	if (!GlobalFunc_4497(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_221(uParam0, 2, 2000);
				break;
			
			case 2:
				if (AUDIO::PREPARE_ALARM(&cLocal_625))
				{
					AUDIO::START_ALARM(&cLocal_625, 0);
					func_226(&cLocal_2344, Local_641, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2344, "", 32);
					func_221(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_224(&Local_468, 3, 1, "ALARM EVENT SET IT", 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
				PED::SET_CREATE_RANDOM_COPS(0);
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				uParam0->f_2 = MISC::GET_GAME_TIMER() + 15000;
				func_221(uParam0, 4, 0);
				break;
			
			case 4:
				if (MISC::GET_GAME_TIMER() > uParam0->f_2)
				{
					PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
					PED::SET_CREATE_RANDOM_COPS(1);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_2563 = 1;
					GlobalFunc_4496(uParam0);
				}
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				break;
			}
	}
}

int func_224(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)//Position - 0xC0DB
{
	return func_225(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_225(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xC0F7
{
	if (func_168(*uParam0))
	{
		if (!bParam7 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = MISC::GET_GAME_TIMER();
			if (iParam1 != uParam0->f_5 || !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam9)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam8;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = MISC::GET_GAME_TIMER();
				if (!GlobalFunc_105(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam6 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam6))
				{
					uParam0->f_91 = iParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_226(char* sParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xC1CA
{
	struct<32> Var0;
	
	Var0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam5;
	Var0.f_26 = fParam4;
	Var0.f_29 = iParam6;
	Var0.f_30 = iParam7;
	Var0.f_31 = iParam8;
	Var0.f_23 = { Param1 };
	func_227(&Var0, 0);
}

int func_227(var uParam0, int iParam1)//Position - 0xC216
{
	int iVar0;
	int iVar1;
	
	if ((MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)) && *uParam0 != -1) && (!ENTITY::DOES_ENTITY_EXIST(Local_27[*uParam0 /*110*/]) || PED::IS_PED_INJURED(Local_27[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1703[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1703 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (MISC::IS_STRING_NULL_OR_EMPTY(iParam1) || MISC::ARE_STRINGS_EQUAL(iParam1, &(uParam0->f_17))))
		{
			Local_1703[iVar0 /*32*/] = *uParam0;
			Local_1703[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1703[iVar0 /*32*/].f_23 = { ENTITY::GET_ENTITY_COORDS(Local_27[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1703[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1703[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1703[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1703[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1703[iVar0 /*32*/].f_27 = MISC::GET_GAME_TIMER();
			Local_1703[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1703[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_228(var uParam0)//Position - 0xC393
{
	char cVar0[24];
	bool bVar6;
	struct<3> Var7;
	
	if (!GlobalFunc_4497(uParam0))
	{
		if (GlobalFunc_111())
		{
			iLocal_2518 = -1;
		}
		else if (iLocal_2518 == -1)
		{
			iLocal_2518 = MISC::GET_GAME_TIMER();
			iLocal_2544 = -1;
			iLocal_2545 = 1;
		}
		if (iLocal_2522 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_2524))
		{
			if (((Local_27[iLocal_2522 /*110*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_27[iLocal_2522 /*110*/])) && !PED::IS_PED_INJURED(Local_27[iLocal_2522 /*110*/])) && !PED::IS_CONVERSATION_PED_DEAD(Local_27[iLocal_2522 /*110*/]))
			{
				if (!PED::IS_PED_RAGDOLL(Local_27[iLocal_2522 /*110*/]))
				{
					if (GlobalFunc_111())
					{
						if (iLocal_2534 && (iLocal_2545 || iLocal_2523 > iLocal_2544))
						{
							if (bLocal_2546)
							{
								iLocal_2549 = iLocal_2539;
								iLocal_2550 = iLocal_2544;
								MemCopy(&Local_2551, {GlobalFunc_560()}, 4);
								MemCopy(&Local_2555, {GlobalFunc_514()}, 4);
								iLocal_2559 = iLocal_2545;
								bLocal_2560 = iLocal_2547;
							}
							if (iLocal_2535)
							{
								GlobalFunc_4956();
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					if (GlobalFunc_5170())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2518) > iLocal_2532)
						{
							if (func_233(iLocal_2522))
							{
								MemCopy(&cVar0, {Local_621}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_2522)
							{
								case 0:
									GlobalFunc_173(&uLocal_2352, 4, Local_27[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									GlobalFunc_173(&uLocal_2352, 5, Local_27[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									GlobalFunc_173(&uLocal_2352, 4, Local_27[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									GlobalFunc_173(&uLocal_2352, 3, Local_27[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2528))
							{
								if (GlobalFunc_10652(&uLocal_2352, &cVar0, &Local_2524, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (GlobalFunc_10699(&uLocal_2352, &cVar0, &Local_2524, &cLocal_2528, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_227(&(Local_27[iLocal_2522 /*110*/].f_50), &Local_2524);
								iLocal_2544 = iLocal_2523;
								iLocal_2545 = iLocal_2536;
								bLocal_2546 = iLocal_2538;
								iLocal_2547 = iLocal_2537;
								iLocal_2522 = -1;
								iLocal_2523 = -1;
								StringCopy(&Local_2524, "", 16);
								iLocal_2532 = 0;
								fLocal_2533 = 9999999f;
								iLocal_2534 = 0;
								iLocal_2535 = 0;
								iLocal_2536 = 1;
								iLocal_2538 = 0;
								iLocal_2537 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2522 = -1;
				iLocal_2523 = -1;
				StringCopy(&Local_2524, "", 16);
				iLocal_2532 = 0;
				fLocal_2533 = 9999999f;
				iLocal_2534 = 0;
				iLocal_2535 = 0;
				iLocal_2536 = 1;
				iLocal_2537 = 0;
			}
		}
		if (((GlobalFunc_111() && iLocal_2539 != -1) && iLocal_2547) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2540))
		{
			Var7 = { ENTITY::GET_ENTITY_COORDS(Local_27[iLocal_2539 /*110*/], 1) };
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var7, 1) >= 25f)
			{
				iLocal_2549 = iLocal_2539;
				iLocal_2550 = iLocal_2544;
				MemCopy(&Local_2551, {GlobalFunc_560()}, 4);
				MemCopy(&Local_2555, {GlobalFunc_514()}, 4);
				iLocal_2559 = iLocal_2545;
				bLocal_2560 = iLocal_2547;
				GlobalFunc_4956();
				iLocal_2539 = -1;
				iLocal_2544 = -1;
				StringCopy(&cLocal_2540, "", 16);
				iLocal_2545 = 0;
				iLocal_2547 = 0;
			}
		}
		if (iLocal_2549 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_2551))
		{
			if (Local_27[iLocal_2549 /*110*/].f_5 > iLocal_2550)
			{
				iLocal_2549 = -1;
				iLocal_2550 = -1;
				StringCopy(&Local_2551, "", 16);
				StringCopy(&Local_2555, "", 16);
				iLocal_2559 = 1;
			}
		}
		if (iLocal_2522 == -1 && MISC::IS_STRING_NULL_OR_EMPTY(&Local_2524))
		{
			if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 10000)
			{
				if (iLocal_2549 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_2551))
				{
					func_230(iLocal_2549, &Local_2551, iLocal_2550, 0, 0, iLocal_2559, 0, 1, &Local_2555, bLocal_2560);
					iLocal_2549 = -1;
					iLocal_2550 = -1;
					StringCopy(&Local_2551, "", 16);
					StringCopy(&Local_2555, "", 16);
					iLocal_2559 = 1;
				}
			}
		}
	}
	GlobalFunc_728(bLocal_2560);
}


int func_230(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)//Position - 0xC766
{
	float fVar0;
	bool bVar1;
	
	fVar0 = GlobalFunc_156(Local_27[iParam0 /*110*/], PLAYER::PLAYER_PED_ID(), 1);
	if ((iParam2 > iLocal_2523 || iParam2 == 4) || ((iParam2 == iLocal_2523 && (fVar0 < fLocal_2533 || (func_233(iParam0) && !func_233(iLocal_2522)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_2522 = iParam0;
			iLocal_2523 = iParam2;
			StringCopy(&Local_2524, sParam1, 16);
			StringCopy(&cLocal_2528, sParam8, 16);
			fLocal_2533 = fVar0;
			iLocal_2534 = iParam3;
			iLocal_2535 = iParam4;
			iLocal_2532 = iParam6;
			iLocal_2536 = iParam5;
			iLocal_2538 = iParam7;
			iLocal_2537 = iParam9;
			return 1;
		}
	}
	return 0;
}



int func_233(int iParam0)//Position - 0xC8E1
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}




void func_237(var uParam0)//Position - 0xC9F6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (!GlobalFunc_4497(uParam0))
	{
		bLocal_2564 = true;
		if (!iLocal_2562)
		{
			if (func_170())
			{
				iLocal_2562 = 1;
				iLocal_2565 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_2565) > 3000)
		{
			iLocal_2562 = 0;
			iLocal_2565 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_257(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_468))
		{
			func_257(&Local_468);
		}
		iVar1 = 0;
		while (iVar1 < Local_1703)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1703[iVar1 /*32*/].f_1)) && Local_1703[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1703[iVar1 /*32*/].f_28 == -1 || (MISC::GET_GAME_TIMER() - Local_1703[iVar1 /*32*/].f_27) < Local_1703[iVar1 /*32*/].f_28)
				{
					if (Local_1703[iVar1 /*32*/].f_29 <= 0 || (MISC::GET_GAME_TIMER() - Local_1703[iVar1 /*32*/].f_27) > Local_1703[iVar1 /*32*/].f_29)
					{
						if (Local_1703[iVar1 /*32*/] != -1 && func_168(Local_27[Local_1703[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(Local_27[Local_1703[iVar1 /*32*/] /*110*/], 1) };
							Local_1703[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1703[iVar1 /*32*/].f_23 };
						}
						if (!GlobalFunc_4492(&(Local_1662[3 /*8*/])))
						{
							if (Local_1703[iVar1 /*32*/].f_31 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Local_641, 1) < 35f)
							{
								GlobalFunc_4493(&(Local_1662[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_27)
						{
							if (Local_1703[iVar1 /*32*/] == -1 || (iVar0 != Local_1703[iVar1 /*32*/] && Local_27[Local_1703[iVar1 /*32*/] /*110*/].f_5 >= Local_27[iVar0 /*110*/].f_5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/]) && !PED::IS_PED_INJURED(Local_27[iVar0 /*110*/]))
								{
									if (GlobalFunc_713(Local_27[iVar0 /*110*/], Var2, 1) < (Local_1703[iVar1 /*32*/].f_26 + Local_27[iVar0 /*110*/].f_42))
									{
										Local_27[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1703[iVar1 /*32*/].f_30)
										{
											if (!GlobalFunc_4492(&(Local_1662[3 /*8*/])))
											{
												GlobalFunc_4493(&(Local_1662[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2344, {Local_1703[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_1703[iVar1 /*32*/].f_27) > Local_1703[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1703[iVar1 /*32*/].f_1), "", 64);
					Local_1703[iVar1 /*32*/] = -1;
					Local_1703[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1703[iVar1 /*32*/].f_26 = 0f;
					Local_1703[iVar1 /*32*/].f_27 = -1;
					Local_1703[iVar1 /*32*/].f_28 = -1;
					Local_1703[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_251(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_468))
		{
			func_242(&Local_468);
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_241(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_468))
		{
			func_239(&Local_468);
		}
		iVar0 = 0;
		while (iVar0 < Local_27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/].f_105))
			{
				if (((!ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*110*/]) || PED::IS_PED_INJURED(Local_27[iVar0 /*110*/])) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_27[iVar0 /*110*/])) || (Local_27[iVar0 /*110*/].f_108 && Local_27[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_27[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_27[iVar0 /*110*/].f_105, Local_27[iVar0 /*110*/]))
					{
						ENTITY::DETACH_ENTITY(Local_27[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar5)
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_27[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						OBJECT::DELETE_OBJECT(&(Local_27[iVar0 /*110*/].f_105));
					}
					Local_27[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_27[iVar0 /*110*/].f_107 != 0 && Local_27[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_27[iVar0 /*110*/].f_109 && STREAMING::HAS_MODEL_LOADED(Local_27[iVar0 /*110*/].f_107))
				{
					Local_27[iVar0 /*110*/].f_105 = OBJECT::CREATE_OBJECT(Local_27[iVar0 /*110*/].f_107, PED::GET_PED_BONE_COORDS(Local_27[iVar0 /*110*/], Local_27[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_27[iVar0 /*110*/].f_105, Local_27[iVar0 /*110*/], PED::GET_PED_BONE_INDEX(Local_27[iVar0 /*110*/], Local_27[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_27[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar1 /*110*/]) && !PED::IS_PED_INJURED(Local_27[iVar1 /*110*/]))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_27[iVar1 /*110*/]);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_27[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_238();
	}
	if (GlobalFunc_4497(uParam0))
	{
	}
}

void func_238()//Position - 0xCF20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_168(Local_578[iVar0 /*8*/]))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_578[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_239(int iParam0)//Position - 0xCF53
{
	int iVar0;
	int iVar1;
	
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
	if (func_240(*iParam0))
	{
		Local_468.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				if ((!GlobalFunc_2664(*iParam0, 1647992574, 1) && !GlobalFunc_2664(*iParam0, 242628503, 1)) || iLocal_2571)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2571 = 0;
					}
				}
			}
			else if (!GlobalFunc_2664(*iParam0, -1680762137, 1) || !iLocal_2571)
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2571 = 1;
				}
			}
			break;
		
		case 3:
			PED::SET_PED_USING_ACTION_MODE(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), 0))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_pistol"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_nightstick"), 0);
						}
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), 0))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_nightstick"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!GlobalFunc_2664(*iParam0, 780511057, 1) || func_240(*iParam0))
			{
				TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 686645495:
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, ENTITY::GET_ENTITY_COORDS(iParam0->f_91, 1), 180f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000)
						{
							if (!GlobalFunc_2664(*iParam0, -875674219, 1) || func_240(*iParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!GlobalFunc_2664(*iParam0, -2015108952, 1) || func_240(*iParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !GlobalFunc_537(iParam0->f_88, iParam0->f_43, 1f))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!GlobalFunc_105(iParam0->f_88))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, iParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000)
						{
							if ((!GlobalFunc_2664(*iParam0, 1464580341, 1) || func_240(*iParam0)) || iVar1)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, 0);
								TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!GlobalFunc_2664(*iParam0, 713668775, 1) || func_240(*iParam0)) || iVar1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!GlobalFunc_105(iParam0->f_88))
					{
						if (!GlobalFunc_2664(*iParam0, 1464580341, 1) || func_240(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, -1);
							TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
					{
						if (!GlobalFunc_2664(*iParam0, -875674219, 1) || func_240(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_240(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)//Position - 0xD44D
{
	if (Param0.f_5 != Param0.f_7 || !MISC::ARE_STRINGS_EQUAL(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_241(var uParam0)//Position - 0xD479
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
	if (func_240(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_27)
			{
				if (Local_27[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!GlobalFunc_2664(*uParam0, 1647992574, 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!GlobalFunc_2664(*uParam0, 242628503, 1) || func_240(*uParam0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_2520);
								if (!GlobalFunc_537(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								TASK::TASK_ACHIEVE_HEADING(0, 264.2812f, 0);
								TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_2520);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_2520);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_2520);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_578[2 /*8*/]))
							{
								TASK::TASK_LOOK_AT_COORD(*uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_578[2 /*8*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_578[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2) || uParam0->f_46 == 2) && MISC::GET_GAME_TIMER() > uParam0->f_37)
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_2520);
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_2520);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_2520);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_2520);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!GlobalFunc_2664(*uParam0, 1647992574, 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_91, 1), 180f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000)
						{
							if (!GlobalFunc_2664(*uParam0, -875674219, 1) || func_240(*uParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
								TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!GlobalFunc_2664(*uParam0, -2015108952, 1) || func_240(*uParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !GlobalFunc_537(uParam0->f_88, uParam0->f_43, 1f))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar8 = 1;
					}
					if (!GlobalFunc_105(uParam0->f_88))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, uParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000)
						{
							if ((!GlobalFunc_2664(*uParam0, 1464580341, 1) || func_240(*uParam0)) || iVar8)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, 0);
								TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!GlobalFunc_2664(*uParam0, 713668775, 1) || func_240(*uParam0)) || iVar8)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!GlobalFunc_105(uParam0->f_88))
					{
						if (!GlobalFunc_2664(*uParam0, 1464580341, 1) || func_240(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, -1);
							TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
					{
						if (!GlobalFunc_2664(*uParam0, -875674219, 1) || func_240(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_FOOT_LEAVE") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_VEH_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_FOOT_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!GlobalFunc_2664(*uParam0, 242628503, 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_240(*uParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_2520);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_2520, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_2520);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_2520);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_2520);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2570) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2570, 0))
				{
					fVar11 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2570, 1);
				}
				if ((iLocal_2567 == 3 || iLocal_2567 == 2) || iLocal_2567 == 8)
				{
					iVar9 = PLAYER::PLAYER_PED_ID();
					fVar12 = 2f;
				}
				else if (iLocal_2567 == 0 || iLocal_2567 == 1)
				{
					iVar9 = PLAYER::PLAYER_PED_ID();
					fVar12 = 1f;
				}
				else if (iLocal_2567 == 5 && ENTITY::DOES_ENTITY_EXIST(iLocal_2570))
				{
					if (fVar11 > 10f)
					{
						iVar9 = PLAYER::PLAYER_PED_ID();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2570;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2567 == 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_2570))
				{
					iVar9 = iLocal_2570;
					fVar12 = 1f;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar9))
				{
					fVar10 = GlobalFunc_156(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!GlobalFunc_2664(*uParam0, 242628503, 1) && !GlobalFunc_2664(*uParam0, 1227113341, 1)) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_240(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_2520);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_2520, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_2520);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_2520);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_2520);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
				}
				else if (!GlobalFunc_2664(*uParam0, 1227113341, 1) || func_240(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					TASK::TASK_GO_TO_ENTITY(*uParam0, iVar9, -1, fVar13, fVar12, 1073741824, 0);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!GlobalFunc_2664(*uParam0, 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!GlobalFunc_2664(*uParam0, 242628503, 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_240(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_2520);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_2520, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_2520);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_2520);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_2520);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (GlobalFunc_713(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!GlobalFunc_2664(*uParam0, 1805844857, 1))
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
			}
			else if ((!GlobalFunc_2664(*uParam0, 1805844857, 1) && !GlobalFunc_2664(*uParam0, 713668775, 1)) || func_240(*uParam0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!GlobalFunc_2664(*uParam0, -1519143300, 1) || func_240(*uParam0))
					{
						TASK::TASK_HANDS_UP(*uParam0, -1, PLAYER::PLAYER_PED_ID(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_242(int iParam0)//Position - 0xDF62
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
	fVar1 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_249(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_224(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_224(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 122) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 123)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 86))
	{
		func_224(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_248(4))
	{
		func_224(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_247(*iParam0, 2))
	{
		func_224(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_224(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 11)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_SEC_CAR", Local_578[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 6)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 10)
	{
		if (iParam0->f_39)
		{
			func_246(iParam0, 3, "STEALING_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 41)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 112)) || func_244(*iParam0, 0))
	{
		func_224(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 101)) || func_244(*iParam0, 1))
	{
		func_224(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_224(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_224(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1703 - 1))
	{
		bVar8 = Local_1703[iParam0->f_34 /*32*/].f_30;
		switch (MISC::GET_HASH_KEY(&(Local_1703[iParam0->f_34 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case 152436526:
			case 600040296:
				func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_243(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_246(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), Local_578[func_96() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 58299323:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && GlobalFunc_713(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_224(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) > 65f) && (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) > 300f && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 150f)
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_243(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam6, int iParam7, bool bParam8)//Position - 0xE686
{
	return func_225(iParam0, iParam1, sParam2, Param3, 0, bParam6, iParam7, bParam8);
}

int func_244(struct<110> Param0, int iParam110)//Position - 0xE6A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (func_245(Param0, Local_27[iVar0 /*110*/], iParam110))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)//Position - 0xE6DA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam110) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam110, PLAYER::PLAYER_PED_ID(), iParam220))
	{
		if (GlobalFunc_156(iParam0, iParam110, 1) < 15f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xE71E
{
	return func_225(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_247(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)//Position - 0xE73B
{
	if ((iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam110) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xE792
{
	if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam0) && (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	return 0;
}

int func_249(struct<110> Param0, var uParam110, var uParam111, var uParam112)//Position - 0xE7C7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (func_250(Param0, Local_27[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_27[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam110 = bVar2;
				*uParam111 = bVar3;
				*uParam112 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam110 = 1;
				}
				if (bVar3)
				{
					*uParam111 = 1;
				}
				if (bVar4)
				{
					*uParam112 = 1;
				}
			}
			if (Local_27[iVar0 /*110*/].f_85)
			{
				*uParam111 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam110 = 0;
	*uParam111 = 0;
	*uParam112 = 0;
	return 0;
}

int func_250(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222)//Position - 0xE870
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(Param110) && PED::IS_PED_INJURED(Param110))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Param110, 0) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Param0, 1), Var0, 1) < 10f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Param0, Param110))
			{
				if ((MISC::GET_GAME_TIMER() - Param110.f_103) < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = PED::GET_PED_SOURCE_OF_DEATH(Param110);
					if (ENTITY::IS_ENTITY_A_PED(iVar3))
					{
						iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
						if ((iVar4 == PLAYER::PLAYER_PED_ID() && !PED::IS_PED_INJURED(iVar4)) && Param0.f_39)
						{
							*uParam221 = 1;
						}
						else
						{
							*uParam221 = 0;
						}
					}
					else
					{
						*uParam221 = 0;
					}
				}
				else
				{
					*uParam221 = 0;
				}
				iVar5 = PED::GET_PED_CAUSE_OF_DEATH(Param110);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && WEAPON::GET_WEAPON_DAMAGE_TYPE(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_251(int iParam0)//Position - 0xE963
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	struct<6> Var27;
	bool bVar33;
	var uVar34;
	float fVar35;
	struct<3> Var36;
	struct<3> Var39;
	struct<4> Var42;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
	fVar1 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_249(*iParam0, &uVar21, &bVar22, &bVar23);
	if (((iParam0->f_5 != 5 && uVar20) && uVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_224(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_224(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 122) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 123)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 86))
	{
		func_224(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_248(4))
	{
		func_224(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_247(*iParam0, 2))
	{
		func_224(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 7)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 6)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 10)
	{
		if (iParam0->f_39)
		{
			func_246(iParam0, 3, "STEALING_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 41)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 112)) || func_244(*iParam0, 0))
	{
		func_224(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 101)) || func_244(*iParam0, 1))
	{
		func_224(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar20)
	{
		if ((uVar21 && bVar22) && bVar23)
		{
			func_224(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_224(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_2567 == 9) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER")) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_246(iParam0, 1, "SEE_VAN_LEAVING", Local_578[func_96() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2567 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_2567 == 0 || iLocal_2567 == 1) || iLocal_2567 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_2567 == 3 || iLocal_2567 == 2) || iLocal_2567 == 5)))
		{
			if ((iLocal_2567 == 5 || iLocal_2567 == 4) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam0, iLocal_2570, 19))
			{
				switch (iLocal_2567)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_224(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_2567)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_224(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_243(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1703 - 1))
	{
		bVar24 = Local_1703[iParam0->f_34 /*32*/].f_30;
		switch (MISC::GET_HASH_KEY(&(Local_1703[iParam0->f_34 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (GlobalFunc_713(*iParam0, Local_1703[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_224(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "STEALING_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "GET_IN_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 152436526:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_243(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, bVar24);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_246(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), Local_578[func_96() /*8*/], 1, 0, bVar24);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar25 = 0;
	while (iVar25 < Local_27)
	{
		if (Local_27[iVar25 /*110*/] == *iParam0)
		{
			iVar26 = iVar25;
		}
		iVar25++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 152436526:
				case 1921975061:
				case 880647822:
				case 953441746:
				case 1518302817:
				case -1298712083:
					if ((func_256(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_168(Local_468))
					{
						if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == 152436526 || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 1921975061) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 880647822)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_GUN1") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_ARM2", 24);
										break;
								}
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == 953441746 || MISC::GET_HASH_KEY(&(iParam0->f_9)) == 1518302817) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == -1298712083)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_KILL") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_GETSEC") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SECIN2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_247(*iParam0, 4))
					{
						func_224(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 1000)
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_247(*iParam0, 4))
					{
						func_224(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 15000 || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 3000) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_256(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_HND1") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_HND1") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar26)
			{
				case 1:
					if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
					{
						switch (iLocal_2548)
						{
							case 0:
								func_230(iVar26, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 1:
								func_230(iVar26, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 2:
								func_230(iVar26, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 3:
								func_230(iVar26, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 4:
								func_230(iVar26, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 5:
								func_230(iVar26, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 6:
								func_230(iVar26, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 7:
								func_230(iVar26, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 8:
								func_230(iVar26, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 9:
								func_230(iVar26, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 10:
								func_230(iVar26, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_230(iVar26, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							GlobalFunc_173(&uLocal_2352, 4, Local_27[2 /*110*/], "CONSTRUCTION1", 0, 1);
							GlobalFunc_173(&uLocal_2352, 3, Local_27[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var36 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				Var39 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(Local_27[iVar26 /*110*/], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				uVar34 = GlobalFunc_168(Var36, Var39);
				fVar35 = MISC::ACOS(uVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_256(*iParam0) && MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_LVE1") };
							func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_246(iParam0, 1, "CHECK_DRIVER", Local_578[func_96() /*8*/], 0, 1, 0);
					}
					else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_224(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_256(*iParam0))
					{
						Var27 = { func_255(iVar26, "JS_VAN_LVE2") };
						func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar33)
					{
						if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
						{
							func_224(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_246(iParam0, 1, "SEE_VAN_LEAVING_1", Local_578[func_96() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && GlobalFunc_713(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_224(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_SND_INV") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_SNDLOST2") };
							func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_SNDLOST1") };
							func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_641, 1) > 65f) && (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_256(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_MELE_1") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_MELE_2") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_MELE_ESC") };
							func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && iParam0->f_39) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)) && iLocal_2567 != 9) && iLocal_2567 != 10)
					{
						func_224(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_IN2") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 2000)
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_TK") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_IN1") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 2000)
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_TK") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_IN2") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_38) > 5000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_230(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2548 = 0;
				}
				func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_38) > 1000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_VEH")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH"))
						{
							Var42 = { iParam0->f_9 };
							StringConCat(&Var42, "_LEAVE", 32);
							func_224(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH")) || (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_DITCH_VEH") && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_2518 != -1) && (MISC::GET_GAME_TIMER() - iLocal_2518) > 7000) && (MISC::GET_GAME_TIMER() - iParam0->f_38) == 0)
						{
							func_224(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_256(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_233(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_255(iVar26, "JS_ENT_F1") };
										func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_ENT_F1_P") };
										func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_233(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_255(iVar26, "JS_ENT_F2") };
									func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = { func_255(iVar26, "JS_ENT_F2_P") };
									func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
						{
							if (func_233(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_255(iVar26, "JS_ENT_F") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = { func_255(iVar26, "JS_ENT_F_P") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_256(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_ENT_V3") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_ENT_V3") };
								func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_256(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH2") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
							{
								if (func_233(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										Var27 = { func_255(iVar26, "JS_WH") };
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_WH_F") };
									}
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_256(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH2") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
							{
								if (func_233(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_255(iVar26, "JS_ENT_V4") };
										}
										else
										{
											Var27 = { func_255(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_WH_F") };
									}
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_256(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH2") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
							{
								if (func_233(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_255(iVar26, "JS_ENT_V3") };
										}
										else
										{
											Var27 = { func_255(iVar26, "JS_WH") };
										}
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_WH_F") };
									}
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 1000)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V4") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var27 = { func_255(iVar26, "JS_ENT_V4") };
							}
							else
							{
								Var27 = { func_255(iVar26, "JS_ENT_V3") };
							}
							func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 1000)
							{
								if (func_233(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_255(iVar26, "JS_ENT_F3") };
										func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_ENT_F3_P") };
										func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_48 == 0)
						{
							if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_2518) > 1000)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V5") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}



void func_254(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x11096
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_27)
	{
		if (Local_27[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_227(&(iParam0->f_50), 0);
	}
}

struct<6> func_255(int iParam0, char* sParam1)//Position - 0x11112
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_256(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)//Position - 0x11132
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0)//Position - 0x11150
{
	if (PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID()))
	{
		iParam0->f_40 = MISC::GET_GAME_TIMER();
		iParam0->f_39 = 1;
	}
	else if ((MISC::GET_GAME_TIMER() - iParam0->f_40) > 2000 || !PED::IS_PED_FACING_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 90f))
	{
		iParam0->f_40 = MISC::GET_GAME_TIMER();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_2564 = false;
	}
	if (bLocal_2564)
	{
		PED::SET_PED_RESET_FLAG(*iParam0, 188, 1);
	}
	if (!func_258())
	{
		iParam0->f_41 = PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_258()//Position - 0x11225
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_578[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_578[iVar0 /*8*/], 0))
		{
			if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_578[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_259()//Position - 0x11271
{
	struct<3> Var0;
	var uVar3;
	
	PED::ADD_RELATIONSHIP_GROUP("BUGSTAR", &iLocal_2519);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_2519);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2519, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_2519);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2519, joaat("COP"));
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f));
	MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
	if (GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		iLocal_654 = 0;
		if (GlobalFunc_Is_Mission_Retry())
		{
			if (Global_84544)
			{
				iLocal_654++;
			}
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_211(iLocal_654, &Var0, &uVar3);
			GlobalFunc_5812(Var0, uVar3, 1, 0);
		}
		bLocal_653 = true;
	}
	else
	{
		while (!func_177(1))
		{
			SYSTEM::WAIT(0);
			GlobalFunc_8012(&uLocal_657);
		}
	}
	GlobalFunc_3005(&uLocal_657, "JHP1A", 0);
	GlobalFunc_719(&uLocal_657, "misslsdhsclipboard@base");
	GlobalFunc_719(&uLocal_657, "misslsdhsclipboard@idle_a");
	GlobalFunc_719(&uLocal_657, "misstrevor3");
	GlobalFunc_718(&uLocal_657, joaat("p_amb_clipboard_01"));
	GlobalFunc_710(&uLocal_657, iLocal_2521);
	func_207(&uLocal_657, &cLocal_644);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.15f);
	GlobalFunc_5198(87);
	GlobalFunc_173(&uLocal_2352, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	GlobalFunc_173(&uLocal_2352, 3, 0, "LESTER", 0, 1);
	GlobalFunc_728(bLocal_2517);
	GlobalFunc_3041();
	iLocal_2521 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_641, "po1_08_warehouseint1");
	AUDIO::PREPARE_ALARM(&cLocal_625);
	iLocal_2572 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}







void func_266(int iParam0)//Position - 0x1169D
{
	struct<3> Var0;
	char[] cVar6[8];
	
	if (iParam0 == 6)
	{
		GlobalFunc_10716();
		func_8(0);
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_655)
	{
		bLocal_655 = true;
		iLocal_656 = iParam0;
		switch (iLocal_656)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar6))
		{
			GlobalFunc_10881(&Var0);
		}
		else
		{
			func_267(&Var0, &cVar6);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
}

void func_267(char* sParam0, char* sParam1)//Position - 0x11763
{
	GlobalFunc_691(sParam0, sParam1);
	GlobalFunc_10730(0);
}













