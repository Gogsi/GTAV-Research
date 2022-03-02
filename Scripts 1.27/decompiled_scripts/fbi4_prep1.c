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
	bool bLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	struct<27> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	struct<11> Local_110[2];
	struct<25> Local_133[21];
	float fLocal_659 = 0f;
	int iLocal_660 = 0;
	bool bLocal_661 = 0;
	bool bLocal_662 = 0;
	bool bLocal_663 = 0;
	bool bLocal_664 = 0;
	int iLocal_665 = 0;
	struct<3> Local_666 = { 0, 0, 0 } ;
	int iLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 1000;
	var uLocal_680 = 1000;
	var uLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	var uLocal_686 = 0;
	struct<8> Local_687[3];
	var uLocal_712 = 15;
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
	var uLocal_764 = 15;
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
	int iLocal_816 = 0;
	char* sLocal_817 = NULL;
	char* sLocal_818 = NULL;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	var uLocal_822 = 0;
	struct<3> Local_823 = { 0, 0, 0 } ;
	struct<3> Local_826 = { 0, 0, 0 } ;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	bool bLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	struct<14> Local_839 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_853 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_867 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	int iLocal_876 = 0;
	char[] cLocal_877[8] = 0;
	var uLocal_878 = 16;
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
	char[] cLocal_1043[8] = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	int iLocal_1047[3] = { 0, 0, 0 };
	int iLocal_1051 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_80 = 21;
	fLocal_659 = -1f;
	Local_666 = { 0f, 0f, 0f };
	iLocal_669 = -1;
	sLocal_818 = "FBIPRA";
	Local_823 = { 0f, 0f, 0f };
	Local_826 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_877 = "FIBP1AU";
	iLocal_1051 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_817 = 0;
		GlobalFunc_10632();
		func_355();
	}
	func_338();
	if (GlobalFunc_199())
	{
		GlobalFunc_5116(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	GlobalFunc_10375();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TrT", 0);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			func_317();
			func_313();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			switch (iLocal_682)
			{
				case 0:
					func_256();
					break;
				
				case 1:
					func_232();
					break;
				
				case 2:
					func_214();
					break;
				
				case 3:
					func_101();
					break;
				
				case 4:
					func_38();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_682 != 5)
			{
				if (iLocal_682 >= 0 && !bLocal_27)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x186
{
	int iVar0;
	
	switch (iLocal_683)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_37();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (GlobalFunc_4947(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck"))
				{
					GlobalFunc_534(iVar0, 2);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_817))
			{
				GlobalFunc_10835(sLocal_817);
			}
			else
			{
				GlobalFunc_10616(0);
			}
			iLocal_683 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (GlobalFunc_764())
				{
					func_11();
				}
				func_2();
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 0, 0, 0);
				func_355();
			}
			break;
	}
}

void func_2()//Position - 0x23B
{
	GlobalFunc_7089(&Local_867);
	GlobalFunc_7089(&uLocal_874);
	GlobalFunc_7089(&iLocal_873);
	GlobalFunc_69(&Local_839);
	GlobalFunc_69(&Local_853);
	GlobalFunc_7089(&uLocal_875);
	func_3();
}

void func_3()//Position - 0x271
{
	GlobalFunc_146(&(Local_110[0 /*11*/].f_4));
	GlobalFunc_146(&(Local_110[1 /*11*/].f_4));
	GlobalFunc_131(&iLocal_108);
	func_5(&(Local_110[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_110[1 /*11*/]), 1, 0, 1);
	GlobalFunc_129(&(Local_133[iLocal_660 /*25*/].f_17), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_79);
	STREAMING::REMOVE_ANIM_DICT("missfbi4prepp1");
	STREAMING::REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}


void func_5(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}






void func_11()//Position - 0x4AB
{
	GlobalFunc_5129(918.8851f, -269.789f, 67.2145f, 325.9081f);
	GlobalFunc_5166(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}


























void func_37()//Position - 0x15F6
{
	GlobalFunc_146(&iLocal_820);
}

void func_38()//Position - 0x1605
{
	int iVar0;
	
	switch (iLocal_683)
	{
		case 0:
			iLocal_683 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_826, 270f))
			{
				iLocal_683 = 2;
			}
			else if (!GlobalFunc_663("PRA_LEVAREA", 0, 0))
			{
				GlobalFunc_164("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = GlobalFunc_8315();
			if (GlobalFunc_663("PRA_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (iVar0 == 0)
			{
				if (func_65(&uLocal_686, &cLocal_1043, &uLocal_878))
				{
					func_61();
					func_56();
				}
			}
			else
			{
				func_51(func_55(iVar0), -621899663, -621899663, 5, 0, iVar0, func_54(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_61();
				func_56();
			}
			break;
		
		case 3:
			func_39(1, 1, 1);
			iLocal_683 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x16E6
{
	func_41(0, 0, iParam2, 1);
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


void func_41(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1756
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
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










int func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1A33
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_2(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		GlobalFunc_5093(iParam5);
		return 1;
	}
	return 0;
}



int func_54(int iParam0)//Position - 0x1CBE
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_55(int iParam0)//Position - 0x1CD3
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_56()//Position - 0x1CEE
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	GlobalFunc_5103(0, 0);
	func_355();
}





void func_61()//Position - 0x1E83
{
	GlobalFunc_503(0, -1);
	GlobalFunc_504(0, 318);
	GlobalFunc_571(1, 320);
}




int func_65(var uParam0, char* sParam1, var uParam2)//Position - 0x1FB8
{
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_5972())
			{
				if ((GlobalFunc_230(74) || GlobalFunc_230(75)) && GlobalFunc_5202())
				{
					if (GlobalFunc_8315() == 0)
					{
						GlobalFunc_9030(1);
						GlobalFunc_585(46, 1);
						*uParam0 = 4;
					}
					else
					{
						GlobalFunc_173(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_80(uParam2, func_90(), GlobalFunc_8315(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { GlobalFunc_9032(1) };
							GlobalFunc_585(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (GlobalFunc_8315() == 0)
				{
					GlobalFunc_9030(0);
					*uParam0 = 4;
				}
				else
				{
					GlobalFunc_173(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_80(uParam2, func_90(), GlobalFunc_8315(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { GlobalFunc_9032(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_72();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (GlobalFunc_687())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					GlobalFunc_783("FBIPRAU", sParam1);
					GlobalFunc_782(1);
					*uParam0 = 3;
				}
			}
			if (GlobalFunc_781())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!GlobalFunc_687())
			{
				if (!GlobalFunc_116(0))
				{
					if (!GlobalFunc_230(3) && GlobalFunc_5972())
					{
						GlobalFunc_66(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}







void func_72()//Position - 0x2241
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (GlobalFunc_9813(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	GlobalFunc_6822(func_74(), 0, GlobalFunc_8315(), func_90(), 9, 6000, 6000, -1, 0, -1, 0);
}


int func_74()//Position - 0x23E9
{
	switch (GlobalFunc_785())
	{
		case 33:
			switch (GlobalFunc_8315())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (GlobalFunc_8315())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (GlobalFunc_8315())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (GlobalFunc_8315())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}






bool func_80(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2649
{
	GlobalFunc_513(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1581 = iParam2;
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15706 = 0;
	Global_15697 = 1;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam6 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_81(sParam4, iParam5, bParam9);
}

int func_81(char* sParam0, int iParam1, bool bParam2)//Position - 0x26B1
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					GlobalFunc_110();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (GlobalFunc_153(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		GlobalFunc_152();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				GlobalFunc_8951();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GlobalFunc_151())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (GlobalFunc_72())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			GlobalFunc_150();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		GlobalFunc_787();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		GlobalFunc_110();
	}
	return 0;
}








char* func_89()//Position - 0x2C65
{
	char* sVar0;
	
	switch (GlobalFunc_785())
	{
		case 33:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_90()//Position - 0x2D6D
{
	int iVar0;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}











void func_101()//Position - 0x3017
{
	func_208(&iLocal_873, &uLocal_874, &iLocal_685, &iLocal_821, &iLocal_820, Local_826, Local_867, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, bLocal_27))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (GlobalFunc_4947(iLocal_873))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
						{
							GlobalFunc_5974("PRA_LEVVEH", &iLocal_819);
						}
					}
				}
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_7251(&iLocal_820, Local_826, &iLocal_684, iLocal_685, &iLocal_819, &iLocal_837);
			if (func_106(iLocal_873, Local_826, &iLocal_820, iLocal_685, iLocal_684, &iLocal_835, &iLocal_838, &iLocal_834, &iLocal_833, &iLocal_819, 1090519040))
			{
				if (!func_105())
				{
					if (func_65(&uLocal_686, &cLocal_1043, &uLocal_878))
					{
						func_61();
						func_56();
					}
				}
				else
				{
					GlobalFunc_585(46, 1);
					func_61();
					func_103(0);
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(Local_867))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, -1);
				}
				else
				{
					GlobalFunc_5705(Local_867, Local_826, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_683 = 1;
				}
			}
			break;
	}
}


void func_103(bool bParam0)//Position - 0x31C4
{
	GlobalFunc_3009(iLocal_682);
	iLocal_816 = iLocal_682;
	if (!bParam0)
	{
		iLocal_682 = iLocal_816 + 1;
	}
	else if (iLocal_816 > 0)
	{
		iLocal_682 = (iLocal_816 - 1);
	}
	iLocal_819 = 0;
	iLocal_683 = 0;
}


int func_105()//Position - 0x3219
{
	if (GlobalFunc_5972())
	{
		if ((GlobalFunc_230(74) || GlobalFunc_230(75)) && GlobalFunc_5202())
		{
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)//Position - 0x324B
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (GlobalFunc_4947(iParam0))
			{
				if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					GlobalFunc_5974(GlobalFunc_3012(GlobalFunc_785()), iParam11);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (GlobalFunc_663(GlobalFunc_3012(GlobalFunc_785()), 0, 0))
				{
					HUD::CLEAR_THIS_PRINT(GlobalFunc_3012(GlobalFunc_785()));
				}
				*iParam7 = 1;
				GlobalFunc_5973(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Param1, fVar0))
					{
						*iParam7 = 0;
						GlobalFunc_2572(1077936128, 1);
					}
				}
				GlobalFunc_146(iParam4);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (GlobalFunc_663(GlobalFunc_3012(GlobalFunc_785()), 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			*iParam9 = MISC::GET_GAME_TIMER();
			*iParam10 = 1;
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (GlobalFunc_663(GlobalFunc_3011(GlobalFunc_785(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(GlobalFunc_3011(GlobalFunc_785(), 0));
			}
			if (!GlobalFunc_663(GlobalFunc_3010(GlobalFunc_785()), 0, 0))
			{
				GlobalFunc_164(GlobalFunc_3010(GlobalFunc_785()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}









int func_115(int iParam0, bool bParam1)//Position - 0x36DE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_27 = false;
				func_39(1, 1, 1);
			}
			else if (func_142(1, Local_823, 0))
			{
				if (func_141())
				{
					GlobalFunc_562(33);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 1);
					iLocal_682 = 2;
					GlobalFunc_146(&iLocal_820);
					GlobalFunc_4948(&uLocal_670, 0, 0);
					GlobalFunc_3013(189, 1244.338f, -339.3197f, 68.0823f);
					func_135();
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_142(2, Local_867.f_1, Local_867.f_4) && func_142(3, Local_839.f_1, Local_839.f_4)) && func_142(4, Local_853.f_1, Local_853.f_4)) && func_134(0))
				{
					func_135();
					GlobalFunc_562(33);
					if (GlobalFunc_4924(Local_839))
					{
						func_133(Local_839);
					}
					if (GlobalFunc_4924(Local_853))
					{
						func_132(Local_853);
					}
					func_131(Local_867);
					if (GlobalFunc_4924(Local_853) && GlobalFunc_4924(Local_839))
					{
						func_120(iLocal_829, 1, 0, 1);
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 1);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_867) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_867);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						GlobalFunc_146(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
					}
					GlobalFunc_7253(&iLocal_820, Local_867, 1);
					GlobalFunc_3013(189, 1244.338f, -339.3197f, 68.0823f);
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_142(2, Local_867.f_1, Local_867.f_4) && func_142(3, Local_839.f_1, Local_839.f_4)) && func_142(4, Local_853.f_1, Local_853.f_4))
				{
					GlobalFunc_7252(PLAYER::PLAYER_PED_ID(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_116();
					bLocal_27 = false;
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_135();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_142(2, Local_867.f_1, Local_867.f_4))
				{
					func_116();
					func_135();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, -1);
					bLocal_27 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_142(2, Local_826, Local_867.f_4))
				{
					func_116();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, -1);
					func_135();
					bLocal_27 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_116()//Position - 0x39F4
{
	if (iLocal_682 == 1)
	{
		func_133(Local_839);
		func_132(Local_853);
		func_131(Local_867);
		func_120(iLocal_829, 1, 0, 1);
	}
	iLocal_876 = 0;
	iLocal_837 = 0;
	iLocal_838 = 0;
	iLocal_833 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
}




void func_120(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3AB4
{
	int iVar0;
	
	iLocal_80 = iParam0;
	bLocal_662 = iParam1;
	bLocal_661 = iParam2;
	bLocal_663 = iParam3;
	Local_110[0 /*11*/].f_1 = 0;
	Local_110[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_80 - 1))
	{
		Local_133[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_659 = 0f;
	func_122();
	Local_110[1 /*11*/].f_7 = 3;
	Local_110[1 /*11*/].f_5 = 0;
	Local_110[1 /*11*/].f_10 = 1;
	Local_110[1 /*11*/].f_2 = 1500;
	Local_110[1 /*11*/].f_3 = 500;
	Local_110[0 /*11*/].f_5 = 0;
	Local_110[0 /*11*/].f_10 = 0;
	Local_110[0 /*11*/].f_2 = 1000;
	Local_110[0 /*11*/].f_3 = 100;
	PED::ADD_RELATIONSHIP_GROUP("Enemies", &uLocal_79);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_110[0 /*11*/], uLocal_79);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_110[1 /*11*/], uLocal_79);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_110[0 /*11*/], 1, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_110[1 /*11*/], 1, 0);
	func_121(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_121(struct<3> Param0, struct<3> Param3)//Position - 0x3BA1
{
	Local_81.f_8 = { Param0 };
	Local_81.f_11 = { Param3 };
	Local_81.f_1 = 4;
}

void func_122()//Position - 0x3BC2
{
	if (!PED::IS_PED_IN_VEHICLE(Local_110[0 /*11*/], iLocal_108, 0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_110[0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_110[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_123(1);
	}
}

void func_123(bool bParam0)//Position - 0x3C0B
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_108, 0))
	{
		func_124(bParam0);
		if (iLocal_660 != (iLocal_80 - 1))
		{
			if (iLocal_660 == 4)
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(Local_110[0 /*11*/], iLocal_108, Local_133[iLocal_660 /*25*/], 15f, 2883755, Local_133[iLocal_660 /*25*/].f_6);
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_110[0 /*11*/], iLocal_108, Local_133[iLocal_660 /*25*/], 15f, 0, 0, 2883755, Local_133[iLocal_660 /*25*/].f_6, Local_133[iLocal_660 /*25*/].f_7);
			}
			Local_110[0 /*11*/].f_8 = Local_110[0 /*11*/].f_7;
			Local_110[0 /*11*/].f_7 = 4;
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_110[0 /*11*/], iLocal_108, 15f, 786599);
			Local_110[0 /*11*/].f_8 = Local_110[0 /*11*/].f_7;
			Local_110[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_110[0 /*11*/].f_8 = Local_110[0 /*11*/].f_7;
		Local_110[0 /*11*/].f_7 = 7;
	}
}

void func_124(bool bParam0)//Position - 0x3CEC
{
	if (iLocal_660 != -1)
	{
		if (!GlobalFunc_105(Local_133[iLocal_660 /*25*/].f_11) && !GlobalFunc_105(Local_133[iLocal_660 /*25*/].f_14))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_133[iLocal_660 /*25*/].f_11 - Local_133[iLocal_660 /*25*/].f_14, Local_133[iLocal_660 /*25*/].f_11 + Local_133[iLocal_660 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_127();
	}
	else
	{
		iLocal_660 = func_125();
	}
	if (iLocal_660 != -1)
	{
		if (!GlobalFunc_105(Local_133[iLocal_660 /*25*/].f_11) && !GlobalFunc_105(Local_133[iLocal_660 /*25*/].f_14))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_133[iLocal_660 /*25*/].f_11 - Local_133[iLocal_660 /*25*/].f_14, Local_133[iLocal_660 /*25*/].f_11 + Local_133[iLocal_660 /*25*/].f_14, 0, 1);
		}
	}
}

int func_125()//Position - 0x3DCE
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6[21];
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	
	if (GlobalFunc_4947(iLocal_108))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_80 - 1))
		{
			fVar28 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_133[iVar4 /*25*/], 1);
			if (!GlobalFunc_105(Local_133[iVar4 /*25*/]) && fVar28 > 25f)
			{
				fVar6[iVar4] = fVar28;
			}
			else
			{
				fVar6[iVar4] = -1f;
			}
			iVar4++;
		}
		fVar29 = fVar6[0];
		iVar4 = 0;
		while (iVar4 <= (iLocal_80 - 1))
		{
			if (fVar6[iVar4] != -1f)
			{
				if (fVar6[iVar4] < fVar29)
				{
					fVar29 = fVar6[iVar4];
					iVar0 = iVar4;
				}
			}
			iVar4++;
		}
		fVar30 = GlobalFunc_168(Local_133[iVar0 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_108));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) };
			fVar30 = GlobalFunc_168(Local_133[iVar5 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_108));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_80 - 1);
		}
	}
	iVar0 = iVar5;
	return iVar0;
}


void func_127()//Position - 0x3F28
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_662)
	{
		while (Local_133[iLocal_660 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_660++;
			if (iLocal_660 >= (iLocal_80 - 1))
			{
				iVar0 = -1;
				iLocal_660 = (iLocal_80 - 1);
			}
		}
		if (iLocal_660 == (iLocal_80 - 1))
		{
			if (bLocal_661)
			{
				iLocal_660 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_80 - 1))
				{
					Local_133[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_660 = (iLocal_80 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_80 - 1))
		{
			if (Local_133[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_80 - 1))
		{
			iLocal_660 = (iLocal_80 - 1);
		}
		else if (iVar1 == iLocal_80)
		{
			if (bLocal_661)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_80 - 1))
				{
					Local_133[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_660 = func_128();
			}
			else
			{
				iLocal_660 = -1;
				return;
			}
		}
		else
		{
			iLocal_660 = func_128();
		}
	}
}

int func_128()//Position - 0x4033
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_80 - 1));
	while (Local_133[iVar0 /*25*/].f_18)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_80 - 1));
	}
	return iVar0;
}


Vector3 func_130(bool bParam0)//Position - 0x408B
{
	struct<3> Var0;
	var uVar3;
	
	if (!bParam0)
	{
		uVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_108, "wheel_rf");
	}
	else
	{
		uVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_108, "wheel_lf");
	}
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_108, uVar3) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_108, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_131(int iParam0)//Position - 0x40FB
{
	if (GlobalFunc_4947(iParam0))
	{
		iLocal_108 = iParam0;
	}
}

void func_132(var uParam0)//Position - 0x4113
{
	if (GlobalFunc_4924(uParam0))
	{
		Local_110[1 /*11*/] = uParam0;
	}
}

void func_133(var uParam0)//Position - 0x412E
{
	if (GlobalFunc_4924(uParam0))
	{
		Local_110[0 /*11*/] = uParam0;
	}
}

int func_134(bool bParam0)//Position - 0x4149
{
	STREAMING::REQUEST_ANIM_DICT("missfbi4prepp1");
	STREAMING::REQUEST_ANIM_SET("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && !STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_135()//Position - 0x41A6
{
	func_136(&uLocal_878);
}

void func_136(var uParam0)//Position - 0x41B5
{
	int iVar0;
	char* sVar1;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	GlobalFunc_173(uParam0, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
}





int func_141()//Position - 0x43B3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("trash")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0);
			iLocal_873 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iLocal_873))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(int iParam0, struct<3> Param1, float fParam4)//Position - 0x4406
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_537(Param1, Local_823, 1056964608) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_818, 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Global_86864[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
				Local_867 = Global_86864[0];
				if (GlobalFunc_4947(Local_867))
				{
					GlobalFunc_534(Local_867, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_867, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_867, 1);
					return 1;
				}
			}
			else if (func_146(&Local_867, Local_867.f_5, Local_867.f_1, Local_867.f_4, 1))
			{
				GlobalFunc_534(Local_867, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_867, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_867, 1);
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_86864.f_9[0], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
					Local_839 = Global_86864.f_9[0];
					if (GlobalFunc_4924(Local_839))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_839, true);
						PED::SET_PED_CONFIG_FLAG(Local_839, 170, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_839, 65536, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_839, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_839, Local_839.f_5, Local_839.f_1, Local_839.f_4, 1, 0, 1, 1))
			{
				if (GlobalFunc_4947(Local_867))
				{
					PED::SET_PED_INTO_VEHICLE(Local_839, Local_867, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_839, true);
					PED::SET_PED_CONFIG_FLAG(Local_839, 170, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_839, 65536, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_839, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_86864.f_9[1], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
					Local_853 = Global_86864.f_9[1];
					if (GlobalFunc_4924(Local_853))
					{
						PED::SET_PED_CONFIG_FLAG(Local_853, 170, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_853, 65536, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_853, 50, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_853, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_853, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_853, Local_853.f_5, Local_853.f_1, Local_853.f_4, 1, 0, 1, 1))
			{
				if (GlobalFunc_4947(Local_867))
				{
					PED::SET_PED_INTO_VEHICLE(Local_853, Local_867, 0);
					PED::SET_PED_CONFIG_FLAG(Local_853, 170, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_853, 65536, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_853, 50, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_853, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_853, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x46C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (GlobalFunc_3015(uParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, uParam1, Param2, uParam5, 1, 1);
			if (GlobalFunc_4924(*uParam0))
			{
				if (bParam7)
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
				}
				if (bParam8)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, bParam9);
				}
				if (bParam6)
				{
					GlobalFunc_3014(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (GlobalFunc_4924(*uParam0))
	{
		return 1;
	}
	return 0;
}



int func_146(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x47A7
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (GlobalFunc_3015(iParam1, "Loading", 0))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				if (bParam6)
				{
					GlobalFunc_3014(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (GlobalFunc_4947(*uParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_148()//Position - 0x48A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_149(&(Local_110[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_149(var uParam0, int iParam1)//Position - 0x48C8
{
	if (GlobalFunc_4924(*uParam0))
	{
		func_195(uParam0, iParam1, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (GlobalFunc_115(Local_133[iLocal_660 /*25*/].f_17) && ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
					if (iLocal_660 <= 20 && iLocal_660 != -1)
					{
						Local_133[iLocal_660 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					ENTITY::DETACH_ENTITY(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_133[iLocal_660 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_192();
					func_191(uParam0);
				}
				func_178(uParam0);
				break;
			
			case 1:
				func_151(uParam0);
				break;
		}
	}
	else
	{
		if (GlobalFunc_115(Local_133[iLocal_660 /*25*/].f_17))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
			{
				ENTITY::DETACH_ENTITY(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_133[iLocal_660 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
			}
		}
		GlobalFunc_146(&(uParam0->f_4));
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), *uParam0, 150f) && !bLocal_664)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}


void func_151(var uParam0)//Position - 0x4A65
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				if (GlobalFunc_7188(*uParam0, 780511057))
				{
					TASK::CLEAR_PED_TASKS(*uParam0);
				}
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 21:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_170(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					uParam0->f_4 = GlobalFunc_7254(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 10:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					PED::SET_PED_RESET_FLAG(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (!GlobalFunc_7188(*uParam0, 474215631))
				{
					if (GlobalFunc_7188(*uParam0, 780511057))
					{
						TASK::CLEAR_PED_TASKS(*uParam0);
					}
					TASK::TASK_COWER(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_3)
			{
				TASK::TASK_USE_MOBILE_PHONE(*uParam0, 1, 1);
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_165(uParam0);
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 5000)
			{
				if (!GlobalFunc_7188(*uParam0, 713668775))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_110[GlobalFunc_3016(uParam0->f_10) /*11*/]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_666, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!GlobalFunc_7188(*uParam0, -2017877118))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0);
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 19:
			func_165(uParam0);
			if (!GlobalFunc_7188(*uParam0, -2017877118))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
			{
				func_161(uParam0);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(*uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_1) > 3000)
			{
				func_161(uParam0);
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 8000)
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				if (!iLocal_665)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_665 = 1;
					}
				}
				TASK::TASK_USE_MOBILE_PHONE(*uParam0, 0, 1);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 8;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
			{
				TASK::TASK_USE_MOBILE_PHONE(*uParam0, 0, 1);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_2)
			{
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					GlobalFunc_146(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 7:
			if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_159())
					{
						if (GlobalFunc_4924(*uParam0))
						{
							TASK::CLEAR_PED_TASKS(*uParam0);
							TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 120f))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_161(uParam0);
			}
			break;
		
		case 8:
			if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 120f))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (PED::IS_PED_BEING_JACKED(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_2 || !GlobalFunc_7188(*uParam0, 2104565373))
			{
				func_156(uParam0);
			}
			break;
		
		case 12:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[GlobalFunc_3016(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 15:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[GlobalFunc_3016(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 16:
			if (PED::IS_PED_BEING_JACKED(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_669) >= 9000)
			{
				if (!func_154(uParam0))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else
				{
					uParam0->f_1 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_669) >= 5000 && (MISC::GET_GAME_TIMER() - iLocal_669) <= 5500)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*uParam0))
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[GlobalFunc_3016(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 17:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[GlobalFunc_3016(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 20:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_170(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= 6000)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_156(uParam0);
				}
				else
				{
					func_161(uParam0);
					func_161(&(Local_110[GlobalFunc_3016(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			func_165(uParam0);
			break;
		
		case 22:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_170(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!GlobalFunc_155(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
					return;
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 23:
			func_195(uParam0, uParam0->f_10, 1);
			func_165(uParam0);
			if (GlobalFunc_775(*uParam0, Local_666, 2f))
			{
				if (GlobalFunc_4959(*uParam0, Local_666, 1126825984, 0))
				{
					TASK::CLEAR_PED_TASKS(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}



int func_154(var uParam0)//Position - 0x5476
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, 10f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, 3f, 2f), 5f, 0, 1, 0) && PED::IS_PED_STOPPED(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0)//Position - 0x54B8
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0))
		{
			if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_156(var uParam0)//Position - 0x54FE
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_79, 1862763509);
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_122();
			break;
		
		case 3:
			if (!GlobalFunc_7188(*uParam0, 242628503))
			{
				if (iLocal_660 <= 20 && iLocal_660 != -1)
				{
					Local_133[iLocal_660 /*25*/].f_18 = 1;
				}
				if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
				{
					if (uParam0->f_10 == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
			{
				if (uParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_133[iLocal_660 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_157(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
			{
				if (uParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_5 = 0;
}

void func_157(var uParam0)//Position - 0x5729
{
	if (!GlobalFunc_7188(*uParam0, -71340211))
	{
		if (Local_133[iLocal_660 /*25*/].f_23 != 0)
		{
			if (GlobalFunc_115(Local_133[iLocal_660 /*25*/].f_17))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_133[iLocal_660 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_133[iLocal_660 /*25*/].f_19, 1f, 20000, -1f, 0, GlobalFunc_1695(Local_133[iLocal_660 /*25*/].f_19, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1));
		}
		if (GlobalFunc_4947(iLocal_108))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_108, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}


int func_159()//Position - 0x5834
{
	if (GlobalFunc_4947(iLocal_108) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_108, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_108);
			if (func_160() || ENTITY::GET_ENTITY_HEALTH(iLocal_108) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160()//Position - 0x5882
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_108, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_161(var uParam0)//Position - 0x58BC
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_162(uParam0);
		uParam0->f_1 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_162(var uParam0)//Position - 0x58F0
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
				TASK::TASK_PLAY_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}



void func_165(var uParam0)//Position - 0x5973
{
	if (GlobalFunc_4947(iLocal_108) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 0) && !PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0)))
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_108) > 0f)
		{
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}




void func_169(var uParam0, int iParam1)//Position - 0x5ADA
{
	func_162(uParam0);
	if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), *uParam0, 10f))
		{
			if (!GlobalFunc_7188(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!GlobalFunc_7188(*uParam0, 780511057) && !GlobalFunc_7188(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_170(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5B95
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_176(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_173();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_171(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_171(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0x5C56
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!GlobalFunc_115(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { GlobalFunc_167(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_78)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}


int func_173()//Position - 0x5E47
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_176(int iParam0, int iParam1)//Position - 0x5F3D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_178(var uParam0)//Position - 0x5FAF
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_189(uParam0, 1);
			}
			else
			{
				func_189(uParam0, 0);
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iLocal_108))
			{
				if (!GlobalFunc_7188(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_123(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (bLocal_663)
			{
				if (iLocal_660 <= 20 && iLocal_660 != -1)
				{
					if (!Local_133[iLocal_660 /*25*/].f_18)
					{
						if (GlobalFunc_775(*uParam0, Local_133[iLocal_660 /*25*/], 20f))
						{
							if (Local_133[iLocal_660 /*25*/].f_9 && VEHICLE::IS_VEHICLE_STOPPED(iLocal_108))
							{
								func_188();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_775(*uParam0, Local_133[iLocal_660 /*25*/], 25f))
			{
				if (Local_133[iLocal_660 /*25*/].f_9)
				{
					func_187(uParam0);
				}
				else
				{
					Local_133[iLocal_660 /*25*/].f_18 = 1;
					func_123(0);
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_4947(iLocal_108))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_108, 25f, 10, 0);
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_108);
				if (fVar0 < 8f)
				{
					func_187(uParam0);
				}
			}
			break;
		
		case 6:
			if (!GlobalFunc_7188(*uParam0, 242628503) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_108))
			{
				if (bLocal_663)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_4924(Local_110[1 /*11*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_110[1 /*11*/], iLocal_108, 0) && Local_110[1 /*11*/].f_7 == 3)
				{
					func_123(0);
				}
			}
			break;
		
		case 8:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
			{
				func_157(uParam0);
			}
			break;
		
		case 9:
			func_179(uParam0);
			break;
	}
}

void func_179(var uParam0)//Position - 0x6218
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!GlobalFunc_7188(*uParam0, -2015108952))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Local_133[iLocal_660 /*25*/].f_19) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_133[iLocal_660 /*25*/].f_19, 0);
				}
				TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_184(Local_133[iLocal_660 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_183(uParam0);
				return;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 2:
			if (GlobalFunc_7188(*uParam0, 242628503))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (GlobalFunc_115(Local_133[iLocal_660 /*25*/].f_17) && !ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_133[iLocal_660 /*25*/].f_17, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_184(Local_133[iLocal_660 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_183(uParam0);
					return;
				}
			}
			else if (!GlobalFunc_7188(*uParam0, 713668775))
			{
				if (GlobalFunc_4947(iLocal_108))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_108));
				}
				uParam0->f_9 = 3;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 3:
			if (GlobalFunc_4947(iLocal_108))
			{
				if (!func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -5.5f, 0f), iLocal_108, 1.9f, 1.9f, 8f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!GlobalFunc_7188(*uParam0, 713668775))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							if (GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1)) > 3f)
							{
								TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(iLocal_108), 0);
							}
							TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!GlobalFunc_7188(*uParam0, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_108));
					}
				}
				else
				{
					func_181(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (GlobalFunc_7188(*uParam0, 242628503))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (GlobalFunc_115(Local_133[iLocal_660 /*25*/].f_17))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
								{
									PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
									ENTITY::DETACH_ENTITY(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
									OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_133[iLocal_660 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_133[iLocal_660 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
								}
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_133[iLocal_660 /*25*/].f_17, iLocal_108))
								{
									GlobalFunc_130(&(Local_133[iLocal_660 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (GlobalFunc_4947(iLocal_108))
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_108, 5, 0);
						GlobalFunc_130(&(Local_133[iLocal_660 /*25*/].f_17));
					}
					func_156(uParam0);
				}
			}
			else
			{
				func_181(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}


void func_181(var uParam0)//Position - 0x6687
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_79, 1862763509);
	func_162(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_182();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = GlobalFunc_7254(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_182()//Position - 0x6782
{
	Local_81 = 0;
	Local_81.f_26 = 0;
	Local_81.f_18 = 0;
}

void func_183(var uParam0)//Position - 0x6797
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_79, 1862763509);
	func_162(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_182();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = GlobalFunc_7254(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_184(struct<3> Param0, int iParam3, struct<3> Param4)//Position - 0x6892
{
	Local_81.f_2 = { Param0 };
	Local_81.f_8 = { Param4 };
	func_185(&Local_81, iParam3);
	if (Local_81.f_26)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_81.f_18))
			{
				if (GlobalFunc_115(Local_81.f_18))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_81.f_18) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(Local_81.f_18))
		{
			if (GlobalFunc_115(Local_81.f_18))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_81.f_18) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_185(var uParam0, var uParam1)//Position - 0x6924
{
	int iVar0;
	int iVar1;
	
	iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_186(uParam0, uParam1);
	}
}

void func_186(var uParam0, int iParam1)//Position - 0x6973
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUND(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_187(var uParam0)//Position - 0x6A38
{
	var uVar0;
	
	if (GlobalFunc_4947(iLocal_108))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_108, Local_133[iLocal_660 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		TASK::TASK_VEHICLE_PARK(0, iLocal_108, Local_133[iLocal_660 /*25*/].f_3, Local_133[iLocal_660 /*25*/].f_8, Local_133[iLocal_660 /*25*/].f_10, 5f, 1);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_188()//Position - 0x6ABA
{
	func_157(&(Local_110[1 /*11*/]));
}

void func_189(var uParam0, bool bParam1)//Position - 0x6ACB
{
	int iVar0;
	
	if (func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(bParam1)), iLocal_108, 1.9f, 1.9f, 8f))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_190(uParam0);
		}
		else if (!GlobalFunc_7188(*uParam0, 1227113341) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (GlobalFunc_775(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_108, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_190(var uParam0)//Position - 0x6BEC
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_79, 1862763509);
	func_162(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_182();
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_191(var uParam0)//Position - 0x6CCD
{
	if (uParam0->f_5 != 1)
	{
		if (GlobalFunc_4947(iLocal_108) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!GlobalFunc_7188(*uParam0, 2104565373) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_108, 10f))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_108, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_192()//Position - 0x6D5C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_80 - 1))
	{
		if (Local_133[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_133[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_660 && GlobalFunc_115(Local_133[iVar0 /*25*/].f_17)) && GlobalFunc_156(Local_133[iVar0 /*25*/].f_17, PLAYER::PLAYER_PED_ID(), 1) > 200f)
				{
					OBJECT::DELETE_OBJECT(&(Local_133[iVar0 /*25*/].f_17));
					Local_133[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_133[iVar0 /*25*/].f_23 != 0)
			{
				if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_133[iVar0 /*25*/], 100f) || GlobalFunc_775(Local_110[0 /*11*/], Local_133[iVar0 /*25*/], 120f))
				{
					Local_133[iVar0 /*25*/].f_24 = func_193(&(Local_133[iVar0 /*25*/].f_17), Local_133[iVar0 /*25*/].f_23, Local_133[iVar0 /*25*/].f_19, Local_133[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_193(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x6E4D
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (GlobalFunc_3015(uParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam1, Param2, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, uParam5);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam6)
				{
					GlobalFunc_3014(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (GlobalFunc_115(*uParam0))
	{
		return 1;
	}
	return 0;
}


void func_195(var uParam0, int iParam1, int iParam2)//Position - 0x6F16
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!GlobalFunc_4924(Local_110[GlobalFunc_3016(iParam1) /*11*/]))
		{
			if (!bLocal_664)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_110[GlobalFunc_3016(iParam1) /*11*/]))
				{
					if (GlobalFunc_4958(*uParam0, Local_110[GlobalFunc_3016(iParam1) /*11*/], 140f, 0) || GlobalFunc_155(Local_110[GlobalFunc_3016(iParam1) /*11*/], *uParam0, 3f))
					{
						func_169(uParam0, 0);
						bLocal_664 = true;
						return;
					}
					else
					{
						Local_666 = { ENTITY::GET_ENTITY_COORDS(Local_110[GlobalFunc_3016(iParam1) /*11*/], 1) };
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_169(uParam0, 0);
				}
			}
		}
		else if (Local_110[GlobalFunc_3016(iParam1) /*11*/].f_6 == 22)
		{
			if (GlobalFunc_4958(*uParam0, Local_110[GlobalFunc_3016(iParam1) /*11*/], 140f, 0) && GlobalFunc_155(Local_110[GlobalFunc_3016(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 15f))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_110[GlobalFunc_3016(iParam1) /*11*/].f_6 == 5 || Local_110[GlobalFunc_3016(iParam1) /*11*/].f_6 == 7)
		{
			if (GlobalFunc_155(Local_110[GlobalFunc_3016(iParam1) /*11*/], *uParam0, 10f))
			{
				func_169(uParam0, 0);
			}
		}
		if (func_206(*uParam0))
		{
			func_162(uParam0);
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_154(uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
				{
					TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					AUDIO::_0x9D3AF56E94C9AE98(iLocal_108, 2000f);
					iLocal_669 = MISC::GET_GAME_TIMER();
					uParam0->f_1 = MISC::GET_GAME_TIMER();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_197(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_196(uParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (GlobalFunc_4947(iLocal_108))
				{
					if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_108) > 5f)
						{
							if (iParam1 == 0)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, iLocal_108, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								TASK::TASK_COWER(Local_110[GlobalFunc_3016(iParam1) /*11*/], -1);
								Local_110[GlobalFunc_3016(iParam1) /*11*/].f_6 = 10;
								Local_110[GlobalFunc_3016(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_110[GlobalFunc_3016(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::TASK_COWER(*uParam0, -1);
								uParam0->f_6 = 12;
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_110[GlobalFunc_3016(iParam1) /*11*/], iLocal_108, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
								Local_110[GlobalFunc_3016(iParam1) /*11*/].f_6 = 5;
								Local_110[GlobalFunc_3016(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_110[GlobalFunc_3016(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_169(uParam0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_110[GlobalFunc_3016(iParam1) /*11*/]))
							{
								if (GlobalFunc_4958(Local_110[GlobalFunc_3016(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
								{
									func_169(&(Local_110[GlobalFunc_3016(iParam1) /*11*/]), 0);
								}
							}
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
					}
					else
					{
						func_169(uParam0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_110[GlobalFunc_3016(iParam1) /*11*/]))
						{
							if (func_170(Local_110[GlobalFunc_3016(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_169(&(Local_110[GlobalFunc_3016(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
				if (func_170(Local_110[GlobalFunc_3016(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_110[GlobalFunc_3016(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
					Local_110[GlobalFunc_3016(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_110[GlobalFunc_3016(iParam1) /*11*/].f_5 = 1;
					Local_110[GlobalFunc_3016(iParam1) /*11*/].f_6 = 21;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_110[GlobalFunc_3016(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (PED::IS_PED_BEING_JACKED(*uParam0))
		{
			func_162(uParam0);
			TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_RAGDOLL(*uParam0))
		{
			if (GlobalFunc_115(Local_133[iLocal_660 /*25*/].f_17))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
				{
					ENTITY::DETACH_ENTITY(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_133[iLocal_660 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (GlobalFunc_4924(Local_110[GlobalFunc_3016(iParam1) /*11*/]))
		{
			if (PED::IS_PED_BEING_JACKED(Local_110[GlobalFunc_3016(iParam1) /*11*/]))
			{
				func_162(uParam0);
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_196(var uParam0)//Position - 0x743B
{
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7483
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
		else if (func_198(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, float fParam1)//Position - 0x753E
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
				if (func_199(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_199(int iParam0, float fParam1)//Position - 0x75B4
{
	return func_170(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}







int func_206(int iParam0)//Position - 0x791F
{
	if (GlobalFunc_155(uParam0, PLAYER::PLAYER_PED_ID(), 6f))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()//Position - 0x7952
{
	if (GlobalFunc_4947(Local_867))
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_867, 100f) && !iLocal_836)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("trash"), 3);
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("trash")))
			{
				iLocal_836 = 1;
			}
		}
		else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_867, 120f) && iLocal_836)
		{
			VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
			iLocal_836 = 0;
		}
	}
}

void func_208(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)//Position - 0x79C7
{
	if (GlobalFunc_4947(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					GlobalFunc_146(iParam3);
					if (GlobalFunc_663(GlobalFunc_3010(GlobalFunc_785()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(GlobalFunc_3010(GlobalFunc_785()));
					}
					if (*iParam0 == iParam8)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (GlobalFunc_7191(*iParam0) || GlobalFunc_7190(*iParam0))
				{
					GlobalFunc_146(iParam3);
					if (GlobalFunc_663(GlobalFunc_3010(GlobalFunc_785()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(GlobalFunc_3010(GlobalFunc_785()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (GlobalFunc_663(GlobalFunc_3011(GlobalFunc_785(), bParam9), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(GlobalFunc_3011(GlobalFunc_785(), bParam9));
					}
					if (GlobalFunc_785() != 33)
					{
						GlobalFunc_7255(iParam0);
					}
					else
					{
						func_209(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0) && !GlobalFunc_7191(*iParam0)) && !GlobalFunc_7190(*iParam0))
				{
					GlobalFunc_146(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						GlobalFunc_7253(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!GlobalFunc_7191(*iParam0) && !GlobalFunc_7190(*iParam0))
				{
					GlobalFunc_146(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						GlobalFunc_7253(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (GlobalFunc_785() != 33)
	{
		GlobalFunc_7255(iParam0);
	}
	else
	{
		func_209(iParam0, uParam1);
	}
}

void func_209(var uParam0, var uParam1)//Position - 0x7B7B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_27)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iVar0 != *uParam0)
			{
				if (GlobalFunc_4947(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						GlobalFunc_131(uParam0);
						*uParam0 = iVar0;
						GlobalFunc_534(*uParam0, 1);
						GlobalFunc_534(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
						if (GlobalFunc_115(uVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								GlobalFunc_131(uParam0);
								*uParam0 = iVar0;
								GlobalFunc_534(*uParam0, 1);
								GlobalFunc_534(*uParam1, 3);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}





void func_214()//Position - 0x7E0D
{
	func_208(&iLocal_873, &uLocal_874, &iLocal_685, &iLocal_821, &iLocal_820, Local_826, Local_867, 0, 1090519040);
	func_148();
	func_231();
	func_207();
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, bLocal_27))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !GlobalFunc_111())
				{
					GlobalFunc_5973(&iLocal_820, Local_826, 1);
					GlobalFunc_5974("PRA_TAKBACK", &iLocal_819);
				}
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_7251(&iLocal_820, Local_826, &iLocal_684, iLocal_685, &iLocal_819, &iLocal_837);
			func_220();
			if (GlobalFunc_7256(iLocal_873, Local_826, &iLocal_820, iLocal_684, iLocal_685, &iLocal_819, &iLocal_838, 0, 0, 1086324736))
			{
				RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
				iLocal_683 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_10755();
			GlobalFunc_146(&iLocal_820);
			GlobalFunc_146(&iLocal_821);
			if (GlobalFunc_2572(1077936128, 1))
			{
				func_103(0);
			}
			break;
		
		case 3:
			if (GlobalFunc_4947(iLocal_873))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, -1);
				}
				else
				{
					GlobalFunc_5705(iLocal_873, Local_826, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_683 = 1;
				}
			}
			break;
	}
}






void func_220()//Position - 0x814D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (GlobalFunc_9813(iVar2, 0))
			{
				if (!bVar1)
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iVar2, 5f))
					{
						if (!GlobalFunc_111())
						{
							func_225(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1047[iVar0])
				{
					if (iVar0 == 0)
					{
						GlobalFunc_173(&uLocal_878, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						GlobalFunc_173(&uLocal_878, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						GlobalFunc_173(&uLocal_878, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1047[iVar0] = 1;
				}
			}
			if (!GlobalFunc_9814(iVar2))
			{
				if (GlobalFunc_9813(iVar2, 0))
				{
					if (func_224(iVar2) || func_222(iVar2))
					{
						if (GlobalFunc_9812(iVar2, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
							TASK::CLEAR_PED_TASKS(iVar2);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1))
			{
				if (func_224(iVar2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 0)
					{
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, 0), Local_826, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_222(iVar2))
				{
					if (GlobalFunc_4947(Local_867))
					{
						if (!GlobalFunc_155(iVar2, Local_867, 17f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 0)
							{
								TASK::TASK_VEHICLE_MISSION(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, 0), Local_867, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					GlobalFunc_9811(iVar2);
				}
			}
		}
		iVar0++;
	}
}


int func_222(int iParam0)//Position - 0x83DE
{
	int iVar0;
	
	if (!GlobalFunc_236())
	{
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (PED::IS_PED_IN_VEHICLE(iParam0, iVar0, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_224(int iParam0)//Position - 0x8479
{
	if (!GlobalFunc_236())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_867) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_867, 0)) && !ENTITY::IS_ENTITY_AT_COORD(Local_867, Local_826, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_867, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_867, -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x8506
{
	if (iLocal_682 > 1)
	{
		if (iLocal_684 > 0)
		{
			if (!MISC::IS_BIT_SET(Local_687[iParam0 /*8*/].f_7, 0) && iLocal_685 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_687[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((MISC::IS_BIT_SET(Local_687[iParam0 /*8*/].f_7, 0) && !MISC::IS_BIT_SET(Local_687[iParam0 /*8*/].f_7, 1)) && iLocal_685 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_687[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_687[iParam0 /*8*/].f_7, 5))
			{
				if (GlobalFunc_713(iLocal_873, Local_826, 1) < 15f && iLocal_685 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							MISC::SET_BIT(&(Local_687[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_227(2))
						{
							func_226(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_227(4))
						{
							func_226(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_227(2))
						{
							func_226(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_227(3))
						{
							func_226(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_227(3))
						{
							func_226(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_227(4))
						{
							func_226(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_226(int iParam0, int iParam1)//Position - 0x86E5
{
	if (!MISC::IS_BIT_SET(Local_687[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_1051 != -1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					MISC::SET_BIT(&(Local_687[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_1051 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_1051 = -1;
		}
	}
}

int func_227(int iParam0)//Position - 0x875D
{
	if ((MISC::IS_BIT_SET(Local_687[0 /*8*/].f_7, iParam0) || MISC::IS_BIT_SET(Local_687[1 /*8*/].f_7, iParam0)) || MISC::IS_BIT_SET(Local_687[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}


bool func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x87DC
{
	GlobalFunc_513(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_81(sParam2, iParam3, 0);
}


void func_231()//Position - 0x884C
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_826, 220f))
	{
		if (!iLocal_876 && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_826, 100f))
		{
			iLocal_876 = func_146(&uLocal_875, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_826, 240f))
	{
		if (iLocal_876)
		{
			GlobalFunc_131(&uLocal_875);
			iLocal_876 = 0;
		}
	}
}

void func_232()//Position - 0x88D5
{
	func_208(&iLocal_873, &uLocal_874, &iLocal_685, &iLocal_821, &iLocal_820, Local_826, Local_867, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, bLocal_27))
			{
				GlobalFunc_7253(&iLocal_820, Local_867, 1);
				GlobalFunc_5974("PRA_GOVAN", &iLocal_819);
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_220();
			if (GlobalFunc_4947(Local_867))
			{
				GlobalFunc_10692(&uLocal_670, Local_867, 0, 0, 1, 1, 1);
			}
			if (!bLocal_832)
			{
				if (GlobalFunc_4924(Local_839) && PED::IS_PED_BEING_JACKED(Local_839))
				{
					func_234();
				}
				if (GlobalFunc_4924(Local_853) && PED::IS_PED_BEING_JACKED(Local_853))
				{
					func_234();
				}
			}
			if (GlobalFunc_4947(iLocal_873))
			{
				if ((iLocal_685 == 1 || iLocal_685 == 2) || iLocal_685 == 3)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_683 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_146(&iLocal_820);
			GlobalFunc_4948(&uLocal_670, 0, 0);
			func_103(0);
			break;
		
		case 3:
			GlobalFunc_69(&Local_839);
			GlobalFunc_69(&Local_853);
			if (GlobalFunc_4947(Local_867))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, -1);
			}
			GlobalFunc_3008(1);
			func_39(1, 1, 1);
			iLocal_683 = 1;
			break;
	}
}


void func_234()//Position - 0x8A73
{
	char* sVar0;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_832 = func_229(&uLocal_878, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_832)
	{
		RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
	}
}






















void func_256()//Position - 0x9891
{
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, 0))
			{
				GlobalFunc_10756();
				GlobalFunc_5198(33);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				if (GlobalFunc_199())
				{
					GlobalFunc_5108(0, -1, 1);
					GlobalFunc_79(500, 1);
					iLocal_683 = 2;
				}
				else
				{
					if (GlobalFunc_2(0))
					{
						GlobalFunc_7252(PLAYER::PLAYER_PED_ID(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_258(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						GlobalFunc_79(500, 1);
					}
					GlobalFunc_587();
					if (iLocal_682 == 2)
					{
						iLocal_683 = 0;
					}
					else
					{
						iLocal_683 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_103(0);
			break;
	}
}


void func_258(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x9961
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, iParam3, iParam4, 127);
	if (STREAMING::STREAMVOL_IS_VALID(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam5);
		while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam7)
			{
				func_260();
			}
			if (bParam6)
			{
				GlobalFunc_187();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}


void func_260()//Position - 0x99DE
{
	if (!Global_14393.f_1 == 1)
	{
		if (GlobalFunc_116(0))
		{
			GlobalFunc_6823(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}





















































void func_313()//Position - 0xCE7A
{
	GlobalFunc_587();
	func_314();
}

void func_314()//Position - 0xCE8A
{
	if (!iLocal_830)
	{
		if (GlobalFunc_4947(iLocal_873))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
			{
				GlobalFunc_503(iLocal_873, -1);
				GlobalFunc_504(iLocal_873, 318);
				iLocal_830 = 1;
			}
		}
	}
	if (!iLocal_831)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			GlobalFunc_574(320, 0);
			iLocal_831 = 1;
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		GlobalFunc_571(0, 320);
		iLocal_831 = 0;
	}
}



void func_317()//Position - 0xCF54
{
	if (!bLocal_27 && iLocal_682 != 5)
	{
		if (iLocal_682 > 0)
		{
			func_318();
		}
	}
}

void func_318()//Position - 0xCF77
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!GlobalFunc_4947(iLocal_873))
	{
		if (!GlobalFunc_4947(uLocal_874) && !GlobalFunc_4947(Local_867))
		{
			func_320(1);
			return;
		}
		if (GlobalFunc_4947(Local_867) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_867, fVar0))
		{
			func_320(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_873, fVar0))
		{
			iVar1++;
		}
		if (GlobalFunc_4947(uLocal_874))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_874, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (GlobalFunc_4947(Local_867))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_867, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_320(2);
			return;
		}
		iVar1 = 0;
		if (GlobalFunc_7257(iLocal_873))
		{
			iVar1++;
		}
		if (GlobalFunc_4947(uLocal_874))
		{
			if (GlobalFunc_7257(uLocal_874))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (GlobalFunc_4947(Local_867))
		{
			if (GlobalFunc_7257(Local_867))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_320(3);
			return;
		}
	}
}


void func_320(int iParam0)//Position - 0xD114
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_817 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_817 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_817 = "PRA_FSTUCK";
			break;
	}
	iLocal_682 = 5;
	iLocal_683 = 0;
}


















void func_338()//Position - 0xDA3D
{
	func_353();
	func_351();
	func_344();
	func_341();
	func_339();
}

void func_339()//Position - 0xDA59
{
	iLocal_1047[0] = 0;
	iLocal_1047[1] = 0;
	iLocal_1047[2] = 0;
	Local_687[0 /*8*/] = { func_340("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_687[1 /*8*/] = { func_340("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_687[2 /*8*/] = { func_340("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_340(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xDAE2
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_341()//Position - 0xDB20
{
	Local_133[0 /*25*/] = { func_343(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_342(&(Local_133[0 /*25*/]), Local_823, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_133[1 /*25*/] = { func_343(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_342(&(Local_133[1 /*25*/]), Local_823, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_133[2 /*25*/] = { func_343(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_342(&(Local_133[2 /*25*/]), Local_823, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_133[3 /*25*/] = { func_343(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_342(&(Local_133[3 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[4 /*25*/] = { func_343(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_342(&(Local_133[4 /*25*/]), Local_823, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_133[5 /*25*/] = { func_343(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_133[6 /*25*/] = { func_343(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_133[7 /*25*/] = { func_343(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[8 /*25*/] = { func_343(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_342(&(Local_133[8 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[9 /*25*/] = { func_343(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_133[10 /*25*/] = { func_343(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_342(&(Local_133[10 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[11 /*25*/] = { func_343(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_133[11 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[12 /*25*/] = { func_343(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_133[13 /*25*/] = { func_343(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_342(&(Local_133[13 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[14 /*25*/] = { func_343(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_342(&(Local_133[14 /*25*/]), Local_823, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_133[15 /*25*/] = { func_343(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_133[15 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[16 /*25*/] = { func_343(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_342(&(Local_133[16 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[17 /*25*/] = { func_343(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_342(&(Local_133[17 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[18 /*25*/] = { func_343(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_133[18 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_829 = 19;
}

void func_342(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)//Position - 0xE305
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_9 = iParam4;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = { Param9 };
	uParam0->f_14 = { Param12 };
}

struct<25> func_343(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)//Position - 0xE349
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param3 };
	Var0.f_22 = fParam6;
	Var0.f_23 = iParam7;
	return Var0;
}

void func_344()//Position - 0xE383
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_345(&Var0, 6);
}

void func_345(var uParam0, int iParam1)//Position - 0xE41B
{
	int iVar0;
	
	GlobalFunc_500(&uLocal_712);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		GlobalFunc_499(&uLocal_712, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	GlobalFunc_498(&uLocal_712);
	GlobalFunc_5902(&uLocal_764, &uLocal_712, 50f);
}






void func_351()//Position - 0xE725
{
	Local_839 = { func_352(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_853 = { func_352(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_352(struct<3> Param0, float fParam3, int iParam4)//Position - 0xE773
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_353()//Position - 0xE796
{
	Local_867 = { GlobalFunc_3018(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}


void func_355()//Position - 0xE7E2
{
	GlobalFunc_3008(1);
	GlobalFunc_695(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 0);
	func_61();
	GlobalFunc_771();
	GlobalFunc_10376();
	func_356(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_356(bool bParam0)//Position - 0xE827
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_363();
	GlobalFunc_587();
	func_361();
	GlobalFunc_587();
	GlobalFunc_10755();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_873))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		GlobalFunc_5977();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_357();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	GlobalFunc_4948(&uLocal_670, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_822))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_822, 0);
	}
}

void func_357()//Position - 0xE90B
{
	func_3();
	GlobalFunc_131(&Local_867);
	GlobalFunc_131(&uLocal_874);
	GlobalFunc_131(&iLocal_873);
	func_5(&Local_839, 1, 0, 1);
	func_5(&Local_853, 1, 0, 1);
	GlobalFunc_131(&uLocal_875);
}




void func_361()//Position - 0xE980
{
	if (iLocal_836)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
	}
}


void func_363()//Position - 0xE99F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_867.f_5);
}






