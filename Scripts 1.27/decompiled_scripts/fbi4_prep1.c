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
		func_367();
		func_355();
	}
	func_338();
	if (func_337())
	{
		func_336(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_322();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TrT", 0);
		if (func_321(PLAYER::PLAYER_PED_ID()))
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
				if (func_36(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_817))
			{
				func_33(sLocal_817);
			}
			else
			{
				func_18(0);
			}
			iLocal_683 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
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
	func_9(&Local_867);
	func_9(&uLocal_874);
	func_9(&iLocal_873);
	func_8(&Local_839);
	func_8(&Local_853);
	func_9(&uLocal_875);
	func_3();
}

void func_3()//Position - 0x271
{
	func_7(&(Local_110[0 /*11*/].f_4));
	func_7(&(Local_110[1 /*11*/].f_4));
	func_6(&iLocal_108);
	func_5(&(Local_110[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_110[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_133[iLocal_660 /*25*/].f_17), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_79);
	STREAMING::REMOVE_ANIM_DICT("missfbi4prepp1");
	STREAMING::REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)//Position - 0x2CF
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
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

void func_6(var uParam0)//Position - 0x359
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_7(int iParam0)//Position - 0x390
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, 0);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x3B0
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_9(var uParam0)//Position - 0x3EF
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_36(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_10(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

int func_10(int iParam0)//Position - 0x48B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()//Position - 0x4AB
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(struct<3> Param0, float fParam3)//Position - 0x4E3
{
	func_13(&(Global_93588.f_2167), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)//Position - 0x4FC
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)//Position - 0x512
{
	if (func_15(Global_68485, 0f, 0f, 0f))
	{
		Global_68485 = { Param0 };
		Global_68488 = fParam3;
	}
}

bool func_15(struct<3> Param0, struct<3> Param3)//Position - 0x53D
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_16()//Position - 0x566
{
	if (Global_89962 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x57B
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89962 == 7 || Global_89962 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)//Position - 0x5A8
{
	int iVar0;
	
	if (Global_SAVE_DATA.isGameflowActive || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 5);
		Global_89998 = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x5ED
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_81119[iParam0 /*5*/];
	iVar1 = Global_68514.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_20(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), iVar1);
	if (Global_84542 == Global_89999)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_84542 = Global_89999;
	if (iParam0 == -1)
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_81119[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_81119[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)//Position - 0x704
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0], &Var2, &fVar5))
			{
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0] = 318;
				func_21(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87757[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_9 = 0f;
				Global_87757[iVar0 /*29*/].f_12 = 0f;
				Global_87757[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_10 = 0f;
				Global_87757[iVar0 /*29*/].f_13 = 0f;
				Global_87757[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_11 = 0f;
				Global_87757[iVar0 /*29*/].f_14 = 0f;
				Global_87757[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_26 = 0f;
				Global_87757[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_27 = 0f;
				Global_87757[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)//Position - 0x8CD
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x8DB
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)//Position - 0x124A
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_24()//Position - 0x1288
{
	Global_89997 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68477))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68477))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		MISC::SET_BIT(&(Global_89962.f_20), 25);
	}
}

int func_25()//Position - 0x136F
{
	func_26();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_26()//Position - 0x1388
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_27(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_28(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_27(int iParam0)//Position - 0x1485
{
	return Global_34913 == iParam0;
}

bool func_28(int iParam0)//Position - 0x1493
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x149F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x14DC
{
	if (func_28(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31()//Position - 0x1506
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)//Position - 0x153B
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_33(char* sParam0)//Position - 0x1566
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)//Position - 0x1579
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_68477, sParam0, 16);
			StringCopy(&Global_68481, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)//Position - 0x15B8
{
	Global_89962.f_22[iParam1] = iParam0;
}

int func_36(int iParam0)//Position - 0x15CC
{
	if (func_10(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_37()//Position - 0x15F6
{
	func_7(&iLocal_820);
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
			if (!func_100(PLAYER::PLAYER_PED_ID(), Local_826, 270f))
			{
				iLocal_683 = 2;
			}
			else if (!func_99("PRA_LEVAREA", 0, 0))
			{
				func_98("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_99("PRA_LEVAREA", 0, 0))
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
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x171A
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1756
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
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
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_321(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x17FD
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_50(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_49())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_48(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_50(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_48(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_43(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_43(int iParam0)//Position - 0x18CE
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_44())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x190F
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_45(int iParam0, int iParam1)//Position - 0x1920
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_46(int iParam0, bool bParam1)//Position - 0x196B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()//Position - 0x19AC
{
	return Global_1312737;
}

int func_48(int iParam0, var uParam1, var uParam2)//Position - 0x19B8
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_49()//Position - 0x19E9
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x1A10
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 13);
	}
}

int func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1A33
{
	struct<15> Var0;
	int iVar15;
	
	if (func_32(0))
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
		Var0.f_3 = func_53(iParam4);
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
		func_52(iParam5);
		return 1;
	}
	return 0;
}

void func_52(int iParam0)//Position - 0x1B90
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0] = iVar1;
}

int func_53(int iParam0)//Position - 0x1C54
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
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
	func_59();
	func_57(0, 0);
	func_355();
}

void func_57(bool bParam0, int iParam1)//Position - 0x1D08
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54752)
	{
		Global_54752 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_68491.f_1 == 1) && func_58(Global_68491))
		{
		}
		else
		{
			Global_54750 = 1;
		}
	}
	if (Global_SAVE_DATA.isGameflowActive || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_81119[iVar0 /*5*/];
		uVar2 = Global_68514.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_SAVE_DATA.isGameflowActive)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_68493, 1);
		Global_68509 = uVar2;
		Global_68510 = MISC::GET_GAME_TIMER();
	}
}

int func_58(int iParam0)//Position - 0x1DDE
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_59()//Position - 0x1E1C
{
	Global_14558 = 0;
	func_60();
}

void func_60()//Position - 0x1E2C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_61()//Position - 0x1E83
{
	func_64(0, -1);
	func_63(0, 318);
	func_62(1, 320);
}

void func_62(bool bParam0, int iParam1)//Position - 0x1EA1
{
	int iVar0;
	
	if (Global_54758)
	{
	}
	Global_54758 = 0;
	if (bParam0)
	{
		Global_54759 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66846[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] > 0)
			{
				if (Global_66846[iVar0 /*9*/] == iParam1)
				{
					Global_66846[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_63(int iParam0, int iParam1)//Position - 0x1F3B
{
	int iVar0;
	
	Global_54763 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (iParam1 == -1 || Global_66846[iVar0 /*9*/] == iParam1)
		{
			if (Global_66846[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66846[iVar0 /*9*/].f_6 = iParam0;
				Global_66846[iVar0 /*9*/].f_7 = 1;
				Global_66846[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_64(int iParam0, int iParam1)//Position - 0x1FA6
{
	Global_54761 = iParam0;
	Global_54762 = iParam1;
}

int func_65(var uParam0, char* sParam1, var uParam2)//Position - 0x1FB8
{
	switch (*uParam0)
	{
		case 0:
			if (func_96())
			{
				if ((func_95(74) || func_95(75)) && func_94())
				{
					if (func_25() == 0)
					{
						func_93(1);
						func_92(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_91(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_80(uParam2, func_90(), func_25(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_79(1) };
							func_92(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_93(0);
					*uParam0 = 4;
				}
				else
				{
					func_91(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_80(uParam2, func_90(), func_25(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_79(0) };
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
			if (func_71())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					func_70("FBIPRAU", sParam1);
					func_69(1);
					*uParam0 = 3;
				}
			}
			if (func_68())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_71())
			{
				if (!func_67(0))
				{
					if (!func_95(3) && func_96())
					{
						func_66(50, 0);
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

void func_66(int iParam0, int iParam1)//Position - 0x212D
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY[iParam0] = 1;
	Global_SAVE_DATA.CODE_CONTROL_DATA_STRUCT.CODE_CONTROL_EXECUTE_TIMER_ARRAY[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_67(int iParam0)//Position - 0x216A
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x21C4
{
	if (Global_15741 == 1 || Global_16708 == 1)
	{
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)//Position - 0x21E7
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_70(char* sParam0, char* sParam1)//Position - 0x21FB
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_15749 = 1;
		StringCopy(&Global_15756, sParam0, 24);
		StringCopy(&Global_15750, sParam1, 24);
	}
}

int func_71()//Position - 0x221C
{
	if (Global_15692 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_72()//Position - 0x2241
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_77(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_76(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_73(func_74(), 0, func_25(), func_90(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2298
{
	struct<15> Var0;
	int iVar15;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = func_53(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		func_52(iParam2);
		return 1;
	}
	return 0;
}

int func_74()//Position - 0x23E9
{
	switch (func_75())
	{
		case 33:
			switch (func_25())
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
			switch (func_25())
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
			switch (func_25())
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
			switch (func_25())
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

int func_75()//Position - 0x250F
{
	return Global_68507;
}

int func_76(int iParam0, int iParam1)//Position - 0x251B
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_86220, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x2577
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_87845[func_78(iParam0)];
}

int func_78(int iParam0)//Position - 0x25A8
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_79(bool bParam0)//Position - 0x25E3
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_80(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2649
{
	func_88(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
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
					func_60();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_86();
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
				func_85();
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
				if (func_84())
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
			if (func_49())
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
			func_83();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_82();
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
		func_60();
	}
	return 0;
}

void func_82()//Position - 0x297D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15692 = 1;
}

void func_83()//Position - 0x29AE
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_84()//Position - 0x2A43
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_85()//Position - 0x2ADC
{
	if (func_27(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_25();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_86()//Position - 0x2B7D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_87(int iParam0, int iParam1)//Position - 0x2BD4
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2C0F
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_89()//Position - 0x2C65
{
	char* sVar0;
	
	switch (func_75())
	{
		case 33:
			switch (func_25())
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
			switch (func_25())
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
			switch (func_25())
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
			switch (func_25())
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
	
	switch (func_25())
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

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2DA6
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_92(int iParam0, int iParam1)//Position - 0x2E41
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0] = iParam1;
}

void func_93(bool bParam0)//Position - 0x2E86
{
	if (bParam0)
	{
		func_73(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_95(3))
	{
		func_73(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_73(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_94()//Position - 0x2EF7
{
	if ((func_95(41) && func_95(3)) && func_95(21))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x2F22
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/];
}

int func_96()//Position - 0x2F4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_95(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_97(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x2F96
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0];
}

void func_98(char* sParam0, int iParam1, int iParam2)//Position - 0x2FC3
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_99(char* sParam0, int iParam1, int iParam2)//Position - 0x2FDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_100(int iParam0, struct<3> Param1, float fParam4)//Position - 0x2FFA
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam4 * fParam4);
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
					if (func_36(iLocal_873))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
						{
							func_114("PRA_LEVVEH", &iLocal_819);
						}
					}
				}
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_820, Local_826, &iLocal_684, iLocal_685, &iLocal_819, &iLocal_837);
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
					func_92(46, 1);
					func_61();
					func_103(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_867))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, -1);
				}
				else
				{
					func_102(Local_867, Local_826, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_683 = 1;
				}
			}
			break;
	}
}

int func_102(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)//Position - 0x316A
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, iParam6);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_103(bool bParam0)//Position - 0x31C4
{
	func_104(iLocal_682);
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

void func_104(int iParam0)//Position - 0x3201
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_105()//Position - 0x3219
{
	if (func_96())
	{
		if ((func_95(74) || func_95(75)) && func_94())
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
			if (func_36(iParam0))
			{
				if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					func_114(func_112(func_75()), iParam11);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_99(func_112(func_75()), 0, 0))
				{
					HUD::CLEAR_THIS_PRINT(func_112(func_75()));
				}
				*iParam7 = 1;
				func_110(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_100(PLAYER::PLAYER_PED_ID(), Param1, fVar0))
					{
						*iParam7 = 0;
						func_109(1077936128, 1);
					}
				}
				func_7(iParam4);
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
			if (func_99(func_112(func_75()), 0, 0))
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
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_108(func_75(), 0));
			}
			if (!func_99(func_107(func_75()), 0, 0))
			{
				func_98(func_107(func_75()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}

char* func_107(int iParam0)//Position - 0x33F5
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_108(int iParam0, bool bParam1)//Position - 0x344E
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_109(float fParam0, int iParam1)//Position - 0x34B6
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0, struct<3> Param1, int iParam4)//Position - 0x3539
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_111(Param1, 5, iParam4);
	}
}

int func_111(struct<3> Param0, int iParam3, int iParam4)//Position - 0x355A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
	HUD::SET_BLIP_SCALE(iVar0, 1f);
	HUD::SET_BLIP_ROUTE(iVar0, iParam4);
	return iVar0;
}

char* func_112(int iParam0)//Position - 0x3588
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_113(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x35E1
{
	switch (*iParam4)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				HUD::CLEAR_PRINTS();
				func_98("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				HUD::CLEAR_PRINTS();
				if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
				{
					func_114(func_108(func_75(), 0), iParam6);
					func_110(iParam0, Param1, 1);
				}
				else if (iParam5 == 0 && !*iParam7)
				{
					func_98(func_107(func_75()), 7500, 0);
					*iParam7 = 1;
				}
				*iParam4 = 0;
			}
			break;
	}
}

void func_114(char* sParam0, int iParam1)//Position - 0x36C1
{
	if (!*iParam1)
	{
		func_98(sParam0, 7500, 0);
		*iParam1 = 1;
	}
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
					func_140(33);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 1);
					iLocal_682 = 2;
					func_7(&iLocal_820);
					func_138(&uLocal_670, 0, 0);
					func_137(189, 1244.338f, -339.3197f, 68.0823f);
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
					func_140(33);
					if (func_321(Local_839))
					{
						func_133(Local_839);
					}
					if (func_321(Local_853))
					{
						func_132(Local_853);
					}
					func_131(Local_867);
					if (func_321(Local_853) && func_321(Local_839))
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
						func_7(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
					}
					func_118(&iLocal_820, Local_867, 1);
					func_137(189, 1244.338f, -339.3197f, 68.0823f);
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
					func_117(PLAYER::PLAYER_PED_ID(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
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

void func_117(int iParam0, struct<3> Param1, float fParam4)//Position - 0x3A3A
{
	if (func_321(uParam0))
	{
		TASK::CLEAR_PED_TASKS(uParam0);
	}
	func_102(iParam0, Param1, fParam4, 0, 1);
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0x3A60
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_119(iParam1, iParam2, 5);
	}
}

int func_119(int iParam0, var uParam1, int iParam2)//Position - 0x3A7F
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, uParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
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
		if (!func_129(Local_133[iLocal_660 /*25*/].f_11) && !func_129(Local_133[iLocal_660 /*25*/].f_14))
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
		if (!func_129(Local_133[iLocal_660 /*25*/].f_11) && !func_129(Local_133[iLocal_660 /*25*/].f_14))
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
	
	if (func_36(iLocal_108))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_80 - 1))
		{
			fVar28 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_133[iVar4 /*25*/], 1);
			if (!func_129(Local_133[iVar4 /*25*/]) && fVar28 > 25f)
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
		fVar30 = func_126(Local_133[iVar0 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_108));
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
			fVar30 = func_126(Local_133[iVar5 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_108));
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

float func_126(struct<3> Param0, struct<3> Param3)//Position - 0x3F07
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
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

int func_129(struct<3> Param0)//Position - 0x4061
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
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
	if (func_36(iParam0))
	{
		iLocal_108 = iParam0;
	}
}

void func_132(var uParam0)//Position - 0x4113
{
	if (func_321(uParam0))
	{
		Local_110[1 /*11*/] = uParam0;
	}
}

void func_133(var uParam0)//Position - 0x412E
{
	if (func_321(uParam0))
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
	
	switch (func_25())
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
	func_91(uParam0, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
}

void func_137(int iParam0, struct<3> Param1)//Position - 0x420B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if ((Param1.x == Global_24748[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_24748[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_24748[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_24745 = 1;
	MISC::SET_BIT(&(Global_24748[iVar0 /*23*/].f_11), 18);
	Global_24748[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_30775 = 1;
}

void func_138(var uParam0, int iParam1, int iParam2)//Position - 0x429F
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
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
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
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_139(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_139(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_139(char* sParam0)//Position - 0x437C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_140(int iParam0)//Position - 0x438F
{
	if (Global_87289 != -1)
	{
		if (iParam0 == Global_87289)
		{
			Global_87293 = 1;
			return;
		}
	}
}

int func_141()//Position - 0x43B3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("trash")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0);
			iLocal_873 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_36(iLocal_873))
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
			if (func_147(Param1, Local_823, 1056964608) && fParam4 == 0f)
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
			if (func_36(Global_86864[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
				Local_867 = Global_86864[0];
				if (func_36(Local_867))
				{
					func_35(Local_867, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_867, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_867, 1);
					return 1;
				}
			}
			else if (func_146(&Local_867, Local_867.f_5, Local_867.f_1, Local_867.f_4, 1))
			{
				func_35(Local_867, 0);
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
					if (func_321(Local_839))
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
				if (func_36(Local_867))
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
					if (func_321(Local_853))
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
				if (func_36(Local_867))
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
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, uParam1, Param2, uParam5, 1, 1);
			if (func_321(*uParam0))
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
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_321(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_144(var uParam0, bool bParam1)//Position - 0x4753
{
	if (bParam1)
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0);
	}
}

int func_145(var uParam0, char* sParam1, int iParam2)//Position - 0x4778
{
	STREAMING::REQUEST_MODEL(uParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && iParam2 != -1)
	{
	}
	if (STREAMING::HAS_MODEL_LOADED(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x47A7
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_145(iParam1, "Loading", 0))
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
					func_144(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*uParam0))
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

int func_147(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x4854
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
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
	if (func_321(*uParam0))
	{
		func_195(uParam0, iParam1, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_133[iLocal_660 /*25*/].f_17) && ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
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
		if (func_10(Local_133[iLocal_660 /*25*/].f_17))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
			{
				ENTITY::DETACH_ENTITY(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_133[iLocal_660 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!func_150(PLAYER::PLAYER_PED_ID(), *uParam0, 150f) && !bLocal_664)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_150(int iParam0, int iParam1, float fParam2)//Position - 0x4A45
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) <= (fParam2 * fParam2);
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
				if (func_177(*uParam0, 780511057))
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
					uParam0->f_4 = func_166(*uParam0, 1, 145);
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
				else if (!func_177(*uParam0, 474215631))
				{
					if (func_177(*uParam0, 780511057))
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
				if (!func_177(*uParam0, 713668775))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_110[func_164(uParam0->f_10) /*11*/]))
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
			if (!func_177(*uParam0, -2017877118))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (func_163(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 1.5f)
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
			if (!func_177(*uParam0, -2017877118))
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
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_7(&(uParam0->f_4));
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
						if (func_321(*uParam0))
						{
							TASK::CLEAR_PED_TASKS(*uParam0);
							TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 120f))
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
			if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 120f))
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
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > uParam0->f_2 || !func_177(*uParam0, 2104565373))
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
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
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
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
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
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
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
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
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
					func_161(&(Local_110[func_164(uParam0->f_10) /*11*/]));
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
				if (!func_150(*uParam0, PLAYER::PLAYER_PED_ID(), 15f))
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
			if (func_100(*uParam0, Local_666, 2f))
			{
				if (func_152(*uParam0, Local_666, 1126825984, 0))
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

int func_152(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x53A9
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_153(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_153(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_126(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_153(struct<3> Param0)//Position - 0x5437
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
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
		if (func_36(iVar0))
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
			if (!func_177(*uParam0, 242628503))
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
	if (!func_177(*uParam0, -71340211))
	{
		if (Local_133[iLocal_660 /*25*/].f_23 != 0)
		{
			if (func_10(Local_133[iLocal_660 /*25*/].f_17))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_133[iLocal_660 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_133[iLocal_660 /*25*/].f_19, 1f, 20000, -1f, 0, func_158(Local_133[iLocal_660 /*25*/].f_19, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1));
		}
		if (func_36(iLocal_108))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_108, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_158(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)//Position - 0x57CF
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_159()//Position - 0x5834
{
	if (func_36(iLocal_108) && func_321(PLAYER::PLAYER_PED_ID()))
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

float func_163(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x5946
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_164(int iParam0)//Position - 0x5960
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0)//Position - 0x5973
{
	if (func_36(iLocal_108) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 0) && !PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0)))
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

var func_166(int iParam0, bool bParam1, int iParam2)//Position - 0x59CD
{
	var uVar0;
	
	uVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_167(int iParam0, bool bParam1, bool bParam2)//Position - 0x5A1F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_168(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_168(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_168(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_168(bool bParam0, float fParam1, float fParam2)//Position - 0x5AC3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_169(var uParam0, int iParam1)//Position - 0x5ADA
{
	func_162(uParam0);
	if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_150(PLAYER::PLAYER_PED_ID(), *uParam0, 10f))
		{
			if (!func_177(*uParam0, 1805844857))
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
		if (!func_177(*uParam0, 780511057) && !func_177(*uParam0, -71340211))
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
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar4 != -1)
		{
			func_175(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_174(iParam0, iParam1, fParam2, iParam3))
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
	if (!func_10(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_172(iParam4, iParam7) };
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
		func_10(iVar7);
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
		func_10(iVar7);
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

Vector3 func_172(int iParam0, int iParam1)//Position - 0x5D82
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
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

int func_174(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x5E91
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_153(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_153(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_126(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_175(var uParam0)//Position - 0x5F22
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
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

int func_177(int iParam0, int iParam1)//Position - 0x5F7C
{
	if (func_321(uParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
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
				if (!func_177(*uParam0, -1794415470))
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
						if (func_100(*uParam0, Local_133[iLocal_660 /*25*/], 20f))
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
			if (func_100(*uParam0, Local_133[iLocal_660 /*25*/], 25f))
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
			if (func_36(iLocal_108))
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
			if (!func_177(*uParam0, 242628503) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_108))
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
			if (func_321(Local_110[1 /*11*/]))
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
			if (!func_177(*uParam0, -2015108952))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (func_163(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Local_133[iLocal_660 /*25*/].f_19) > 1.5f)
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
			if (func_177(*uParam0, 242628503))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_133[iLocal_660 /*25*/].f_17) && !ENTITY::IS_ENTITY_ATTACHED(Local_133[iLocal_660 /*25*/].f_17))
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
			else if (!func_177(*uParam0, 713668775))
			{
				if (func_36(iLocal_108))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_108));
				}
				uParam0->f_9 = 3;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_108))
			{
				if (!func_184(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -5.5f, 0f), iLocal_108, 1.9f, 1.9f, 8f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_177(*uParam0, 713668775))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							if (func_163(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1)) > 3f)
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
					else if (!func_177(*uParam0, 713668775))
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
				if (func_177(*uParam0, 242628503))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_133[iLocal_660 /*25*/].f_17))
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
									func_180(&(Local_133[iLocal_660 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_108))
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_108, 5, 0);
						func_180(&(Local_133[iLocal_660 /*25*/].f_17));
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

void func_180(var uParam0)//Position - 0x665C
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(uParam0);
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
		uParam0->f_4 = func_166(*uParam0, 1, 145);
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
		uParam0->f_4 = func_166(*uParam0, 1, 145);
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
				if (func_10(Local_81.f_18))
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
			if (func_10(Local_81.f_18))
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
	
	if (func_36(iLocal_108))
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
		else if (!func_177(*uParam0, 1227113341) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_100(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_108, func_130(bParam1)), 5f))
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
		if (func_36(iLocal_108) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_177(*uParam0, 2104565373) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
			{
				if (func_150(PLAYER::PLAYER_PED_ID(), iLocal_108, 10f))
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
				if ((iVar0 != iLocal_660 && func_10(Local_133[iVar0 /*25*/].f_17)) && func_194(Local_133[iVar0 /*25*/].f_17, PLAYER::PLAYER_PED_ID(), 1) > 200f)
				{
					OBJECT::DELETE_OBJECT(&(Local_133[iVar0 /*25*/].f_17));
					Local_133[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_133[iVar0 /*25*/].f_23 != 0)
			{
				if (func_100(PLAYER::PLAYER_PED_ID(), Local_133[iVar0 /*25*/], 100f) || func_100(Local_110[0 /*11*/], Local_133[iVar0 /*25*/], 120f))
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
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam1, Param2, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, uParam5);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam6)
				{
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_194(int iParam0, int iParam1, int iParam2)//Position - 0x6EBA
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_195(var uParam0, int iParam1, int iParam2)//Position - 0x6F16
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_321(Local_110[func_164(iParam1) /*11*/]))
		{
			if (!bLocal_664)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_110[func_164(iParam1) /*11*/]))
				{
					if (func_174(*uParam0, Local_110[func_164(iParam1) /*11*/], 140f, 0) || func_150(Local_110[func_164(iParam1) /*11*/], *uParam0, 3f))
					{
						func_169(uParam0, 0);
						bLocal_664 = true;
						return;
					}
					else
					{
						Local_666 = { ENTITY::GET_ENTITY_COORDS(Local_110[func_164(iParam1) /*11*/], 1) };
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
		else if (Local_110[func_164(iParam1) /*11*/].f_6 == 22)
		{
			if (func_174(*uParam0, Local_110[func_164(iParam1) /*11*/], 140f, 0) && func_150(Local_110[func_164(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 15f))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_110[func_164(iParam1) /*11*/].f_6 == 5 || Local_110[func_164(iParam1) /*11*/].f_6 == 7)
		{
			if (func_150(Local_110[func_164(iParam1) /*11*/], *uParam0, 10f))
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
				if (func_36(iLocal_108))
				{
					if (PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_108, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_108) > 5f)
						{
							if (iParam1 == 0)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, iLocal_108, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								TASK::TASK_COWER(Local_110[func_164(iParam1) /*11*/], -1);
								Local_110[func_164(iParam1) /*11*/].f_6 = 10;
								Local_110[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_110[func_164(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::TASK_COWER(*uParam0, -1);
								uParam0->f_6 = 12;
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_110[func_164(iParam1) /*11*/], iLocal_108, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, 1);
								Local_110[func_164(iParam1) /*11*/].f_6 = 5;
								Local_110[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_110[func_164(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_169(uParam0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_110[func_164(iParam1) /*11*/]))
							{
								if (func_174(Local_110[func_164(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
								{
									func_169(&(Local_110[func_164(iParam1) /*11*/]), 0);
								}
							}
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
					}
					else
					{
						func_169(uParam0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_110[func_164(iParam1) /*11*/]))
						{
							if (func_170(Local_110[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_169(&(Local_110[func_164(iParam1) /*11*/]), 0);
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
				if (func_170(Local_110[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_110[func_164(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
					Local_110[func_164(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_110[func_164(iParam1) /*11*/].f_5 = 1;
					Local_110[func_164(iParam1) /*11*/].f_6 = 21;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_110[func_164(iParam1) /*11*/]);
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
			if (func_10(Local_133[iLocal_660 /*25*/].f_17))
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
		if (func_321(Local_110[func_164(iParam1) /*11*/]))
		{
			if (PED::IS_PED_BEING_JACKED(Local_110[func_164(iParam1) /*11*/]))
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
	
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_202(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_201(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
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
	
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (func_200(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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

int func_200(int iParam0)//Position - 0x75CC
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, int iParam1, float fParam2)//Position - 0x75F4
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	return (((Var0.x * Var3.x) + (Var0.f_1 * Var3.f_1)) / SYSTEM::VDIST(Var3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x763B
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_205(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_205(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x7736
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.x = (Var3.x + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_204(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_204(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1)//Position - 0x7842
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_152(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x78D7
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x791F
{
	if (func_150(uParam0, PLAYER::PLAYER_PED_ID(), 6f))
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
	if (func_36(Local_867))
	{
		if (func_150(PLAYER::PLAYER_PED_ID(), Local_867, 100f) && !iLocal_836)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("trash"), 3);
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("trash")))
			{
				iLocal_836 = 1;
			}
		}
		else if (!func_150(PLAYER::PLAYER_PED_ID(), Local_867, 120f) && iLocal_836)
		{
			VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
			iLocal_836 = 0;
		}
	}
}

void func_208(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)//Position - 0x79C7
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_107(func_75()));
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
				else if (func_213(*iParam0) || func_212(*iParam0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_107(func_75()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_99(func_108(func_75(), bParam9), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_108(func_75(), bParam9));
					}
					if (func_75() != 33)
					{
						func_210(iParam0);
					}
					else
					{
						func_209(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0) && !func_213(*iParam0)) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_118(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_213(*iParam0) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_118(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_75() != 33)
	{
		func_210(iParam0);
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
				if (func_36(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_35(*uParam0, 1);
						func_35(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
						if (func_10(uVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_35(*uParam0, 1);
								func_35(*uParam1, 3);
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

void func_210(var uParam0)//Position - 0x7C68
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_36(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == func_211(func_75()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_35(*uParam0, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_211(int iParam0)//Position - 0x7CC5
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_212(int iParam0)//Position - 0x7D1E
{
	int iVar0;
	int iVar1;
	
	if ((func_321(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_36(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_36(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x7DA1
{
	int iVar0;
	int iVar1;
	
	if ((func_321(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_36(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_36(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
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
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !func_230())
				{
					func_110(&iLocal_820, Local_826, 1);
					func_114("PRA_TAKBACK", &iLocal_819);
				}
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_820, Local_826, &iLocal_684, iLocal_685, &iLocal_819, &iLocal_837);
			func_220();
			if (func_218(iLocal_873, Local_826, &iLocal_820, iLocal_684, iLocal_685, &iLocal_819, &iLocal_838, 0, 0, 1086324736))
			{
				RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
				iLocal_683 = 2;
			}
			break;
		
		case 2:
			func_215();
			func_7(&iLocal_820);
			func_7(&iLocal_821);
			if (func_109(1077936128, 1))
			{
				func_103(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_873))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, -1);
				}
				else
				{
					func_102(iLocal_873, Local_826, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_683 = 1;
				}
			}
			break;
	}
}

void func_215()//Position - 0x7F69
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_77(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_217(iVar1))
			{
				func_216(iVar1);
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0)//Position - 0x7FA5
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_86221, iVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_86221, iVar0);
		return 1;
	}
	return 0;
}

int func_217(int iParam0)//Position - 0x7FFD
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_86221, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, float fParam11)//Position - 0x8049
{
	if ((iParam6 == 1 || iParam6 == 2) || iParam6 == 3)
	{
		if (iParam5 == 0)
		{
			func_110(iParam4, Param1, 1);
			if (!bParam10)
			{
				if (func_36(iParam0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_99(func_107(func_75()), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_107(func_75()));
			}
			if (!func_219())
			{
				func_114(func_108(func_75(), bParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_108(func_75(), 0));
			}
			func_98(func_107(func_75()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_219()//Position - 0x813C
{
	return Global_90014.f_290 > 0;
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
		iVar2 = func_77(iVar0);
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (func_76(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_150(PLAYER::PLAYER_PED_ID(), iVar2, 5f))
					{
						if (!func_230())
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
						func_91(&uLocal_878, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_91(&uLocal_878, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_91(&uLocal_878, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1047[iVar0] = 1;
				}
			}
			if (!func_217(iVar2))
			{
				if (func_76(iVar2, 0))
				{
					if (func_224(iVar2) || func_222(iVar2))
					{
						if (func_221(iVar2, 0))
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
					if (func_36(Local_867))
					{
						if (!func_150(iVar2, Local_867, 17f))
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
					func_216(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_221(int iParam0, int iParam1)//Position - 0x8358
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_86221, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_86220, iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0);
			MISC::SET_BIT(&Global_86221, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x83DE
{
	int iVar0;
	
	if (!func_223())
	{
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_36(iVar0))
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

int func_223()//Position - 0x845D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0x8479
{
	if (!func_223())
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
				if (func_228(iLocal_873, Local_826, 1) < 15f && iLocal_685 == 1)
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
			switch (func_29(PLAYER::PLAYER_PED_ID()))
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
		else if (!func_230() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
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

float func_228(int iParam0, struct<3> Param1, int iParam4)//Position - 0x87A3
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

bool func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x87DC
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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

int func_230()//Position - 0x882A
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_231()//Position - 0x884C
{
	if (func_100(PLAYER::PLAYER_PED_ID(), Local_826, 220f))
	{
		if (!iLocal_876 && !func_100(PLAYER::PLAYER_PED_ID(), Local_826, 100f))
		{
			iLocal_876 = func_146(&uLocal_875, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_100(PLAYER::PLAYER_PED_ID(), Local_826, 240f))
	{
		if (iLocal_876)
		{
			func_6(&uLocal_875);
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
				func_118(&iLocal_820, Local_867, 1);
				func_114("PRA_GOVAN", &iLocal_819);
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_220();
			if (func_36(Local_867))
			{
				func_235(&uLocal_670, Local_867, 0, 0, 1, 1, 1);
			}
			if (!bLocal_832)
			{
				if (func_321(Local_839) && PED::IS_PED_BEING_JACKED(Local_839))
				{
					func_234();
				}
				if (func_321(Local_853) && PED::IS_PED_BEING_JACKED(Local_853))
				{
					func_234();
				}
			}
			if (func_36(iLocal_873))
			{
				if ((iLocal_685 == 1 || iLocal_685 == 2) || iLocal_685 == 3)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_683 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_820);
			func_138(&uLocal_670, 0, 0);
			func_103(0);
			break;
		
		case 3:
			func_8(&Local_839);
			func_8(&Local_853);
			if (func_36(Local_867))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_867, -1);
			}
			func_233(1);
			func_39(1, 1, 1);
			iLocal_683 = 1;
			break;
	}
}

void func_233(bool bParam0)//Position - 0x8A2C
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
}

void func_234()//Position - 0x8A73
{
	char* sVar0;
	
	switch (func_25())
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

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x8AD9
{
	func_236(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_236(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x8AF6
{
	func_237(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_237(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x8B14
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_138(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_238(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_238(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x8B4C
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
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
	if (func_139(iVar0))
	{
		func_255();
	}
	if (func_254(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_249(uParam0, bParam7, bParam9, 0))
			{
				func_246(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_243(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_139(iVar0))
							{
								func_242(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_241(1);
								}
							}
						}
					}
				}
			}
			else if (func_243(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_139(iVar0))
						{
							func_242(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_241(1);
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
				if (func_139(sParam5))
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
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_138(uParam0, iVar0, 1);
				}
			}
			if (!func_249(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_240(uParam0))
				{
					func_239(uParam0);
				}
			}
		}
	}
	else
	{
		func_138(uParam0, iVar0, 0);
	}
}

void func_239(var uParam0)//Position - 0x8EB9
{
	if (func_254(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_240(var uParam0)//Position - 0x8F22
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_241(bool bParam0)//Position - 0x8F4D
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_242(char* sParam0, int iParam1)//Position - 0x8FF7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_243(char* sParam0)//Position - 0x900E
{
	if (!func_244(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_139(sParam0)) || func_139("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_241(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_241(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_241(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_244(bool bParam0, bool bParam1, bool bParam2)//Position - 0x90A7
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (func_245())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_245()//Position - 0x9223
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

void func_246(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x9238
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_138(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_247())
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
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
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
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_247()//Position - 0x933B
{
	return func_248(PLAYER::PLAYER_ID());
}

int func_248(int iParam0)//Position - 0x934B
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x936A
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_240(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_253(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_252(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_251(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_251(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_240(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_244(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_255();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_250(bool bParam0, bool bParam1, bool bParam2)//Position - 0x96D6
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9728
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_252(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9771
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_253(bool bParam0, bool bParam1, bool bParam2)//Position - 0x97D0
{
	if (!func_244(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x9826
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()//Position - 0x9881
{
	MISC::SET_BIT(&Global_2264, 4);
}

void func_256()//Position - 0x9891
{
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, 0))
			{
				func_268();
				func_266(33);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				if (func_337())
				{
					func_263(0, -1, 1);
					func_40(500, 1);
					iLocal_683 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_117(PLAYER::PLAYER_PED_ID(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_258(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_257();
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

void func_257()//Position - 0x9959
{
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
				func_259();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}

void func_259()//Position - 0x99D0
{
	Global_17098.f_6 = 1;
}

void func_260()//Position - 0x99DE
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_67(0))
		{
			func_261(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}

void func_261(int iParam0)//Position - 0x9A06
{
	if (Global_14551)
	{
		func_262(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_49())
	{
		Global_14393.f_1 = 3;
	}
}

void func_262(bool bParam0, bool bParam1)//Position - 0x9A76
{
	if (bParam0)
	{
		if (func_67(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

void func_263(int iParam0, int iParam1, int iParam2)//Position - 0x9AEA
{
	if (func_337() && func_265())
	{
		while (Global_89957 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_264(0);
	}
}

void func_264(int iParam0)//Position - 0x9BAE
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_89962.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_89962.f_20), 13);
	}
}

bool func_265()//Position - 0x9BD7
{
	return MISC::IS_BIT_SET(Global_89962.f_20, 13);
}

void func_266(int iParam0)//Position - 0x9BEB
{
	Global_86222 = 0;
	switch (iParam0)
	{
		case 72:
			func_267(2);
			func_267(4);
			break;
		
		case 73:
			func_267(0);
			func_267(1);
			func_267(7);
			break;
		
		case 92:
			func_267(10);
			func_267(9);
			func_267(13);
			func_267(6);
			break;
		
		case 68:
			func_267(11);
			break;
		
		case 78:
			func_267(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_267(3);
			break;
		
		default:
			break;
	}
}

void func_267(int iParam0)//Position - 0x9C79
{
	MISC::SET_BIT(&Global_86222, iParam0);
}

void func_268()//Position - 0x9C8B
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			func_269(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 24, 0);
		}
	}
}

void func_269(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)//Position - 0x9CC8
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_312(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_308(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			uParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_301(iParam5, Var0, Param1, uParam4, func_307(iParam0));
		func_270(iParam5, iParam0, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)//Position - 0x9DF3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_298(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = func_287();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_286(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_271(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_271(int iParam0, int iParam1)//Position - 0x9F10
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_272(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
	func_308(iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742));
}

int func_272(int iParam0)//Position - 0xA111
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_284(iParam0, 0, 0)) || func_284(iParam0, 1, 0)) || func_284(iParam0, 2, 0)) || func_307(iParam0) != 145) || func_283(iParam0)) || func_282(iParam0)) || func_281(iParam0)) || func_280(iParam0)) || !func_273(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_282(iParam0))
		{
		}
		if (func_282(iParam0))
		{
		}
		if (func_284(iParam0, 0, 0))
		{
		}
		if (func_284(iParam0, 1, 0))
		{
		}
		if (func_284(iParam0, 2, 0))
		{
		}
		if (func_307(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_273(int iParam0)//Position - 0xA1EE
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_274(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_274(int iParam0)//Position - 0xA39E
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_279())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_278() && !func_277()) && !func_276()) && !func_275()) && !func_279())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_276())
		{
			return 0;
		}
	}
	return 1;
}

int func_275()//Position - 0xA56D
{
	return 0;
}

int func_276()//Position - 0xA576
{
	return 1;
}

int func_277()//Position - 0xA57F
{
	return 1;
}

int func_278()//Position - 0xA588
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_279()//Position - 0xA5A1
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0)//Position - 0xA624
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_274(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0)//Position - 0xA669
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_282(int iParam0)//Position - 0xA6A4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_87698[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_283(int iParam0)//Position - 0xA720
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_284(int iParam0, int iParam1, bool bParam2)//Position - 0xA808
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_285(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xA879
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_286(int iParam0)//Position - 0xA951
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

var func_287()//Position - 0xA96D
{
	var uVar0;
	
	func_297(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_296(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_295(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_290(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_289(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_288(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_288(var uParam0, int iParam1)//Position - 0xA9B3
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_289(var uParam0, int iParam1)//Position - 0xAA39
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_290(var uParam0, int iParam1)//Position - 0xAA6C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_294(*uParam0);
	iVar1 = func_292(*uParam0);
	if (iParam1 < 1 || iParam1 > func_291(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_291(int iParam0, int iParam1)//Position - 0xAABD
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_292(var uParam0)//Position - 0xAB5F
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_293(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_293(bool bParam0, int iParam1, int iParam2)//Position - 0xAB84
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_294(var uParam0)//Position - 0xAB9B
{
	return uParam0 & 15;
}

void func_295(var uParam0, int iParam1)//Position - 0xABA8
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_296(var uParam0, int iParam1)//Position - 0xABE2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_297(var uParam0, int iParam1)//Position - 0xAC1D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_298(var uParam0, int iParam1)//Position - 0xAC59
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_279())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_279())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_15(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_15(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1)//Position - 0xC34E
{
	struct<58> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_300(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_300(int iParam0, var uParam1, int iParam2)//Position - 0xC390
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[128] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_301(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)//Position - 0xC608
{
	if (func_298(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_306(iParam0);
			func_305(Param1, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_302(iParam0, 1);
		}
	}
}

void func_302(int iParam0, bool bParam1)//Position - 0xC70A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_304(iParam0, 0))
		{
			func_303(iParam0, 1, 0);
			func_303(iParam0, 2, 0);
			func_303(iParam0, 3, 0);
			func_303(iParam0, 4, 0);
			func_303(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_303(iParam0, 0, 0);
	}
}

void func_303(int iParam0, int iParam1, bool bParam2)//Position - 0xC767
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

bool func_304(int iParam0, int iParam1)//Position - 0xC7A2
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0], iParam1);
}

void func_305(struct<54> Param0, var uParam54)//Position - 0xC7C5
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_306(int iParam0)//Position - 0xC890
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_298(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_302(iParam0, 0);
		}
	}
}

int func_307(int iParam0)//Position - 0xC90A
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_308(int iParam0, var uParam1)//Position - 0xC96D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_311(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_53), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_53), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::SET_BIT(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::CLEAR_BIT(&(uParam1->f_53), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_53), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 12);
		}
		func_310(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), func_309(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_53), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 27);
		}
	}
}

int func_309(int iParam0)//Position - 0xCC19
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_310(int iParam0, var uParam1, var uParam2)//Position - 0xCCC9
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_311(var uParam0)//Position - 0xCDA3
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

void func_312(int iParam0)//Position - 0xCE53
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_306(iParam0);
	func_302(iParam0, 0);
}

void func_313()//Position - 0xCE7A
{
	func_316();
	func_314();
}

void func_314()//Position - 0xCE8A
{
	if (!iLocal_830)
	{
		if (func_36(iLocal_873))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_873, 0))
			{
				func_64(iLocal_873, -1);
				func_63(iLocal_873, 318);
				iLocal_830 = 1;
			}
		}
	}
	if (!iLocal_831)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_315(320, 0);
			iLocal_831 = 1;
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		func_62(0, 320);
		iLocal_831 = 0;
	}
}

void func_315(int iParam0, bool bParam1)//Position - 0xCF02
{
	int iVar0;
	
	Global_54760 = iParam0;
	if (!Global_54758)
	{
		Global_54758 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] == iParam0)
			{
				Global_66846[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_316()//Position - 0xCF4C
{
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
	if (!func_36(iLocal_873))
	{
		if (!func_36(uLocal_874) && !func_36(Local_867))
		{
			func_320(1);
			return;
		}
		if (func_36(Local_867) && !func_150(PLAYER::PLAYER_PED_ID(), Local_867, fVar0))
		{
			func_320(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_150(PLAYER::PLAYER_PED_ID(), iLocal_873, fVar0))
		{
			iVar1++;
		}
		if (func_36(uLocal_874))
		{
			if (!func_150(PLAYER::PLAYER_PED_ID(), uLocal_874, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_867))
		{
			if (!func_150(PLAYER::PLAYER_PED_ID(), Local_867, fVar0))
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
		if (func_319(iLocal_873))
		{
			iVar1++;
		}
		if (func_36(uLocal_874))
		{
			if (func_319(uLocal_874))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_867))
		{
			if (func_319(Local_867))
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

int func_319(var uParam0)//Position - 0xD0B9
{
	if (func_36(uParam0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0, 1, 40000))
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

void func_320(int iParam0)//Position - 0xD114
{
	HUD::CLEAR_PRINTS();
	func_59();
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

int func_321(int iParam0)//Position - 0xD16C
{
	if (func_10(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_322()//Position - 0xD18C
{
	if (!func_95(36))
	{
		func_323(21, 0, 0);
	}
}

void func_323(int iParam0, bool bParam1, int iParam2)//Position - 0xD1A6
{
	if (bParam1)
	{
		if (!func_335(iParam0, 0, 0))
		{
			if (iParam2 && Global_90014.f_17[iParam0])
			{
				if (func_334(iParam0) == 3 && !func_333(iParam0))
				{
					func_332(iParam0);
					func_331(iParam0, 0, 0);
					func_325(iParam0, 1, 0);
					func_324(iParam0);
				}
				else
				{
					func_331(iParam0, 1, 0);
					func_324(iParam0);
				}
			}
			else
			{
				func_331(iParam0, 0, 0);
				func_325(iParam0, 1, 0);
				func_324(iParam0);
			}
		}
		else
		{
			func_325(iParam0, 1, 0);
			func_324(iParam0);
		}
	}
	else if (func_335(iParam0, 0, 0))
	{
		func_325(iParam0, 0, 0);
		func_325(iParam0, 1, 0);
		func_324(iParam0);
	}
}

void func_324(int iParam0)//Position - 0xD265
{
	Global_90014.f_153[iParam0] = 1;
	Global_90014.f_152 = 1;
}

void func_325(int iParam0, int iParam1, bool bParam2)//Position - 0xD27F
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

void func_326(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xD2E7
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_327(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_327(var uParam0)//Position - 0xD312
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_328(int iParam0, int iParam1, int iParam2)//Position - 0xD346
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_327(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xD378
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_330()//Position - 0xD621
{
	return Global_24444;
}

void func_331(int iParam0, int iParam1, bool bParam2)//Position - 0xD62C
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

void func_332(int iParam0)//Position - 0xD694
{
	if (Global_90014.f_17[iParam0])
	{
		func_331(iParam0, 10, 1);
		func_331(iParam0, 19, 1);
	}
}

bool func_333(int iParam0)//Position - 0xD6BB
{
	return func_335(iParam0, 5, 1);
}

int func_334(int iParam0)//Position - 0xD6CB
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

int func_335(int iParam0, int iParam1, bool bParam2)//Position - 0xD924
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_330() == 0)
		{
			return MISC::IS_BIT_SET(func_328(func_329(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0], iParam1);
	}
	return 0;
}

void func_336(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xD984
{
	if (func_337())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_89962.f_20), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_89958 = { Param0 };
		Global_89961 = fParam3;
		Global_89957 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_89962.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_89962.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_89962.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_89962.f_20), 24);
		}
		func_264(1);
	}
}

int func_337()//Position - 0xDA19
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
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
	
	func_350(&uLocal_712);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_349(&uLocal_712, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_348(&uLocal_712);
	func_346(&uLocal_764, &uLocal_712, 50f);
}

void func_346(var uParam0, var uParam1, float fParam2)//Position - 0xE464
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var6 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(SYSTEM::SQRT(((Var3.x * Var3.x) + (Var3.f_1 * Var3.f_1)))) };
		Var6 = { Var6 / FtoV(SYSTEM::SQRT(((Var6.x * Var6.x) + (Var6.f_1 * Var6.f_1)))) };
		Var9 = { Var3 - Var6 };
		Var9 = { Var9 / FtoV(SYSTEM::SQRT(((Var9.x * Var9.x) + (Var9.f_1 * Var9.f_1)))) };
		if (func_347(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_347(var uParam0, struct<2> Param1, Vector3 vParam3)//Position - 0xE571
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_348(var uParam0)//Position - 0xE62D
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_349(var uParam0, struct<3> Param1)//Position - 0xE6CD
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_350(var uParam0)//Position - 0xE6FE
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
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
	Local_867 = { func_354(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_354(struct<3> Param0, float fParam3, int iParam4)//Position - 0xE7C0
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_355()//Position - 0xE7E2
{
	func_233(1);
	func_366(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), 0);
	func_61();
	func_365();
	func_364();
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
	func_362();
	func_361();
	func_360();
	func_215();
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
		func_358();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_357();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	func_138(&uLocal_670, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_822))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_822, 0);
	}
}

void func_357()//Position - 0xE90B
{
	func_3();
	func_6(&Local_867);
	func_6(&uLocal_874);
	func_6(&iLocal_873);
	func_5(&Local_839, 1, 0, 1);
	func_5(&Local_853, 1, 0, 1);
	func_6(&uLocal_875);
}

void func_358()//Position - 0xE947
{
	Global_14558 = 0;
	func_359();
}

void func_359()//Position - 0xE957
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15692 = 6;
	}
}

void func_360()//Position - 0xE978
{
}

void func_361()//Position - 0xE980
{
	if (iLocal_836)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
	}
}

void func_362()//Position - 0xE997
{
}

void func_363()//Position - 0xE99F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_867.f_5);
}

void func_364()//Position - 0xE9B0
{
	func_323(21, 1, 0);
}

void func_365()//Position - 0xE9C0
{
	Global_86222 = 0;
}

void func_366(int iParam0)//Position - 0xE9CD
{
	Global_87673 = iParam0;
}

void func_367()//Position - 0xE9DB
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_SAVE_DATA.isGameflowActive || func_32(0))
	{
		if (!func_368())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_368()//Position - 0xEA4C
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

