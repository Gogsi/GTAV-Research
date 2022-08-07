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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	char* sLocal_41 = NULL;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 25;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 2;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
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
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 4;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 4;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 4;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 4;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 4;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 4;
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
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<485> Local_157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	iLocal_35 = 202;
	iLocal_36 = 201;
	iLocal_37 = 24;
	iLocal_38 = 202;
	iLocal_39 = 25;
	sLocal_41 = "";
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_45 = -1;
	iLocal_47 = -1;
	iLocal_48 = -1;
	iLocal_155 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_364();
	}
	GlobalFunc_501(2);
	func_351(&(Local_157.f_1), GlobalFunc_3003(Global_86396[8 /*19*/], Global_86396[9 /*19*/]));
	GlobalFunc_4437(&Local_157, 4);
	GlobalFunc_505(4, 0, 1);
	GlobalFunc_4448(0);
	while (!GlobalFunc_485(3))
	{
		if (!Global_68514 && !GlobalFunc_39(14))
		{
			GlobalFunc_10813(&Local_157, 10f, 18f);
			GlobalFunc_11017(&Local_157);
			func_202();
			func_144();
			if (GlobalFunc_4938(0) || MISC::IS_BIT_SET(Local_157.f_449, 2))
			{
				func_68(&Local_157);
				GlobalFunc_11016(&Local_157);
				GlobalFunc_4413(&Local_157);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2a")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2b")) > 0)
		{
			GlobalFunc_4412();
		}
		if (GlobalFunc_485(34))
		{
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[4], 9))
				{
					GlobalFunc_505(4, 9, 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[4], 9))
			{
				GlobalFunc_505(4, 9, 0);
			}
		}
		else if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[4], 9))
		{
			GlobalFunc_505(4, 9, 0);
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_492(2);
	func_364();
}




































































void func_68(var uParam0)//Position - 0x2688
{
	if (MISC::IS_BIT_SET(uParam0->f_449, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)//Position - 0x26A3
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	bVar0 = false;
	if (!MISC::IS_BIT_SET(uParam0->f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_116(0))
			{
				if (GlobalFunc_9039(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						fVar5 = MISC::ABSF((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = MISC::ABSF((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = MISC::ABSF((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = MISC::ABSF((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				GlobalFunc_7016(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0);
			}
			else if (GlobalFunc_5079(uParam0->f_451, 1))
			{
				GlobalFunc_5420(&(uParam0->f_451));
				GlobalFunc_10895(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			GlobalFunc_5420(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = GlobalFunc_892(1, *uParam0);
		func_78(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			GlobalFunc_8904(uParam0, 0);
		}
	}
}









void func_78(var uParam0)//Position - 0x2C81
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_466))
	{
		GlobalFunc_6454(uParam0);
	}
	uParam0->f_466 = sVar0;
	GlobalFunc_5077();
	func_102(uParam0);
	GlobalFunc_10894(uParam0);
	if (uParam0->f_464 == 1)
	{
		GlobalFunc_8905(uParam0);
	}
	if (GlobalFunc_1545())
	{
		GlobalFunc_8246(uParam0);
	}
	bVar1 = uParam0->f_454 > MISC::GET_GAME_TIMER();
	GlobalFunc_4995(&(uParam0->f_649), MISC::IS_BIT_SET(uParam0->f_449, 4), (MISC::IS_BIT_SET(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1);
	if (MISC::IS_BIT_SET(uParam0->f_449, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!MISC::IS_BIT_SET(uParam0->f_449, 11) && !MISC::IS_BIT_SET(uParam0->f_449, 10)) && !GlobalFunc_111()) && uParam0->f_483 == 0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(0);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (!MISC::IS_BIT_SET(uParam0->f_449, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}
}
























void func_102(var uParam0)//Position - 0x4007
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
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
	
	uParam0->f_453++;
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		GlobalFunc_6454(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_449, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)) || (PAD::_IS_USING_KEYBOARD(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39))))
		{
			GlobalFunc_4956();
			if (MISC::IS_BIT_SET(uParam0->f_449, 12))
			{
				MISC::SET_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
				MISC::CLEAR_BIT(&(uParam0->f_449), 10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 12);
		}
	}
	GlobalFunc_255(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = GlobalFunc_254((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = GlobalFunc_254((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_449), 4);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_449, 10))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_449, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_457) > 25000)
					{
						GlobalFunc_4414(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (MISC::IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							GlobalFunc_6454(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (MISC::IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							GlobalFunc_6454(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!GlobalFunc_111() || MISC::IS_BIT_SET(uParam0->f_449, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!GlobalFunc_111())
								{
									if (!MISC::IS_BIT_SET(uParam0->f_449, 9))
									{
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										iVar0 = GlobalFunc_656(*uParam0);
										if (iVar0 != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											GlobalFunc_6455(uParam0, 1);
											GlobalFunc_6456(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											GlobalFunc_6456(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_SAVE_DATA.HEIST_CHOICE_HELP_DISPLAYED_ARRAY[*uParam0] = 1;
											HUD::CLEAR_HELP(0);
										}
									}
								}
								break;
							
							case 2:
								if (!GlobalFunc_892(4, *uParam0))
								{
									iVar0 = GlobalFunc_656(*uParam0);
									iVar1 = GlobalFunc_597(iVar0);
									if (uParam0->f_450 < Global_86396[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										GlobalFunc_6455(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									GlobalFunc_2196(4, *uParam0, 1);
									if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
									{
										GlobalFunc_6467(*uParam0);
									}
								}
								else
								{
									GlobalFunc_2196(5, *uParam0, 1);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = GlobalFunc_656(*uParam0);
								iVar1 = GlobalFunc_597(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_86396[iVar1 /*19*/])
								{
									if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2] == 0 || GlobalFunc_595(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2]) != Global_86396[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_86242[iVar3 /*5*/] != Global_86396[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset, iVar3))
													{
														bVar4 = false;
													}
													if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (GlobalFunc_6460(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								GlobalFunc_6455(uParam0, 1);
								GlobalFunc_6464(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = GlobalFunc_656(*uParam0);
								iVar1 = GlobalFunc_597(iVar0);
								if (uParam0->f_450 > 0)
								{
									GlobalFunc_6455(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
									Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
									GlobalFunc_10540(uParam0, uParam0->f_450, iVar6);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = MISC::GET_GAME_TIMER();
								}
								else if (!GlobalFunc_485(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											iVar7++;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												GlobalFunc_505(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										GlobalFunc_6455(uParam0, 1);
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										uParam0->f_465 = 0;
										GlobalFunc_585(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = GlobalFunc_656(*uParam0);
									iVar1 = GlobalFunc_597(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
									Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
									GlobalFunc_10893(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											GlobalFunc_505(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									GlobalFunc_3026(8, 0);
									GlobalFunc_2196(5, 1, 0);
									uParam0->f_427 = 0;
									GlobalFunc_6455(uParam0, 1);
									uParam0->f_456 = MISC::GET_GAME_TIMER();
									GlobalFunc_10893(uParam0, 3, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = GlobalFunc_656(*uParam0);
		iVar1 = GlobalFunc_597(iVar0);
		if (uParam0->f_450 >= Global_86396[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GlobalFunc_6457(uParam0, 0, 1);
			GlobalFunc_10893(uParam0, 4, 0);
		}
		else
		{
			if (!MISC::IS_BIT_SET(uParam0->f_449, 17))
			{
				iVar10 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
				Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
				GlobalFunc_10540(uParam0, uParam0->f_450, iVar10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_449), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!GlobalFunc_74(&(uParam0->f_1.f_108[0 /*4*/])) && !GlobalFunc_74(&(uParam0->f_1.f_108[1 /*4*/]))) && !GlobalFunc_74(&(uParam0->f_1.f_20[0 /*4*/]))) && !GlobalFunc_74(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680))
		{
			iVar11 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
			iVar1 = GlobalFunc_4417(*uParam0, iVar11);
			iVar0 = GlobalFunc_656(*uParam0);
			GlobalFunc_3026(iVar0, iVar1);
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				GlobalFunc_4425(*uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			GlobalFunc_6464(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				GlobalFunc_505(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				GlobalFunc_4423(uParam0, iVar12);
				if (iVar12 < Global_86396[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				GlobalFunc_2196(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			HUD::CLEAR_HELP(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681))
		{
			iVar13 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
			iVar0 = GlobalFunc_656(*uParam0);
			iVar1 = GlobalFunc_597(iVar0);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
			GlobalFunc_6466(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = MISC::GET_GAME_TIMER();
			uParam0->f_457 = uParam0->f_456;
			MISC::SET_BIT(&(uParam0->f_449), 10);
			if (!GlobalFunc_74(&(uParam0->f_1.f_108[0 /*4*/])) && !GlobalFunc_74(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				HUD::CLEAR_HELP(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682))
		{
			iVar15 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		GlobalFunc_6465(uParam0, uParam0->f_427);
	}
}










































void func_144()//Position - 0x7081
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_485(25))
	{
		iVar0 = GlobalFunc_597(GlobalFunc_656(4));
		if (iVar0 != iLocal_48)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			switch (iVar0)
			{
				case 8:
					sLocal_41 = "BS_2A_INT";
					break;
				
				case 9:
					sLocal_41 = "BS_2B_INT";
					break;
			}
			iLocal_48 = iVar0;
		}
		if (iLocal_48 != -1)
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_41, 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (GlobalFunc_485(26))
	{
		if (GlobalFunc_485(25))
		{
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_41))
			{
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "Michael", 0, joaat("player_zero"), 0);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_105))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "Michael", 0, joaat("player_zero"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_108))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "Lester", 0, joaat("ig_lestercrest"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_106))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "Franklin", 0, joaat("player_one"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_107))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "Trevor", 0, joaat("player_two"), 0);
				}
				GlobalFunc_7632(1);
				GlobalFunc_2032(1);
				GlobalFunc_8316(1, 1, 1, 0);
				iVar1 = 0;
				while (iVar1 < GlobalFunc_5882(4))
				{
					if (GlobalFunc_5133(4, iVar1) == 12)
					{
						GlobalFunc_7682(-837794877);
					}
					iVar1++;
				}
				if (bLocal_46)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 256;
				}
				CUTSCENE::START_CUTSCENE(iVar2);
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				GlobalFunc_585(25, 0);
				iLocal_43 = MISC::GET_GAME_TIMER();
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iLocal_43 = iLocal_43;
			GlobalFunc_5077();
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
				{
					PED::DELETE_PED(&iLocal_108);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_105))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_105, -668482597, 0, 1, 0);
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					}
				}
				GlobalFunc_2224(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
				{
					PED::DELETE_PED(&iLocal_106);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_107))
				{
					PED::DELETE_PED(&iLocal_107);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
		}
		else if (iLocal_44 == -1 && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			iLocal_44 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_44 || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_54750 = 0;
				Global_90001 = 0;
				GlobalFunc_4907();
			}
			GlobalFunc_7632(0);
			GlobalFunc_8316(0, 1, 1, 0);
			GlobalFunc_3035();
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 77);
			GlobalFunc_9523(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 77);
			GlobalFunc_1997(&iLocal_45);
			MISC::CLEAR_BIT(&uLocal_42, 3);
			GlobalFunc_585(26, 0);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_154, 0);
			if (iLocal_155 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_155))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_155);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 1, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			GlobalFunc_8250(4, 0);
		}
	}
	else if (!GlobalFunc_485(25))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_41))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
}


























































void func_202()//Position - 0xD1BB
{
	if (GlobalFunc_485(24))
	{
		if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			if (!MISC::IS_BIT_SET(uLocal_42, 3))
			{
				if (GlobalFunc_230(77))
				{
					if (GlobalFunc_4938(0))
					{
						if (GlobalFunc_7905(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							MISC::SET_BIT(&uLocal_42, 3);
							GlobalFunc_3027();
							uLocal_154 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 0, 1, 1, 1);
							iLocal_155 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_157.f_1.f_394, Local_157.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
							PED::SET_PED_NON_CREATION_AREA(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397);
							PATHFIND::SET_PED_PATHS_IN_AREA(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 0, 0);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								PLAYER::SET_MAX_WANTED_LEVEL(0);
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_42, 3))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_323();
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							iLocal_108 = Global_86864.f_9[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, 0, 1);
							PED::DELETE_PED(&iLocal_108);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "LESTER", 2, joaat("ig_lestercrest"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "LESTER", 2, joaat("ig_lestercrest"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
						{
							uLocal_109 = Global_86864.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_109, 0, 1);
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_109))
							{
								ENTITY::DETACH_ENTITY(iLocal_109, 1, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_109, "WALKINGSTICK_LESTER", 1, joaat("ig_lestercrest"), 0);
						}
						switch (GlobalFunc_8315())
						{
							case 0:
								iLocal_105 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "MICHAEL", 0, joaat("player_zero"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "FRANKLIN", 2, joaat("player_one"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "TREVOR", 2, joaat("player_two"), 0);
								break;
							
							case 1:
								iLocal_106 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "MICHAEL", 2, joaat("player_zero"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "FRANKLIN", 0, joaat("player_one"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "TREVOR", 2, joaat("player_two"), 0);
								MISC::SET_BIT(&uLocal_42, 4);
								break;
							
							case 2:
								iLocal_107 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_105, "MICHAEL", 2, joaat("player_zero"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "FRANKLIN", 2, joaat("player_one"), 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_107, "TREVOR", 0, joaat("player_two"), 0);
								MISC::SET_BIT(&uLocal_42, 4);
								break;
						}
						STREAMING::REQUEST_MODEL(joaat("player_zero"));
						GlobalFunc_7632(1);
						GlobalFunc_8316(1, 1, 1, 0);
						GlobalFunc_562(77);
						ENTITY::CREATE_MODEL_HIDE(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
						GlobalFunc_173(&(Local_157.f_484), 0, 0, "MICHAEL", 1, 1);
						GlobalFunc_173(&(Local_157.f_484), 1, 0, "FRANKLIN", 1, 1);
						GlobalFunc_173(&(Local_157.f_484), 2, 0, "TREVOR", 1, 1);
						GlobalFunc_173(&(Local_157.f_484), 3, 0, "LESTER", 1, 1);
						if (GlobalFunc_8315() == 0)
						{
							bLocal_46 = true;
						}
						else
						{
							bLocal_46 = false;
						}
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						GlobalFunc_5077();
						if (!MISC::IS_BIT_SET(uLocal_42, 6))
						{
							MISC::CLEAR_AREA(124.0681f, -1294.762f, 28.2695f, 1.5f, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_42, 6);
						}
						switch (iLocal_156)
						{
							case 0:
								GlobalFunc_6791(1, 0);
								GlobalFunc_6791(2, 0);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_103))
								{
									if (GlobalFunc_6795(iLocal_103, 0, 0))
									{
										iLocal_156 = 2;
									}
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iLocal_103))
								{
									VEHICLE::DELETE_VEHICLE(&iLocal_103);
								}
								if (iLocal_156 != 2)
								{
									STREAMING::REQUEST_MODEL(joaat("tailgater"));
									iLocal_156 = 1;
								}
								break;
							
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("tailgater")))
								{
									GlobalFunc_6791(0, 0);
									GlobalFunc_10063(133.9532f, -1311.404f, 28.08922f, 127.847f, -1315.542f, 32.11665f, 3.3f, 124.97f, -1321.87f, 28f, 37.74f, GlobalFunc_625(), 1, 0, 1, 0, 0);
									GlobalFunc_9756(&iLocal_104, 0, 130.56f, -1313.66f, 28.74f, 124.66f, 0, 0);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_104);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
									GlobalFunc_9754(iLocal_104, 0f, 0f, 0f, 0f, 24, 0);
									iLocal_156 = 2;
								}
								break;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0)))
							{
								iLocal_105 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_105, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_105, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_105, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_105, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_105, 96.46f, -1291.44f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_105, 299.3742f);
								GlobalFunc_173(&(Local_157.f_484), 0, iLocal_105, "MICHAEL", 1, 1);
								if (MISC::IS_BIT_SET(uLocal_42, 4))
								{
									iLocal_110[0] = iLocal_105;
									GlobalFunc_9019(&iLocal_110, 0);
									func_206(&iLocal_110, 0, 0, 0);
								}
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", joaat("player_one")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0)))
							{
								iLocal_106 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_106, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_106, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_106, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_106, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_106, 97.116f, -1288.588f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_106, 246.1162f);
								GlobalFunc_173(&(Local_157.f_484), 1, iLocal_106, "FRANKLIN", 1, 1);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", joaat("player_two")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0)))
							{
								iLocal_107 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_107, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_107, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_107, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_107, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_107, 99.1774f, -1292.069f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_107, 20.8497f);
								GlobalFunc_173(&(Local_157.f_484), 2, iLocal_107, "TREVOR", 1, 1);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0)))
							{
								iLocal_108 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0));
								PED::SET_PED_CONFIG_FLAG(iLocal_108, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_108, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_108, 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_108, 96.2331f, -1289.744f, 28.2688f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_108, 223.2882f);
								GlobalFunc_173(&(Local_157.f_484), 3, iLocal_108, "LESTER", 1, 1);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							if (!MISC::IS_BIT_SET(uLocal_42, 2))
							{
								func_205();
								MISC::SET_BIT(&uLocal_42, 2);
							}
							if (iLocal_156 == 1)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
							}
							ENTITY::REMOVE_MODEL_HIDE(95.19f, -1293.499f, 28.2672f, 1.5f, joaat("v_club_officechair"), 0);
							GlobalFunc_585(24, 0);
						}
					}
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uLocal_42, 3))
		{
			if (GlobalFunc_4938(0))
			{
				if (GlobalFunc_7905(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&uLocal_42, 3);
				}
			}
		}
		else
		{
			GlobalFunc_173(&(Local_157.f_484), 0, 0, "MICHAEL", 1, 1);
			GlobalFunc_173(&(Local_157.f_484), 1, 0, "FRANKLIN", 1, 1);
			GlobalFunc_173(&(Local_157.f_484), 2, 0, "TREVOR", 1, 1);
			GlobalFunc_173(&(Local_157.f_484), 3, 0, "LESTER", 1, 1);
			func_205();
			GlobalFunc_585(24, 0);
		}
	}
	else if (GlobalFunc_230(77) || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (iLocal_47 != -1)
		{
			GlobalFunc_6473(&iLocal_47);
		}
	}
}



void func_205()//Position - 0xDA83
{
	GlobalFunc_2196(1, 4, 1);
	GlobalFunc_2196(2, 4, 1);
	GlobalFunc_11017(&Local_157);
	func_68(&Local_157);
}

int func_206(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xDAA5
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
			GlobalFunc_9014(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(iParam0->f_7);
		GlobalFunc_9014((*iParam0)[iParam0->f_7], 0);
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
		GlobalFunc_8907(iVar2);
		func_213(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}







void func_213(int iParam0)//Position - 0xE181
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_214(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_214(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_214(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_214(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_214(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_214(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_214(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_214(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_214(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_214(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_214(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_214(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_214(50, 0);
			break;
	}
}

void func_214(int iParam0, int iParam1)//Position - 0xE311
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
			func_216(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_216(int iParam0)//Position - 0xE458
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
		GlobalFunc_8355(iParam0, &Var0);
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











































































































void func_323()//Position - 0x1BD57
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
	GlobalFunc_8631(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar0 /*74*/]), &(Global_89734[iVar0 /*3*/]), &(Global_89744[iVar0]), &(Global_89726[iVar0]), &(Global_2544853[iVar0]));
}




























void func_351(var uParam0, var uParam1)//Position - 0x1D1CC
{
	GlobalFunc_4447(uParam0, 0, "HEIST_FINALE", "BOARD6", "FHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, 96.47825f, -1292.353f, 29.76875f, 5f, 5.5f, 6f);
	GlobalFunc_4446(uParam0, 1500, 540, 3.45f, 1.34f, 3.18f, 1.79f, 2.58f, 747, 260, 620, 442, 490, 445, 360, 438, 230, 440, 100, 435, 872, 398, 20, 40, 1150, 415);
	GlobalFunc_4445(uParam0, 18f, 17f, 19f);
	GlobalFunc_4444(uParam0, "", "", "", "", "FHP16", "", "FHP17", "FHP19");
	GlobalFunc_4443(uParam0, 1, "CRW_GM", "");
	GlobalFunc_4443(uParam0, 2, "CRW_KA", "");
	GlobalFunc_4443(uParam0, 3, "CRW_HW", "");
	GlobalFunc_4443(uParam0, 4, "CRW_NR", "");
	GlobalFunc_4443(uParam0, 5, "CRW_DJ", "");
	GlobalFunc_4443(uParam0, 6, "CRW_PH", "");
	GlobalFunc_4443(uParam0, 7, "CRW_CF", "");
	GlobalFunc_4443(uParam0, 8, "CRW_ET", "");
	GlobalFunc_4443(uParam0, 9, "CRW_KD", "");
	GlobalFunc_4443(uParam0, 10, "CRW_PM", "CRM_PM");
	GlobalFunc_4443(uParam0, 11, "", "CRM_CH");
	GlobalFunc_4443(uParam0, 12, "CRW_RL", "CRM_RL");
	GlobalFunc_4443(uParam0, 13, "CRW_TM", "CRM_TM");
	GlobalFunc_4442(uParam0, 24, "FHP18");
	GlobalFunc_4442(uParam0, 25, "FHP18b");
	GlobalFunc_4442(uParam0, 28, "FHP18c");
	GlobalFunc_4442(uParam0, 29, "FHP18d");
	GlobalFunc_4442(uParam0, 30, "FHP18e");
	GlobalFunc_4442(uParam0, 26, "FHP18f");
	GlobalFunc_4442(uParam0, 27, "FHP18g");
	GlobalFunc_4442(uParam0, 31, "FHP18h");
	GlobalFunc_4442(uParam0, 22, "FHP18i");
	GlobalFunc_4442(uParam0, 23, "FHP18j");
	GlobalFunc_4442(uParam0, 20, "FHP18k");
	GlobalFunc_4441(uParam0, 0, 1, 0, 0);
	GlobalFunc_4441(uParam0, 1, 1, 0, 0);
	GlobalFunc_4441(uParam0, 2, 1, 0, 0);
	GlobalFunc_4441(uParam0, 3, 1, 0, 0);
	GlobalFunc_4441(uParam0, 4, 1, 0, 0);
	GlobalFunc_4441(uParam0, 5, 1, 0, 0);
	GlobalFunc_4441(uParam0, 6, 1, 0, 0);
	GlobalFunc_4441(uParam0, 7, 1, 0, 0);
	GlobalFunc_4441(uParam0, 8, 1, 0, 0);
	GlobalFunc_4441(uParam0, 9, 1, 0, 0);
	GlobalFunc_4441(uParam0, 10, 1, 0, 0);
	GlobalFunc_4441(uParam0, 11, 1, 0, 0);
	GlobalFunc_4441(uParam0, 12, 1, 0, 0);
	GlobalFunc_4441(uParam0, 13, 1, 0, 0);
	GlobalFunc_4441(uParam0, 14, 1, 0, 0);
	GlobalFunc_4441(uParam0, 15, 1, 0, 0);
	GlobalFunc_4441(uParam0, 16, 1, 0, 0);
	GlobalFunc_4441(uParam0, 17, 1, 0, 0);
	GlobalFunc_4441(uParam0, 18, 1, 0, 0);
	GlobalFunc_4441(uParam0, 19, 1, 0, 0);
	GlobalFunc_4441(uParam0, 20, 1, 0, 0);
	GlobalFunc_4441(uParam0, 21, 1, 0, 0);
	GlobalFunc_4440(uParam0, 0, 0, "H_TD_RES");
	GlobalFunc_4440(uParam0, 0, 0, "H_TD_FLY");
	GlobalFunc_4440(uParam0, 0, 2, "H_TD_PLAN");
	GlobalFunc_4440(uParam0, 0, 10, "H_TD_CREW");
	GlobalFunc_4440(uParam0, 3, 5, "H_TD_STNG");
	GlobalFunc_4440(uParam0, 3, 6, "H_TD_CARS");
	GlobalFunc_4440(uParam0, 4, 7, "H_TD_DRIL");
	GlobalFunc_4440(uParam0, 4, 8, "H_TD_TRAI");
	GlobalFunc_4440(uParam0, 4, 9, "H_TD_GETA");
	GlobalFunc_4439(uParam0, 1, 142, 72);
	GlobalFunc_4439(uParam0, 1, 134, 244);
	GlobalFunc_4439(uParam0, 1, 262, 54);
	GlobalFunc_4439(uParam0, 1, 334, 206);
	GlobalFunc_4439(uParam0, 1, 547, 65);
	GlobalFunc_4439(uParam0, 1, 550, 200);
	GlobalFunc_4439(uParam0, 1, 453, 54);
	GlobalFunc_4439(uParam0, 1, 492, 242);
	GlobalFunc_4439(uParam0, 1, 731, 179);
	GlobalFunc_4439(uParam0, 1, 685, 81);
	GlobalFunc_4439(uParam0, 1, 828, 79);
	GlobalFunc_4439(uParam0, 1, 982, 167);
	GlobalFunc_4439(uParam0, 1, 1155, 70);
	GlobalFunc_4439(uParam0, 1, 1293, 60);
	GlobalFunc_4439(uParam0, 1, 1254, 191);
	GlobalFunc_4439(uParam0, 1, 1433, 84);
	GlobalFunc_4439(uParam0, 1, 1469, 172);
	GlobalFunc_4439(uParam0, 1, 952, 367);
	GlobalFunc_4439(uParam0, 1, 967, 469);
	GlobalFunc_4439(uParam0, 1, 1246, 374);
	GlobalFunc_4438(uParam0, 1, "FHP9", 777, 165, 1);
	GlobalFunc_4438(uParam0, 1, "FHP10", 970, 179, 1);
	GlobalFunc_4438(uParam0, 1, "FHP11", 1210, 184, 1);
	GlobalFunc_4438(uParam0, 1, "FHP12", 537, 168, 0);
	GlobalFunc_4438(uParam0, 1, "FHP13", 579, 229, 1);
	GlobalFunc_4438(uParam0, 1, "FHP14", 355, 228, 1);
	GlobalFunc_4438(uParam0, 1, "FHP15", 350, 117, 1);
}













void func_364()//Position - 0x1DB0F
{
	while (!GlobalFunc_10541(&Local_157))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_585(24, 0);
	GlobalFunc_585(25, 0);
	GlobalFunc_585(26, 0);
	GlobalFunc_2196(1, 4, 0);
	GlobalFunc_2196(2, 4, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_154, 0);
	if (iLocal_155 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_155))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_155);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_157.f_1.f_394 - Local_157.f_1.f_397, Local_157.f_1.f_394 + Local_157.f_1.f_397, 1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (iLocal_47 != -1)
	{
		GlobalFunc_6473(&iLocal_47);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_45 != -1)
	{
		GlobalFunc_1997(&iLocal_45);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


