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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	int iLocal_104 = 0;
	struct<5> Local_105[31];
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	struct<5> Local_268[48];
	float fLocal_509 = 0f;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	struct<61> Local_522 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	char* sLocal_587 = NULL;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	struct<5> Local_590 = { 0, 0, 0, 0, 0 } ;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 21;
	var uLocal_598 = 6;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	int iLocal_603 = 0;
	struct<3> Local_604 = { 0, 0, 0 } ;
	struct<3> Local_607 = { 0, 0, 0 } ;
	var uLocal_610 = 0;
	struct<3> Local_611 = { 0, 0, 0 } ;
	struct<3> Local_614 = { 0, 0, 0 } ;
	struct<3> Local_617 = { 0, 0, 0 } ;
	struct<3> Local_620 = { 0, 0, 0 } ;
	struct<3> Local_623 = { 0, 0, 0 } ;
	struct<3> Local_626 = { 0, 0, 0 } ;
	struct<3> Local_629 = { 0, 0, 0 } ;
	struct<3> Local_632 = { 0, 0, 0 } ;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	struct<3> Local_637 = { 0, 0, 0 } ;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	struct<3> Local_657 = { 0, 0, 0 } ;
	int iLocal_660 = 0;
	var uLocal_661 = 16;
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
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	struct<3> Local_859 = { 0, 0, 0 } ;
	struct<3> Local_862 = { 0, 0, 0 } ;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	struct<3> Local_867 = { 0, 0, 0 } ;
	struct<19> Local_870[3];
	var uLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	struct<2> Local_933 = { 0, 0 } ;
	var uLocal_935 = 15;
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
	int iLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	struct<3> Local_990 = { 0, 0, 0 } ;
	struct<3> Local_993 = { 0, 0, 0 } ;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	uLocal_79 = GlobalFunc_4946(58);
	iLocal_80 = joaat("felon2");
	iLocal_90 = -1;
	iLocal_93 = -1;
	fLocal_96 = 0.5f;
	fLocal_97 = 0f;
	iLocal_262 = 1;
	fLocal_509 = 160f;
	iLocal_513 = 1;
	iLocal_514 = 65;
	iLocal_515 = 49;
	iLocal_516 = 64;
	uLocal_520 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_521 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_583 = 1;
	Local_604 = { 572.4306f, -1765.003f, 28.1693f };
	Local_607 = { -1116.902f, 281.7206f, 64.2895f };
	Local_611 = { 550.3759f, -1772.463f, 32.4478f };
	Local_614 = { -1105.962f, 292.8846f, 63.5851f };
	Local_617 = { -1116f, 309f, 67f };
	Local_620 = { -1116.117f, 318.2604f, 65.9777f };
	Local_623 = { 567.3073f, -1762.961f, 28.1695f };
	Local_626 = { 565.4832f, -1767.704f, 28.147f };
	Local_629 = { -1102.443f, 284.4827f, 63.0251f };
	Local_632 = { -1069.317f, 236.0038f, 62.3195f };
	Local_637 = { -1116.31f, 317.28f, 65.97f };
	Local_657 = { 558.09f, -1765.39f, 28.86f };
	iLocal_660 = 4;
	uLocal_865 = AUDIO::GET_SOUND_ID();
	uLocal_866 = AUDIO::GET_SOUND_ID();
	Local_867 = { -1107.863f, 296.1609f, 65.3295f };
	Local_990 = { 563.76f, -1773.86f, 28.36f };
	Local_993 = { 0f, 0.05f, -110.7f };
	Local_522 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_522);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_522.f_59))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(Local_522.f_59);
	}
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_588();
	}
	GlobalFunc_9621(58, 2, 0);
	func_582();
	if (GlobalFunc_Is_Mission_Retry())
	{
		func_573(&Local_522, 1, 1, 0);
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_623, 161.173f, 1, 0);
				func_533(0);
				break;
			
			case 1:
				GlobalFunc_4972(Local_626, 66.0379f, 1, 0);
				func_533(2);
				break;
			
			case 2:
				GlobalFunc_4972(Local_629, 40.6354f, 1, 0);
				func_533(3);
				break;
			
			case 3:
				GlobalFunc_4972(Local_632, 24.0453f, 1, 0);
				func_533(6);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_SE", 0);
		func_516(Local_522.f_9, 0, 0, 0, 0, 0);
		func_497();
		switch (iLocal_583)
		{
			case 1:
				func_490();
				break;
			
			case 2:
				func_455();
				break;
			
			case 3:
				func_411();
				break;
			
			case 4:
				func_403();
				break;
			
			case 5:
				func_378();
				break;
			
			case 6:
				func_313();
				break;
			
			case 7:
				func_300();
				break;
			
			case 8:
				func_290();
				break;
			
			case 9:
				func_252();
				break;
			
			case 10:
				func_246();
				break;
			
			case 11:
				func_241();
				break;
			
			case 12:
				func_225();
				break;
			
			case 13:
				func_35();
				break;
			
			case 14:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x3C4
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_32();
			GlobalFunc_4956();
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_MISSION_FAIL");
			func_26();
			switch (iLocal_586)
			{
				case 0:
					break;
				
				case 1:
					sLocal_587 = "JOSH3_F1";
					break;
				
				case 2:
					sLocal_587 = "JOSH3_F2";
					break;
				
				case 3:
					sLocal_587 = "JOSH3_F3";
					break;
				
				case 4:
					sLocal_587 = "JOSH3_F5";
					break;
				
				case 5:
					sLocal_587 = "JOSH3_F6";
					break;
				
				case 6:
					sLocal_587 = "JOSH3_F7";
					break;
				
				case 7:
					sLocal_587 = "JOSH3_F8";
					break;
				
				case 8:
					sLocal_587 = "JOSH3_F9";
					break;
				
				case 9:
					sLocal_587 = "JOSH3_F4";
					break;
				
				case 10:
					sLocal_587 = "JOSH3_F10";
					break;
			}
			if (iLocal_586 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sLocal_587, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_22();
				func_18(1);
				func_11(1);
				func_10();
				GlobalFunc_7621(22, 0, 0, 1, 0);
				GlobalFunc_7621(23, 0, 0, 1, 0);
				func_588();
			}
			break;
	}
}









void func_10()//Position - 0x481C
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_858))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_858, 0);
		iLocal_858 = 0;
	}
}

void func_11(int iParam0)//Position - 0x483A
{
	if (iParam0 == 1)
	{
		GlobalFunc_881(&iLocal_987);
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			func_13();
		}
		else
		{
			func_26();
		}
		GlobalFunc_2297(&iLocal_987, 1, 0, 1);
	}
}


void func_13()//Position - 0x48C1
{
	if ((GlobalFunc_115(iLocal_987) && !GlobalFunc_6695(iLocal_987, -1146898486)) && !GlobalFunc_6695(iLocal_987, 1805844857))
	{
		PED::SET_PED_KEEP_TASK(iLocal_987, 1);
		TASK::TASK_WANDER_STANDARD(iLocal_987, 1193033728, 0);
	}
}





void func_18(int iParam0)//Position - 0x49BE
{
	if (iParam0 == 1)
	{
		GlobalFunc_6689(&iLocal_655);
		GlobalFunc_6689(&uLocal_610);
	}
	else
	{
		GlobalFunc_131(&iLocal_655);
		GlobalFunc_131(&uLocal_610);
	}
}




void func_22()//Position - 0x4AE8
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (iLocal_584 == 0)
	{
		iLocal_583++;
	}
	else
	{
		iLocal_583 = iLocal_584;
	}
	iLocal_584 = 0;
	iLocal_585 = 0;
}




void func_26()//Position - 0x4B9A
{
	if (GlobalFunc_115(iLocal_987))
	{
		TASK::CLEAR_PED_TASKS(iLocal_987);
		PED::SET_PED_KEEP_TASK(iLocal_987, 1);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_987, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			func_27(iLocal_987, 1);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_987, 1193033728, 0);
		}
	}
}

void func_27(var uParam0, bool bParam1)//Position - 0x4BF1
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_4950(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (PED::IS_PED_MALE(uParam0))
		{
			GlobalFunc_5117(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			GlobalFunc_5117(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}





void func_32()//Position - 0x4EA1
{
	GlobalFunc_846(&uLocal_650);
	GlobalFunc_846(&uLocal_651);
	GlobalFunc_846(&uLocal_652);
	GlobalFunc_846(&uLocal_653);
	GlobalFunc_846(&uLocal_654);
}


void func_34()//Position - 0x4EEC
{
	iLocal_589 = 0;
	iLocal_643 = 0;
	iLocal_642 = 0;
	iLocal_585 = 1;
}

void func_35()//Position - 0x4F04
{
	GlobalFunc_11329(90, 1);
	func_588();
}






























































































































































































void func_225()//Position - 0x25920
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			GlobalFunc_7621(23, 0, 0, 1, 0);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", 0, 0);
			GlobalFunc_173(&uLocal_661, 3, 0, "JOSH", 0, 1);
			iLocal_843 = 0;
			break;
		
		case 1:
			if (iLocal_843 == 0)
			{
				if (func_238(1) && GlobalFunc_10638(&uLocal_661, 58, "JOSH3AU", "JOSH3_CALL", 8, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 12f, 1);
					iLocal_843 = 1;
				}
			}
			else if (func_238(1))
			{
				iLocal_585 = 2;
			}
			break;
		
		case 2:
			func_22();
			break;
	}
}













int func_238(int iParam0)//Position - 0x2606F
{
	if (iLocal_589 == 1)
	{
		return 0;
	}
	if ((iParam0 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	return 1;
}



void func_241()//Position - 0x2616C
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			GlobalFunc_164("JOSH3_11", 7500, 1);
			break;
		
		case 1:
			func_244();
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_617, 100f))
			{
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				func_242();
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_COPS_LOST_RADIO");
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_COPS_LOST");
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
				}
				iLocal_585 = 2;
			}
			break;
		
		case 2:
			func_22();
			break;
	}
}

void func_242()//Position - 0x2621E
{
	if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_859, 2f))
	{
		FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
	}
}


void func_244()//Position - 0x2626B
{
	if (iLocal_841 == 0 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_COPS");
		iLocal_841 = 1;
	}
}


void func_246()//Position - 0x262AF
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			iLocal_838 = 0;
			iLocal_839 = 0;
			iLocal_841 = 0;
			func_251(0);
			iLocal_849 = MISC::GET_GAME_TIMER();
			iLocal_850 = MISC::GET_GAME_TIMER();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(1);
			GlobalFunc_563(0);
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_850) > 3000 && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (iLocal_1000 == 1)
				{
					iLocal_1000 = 0;
					RECORDING::_0x81CBAE94390F9F89();
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JOSH_3_01", 0f);
				PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				iLocal_585 = 2;
			}
			else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_617, 100f))
			{
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				GlobalFunc_553(774);
				iLocal_584 = 12;
				iLocal_585 = 2;
			}
			else
			{
				func_247();
				func_242();
				func_244();
				if (iLocal_849 > -1 && (MISC::GET_GAME_TIMER() - iLocal_849) > 20000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					iLocal_849 = -1;
				}
			}
			break;
		
		case 2:
			func_22();
			break;
	}
}

void func_247()//Position - 0x263F5
{
	if (func_238(1))
	{
		if (iLocal_838 == 0)
		{
			if (GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_FIRE", 8, 0, 0, 0))
			{
				iLocal_838 = 1;
			}
		}
		else if (iLocal_839 == 0)
		{
			GlobalFunc_164("JOSH3_07", 7500, 1);
			iLocal_839 = 1;
		}
	}
}




void func_251(int iParam0)//Position - 0x2652C
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, iParam0, 0f, 0);
	}
	else
	{
		OBJECT::_DOOR_CONTROL(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, iParam0, 0f, 0, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1101.62f, 290.36f, 64.76f, iParam0, 0f, 0);
	}
	else
	{
		OBJECT::_DOOR_CONTROL(joaat("prop_lrggate_01c_r"), -1101.62f, 290.36f, 64.76f, iParam0, 0f, 0, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.05f, 295.59f, 67.18f, 5f, joaat("prop_lrggate_01c_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.05f, 295.59f, 67.18f, iParam0, 0f, 0);
	}
	else
	{
		OBJECT::_DOOR_CONTROL(joaat("prop_lrggate_01c_r"), -1137.05f, 295.59f, 67.18f, iParam0, 0f, 0, 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.64f, 300.82f, 67.18f, 5f, joaat("prop_lrggate_01c_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.64f, 300.82f, 67.18f, iParam0, 0f, 0);
	}
	else
	{
		OBJECT::_DOOR_CONTROL(joaat("prop_lrggate_01c_l"), -1138.64f, 300.82f, 67.18f, iParam0, 0f, 0, 0);
	}
	if (iParam0 == 1)
	{
	}
}

void func_252()//Position - 0x2669E
{
	int iVar0;
	
	GRAPHICS::_0x27CFB1B1E078CB2D();
	switch (iLocal_585)
	{
		case 0:
			func_34();
			Local_870[2 /*19*/] = { -1113.1f, 326f, 67.1f };
			Local_870[2 /*19*/].f_3 = { 1f, 0.2f, 158.7f };
			Local_870[2 /*19*/].f_6 = { -1113.1f, 326f, 67.1f };
			Local_870[2 /*19*/].f_9 = { 1f, 0.2f, 158.7f };
			Local_870[2 /*19*/].f_12 = 30f;
			Local_870[2 /*19*/].f_18 = 0;
			Local_870[0 /*19*/] = { -1132.197f, 298.6881f, 65.89648f };
			Local_870[0 /*19*/].f_3 = { 0.093347f, 0.3f, -71.29575f };
			Local_870[0 /*19*/].f_6 = { -1132.197f, 298.6881f, 65.89648f };
			Local_870[0 /*19*/].f_9 = { 2.026602f, 0.300006f, -21.15808f };
			Local_870[0 /*19*/].f_12 = 30f;
			Local_870[0 /*19*/].f_18 = 2;
			Local_870[1 /*19*/] = { -1126.456f, 324.4242f, 69.34691f };
			Local_870[1 /*19*/].f_3 = { -25.1126f, 0.626431f, 177.4401f };
			Local_870[1 /*19*/].f_6 = { -1126.456f, 324.4242f, 69.34691f };
			Local_870[1 /*19*/].f_9 = { -25.11261f, 0.626431f, -161.7005f };
			Local_870[1 /*19*/].f_12 = 30f;
			Local_870[1 /*19*/].f_18 = 0;
			iLocal_931 = 0;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Local_870[iVar0 /*19*/].f_13 = 0;
				func_289(iVar0);
				iVar0++;
			}
			Local_933 = 0;
			Local_933.f_1 = -1;
			iLocal_930 = 0;
			iLocal_932 = -1;
			iLocal_853 = -1;
			iLocal_852 = MISC::GET_GAME_TIMER();
			iLocal_1001 = 0;
			break;
		
		case 1:
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			if (GlobalFunc_4926(1000))
			{
				iLocal_930 = 1;
				iLocal_585 = 2;
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()) && iLocal_931 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) > 0)
					{
						ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
					}
				}
				else
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if ((((Local_870[iVar0 /*19*/].f_13 == 0 && iVar0 > iLocal_932) && (MISC::GET_GAME_TIMER() - iLocal_852) > 500) && !GlobalFunc_105(Local_870[iVar0 /*19*/].f_14)) && func_285(Local_870[iVar0 /*19*/].f_14, Local_870[iVar0 /*19*/].f_17))
						{
							func_280(iVar0);
						}
						iVar0++;
					}
					if (Local_870[2 /*19*/].f_13 == 1)
					{
						if (iLocal_853 == -1)
						{
							iLocal_853 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_853) > 1500)
						{
							iLocal_585 = 2;
						}
						if ((iLocal_1001 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && (MISC::GET_GAME_TIMER() - iLocal_853) > 1200)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_1001 = 1;
						}
					}
					func_278(0);
				}
			}
			func_270();
			break;
		
		case 2:
			func_22();
			if (iLocal_930 == 1)
			{
				GlobalFunc_2350(500, 1);
				AUDIO::STOP_SOUND(uLocal_865);
				AUDIO::STOP_STREAM();
			}
			RECORDING::_0x293220DA1B46CEBC(10f, 3f, 1);
			func_264();
			func_10();
			FIRE::STOP_FIRE_IN_RANGE(Local_617, 100f);
			MISC::CLEAR_AREA_OF_PROJECTILES(Local_617, 100f, 0);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_617, 100f);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", 1, 1);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 0, 1, 0, 0);
			CAM::DESTROY_ALL_CAMS(0);
			func_278(1);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_617, 1) - 180f));
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
			}
			AUDIO::PLAY_SOUND_FROM_COORD(uLocal_866, "HOUSE_FIRE", Local_617, "JOSH_03_SOUNDSET", 0, 0, 0);
			GlobalFunc_7621(22, 1, 0, 1, 0);
			GlobalFunc_7621(23, 1, 0, 1, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_HOUSE_EXPLODE");
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_496(&uLocal_935, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "reaction@shellshock@unarmed", "back_long", 1000f, -8f, -1, 32768, 0.2f, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			STREAMING::REMOVE_ANIM_DICT("reaction@shellshock@unarmed");
			if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
			{
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.15f);
			}
			SYSTEM::WAIT(100);
			GlobalFunc_79(500, 0);
			func_253(1, 0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY("ExplosionJosh3", 0, 0);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_josh3_light_explosion", Local_867, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_josh3_exp_debris", Local_867, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_999))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_999);
			}
			if (((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::GET_ENTITY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) <= 0) && GlobalFunc_496(&uLocal_935, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
			}
			break;
	}
}

void func_253(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x26BD4
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
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}











void func_264()//Position - 0x26FDB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_105)
	{
		FIRE::REMOVE_SCRIPT_FIRE(Local_105[iVar0 /*5*/]);
		Local_105[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_265(0);
	iVar0 = 0;
	while (iVar0 < Local_268)
	{
		if (HUD::DOES_BLIP_EXIST(Local_268[iVar0 /*5*/].f_3))
		{
			HUD::REMOVE_BLIP(&(Local_268[iVar0 /*5*/].f_3));
		}
		Local_268[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_93 = -1;
}

void func_265(bool bParam0)//Position - 0x2704C
{
	int iVar0;
	
	bLocal_89 = true;
	iLocal_93 = 0;
	iLocal_91 = -1;
	iLocal_267 = 0;
	iLocal_267 = 0;
	bLocal_261 = false;
	if (bParam0 == 0)
	{
		iLocal_86 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_268)
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_268[iVar0 /*5*/], 1f);
		if (!HUD::DOES_BLIP_EXIST(Local_268[iVar0 /*5*/].f_3))
		{
			if (!GlobalFunc_100(Local_268[iVar0 /*5*/], 0f, 0f, 0f))
			{
				iLocal_93++;
				Local_268[iVar0 /*5*/].f_3 = func_266(Local_268[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_268[iVar0 /*5*/].f_3, 1);
				HUD::SET_BLIP_SCALE(Local_268[iVar0 /*5*/].f_3, 0.4f);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_268[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					HUD::SET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3, 0);
				}
				HUD::SET_BLIP_COLOUR(Local_268[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_268[iVar0 /*5*/] = { HUD::GET_BLIP_COORDS(Local_268[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				HUD::SET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				HUD::SET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3, 255);
			}
			iLocal_93++;
		}
		Local_268[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_105)
	{
		Local_105[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_105[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_266(struct<3> Param0, int iParam3)//Position - 0x2719E
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, iParam3);
	return iVar0;
}




void func_270()//Position - 0x2723C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_277();
		func_276();
		func_274();
		func_271();
	}
}

void func_271()//Position - 0x27260
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	Var1 = { 0f, 0f, 0f };
	if (bLocal_261 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_268[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_268)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_268[(iVar0 - 1) /*5*/], Local_268[iVar0 /*5*/], 1));
				}
				if (Local_268[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_268[iVar0 /*5*/]))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_268[iVar0 /*5*/], Var1, 1);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_96)
			{
				iVar5 = iVar5;
				bLocal_261 = true;
				iLocal_263 = MISC::GET_GAME_TIMER();
				fVar8 = fVar8;
				Local_101 = { Local_268[iVar5 /*5*/] };
				iLocal_104 = iVar5;
				iLocal_264 = iVar5 * 2;
				iLocal_266 = iLocal_264;
				iLocal_267 = iLocal_264;
				if (iLocal_267 < 0)
				{
					iLocal_267 = 0;
				}
				if (iLocal_266 >= Local_268 * 2)
				{
					iLocal_266 = (Local_268 * 2 - 1);
				}
			}
		}
	}
	if (bLocal_261 == 1)
	{
		GRAPHICS::_0xD9454B5752C857DC();
		fVar9 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_263)) / fLocal_509);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_264 + iVar10);
		iVar12 = (iLocal_264 - iVar10);
		if (iVar11 >= 96)
		{
			iVar11 = 95;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_266)
		{
			iVar0 = iLocal_266 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_268)
				{
					if (Local_268[iVar13 /*5*/].f_4)
					{
						func_272(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_266 = iVar11;
		}
		if (iVar12 < iLocal_267)
		{
			iVar0 = (iLocal_267 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_268)
				{
					if (Local_268[iVar13 /*5*/].f_4)
					{
						func_272(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_267 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_105)
		{
			if ((MISC::GET_GAME_TIMER() - Local_105[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_105[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_105[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_105[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_272(int iParam0, int iParam1)//Position - 0x274BC
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 48)
			{
				func_273(Local_268[(iParam0 / 2) /*5*/] + Local_268[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
			}
		}
		else if ((iParam0 / 2) < 48)
		{
			func_273(Local_268[(iParam0 / 2) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
		}
	}
}

void func_273(struct<3> Param0, int iParam3)//Position - 0x27528
{
	if (iLocal_262 == 0)
	{
		iParam3 = 0;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_105[iLocal_265 /*5*/]);
	if (Local_105[iLocal_265 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_105[iLocal_265 /*5*/].f_1, 0.4f, 1f);
	}
	Local_105[iLocal_265 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_105[iLocal_265 /*5*/].f_1 = { Param0 };
	Local_105[iLocal_265 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, uLocal_94, iParam3);
	iLocal_265++;
	if (iLocal_265 >= 31)
	{
		iLocal_265 = 0;
	}
}

void func_274()//Position - 0x275AA
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_89)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 24) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_95 == 0)
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_95 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999.9f;
						Local_98 = { GlobalFunc_2573() };
						iVar0 = 0;
						while (iVar0 < Local_268)
						{
							if (HUD::DOES_BLIP_EXIST(Local_268[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_98, HUD::GET_BLIP_COORDS(Local_268[iVar0 /*5*/].f_3), 1);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_268[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_268[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_268[iVar0 /*5*/] = { Local_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != -1)
							{
								if (MISC::ABSI((iLocal_92 - iVar5)) > 1)
								{
									iLocal_92 = -1;
								}
								if (iLocal_92 == -1)
								{
									iLocal_92 = iLocal_91;
								}
								if (MISC::ABSI((iLocal_92 - iVar5)) < 3 && MISC::ABSI((iLocal_92 - iVar5)) > 0)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_268[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_268[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_268[iVar6 /*5*/].f_3, 0);
													Local_268[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (HUD::DOES_BLIP_EXIST(Local_268[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_268[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_268[iVar6 /*5*/].f_3, 0);
													Local_268[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_268[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_268[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_268[iVar5 /*5*/].f_3, 0);
											Local_268[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 == 47)
								{
									if (HUD::DOES_BLIP_EXIST(Local_268[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_268[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_268[iVar5 /*5*/].f_3, 0);
											Local_268[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 < 47)
								{
									if (GlobalFunc_105(Local_268[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_268[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_268[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_268[iVar5 /*5*/].f_3, 0);
												Local_268[iVar5 /*5*/].f_4 = 1;
												iLocal_93 = (iLocal_93 - 1);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = -1;
				iLocal_92 = -1;
				iLocal_95 = 0;
			}
		}
	}
}


void func_276()//Position - 0x27908
{
	int iVar0;
	
	if (iLocal_87)
	{
		if (bLocal_261)
		{
			iVar0 = 0;
			while (iVar0 < Local_105)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_105[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0;
		bLocal_261 = true;
		iLocal_263 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_268)
		{
			Local_268[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_90 != -1)
		{
			iLocal_267 = iLocal_90;
			iLocal_266 = iLocal_90;
			iLocal_264 = iLocal_90;
		}
		else
		{
			iLocal_267 = -1;
			iLocal_266 = -1;
			iLocal_264 = iLocal_90;
		}
		iLocal_265 = 1;
	}
}

void func_277()//Position - 0x2798D
{
	if (!iLocal_88)
	{
		iLocal_88 = 1;
	}
}

void func_278(int iParam0)//Position - 0x2799E
{
	if (Local_933 == 0)
	{
		if (iParam0 == 1)
		{
			func_279(iParam0);
		}
		else if (Local_933.f_1 == -1)
		{
			if (func_285(Local_859, 1f))
			{
				Local_933.f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_933.f_1) > 500)
		{
			func_279(iParam0);
		}
	}
}

void func_279(int iParam0)//Position - 0x279F4
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_858))
	{
		iLocal_858 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_josh3_fires", Local_859, Local_862, 1065353216, 0, 0, 0, 0);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_josh3_explosion", Local_859, Local_862, 1065353216, 0, 0, 0);
		if (iParam0 == 0)
		{
			if (CAM::DOES_CAM_EXIST(uLocal_928))
			{
				CAM::SHAKE_CAM(uLocal_928, "SMALL_EXPLOSION_SHAKE", 0.25f);
			}
			AUDIO::PLAY_SOUND_FROM_COORD(uLocal_865, "BBQ_EXPLODE", Local_859, "JOSH_03_SOUNDSET", 0, 0, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_HOUSE_EXPLODE");
		}
	}
	Local_933 = 1;
}

void func_280(int iParam0)//Position - 0x27A84
{
	struct<3> Var0;
	float fVar3;
	
	if (!CAM::DOES_CAM_EXIST(uLocal_928))
	{
		uLocal_928 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if ((iParam0 == 2 && Local_870[0 /*19*/].f_13 == 0) && Local_870[1 /*19*/].f_13 == 0)
	{
		Local_870[iParam0 /*19*/].f_3 = { 1f, 0.2f, 150f };
	}
	CAM::SET_CAM_PARAMS(uLocal_928, Local_870[iParam0 /*19*/], Local_870[iParam0 /*19*/].f_3, Local_870[iParam0 /*19*/].f_12, 0, Local_870[iParam0 /*19*/].f_18, Local_870[iParam0 /*19*/].f_18, 2);
	CAM::SET_CAM_PARAMS(uLocal_928, Local_870[iParam0 /*19*/].f_6, Local_870[iParam0 /*19*/].f_9, Local_870[iParam0 /*19*/].f_12, 5000, Local_870[iParam0 /*19*/].f_18, Local_870[iParam0 /*19*/].f_18, 2);
	Local_870[iParam0 /*19*/].f_13 = 1;
	iLocal_932 = iParam0;
	if (iLocal_931 == 0)
	{
		func_282(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_496(&uLocal_935, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_614, 203.9533f, 0, 1);
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar3 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Local_617.x, Local_617.f_1);
				fVar3 = (fVar3 + 180f);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
			}
		}
		iLocal_931 = 1;
	}
}


void func_282(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x27C5D
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



int func_285(struct<3> Param0, float fParam3)//Position - 0x27E62
{
	struct<3> Var0;
	
	if (FIRE::GET_CLOSEST_FIRE_POS(&Var0, Param0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param0, 1) < fParam3)
	{
		return 1;
	}
	return 0;
}




void func_289(int iParam0)//Position - 0x27F37
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (iParam0 == 0)
	{
		Var0 = { -1116.758f, 298.4396f, 64.96789f };
		Local_870[iParam0 /*19*/].f_17 = 8f;
	}
	else if (iParam0 == 1)
	{
		Var0 = { -1128.221f, 317.221f, 65.17768f };
		Local_870[iParam0 /*19*/].f_17 = 2f;
	}
	else
	{
		Var0 = { Local_859 };
		Local_870[iParam0 /*19*/].f_17 = 4f;
	}
	fVar3 = 9999f;
	iVar5 = 0;
	while (iVar5 < Local_268)
	{
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_268[iVar5 /*5*/], 1);
		if (fVar4 < fVar3)
		{
			Local_870[iParam0 /*19*/].f_14 = { Local_268[iVar5 /*5*/] };
			fVar3 = fVar4;
		}
		iVar5++;
	}
}

void func_290()//Position - 0x27FF1
{
	GRAPHICS::_0x27CFB1B1E078CB2D();
	STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(Local_617);
	switch (iLocal_585)
	{
		case 0:
			func_34();
			if (func_299())
			{
				iLocal_588 = 0;
			}
			else
			{
				iLocal_588 = 1;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_614, 6f, 6f, 2f, false, 1, 0))
			{
				iLocal_640 = 1;
				GlobalFunc_164("JOSH3_06", 7500, 1);
				if (!HUD::DOES_BLIP_EXIST(uLocal_652))
				{
					uLocal_652 = GlobalFunc_2324(Local_614, 5, 1);
				}
			}
			else
			{
				iLocal_640 = 0;
			}
			AUDIO::PREPARE_MUSIC_EVENT("JOSH3_HOUSE_EXPLODE");
			AUDIO::LOAD_STREAM("JOSH_03_HOUSE_EXPLOSION_MASTER", 0);
			uLocal_999 = STREAMING::STREAMVOL_CREATE_SPHERE(Local_614, 50f, 12, 127);
			GlobalFunc_563(1);
			break;
		
		case 1:
			func_270();
			if (bLocal_261)
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && AUDIO::LOAD_STREAM("JOSH_03_HOUSE_EXPLOSION_MASTER", 0))
				{
					RECORDING::_0x48621C9FCA3EBD28(3);
					iLocal_1000 = 1;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
					AUDIO::PLAY_STREAM_FRONTEND();
					RECORDING::_0x293220DA1B46CEBC(3f, 12f, 0);
					iLocal_585 = 2;
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_652) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_614, 6f, 6f, 2f, true, 1, 0))
				{
					GlobalFunc_846(&uLocal_652);
					iLocal_640 = 0;
				}
				func_294();
				func_293();
				func_291();
			}
			break;
		
		case 2:
			func_22();
			GlobalFunc_846(&uLocal_652);
			GlobalFunc_846(&uLocal_654);
			break;
	}
}

void func_291()//Position - 0x28157
{
	if (!GlobalFunc_115(iLocal_635) || (GlobalFunc_115(iLocal_635) && ENTITY::GET_ENTITY_HEALTH(iLocal_635) <= 500))
	{
		func_292(10);
	}
}

void func_292(int iParam0)//Position - 0x2818D
{
	if (iLocal_589 == 0)
	{
		iLocal_586 = iParam0;
		iLocal_585 = 2;
		iLocal_584 = 14;
	}
}

void func_293()//Position - 0x281AA
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		switch (iLocal_588)
		{
			case 0:
				if (iLocal_640 == 0)
				{
					GlobalFunc_164("JOSH3_05", 7500, 1);
					iLocal_640 = 1;
				}
				if (!func_299())
				{
					iLocal_588 = 1;
					iLocal_640 = 0;
				}
				else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_617, 40f))
				{
					iLocal_588 = 2;
					iLocal_640 = 0;
				}
				break;
			
			case 1:
				if (iLocal_640 == 0)
				{
					GlobalFunc_164("JOSH3_10", 7500, 1);
					iLocal_640 = 1;
				}
				if (func_299())
				{
					iLocal_588 = 0;
					iLocal_640 = 0;
				}
				break;
			
			case 2:
				if (iLocal_640 == 0)
				{
					GlobalFunc_164("JOSH3_02", 7500, 1);
					if (!HUD::DOES_BLIP_EXIST(uLocal_654))
					{
						uLocal_654 = GlobalFunc_2324(Local_617, 5, 1);
					}
					iLocal_640 = 1;
				}
				if (!func_299())
				{
					GlobalFunc_846(&uLocal_654);
					iLocal_588 = 1;
					iLocal_640 = 0;
				}
				else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_617, 40f))
				{
					GlobalFunc_846(&uLocal_654);
					iLocal_588 = 0;
					iLocal_640 = 0;
				}
				break;
			}
	}
}

void func_294()//Position - 0x282BD
{
	switch (iLocal_642)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_295(1);
			}
			break;
		
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_295(0);
			}
			break;
	}
}

void func_295(int iParam0)//Position - 0x28301
{
	iLocal_642 = iParam0;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	func_32();
	if (iLocal_583 == 7 && iLocal_642 == 1)
	{
		func_297(1);
	}
	switch (iParam0)
	{
		case 0:
			switch (iLocal_583)
			{
				case 4:
					if (GlobalFunc_115(iLocal_655) && !HUD::DOES_BLIP_EXIST(uLocal_651))
					{
						uLocal_651 = GlobalFunc_5743(iLocal_655, 1, 5);
					}
					break;
				
				case 5:
					if (!HUD::DOES_BLIP_EXIST(uLocal_653))
					{
						uLocal_653 = GlobalFunc_2324(Local_620, 5, 1);
					}
					break;
				
				case 6:
					if (!HUD::DOES_BLIP_EXIST(uLocal_653))
					{
						uLocal_653 = GlobalFunc_2324(Local_620, 5, 1);
					}
					break;
				
				case 7:
					func_297(0);
					break;
				
				case 8:
					iLocal_640 = 0;
					break;
				
				case 10:
					GlobalFunc_164("JOSH3_07", 7500, 1);
					break;
			}
			break;
		
		case 1:
			if (iLocal_643 == 0)
			{
				GlobalFunc_164("JOSH3_11", 7500, 1);
				iLocal_643 = 1;
			}
			break;
	}
}


void func_297(int iParam0)//Position - 0x2843F
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_86 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_268)
			{
				if (HUD::DOES_BLIP_EXIST(Local_268[iVar0 /*5*/].f_3))
				{
					if (HUD::GET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3) < 255)
					{
						HUD::REMOVE_BLIP(&(Local_268[iVar0 /*5*/].f_3));
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_86 = 1;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0;
		while (iVar0 < Local_268)
		{
			if (HUD::DOES_BLIP_EXIST(Local_268[iVar0 /*5*/].f_3))
			{
				HUD::SET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_268[iVar0 /*5*/].f_3 = func_266(Local_268[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_268[iVar0 /*5*/].f_3, 1);
				HUD::SET_BLIP_SCALE(Local_268[iVar0 /*5*/].f_3, 0.4f);
				HUD::SET_BLIP_ALPHA(Local_268[iVar0 /*5*/].f_3, 0);
				HUD::SET_BLIP_COLOUR(Local_268[iVar0 /*5*/].f_3, 5);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_268[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_86 = 0;
	}
}


int func_299()//Position - 0x2857A
{
	int iVar0;
	int iVar1;
	
	iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
	iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
	if (((((iVar1 == joaat("GROUP_PISTOL") || iVar1 == joaat("GROUP_SMG")) || iVar1 == joaat("GROUP_RIFLE")) || iVar1 == joaat("GROUP_MG")) || iVar1 == joaat("GROUP_SHOTGUN")) || iVar1 == joaat("GROUP_SNIPER"))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_300()//Position - 0x285F9
{
	GRAPHICS::_0x27CFB1B1E078CB2D();
	STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(Local_617);
	switch (iLocal_585)
	{
		case 0:
			func_34();
			func_312(7);
			Local_268[0 /*5*/] = { -1116.061f, 318.2036f, 65.9778f };
			Local_268[1 /*5*/] = { -1117.048f, 318.3977f, 65.9778f };
			Local_268[2 /*5*/] = { -1118.085f, 318.594f, 65.9778f };
			Local_268[3 /*5*/] = { -1119.15f, 318.7873f, 65.9778f };
			Local_268[4 /*5*/] = { -1120.161f, 318.8961f, 65.9778f };
			Local_268[5 /*5*/] = { -1121.159f, 319.0799f, 65.9778f };
			Local_268[6 /*5*/] = { -1122.149f, 319.2221f, 65.9778f };
			Local_268[7 /*5*/] = { -1123.216f, 319.3653f, 65.9778f };
			Local_268[8 /*5*/] = { -1124.285f, 319.5186f, 65.9778f };
			Local_268[9 /*5*/] = { -1125.38f, 319.597f, 65.9778f };
			Local_268[10 /*5*/] = { -1126.385f, 319.1108f, 65.9778f };
			Local_268[11 /*5*/] = { -1126.943f, 318.2621f, 65.7698f };
			Local_268[12 /*5*/] = { -1127.52f, 317.5066f, 65.1777f };
			Local_268[13 /*5*/] = { -1128.121f, 316.6581f, 65.1777f };
			Local_268[14 /*5*/] = { -1129.03f, 316.0728f, 65.1777f };
			Local_268[15 /*5*/] = { -1129.735f, 315.2601f, 65.1777f };
			Local_268[16 /*5*/] = { -1129.858f, 314.1669f, 65.1777f };
			Local_268[17 /*5*/] = { -1129.63f, 313.1406f, 65.1777f };
			Local_268[18 /*5*/] = { -1129.709f, 312.132f, 65.1779f };
			Local_268[19 /*5*/] = { -1129.778f, 311.0894f, 65.1779f };
			Local_268[20 /*5*/] = { -1129.725f, 310.0732f, 65.1779f };
			Local_268[21 /*5*/] = { -1129.635f, 309.0656f, 65.1779f };
			Local_268[22 /*5*/] = { -1129.474f, 308.049f, 65.1779f };
			Local_268[23 /*5*/] = { -1129.38f, 307.0058f, 65.1779f };
			Local_268[24 /*5*/] = { -1129.376f, 305.9893f, 65.1779f };
			Local_268[25 /*5*/] = { -1129.29f, 304.955f, 65.2038f };
			Local_268[26 /*5*/] = { -1129.138f, 303.9323f, 65.2272f };
			Local_268[27 /*5*/] = { -1128.968f, 302.8818f, 65.2272f };
			Local_268[28 /*5*/] = { -1128.603f, 301.8776f, 65.2292f };
			Local_268[29 /*5*/] = { -1127.861f, 301.1598f, 65.2275f };
			Local_268[30 /*5*/] = { -1127.089f, 300.4057f, 65.223f };
			Local_268[31 /*5*/] = { -1126.026f, 300.0129f, 65.1661f };
			Local_268[32 /*5*/] = { -1124.979f, 299.7498f, 65.1114f };
			Local_268[33 /*5*/] = { -1123.943f, 299.6741f, 65.0805f };
			Local_268[34 /*5*/] = { -1122.922f, 299.5366f, 65.0539f };
			Local_268[35 /*5*/] = { -1121.874f, 299.3183f, 65.043f };
			Local_268[36 /*5*/] = { -1120.848f, 299.017f, 65.0175f };
			Local_268[37 /*5*/] = { -1119.785f, 298.804f, 65.0047f };
			Local_268[38 /*5*/] = { -1118.742f, 298.5806f, 65.0024f };
			Local_268[39 /*5*/] = { -1117.754f, 298.3252f, 65.0007f };
			Local_268[40 /*5*/] = { -1116.767f, 298.1601f, 64.9674f };
			Local_268[41 /*5*/] = { -1115.781f, 297.928f, 64.9265f };
			Local_268[42 /*5*/] = { -1114.785f, 297.619f, 64.8757f };
			Local_268[43 /*5*/] = { -1113.821f, 297.3486f, 64.8166f };
			Local_268[44 /*5*/] = { -1112.883f, 296.9707f, 64.7542f };
			Local_268[45 /*5*/] = { -1111.972f, 296.5717f, 64.6463f };
			Local_268[46 /*5*/] = { -1111.055f, 296.1595f, 64.5324f };
			Local_268[47 /*5*/] = { -1110.165f, 295.7042f, 64.3585f };
			func_265(1);
			GlobalFunc_164("JOSH3_04", 7500, 1);
			iLocal_851 = MISC::GET_GAME_TIMER();
			iLocal_856 = MISC::GET_GAME_TIMER();
			iLocal_842 = 0;
			iLocal_641 = 0;
			iLocal_648 = 0;
			iLocal_649 = 0;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PED::SET_CREATE_RANDOM_COPS(0);
			GlobalFunc_563(1);
			break;
		
		case 1:
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(0, 0, 0, 0, 0);
			func_294();
			func_309();
			func_307();
			func_306();
			func_305();
			func_302();
			func_291();
			func_270();
			if (iLocal_642 == 0 && func_301())
			{
				if (iLocal_649 == 0)
				{
					GlobalFunc_553(775);
				}
				RECORDING::_0x293220DA1B46CEBC(8f, 2f, 1);
				iLocal_585 = 2;
			}
			break;
		
		case 2:
			func_22();
			if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("Jo_3"))
			{
				TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Jo_3");
			}
			break;
	}
}

int func_301()//Position - 0x28B5E
{
	if (iLocal_93 == 0)
	{
		return 1;
	}
	return 0;
}

void func_302()//Position - 0x28B71
{
	if ((((iLocal_842 < 3 && (MISC::GET_GAME_TIMER() - iLocal_856) > 10000) && func_238(1)) && func_303()) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_POUR", 8, 0, 0, 0))
	{
		iLocal_842++;
		iLocal_856 = MISC::GET_GAME_TIMER();
	}
}

int func_303()//Position - 0x28BCD
{
	if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0)) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_petrolcan")) && GlobalFunc_496(&uLocal_935, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		return 1;
	}
	return 0;
}


void func_305()//Position - 0x28C34
{
	if ((iLocal_648 == 0 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_petrolcan"))
	{
		iLocal_648 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_PETROL");
	}
	if ((iLocal_648 == 1 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && !func_301())
	{
		iLocal_649 = 1;
	}
}

void func_306()//Position - 0x28C95
{
	if (bLocal_261 && !func_301())
	{
		func_292(5);
	}
}

void func_307()//Position - 0x28CB2
{
	int iVar0;
	
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
	{
		iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
		if (iLocal_583 == 7)
		{
			if (iVar0 == 0)
			{
				func_292(2);
			}
		}
		else if (iVar0 < 3000)
		{
			func_292(4);
		}
	}
	else
	{
		func_292(2);
	}
	if (iLocal_645 == 0)
	{
		if (iLocal_583 == 5 || iLocal_583 == 6)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_petrolcan"))
			{
				GlobalFunc_159("JOSH3_08", -1);
				iLocal_645 = 1;
			}
		}
	}
}


void func_309()//Position - 0x28D60
{
	if (iLocal_641 == 0)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_petrolcan"))
		{
			iLocal_641 = 1;
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_851) > 7500)
		{
			GlobalFunc_Display_Help_Text("JOSH3_03");
			iLocal_641 = 1;
		}
	}
	else if ((GlobalFunc_74("JOSH3_03") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_petrolcan"))
	{
		HUD::CLEAR_HELP(1);
	}
}



void func_312(int iParam0)//Position - 0x28E0A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_ANIM_DICT("rcmjosh3");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh");
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_656);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_656, 1);
			break;
		
		case 6:
			STREAMING::REQUEST_MODEL(iLocal_636);
			break;
		
		case 7:
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Jo_3");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(iLocal_636);
			STREAMING::REQUEST_ANIM_DICT("reaction@shellshock@unarmed");
			break;
	}
	iVar0 = 0;
	while (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh3") && STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh"))
				{
					iVar0 = 1;
				}
				break;
			
			case 4:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_656))
				{
					iVar0 = 1;
				}
				break;
			
			case 6:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_636))
				{
					iVar0 = 1;
				}
				break;
			
			case 7:
				if (((TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("Jo_3") && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::HAS_MODEL_LOADED(iLocal_636)) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@shellshock@unarmed"))
				{
					TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES("Jo_3", 2);
					iVar0 = 1;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_313()//Position - 0x28F28
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			func_317(2, "Arrived at house", 1, 0, 0, 1);
			func_312(6);
			func_251(1);
			func_316();
			if (!HUD::DOES_BLIP_EXIST(uLocal_653))
			{
				uLocal_653 = GlobalFunc_2324(Local_620, 5, 1);
				GlobalFunc_164("JOSH3_02", 7500, 1);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 7f, 0);
			iLocal_836 = 1;
			iLocal_837 = 0;
			iLocal_840 = 0;
			break;
		
		case 1:
			func_294();
			func_307();
			func_315();
			func_314();
			func_291();
			if (iLocal_642 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_620, Global_21, true, 1, 0) || func_303())
				{
					iLocal_585 = 2;
				}
			}
			break;
		
		case 2:
			func_22();
			GlobalFunc_846(&uLocal_653);
			break;
	}
}

void func_314()//Position - 0x28FF6
{
	if (func_238(1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (iLocal_836 == 0)
		{
			if (GlobalFunc_496(&uLocal_935, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				iLocal_836 = 1;
			}
			else if (GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_WALL", 8, 0, 0, 0))
			{
				iLocal_836 = 1;
			}
		}
		else if (iLocal_837 == 0)
		{
			if (iLocal_840 == 1 && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_OVER", 8, 0, 0, 0))
			{
				iLocal_837 = 1;
			}
		}
	}
}

void func_315()//Position - 0x29080
{
	if (iLocal_840 == 0 && GlobalFunc_496(&uLocal_935, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_START");
		iLocal_840 = 1;
	}
}

void func_316()//Position - 0x290B2
{
	MISC::CLEAR_AREA_OF_OBJECTS(Local_637, 2f, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_635))
	{
		iLocal_635 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_637, 1f, iLocal_636, 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_635))
	{
	}
	else
	{
		iLocal_635 = OBJECT::CREATE_OBJECT(iLocal_636, Local_637, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(iLocal_635, 170.4f);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_636);
}

void func_317(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x29115
{
	int iVar0;
	int iVar1;
	int iVar2;
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
			iVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_133(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		GlobalFunc_10926(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}





























































void func_378()//Position - 0x2E54D
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			GlobalFunc_164("JOSH3_02", 7500, 1);
			if (!HUD::DOES_BLIP_EXIST(uLocal_653))
			{
				uLocal_653 = GlobalFunc_2324(Local_620, 5, 1);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 0);
			iLocal_831 = 0;
			iLocal_832 = 0;
			iLocal_833 = 0;
			iLocal_834 = 0;
			iLocal_847 = MISC::GET_GAME_TIMER();
			iLocal_848 = -1;
			break;
		
		case 1:
			func_402();
			func_294();
			func_307();
			if (iLocal_642 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1120.503f, 341.2493f, 62.28172f, -1117.93f, 267.0199f, 74.50663f, 80f, 0, 1, 0))
				{
					iLocal_585 = 2;
				}
				else
				{
					func_401();
					func_400();
					func_399();
					func_394();
					func_379();
				}
			}
			break;
		
		case 2:
			func_22();
			STREAMING::REMOVE_ANIM_DICT("rcmjosh3");
			STREAMING::REMOVE_ANIM_DICT("rcmjosh");
			break;
	}
}

void func_379()//Position - 0x2E63A
{
	if (iLocal_833 == 0)
	{
		if ((((func_238(1) && iLocal_832 == 1) && iLocal_848 > -1) && (MISC::GET_GAME_TIMER() - iLocal_848) > 15000) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_173(&uLocal_661, 3, 0, "JOSH", 0, 1);
			if (GlobalFunc_10664(&uLocal_661, 58, "JOSH3AU", "JOSH_PHONE1", 8, 0, 0, 1))
			{
				iLocal_833 = 1;
				iLocal_835 = 0;
				iLocal_854 = -1;
				iLocal_855 = -1;
			}
		}
	}
	else
	{
		if (iLocal_834 == 0 && func_238(1))
		{
			if (iLocal_855 == -1)
			{
				iLocal_855 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_855) > 2000)
			{
				if (GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_COMM", 8, 0, 0, 0))
				{
					iLocal_834 = 1;
				}
			}
		}
		if (iLocal_835 == 0)
		{
			if (iLocal_854 == -1)
			{
				if (GlobalFunc_781())
				{
					iLocal_854 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_854) > 5000)
			{
				if (GlobalFunc_10725(58, "JOSH3_TXT", 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_835 = 1;
				}
			}
		}
	}
}















void func_394()//Position - 0x2F6AE
{
	struct<6> Var0;
	
	if (iLocal_829 == 0)
	{
		if (((((MISC::GET_GAME_TIMER() - iLocal_847) > 25000 && func_238(1)) && GlobalFunc_115(iLocal_987)) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 566.53f, -1770.4f, 28.35f, 10f)) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_REMIND", 8, 0, 0, 0))
		{
			iLocal_829 = 1;
			iLocal_830 = 0;
		}
	}
	else if (iLocal_830 == 0)
	{
		if (GlobalFunc_111())
		{
			Var0 = { GlobalFunc_560() };
			if (((MISC::ARE_STRINGS_EQUAL(&Var0, "JOSH3_REMIND") && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(iLocal_987)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_987, 1) > 30f)
			{
				GlobalFunc_5105();
				iLocal_830 = 1;
			}
		}
	}
}





void func_399()//Position - 0x2F838
{
	if (func_238(1))
	{
		if (iLocal_832 == 0)
		{
			if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_611, 100f) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_DRIVE", 8, 0, 0, 0))
			{
				iLocal_832 = 1;
				GlobalFunc_2297(&iLocal_987, 1, 0, 1);
				STREAMING::REMOVE_ANIM_DICT("rcmjosh3");
				STREAMING::REMOVE_ANIM_DICT("rcmjosh");
			}
		}
		else if (iLocal_848 == -1)
		{
			iLocal_848 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_400()//Position - 0x2F8AE
{
	if (iLocal_831 == 0 && func_238(0))
	{
		if (iLocal_646 == iLocal_647)
		{
			if (GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_FUEL3", 8, 1, 0, 0))
			{
				iLocal_831 = 1;
			}
		}
		else if (iLocal_646 == 0)
		{
			if (GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_FUEL", 8, 1, 0, 0))
			{
				iLocal_831 = 1;
			}
		}
		else if (GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_FUEL2", 8, 1, 0, 0))
		{
			iLocal_831 = 1;
		}
	}
}

void func_401()//Position - 0x2F932
{
	if ((((((iLocal_827 == 0 && func_238(1)) && GlobalFunc_115(iLocal_655)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_655, 1)) && GlobalFunc_115(iLocal_987)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_987, 1) < 20f) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_CAR", 8, 0, 0, 0))
	{
		iLocal_827 = 1;
	}
}

void func_402()//Position - 0x2F9AA
{
	if (((GlobalFunc_115(iLocal_987) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_989)) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_989)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_989) > 0.99f)
	{
		uLocal_989 = PED::CREATE_SYNCHRONIZED_SCENE(Local_990, Local_993, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_989, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_987, uLocal_989, "rcmjosh3", "josh3_leadout_loop", 8f, -8f, 21, 0, 1148846080, 0);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_987, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

void func_403()//Position - 0x2FA35
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			func_317(1, "Get in car", 0, 0, 0, 1);
			iLocal_646 = 0;
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
			{
				iLocal_646 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
			}
			if (iLocal_646 == iLocal_647)
			{
				iLocal_828 = 1;
			}
			else
			{
				func_410();
				if (!HUD::DOES_BLIP_EXIST(uLocal_651) && GlobalFunc_115(iLocal_655))
				{
					uLocal_651 = GlobalFunc_5743(iLocal_655, 1, 5);
				}
				iLocal_828 = 0;
			}
			if (GlobalFunc_115(iLocal_987))
			{
				uLocal_989 = PED::CREATE_SYNCHRONIZED_SCENE(Local_990, Local_993, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_987, uLocal_989, "rcmjosh3", "josh3_leadout_action", 8f, -8f, 21, 0, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_987, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (GlobalFunc_115(iLocal_655))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_655, 1);
			}
			iLocal_644 = 0;
			iLocal_645 = 0;
			iLocal_829 = 0;
			iLocal_827 = 0;
			iLocal_847 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			func_402();
			func_294();
			if (GlobalFunc_115(iLocal_655))
			{
				func_409();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					func_401();
					func_408();
					func_394();
					func_406();
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_655, 0))
					{
						func_405();
						func_404();
						iLocal_585 = 2;
					}
					else if (iLocal_646 == iLocal_647)
					{
						func_405();
						iLocal_585 = 2;
					}
				}
			}
			else
			{
				func_292(1);
			}
			break;
		
		case 2:
			func_22();
			GlobalFunc_846(&uLocal_651);
			break;
	}
}

void func_404()//Position - 0x2FBBF
{
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), iLocal_647, 0, 0);
}

void func_405()//Position - 0x2FBD9
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")) < 30)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 30);
		}
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 30, 0, 1);
	}
}

void func_406()//Position - 0x2FC27
{
	if (((((((((iLocal_844 < 3 && (MISC::GET_GAME_TIMER() - iLocal_857) > 5000) && func_238(1)) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(iLocal_987)) && GlobalFunc_115(iLocal_655)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_987)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_655, 0)) && GlobalFunc_156(iLocal_987, iLocal_655, 1) < 40f) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_655, PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_5130(iLocal_987, "WHATS_YOUR_PROBLEM", 3);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_655);
		iLocal_857 = MISC::GET_GAME_TIMER();
		iLocal_844++;
	}
}


void func_408()//Position - 0x2FCF7
{
	if (((iLocal_828 == 0 && func_238(0)) && GlobalFunc_115(iLocal_987)) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_GAS", 8, 1, 0, 0))
	{
		iLocal_828 = 1;
	}
}

void func_409()//Position - 0x2FD3B
{
	if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_655, 1) > 100f)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_292(3);
		}
	}
	else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_655, 1) > 50f)
	{
		if (iLocal_644 == 0)
		{
			func_410();
			iLocal_644 = 1;
		}
	}
}

void func_410()//Position - 0x2FD8B
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
	{
		GlobalFunc_164("JOSH3_13", 7500, 1);
	}
	else
	{
		GlobalFunc_164("JOSH3_01", 7500, 1);
	}
}

void func_411()//Position - 0x2FDC1
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			GlobalFunc_9623("josh_3_intp1", 0);
			iLocal_929 = 0;
			break;
		
		case 1:
			switch (iLocal_929)
			{
				case 0:
					if (func_449(1, 1093140480, 0))
					{
						if (GlobalFunc_115(iLocal_987))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_987, "Josh", 0, GlobalFunc_4946(58), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_987, "Josh", 2, GlobalFunc_4946(58), 0);
						}
						GlobalFunc_9161();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(1);
						iLocal_929++;
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						GlobalFunc_9807(567.4477f, -1761.026f, 27.16929f, 565.6401f, -1774.563f, 31.35451f, 5f, Local_604, 354.2095f, 1, 1, 1, 0, 0);
						GlobalFunc_10733(Local_604, 354.2095f, 0, 145);
						func_282(565.39f, -1772.88f, 29.77f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						GlobalFunc_79(500, 0);
						iLocal_929++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_987) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josh", 0)))
						{
							iLocal_987 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Josh", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_987, 1, 1);
							func_413();
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", GlobalFunc_4917(2)))
						{
							GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_626, 66.0379f, 0, 1);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
					}
					else
					{
						func_253(1, 1, 1, 1);
						iLocal_585 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_22();
			GlobalFunc_4923(&Local_522, 0, 1);
			break;
	}
}


void func_413()//Position - 0x300AA
{
	func_312(1);
	if (!GlobalFunc_115(iLocal_987))
	{
		while (!GlobalFunc_7967(&iLocal_987, 58, 566.1639f, -1773.817f, 29.8f, 14.4f, "JOSH", 1))
		{
			SYSTEM::WAIT(0);
		}
		uLocal_989 = PED::CREATE_SYNCHRONIZED_SCENE(Local_990, Local_993, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_987, uLocal_989, "rcmjosh3", "sit_stairs_idle", 8f, -8f, 21, 0, 1148846080, 0);
	}
	if (GlobalFunc_115(iLocal_987))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_987, 1);
		uLocal_988 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_987, uLocal_988);
		PED::SET_PED_CONFIG_FLAG(iLocal_987, 132, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_987, 0);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_987, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_987, 0);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_987, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		GlobalFunc_173(&uLocal_661, 3, iLocal_987, "JOSH", 0, 1);
	}
}




































int func_449(int iParam0, int iParam1, int iParam2)//Position - 0x33234
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_2267(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	GlobalFunc_112();
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!GlobalFunc_Has_Cutscene_Loaded())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}






void func_455()//Position - 0x33523
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			GlobalFunc_10639(83, 0);
			uLocal_996 = PED::CREATE_SYNCHRONIZED_SCENE(Local_990, Local_993, 2);
			uLocal_997 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_997, uLocal_996, "TREVOR_ENTER_ROOM_camera", "rcmjosh");
			ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(549.26f, -1773.11f, 33.73f, 10f, joaat("prop_motel_door_09"), uLocal_996, "TREVOR_ENTER_ROOM_door", "rcmjosh", 1000f, -1056964608, 0, 1148846080);
			func_282(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_996, "rcmjosh", "TREVOR_ENTER_ROOM_Trevor", 1000f, -1000f, 5, 0, 1148846080, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			iLocal_929 = 0;
			break;
		
		case 1:
			switch (iLocal_929)
			{
				case 0:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_996) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_996) > 0.99f) || GlobalFunc_4926(1000))
					{
						iLocal_929++;
					}
					break;
				
				case 1:
					if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
					{
						Local_590.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
						CAM::ADD_CAM_SPLINE_NODE(Local_590.f_4, 578.9f, -1761.4f, 31.3f, 27.6f, 2.5f, 11f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_590.f_4, 578.8f, -1761.1f, 31.4f, 27.6f, 2.5f, 11f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_590.f_4, 50f);
						CAM::SET_CAM_ACTIVE(Local_590.f_4, 1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, 1);
						GlobalFunc_9140(&Local_590, 1, 0, 2000, 1, 1, 0, 1);
						Local_590 = GlobalFunc_7719();
						uLocal_602 = GlobalFunc_7719();
						GlobalFunc_8385(&uLocal_602, 0, 0, 2, 0, 0, 0);
						iLocal_603 = GlobalFunc_208(uLocal_602);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_611, 0, 0, 1);
						iLocal_929++;
					}
					break;
				
				case 2:
					if (GlobalFunc_9196(iLocal_603, 0, "EXTRASUNNY", "cirrocumulus", &Local_590, -1082130432, 0, 1, 1065353216) || GlobalFunc_4926(1000))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
						}
						iLocal_585 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_22();
			AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			GlobalFunc_10639(83, 1);
			break;
	}
}



































void func_490()//Position - 0x38359
{
	switch (iLocal_585)
	{
		case 0:
			func_34();
			GlobalFunc_4923(&Local_522, 0, 1);
			if (GlobalFunc_115(Local_522.f_28[0]))
			{
				iLocal_987 = Local_522.f_28[0];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_987, 1, 1);
			}
			func_413();
			func_494();
			uLocal_989 = PED::CREATE_SYNCHRONIZED_SCENE(Local_990, Local_993, 2);
			if (GlobalFunc_115(iLocal_987))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_987, uLocal_989, "rcmjosh3", "josh3_lead_in", 1000f, -8f, 21, 0, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_987, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_987, 0, 0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_623, 161.173f, 0, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				GlobalFunc_79(500, 0);
			}
			CUTSCENE::REQUEST_CUTSCENE("josh_3_intp1", 8);
			iLocal_826 = 0;
			iLocal_845 = MISC::GET_GAME_TIMER();
			iLocal_846 = -1;
			break;
		
		case 1:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_611, 1) > 100f)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_292(9);
				}
			}
			else
			{
				func_492();
				func_491();
				func_406();
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_989) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_989)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_989) > 0.99f) && GlobalFunc_115(iLocal_987))
				{
					uLocal_989 = PED::CREATE_SYNCHRONIZED_SCENE(Local_990, Local_993, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_989, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_987, uLocal_989, "rcmjosh3", "josh3_curb_wait_loop", 8f, -8f, 21, 0, 1148846080, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_987, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (!GlobalFunc_115(iLocal_655))
				{
					func_292(1);
				}
			}
			break;
		
		case 2:
			func_22();
			GlobalFunc_846(&uLocal_650);
			break;
	}
}

void func_491()//Position - 0x38533
{
	if ((((((iLocal_846 > -1 && (MISC::GET_GAME_TIMER() - iLocal_846) > 15000) && func_238(1)) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(iLocal_987)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_987, 1) < 20f) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_HANG", 8, 0, 0, 0))
	{
		iLocal_846 = MISC::GET_GAME_TIMER();
	}
}

void func_492()//Position - 0x385AF
{
	if (iLocal_826 == 0)
	{
		if ((func_238(1) && GlobalFunc_115(iLocal_987)) && GlobalFunc_10618(&uLocal_661, "JOSH3AU", "JOSH3_INT_LI", 8, 0, 0, 0))
		{
			RECORDING::_0x293220DA1B46CEBC(2f, 5f, 1);
			iLocal_826 = 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_611, Global_21, HUD::DOES_BLIP_EXIST(uLocal_650), 1, 0))
	{
		GlobalFunc_4935();
		iLocal_585 = 2;
	}
	else if (iLocal_845 > -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_845) > 2000 && !GlobalFunc_111())
		{
			GlobalFunc_164("JOSH3_09", 7500, 1);
			if (!HUD::DOES_BLIP_EXIST(uLocal_650))
			{
				uLocal_650 = GlobalFunc_2324(Local_611, 5, 0);
			}
			iLocal_845 = -1;
			iLocal_846 = MISC::GET_GAME_TIMER();
		}
	}
}


void func_494()//Position - 0x386AD
{
	if (!GlobalFunc_115(iLocal_655))
	{
		if (GlobalFunc_115(Local_522.f_35[0]))
		{
			iLocal_655 = Local_522.f_35[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_655, 1, 1);
		}
		else
		{
			func_312(4);
			func_495(&iLocal_655, iLocal_656, Local_657, 335.3252f, iLocal_660);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_656);
	if (GlobalFunc_115(iLocal_655))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_655, iLocal_660);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_655, 0, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_655, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_655, 2);
	}
}

void func_495(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x38737
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		GlobalFunc_2888(iParam1);
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
		if (iParam6 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam6);
		}
	}
}


void func_497()//Position - 0x3879C
{
	if (iLocal_583 < (15 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_987))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_987))
			{
				func_292(6);
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_987))
				{
					func_292(7);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_987, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_292(7);
				}
				else if (func_498(iLocal_987, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					func_292(8);
				}
			}
		}
	}
}

int func_498(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x3880F
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
		else if (func_499(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0, float fParam1)//Position - 0x388CA
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
				if (func_500(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_500(int iParam0, float fParam1)//Position - 0x38940
{
	return func_501(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_501(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x38958
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_508(iParam0, iParam1);
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
		iVar4 = func_504();
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



int func_504()//Position - 0x38C0A
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




int func_508(int iParam0, int iParam1)//Position - 0x38D21
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








void func_516(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x39141
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

















void func_533(int iParam0)//Position - 0x39BDA
{
	func_569(1, 1);
	iLocal_589 = 1;
	FIRE::STOP_FIRE_IN_RANGE(Local_617, 100f);
	func_566(1, 0);
	MISC::CLEAR_AREA(Local_617, 100f, 1, 0, 0, 0);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	}
	switch (iParam0)
	{
		case 0:
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_623, 161.173f, 0, 1);
			}
			GlobalFunc_10733(Local_604, 354.2095f, 0, 145);
			GlobalFunc_7621(22, 0, 0, 1, 0);
			GlobalFunc_7621(23, 0, 0, 1, 0);
			func_413();
			func_494();
			iLocal_584 = 1;
			break;
		
		case 1:
			GlobalFunc_10733(Local_604, 354.2095f, 0, 145);
			GlobalFunc_7621(22, 0, 0, 1, 0);
			GlobalFunc_7621(23, 0, 0, 1, 0);
			func_413();
			func_494();
			iLocal_584 = 3;
			break;
		
		case 2:
			GlobalFunc_10733(Local_604, 354.2095f, 0, 145);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_626, 66.0379f, 0, 1);
				}
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
			}
			func_413();
			func_494();
			iLocal_584 = 4;
			break;
		
		case 3:
			GlobalFunc_10733(Local_607, 101.2209f, 0, 145);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_629, 40.6354f, 0, 1);
			}
			GlobalFunc_7621(22, 0, 0, 1, 0);
			GlobalFunc_7621(23, 0, 0, 1, 0);
			func_251(1);
			func_404();
			func_405();
			func_312(6);
			SYSTEM::WAIT(1000);
			func_316();
			iLocal_584 = 6;
			break;
		
		case 4:
			GlobalFunc_10733(Local_607, 101.2209f, 0, 145);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -1112.791f, 317.5085f, 65.9778f, 86.0521f, 0, 1);
			}
			GlobalFunc_7621(22, 0, 0, 1, 0);
			GlobalFunc_7621(23, 0, 0, 1, 0);
			func_251(1);
			func_404();
			func_405();
			func_312(6);
			SYSTEM::WAIT(1000);
			func_316();
			iLocal_584 = 7;
			break;
		
		case 5:
			GlobalFunc_10733(Local_607, 101.2209f, 0, 145);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_614, 203.9533f, 0, 1);
			}
			GlobalFunc_7621(22, 1, 0, 1, 0);
			GlobalFunc_7621(23, 1, 0, 1, 0);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", 1, 1);
			func_251(0);
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_584 = 10;
			break;
		
		case 6:
			GlobalFunc_10733(Local_607, 101.2209f, 0, 145);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_632, 24.0453f, 0, 1);
			}
			iLocal_584 = 13;
			break;
	}
	func_541();
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	if (iParam0 == 4)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_START");
	}
	else if (iParam0 == 5)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_RESTART1");
	}
	GlobalFunc_4967(0, -1, 1);
	if (iParam0 == 6)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GlobalFunc_79(500, 1);
	}
	if (iParam0 == 1)
	{
		func_534(1, 0, 1);
	}
	else
	{
		func_534(1, 1, 1);
	}
	iLocal_585 = 2;
}

void func_534(int iParam0, int iParam1, int iParam2)//Position - 0x39F48
{
	func_253(0, 0, iParam2, 1);
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







void func_541()//Position - 0x3A1C9
{
	if (GlobalFunc_7698())
	{
		GlobalFunc_8368();
		while (!GlobalFunc_8367())
		{
			SYSTEM::WAIT(0);
		}
		if (iLocal_584 < 6)
		{
			uLocal_610 = GlobalFunc_10065(Local_604, 354.2095f);
		}
		else
		{
			uLocal_610 = GlobalFunc_10065(Local_607, 101.2209f);
		}
	}
}

























void func_566(int iParam0, int iParam1)//Position - 0x3B2DB
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4956();
	GlobalFunc_129(&iLocal_635, 0);
	func_32();
	func_11(iParam0);
	func_18(iParam0);
	func_10();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_656);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_656, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_636);
	if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("Jo_3"))
	{
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Jo_3");
	}
	STREAMING::REMOVE_ANIM_DICT("rcmjosh3");
	STREAMING::REMOVE_ANIM_DICT("rcmjosh");
	STREAMING::REMOVE_ANIM_DICT("reaction@shellshock@unarmed");
	STREAMING::REMOVE_PTFX_ASSET();
	CAM::DESTROY_ALL_CAMS(0);
	func_265(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::STOP_SOUND(uLocal_865);
	AUDIO::STOP_SOUND(uLocal_866);
	AUDIO::STOP_STREAM();
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_JOSH_HOUSE_BURNING", 0, 0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	AUDIO::TRIGGER_MUSIC_EVENT("JOSH3_MISSION_FAIL");
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_999))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_999);
	}
	GlobalFunc_563(0);
	if (iParam1 == 1)
	{
		GlobalFunc_200(&uLocal_661, 2);
		GlobalFunc_200(&uLocal_661, 3);
		func_264();
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_998, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 1, 1);
		GlobalFunc_7621(23, 0, 0, 1, 0);
	}
}



void func_569(bool bParam0, bool bParam1)//Position - 0x3B482
{
	if (bParam0)
	{
		func_570(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_282(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_570(bool bParam0, int iParam1, int iParam2)//Position - 0x3B4B5
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
			func_253(iParam1, iParam2, 1, 1);
		}
	}
}



void func_573(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3B5D3
{
	GlobalFunc_7246(uParam0, iParam1);
	GlobalFunc_8321(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}









void func_582()//Position - 0x3B734
{
	iLocal_586 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("JOSH3", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_656 = joaat("felon2");
	iLocal_636 = joaat("prop_bbq_1");
	Local_859 = { -1116.123f, 318.0682f, 65.9778f };
	Local_862 = { 0f, 0f, 350f };
	PED::SET_PED_NON_CREATION_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f);
	uLocal_998 = PED::ADD_SCENARIO_BLOCKING_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 0, 1, 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1140.223f, 271.745f, 50f, -1082.403f, 344.8568f, 80f);
	MISC::CLEAR_AREA(Local_617, 100f, 1, 0, 0, 0);
	GlobalFunc_7621(22, 0, 0, 1, 0);
	GlobalFunc_7621(23, 0, 0, 1, 0);
	WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), &iLocal_647);
	iLocal_86 = 0;
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
	GlobalFunc_10639(83, 1);
	GlobalFunc_173(&uLocal_661, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	GlobalFunc_500(&uLocal_935);
	GlobalFunc_499(&uLocal_935, -1094.634f, 292.479f, 63.0398f);
	GlobalFunc_499(&uLocal_935, -1133.514f, 285.0669f, 65.2301f);
	GlobalFunc_499(&uLocal_935, -1139.651f, 304.8385f, 66.4302f);
	GlobalFunc_499(&uLocal_935, -1149.986f, 331.3831f, 68.1542f);
	GlobalFunc_499(&uLocal_935, -1092.243f, 334.3243f, 65.9754f);
	GlobalFunc_498(&uLocal_935);
	iLocal_844 = 0;
	iLocal_857 = MISC::GET_GAME_TIMER();
}






void func_588()//Position - 0x3BC4E
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_566(0, 1);
	}
	func_573(&Local_522, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






















