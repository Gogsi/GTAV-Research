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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	float fLocal_99[1] = { 0f };
	float fLocal_101[1] = { 0f };
	float fLocal_103[1] = { 0f };
	float fLocal_105[1] = { 0f };
	float fLocal_107[1] = { 0f };
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	float fLocal_113[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_136[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_159[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_182[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_205[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_228[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_251[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_258[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_265[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_272[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_279 = 0f;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	float fLocal_282 = 0f;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	float fLocal_298 = 0f;
	float fLocal_299 = 0f;
	int iLocal_300[1] = { 0 };
	int iLocal_302[1] = { 0 };
	int iLocal_304[1] = { 0 };
	int iLocal_306[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_329[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_352[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_375[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	struct<3> Local_399[1];
	struct<3> Local_403[6];
	struct<3> Local_422[22];
	struct<3> Local_489 = { 0, 0, 0 } ;
	struct<3> Local_492 = { 0, 0, 0 } ;
	struct<3> Local_495 = { 0, 0, 0 } ;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	struct<3> Local_504 = { 0, 0, 0 } ;
	struct<3> Local_507 = { 0, 0, 0 } ;
	struct<3> Local_510 = { 0, 0, 0 } ;
	struct<3> Local_513 = { 0, 0, 0 } ;
	char cLocal_516[64] = "";
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533[1] = { 0 };
	int iLocal_535[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_542[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568[1] = { 0 };
	int iLocal_570[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_579[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_586[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_609[1] = { 0 };
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	var uLocal_614 = 8;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	bool bLocal_630 = 0;
	bool bLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	bool bLocal_634 = 0;
	bool bLocal_635 = 0;
	bool bLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
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
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
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
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
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
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	float fLocal_728 = 0f;
	float fLocal_729 = 0f;
	float fLocal_730 = 0f;
	float fLocal_731 = 0f;
	float fLocal_732 = 0f;
	float fLocal_733 = 0f;
	float fLocal_734 = 0f;
	struct<3> Local_735 = { 0, 0, 0 } ;
	struct<3> Local_738 = { 0, 0, 0 } ;
	struct<3> Local_741 = { 0, 0, 0 } ;
	struct<3> Local_744 = { 0, 0, 0 } ;
	struct<3> Local_747 = { 0, 0, 0 } ;
	struct<3> Local_750 = { 0, 0, 0 } ;
	struct<3> Local_753[2];
	struct<3> Local_760 = { 0, 0, 0 } ;
	struct<3> Local_763 = { 0, 0, 0 } ;
	int iLocal_766 = 0;
	var uLocal_767 = 0;
	char* sLocal_768 = NULL;
	char* sLocal_769 = NULL;
	char* sLocal_770 = NULL;
	char* sLocal_771 = NULL;
	struct<2> Local_772 = { 0, 0 } ;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	char cLocal_776[16] = "";
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	int iLocal_781[1] = { 0 };
	var uLocal_783 = 0;
	bool bLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	bool bLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	char* sLocal_846 = NULL;
	struct<3> Local_847 = { 0, 0, 0 } ;
	struct<3> Local_850 = { 0, 0, 0 } ;
	struct<3> Local_853 = { 0, 0, 0 } ;
	float fLocal_856 = 0f;
	float fLocal_857 = 0f;
	float fLocal_858 = 0f;
	float fLocal_859 = 0f;
	float fLocal_860 = 0f;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	struct<3> Local_867 = { 0, 0, 0 } ;
	struct<3> Local_870 = { 0, 0, 0 } ;
	var uLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	var uLocal_876 = 0;
	int iLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	int iLocal_884[2] = { 0, 0 };
	struct<33> Local_887[4];
	struct<33> Local_1020[19];
	struct<29> Local_1648 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	struct<29> Local_1681 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	struct<14> Local_1714 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1728 = 0;
	struct<3> Local_1729 = { 0, 0, 0 } ;
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
	struct<8> Local_1744 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	struct<7> Local_1759 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	struct<14> Local_1774 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1788 = 0;
	struct<7> Local_1789 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	struct<13> Local_1804 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	struct<3> Local_1828[5];
	struct<9> Local_1844[19];
	int iLocal_2016 = 0;
	int iLocal_2017 = 0;
	int iLocal_2018 = 0;
	var uLocal_2019[4] = { 0, 0, 0, 0 };
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 4;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 4;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 4;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 4;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 4;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 4;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	struct<20> Local_2063 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<17> Local_2097 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_2114 = 16;
	var uLocal_2115 = 0;
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
	var uLocal_2128 = 0;
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
	var uLocal_2141 = 0;
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
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
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
	var uLocal_2197 = 0;
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
	var uLocal_2210 = 0;
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
	var uLocal_2223 = 0;
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
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
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
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	struct<6> Local_2282 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_2288 = 0;
	var uLocal_2289 = 1092616192;
	var uLocal_2290 = 1101004800;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 3;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	int iLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 21;
	var uLocal_2316 = 6;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = -1;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 1000;
	var uLocal_2331 = 1000;
	var uLocal_2332 = 0;
	int iLocal_2333 = 0;
	int iLocal_2334 = 0;
	int iLocal_2335 = 0;
	int iLocal_2336 = 0;
	int iLocal_2337 = 0;
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
	int iLocal_2356 = 0;
	int iLocal_2357 = 0;
	int iLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	struct<3> Local_2364 = { 0, 0, 0 } ;
	struct<3> Local_2367 = { 0, 0, 0 } ;
	struct<3> Local_2370 = { 0, 0, 0 } ;
	struct<3> Local_2373 = { 0, 0, 0 } ;
	struct<3> Local_2376 = { 0, 0, 0 } ;
	int iLocal_2379 = 0;
	int iLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 2;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 2;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 20;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
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
	var uLocal_2424 = 1065353216;
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
	var uLocal_2451 = -1;
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
	var uLocal_2481 = 1065353216;
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
	var uLocal_2508 = -1;
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
	var uLocal_2538 = 1065353216;
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
	var uLocal_2565 = -1;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 1065353216;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = -1;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 1065353216;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = -1;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 1065353216;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = -1;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 1065353216;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = -1;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 1065353216;
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
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = -1;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 1065353216;
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
	var uLocal_2907 = -1;
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
	var uLocal_2937 = 1065353216;
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
	var uLocal_2964 = -1;
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
	var uLocal_2994 = 1065353216;
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
	var uLocal_3021 = -1;
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
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 1065353216;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = -1;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 1065353216;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = -1;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 1065353216;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = -1;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 1065353216;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = -1;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 1065353216;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = -1;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
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
	var uLocal_3336 = 1065353216;
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
	var uLocal_3363 = -1;
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
	var uLocal_3393 = 1065353216;
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
	var uLocal_3420 = -1;
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
	var uLocal_3450 = 1065353216;
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
	var uLocal_3477 = -1;
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
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
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
	var uLocal_3507 = 1065353216;
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
	var uLocal_3531 = 16;
	var uLocal_3532 = 0;
	var uLocal_3533 = -1082130432;
	var uLocal_3534 = 0;
	var uLocal_3535 = -1082130432;
	var uLocal_3536 = 0;
	var uLocal_3537 = -1082130432;
	var uLocal_3538 = 0;
	var uLocal_3539 = -1082130432;
	var uLocal_3540 = 0;
	var uLocal_3541 = -1082130432;
	var uLocal_3542 = 0;
	var uLocal_3543 = -1082130432;
	var uLocal_3544 = 0;
	var uLocal_3545 = -1082130432;
	var uLocal_3546 = 0;
	var uLocal_3547 = -1082130432;
	var uLocal_3548 = 0;
	var uLocal_3549 = -1082130432;
	var uLocal_3550 = 0;
	var uLocal_3551 = -1082130432;
	var uLocal_3552 = 0;
	var uLocal_3553 = -1082130432;
	var uLocal_3554 = 0;
	var uLocal_3555 = -1082130432;
	var uLocal_3556 = 0;
	var uLocal_3557 = -1082130432;
	var uLocal_3558 = 0;
	var uLocal_3559 = -1082130432;
	var uLocal_3560 = 0;
	var uLocal_3561 = -1082130432;
	var uLocal_3562 = 0;
	var uLocal_3563 = -1082130432;
	var uLocal_3564 = 16;
	var uLocal_3565 = 0;
	var uLocal_3566 = -1082130432;
	var uLocal_3567 = 0;
	var uLocal_3568 = -1082130432;
	var uLocal_3569 = 0;
	var uLocal_3570 = -1082130432;
	var uLocal_3571 = 0;
	var uLocal_3572 = -1082130432;
	var uLocal_3573 = 0;
	var uLocal_3574 = -1082130432;
	var uLocal_3575 = 0;
	var uLocal_3576 = -1082130432;
	var uLocal_3577 = 0;
	var uLocal_3578 = -1082130432;
	var uLocal_3579 = 0;
	var uLocal_3580 = -1082130432;
	var uLocal_3581 = 0;
	var uLocal_3582 = -1082130432;
	var uLocal_3583 = 0;
	var uLocal_3584 = -1082130432;
	var uLocal_3585 = 0;
	var uLocal_3586 = -1082130432;
	var uLocal_3587 = 0;
	var uLocal_3588 = -1082130432;
	var uLocal_3589 = 0;
	var uLocal_3590 = -1082130432;
	var uLocal_3591 = 0;
	var uLocal_3592 = -1082130432;
	var uLocal_3593 = 0;
	var uLocal_3594 = -1082130432;
	var uLocal_3595 = 0;
	var uLocal_3596 = -1082130432;
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
	var uLocal_3613 = -1082130432;
	var uLocal_3614 = -1082130432;
	var uLocal_3615 = 1;
	var uLocal_3616 = 1;
	var uLocal_3617 = 1;
	var uLocal_3618 = -1;
	var uLocal_3619 = -1;
	var uLocal_3620 = -1;
	int iLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 2;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 2;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 20;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = -1;
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
	var uLocal_3665 = 1065353216;
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
	var uLocal_3692 = -1;
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
	var uLocal_3722 = 1065353216;
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
	var uLocal_3749 = -1;
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
	var uLocal_3779 = 1065353216;
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
	var uLocal_3806 = -1;
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
	var uLocal_3836 = 1065353216;
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
	var uLocal_3863 = -1;
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
	var uLocal_3893 = 1065353216;
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
	var uLocal_3920 = -1;
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
	var uLocal_3950 = 1065353216;
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
	var uLocal_3977 = -1;
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
	var uLocal_4007 = 1065353216;
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
	var uLocal_4034 = -1;
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
	var uLocal_4064 = 1065353216;
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
	var uLocal_4091 = -1;
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
	var uLocal_4121 = 1065353216;
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
	var uLocal_4148 = -1;
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
	var uLocal_4178 = 1065353216;
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
	var uLocal_4205 = -1;
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
	var uLocal_4235 = 1065353216;
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
	var uLocal_4262 = -1;
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
	var uLocal_4292 = 1065353216;
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
	var uLocal_4319 = -1;
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
	var uLocal_4349 = 1065353216;
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
	var uLocal_4376 = -1;
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
	var uLocal_4406 = 1065353216;
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
	var uLocal_4433 = -1;
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
	var uLocal_4463 = 1065353216;
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
	var uLocal_4490 = -1;
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
	var uLocal_4520 = 1065353216;
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
	var uLocal_4547 = -1;
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
	var uLocal_4577 = 1065353216;
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
	var uLocal_4604 = -1;
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
	var uLocal_4634 = 1065353216;
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
	var uLocal_4661 = -1;
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
	var uLocal_4691 = 1065353216;
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
	var uLocal_4718 = -1;
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
	var uLocal_4748 = 1065353216;
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
	var uLocal_4772 = 16;
	var uLocal_4773 = 0;
	var uLocal_4774 = -1082130432;
	var uLocal_4775 = 0;
	var uLocal_4776 = -1082130432;
	var uLocal_4777 = 0;
	var uLocal_4778 = -1082130432;
	var uLocal_4779 = 0;
	var uLocal_4780 = -1082130432;
	var uLocal_4781 = 0;
	var uLocal_4782 = -1082130432;
	var uLocal_4783 = 0;
	var uLocal_4784 = -1082130432;
	var uLocal_4785 = 0;
	var uLocal_4786 = -1082130432;
	var uLocal_4787 = 0;
	var uLocal_4788 = -1082130432;
	var uLocal_4789 = 0;
	var uLocal_4790 = -1082130432;
	var uLocal_4791 = 0;
	var uLocal_4792 = -1082130432;
	var uLocal_4793 = 0;
	var uLocal_4794 = -1082130432;
	var uLocal_4795 = 0;
	var uLocal_4796 = -1082130432;
	var uLocal_4797 = 0;
	var uLocal_4798 = -1082130432;
	var uLocal_4799 = 0;
	var uLocal_4800 = -1082130432;
	var uLocal_4801 = 0;
	var uLocal_4802 = -1082130432;
	var uLocal_4803 = 0;
	var uLocal_4804 = -1082130432;
	var uLocal_4805 = 16;
	var uLocal_4806 = 0;
	var uLocal_4807 = -1082130432;
	var uLocal_4808 = 0;
	var uLocal_4809 = -1082130432;
	var uLocal_4810 = 0;
	var uLocal_4811 = -1082130432;
	var uLocal_4812 = 0;
	var uLocal_4813 = -1082130432;
	var uLocal_4814 = 0;
	var uLocal_4815 = -1082130432;
	var uLocal_4816 = 0;
	var uLocal_4817 = -1082130432;
	var uLocal_4818 = 0;
	var uLocal_4819 = -1082130432;
	var uLocal_4820 = 0;
	var uLocal_4821 = -1082130432;
	var uLocal_4822 = 0;
	var uLocal_4823 = -1082130432;
	var uLocal_4824 = 0;
	var uLocal_4825 = -1082130432;
	var uLocal_4826 = 0;
	var uLocal_4827 = -1082130432;
	var uLocal_4828 = 0;
	var uLocal_4829 = -1082130432;
	var uLocal_4830 = 0;
	var uLocal_4831 = -1082130432;
	var uLocal_4832 = 0;
	var uLocal_4833 = -1082130432;
	var uLocal_4834 = 0;
	var uLocal_4835 = -1082130432;
	var uLocal_4836 = 0;
	var uLocal_4837 = -1082130432;
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
	var uLocal_4854 = -1082130432;
	var uLocal_4855 = -1082130432;
	var uLocal_4856 = 1;
	var uLocal_4857 = 1;
	var uLocal_4858 = 1;
	var uLocal_4859 = -1;
	var uLocal_4860 = -1;
	var uLocal_4861 = -1;
	int iLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 2;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 2;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 20;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = -1;
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
	var uLocal_4906 = 1065353216;
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
	var uLocal_4933 = -1;
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
	var uLocal_4963 = 1065353216;
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
	var uLocal_4990 = -1;
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
	var uLocal_5020 = 1065353216;
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
	var uLocal_5047 = -1;
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
	var uLocal_5077 = 1065353216;
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
	var uLocal_5104 = -1;
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
	var uLocal_5134 = 1065353216;
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
	var uLocal_5161 = -1;
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
	var uLocal_5191 = 1065353216;
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
	var uLocal_5218 = -1;
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
	var uLocal_5248 = 1065353216;
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
	var uLocal_5275 = -1;
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
	var uLocal_5305 = 1065353216;
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
	var uLocal_5332 = -1;
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
	var uLocal_5362 = 1065353216;
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
	var uLocal_5389 = -1;
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
	var uLocal_5419 = 1065353216;
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
	var uLocal_5446 = -1;
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
	var uLocal_5476 = 1065353216;
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
	var uLocal_5503 = -1;
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
	var uLocal_5533 = 1065353216;
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
	var uLocal_5560 = -1;
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
	var uLocal_5590 = 1065353216;
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
	var uLocal_5617 = -1;
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
	var uLocal_5647 = 1065353216;
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
	var uLocal_5674 = -1;
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
	var uLocal_5704 = 1065353216;
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
	var uLocal_5731 = -1;
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
	var uLocal_5761 = 1065353216;
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
	var uLocal_5788 = -1;
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
	var uLocal_5818 = 1065353216;
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
	var uLocal_5845 = -1;
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
	var uLocal_5875 = 1065353216;
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
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = -1;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 1065353216;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = -1;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 1065353216;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 16;
	var uLocal_6014 = 0;
	var uLocal_6015 = -1082130432;
	var uLocal_6016 = 0;
	var uLocal_6017 = -1082130432;
	var uLocal_6018 = 0;
	var uLocal_6019 = -1082130432;
	var uLocal_6020 = 0;
	var uLocal_6021 = -1082130432;
	var uLocal_6022 = 0;
	var uLocal_6023 = -1082130432;
	var uLocal_6024 = 0;
	var uLocal_6025 = -1082130432;
	var uLocal_6026 = 0;
	var uLocal_6027 = -1082130432;
	var uLocal_6028 = 0;
	var uLocal_6029 = -1082130432;
	var uLocal_6030 = 0;
	var uLocal_6031 = -1082130432;
	var uLocal_6032 = 0;
	var uLocal_6033 = -1082130432;
	var uLocal_6034 = 0;
	var uLocal_6035 = -1082130432;
	var uLocal_6036 = 0;
	var uLocal_6037 = -1082130432;
	var uLocal_6038 = 0;
	var uLocal_6039 = -1082130432;
	var uLocal_6040 = 0;
	var uLocal_6041 = -1082130432;
	var uLocal_6042 = 0;
	var uLocal_6043 = -1082130432;
	var uLocal_6044 = 0;
	var uLocal_6045 = -1082130432;
	var uLocal_6046 = 16;
	var uLocal_6047 = 0;
	var uLocal_6048 = -1082130432;
	var uLocal_6049 = 0;
	var uLocal_6050 = -1082130432;
	var uLocal_6051 = 0;
	var uLocal_6052 = -1082130432;
	var uLocal_6053 = 0;
	var uLocal_6054 = -1082130432;
	var uLocal_6055 = 0;
	var uLocal_6056 = -1082130432;
	var uLocal_6057 = 0;
	var uLocal_6058 = -1082130432;
	var uLocal_6059 = 0;
	var uLocal_6060 = -1082130432;
	var uLocal_6061 = 0;
	var uLocal_6062 = -1082130432;
	var uLocal_6063 = 0;
	var uLocal_6064 = -1082130432;
	var uLocal_6065 = 0;
	var uLocal_6066 = -1082130432;
	var uLocal_6067 = 0;
	var uLocal_6068 = -1082130432;
	var uLocal_6069 = 0;
	var uLocal_6070 = -1082130432;
	var uLocal_6071 = 0;
	var uLocal_6072 = -1082130432;
	var uLocal_6073 = 0;
	var uLocal_6074 = -1082130432;
	var uLocal_6075 = 0;
	var uLocal_6076 = -1082130432;
	var uLocal_6077 = 0;
	var uLocal_6078 = -1082130432;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = -1082130432;
	var uLocal_6096 = -1082130432;
	var uLocal_6097 = 1;
	var uLocal_6098 = 1;
	var uLocal_6099 = 1;
	var uLocal_6100 = -1;
	var uLocal_6101 = -1;
	var uLocal_6102 = -1;
	int iLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 2;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 2;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 20;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = -1;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 1065353216;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = -1;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 1065353216;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = -1;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 1065353216;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = -1;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 1065353216;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = -1;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 1065353216;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = -1;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 1065353216;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = -1;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 1065353216;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = -1;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 1065353216;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = -1;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 1065353216;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = -1;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 1065353216;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = -1;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 1065353216;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = -1;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 1065353216;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = -1;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 1065353216;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = -1;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 1065353216;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = -1;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 1065353216;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = -1;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 1065353216;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = -1;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 1065353216;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = -1;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 1065353216;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = -1;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 1065353216;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = -1;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 1065353216;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 16;
	var uLocal_7255 = 0;
	var uLocal_7256 = -1082130432;
	var uLocal_7257 = 0;
	var uLocal_7258 = -1082130432;
	var uLocal_7259 = 0;
	var uLocal_7260 = -1082130432;
	var uLocal_7261 = 0;
	var uLocal_7262 = -1082130432;
	var uLocal_7263 = 0;
	var uLocal_7264 = -1082130432;
	var uLocal_7265 = 0;
	var uLocal_7266 = -1082130432;
	var uLocal_7267 = 0;
	var uLocal_7268 = -1082130432;
	var uLocal_7269 = 0;
	var uLocal_7270 = -1082130432;
	var uLocal_7271 = 0;
	var uLocal_7272 = -1082130432;
	var uLocal_7273 = 0;
	var uLocal_7274 = -1082130432;
	var uLocal_7275 = 0;
	var uLocal_7276 = -1082130432;
	var uLocal_7277 = 0;
	var uLocal_7278 = -1082130432;
	var uLocal_7279 = 0;
	var uLocal_7280 = -1082130432;
	var uLocal_7281 = 0;
	var uLocal_7282 = -1082130432;
	var uLocal_7283 = 0;
	var uLocal_7284 = -1082130432;
	var uLocal_7285 = 0;
	var uLocal_7286 = -1082130432;
	var uLocal_7287 = 16;
	var uLocal_7288 = 0;
	var uLocal_7289 = -1082130432;
	var uLocal_7290 = 0;
	var uLocal_7291 = -1082130432;
	var uLocal_7292 = 0;
	var uLocal_7293 = -1082130432;
	var uLocal_7294 = 0;
	var uLocal_7295 = -1082130432;
	var uLocal_7296 = 0;
	var uLocal_7297 = -1082130432;
	var uLocal_7298 = 0;
	var uLocal_7299 = -1082130432;
	var uLocal_7300 = 0;
	var uLocal_7301 = -1082130432;
	var uLocal_7302 = 0;
	var uLocal_7303 = -1082130432;
	var uLocal_7304 = 0;
	var uLocal_7305 = -1082130432;
	var uLocal_7306 = 0;
	var uLocal_7307 = -1082130432;
	var uLocal_7308 = 0;
	var uLocal_7309 = -1082130432;
	var uLocal_7310 = 0;
	var uLocal_7311 = -1082130432;
	var uLocal_7312 = 0;
	var uLocal_7313 = -1082130432;
	var uLocal_7314 = 0;
	var uLocal_7315 = -1082130432;
	var uLocal_7316 = 0;
	var uLocal_7317 = -1082130432;
	var uLocal_7318 = 0;
	var uLocal_7319 = -1082130432;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = -1082130432;
	var uLocal_7337 = -1082130432;
	var uLocal_7338 = 1;
	var uLocal_7339 = 1;
	var uLocal_7340 = 1;
	var uLocal_7341 = -1;
	var uLocal_7342 = -1;
	var uLocal_7343 = -1;
	char* sLocal_7344 = NULL;
	float fLocal_7345 = 0f;
	float fLocal_7346 = 0f;
	float fLocal_7347 = 0f;
	float fLocal_7348 = 0f;
	float fLocal_7349 = 0f;
	float fLocal_7350 = 0f;
	float fLocal_7351 = 0f;
	int iLocal_7352 = 0;
	int iLocal_7353 = 0;
	int iLocal_7354 = 0;
	var uLocal_7355 = 0;
	int iLocal_7356 = 0;
	struct<3> Local_7357 = { 0, 0, 0 } ;
	struct<3> Local_7360 = { 0, 0, 0 } ;
	char* sLocal_7363 = NULL;
	struct<3> Local_7364 = { 0, 0, 0 } ;
	struct<3> Local_7367 = { 0, 0, 0 } ;
	int iLocal_7370 = 0;
	float fLocal_7371 = 0f;
	float fLocal_7372 = 0f;
	float fLocal_7373 = 0f;
	float fLocal_7374 = 0f;
	int iLocal_7375 = 0;
	int iLocal_7376 = 0;
	int iLocal_7377 = 0;
	bool bLocal_7378 = 0;
	bool bLocal_7379 = 0;
	bool bLocal_7380 = 0;
	float fLocal_7381 = 0f;
	float fLocal_7382 = 0f;
	int iLocal_7383 = 0;
	int iLocal_7384 = 0;
	int iLocal_7385 = 0;
	float fLocal_7386 = 0f;
	float fLocal_7387 = 0f;
	float fLocal_7388 = 0f;
	float fLocal_7389 = 0f;
	float fLocal_7390 = 0f;
	float fLocal_7391 = 0f;
	int iLocal_7392 = 0;
	int iLocal_7393 = 0;
	int iLocal_7394 = 0;
	int iLocal_7395 = 0;
	bool bLocal_7396 = 0;
	bool bLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
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
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	fLocal_64 = 1f;
	bLocal_68 = true;
	bLocal_75 = true;
	bLocal_97 = true;
	fLocal_279 = 120f;
	fLocal_280 = 0f;
	fLocal_282 = 1f;
	fLocal_283 = 0f;
	fLocal_284 = 1f;
	fLocal_285 = 30f;
	fLocal_287 = 1f;
	fLocal_288 = 5f;
	fLocal_289 = 1f;
	fLocal_290 = 1f;
	fLocal_291 = 100f;
	fLocal_292 = 100f;
	fLocal_293 = 0f;
	fLocal_294 = 7000f;
	fLocal_295 = 0f;
	fLocal_296 = 0f;
	fLocal_297 = 0.3f;
	fLocal_298 = 0.5f;
	fLocal_299 = 50f;
	iLocal_385 = -1;
	iLocal_393 = -1;
	iLocal_394 = -1;
	iLocal_691 = -1;
	uLocal_725 = AUDIO::GET_SOUND_ID();
	iLocal_726 = AUDIO::GET_SOUND_ID();
	uLocal_727 = AUDIO::GET_SOUND_ID();
	fLocal_732 = 0f;
	fLocal_733 = 0f;
	fLocal_734 = 0f;
	Local_741 = { -1588.001f, 4358.562f, 0.658f };
	Local_744 = { -3.9f, 0f, -57.56f };
	iLocal_788 = 1;
	sLocal_846 = "MattForest";
	Local_847 = { -1874.783f, 4484.71f, 24.2898f };
	Local_850 = { -0.9f, 0.9f, 1.1f };
	Local_853 = { -24f, 0f, 65.9f };
	fLocal_856 = -31f;
	fLocal_857 = -22f;
	fLocal_858 = 30f;
	fLocal_859 = 100f;
	fLocal_860 = 3.5f;
	iLocal_2016 = GlobalFunc_4917(2);
	iLocal_2017 = GlobalFunc_4917(0);
	iLocal_2018 = GlobalFunc_4917(1);
	Local_2370 = { -1552.5f, 4451f, 38.3f };
	sLocal_7344 = "shake_cam_all@";
	fLocal_7345 = 0f;
	fLocal_7346 = 40f;
	fLocal_7347 = 0f;
	fLocal_7348 = 0f;
	fLocal_7349 = 0f;
	fLocal_7350 = 0.328f;
	fLocal_7351 = 0.721f;
	iLocal_7352 = -1;
	sLocal_7363 = "missexile2switch";
	Local_7364 = { -1683.497f, 4455.5f, 1.62f };
	Local_7367 = { 0f, 0f, 190f };
	fLocal_7371 = 0.508f;
	fLocal_7372 = 1f;
	fLocal_7373 = -3f;
	fLocal_7374 = -1000f;
	fLocal_7381 = 0.328f;
	fLocal_7382 = 0.475f;
	iLocal_7385 = 2200;
	fLocal_7386 = 0.08f;
	fLocal_7387 = 0.45f;
	fLocal_7388 = 0.08f;
	fLocal_7389 = 0.9f;
	fLocal_7390 = 0f;
	fLocal_7391 = 0.5f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_992();
		GlobalFunc_10632();
		func_987();
	}
	func_975();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_786)
		{
			if (func_970())
			{
				func_960();
			}
		}
		GlobalFunc_587();
		RECORDING::_0x208784099002BC30("M_PREDATOR", 0);
		switch (iLocal_2333)
		{
			case 0:
				func_927();
				break;
			
			case 1:
				func_924();
				break;
			
			case 2:
				func_884();
				break;
			
			case 3:
				func_880();
				break;
			
			case 4:
				func_875();
				break;
			
			case 5:
				func_846();
				break;
			
			case 6:
				func_840();
				break;
			
			case 7:
				func_766();
				break;
			
			case 8:
				func_761();
				break;
			
			case 9:
				func_683();
				break;
			
			case 10:
				func_677();
				break;
			
			case 11:
				func_633();
				break;
			
			case 12:
				func_624();
				break;
			
			case 15:
				break;
			
			case 18:
				break;
			
			case 20:
				func_595();
				break;
			
			case 21:
				func_3();
				break;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!iLocal_647)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
					{
						GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 177);
						GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 176);
						iLocal_647 = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))))
			{
				GlobalFunc_503(0, 177);
				GlobalFunc_504(0, 176);
				iLocal_647 = 0;
			}
		}
	}
}



void func_3()//Position - 0x4D9
{
	func_594();
	switch (iLocal_2335)
	{
		case 0:
			func_569();
			break;
		
		case 1:
			func_507();
			break;
		
		case 2:
			func_505();
			break;
		
		case 3:
			func_504();
			break;
		
		case 4:
			func_503();
			break;
		
		case 5:
			func_488();
			break;
		
		case 6:
			func_457();
			break;
		
		case 7:
			func_395();
			break;
		
		case 8:
			func_4();
			break;
	}
}

void func_4()//Position - 0x562
{
	if (iLocal_2336)
	{
		GlobalFunc_4972(1731f, 3273.7f, 40.5f, 264.515f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2018)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1731f, 3273.7f, 40.5f, 1000f, 1, 0, 0, 0);
	Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, 1731f, 3273.7f, 40.5f, 264.515f, 1, 1);
	GlobalFunc_534(Local_1714, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
	func_341(2, 0);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, -1);
	func_40(&(uLocal_2019[0]), 0, Local_1714, 0, 1, 0, 0);
	GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
	func_40(&(uLocal_2019[1]), 1, Local_1714, 2, 1, 0, 0);
	GlobalFunc_11267(uLocal_2019[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 1, uLocal_2019[1], "franklin", 0, 1);
	Local_1648.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 2f) };
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	func_33(Local_1648);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
	GlobalFunc_729(&uLocal_2019, 2, 0);
	func_31(&uLocal_2019, 2, 1);
	Local_2097.f_1 = 2;
	Local_2097.f_3 = Local_1648;
	func_29(&Local_2097);
	Local_2097 = 0;
	func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1714, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1714, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0, 0, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE("EXL_2_MCS_3", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1714, 0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1714, "main_heli", 0, Local_1714.f_1, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_2019[0]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2019[0], "michael", 1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_2019[1]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2019[1], "franklin", 1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_1648))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1648, "chop", 1, Local_1648.f_1, 0);
	}
	if (ENTITY::IS_ENTITY_ATTACHED(Local_1648))
	{
		ENTITY::DETACH_ENTITY(Local_1648, 1, 1);
	}
	GlobalFunc_8316(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::_0xEF39EE20C537E98C(1742.789f, 3280.794f, 40.0904f, GlobalFunc_590(0f, 0f, 77.8678f));
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 0, 0);
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(1731f, 3273.7f, 40.5f);
	}
	CAM::DO_SCREEN_FADE_IN(800);
	iLocal_713 = 1;
	iLocal_2333 = 12;
}











void func_15(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0xB72
{
	func_17(iParam0, uParam1);
	func_16(iParam0);
	if (bParam2)
	{
		uParam1->f_7 = 4;
	}
	if (bParam3)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam4)
	{
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
	}
	if (bParam5)
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam6, iParam7, 1, 0, 0);
		if (bParam6)
		{
			iParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam7);
		}
	}
	*iParam0 = 0;
}

void func_16(var uParam0)//Position - 0xBD5
{
	switch (uParam0->f_2)
	{
		case 1:
			if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) != 7)
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) == 0)
				{
					uParam0->f_9 = 1;
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_17(int iParam0, var uParam1)//Position - 0xC9E
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChopVision"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("ChopVision");
	}
	func_20(iParam0, uParam1, 0);
	GlobalFunc_73(0);
	if (iParam0->f_12 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
		{
			AUDIO::STOP_SOUND(iParam0->f_12);
		}
	}
	func_19(iParam0, 0);
	PAD::_0xF239400E16C23E08(0, -1);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(iParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0->f_3) || !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_3, 1);
		}
	}
	switch (iParam0->f_2)
	{
		case 1:
			GlobalFunc_2242();
			break;
	}
}


void func_19(var uParam0, bool bParam1)//Position - 0xD57
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02");
	uParam0->f_10 = 0;
	if (bParam1)
	{
		if (uParam0->f_12 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(uParam0->f_12);
			uParam0->f_12 = -1;
		}
	}
}

void func_20(var uParam0, var uParam1, bool bParam2)//Position - 0xDA8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (iVar1 != uParam0->f_1)
			{
				if (GlobalFunc_6809(iVar1))
				{
					GlobalFunc_2872(uParam1, iVar1, 2);
				}
			}
			else
			{
				GlobalFunc_2872(uParam1, iVar1, 3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar2 = iVar0;
			GlobalFunc_2872(uParam1, iVar2, 0);
			iVar0++;
		}
	}
	if (uParam0->f_8)
	{
		GlobalFunc_2872(uParam1, 2, 0);
	}
}









void func_29(int iParam0)//Position - 0xF94
{
	if (!CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		iParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		if (iParam0->f_12 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
			{
				AUDIO::STOP_SOUND(iParam0->f_12);
			}
			AUDIO::RELEASE_SOUND_ID(iParam0->f_12);
			iParam0->f_12 = -1;
		}
		iParam0->f_12 = AUDIO::GET_SOUND_ID();
		iParam0->f_10 = 0;
		iParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		func_30(iParam0);
	}
}

void func_30(var uParam0)//Position - 0xFFA
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_6 = -0.15f;
		uParam0->f_7 = 0.05f;
		CAM::ATTACH_CAM_TO_PED_BONE(uParam0->f_4, uParam0->f_3, 31086, 0f, uParam0->f_6, uParam0->f_7, 1);
		CAM::SET_CAM_NEAR_CLIP(uParam0->f_4, 0.101f);
		CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_3, 0f, 10f, uParam0->f_7, 1);
		CAM::SET_CAM_FOV(uParam0->f_4, 96.76f);
		CAM::SET_CAM_DOF_PLANES(uParam0->f_4, 0f, 0f, 100000f, 100000f);
	}
}

void func_31(var uParam0, int iParam1, int iParam2)//Position - 0x107E
{
	if (iParam1 != 4)
	{
		uParam0->f_24[iParam1] = iParam2;
	}
}


void func_33(int iParam0)//Position - 0x10AE
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2358, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_2358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2358, iLocal_2356);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2358, iLocal_2356);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_2358);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		}
	}
}

void func_34(var uParam0)//Position - 0x1109
{
	MISC::CLEAR_AREA(uParam0->f_11, 4f, 1, 0, 0, 0);
	func_38(&Local_1648, Local_1648.f_11, Local_1648.f_20, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, 0);
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_1648, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_1648, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 188, 1);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_28, -1, 0, 1);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = GlobalFunc_6797(*uParam0, 0, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	GlobalFunc_173(&uLocal_2114, 5, Local_1648, "chop", 0, 1);
	func_33(*uParam0);
}




int func_38(var uParam0, struct<3> Param1, var uParam4, bool bParam5)//Position - 0x1347
{
	int iVar0;
	
	iVar0 = GlobalFunc_2579();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			PED::DELETE_PED(uParam0);
		}
		*uParam0 = PED::CREATE_PED(26, iVar0, Param1, uParam4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
		if (Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*uParam0);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}


int func_40(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1458
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
				GlobalFunc_11325(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7714(*uParam0);
				GlobalFunc_11336(*uParam0, bParam6);
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













































































































































































































































































































int func_341(int iParam0, bool bParam1)//Position - 0x4C198
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
		func_40(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_388(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10991(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}















































int func_388(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x51D41
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
			GlobalFunc_11325(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7714(*uParam0);
			GlobalFunc_11336(*uParam0, bParam8);
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







void func_395()//Position - 0x51FAE
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_2336)
	{
		GlobalFunc_4972(-1607.565f, 4370.112f, 65.1f, 336.5597f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0);
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2018)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1912.385f, 4432.425f, 40.8423f, 10000f, 1, 0, 0, 0);
	Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, -1607.565f, 4370.112f, 65.1f, 336.5597f, 1, 1);
	GlobalFunc_534(Local_1714, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
	func_341(2, 0);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, -1);
	func_40(&(uLocal_2019[0]), 0, Local_1714, 0, 1, 0, 0);
	func_456(uLocal_2019[0]);
	func_455(&(uLocal_2019[0]), 1);
	GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
	func_388(&(uLocal_2019[1]), 1, -1563.796f, 4589.273f, 18.5544f, 178.1914f, 0, 0, 0);
	uLocal_767 = GlobalFunc_6783(uLocal_2019[1], 0, 0);
	func_456(uLocal_2019[1]);
	func_455(&(uLocal_2019[1]), 1);
	GlobalFunc_11267(uLocal_2019[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_450(uLocal_2019[1], joaat("weapon_carbinerifle"), 100, 1, 1, 1);
	GlobalFunc_173(&uLocal_2114, 1, uLocal_2019[1], "franklin", 0, 1);
	Local_760 = { -1563.796f, 4589.273f, 18.5544f };
	Local_1648.f_11 = { -1561.667f, 4585.899f, 18.3892f };
	Local_1648.f_20 = 28.3876f;
	Local_1648.f_17 = { -1561.667f, 4585.899f, 18.3892f };
	func_34(&Local_1648);
	func_33(Local_1648);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
	iVar0 = 10;
	while (iVar0 <= (Local_1020 - 1))
	{
		func_449(&(Local_1020[iVar0 /*33*/]));
		iLocal_660[iVar0] = 0;
		Local_1020[iVar0 /*33*/].f_27 = 0;
		iVar0++;
	}
	iLocal_700 = 1;
	iLocal_693 = 200;
	iLocal_684 = 400;
	iLocal_723 = 99;
	iLocal_2333 = 10;
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::START_AUDIO_SCENE("EXILE_2_HELI_PICK_UP");
	func_444(1, 0, 0, 1);
	GlobalFunc_164("FS_GOD_2", 7500, 1);
	GlobalFunc_Checkpoint2(5, "pickup franklin and chop", 1, 0, 0, 1);
}

















































void func_444(bool bParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x57853
{
	GlobalFunc_8316(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1065353216);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (bParam3)
	{
		GlobalFunc_698();
	}
	else
	{
		GlobalFunc_626();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}





void func_449(var uParam0)//Position - 0x5795A
{
	MISC::CLEAR_AREA(uParam0->f_11, 4f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_20, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, 1);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	if (uParam0->f_25)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	uParam0->f_27 = 1;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x57A19
{
	int iVar0;
	
	if (!GlobalFunc_2569(iParam0, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, iParam3, iParam4);
		return;
	}
	else
	{
		if (bParam5)
		{
			func_452(iParam0, iParam3);
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
		}
		else
		{
			iVar0 = GlobalFunc_2284(GlobalFunc_6674(iParam0));
			if (iVar0 == 0 || iVar0 == joaat("weapon_unarmed"))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, iParam3, iParam4);
					return;
				}
				else
				{
					iVar0 = iParam1;
				}
			}
		}
		if (iVar0 == joaat("weapon_grenadelauncher") || iVar0 == joaat("weapon_rpg"))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 5)
			{
				WEAPON::SET_PED_AMMO(iParam0, iVar0, 5);
			}
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < iParam2)
		{
			WEAPON::SET_PED_AMMO(iParam0, iVar0, iParam2);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, iParam3);
	}
}


void func_452(int iParam0, int iParam1)//Position - 0x57B1C
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(iParam0, 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, iParam1);
		}
	}
}



void func_455(var uParam0, bool bParam1)//Position - 0x57E39
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2356, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_2356);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2358, iLocal_2356);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2356, iLocal_2358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_2357);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2356, iLocal_2357);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2357, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2357, iLocal_2356);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_2356);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
	}
}

void func_456(int iParam0)//Position - 0x57F04
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 145);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
}

void func_457()//Position - 0x57F86
{
	int iVar0;
	
	if (iLocal_2336)
	{
		GlobalFunc_4972(-1683.497f, 4454.595f, 1.566f, 239.1512f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_887[3 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1804.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1774.f_13, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_846);
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_3");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	PED::REQUEST_ACTION_MODE_ASSET("franklin_ACTION");
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_heavysniper"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_heavysniper")));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while ((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2018)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_887[3 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1804.f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1774.f_13, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_846)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_3")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) || !STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) || !PED::HAS_ACTION_MODE_ASSET_LOADED("franklin_action")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_heavysniper"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_heavysniper")))) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, 0, 1, 1, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	MISC::CLEAR_AREA(-1912.385f, 4432.425f, 40.8423f, 10000f, 1, 0, 0, 0);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
	Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 0f, "lkexile2"), 0f, 1, 1);
	GlobalFunc_534(Local_1714, 0);
	VEHICLE::SET_VEHICLE_EXTRA(Local_1714, 12, true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 1, "lkexile2", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1714, 12000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
	if (GlobalFunc_8315() != 1)
	{
		func_341(1, 0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1683.497f, 4454.595f, 1.566f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 239.1512f);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
	ENTITY::SET_ENTITY_LOD_DIST(PLAYER::PLAYER_PED_ID(), 300);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	GlobalFunc_173(&uLocal_2114, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	func_450(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 100, 1, 1, 1);
	iLocal_693 = 100;
	func_388(&(uLocal_2019[0]), 0, ENTITY::GET_ENTITY_COORDS(Local_1714, 1) + Vector(10f, 0f, 0f), 258.7014f, 0, 0, 0);
	func_456(uLocal_2019[0]);
	func_455(&(uLocal_2019[0]), 1);
	GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_2019[0], Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
	PED::SET_PED_MOVEMENT_CLIPSET(uLocal_2019[0], "move_ped_crouched", 1048576000);
	PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(uLocal_2019[0], "Wpn_AssaultRifle_WeaponHoldingCrouched");
	PED::SET_PED_STRAFE_CLIPSET(uLocal_2019[0], "move_ped_crouched_strafing");
	PED::SET_PED_DESIRED_HEADING(uLocal_2019[0], ENTITY::GET_ENTITY_HEADING(uLocal_2019[0]));
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_2019[0], joaat("weapon_heavysniper"), 10000, 1, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_2019[0], joaat("weapon_heavysniper"), joaat("component_at_scope_max"));
	PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_2019[0], 0);
	TASK::TASK_AIM_GUN_AT_COORD(uLocal_2019[0], -1531.6f, 4376.7f, 68f, -1, 0, 0);
	PED::SET_PED_RESET_FLAG(uLocal_2019[0], 156, 1);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[0], 1, 0);
	func_487(&uLocal_2019, 0, 9);
	func_487(&uLocal_2019, 0, 12);
	GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
	func_40(&(uLocal_2019[2]), 2, Local_1714, -1, 1, 0, 0);
	func_456(uLocal_2019[2]);
	func_455(&(uLocal_2019[2]), 1);
	GlobalFunc_11267(uLocal_2019[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 2, uLocal_2019[2], "trevor", 0, 1);
	GlobalFunc_729(&uLocal_2019, 2, 1);
	Local_1648.f_11 = { -1680.684f, 4452.646f, 1.55916f };
	Local_1648.f_20 = 257.7928f;
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	func_33(Local_1648);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
	ENTITY::SET_ENTITY_LOD_DIST(Local_1648, 400);
	iLocal_684 = 200;
	GlobalFunc_729(&uLocal_2019, 2, 0);
	func_31(&uLocal_2019, 2, 1);
	Local_2097.f_1 = 2;
	Local_2097.f_3 = Local_1648;
	func_29(&Local_2097);
	Local_2097 = 0;
	func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
	func_467();
	func_463(&(Local_887[3 /*33*/]));
	PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_887[3 /*33*/], 0);
	HUD::REMOVE_BLIP(&(Local_887[3 /*33*/].f_2));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_887[3 /*33*/], 1);
	PED::SET_PED_HEATSCALE_OVERRIDE(Local_887[3 /*33*/], 1);
	ENTITY::SET_ENTITY_COORDS(Local_887[3 /*33*/], Local_887[3 /*33*/].f_17, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_887[3 /*33*/], 118.2162f);
	iLocal_843 = 7;
	iLocal_835 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
	GlobalFunc_173(&uLocal_2114, 6, Local_887[3 /*33*/], "oneil", 0, 1);
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744, 0);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, -0.2f, 0.5f, 0f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.2f, 0.5f, 0f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.3f, -0.1f, 0.75f, 200f, 200f, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1744);
	Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -2442.858f, 3670.484f, 12.454f, 0f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 12, 12);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 3, sLocal_846, 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_846) - 100f));
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1729.x, 1);
	VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
	iVar0 = 10;
	while (iVar0 <= (Local_1020 - 1))
	{
		func_449(&(Local_1020[iVar0 /*33*/]));
		iLocal_660[iVar0] = 0;
		Local_1020[iVar0 /*33*/].f_27 = 0;
		iVar0++;
	}
	Local_1774 = VEHICLE::CREATE_VEHICLE(Local_1774.f_1, Local_1774.f_3, Local_1774.f_6, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1774, 3);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1774);
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_846);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_846);
	uLocal_877 = CAM::CREATE_CAM("default_scripted_camera", 1);
	CAM::ATTACH_CAM_TO_ENTITY(uLocal_877, Local_1714, -0.39f, 0.65f, 1.35f, 1);
	CAM::SET_CAM_FOV(uLocal_877, 45f);
	func_462(&Local_1714, &uLocal_877, Local_853.x, 0f, Local_853.f_2);
	iLocal_836 = 1;
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(-1683.497f, 4454.595f, 1.566f);
	}
	SYSTEM::WAIT(0);
	while (!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(Local_1648))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_ON_FOOT_RT");
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_887[iVar0 /*33*/].f_27 = 1;
		iVar0++;
	}
	iLocal_788 = 1;
	iLocal_629 = 1;
	iLocal_658 = 3;
	iLocal_627 = 1;
	iLocal_785 = 0;
	iLocal_649 = 10;
	iLocal_651 = 4;
	func_458("TM44_TWT", 1);
	func_458("TM44_WATER", 1);
	func_458("TM44_DWATER", 1);
	func_458("TM44_GWOOD", 1);
	func_458("TM44_DEADR", 1);
	iLocal_683 = 2;
	iLocal_723 = 99;
	iLocal_2334 = 1;
	iLocal_2333 = 7;
	func_444(0, 22f, 0f, 0);
	GlobalFunc_Checkpoint2(4, "shooting the rpg enemy", 0, 0, 0, 1);
}

void func_458(char* sParam0, bool bParam1)//Position - 0x5899B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_802)
		{
			if (iLocal_802[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_802[iVar1] == 0)
			{
				iLocal_802[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_460(iVar0);
		if (iVar3 != -1)
		{
			iLocal_802[iVar3] = 0;
			func_459();
		}
	}
}

void func_459()//Position - 0x58A16
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_802 - 1))
	{
		if (iLocal_802[iVar0] == 0)
		{
			if (iLocal_802[iVar0 + 1] != 0)
			{
				iLocal_802[iVar0] = iLocal_802[iVar0 + 1];
				iLocal_802[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_460(int iParam0)//Position - 0x58A69
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_802)
	{
		if (iLocal_802[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_802[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_462(int iParam0, var uParam1, struct<3> Param2)//Position - 0x58AD5
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		if (CAM::DOES_CAM_EXIST(*uParam1))
		{
			Var0.x = ENTITY::GET_ENTITY_PITCH(*iParam0);
			Var0.f_1 = ENTITY::GET_ENTITY_ROLL(*iParam0);
			Var0.f_2 = ENTITY::GET_ENTITY_HEADING(*iParam0);
			Var0 = { Var0 + Param2 };
			CAM::SET_CAM_ROT(*uParam1, Var0, 2);
		}
	}
}

void func_463(var uParam0)//Position - 0x58B2A
{
	MISC::CLEAR_AREA(uParam0->f_11, 2f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_20, 1, 1);
	GlobalFunc_722(*uParam0, 182);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_28, -1, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_21);
	if (uParam0->f_25)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_26)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	func_465(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_22);
	GlobalFunc_593(*uParam0, 0);
	uParam0->f_27 = 1;
}


void func_465(var uParam0, bool bParam1)//Position - 0x58CDF
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2356, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_2356);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_2357);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2356, iLocal_2357);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2357, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2357, iLocal_2356);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_2357);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
	}
}


void func_467()//Position - 0x58DE0
{
	var uVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	float fVar23;
	float fVar24;
	var uVar25;
	int iVar26;
	struct<3> Var27;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	float fVar45;
	float fVar46;
	var uVar47;
	int iVar48;
	struct<3> Var49;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	int iVar64;
	var uVar65;
	var uVar66;
	
	if (!PED::IS_PED_INJURED(Local_1648))
	{
		if (iLocal_651 > 3)
		{
			func_486(&Local_2097);
		}
		switch (iLocal_2307)
		{
			case 2:
				switch (iLocal_684)
				{
					case 0:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1891.752f, 4432.023f, 43.7444f, 2f, -1, -1f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						PED::FORCE_PED_MOTION_STATE(Local_1648, -530524, 1, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
						iLocal_684++;
						break;
					
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1895.834f, 4431.216f, 43.28f, 4f, 4f, 2f, 0, 1, 0) || !GlobalFunc_111())
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.672f, 4479.327f, 25.4878f, 3f, -1, 0.5f, 512, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							iLocal_684++;
						}
						break;
					
					case 2:
						STREAMING::REQUEST_ANIM_DICT("missexile2");
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1878.672f, 4479.327f, 25.4878f, 4f, 4f, 2f, 0, 1, 0))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.672f, 4479.327f, 25.4878f, 2f, -1, 0.5f, 512, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							}
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_14_chop_sniff_fwds", 4f, -1.5f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 1.5f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_684++;
							}
						}
						break;
					
					case 3:
						break;
					
					case 101:
						switch (GlobalFunc_8315())
						{
							case 1:
								if (Local_2097 != 2)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
									}
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
									{
										if (func_484(Local_1648, -2015108952))
										{
											TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
										}
									}
									else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
									{
										if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
										{
											if (func_484(Local_1648, -875674219))
											{
												uVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
												if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar0))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
												}
											}
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 2.5f, 2.5f, 2.5f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, 0f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
								}
								break;
							
							case 0:
								if (Local_2097 != 2)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
										{
											fVar1 = 0f;
											fVar2 = 0f;
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar1, &fVar2);
											if (MISC::ABSF((fVar1 - 0.5f)) < 0.1f)
											{
												if (MISC::ABSF((fVar2 - 0.5f)) < 0.1f)
												{
													GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0);
													if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
													{
														TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
														TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 0, 10, -1);
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
														TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
														iLocal_684++;
													}
													else
													{
														func_473();
														iLocal_684 = 105;
													}
													func_458("TM44_chop1", 1);
													func_458("chop_help2", 1);
													iLocal_685 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								break;
							
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, uLocal_2019[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, uLocal_2019[1], 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											uVar3 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar3))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, uLocal_2019[1], 0);
											}
										}
									}
								}
								break;
						}
						if (func_484(Local_1648, -2015108952))
						{
						}
						break;
					
					case 102:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
						}
						if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
						{
							if (iLocal_841 == 1)
							{
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_0", &iVar4);
								iVar4 = (iVar4 - 1);
								if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_0", iVar4, &Var5))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, Var5, 3f, 3f, 3f, 0, 1, 0))
									{
									}
								}
							}
							else if (iLocal_841 > 1)
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &iVar8);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), &iVar9);
								iVar10 = (iVar8 - iVar9);
								if (iVar10 >= 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									iLocal_684 = 103;
								}
							}
						}
						else
						{
							func_471();
							TASK::CLEAR_PED_TASKS(Local_1648);
							iLocal_684 = 104;
						}
						break;
					
					case 103:
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &iVar11);
						if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), &iVar12);
							iVar13 = (iVar11 - iVar12);
							if (iVar13 < -4)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
								}
								if (func_484(Local_1648, 242628503))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_1", iVar12, 10, -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
							}
							else if (iVar13 < -1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 2f, 0);
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[1 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
										TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									}
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 1f, 0);
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[1 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
										TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_471();
							iLocal_684 = 104;
						}
						break;
					
					case 104:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar14 = 0f;
										fVar15 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar14, &fVar15);
										if (MISC::ABSF((fVar14 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar15 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													func_473();
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 105:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 2.5f, 0);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), Local_741) < 0.25f)
						{
							Local_747 = { Local_741 };
							Local_750 = { Local_744 };
							iLocal_691 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_691, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1148846080, 0);
							iLocal_684 = 106;
						}
						break;
					
					case 106:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) >= 1f)
							{
								TASK::CLEAR_PED_TASKS(Local_1648);
								iLocal_684++;
							}
						}
						break;
					
					case 107:
						if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 2.5f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[0 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 2.5f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[0 /*33*/], -1, 8f, 0f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[0 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[0 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[0 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_458("TM44_chop4", 0);
							func_471();
							iLocal_684 = 108;
						}
						break;
					
					case 108:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar16 = 0f;
										fVar17 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar16, &fVar17);
										if (MISC::ABSF((fVar16 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar17 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 109:
						if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[2 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[2 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[2 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[2 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[2 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[2 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_458("TM44_chop4", 0);
							func_471();
							iLocal_684 = 110;
						}
						break;
					
					case 110:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar18 = 0f;
										fVar19 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar18, &fVar19);
										if (MISC::ABSF((fVar18 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar19 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 111:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[3 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
									}
								}
							}
						}
						break;
					
					case 200:
						func_473();
						iLocal_684++;
						break;
					
					case 201:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), Local_741) < 0.25f)
						{
							Local_747 = { Local_741 };
							Local_750 = { Local_744 };
							iLocal_691 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_691, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1.5f, 0);
							iLocal_684++;
						}
						break;
					
					case 202:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) >= 1f)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1559.791f, 4417.947f, 3.8546f, 2f, -1, -1f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.694f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_684++;
							}
						}
						break;
					
					case 203:
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1541.694f, 4476.719f, 17.715f, 1.5f, 1.5f, 2f, 0, 1, 0))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.694f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							}
						}
						else if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else if (func_484(Local_1648, -2017877118))
							{
								if (GlobalFunc_588(&iLocal_685, 5000))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "missexile2", "fra_0_ig_1_chop_growl", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "fra_0_ig_1_chop_growl", 8f, -8f, -1, 0, 0, 0, 0, 0);
										iLocal_685 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (iLocal_843 >= 21)
							{
								iLocal_684++;
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 204:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.93f, 4484.74f, 18.5944f, 3f, -1, 0.2f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_684++;
						if (PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							iLocal_684 = 300;
						}
						break;
					
					case 205:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1551.93f, 4484.74f, 18.5944f, 2.5f, 2.5f, 2f, 0, 1, 0))
						{
							if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
							{
								TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
								iLocal_684++;
							}
							else
							{
								iLocal_684 = 300;
							}
						}
						break;
					
					case 206:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@");
							if (!iLocal_801)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 2.5f, 2.5f, 5f, 0, 1, 0))
								{
									if (func_484(Local_1648, 1227113341) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
									{
										TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
										PED::FORCE_PED_MOTION_STATE(Local_1648, -1115154469, 0, 0, 0);
										iLocal_685 = MISC::GET_GAME_TIMER();
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@"))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 4f, -4f, -1, 0, 0, 0, 0, 0);
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 9f, 9f, 5f, 0, 1, 0))
							{
								if ((func_484(Local_1648, 1227113341) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 1f, 3f, 2f, 0);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 5f, 0, 1, 0))
							{
								if (func_484(Local_1648, 1056466932))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_1648, Local_887[3 /*33*/], -1f, 2f, 0f, 3f, -1, 0.1f, 1);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (GlobalFunc_588(&iLocal_685, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
											iLocal_685 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 300:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
						{
							if (func_484(Local_1648, -2015108952))
							{
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
						{
							if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (func_484(Local_1648, -875674219))
								{
									uVar20 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
									if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar20))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						break;
					
					case 400:
						if ((ENTITY::IS_ENTITY_AT_COORD(Local_1714, Local_753[iLocal_700 /*3*/], 20f, 20f, 5.5f, 0, 1, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714)) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
						{
							Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							Local_763 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1648, Local_1648.f_17, 2f, 60000, 0.15f, 4608, Local_763.f_2);
							iLocal_684++;
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 45f)
						{
							if (!PED::IS_PED_IN_VEHICLE(uLocal_2019[1], Local_1714, 1))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, uLocal_2019[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, uLocal_2019[1], 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											uVar21 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar21))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, uLocal_2019[1], 0);
											}
										}
									}
								}
							}
						}
						break;
					
					case 401:
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
						{
							Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, Local_1648.f_17, 0.3f, 0.3f, 2f, 0, 1, 0))
							{
								if (func_484(Local_1648, 713668775))
								{
									if (GlobalFunc_588(&iLocal_720, 10000))
									{
										iLocal_720 = MISC::GET_GAME_TIMER();
										Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
										Local_763 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1648, Local_1648.f_17, 2f, 60000, 0.15f, 4608, Local_763.f_2);
										iLocal_720 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_484(Local_1648, 713668775))
							{
								Local_747 = { 0f, 0f, 0f };
								Local_750 = { 0f, 0f, 0f };
								Local_1648.f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, Local_1648.f_23, "missexile2", "chop_get_in_frogger_rds", 8f, -8f, 1, 0, 8f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_1648.f_23, Local_1714, 0);
								iLocal_684++;
							}
						}
						else if (!func_484(Local_1648, 713668775))
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
						}
						break;
					
					case 402:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1648.f_23))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1648.f_23) >= 0.99f)
							{
								TASK::CLEAR_PED_TASKS(Local_1648);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1714, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1714, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
								iLocal_684++;
							}
						}
						else
						{
							iLocal_684 = 401;
						}
						break;
					
					case 403:
						break;
				}
				break;
			
			case 0:
				switch (iLocal_684)
				{
					case 0:
						PED::FORCE_PED_MOTION_STATE(Local_1648, -530524, 1, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1891.752f, 4432.023f, 43.7444f, 2f, -1, -1f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_684++;
						break;
					
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1895.834f, 4431.216f, 43.28f, 4f, 4f, 2f, 0, 1, 0) || !GlobalFunc_111())
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.672f, 4479.327f, 25.4878f, 3f, -1, 0.5f, 512, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							iLocal_684++;
						}
						break;
					
					case 2:
						STREAMING::REQUEST_ANIM_DICT("missexile2");
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1878.672f, 4479.327f, 25.4878f, 4f, 4f, 2f, 0, 1, 0))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.672f, 4479.327f, 25.4878f, 2f, -1, 0.5f, 512, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							}
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_14_chop_sniff_fwds", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_684++;
							}
						}
						break;
					
					case 3:
						break;
					
					case 101:
						switch (GlobalFunc_8315())
						{
							case 1:
								if (Local_2097 != 2)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
									}
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
									{
										if (func_484(Local_1648, -2015108952))
										{
											TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
										}
									}
									else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
									{
										if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
										{
											if (func_484(Local_1648, -875674219))
											{
												uVar22 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
												if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar22))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
												}
											}
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 2.5f, 2.5f, 2.5f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, 0f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
								}
								break;
							
							case 0:
								if (Local_2097 != 2)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
										{
											fVar23 = 0f;
											fVar24 = 0f;
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar23, &fVar24);
											if (MISC::ABSF((fVar23 - 0.5f)) < 0.1f)
											{
												if (MISC::ABSF((fVar24 - 0.5f)) < 0.1f)
												{
													GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0);
													if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
													{
														TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
														TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 0, 10, -1);
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
														TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
														iLocal_684++;
													}
													else
													{
														func_473();
														iLocal_684 = 105;
													}
													func_458("TM44_chop1", 1);
													func_458("chop_help2", 1);
													iLocal_685 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								break;
							
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, uLocal_2019[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, uLocal_2019[1], 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											uVar25 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar25))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, uLocal_2019[1], 0);
											}
										}
									}
								}
								break;
						}
						if (func_484(Local_1648, -2015108952))
						{
						}
						break;
					
					case 102:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
						}
						if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
						{
							if (iLocal_841 == 1)
							{
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_0", &iVar26);
								iVar26 = (iVar26 - 1);
								if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_0", iVar26, &Var27))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, Var27, 3f, 3f, 3f, 0, 1, 0))
									{
									}
								}
							}
							else if (iLocal_841 > 1)
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &iVar30);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), &iVar31);
								iVar32 = (iVar30 - iVar31);
								if (iVar32 >= 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									iLocal_684 = 103;
								}
							}
						}
						else
						{
							func_471();
							TASK::CLEAR_PED_TASKS(Local_1648);
							iLocal_684 = 104;
						}
						break;
					
					case 103:
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &iVar33);
						if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), &iVar34);
							iVar35 = (iVar33 - iVar34);
							if (iVar35 < -4)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
								}
								if (func_484(Local_1648, 242628503))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_1", iVar34, 10, -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
							}
							else if (iVar35 < -1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 2f, 0);
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[1 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
										TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									}
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 1f, 0);
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[1 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
										TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_471();
							iLocal_684 = 104;
						}
						break;
					
					case 104:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar36 = 0f;
										fVar37 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar36, &fVar37);
										if (MISC::ABSF((fVar36 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar37 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													func_473();
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 105:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 2.5f, 0);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), Local_741) < 0.25f)
						{
							Local_747 = { Local_741 };
							Local_750 = { Local_744 };
							iLocal_691 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_691, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1148846080, 0);
							iLocal_684 = 106;
						}
						break;
					
					case 106:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) >= 1f)
							{
								TASK::CLEAR_PED_TASKS(Local_1648);
								iLocal_684++;
							}
						}
						break;
					
					case 107:
						if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 2.5f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[0 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 2.5f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[0 /*33*/], -1, 8f, 0f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[0 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[0 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[0 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_458("TM44_chop4", 0);
							func_471();
							iLocal_684 = 108;
						}
						break;
					
					case 108:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar38 = 0f;
										fVar39 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar38, &fVar39);
										if (MISC::ABSF((fVar38 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar39 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 109:
						if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[2 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[2 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[2 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[2 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[2 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[2 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_458("TM44_chop4", 0);
							func_471();
							iLocal_684 = 110;
						}
						break;
					
					case 110:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar40 = 0f;
										fVar41 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar40, &fVar41);
										if (MISC::ABSF((fVar40 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar41 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 111:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[3 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
									}
								}
							}
						}
						break;
					
					case 200:
						func_473();
						iLocal_684++;
						break;
					
					case 201:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), Local_741) < 0.25f)
						{
							Local_747 = { Local_741 };
							Local_750 = { Local_744 };
							iLocal_691 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_691, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1.5f, 0);
							iLocal_684++;
						}
						break;
					
					case 202:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) >= 1f)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1559.791f, 4417.947f, 3.8546f, 2f, -1, -1f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.694f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_684++;
							}
						}
						break;
					
					case 203:
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1541.694f, 4476.719f, 17.715f, 1.5f, 1.5f, 2f, 0, 1, 0))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.694f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							}
						}
						else if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else if (func_484(Local_1648, -2017877118))
							{
								if (GlobalFunc_588(&iLocal_685, 5000))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "missexile2", "fra_0_ig_1_chop_growl", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "fra_0_ig_1_chop_growl", 8f, -8f, -1, 0, 0, 0, 0, 0);
										iLocal_685 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (iLocal_843 >= 21)
							{
								iLocal_684++;
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 204:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.93f, 4484.74f, 18.5944f, 3f, -1, 0.2f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_684++;
						if (PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							iLocal_684 = 300;
						}
						break;
					
					case 205:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1551.93f, 4484.74f, 18.5944f, 2.5f, 2.5f, 2f, 0, 1, 0))
						{
							if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
							{
								TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
								iLocal_684++;
							}
							else
							{
								iLocal_684 = 300;
							}
						}
						break;
					
					case 206:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@");
							if (!iLocal_801)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 2.5f, 2.5f, 5f, 0, 1, 0))
								{
									if (func_484(Local_1648, 1227113341) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
									{
										TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
										PED::FORCE_PED_MOTION_STATE(Local_1648, -1115154469, 0, 0, 0);
										iLocal_685 = MISC::GET_GAME_TIMER();
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@"))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 4f, -4f, -1, 0, 0, 0, 0, 0);
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 9f, 9f, 5f, 0, 1, 0))
							{
								if ((func_484(Local_1648, 1227113341) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 1f, 3f, 2f, 0);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 5f, 0, 1, 0))
							{
								if (func_484(Local_1648, 1056466932))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_1648, Local_887[3 /*33*/], -1f, 2f, 0f, 3f, -1, 0.1f, 1);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (GlobalFunc_588(&iLocal_685, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
											iLocal_685 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 300:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
						{
							if (func_484(Local_1648, -2015108952))
							{
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
						{
							if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (func_484(Local_1648, -875674219))
								{
									uVar42 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
									if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar42))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						break;
					
					case 400:
						if ((ENTITY::IS_ENTITY_AT_COORD(Local_1714, Local_753[iLocal_700 /*3*/], 20f, 20f, 5.5f, 0, 1, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714)) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
						{
							Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							Local_763 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1648, Local_1648.f_17, 2f, 60000, 0.15f, 4608, Local_763.f_2);
							iLocal_684++;
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 45f)
						{
							if (!PED::IS_PED_IN_VEHICLE(uLocal_2019[1], Local_1714, 1))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, uLocal_2019[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, uLocal_2019[1], 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											uVar43 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar43))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, uLocal_2019[1], 0);
											}
										}
									}
								}
							}
						}
						break;
					
					case 401:
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
						{
							Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, Local_1648.f_17, 0.3f, 0.3f, 2f, 0, 1, 0))
							{
								if (func_484(Local_1648, 713668775))
								{
									Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
									Local_763 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1648, Local_1648.f_17, 2f, 60000, 0.15f, 4608, Local_763.f_2);
								}
							}
							else if (func_484(Local_1648, 713668775))
							{
								Local_747 = { 0f, 0f, 0f };
								Local_750 = { 0f, 0f, 0f };
								Local_1648.f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, Local_1648.f_23, "missexile2", "chop_get_in_frogger_rds", 8f, -8f, 1, 0, 8f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_1648.f_23, Local_1714, 0);
								iLocal_684++;
							}
						}
						else if (!func_484(Local_1648, 713668775))
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
						}
						break;
					
					case 402:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1648.f_23))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1648.f_23) >= 0.99f)
							{
								TASK::CLEAR_PED_TASKS(Local_1648);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1714, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1714, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
								iLocal_684++;
							}
						}
						else
						{
							iLocal_684 = 401;
						}
						break;
					
					case 403:
						break;
				}
				break;
			
			case 1:
				switch (iLocal_684)
				{
					case 0:
						PED::FORCE_PED_MOTION_STATE(Local_1648, -530524, 1, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1891.752f, 4432.023f, 43.7444f, 2f, -1, -1f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_684++;
						break;
					
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1895.834f, 4431.216f, 43.28f, 4f, 4f, 2f, 0, 1, 0) || !GlobalFunc_111())
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.672f, 4479.327f, 25.4878f, 3f, -1, 0.5f, 512, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							iLocal_684++;
						}
						break;
					
					case 2:
						STREAMING::REQUEST_ANIM_DICT("missexile2");
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1878.672f, 4479.327f, 25.4878f, 4f, 4f, 2f, 0, 1, 0))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.672f, 4479.327f, 25.4878f, 2f, -1, 0.5f, 512, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							}
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_14_chop_sniff_fwds", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_684++;
							}
						}
						break;
					
					case 3:
						break;
					
					case 101:
						switch (GlobalFunc_8315())
						{
							case 1:
								if (Local_2097 != 2)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
									}
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
									{
										if (func_484(Local_1648, -2015108952))
										{
											TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
										}
									}
									else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
									{
										if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
										{
											if (func_484(Local_1648, -875674219))
											{
												uVar44 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
												if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar44))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
												}
											}
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 2.5f, 2.5f, 2.5f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, 0f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
								}
								break;
							
							case 0:
								if (Local_2097 != 2)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
										{
											fVar45 = 0f;
											fVar46 = 0f;
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar45, &fVar46);
											if (MISC::ABSF((fVar45 - 0.5f)) < 0.1f)
											{
												if (MISC::ABSF((fVar46 - 0.5f)) < 0.1f)
												{
													GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0);
													if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
													{
														TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
														TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 0, 10, -1);
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
														TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
														iLocal_684++;
													}
													else
													{
														func_473();
														iLocal_684 = 105;
													}
													func_458("TM44_chop1", 1);
													func_458("chop_help2", 1);
													iLocal_685 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								break;
							
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, uLocal_2019[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, uLocal_2019[1], 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											uVar47 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar47))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, uLocal_2019[1], 0);
											}
										}
									}
								}
								break;
						}
						if (func_484(Local_1648, -2015108952))
						{
						}
						break;
					
					case 102:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
						}
						if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
						{
							if (iLocal_841 == 1)
							{
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_0", &iVar48);
								iVar48 = (iVar48 - 1);
								if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_0", iVar48, &Var49))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, Var49, 3f, 3f, 3f, 0, 1, 0))
									{
									}
								}
							}
							else if (iLocal_841 > 1)
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &iVar52);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), &iVar53);
								iVar54 = (iVar52 - iVar53);
								if (iVar54 >= 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									iLocal_684 = 103;
								}
							}
						}
						else
						{
							func_471();
							TASK::CLEAR_PED_TASKS(Local_1648);
							iLocal_684 = 104;
						}
						break;
					
					case 103:
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &iVar55);
						if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), &iVar56);
							iVar57 = (iVar55 - iVar56);
							if (iVar57 < -4)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
								}
								if (func_484(Local_1648, 242628503))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_1", iVar56, 10, -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
							}
							else if (iVar57 < -1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 2f, 0);
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[1 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
										TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									}
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 1f, 0);
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[1 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_887[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
										TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_471();
							iLocal_684 = 104;
						}
						break;
					
					case 104:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar58 = 0f;
										fVar59 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar58, &fVar59);
										if (MISC::ABSF((fVar58 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar59 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													func_473();
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 105:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 2.5f, 0);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), Local_741) < 0.25f)
						{
							Local_747 = { Local_741 };
							Local_750 = { Local_744 };
							iLocal_691 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_691, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1148846080, 0);
							iLocal_684 = 106;
						}
						break;
					
					case 106:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) >= 1f)
							{
								TASK::CLEAR_PED_TASKS(Local_1648);
								iLocal_684++;
							}
						}
						break;
					
					case 107:
						if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 2.5f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[0 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 2.5f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[0 /*33*/], -1, 8f, 0f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[0 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[0 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[0 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_458("TM44_chop4", 0);
							func_471();
							iLocal_684 = 108;
						}
						break;
					
					case 108:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar60 = 0f;
										fVar61 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar60, &fVar61);
										if (MISC::ABSF((fVar60 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar61 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 109:
						if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[2 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[2 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[2 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[2 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[2 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[2 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
							func_458("TM44_chop4", 0);
							func_471();
							iLocal_684 = 110;
						}
						break;
					
					case 110:
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1648))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar62 = 0f;
										fVar63 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), &fVar62, &fVar63);
										if (MISC::ABSF((fVar62 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar63 - 0.5f)) < 0.1f)
											{
												if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_685 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(1);
													iLocal_684++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					
					case 111:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
							{
								if (func_484(Local_1648, -2015108952))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, Local_887[3 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
							{
								if (!func_470("TM44_chop4"))
								{
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_458("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 50f))
								{
									if (func_484(Local_1648, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
									}
								}
							}
						}
						break;
					
					case 200:
						func_473();
						iLocal_684++;
						break;
					
					case 201:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), Local_741) < 0.25f)
						{
							Local_747 = { Local_741 };
							Local_750 = { Local_744 };
							iLocal_691 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_691, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1.5f, 0);
							iLocal_684++;
						}
						break;
					
					case 202:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) >= 1f)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1559.791f, 4417.947f, 3.8546f, 2f, -1, -1f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.694f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_684++;
							}
						}
						break;
					
					case 203:
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1541.694f, 4476.719f, 17.715f, 1.5f, 1.5f, 2f, 0, 1, 0))
						{
							if (func_484(Local_1648, 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.694f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							}
						}
						else if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else if (func_484(Local_1648, -2017877118))
							{
								if (GlobalFunc_588(&iLocal_685, 5000))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "missexile2", "fra_0_ig_1_chop_growl", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "fra_0_ig_1_chop_growl", 8f, -8f, -1, 0, 0, 0, 0, 0);
										iLocal_685 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (iLocal_843 >= 21)
							{
								iLocal_684++;
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 204:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.93f, 4484.74f, 18.5944f, 3f, -1, 0.2f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_684++;
						if (PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							iLocal_684 = 300;
						}
						break;
					
					case 205:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, -1551.93f, 4484.74f, 18.5944f, 2.5f, 2.5f, 2f, 0, 1, 0))
						{
							if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
							{
								TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
								iLocal_684++;
							}
							else
							{
								iLocal_684 = 300;
							}
						}
						break;
					
					case 206:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@");
							if (!iLocal_801)
							{
								if (!(TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), &iVar64) && iVar64 >= 40))
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 2.5f, 2.5f, 5f, 0, 1, 0))
									{
										if (func_484(Local_1648, 1227113341) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
										{
											TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
											PED::FORCE_PED_MOTION_STATE(Local_1648, -1115154469, 0, 0, 0);
											iLocal_685 = MISC::GET_GAME_TIMER();
										}
									}
									else if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@"))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 4f, -4f, -1, 0, 0, 0, 0, 0);
										}
									}
								}
								else
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 1f, 0, 1, 0))
									{
										if (func_484(Local_1648, 1227113341) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
										{
											TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
											PED::FORCE_PED_MOTION_STATE(Local_1648, -1115154469, 0, 0, 0);
											iLocal_685 = MISC::GET_GAME_TIMER();
										}
									}
									STREAMING::REQUEST_ANIM_DICT("missfra0_chop_find");
									if (STREAMING::HAS_ANIM_DICT_LOADED("missfra0_chop_find"))
									{
										ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], -1f, -1f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 1f, -1f, 2f), 7f, 0, 1, 0);
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1648, 1227113341) == 1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_887[3 /*33*/].f_23))
										{
											if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), &iVar64) && iVar64 >= 40)
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], -1f, -1f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 1f, -1f, 2f), 3.5f, 0, 1, 0))
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, Local_887[3 /*33*/].f_23, "missexile2", "take_down_bad_guy_chop", 1f, -8f, 5, 0, 1f, 0);
													iLocal_684 = 207;
												}
											}
										}
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 9f, 9f, 5f, 0, 1, 0))
							{
								if ((func_484(Local_1648, 1227113341) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_GO_TO_ENTITY(Local_1648, Local_887[3 /*33*/], -1, 1f, 3f, 2f, 0);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 5f, 0, 1, 0))
							{
								if (func_484(Local_1648, 1056466932))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_1648, Local_887[3 /*33*/], -1f, 2f, 0f, 3f, -1, 0.1f, 1);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (GlobalFunc_588(&iLocal_685, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
											iLocal_685 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 207:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_887[3 /*33*/].f_23))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_887[3 /*33*/].f_23) >= 1f)
								{
									PED::SET_PED_CAN_RAGDOLL(Local_1648, 1);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1648, 16);
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_1648, Local_887[3 /*33*/], -2f, 0f, 0f, 1f, -1, 0.1f, 1);
									iLocal_684++;
								}
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 208:
						if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], -2f, 0f, 0f), 1f, 1f, 5f, 0, 1, 0))
							{
								if (func_484(Local_1648, 1056466932))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_1648, Local_887[3 /*33*/], -2f, 0f, 0f, 1f, -1, 0.1f, 1);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_1648, Local_887[3 /*33*/], 40f))
							{
								if (func_484(Local_1648, -875674219) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, Local_887[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (GlobalFunc_588(&iLocal_685, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_1648, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
											iLocal_685 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_684 = 300;
						}
						break;
					
					case 300:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
						{
							if (func_484(Local_1648, -2015108952))
							{
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
						{
							if (!PED::IS_PED_FACING_PED(Local_1648, PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (func_484(Local_1648, -875674219))
								{
									uVar65 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
									if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar65))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						break;
					
					case 400:
						if ((ENTITY::IS_ENTITY_AT_COORD(Local_1714, Local_753[iLocal_700 /*3*/], 20f, 20f, 5.5f, 0, 1, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714)) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
						{
							Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							Local_763 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1648, Local_1648.f_17, 2f, 60000, 0.15f, 4608, Local_763.f_2);
							iLocal_684++;
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 45f)
						{
							if (!PED::IS_PED_IN_VEHICLE(uLocal_2019[1], Local_1714, 1))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
								{
									if (func_484(Local_1648, -2015108952))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_1648, uLocal_2019[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2019[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, 0, 1, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_1648, uLocal_2019[1], 50f))
									{
										if (func_484(Local_1648, -875674219))
										{
											uVar66 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(uVar66))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1648, uLocal_2019[1], 0);
											}
										}
									}
								}
							}
						}
						break;
					
					case 401:
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
						{
							Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1648, Local_1648.f_17, 0.3f, 0.3f, 2f, 0, 1, 0))
							{
								if (func_484(Local_1648, 713668775))
								{
									Local_1648.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
									Local_763 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_1714, 1), ENTITY::GET_ENTITY_ROTATION(Local_1714, 2), 0f, 2) };
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1648, Local_1648.f_17, 2f, 60000, 0.15f, 4608, Local_763.f_2);
								}
							}
							else if (func_484(Local_1648, 713668775))
							{
								Local_747 = { 0f, 0f, 0f };
								Local_750 = { 0f, 0f, 0f };
								Local_1648.f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, Local_1648.f_23, "missexile2", "chop_get_in_frogger_rds", 8f, -8f, 1, 0, 8f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_1648.f_23, Local_1714, 0);
								iLocal_684++;
							}
						}
						else if (!func_484(Local_1648, 713668775))
						{
							TASK::CLEAR_PED_TASKS(Local_1648);
						}
						break;
					
					case 402:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1648.f_23))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1648.f_23) >= 0.99f)
							{
								TASK::CLEAR_PED_TASKS(Local_1648);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1714, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1714, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
								iLocal_684++;
							}
						}
						else
						{
							iLocal_684 = 401;
						}
						break;
					
					case 403:
						break;
				}
				break;
		}
		func_468();
	}
}

void func_468()//Position - 0x5DC04
{
	if (Local_2097 == 2)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_2097.f_16))
		{
			if (GlobalFunc_588(&iLocal_688, 500))
			{
				Local_2097.f_16 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_chop_trail", Local_1648, 0f, 10f, 0.3f, 0f, 0f, 0f, 7f, 0, 0, 0);
				iLocal_688 = MISC::GET_GAME_TIMER();
			}
		}
		else if (GlobalFunc_588(&iLocal_688, 500))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_2097.f_16))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_2097.f_16, 0);
				iLocal_688 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_2097.f_16))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_2097.f_16, 0);
	}
}


bool func_470(char* sParam0)//Position - 0x5DCBB
{
	return func_460(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_471()//Position - 0x5DCCF
{
	if (!func_470("chop_help3"))
	{
		if ((!HUD::IS_HELP_MESSAGE_ON_SCREEN() && GlobalFunc_8315() == 0) && !CAM::DOES_CAM_EXIST(Local_2063.f_9))
		{
			GlobalFunc_159("chop_help3", -1);
			func_458("chop_help3", 1);
		}
	}
}


void func_473()//Position - 0x5DD31
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 126, 520, 227);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_741, 2f, -1, Local_744.f_2, 1056964608);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
	TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
	PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1648, 3f);
	PED::FORCE_PED_MOTION_STATE(Local_1648, -1115154469, 1, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
}











int func_484(int iParam0, int iParam1)//Position - 0x5E3FB
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}


void func_486(int iParam0)//Position - 0x5E445
{
	if (!PED::IS_PED_INJURED(iParam0->f_3) && CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_3))
		{
			iParam0->f_7 = (iParam0->f_7 + (0.1f * SYSTEM::TIMESTEP()));
			if (iParam0->f_7 >= 0.32f)
			{
				iParam0->f_7 = 0.32f;
			}
		}
		else
		{
			iParam0->f_7 = (iParam0->f_7 - (0.1f * SYSTEM::TIMESTEP()));
			if (iParam0->f_7 <= 0.05f)
			{
				iParam0->f_7 = 0.05f;
			}
		}
		CAM::ATTACH_CAM_TO_PED_BONE(iParam0->f_4, iParam0->f_3, 31086, 0f, iParam0->f_6, iParam0->f_7, 1);
	}
}

void func_487(var uParam0, int iParam1, int iParam2)//Position - 0x5E4DF
{
	if ((iParam1 != iParam1 && iParam2 != iParam2) && uParam0->f_23)
	{
	}
}

void func_488()//Position - 0x5E502
{
	int iVar0;
	
	if (iLocal_2336)
	{
		GlobalFunc_4972(-1574.7f, 4344.9f, 43.4f, 42.6626f, 0, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1588.786f, 4346.24f, 2.0581f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 21.5456f);
	}
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_887[3 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1804.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1774.f_13, "lkexile2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_3");
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_heavysniper"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT(sLocal_7363);
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2018)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_887[3 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1804.f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1774.f_13, "lkexile2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_3")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_heavysniper"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_7363)) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) || !STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, 0, 1, 1, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	MISC::CLEAR_AREA(-1664.92f, 4438.81f, 80f, 10000f, 1, 0, 0, 0);
	STREAMING::SET_FOCUS_POS_AND_VEL(-1664.92f, 4438.81f, 80f, 0f, 0f, 0f);
	GlobalFunc_7632(1);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_846), 0f, 1, 1);
	GlobalFunc_534(Local_1714, 0);
	VEHICLE::SET_VEHICLE_EXTRA(Local_1714, 12, true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_1714, 0, 1, 1, 1, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 4, sLocal_846, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
	if (GlobalFunc_8315() != 0)
	{
		func_341(0, 0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
	PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), -1, 1, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), joaat("component_at_scope_max"));
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 1048576000);
	PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
	PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	func_487(&uLocal_2019, 0, 9);
	func_487(&uLocal_2019, 0, 12);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, 1);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_638 = 1;
	}
	else
	{
		iLocal_632 = 1;
	}
	func_40(&(uLocal_2019[2]), 2, Local_1714, -1, 1, 0, 0);
	func_456(uLocal_2019[2]);
	func_455(&(uLocal_2019[2]), 1);
	GlobalFunc_11267(uLocal_2019[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 2, uLocal_2019[2], "trevor", 0, 1);
	func_388(&(uLocal_2019[1]), 1, -1683.497f, 4454.595f, 1.566f, 239.1512f, 0, 0, 0);
	func_456(uLocal_2019[1]);
	func_455(&(uLocal_2019[1]), 1);
	GlobalFunc_11267(uLocal_2019[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_450(uLocal_2019[1], joaat("weapon_carbinerifle"), 100, 0, 0, 1);
	GlobalFunc_173(&uLocal_2114, 1, uLocal_2019[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_2019[1], 1);
	ENTITY::SET_ENTITY_LOD_DIST(uLocal_2019[1], 300);
	GlobalFunc_2518(&uLocal_2019, 1, 1);
	PED::SET_PED_USING_ACTION_MODE(uLocal_2019[1], 1, -1, 0);
	iLocal_693 = 999;
	Local_1648.f_11 = { -1679.821f, 4455.988f, 1.2653f };
	Local_1648.f_20 = 114.6932f;
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	func_33(Local_1648);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
	ENTITY::SET_ENTITY_LOD_DIST(Local_1648, 400);
	iLocal_684 = 200;
	GlobalFunc_729(&uLocal_2019, 2, 0);
	func_31(&uLocal_2019, 2, 1);
	Local_2097.f_1 = 2;
	Local_2097.f_3 = Local_1648;
	func_29(&Local_2097);
	Local_2097 = 0;
	func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
	TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	iVar0 = 1;
	while (iVar0 <= (Local_1020 - 1))
	{
		if (iVar0 != 7 && iVar0 != 14)
		{
			func_449(&(Local_1020[iVar0 /*33*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_463(&(Local_887[iVar0 /*33*/]));
		HUD::REMOVE_BLIP(&(Local_887[iVar0 /*33*/].f_2));
		PED::SET_PED_DIES_IN_WATER(Local_887[iVar0 /*33*/], 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_887[iVar0 /*33*/], 1);
		iVar0++;
	}
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744, 0);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, -0.2f, 0.5f, 0f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.2f, 0.5f, 0f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.3f, -0.1f, 0.75f, 200f, 200f, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1744);
	Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -2442.858f, 3670.484f, 12.454f, 0f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 12, 12);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 3, sLocal_846, 1);
	VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
	VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
	Local_1774 = VEHICLE::CREATE_VEHICLE(Local_1774.f_1, Local_1774.f_3, Local_1774.f_6, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1774, 3);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1774);
	ENTITY::SET_ENTITY_PROOFS(Local_1774, 1, 1, 1, 1, 1, 0, 0, 0);
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::START_AUDIO_SCENE("EXILE_2_SNIPE_STAGE");
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_SNIPE_RT");
	func_444(0, -12f, -41f, 0);
	iLocal_788 = 0;
	func_489(0);
	iLocal_2333 = 7;
	iLocal_2334 = 1;
	GlobalFunc_Checkpoint2(3, "start of sniper stage", 0, 0, 0, 1);
}

void func_489(bool bParam0)//Position - 0x5EDF6
{
	float fVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if ((GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0 && !Local_2097 == 2) && !func_496())
	{
		CAM::_0xDD79DF9F4D26E1C9();
		if (iLocal_632)
		{
			if (PAD::IS_CONTROL_PRESSED(0, 25))
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				iLocal_632 = 0;
			}
		}
		if (iLocal_638)
		{
			if (!CAM::DOES_CAM_EXIST(uLocal_877))
			{
				func_495();
			}
		}
		if (!iLocal_646)
		{
			iLocal_646 = 1;
		}
		if (iLocal_789 || iLocal_638)
		{
			if (!GlobalFunc_588(&iLocal_689, 2500))
			{
				switch (iLocal_690)
				{
					case 0:
						if (iLocal_790)
						{
							if (!PED::IS_PED_INJURED(Local_1648))
							{
								fLocal_728 = func_494(Local_1648);
								fLocal_729 = func_492(Local_1648);
							}
						}
						else if (iLocal_791)
						{
							if (!PED::IS_PED_INJURED(uLocal_2019[1]))
							{
								fLocal_728 = func_494(uLocal_2019[1]);
								fLocal_729 = func_492(uLocal_2019[1]);
							}
						}
						else if (iLocal_792)
						{
							if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
							{
								fLocal_728 = func_494(Local_887[0 /*33*/]);
								fLocal_729 = func_492(Local_887[0 /*33*/]);
							}
						}
						else if (iLocal_793)
						{
							if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
							{
								fLocal_728 = func_494(Local_887[1 /*33*/]);
								fLocal_729 = func_492(Local_887[1 /*33*/]);
							}
						}
						else if (iLocal_794)
						{
							if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
							{
								fLocal_728 = func_494(Local_887[2 /*33*/]);
								fLocal_729 = func_492(Local_887[2 /*33*/]);
							}
						}
						else if (iLocal_795)
						{
							if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
							{
								fLocal_728 = func_494(Local_887[3 /*33*/]);
								fLocal_729 = func_492(Local_887[3 /*33*/]);
							}
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_728);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_729, 1065353216);
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(2.8f);
						iLocal_690++;
						break;
					
					case 1:
						break;
				}
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(14);
			}
			else
			{
				iLocal_790 = 0;
				iLocal_791 = 0;
				iLocal_792 = 0;
				iLocal_793 = 0;
				iLocal_794 = 0;
				iLocal_795 = 0;
				if (!iLocal_638)
				{
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				}
				iLocal_789 = 0;
			}
		}
		if ((!iLocal_789 && !iLocal_632) && !iLocal_638)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
			}
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
			}
			if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if (CAM::DOES_CAM_EXIST(uLocal_877))
				{
					if (!CAM::IS_CAM_ACTIVE(uLocal_877))
					{
						CAM::SET_CAM_ACTIVE(uLocal_877, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
					}
					if (bParam0)
					{
						CAM::SHAKE_CAM(uLocal_877, "medium_EXPLOSION_SHAKE", 0.15f);
						bLocal_635 = true;
						iLocal_717 = MISC::GET_GAME_TIMER();
					}
					if (bLocal_635)
					{
						if (GlobalFunc_588(&iLocal_717, 1000))
						{
							if (CAM::IS_CAM_SHAKING(uLocal_877))
							{
								CAM::STOP_CAM_SHAKING(uLocal_877, 0);
							}
						}
					}
					if (!CAM::IS_CAM_SHAKING(uLocal_877))
					{
						CAM::SHAKE_CAM(uLocal_877, "HAND_SHAKE", 1f);
					}
				}
				switch (iLocal_836)
				{
					case 0:
						func_495();
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						iLocal_836++;
						break;
					
					case 1:
						if (!GlobalFunc_126(1))
						{
							GlobalFunc_612(&uVar1, &uVar2, &iVar3, &iVar4, 0);
							if (!PAD::IS_LOOK_INVERTED())
							{
								iVar4 = (iVar4 * -1);
							}
							if (iVar4 > 28 || iVar4 < -28)
							{
								fVar0 = SYSTEM::TO_FLOAT(iVar4);
								fVar0 = (fVar0 * fVar0);
								fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
								fVar0 = (fVar0 * fLocal_860);
								if (iVar4 < 0)
								{
									fVar0 = (fVar0 * -1f);
								}
								Local_853.x = (Local_853.x + fVar0);
								if (Local_853.x < fLocal_856)
								{
									Local_853.x = fLocal_856;
								}
								if (Local_853.x >= fLocal_857)
								{
									Local_853.x = fLocal_857;
								}
							}
							if (iVar3 > 28 || iVar3 < -28)
							{
								fVar0 = SYSTEM::TO_FLOAT(iVar3);
								fVar0 = (fVar0 * fVar0);
								fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
								fVar0 = (fVar0 * fLocal_860);
								if (iVar3 > 0)
								{
									fVar0 = (fVar0 * -1f);
								}
								Local_853.f_2 = (Local_853.f_2 + fVar0);
								if (Local_853.f_2 < fLocal_858)
								{
									Local_853.f_2 = fLocal_858;
								}
								if (Local_853.f_2 >= fLocal_859)
								{
									Local_853.f_2 = fLocal_859;
								}
							}
						}
						CAM::SET_CAM_FOV(uLocal_877, 45f);
						func_462(&Local_1714, &uLocal_877, Local_853.x, 0f, Local_853.f_2);
						break;
				}
			}
			else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (CAM::DOES_CAM_EXIST(uLocal_877))
				{
					if (CAM::IS_CAM_ACTIVE(uLocal_877))
					{
						if (CAM::IS_CAM_SHAKING(uLocal_877))
						{
							CAM::STOP_CAM_SHAKING(uLocal_877, 1);
						}
						CAM::SET_CAM_ACTIVE(uLocal_877, 0);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					}
				}
			}
		}
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uLocal_877))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_877))
			{
				func_462(&Local_1714, &uLocal_877, Local_853.x, 0f, Local_853.f_2);
			}
		}
		if ((GlobalFunc_8315() != 0 && (Local_2097 != 1 && Local_2097 != 2)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		}
		if (GlobalFunc_8315() == 0)
		{
			if (Local_2097 == 1)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
					{
						if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
						{
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
						}
					}
				}
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_877))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_877))
		{
		}
	}
}



float func_492(int iParam0)//Position - 0x5F443
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { GlobalFunc_107(Var0) };
	return MISC::ATAN2(Var3.f_2, SYSTEM::VMAG(Var3.x, Var3.f_1, 0f));
}


float func_494(int iParam0)//Position - 0x5F4BE
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	if (fVar3 > 180f)
	{
		fVar3 = (fVar3 - 360f);
	}
	if (fVar3 < -180f)
	{
		fVar3 = (fVar3 + 360f);
	}
	return fVar3;
}

void func_495()//Position - 0x5F51C
{
	uLocal_877 = CAM::CREATE_CAM("default_scripted_camera", 0);
	CAM::ATTACH_CAM_TO_ENTITY(uLocal_877, Local_1714, -0.39f, 0.85f, 1.35f, 1);
	func_462(&Local_1714, &uLocal_877, Local_853.x, 0f, Local_853.f_2);
	CAM::SET_CAM_FOV(uLocal_877, 45f);
	CAM::_0x661B5C8654ADD825(uLocal_877, 1);
	CAM::SET_CAM_ACTIVE(uLocal_877, 1);
}

int func_496()//Position - 0x5F57A
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
		{
			if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
			{
				if (Local_2097 == 1)
				{
					return 1;
				}
			}
			else if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 0)
			{
				if (Local_2097 == 3)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}







void func_503()//Position - 0x5F79D
{
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_887[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1804.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1714.f_13, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1774.f_13, "lkexile2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT(sLocal_7363);
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0);
	while ((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2018)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1804.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1714.f_13, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1774.f_13, "lkexile2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_7363)) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) || !STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_8315() != 2)
	{
		func_341(2, 0);
	}
	CAM::_0x2A2173E46DAECD12(6, 1);
	Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, -1503.4f, 4358.3f, 155.7f, 57.3614f, 1, 1);
	GlobalFunc_534(Local_1714, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, -1);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	func_40(&(uLocal_2019[0]), 0, Local_1714, 0, 1, 0, 0);
	func_456(uLocal_2019[0]);
	func_455(&(uLocal_2019[0]), 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_2019[0], 1);
	GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
	func_388(&(uLocal_2019[1]), 1, -1683.497f, 4454.595f, 1.566f, 239.1512f, 0, 0, 0);
	func_456(uLocal_2019[1]);
	func_455(&(uLocal_2019[1]), 1);
	GlobalFunc_11267(uLocal_2019[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_450(uLocal_2019[1], joaat("weapon_carbinerifle"), 100, 0, 0, 1);
	GlobalFunc_173(&uLocal_2114, 1, uLocal_2019[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_2019[1], 1);
	GlobalFunc_2518(&uLocal_2019, 1, 1);
	Local_1648.f_11 = { -1679.821f, 4455.988f, 1.2653f };
	Local_1648.f_20 = 244f;
	func_34(&Local_1648);
	func_33(Local_1648);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
	iLocal_684 = 200;
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0f, 1f, -0.336f, 1000f, 1000f, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 0);
	Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -1899.395f, 4431.256f, 42.805f, 228.1822f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 12, 12);
	iLocal_2334 = 0;
	iLocal_2333 = 6;
	STREAMING::LOAD_SCENE(-1683.497f, 4454.595f, 1.566f);
}

void func_504()//Position - 0x5FC63
{
	if (iLocal_2336)
	{
		GlobalFunc_4972(1768.113f, 3240.054f, 41.0869f, 42.5289f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_1759.f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0);
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2018)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1759.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	MISC::CLEAR_AREA(1760.085f, 3242.452f, 40.8998f, 1000f, 1, 0, 0, 0);
	Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, 1768.113f, 3240.054f, 41.0869f, 42.5289f, 1, 1);
	GlobalFunc_534(Local_1714, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1714);
	func_341(2, 0);
	GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, -1);
	func_40(&(uLocal_2019[0]), 0, Local_1714, 0, 0, 0, 0);
	func_456(uLocal_2019[0]);
	func_455(&(uLocal_2019[0]), 1);
	GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
	func_388(&(uLocal_2019[1]), 1, -1683.497f, 4454.595f, 1.566f, 239.1512f, 0, 0, 0);
	func_456(uLocal_2019[1]);
	func_455(&(uLocal_2019[1]), 1);
	GlobalFunc_11267(uLocal_2019[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_450(uLocal_2019[1], joaat("weapon_carbinerifle"), 100, 0, 0, 1);
	GlobalFunc_173(&uLocal_2114, 1, uLocal_2019[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_2019[1], 1);
	GlobalFunc_2518(&uLocal_2019, 1, 1);
	Local_1648.f_11 = { -1679.821f, 4455.988f, 1.2653f };
	Local_1648.f_20 = 114.6932f;
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	func_33(Local_1648);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
	iLocal_684 = 101;
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744, 0);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, -0.2f, 0.5f, 0f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.2f, 0.5f, 0f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.3f, -0.1f, 0.75f, 200f, 200f, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1744);
	Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -1899.395f, 4431.256f, 42.805f, 228.1822f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 12, 12);
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(1760.085f, 3242.452f, 40.8998f);
	}
	SYSTEM::WAIT(0);
	while (!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_2019[0]))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_FLY_HELI_RT");
	iLocal_696 = 1;
	iLocal_695 = 3;
	iLocal_788 = 0;
	iLocal_681 = 0;
	iLocal_2334 = 1;
	iLocal_2333 = 5;
	func_444(1, 0, 0, 1);
	GlobalFunc_Checkpoint2(2, "fly to franklin", 0, 0, 0, 1);
}

void func_505()//Position - 0x600B6
{
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_887[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT("missexile2ig_5");
	STREAMING::REQUEST_ANIM_DICT("missexile2deer_crash");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_846);
	AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS");
	STREAMING::REQUEST_PTFX_ASSET();
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2018) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_887[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2ig_5")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2deer_crash")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_846)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_846)) || !AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1984.265f, 3818.762f, 31.38f, 10000f, 1, 0, 0, 0);
	if (GlobalFunc_8315() != 1)
	{
		func_341(1, 0);
	}
	Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -1969.002f, 4481.579f, 32.3209f, 215.9919f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1729.x, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1729.x, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 0, 0);
	AUDIO::SET_VEH_RADIO_STATION(Local_1729.x, "RADIO_03_HIPHOP_NEW");
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, -1);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	Local_1648.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f) };
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1729.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1729.x, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "chop_sit_in_baller_ps", 8f, -8f, -1, 1, 0, 0, 0, 0);
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -1964.002f, 4484.579f, 32.3209f, 338.0473f, 1, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_1744, 1, 1, 1, 1, 1, 0, 0, 0);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	func_506(&(Local_887[0 /*33*/]), &Local_1744, -1);
	ENTITY::SET_ENTITY_PROOFS(Local_887[0 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[0 /*33*/].f_2));
	func_506(&(Local_887[1 /*33*/]), &Local_1744, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_887[1 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[1 /*33*/].f_2));
	func_506(&(Local_887[2 /*33*/]), &Local_1744, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_887[2 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[2 /*33*/].f_2));
	GlobalFunc_173(&uLocal_2114, 0, 0, "michael", 0, 1);
	GlobalFunc_173(&uLocal_2114, 2, 0, "trevor", 0, 1);
	STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	iLocal_2334 = 0;
	iLocal_2333 = 3;
	func_444(0, 0f, 0f, 0);
}

void func_506(var uParam0, int iParam1, int iParam2)//Position - 0x6041C
{
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam1, 26, uParam0->f_1, iParam2, 1, 1);
	GlobalFunc_722(*uParam0, 182);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_28, -1, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, uParam0->f_28, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_21);
	if (uParam0->f_25)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_26)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_27 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	func_465(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_22);
}

void func_507()//Position - 0x60510
{
	if (iLocal_2336)
	{
		GlobalFunc_4972(-2638.675f, 2725.467f, 15.6897f, 351.2094f, 0, 0);
	}
	func_568();
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while ((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2018) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_887[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("radi"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sabregt"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2switch"))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	MISC::CLEAR_AREA(1984.265f, 3818.762f, 31.38f, 10000f, 1, 0, 0, 0);
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -2639.9f, 2733.9f, 16.6f, 338.0473f, 1, 1);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1744, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_1744, 1, 1, 1, 1, 1, 0, 0, 0);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1744, "EXILE_2_ENEMY_CAR", 0);
	GRAPHICS::_0x46D1A61A21F566FC(3f);
	func_506(&(Local_887[0 /*33*/]), &Local_1744, -1);
	ENTITY::SET_ENTITY_PROOFS(Local_887[0 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[0 /*33*/].f_2));
	func_506(&(Local_887[1 /*33*/]), &Local_1744, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_887[1 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[1 /*33*/].f_2));
	func_506(&(Local_887[2 /*33*/]), &Local_1744, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_887[2 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[2 /*33*/].f_2));
	func_562("lkexcile2_chase", 1, 1, 1);
	func_561();
	fLocal_291 = 200f;
	iLocal_93 = 1;
	iLocal_90 = 1;
	iLocal_79 = 1;
	func_560(1, 0, 4);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744, 1, "lkexcile2_chase", 1);
	func_558(Local_1744, 11450f);
	iLocal_79 = 1;
	func_518(Local_1744, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
	if (GlobalFunc_8315() != 1)
	{
		func_341(1, 0);
	}
	Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -2646.31f, 2677.32f, 16.6427f, 351.1425f, 1, 1);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1729.x, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1729.x, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 0, 0);
	AUDIO::SET_VEH_RADIO_STATION(Local_1729.x, "RADIO_03_HIPHOP_NEW");
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 100, "lkexcile2_chase", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 11450f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1729.x, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, -1);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	Local_1648.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f) };
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1729.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1729.x, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "chop_sit_in_baller_ps", 8f, -8f, -1, 1, 0, 0, 0, 0);
	sLocal_769 = "FS_GOD_0";
	sLocal_770 = "FS_michael_0";
	sLocal_771 = "FS_BACKINCAR";
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	iLocal_652 = MISC::GET_GAME_TIMER();
	while (!GlobalFunc_588(&iLocal_652, 1000))
	{
		SYSTEM::WAIT(0);
		iLocal_79 = 1;
		func_518(Local_1744, 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
		}
	}
	iLocal_704 = MISC::GET_GAME_TIMER();
	iLocal_788 = 0;
	iLocal_706 = 1;
	iLocal_2334 = 1;
	iLocal_2333 = 2;
	AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
	func_444(0, 0f, 0f, 0);
	func_508();
	GlobalFunc_Checkpoint2(1, "start of casr chase mission", 0, 0, 0, 1);
}

void func_508()//Position - 0x60AC3
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && iLocal_2379 == 0)
	{
		switch (GlobalFunc_8315())
		{
			case 1:
				switch (iLocal_680)
				{
					case 0:
						iLocal_680 = 2;
						break;
					
					case 1:
						break;
					
					case 2:
						if (func_512(Local_2282.f_5, 1))
						{
							GlobalFunc_173(&uLocal_2114, 0, 0, "michael", 0, 1);
							GlobalFunc_173(&uLocal_2114, 2, 0, "trevor", 0, 1);
							GlobalFunc_173(&uLocal_2114, 5, 0, "chop", 0, 1);
							iLocal_680++;
						}
						break;
					
					case 3:
						if (func_512(Local_2282.f_5, 1))
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_BARKS", 7, 0, 0, 0))
							{
								func_511(2, 0);
								iLocal_680++;
							}
						}
						break;
					
					case 4:
						func_511(2, 0);
						if (func_512(Local_2282.f_5, 1))
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_TALKC", 7, 0, 0, 0))
							{
								iLocal_680++;
							}
						}
						break;
					
					case 5:
						if (func_512(Local_2282.f_5, 1))
						{
							if (GlobalFunc_10638(&uLocal_2114, 2, "TM44AUD", "TM44_TCALL", 8, 1, 0, 0, 0))
							{
								AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR_PHONE");
								iLocal_686 = -1;
								RECORDING::_0x293220DA1B46CEBC(1f, 8f, 4);
								iLocal_680++;
							}
						}
						break;
					
					case 6:
						if (!GlobalFunc_1993())
						{
							if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != -1)
							{
								iLocal_686 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
							}
							if (iLocal_686 == 11)
							{
								if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(Local_1648))
								{
									AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "BARK_SEQ");
								}
							}
						}
						else
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOLLOW_CAR_PHONE"))
							{
								AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOLLOW_CAR_PHONE");
							}
							iLocal_680++;
						}
						break;
					
					case 7:
						break;
				}
				break;
			
			case 2:
				switch (iLocal_715)
				{
					case 0:
						if (GlobalFunc_588(&iLocal_652, 5500))
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_WHERE", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 4f, 3);
								func_458("TM44_WHERE", 1);
								iLocal_715++;
							}
						}
						break;
					
					case 1:
						break;
				}
				break;
			}
	}
}



void func_511(int iParam0, int iParam1)//Position - 0x60D5F
{
	if (GlobalFunc_588(&iLocal_685, 3000) || iParam1)
	{
		switch (iParam0)
		{
			case 0:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
					case 1:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "CHOP_SNIFF_SEQ");
						break;
					
					case 2:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "CHOP_WHINE");
						break;
					
					case 3:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "CHOP_LICKS_MOUTH");
						break;
				}
				iLocal_685 = MISC::GET_GAME_TIMER();
				break;
			
			case 1:
				AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "CHOP_PANT");
				iLocal_685 = MISC::GET_GAME_TIMER();
				break;
			
			case 2:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
				{
					case 0:
					case 1:
					case 2:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "bark");
						break;
					
					case 3:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "GROWL");
						break;
					
					case 4:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "SNARL");
						break;
				}
				iLocal_685 = MISC::GET_GAME_TIMER();
				break;
			
			case 3:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "BARK_SEQ");
						break;
					
					case 1:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_1648, 3, "bark");
						break;
				}
				iLocal_652 = MISC::GET_GAME_TIMER();
				break;
			
			case 4:
				break;
			}
	}
}

int func_512(var uParam0, int iParam1)//Position - 0x60EBC
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
		if (bLocal_631)
		{
			if (!GlobalFunc_5172(&Local_2282, 0))
			{
				if (GlobalFunc_10626(&uLocal_2114, "fam4aud", &Local_772, &cLocal_776, 6, 0, 0))
				{
					bLocal_631 = false;
				}
			}
		}
		if (!GlobalFunc_5172(&Local_2282, iParam1) && !bLocal_631)
		{
			return 1;
		}
	}
	else if (GlobalFunc_111())
	{
		GlobalFunc_619(1);
	}
	return 0;
}






void func_518(int iParam0, float fParam1)//Position - 0x61024
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_96 = false;
	if (!bLocal_78)
	{
		if (bLocal_77)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_78 = true;
		}
	}
	else if (!bLocal_77)
	{
		GlobalFunc_2214();
		bLocal_78 = false;
	}
	if (bLocal_77)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_71)
	{
		if (iLocal_66)
		{
			fLocal_284 = 0f;
		}
		else
		{
			fLocal_284 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_76 = 1;
					}
					else
					{
						iLocal_76 = 0;
					}
				}
				fLocal_281 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_282) * fLocal_284));
				if (bLocal_75)
				{
					func_554(iParam0, fLocal_281);
					func_553(iParam0, fLocal_291);
					if (fLocal_286 > 1000f)
					{
						if (iLocal_398 == 0)
						{
							func_552(iParam0, fLocal_291);
						}
						fVar0 = ((fLocal_281 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_398) * 2000f));
						func_551(iParam0, fVar0, fLocal_285);
						iLocal_398++;
						if (iLocal_398 > 2)
						{
							fLocal_286 = 0f;
						}
					}
					else
					{
						iLocal_398 = 0;
						fLocal_286 = (fLocal_286 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_281 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_83)
		{
			if (!iLocal_65)
			{
				func_547(iParam0, ((fParam1 * fLocal_282) * fLocal_284), 0);
				if (!iLocal_86)
				{
				}
				iLocal_86 = 0;
			}
			if (bLocal_68)
			{
				func_543(iParam0);
			}
			if (!iLocal_65)
			{
				func_526(iParam0, ((fParam1 * fLocal_282) * fLocal_284), 0);
			}
		}
		if (iLocal_73)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_611 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_489 = { ENTITY::GET_ENTITY_COORDS(iLocal_611, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_611, &uLocal_109, &uLocal_110, &uLocal_111, &uLocal_112);
				}
			}
			iLocal_73 = 0;
		}
		if (iLocal_72)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_611))
			{
				GlobalFunc_2210(iLocal_612);
				iLocal_612 = iLocal_611;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_612, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_612, Local_489, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_612, uLocal_109, uLocal_110, uLocal_111, uLocal_112);
			}
			fLocal_280 = fLocal_283;
			iLocal_65 = 1;
			iLocal_72 = 0;
		}
		if (iLocal_65)
		{
			while (!func_519(&iParam0, fLocal_280))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_66 = 1;
		}
		if (iLocal_79)
		{
			iLocal_79 = 0;
		}
	}
}

int func_519(int iParam0, float fParam1)//Position - 0x612B7
{
	if (!iLocal_80)
	{
		iLocal_65 = 1;
		func_521();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_385 == -1)
			{
				while (!func_520(iParam0, iLocal_385, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_70)
				{
					iLocal_66 = 1;
					fLocal_284 = 0f;
					iLocal_386 = 0;
					iLocal_388 = 0;
					iLocal_387 = 0;
					iLocal_382 = 0;
					iLocal_383 = 0;
					iLocal_384 = 0;
					iLocal_389 = 0;
					iLocal_390 = 0;
					iLocal_391 = 0;
				}
			}
		}
		iLocal_80 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_282) * fLocal_284));
				func_520(iParam0, iLocal_385, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_281 = fParam1;
		iLocal_392 = 0;
		iLocal_395 = 0;
		fLocal_296 = 0f;
		fLocal_295 = 0f;
		func_526(*iParam0, ((1f * fLocal_282) * fLocal_284), 1);
		func_547(*iParam0, ((1f * fLocal_282) * fLocal_284), 1);
		func_543(*iParam0);
		if ((iLocal_389 == 0 && iLocal_390 == 0) && iLocal_391 == 0)
		{
			iLocal_66 = 0;
			iLocal_65 = 0;
			iLocal_80 = 0;
			return 1;
		}
	}
	return 0;
}

int func_520(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x613E9
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_516);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_516))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_516, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_393 && iParam1 != iLocal_394)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_516, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_516, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_516, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_516, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_516))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_516);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_516, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_393 && iParam1 != iLocal_394)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_516, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_516, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_516, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_516, 1);
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

void func_521()//Position - 0x615CF
{
	func_524();
	func_523();
	func_522();
}

void func_522()//Position - 0x615E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_586[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_586[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_586[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_586[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_586[iVar0]));
			}
		}
		iLocal_329[iVar0] = 0;
		if (!bLocal_77 && !iLocal_90)
		{
			if (iLocal_306[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_542[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_542[iVar0]);
		}
		iVar0++;
	}
}

void func_523()//Position - 0x616D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_579[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_579[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_579[iVar0]));
			}
		}
		iLocal_375[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!iLocal_535[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_535[iVar0]);
		}
		iVar0++;
	}
	iLocal_387 = 0;
	iLocal_384 = 0;
}

void func_524()//Position - 0x61754
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_568[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_568[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_568[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_568[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_568[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_568[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_568[iVar0]));
			}
		}
		if (!bLocal_77 && !iLocal_90)
		{
			if (iLocal_300[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516);
			}
		}
		iLocal_302[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_533[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_533[iVar0]);
		}
		iVar0++;
	}
	iLocal_386 = 0;
	iLocal_382 = 0;
}


void func_526(int iParam0, float fParam1, bool bParam2)//Position - 0x61867
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
		iVar0 = iLocal_388;
		while (iVar0 < 22)
		{
			if (iLocal_329[iVar0] != 99)
			{
				if (iLocal_329[iVar0] == 0)
				{
					if (iLocal_306[iVar0] > 0)
					{
						if (!iLocal_65)
						{
							if (fLocal_281 > (fLocal_205[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_542[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_352[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_542[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_352[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_352[iVar0]), 1);
								iLocal_329[iVar0]++;
								iLocal_390++;
							}
						}
						else
						{
							fVar12 = (fLocal_281 - fLocal_205[iVar0]);
							fVar12 = (fVar12 * fLocal_228[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_541(iLocal_306[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_542[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_352[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_542[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_352[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_352[iVar0]), 1);
									iLocal_329[iVar0]++;
									iLocal_390++;
								}
								else
								{
									iLocal_329[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_329[iVar0] = 99;
					}
				}
				else if (iLocal_329[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516);
					if (MISC::IS_BIT_SET(iLocal_352[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_92 && ((!MISC::IS_BIT_SET(iLocal_352[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_352[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_539());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_539());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_542[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_542[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_306[iVar0], &cLocal_516))
							{
								if (fLocal_281 >= (fLocal_205[iVar0] - (fLocal_294 * fParam1)))
								{
									if ((iLocal_79 || bParam2) || (!bLocal_96 && !func_538(Local_422[iVar0 /*3*/], Var9, 5f, fLocal_292)))
									{
										if (bLocal_75)
										{
											func_537(Local_422[iVar0 /*3*/], Var9, fLocal_285);
										}
										iLocal_586[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_542[iVar0], Local_422[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_542[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_586[iVar0], 0);
										}
										if (iLocal_88 && !MISC::IS_BIT_SET(iLocal_352[iVar0], 0))
										{
											func_536(iLocal_586[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_352[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_586[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_586[iVar0], Local_422[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_586[iVar0], fLocal_113[iVar0], fLocal_136[iVar0], fLocal_159[iVar0], fLocal_182[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_542[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_542[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_586[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_586[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_586[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_586[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_542[iVar0]);
										iLocal_390 = (iLocal_390 - 1);
										iLocal_329[iVar0]++;
										bLocal_96 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_586[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_586[iVar0], Local_422[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_586[iVar0], fLocal_113[iVar0], fLocal_136[iVar0], fLocal_159[iVar0], fLocal_182[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_542[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_542[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_586[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_586[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_542[iVar0]);
							iLocal_390 = (iLocal_390 - 1);
							iLocal_329[iVar0]++;
						}
					}
				}
				else if (iLocal_329[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516);
					if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_352[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_92 && ((!MISC::IS_BIT_SET(iLocal_352[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_352[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_539());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_539());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_586[iVar0]))
						{
							if (!bLocal_96 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_586[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_586[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_79)
									{
										func_534(&(iLocal_586[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_352[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
					{
						if (fLocal_281 >= fLocal_205[iVar0])
						{
							if (14 > iLocal_383)
							{
								fVar12 = (fLocal_281 - fLocal_205[iVar0]);
								fVar12 = (fVar12 * fLocal_228[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_306[iVar0], &cLocal_516))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_586[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_306[iVar0], fVar12, &cLocal_516) };
										if (((!func_538(Var3, Var9, 5f, fLocal_292) && func_538(Var6, Var9, 5f, fLocal_292)) && !iLocal_79) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 1))
											{
												func_534(&(iLocal_586[iVar0]), iVar19, 1);
											}
											iLocal_383++;
											iLocal_329[iVar0]++;
										}
										else if (((!bLocal_96 || MISC::IS_BIT_SET(iLocal_352[iVar0], 1)) || iLocal_79) || bParam2)
										{
											if (func_520(&(iLocal_586[iVar0]), iLocal_306[iVar0], fVar12, 1, 0, 0, bLocal_94, iLocal_93))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_586[iVar0], (fParam1 * fLocal_228[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_352[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_586[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_586[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_586[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_542[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_586[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 1))
												{
													func_534(&(iLocal_586[iVar0]), iVar19, 1);
												}
												iLocal_383++;
												iLocal_329[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 1))
										{
											func_534(&(iLocal_586[iVar0]), iVar19, 1);
										}
										iLocal_383++;
										iLocal_329[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 1))
								{
									func_534(&(iLocal_586[iVar0]), iVar19, 1);
								}
								iLocal_383++;
								iLocal_329[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_352[iVar0], 1))
						{
							func_534(&(iLocal_586[iVar0]), iVar19, 1);
						}
						iLocal_383++;
						iLocal_329[iVar0]++;
					}
				}
				else if (iLocal_329[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_586[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_586[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_69 && !iLocal_66) && !bLocal_85) && (((!bLocal_94 && !iLocal_93) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_586[iVar0])) || func_533(iLocal_586[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_87)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_586[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_586[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_586[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_529(iLocal_586[iVar0]);
												iLocal_329[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_586[iVar0], (fParam1 * fLocal_228[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_586[iVar0]);
							}
						}
						else
						{
							iLocal_329[iVar0]++;
						}
					}
					else
					{
						iLocal_329[iVar0]++;
					}
				}
				else if (iLocal_329[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_586[iVar0]))
						{
							iLocal_329[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_586[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_586[iVar0], (fParam1 * fLocal_228[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_586[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_306[iVar0], &cLocal_516))
							{
								if (fLocal_281 > (fLocal_205[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_586[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_586[iVar0]);
							}
						}
					}
					else
					{
						iLocal_329[iVar0]++;
					}
				}
				else if (iLocal_329[iVar0] == 5)
				{
					if (!iLocal_586[iVar0] == iLocal_613)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_586[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_586[iVar0]);
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
						if (!bLocal_77 && !iLocal_90)
						{
							if (iLocal_306[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516);
							}
						}
						if (!bLocal_67)
						{
							if (!bLocal_95)
							{
								GlobalFunc_2210(iLocal_586[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_586[iVar0]));
						}
					}
					iLocal_383 = (iLocal_383 - 1);
					iLocal_329[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_388 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_527();
	}
}

void func_527()//Position - 0x62452
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_586[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_586[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_586[iVar0]);
				}
			}
			func_528(iLocal_586[iVar0]);
			GlobalFunc_2210(iLocal_586[iVar0]);
		}
		iLocal_329[iVar0] = 0;
		iLocal_352[iVar0] = 0;
		if (!bLocal_77 && !iLocal_90)
		{
			if (iLocal_306[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_306[iVar0], &cLocal_516);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_542[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_542[iVar0]);
		}
		iVar0++;
	}
	iLocal_388 = 0;
}

void func_528(int iParam0)//Position - 0x6251F
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
				if (bLocal_98)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_529(int iParam0)//Position - 0x625B8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_528(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_533(var uParam0)//Position - 0x6271B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_91)
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

int func_534(var uParam0, int iParam1, bool bParam2)//Position - 0x62778
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_532);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_539(), -1, 0, 0);
				if (bLocal_97)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_539());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_98)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_96 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_536(int iParam0)//Position - 0x62884
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_566 >= -1 && iLocal_567 >= -1)
	{
		while (iVar0 == iLocal_566 || iVar0 == iLocal_567)
		{
			iVar0++;
		}
	}
	else if (iLocal_566 >= -1)
	{
		if (iVar0 == iLocal_566)
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
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_537(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x629FD
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_78)
	{
		if (!func_538(Param0, Param3, fParam6, 200f))
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

int func_538(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x62A6D
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_78)
		{
			if (!iLocal_65)
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

int func_539()//Position - 0x62AB4
{
	if (iLocal_565 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_565;
}


float func_541(int iParam0)//Position - 0x62ADE
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_516);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_516))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_516);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_516);
	return uVar0;
}


void func_543(int iParam0)//Position - 0x62B94
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
		iVar0 = iLocal_387;
		while (iVar0 < 6)
		{
			switch (iLocal_375[iVar0])
			{
				case 0:
					if (!iLocal_535[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_403[iVar0 /*3*/], fLocal_279, fLocal_279, fLocal_279, 0, 1, 0))
						{
							iLocal_389++;
							iLocal_375[iVar0]++;
						}
					}
					else
					{
						iLocal_375[iVar0] = 99;
					}
					break;
				
				case 1:
					if (1 > iLocal_384)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_579[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_535[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_535[iVar0]))
							{
								if ((iLocal_65 || iLocal_79) || (!bLocal_96 && !func_538(Local_403[iVar0 /*3*/], Var1, 5f, fLocal_292)))
								{
									if (bLocal_75)
									{
										func_537(Local_403[iVar0 /*3*/], Var1, fLocal_285);
									}
									iLocal_579[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_535[iVar0], Local_403[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_535[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_579[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_579[iVar0], fLocal_251[iVar0], fLocal_258[iVar0], fLocal_265[iVar0], fLocal_272[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_535[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_579[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_579[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_535[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_579[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_579[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_579[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_579[iVar0], 1);
									iLocal_389 = (iLocal_389 - 1);
									iLocal_384++;
									iLocal_375[iVar0]++;
									bLocal_96 = true;
								}
							}
						}
						else
						{
							iLocal_389 = (iLocal_389 - 1);
							iLocal_384++;
							iLocal_375[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_579[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_579[iVar0], 1) };
						}
						if (fLocal_293 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_293 * fLocal_293))
						{
							if (!GlobalFunc_5654(iLocal_579[iVar0], iParam0, 0))
							{
								if (!bLocal_67)
								{
									GlobalFunc_2210(iLocal_579[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_579[iVar0]));
								}
								iLocal_384 = (iLocal_384 - 1);
								iLocal_375[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_375[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_387 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_544();
	}
}

void func_544()//Position - 0x62E88
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_579[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_579[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_579[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_579[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!iLocal_535[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_535[iVar0]);
		}
		iVar0++;
	}
	iLocal_387 = 0;
	iLocal_384 = 0;
}



void func_547(int iParam0, float fParam1, int iParam2)//Position - 0x62F23
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
			fLocal_281 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_386;
		while (iVar0 < 1 && !bVar23)
		{
			if (iLocal_302[iVar0] != 99)
			{
				if (iLocal_302[iVar0] == 0)
				{
					if (iLocal_300[iVar0] > 0 && iLocal_533[iVar0] != 0)
					{
						if (!iLocal_65)
						{
							if (fLocal_281 < (fLocal_107[iVar0] + 20000f))
							{
								if (fLocal_281 >= (fLocal_107[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_533[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_304[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_533[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_304[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_304[iVar0]), 1);
									iLocal_391++;
									iLocal_302[iVar0]++;
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
								func_550(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_281 - fLocal_107[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_541(iLocal_300[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_533[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_304[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_533[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_304[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_304[iVar0]), 1);
									iLocal_391++;
									iLocal_302[iVar0]++;
								}
								else
								{
									func_550(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_550(iVar0, 1090519040);
					}
				}
				else if (iLocal_302[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_304[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_92 && ((!MISC::IS_BIT_SET(iLocal_304[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_304[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_539());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_539());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_568[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_533[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_533[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_300[iVar0], &cLocal_516)) && bVar17)
						{
							if (fLocal_281 >= (fLocal_107[iVar0] - (fLocal_294 * fParam1)))
							{
								if ((iLocal_79 || iParam2) || (!bLocal_96 && !func_538(Local_399[iVar0 /*3*/], Var12, 5f, fLocal_292)))
								{
									if (bLocal_75)
									{
										func_537(Local_399[iVar0 /*3*/], Var12, fLocal_285);
									}
									iLocal_568[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_533[iVar0], Local_399[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_533[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_568[iVar0], 0);
									}
									if (iLocal_88 && !MISC::IS_BIT_SET(iLocal_304[iVar0], 0))
									{
										func_536(iLocal_568[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_568[iVar0], Local_399[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_568[iVar0], fLocal_99[iVar0], fLocal_101[iVar0], fLocal_103[iVar0], fLocal_105[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_533[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_533[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_568[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_304[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_568[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_568[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_568[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_568[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_568[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_533[iVar0]);
									iLocal_391 = (iLocal_391 - 1);
									iLocal_302[iVar0]++;
									bLocal_96 = true;
								}
								else if (fLocal_281 > fLocal_107[iVar0])
								{
									iLocal_391 = (iLocal_391 - 1);
									func_550(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_302[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_397 || iLocal_397 == 0)) || iLocal_79) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_304[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_92 && ((!MISC::IS_BIT_SET(iLocal_304[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_304[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_539());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_539());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_568[iVar0]))
							{
								if (!bLocal_96 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_568[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_568[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_79)
										{
											func_534(&(iLocal_568[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_304[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_568[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516);
							if (fLocal_281 >= fLocal_107[iVar0])
							{
								if (8 > iLocal_382)
								{
									fVar15 = (fLocal_281 - fLocal_107[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_300[iVar0], &cLocal_516))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_568[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_300[iVar0], fVar15, &cLocal_516) };
											if (!func_538(Var6, Var12, 5f, fLocal_292) && func_538(Var9, Var12, 5f, fLocal_292))
											{
												if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
												{
													func_534(&(iLocal_568[iVar0]), iVar21, 0);
												}
												func_550(iVar0, 1090519040);
											}
											else if (((!bLocal_96 || MISC::IS_BIT_SET(iLocal_304[iVar0], 1)) || iLocal_79) || iParam2)
											{
												if (func_520(&(iLocal_568[iVar0]), iLocal_300[iVar0], fVar15, 1, 0, 0, 1, iLocal_93))
												{
													if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
													{
														func_534(&(iLocal_568[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_568[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_568[iVar0], fParam1);
													iLocal_382++;
													iLocal_302[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
											{
												func_534(&(iLocal_568[iVar0]), iVar21, 0);
											}
											func_550(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516))
									{
										if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
										{
											func_534(&(iLocal_568[iVar0]), iVar21, 0);
										}
										func_550(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
									{
										func_534(&(iLocal_568[iVar0]), iVar21, 0);
									}
									func_550(iVar0, 1090519040);
								}
							}
							else if (iLocal_76 && !bLocal_84)
							{
								if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
								{
									func_534(&(iLocal_568[iVar0]), iVar21, 0);
								}
								func_550(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_304[iVar0], 1))
							{
								func_534(&(iLocal_568[iVar0]), iVar21, 0);
							}
							func_550(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_397 = iVar0;
					}
				}
				else if (iLocal_302[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_568[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_568[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_568[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_74)
									{
										if ((!bLocal_69 && !iLocal_66) && func_533(iLocal_568[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_396 || iLocal_396 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_568[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_568[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_396 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_89 && !MISC::IS_BIT_SET(iLocal_304[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_396 || iLocal_396 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_568[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_396 = iVar0;
										}
									}
									if (bVar24)
									{
										func_529(iLocal_568[iVar0]);
										iLocal_302[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_568[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_568[iVar0]);
							}
						}
						else
						{
							iLocal_302[iVar0]++;
						}
					}
					else
					{
						iLocal_302[iVar0]++;
					}
				}
				else if (iLocal_302[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_568[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_568[iVar0]))
						{
							iLocal_302[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_568[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_568[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_568[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_300[iVar0], &cLocal_516))
							{
								if (fLocal_281 > (fLocal_107[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_568[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_568[iVar0]);
							}
						}
					}
					else
					{
						iLocal_302[iVar0]++;
					}
				}
				else if (iLocal_302[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_568[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_568[iVar0]);
					}
					iLocal_382 = (iLocal_382 - 1);
					func_550(iVar0, fVar16);
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
			iLocal_386 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_396 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_397 = 0;
		}
	}
	else
	{
		func_548();
	}
}

void func_548()//Position - 0x63A7E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_568[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_568[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_568[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_568[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_568[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_568[iVar0]);
				}
			}
			func_528(iLocal_568[iVar0]);
			GlobalFunc_2210(iLocal_568[iVar0]);
		}
		iLocal_302[iVar0] = 0;
		iLocal_304[iVar0] = 0;
		if (!bLocal_77 && !iLocal_90)
		{
			if (iLocal_300[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_300[iVar0], &cLocal_516);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_533[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_533[iVar0]);
		}
		iVar0++;
	}
	iLocal_386 = 0;
	iLocal_382 = 0;
}


void func_550(int iParam0, float fParam1)//Position - 0x63BCD
{
	int iVar0;
	
	if (!iLocal_533[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_533[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_568[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_568[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_568[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_568[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_568[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_98)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_67)
	{
		if (!bLocal_95)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_568[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_568[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_568[iParam0]));
		}
	}
	if (!bLocal_77 && !iLocal_90)
	{
		if (iLocal_300[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_300[iParam0], &cLocal_516);
		}
	}
	iLocal_302[iParam0] = 99;
}

void func_551(int iParam0, float fParam1, float fParam2)//Position - 0x63D26
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
			func_537(Var1, Var10, fVar13);
		}
	}
}

void func_552(int iParam0, float fParam1)//Position - 0x63DA9
{
	if (!bLocal_78)
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

void func_553(int iParam0, float fParam1)//Position - 0x63DF6
{
	if (!bLocal_78)
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

void func_554(int iParam0, float fParam1)//Position - 0x63E43
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_295 + 2000f);
		fVar2 = (fLocal_296 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_392 == 0)
				{
					Local_504 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_295) };
					iLocal_392++;
				}
				else if (iLocal_392 == 1)
				{
					Local_507 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_392++;
				}
				else if (!bLocal_96)
				{
					if (Local_504.x > Local_507.x)
					{
						fVar3 = Local_504.x;
						Local_504.x = Local_507.x;
						Local_507.x = fVar3;
					}
					if (Local_504.f_1 > Local_507.f_1)
					{
						fVar3 = Local_504.f_1;
						Local_504.f_1 = Local_507.f_1;
						Local_507.f_1 = fVar3;
					}
					if (Local_504.f_2 > Local_507.f_2)
					{
						fVar3 = Local_504.f_2;
						Local_504.f_2 = Local_507.f_2;
						Local_507.f_2 = fVar3;
					}
					Local_504 = { Local_504 - Vector(fLocal_299, fLocal_299, fLocal_299) };
					Local_507 = { Local_507 + Vector(fLocal_299, fLocal_299, fLocal_299) };
					PATHFIND::SET_ROADS_IN_AREA(Local_504, Local_507, 0, 0);
					fLocal_295 = fVar1;
					iLocal_392 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_395 == 0)
			{
				Local_510 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_296) };
				iLocal_395++;
			}
			else if (iLocal_395 == 1)
			{
				Local_513 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_395++;
			}
			else if (!bLocal_96 && !bVar4)
			{
				if (Local_510.x > Local_513.x)
				{
					fVar3 = Local_510.x;
					Local_510.x = Local_513.x;
					Local_513.x = fVar3;
				}
				if (Local_510.f_1 > Local_513.f_1)
				{
					fVar3 = Local_510.f_1;
					Local_510.f_1 = Local_513.f_1;
					Local_513.f_1 = fVar3;
				}
				if (Local_510.f_2 > Local_513.f_2)
				{
					fVar3 = Local_510.f_2;
					Local_510.f_2 = Local_513.f_2;
					Local_513.f_2 = fVar3;
				}
				Local_510 = { Local_510 - Vector(fLocal_299, fLocal_299, fLocal_299) };
				Local_513 = { Local_513 + Vector(fLocal_299, fLocal_299, fLocal_299) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_510, Local_513, 1);
				fLocal_296 = fVar2;
				iLocal_395 = 0;
			}
		}
	}
}




void func_558(int iParam0, float fParam1)//Position - 0x641A7
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_559();
			func_520(&iParam0, iLocal_385, fParam1, 1, 0, 1, 0, 0);
			fLocal_281 = fParam1;
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (iLocal_329[iVar0] > 2 && iLocal_329[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_586[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_586[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_205[iVar0]);
								fVar1 = (fVar1 * fLocal_228[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_541(iLocal_306[iVar0]))
									{
										func_520(&(iLocal_586[iVar0]), iLocal_306[iVar0], fVar1, 1, 0, 1, bLocal_94, iLocal_93);
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
						iLocal_329[iVar0] = 99;
						iLocal_383 = (iLocal_383 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_302[iVar0] > 2 && iLocal_302[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_568[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_568[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_568[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_107[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_541(iLocal_300[iVar0]))
									{
										func_520(&(iLocal_568[iVar0]), iLocal_300[iVar0], fVar1, 1, 0, 1, 1, iLocal_93);
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
						iLocal_302[iVar0] = 99;
						iLocal_382 = (iLocal_382 - 1);
					}
				}
				iVar0++;
			}
			iLocal_386 = 0;
			iLocal_388 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iLocal_375[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_579[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_579[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_579[iVar0], 1, 0);
							iLocal_384++;
							iLocal_375[iVar0] = 2;
						}
					}
					else
					{
						iLocal_375[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_387 = 0;
			iLocal_392 = 0;
			iLocal_395 = 0;
			fLocal_296 = fParam1;
			fLocal_295 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_492 = { Var3 - Vector(100f, 100f, 100f) };
			Local_495 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_492, Local_495, 0, 0);
		}
	}
}

void func_559()//Position - 0x6444E
{
	iLocal_79 = 1;
}

void func_560(bool bParam0, int iParam1, int iParam2)//Position - 0x64459
{
	if (bParam0)
	{
		iLocal_88 = 1;
		iLocal_566 = iParam1;
		iLocal_567 = iParam2;
	}
}

void func_561()//Position - 0x64473
{
	Local_422[0 /*3*/] = { -2653.044f, 2624.065f, 16.2347f };
	fLocal_113[0] = -0.0004f;
	fLocal_136[0] = -0.0027f;
	fLocal_159[0] = -0.0782f;
	fLocal_182[0] = 0.9969f;
	iLocal_306[0] = 2;
	fLocal_205[0] = 0f;
	fLocal_228[0] = 1f;
	iLocal_542[0] = joaat("radi");
	Local_422[1 /*3*/] = { -2640.987f, 2801.99f, 16.1853f };
	fLocal_113[1] = -0.0004f;
	fLocal_136[1] = -0.0007f;
	fLocal_159[1] = 0.9985f;
	fLocal_182[1] = 0.055f;
	iLocal_306[1] = 3;
	fLocal_205[1] = 0f;
	fLocal_228[1] = 1f;
	iLocal_542[1] = joaat("sabregt");
	Local_422[2 /*3*/] = { -2619.371f, 2936.496f, 16.2274f };
	fLocal_113[2] = 0.0073f;
	fLocal_136[2] = -0.0002f;
	fLocal_159[2] = 0.9985f;
	fLocal_182[2] = 0.0545f;
	iLocal_306[2] = 4;
	fLocal_205[2] = 8000f;
	fLocal_228[2] = 1f;
	iLocal_542[2] = joaat("radi");
	Local_422[3 /*3*/] = { -2589.696f, 3257.192f, 12.9785f };
	fLocal_113[3] = 0.0071f;
	fLocal_136[3] = 0.003f;
	fLocal_159[3] = 0.999f;
	fLocal_182[3] = 0.0441f;
	iLocal_306[3] = 5;
	fLocal_205[3] = 21000f;
	fLocal_228[3] = 1f;
	iLocal_542[3] = joaat("radi");
	Local_422[4 /*3*/] = { -2577.556f, 3311.53f, 12.9895f };
	fLocal_113[4] = -0.0041f;
	fLocal_136[4] = -0.0036f;
	fLocal_159[4] = 0.9987f;
	fLocal_182[4] = 0.0514f;
	iLocal_306[4] = 6;
	fLocal_205[4] = 21000f;
	fLocal_228[4] = 1f;
	iLocal_542[4] = joaat("sabregt");
	Local_422[5 /*3*/] = { -2596.857f, 3022.304f, 16.0236f };
	fLocal_113[5] = -0.0107f;
	fLocal_136[5] = -0.007f;
	fLocal_159[5] = -0.046f;
	fLocal_182[5] = 0.9989f;
	iLocal_306[5] = 7;
	fLocal_205[5] = 15000f;
	fLocal_228[5] = 1f;
	iLocal_542[5] = joaat("sabregt");
	Local_422[6 /*3*/] = { -2589.493f, 3110.015f, 14.6915f };
	fLocal_113[6] = -0.0077f;
	fLocal_136[6] = -0.0046f;
	fLocal_159[6] = -0.0227f;
	fLocal_182[6] = 0.9997f;
	iLocal_306[6] = 8;
	fLocal_205[6] = 15000f;
	fLocal_228[6] = 1f;
	iLocal_542[6] = joaat("radi");
	Local_422[7 /*3*/] = { -2533.485f, 3487.064f, 13.327f };
	fLocal_113[7] = -0.005f;
	fLocal_136[7] = -0.005f;
	fLocal_159[7] = 0.985f;
	fLocal_182[7] = 0.1723f;
	iLocal_306[7] = 9;
	fLocal_205[7] = 25000f;
	fLocal_228[7] = 1f;
	iLocal_542[7] = joaat("radi");
	Local_422[8 /*3*/] = { -2551.215f, 3411.773f, 12.7331f };
	fLocal_113[8] = -0.0008f;
	fLocal_136[8] = -0.0074f;
	fLocal_159[8] = -0.1508f;
	fLocal_182[8] = 0.9885f;
	iLocal_306[8] = 10;
	fLocal_205[8] = 25000f;
	fLocal_228[8] = 1f;
	iLocal_542[8] = joaat("sabregt");
	Local_422[9 /*3*/] = { -2483.468f, 3592.159f, 14.038f };
	fLocal_113[9] = -0.0077f;
	fLocal_136[9] = -0.0065f;
	fLocal_159[9] = -0.1401f;
	fLocal_182[9] = 0.9901f;
	iLocal_306[9] = 11;
	fLocal_205[9] = 24500f;
	fLocal_228[9] = 1f;
	iLocal_542[9] = joaat("radi");
	Local_422[10 /*3*/] = { -2481.96f, 3680.162f, 13.537f };
	fLocal_113[10] = 0.0054f;
	fLocal_136[10] = -0.0109f;
	fLocal_159[10] = 0.9979f;
	fLocal_182[10] = 0.0635f;
	iLocal_306[10] = 12;
	fLocal_205[10] = 29000f;
	fLocal_228[10] = 1f;
	iLocal_542[10] = joaat("radi");
	Local_422[11 /*3*/] = { -2456.996f, 3795.692f, 20.0964f };
	fLocal_113[11] = -0.0045f;
	fLocal_136[11] = -0.0323f;
	fLocal_159[11] = 0.9875f;
	fLocal_182[11] = 0.1541f;
	iLocal_306[11] = 13;
	fLocal_205[11] = 29000f;
	fLocal_228[11] = 1f;
	iLocal_542[11] = joaat("sabregt");
	Local_422[12 /*3*/] = { -2388.111f, 3944.182f, 24.2239f };
	fLocal_113[12] = 0.0008f;
	fLocal_136[12] = -0.0038f;
	fLocal_159[12] = 0.986f;
	fLocal_182[12] = 0.1669f;
	iLocal_306[12] = 14;
	fLocal_205[12] = 35000f;
	fLocal_228[12] = 1f;
	iLocal_542[12] = joaat("sabregt");
	Local_422[13 /*3*/] = { -2303.097f, 4192.747f, 39.5016f };
	fLocal_113[13] = -0.0082f;
	fLocal_136[13] = -0.0267f;
	fLocal_159[13] = 0.9687f;
	fLocal_182[13] = 0.2465f;
	iLocal_306[13] = 15;
	fLocal_205[13] = 44000f;
	fLocal_228[13] = 1f;
	iLocal_542[13] = joaat("sabregt");
	Local_422[14 /*3*/] = { -2194.678f, 4398.289f, 56.0071f };
	fLocal_113[14] = -0.0063f;
	fLocal_136[14] = -0.0611f;
	fLocal_159[14] = 0.9841f;
	fLocal_182[14] = 0.1667f;
	iLocal_306[14] = 16;
	fLocal_205[14] = 52000f;
	fLocal_228[14] = 1f;
	iLocal_542[14] = joaat("sabregt");
	Local_422[16 /*3*/] = { -2642.913f, 2781.517f, 16.2316f };
	fLocal_113[16] = 0.0046f;
	fLocal_136[16] = -0.0004f;
	fLocal_159[16] = 0.9978f;
	fLocal_182[16] = 0.0668f;
	iLocal_306[16] = 18;
	fLocal_205[16] = 4500f;
	fLocal_228[16] = 1f;
	iLocal_542[16] = joaat("radi");
	Local_422[17 /*3*/] = { -2633.257f, 2853.91f, 16.1789f };
	fLocal_113[17] = 0f;
	fLocal_136[17] = -0.0008f;
	fLocal_159[17] = 0.9984f;
	fLocal_182[17] = 0.0573f;
	iLocal_306[17] = 19;
	fLocal_205[17] = 4500f;
	fLocal_228[17] = 1f;
	iLocal_542[17] = joaat("sabregt");
}

void func_562(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x64B33
{
	struct<3> Var0;
	
	StringCopy(&cLocal_516, sParam0, 64);
	bLocal_75 = true;
	iLocal_80 = 0;
	iLocal_382 = 0;
	iLocal_383 = 0;
	iLocal_384 = 0;
	iLocal_385 = iParam1;
	iLocal_386 = 0;
	iLocal_387 = 0;
	iLocal_388 = 0;
	iLocal_392 = 0;
	iLocal_395 = 0;
	iLocal_393 = -1;
	iLocal_394 = -1;
	iLocal_396 = 0;
	iLocal_397 = 0;
	fLocal_295 = 0f;
	fLocal_296 = 0f;
	fLocal_281 = 0f;
	iLocal_81 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_492.x = (Var0.x - 100f);
		Local_492.f_1 = (Var0.f_1 - 100f);
		Local_492.f_2 = (Var0.f_2 - 100f);
		Local_495.x = (Var0.x + 100f);
		Local_495.f_1 = (Var0.f_1 + 100f);
		Local_495.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_492, Local_495, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_532);
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
	func_563();
}

void func_563()//Position - 0x64C55
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_568[iVar0] = 0;
		Local_399[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_99[iVar0] = 0f;
		fLocal_101[iVar0] = 0f;
		fLocal_103[iVar0] = 0f;
		fLocal_105[iVar0] = 0f;
		iLocal_300[iVar0] = 0;
		fLocal_107[iVar0] = 0f;
		iLocal_302[iVar0] = 0;
		iLocal_533[iVar0] = 0;
		iLocal_304[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_570[iVar0] = 0;
		iVar0++;
	}
	iLocal_382 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_579[iVar0] = 0;
		Local_403[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_251[iVar0] = 0f;
		fLocal_258[iVar0] = 0f;
		fLocal_265[iVar0] = 0f;
		fLocal_272[iVar0] = 0f;
		iLocal_375[iVar0] = 0;
		iLocal_535[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_609[iVar0] = 0;
		iVar0++;
	}
	iLocal_384 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_586[iVar0] = 0;
		Local_422[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_113[iVar0] = 0f;
		fLocal_136[iVar0] = 0f;
		fLocal_159[iVar0] = 0f;
		fLocal_182[iVar0] = 0f;
		iLocal_306[iVar0] = 0;
		fLocal_205[iVar0] = 0f;
		iLocal_329[iVar0] = 0;
		iLocal_542[iVar0] = 0;
		iLocal_352[iVar0] = 0;
		iVar0++;
	}
	iLocal_383 = 0;
	iLocal_386 = 0;
	iLocal_389 = 0;
	iLocal_390 = 0;
	iLocal_391 = 0;
}





void func_568()//Position - 0x64F00
{
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_887[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(joaat("radi"));
	STREAMING::REQUEST_MODEL(joaat("sabregt"));
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT("missexile2switch");
}

void func_569()//Position - 0x6504D
{
	if (iLocal_2336)
	{
		GlobalFunc_4972(1981.127f, 3830.467f, 31.4241f, 218.8945f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1759.f_1);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_1759.f_1, 15);
	if (iLocal_2336)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((!STREAMING::HAS_MODEL_LOADED(iLocal_2017) || !STREAMING::HAS_MODEL_LOADED(iLocal_2016)) || !STREAMING::HAS_MODEL_LOADED(Local_1759.f_1)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1759.f_1))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	MISC::CLEAR_AREA(1982.128f, 3829.42f, 31.3848f, 10000f, 1, 0, 0, 0);
	func_570(&Local_1759, 2, Local_1759.f_3, Local_1759.f_6, 1, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1759);
	func_341(2, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.127f, 3830.467f, 31.4241f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 218.8945f);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1759, -1, -1, 1f, 3, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	func_388(&(uLocal_2019[0]), 0, 1982.651f, 3827.786f, 31.41647f, 332.5456f, 0, 0, 0);
	func_456(uLocal_2019[0]);
	func_455(&(uLocal_2019[0]), 1);
	GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
	TASK::TASK_ENTER_VEHICLE(uLocal_2019[0], Local_1759, -1, 0, 2f, 1, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[0], 0, 0);
	if (!iLocal_2336)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	SYSTEM::WAIT(0);
	while (!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_2019[0]))
	{
		SYSTEM::WAIT(0);
	}
	func_444(0, 90f, 0f, 0);
	iLocal_2334 = 0;
	iLocal_2333 = 2;
	GlobalFunc_Checkpoint2(0, "start of mission", 0, 0, 0, 1);
}

int func_570(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x65285
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
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
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_194(*iParam0, iParam1);
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
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_194(*iParam0, iParam1);
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
						GlobalFunc_4970(iParam0);
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
					GlobalFunc_194(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}
























void func_594()//Position - 0x692F7
{
	int iVar0;
	
	bLocal_787 = false;
	iLocal_788 = 1;
	iLocal_624 = 0;
	iLocal_625 = 0;
	iLocal_626 = 0;
	iLocal_627 = 0;
	iLocal_789 = 0;
	iLocal_796 = 0;
	iLocal_797 = 0;
	iLocal_628 = 0;
	iLocal_629 = 0;
	bLocal_630 = false;
	iLocal_798 = 0;
	iLocal_786 = 0;
	bLocal_631 = false;
	iLocal_632 = 0;
	iLocal_799 = 0;
	iLocal_800 = 0;
	iLocal_633 = 0;
	bLocal_634 = false;
	iLocal_801 = 0;
	bLocal_635 = false;
	bLocal_636 = false;
	iLocal_638 = 0;
	iLocal_639 = 0;
	iLocal_640 = 0;
	iLocal_641 = 0;
	iLocal_642 = 0;
	iLocal_643 = 0;
	iLocal_644 = 0;
	iLocal_645 = 0;
	iLocal_646 = 0;
	iLocal_649 = 0;
	iLocal_651 = 0;
	iLocal_653 = 0;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_656 = 0;
	iLocal_658 = 0;
	iLocal_659 = 0;
	iLocal_680 = 0;
	iLocal_681 = 0;
	iLocal_682 = 0;
	iLocal_683 = 0;
	iLocal_684 = 0;
	iLocal_687 = 0;
	iLocal_691 = -1;
	iLocal_836 = 0;
	iLocal_692 = 0;
	iLocal_693 = 0;
	iLocal_653 = 0;
	iLocal_654 = 0;
	iLocal_694 = 0;
	iLocal_695 = 0;
	iLocal_657 = 0;
	iLocal_696 = 0;
	iLocal_697 = 0;
	iLocal_845 = 0;
	iLocal_698 = 0;
	iLocal_699 = 0;
	iLocal_700 = 0;
	fLocal_730 = 1f;
	iLocal_702 = 0;
	iLocal_703 = 0;
	iLocal_704 = 0;
	iLocal_706 = 0;
	iLocal_707 = 0;
	iLocal_708 = 0;
	iLocal_709 = 0;
	iLocal_710 = 0;
	iLocal_711 = 0;
	iLocal_712 = 0;
	iLocal_713 = 0;
	iLocal_714 = 0;
	iLocal_715 = 0;
	iLocal_716 = 0;
	iLocal_717 = 0;
	iLocal_718 = 0;
	iLocal_719 = 0;
	iLocal_720 = 0;
	iLocal_721 = 0;
	iLocal_722 = 0;
	iLocal_723 = 0;
	iLocal_724 = 0;
	iLocal_705 = 128;
	fLocal_731 = 0.01f;
	fLocal_732 = 0f;
	iLocal_840 = 0;
	iLocal_841 = 0;
	iLocal_842 = 0;
	iLocal_843 = 0;
	iLocal_2380 = 0;
	iLocal_3621 = 0;
	iLocal_4862 = 0;
	iLocal_6103 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_887 - 1))
	{
		Local_887[iVar0 /*33*/].f_24 = 0;
		iVar0++;
	}
	Local_1681.f_27 = 0;
	StringCopy(&Local_772, "", 16);
	StringCopy(&cLocal_776, "", 16);
	Local_1729.f_1 = joaat("baller");
	Local_1744.f_1 = joaat("dubsta");
	Local_1744.f_3 = { -2442.858f, 3681.484f, 12.454f };
	Local_1759.f_1 = GlobalFunc_4931(2, 0);
	Local_1759.f_3 = { 1982.128f, 3829.419f, 31.4094f };
	Local_1759.f_6 = 299.4815f;
	Local_887[0 /*33*/].f_11 = { -1521.86f, 4447.295f, 7.7f };
	Local_887[0 /*33*/].f_20 = 217.2352f;
	Local_887[0 /*33*/].f_1 = joaat("a_m_m_hillbilly_02");
	Local_887[0 /*33*/].f_21 = 110;
	Local_887[0 /*33*/].f_22 = 10;
	Local_887[0 /*33*/].f_28 = joaat("weapon_assaultrifle");
	Local_887[0 /*33*/].f_25 = 1;
	StringCopy(&(Local_887[0 /*33*/].f_29), "gang enemy 0", 16);
	Local_887[1 /*33*/].f_11 = { -1570.46f, 4360.972f, -0.42f };
	Local_887[1 /*33*/].f_20 = 41.3091f;
	Local_887[1 /*33*/].f_1 = joaat("a_m_m_hillbilly_02");
	Local_887[1 /*33*/].f_21 = 110;
	Local_887[1 /*33*/].f_22 = 10;
	Local_887[1 /*33*/].f_28 = joaat("weapon_pumpshotgun");
	Local_887[1 /*33*/].f_25 = 1;
	StringCopy(&(Local_887[1 /*33*/].f_29), "gang enemy 1", 16);
	Local_887[2 /*33*/].f_11 = { -1569.83f, 4495.49f, 20.24f };
	Local_887[2 /*33*/].f_20 = 196.22f;
	Local_887[2 /*33*/].f_1 = joaat("a_m_m_hillbilly_02");
	Local_887[2 /*33*/].f_21 = 110;
	Local_887[2 /*33*/].f_22 = 10;
	Local_887[2 /*33*/].f_28 = joaat("weapon_microsmg");
	Local_887[2 /*33*/].f_25 = 1;
	StringCopy(&(Local_887[2 /*33*/].f_29), "gang enemy 2", 16);
	Local_887[3 /*33*/].f_11 = { -1541.272f, 4489.342f, 18.4372f };
	Local_887[3 /*33*/].f_20 = 187.5681f;
	Local_887[3 /*33*/].f_17 = { -1545.622f, 4484.137f, 18.1388f };
	Local_887[3 /*33*/].f_1 = joaat("a_m_m_hillbilly_02");
	Local_887[3 /*33*/].f_21 = 150;
	Local_887[3 /*33*/].f_22 = 10;
	Local_887[3 /*33*/].f_28 = joaat("weapon_rpg");
	Local_887[3 /*33*/].f_25 = 1;
	StringCopy(&(Local_887[3 /*33*/].f_29), "gang enemy 3", 16);
	Local_1648.f_1 = GlobalFunc_2579();
	Local_1648.f_11 = { -1896.432f, 4427.469f, 43.3257f };
	Local_1648.f_20 = 9.9039f;
	Local_1648.f_21 = 200;
	Local_1648.f_22 = 40;
	Local_1648.f_28 = joaat("weapon_unarmed");
	Local_1714.f_3 = { -1481.96f, 4334.3f, 95.4f };
	Local_1714.f_6 = 325.2f;
	Local_1714.f_1 = joaat("frogger2");
	Local_1714.f_13 = 5;
	Local_1020[0 /*33*/].f_11 = { -1891.431f, 4420.233f, 46.6325f };
	Local_1020[0 /*33*/].f_20 = 341.7364f;
	Local_1020[0 /*33*/].f_17 = { -1884.7f, 4427.5f, 44.37f };
	Local_1020[0 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[0 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[0 /*33*/].f_21 = 200;
	Local_1020[0 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[0 /*33*/].f_29), "animal 0", 16);
	Local_1020[1 /*33*/].f_11 = { -1598.56f, 4498.4f, 20.3763f };
	Local_1020[1 /*33*/].f_20 = 288.4696f;
	Local_1020[1 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[1 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[1 /*33*/].f_21 = 110;
	Local_1020[1 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[1 /*33*/].f_29), "animal 1", 16);
	Local_1844[1 /*9*/] = { -1563.57f, 4495.2f, 18.95f };
	Local_1844[1 /*9*/].f_3 = { -1566.95f, 4469.38f, 13.07f };
	Local_1844[1 /*9*/].f_6 = { -1551.51f, 4453.79f, 12.66f };
	Local_1020[2 /*33*/].f_11 = { -1602.14f, 4484.01f, 17.36f };
	Local_1020[2 /*33*/].f_20 = 113.0293f;
	Local_1020[2 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[2 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[2 /*33*/].f_21 = 110;
	Local_1020[2 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[2 /*33*/].f_29), "animal 2", 16);
	Local_1844[2 /*9*/] = { -1571.22f, 4482f, 15.75f };
	Local_1844[2 /*9*/].f_3 = { -1565.01f, 4488.43f, 17.81f };
	Local_1844[2 /*9*/].f_6 = { -1547.75f, 4481.77f, 16.13f };
	Local_1020[3 /*33*/].f_11 = { -1506.391f, 4396.465f, 19.7348f };
	Local_1020[3 /*33*/].f_20 = 212.8962f;
	Local_1020[3 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[3 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[3 /*33*/].f_21 = 110;
	Local_1020[3 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[3 /*33*/].f_29), "animal 3", 16);
	Local_1844[3 /*9*/] = { -1489.18f, 4391.4f, 19.62f };
	Local_1844[3 /*9*/].f_3 = { -1485.7f, 4402.55f, 22.35f };
	Local_1844[3 /*9*/].f_6 = { -1468.47f, 4421.03f, 23.18f };
	Local_1020[4 /*33*/].f_11 = { -1575.684f, 4382.297f, 0.6292f };
	Local_1020[4 /*33*/].f_20 = 212.8962f;
	Local_1020[4 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[4 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[4 /*33*/].f_21 = 110;
	Local_1020[4 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[4 /*33*/].f_29), "animal 4", 16);
	Local_1844[4 /*9*/] = { -1577.08f, 4388.03f, 0f };
	Local_1844[4 /*9*/].f_3 = { -1550.03f, 4401.53f, 5.66f };
	Local_1844[4 /*9*/].f_6 = { -1557.21f, 4430.33f, 7.39f };
	Local_1020[5 /*33*/].f_11 = { -1572.583f, 4420.375f, 5.2758f };
	Local_1020[5 /*33*/].f_20 = 273.6496f;
	Local_1020[5 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[5 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[5 /*33*/].f_21 = 110;
	Local_1020[5 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[5 /*33*/].f_29), "animal 5", 16);
	Local_1844[5 /*9*/] = { -1573.33f, 4414.5f, 3.8f };
	Local_1844[5 /*9*/].f_3 = { -1569.05f, 4401.55f, 0.96f };
	Local_1844[5 /*9*/].f_6 = { -1561.75f, 4373f, 1.69f };
	Local_1020[6 /*33*/].f_11 = { -1509.13f, 4439.37f, 12.93f };
	Local_1020[6 /*33*/].f_20 = 230.6402f;
	Local_1020[6 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[6 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[6 /*33*/].f_21 = 110;
	Local_1020[6 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[6 /*33*/].f_29), "animal 6", 16);
	Local_1844[6 /*9*/] = { -1490.22f, 4448.28f, 17.03f };
	Local_1844[6 /*9*/].f_3 = { -1487.36f, 4468.4f, 13.94f };
	Local_1844[6 /*9*/].f_6 = { -1494.88f, 4473.39f, 15.39f };
	Local_1020[7 /*33*/].f_11 = { -1537.662f, 4451.67f, 12.6956f };
	Local_1020[7 /*33*/].f_20 = 47.9748f;
	Local_1020[7 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[7 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[7 /*33*/].f_21 = 110;
	Local_1020[7 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[7 /*33*/].f_29), "animal 7", 16);
	Local_1844[7 /*9*/] = { -1552.87f, 4451.38f, 11.94f };
	Local_1844[7 /*9*/].f_3 = { -1570f, 4474.65f, 13.29f };
	Local_1844[7 /*9*/].f_6 = { -1574.39f, 4484.14f, 16.42f };
	Local_1020[8 /*33*/].f_11 = { -1556.027f, 4413.794f, 1.4634f };
	Local_1020[8 /*33*/].f_20 = 150.4522f;
	Local_1020[8 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[8 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[8 /*33*/].f_21 = 110;
	Local_1020[8 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[8 /*33*/].f_29), "animal 8", 16);
	Local_1844[8 /*9*/] = { -1575.16f, 4377.77f, 1f };
	Local_1844[8 /*9*/].f_3 = { -1572.54f, 4400.54f, -0.82f };
	Local_1844[8 /*9*/].f_6 = { -1580.69f, 4389.16f, -0.05f };
	Local_1020[9 /*33*/].f_11 = { -1555.423f, 4392.621f, 4.9483f };
	Local_1020[9 /*33*/].f_20 = 240.9626f;
	Local_1020[9 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[9 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[9 /*33*/].f_21 = 110;
	Local_1020[9 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[9 /*33*/].f_29), "animal 9", 16);
	Local_1844[9 /*9*/] = { -1549.21f, 4381.09f, 3.24f };
	Local_1844[9 /*9*/].f_3 = { -1539.72f, 4386.36f, 6.51f };
	Local_1844[9 /*9*/].f_6 = { -1528.13f, 4398.42f, 14.8f };
	Local_1020[10 /*33*/].f_11 = { -1502.031f, 4409.049f, 19.1684f };
	Local_1020[10 /*33*/].f_20 = 303.9064f;
	Local_1020[10 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[10 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[10 /*33*/].f_21 = 110;
	Local_1020[10 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[10 /*33*/].f_29), "animal 10", 16);
	Local_1844[10 /*9*/] = { -1488.77f, 4420.96f, 20.74f };
	Local_1844[10 /*9*/].f_3 = { -1478.69f, 4430.5f, 20.78f };
	Local_1844[10 /*9*/].f_6 = { -1483.92f, 4444.4f, 18.41f };
	Local_1020[11 /*33*/].f_11 = { -1465.934f, 4457.232f, 15.2421f };
	Local_1020[11 /*33*/].f_20 = 293.9127f;
	Local_1020[11 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[11 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[11 /*33*/].f_21 = 110;
	Local_1020[11 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[11 /*33*/].f_29), "animal 11", 16);
	Local_1844[11 /*9*/] = { -1451.996f, 4455.727f, 20.1974f };
	Local_1844[11 /*9*/].f_3 = { -1413.631f, 4475.231f, 19.4944f };
	Local_1844[11 /*9*/].f_6 = { -1374.32f, 4467.64f, 23.8694f };
	Local_1020[12 /*33*/].f_11 = { -1533.057f, 4465.562f, 16.3504f };
	Local_1020[12 /*33*/].f_20 = 154.9713f;
	Local_1020[12 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[12 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[12 /*33*/].f_21 = 110;
	Local_1020[12 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[12 /*33*/].f_29), "animal 12", 16);
	Local_1844[12 /*9*/] = { -1520.33f, 4468.01f, 16.8353f };
	Local_1844[12 /*9*/].f_3 = { -1502.417f, 4472.191f, 16.8261f };
	Local_1844[12 /*9*/].f_6 = { -1480.811f, 4461.762f, 13.0587f };
	Local_1020[13 /*33*/].f_11 = { -1544.358f, 4470.208f, 18.6654f };
	Local_1020[13 /*33*/].f_20 = 65.5701f;
	Local_1020[13 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[13 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[13 /*33*/].f_21 = 110;
	Local_1020[13 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[13 /*33*/].f_29), "animal 13", 16);
	Local_1844[13 /*9*/] = { -1546.152f, 4438.763f, 10.0066f };
	Local_1844[13 /*9*/].f_3 = { -1549.373f, 4431.577f, 8.06592f };
	Local_1844[13 /*9*/].f_6 = { -1549.32f, 4425.254f, 5.26764f };
	Local_1020[14 /*33*/].f_11 = { -1562.587f, 4475.562f, 17.6221f };
	Local_1020[14 /*33*/].f_20 = 121.7079f;
	Local_1020[14 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[14 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[14 /*33*/].f_21 = 110;
	Local_1020[14 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[14 /*33*/].f_29), "animal 14", 16);
	Local_1844[14 /*9*/] = { -1556.276f, 4456.66f, 15.3244f };
	Local_1844[14 /*9*/].f_3 = { -1566.31f, 4449.74f, 11.3981f };
	Local_1844[14 /*9*/].f_6 = { -1564.05f, 4435.02f, 7.09f };
	Local_1020[15 /*33*/].f_11 = { -1571.776f, 4467.396f, 12.9388f };
	Local_1020[15 /*33*/].f_20 = 124.5367f;
	Local_1020[15 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[15 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[15 /*33*/].f_21 = 110;
	Local_1020[15 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[15 /*33*/].f_29), "animal 15", 16);
	Local_1844[15 /*9*/] = { -1560.92f, 4481.51f, 19.4704f };
	Local_1844[15 /*9*/].f_3 = { -1587.49f, 4494.581f, 18.7403f };
	Local_1844[15 /*9*/].f_6 = { -1596.408f, 4519.478f, 15.8511f };
	Local_1020[16 /*33*/].f_11 = { -1596.623f, 4477.617f, 14.6926f };
	Local_1020[16 /*33*/].f_20 = 57.9158f;
	Local_1020[16 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[16 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[16 /*33*/].f_21 = 110;
	Local_1020[16 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[16 /*33*/].f_29), "animal 16", 16);
	Local_1844[16 /*9*/] = { -1593.12f, 4463f, 11.06f };
	Local_1844[16 /*9*/].f_3 = { -1598.423f, 4480.754f, 15.73979f };
	Local_1844[16 /*9*/].f_6 = { -1599.517f, 4492.655f, 18.75338f };
	Local_1020[17 /*33*/].f_11 = { -1593.888f, 4506.03f, 19.4619f };
	Local_1020[17 /*33*/].f_20 = 345.576f;
	Local_1020[17 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[17 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[17 /*33*/].f_21 = 110;
	Local_1020[17 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[17 /*33*/].f_29), "animal 17", 16);
	Local_1844[17 /*9*/] = { -1560.73f, 4475.14f, 13.5f };
	Local_1844[17 /*9*/].f_3 = { -1548.74f, 4463.98f, 14.49f };
	Local_1844[17 /*9*/].f_6 = { -1557.14f, 4453.28f, 11.88f };
	Local_1020[18 /*33*/].f_11 = { -1575.24f, 4482.12f, 20.9403f };
	Local_1020[18 /*33*/].f_20 = 243.2081f;
	Local_1020[18 /*33*/].f_1 = joaat("a_c_deer");
	Local_1020[18 /*33*/].f_28 = joaat("weapon_unarmed");
	Local_1020[18 /*33*/].f_21 = 110;
	Local_1020[18 /*33*/].f_25 = 1;
	StringCopy(&(Local_1020[18 /*33*/].f_29), "animal 18", 16);
	Local_1844[18 /*9*/] = { -1566.05f, 4467.64f, 17.04f };
	Local_1844[18 /*9*/].f_3 = { -1577.987f, 4438.637f, 7.7595f };
	Local_1844[18 /*9*/].f_6 = { -1592.847f, 4435.653f, 3.489f };
	Local_1681.f_11 = { -1481.057f, 4402.773f, 22.3394f };
	Local_1681.f_20 = 156.8618f;
	Local_1681.f_1 = joaat("ig_orleans");
	Local_1681.f_28 = joaat("weapon_unarmed");
	Local_1681.f_21 = 200;
	Local_1681.f_25 = 1;
	Local_1828[0 /*3*/] = { -1512.546f, 4451.045f, 10.6712f };
	Local_1828[1 /*3*/] = { -1562.018f, 4475.028f, 17.6919f };
	Local_1828[2 /*3*/] = { -1562.533f, 4436.801f, 7.5904f };
	Local_1828[3 /*3*/] = { -1562.272f, 4475.644f, 17.6786f };
	Local_1828[4 /*3*/] = { -1600.73f, 4496.006f, 20.0414f };
	Local_1774.f_3 = { -1570.919f, 4734.149f, 49.548f };
	Local_1774.f_6 = 46.5972f;
	Local_1774.f_1 = joaat("dubsta");
	Local_1774.f_13 = 3;
	Local_753[0 /*3*/] = { -1584.934f, 4750.736f, 49.8765f };
	Local_753[1 /*3*/] = { -1561.579f, 4572.147f, 17.6341f };
	Local_1789.f_3 = { 1755.371f, 3284.65f, 40.1144f };
	Local_1789.f_6 = 283.4647f;
	Local_1789.f_1 = joaat("cavalcade");
	Local_2063.f_18 = 0;
	Local_2063.f_19 = 0;
	Local_1804.f_2 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG"));
	iVar0 = 0;
	while (iVar0 <= (Local_1020 - 1))
	{
		iLocal_660[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_887 - 1))
	{
		Local_887[iVar0 /*33*/].f_27 = 0;
		iVar0++;
	}
	iLocal_2379 = 0;
}

void func_595()//Position - 0x6A5BB
{
	if (bLocal_636)
	{
		func_489(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1714, 0))
	{
		if (GlobalFunc_8315() == 0)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1744))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
			{
				func_518(Local_1744, 1f);
			}
		}
	}
	if (GlobalFunc_145())
	{
		func_619();
		func_596();
		func_987();
	}
}

void func_596()//Position - 0x6A639
{
	MISC::SET_TIME_SCALE(1f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	}
	func_618();
	func_617();
	GlobalFunc_587();
	func_614(1);
	func_612(1);
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_MISSION_FAIL");
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	func_611();
	func_610();
	iLocal_833 = 0;
	GlobalFunc_4935();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_5652(&Local_2282, 1, 0);
	GlobalFunc_2224(0);
	GlobalFunc_7632(0);
	GlobalFunc_4937(0, 0);
	func_602(0, 1);
	GlobalFunc_5883(&Local_2063);
	func_17(&Local_2097, &uLocal_2019);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_4948(&uLocal_2321, 0, 0);
	STREAMING::CLEAR_FOCUS();
	STREAMING::STREAMVOL_DELETE(uLocal_780);
	GRAPHICS::SET_SEETHROUGH(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_867, Local_870, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	GlobalFunc_729(&uLocal_2019, 0, 0);
	GlobalFunc_729(&uLocal_2019, 1, 0);
	GlobalFunc_729(&uLocal_2019, 2, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), 4, 1f, 1, 0, 1065353216);
		ENTITY::DELETE_ENTITY(&iLocal_2337);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_726))
		{
			AUDIO::STOP_SOUND(iLocal_726);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_837))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_837, 0);
	}
	GlobalFunc_200(&uLocal_2114, 0);
	GlobalFunc_200(&uLocal_2114, 1);
	GlobalFunc_200(&uLocal_2114, 2);
	GlobalFunc_200(&uLocal_2114, 3);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[0]))
	{
		PED::DELETE_PED(&(uLocal_2019[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[1]))
	{
		PED::DELETE_PED(&(uLocal_2019[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[2]))
	{
		PED::DELETE_PED(&(uLocal_2019[2]));
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_884[0]))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_884[0]);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_884[1]))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_884[1]);
	}
}






void func_602(bool bParam0, bool bParam1)//Position - 0x6AA7B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_516))
	{
		iLocal_81 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_532);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_97)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_539());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_548();
			func_544();
			func_527();
		}
		else
		{
			func_521();
			func_563();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}








void func_610()//Position - 0x6ADC3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_802)
	{
		iLocal_802[iVar0] = 0;
		iVar0++;
	}
}

void func_611()//Position - 0x6ADEA
{
	Local_1648.f_1 = GlobalFunc_2579();
	Local_887[0 /*33*/].f_1 = joaat("a_m_m_hillbilly_02");
	Local_1729.f_1 = joaat("baller");
	Local_1744.f_1 = joaat("dubsta");
	Local_1714.f_1 = joaat("frogger");
	Local_1759.f_1 = GlobalFunc_4931(2, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2018);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1648.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_887[0 /*33*/].f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1729.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("radi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sabregt"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1714.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1759.f_1);
	STREAMING::REMOVE_PTFX_ASSET();
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkexcile2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkexcile2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkexile2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(6, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(7, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(8, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(10, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(11, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(12, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(13, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(14, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(15, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(16, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(17, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(18, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(19, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(100, "lkexcile2_chase");
}

void func_612(bool bParam0)//Position - 0x6AF7A
{
	GlobalFunc_2873(&Local_1759, bParam0);
	GlobalFunc_2873(&Local_1729, bParam0);
	GlobalFunc_2873(&Local_1744, bParam0);
	GlobalFunc_2873(&Local_1714, bParam0);
	GlobalFunc_2873(&(iLocal_586[0]), bParam0);
	GlobalFunc_2873(&Local_1774, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("radi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sabregt"));
}


void func_614(bool bParam0)//Position - 0x6B067
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_887 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_887[iVar0 /*33*/]))
		{
			PED::DELETE_PED(&(Local_887[iVar0 /*33*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1020)
	{
		func_615(&(Local_1020[iVar0 /*33*/]), bParam0);
		iVar0++;
	}
	func_615(&(uLocal_2019[1]), 0);
	func_615(&(uLocal_2019[0]), 0);
	func_615(&(uLocal_2019[2]), 0);
	func_615(&Local_1648, 1);
	func_615(&Local_1681, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1681.f_1);
}

void func_615(int iParam0, bool bParam1)//Position - 0x6B0FC
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
					{
						ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, 1, 0);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}


void func_617()//Position - 0x6B187
{
	if (CAM::DOES_CAM_EXIST(uLocal_874))
	{
		CAM::DESTROY_CAM(uLocal_874, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_876))
	{
		CAM::DESTROY_CAM(uLocal_876, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_875))
	{
		CAM::DESTROY_CAM(uLocal_875, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_877))
	{
		CAM::DESTROY_CAM(uLocal_877, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_878))
	{
		CAM::DESTROY_CAM(uLocal_878, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_879))
	{
		CAM::DESTROY_CAM(uLocal_879, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_880))
	{
		CAM::DESTROY_CAM(uLocal_880, 0);
	}
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
}

void func_618()//Position - 0x6B229
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(Local_1759.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_1759.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_873))
	{
		HUD::REMOVE_BLIP(&uLocal_873);
	}
	if (HUD::DOES_BLIP_EXIST(Local_1729.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_1729.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(Local_1744.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_1744.f_2));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_887)
	{
		if (HUD::DOES_BLIP_EXIST(Local_887[iVar0 /*33*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_887[iVar0 /*33*/].f_2));
		}
		iVar0++;
	}
}

void func_619()//Position - 0x6B2B5
{
	switch (GlobalFunc_2780())
	{
		case 0:
			GlobalFunc_586(0);
			break;
		
		case 1:
			GlobalFunc_586(2);
			break;
		
		case 2:
			GlobalFunc_586(2);
			break;
	}
	GlobalFunc_5129(1980.352f, 3816.627f, 31.2685f, 298.2293f);
}





void func_624()//Position - 0x6B37C
{
	switch (iLocal_713)
	{
		case 0:
			if (ENTITY::IS_ENTITY_ATTACHED(Local_1648))
			{
				ENTITY::DETACH_ENTITY(Local_1648, 1, 1);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1714, "main_heli", 0, Local_1714.f_1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2019[0], "michael", 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2019[1], "franklin", 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1648, "chop", 1, Local_1648.f_1, 0);
			GlobalFunc_2875(&Local_1789);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1789))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1789, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1789, "Rear_Car", 1, Local_1789.f_1, 0);
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1789);
				}
			}
			GlobalFunc_2874(1);
			CUTSCENE::START_CUTSCENE(0);
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_713++;
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::_0xEF39EE20C537E98C(1742.789f, 3280.794f, 40.0904f, GlobalFunc_590(0f, 0f, 77.8678f));
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 0, 0);
				MISC::CLEAR_AREA(1744.911f, 3254.205f, 40.5f, 1000f, 1, 0, 0, 0);
				iLocal_713++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
					{
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_713++;
				}
			}
			else
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_629(0, 0, 0, 0, 0, 3000, 1);
				func_625();
			}
			break;
		
		case 3:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_444(1, 0, 0, 1);
				func_625();
			}
			break;
	}
}

void func_625()//Position - 0x6B531
{
	GlobalFunc_5103(0, 0);
	func_987();
}




void func_629(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x6B68C
{
	GlobalFunc_657();
	GlobalFunc_8316(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, iParam5, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam6)
	{
		GlobalFunc_698();
	}
	else
	{
		GlobalFunc_626();
	}
}




int func_633()//Position - 0x6B7E3
{
	switch (iLocal_699)
	{
		case 0:
			GlobalFunc_650(1731f, 3273.7f, 40.5f, 100f, 120f, "EXL_2_MCS_3");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("chop", Local_1648, Local_1648.f_1);
			func_640(&Local_2282, 1731f, 3273.7f, 40.5f, 0.01f, 0.01f, 0.01f, 0, uLocal_2019[0], uLocal_2019[1], 0, Local_1714, "FS_HELI_2", "FS_michael_0", "FS_franklin_0", "FS_chop_0", "", "FS_HELI_0", "FS_HELI_1", 0, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1731f, 3273.7f, 40.5f, 20f, 20f, 2f, 1, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
					{
						if (GlobalFunc_Has_Cutscene_Loaded())
						{
							if (func_635(1, 1, 1))
							{
								GlobalFunc_5652(&Local_2282, 1, 0);
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_HELI_PICK_UP"))
								{
									AUDIO::STOP_AUDIO_SCENE("EXILE_2_HELI_PICK_UP");
								}
								iLocal_2333 = 12;
								return 1;
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1789))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1731f, 3273.7f, 40.5f, 1) < 500f)
				{
					STREAMING::REQUEST_MODEL(Local_1789.f_1);
					if (STREAMING::HAS_MODEL_LOADED(Local_1789.f_1))
					{
						Local_1789 = VEHICLE::CREATE_VEHICLE(Local_1789.f_1, Local_1789.f_3, Local_1789.f_6, 1, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1789);
						VEHICLE::SET_VEHICLE_COLOURS(Local_1789, 0, 0);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_1789, "22LJK483");
					}
				}
			}
			func_634();
			break;
		
		case 1:
			break;
	}
	return 0;
}

void func_634()//Position - 0x6B99B
{
	switch (iLocal_707)
	{
		case 0:
			if (func_512(Local_2282.f_5, 1))
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_AIR1", 6, 0, 0, 0))
				{
					iLocal_707++;
				}
			}
			break;
		
		case 1:
			if (func_512(Local_2282.f_5, 1))
			{
				iLocal_707 = 2;
			}
			if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1744.911f, 3254.205f, 39.8f, 1) < 50f)
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1714) > 5f)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_LAND", 7, 0, 0, 0))
						{
							iLocal_707 = 3;
						}
					}
				}
			}
			break;
		
		case 2:
			if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1744.911f, 3254.205f, 39.8f, 1) < 50f)
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1714) > 5f)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_LAND", 7, 0, 0, 0))
						{
							iLocal_707++;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_635(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6BAC5
{
	if (GlobalFunc_552(1, 0, 1))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		GlobalFunc_8316(1, 1, 1, 0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		if (bParam2)
		{
			GlobalFunc_4956();
		}
		else
		{
			GlobalFunc_4935();
		}
		HUD::DISPLAY_HUD(0);
		HUD::DISPLAY_RADAR(0);
		CAM::SET_WIDESCREEN_BORDERS(1, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
		}
		GlobalFunc_626();
		return 1;
	}
	return 0;
}





int func_640(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x6BC79
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}





































int func_677()//Position - 0x6E3CC
{
	int iVar0;
	
	GlobalFunc_9194(&Local_2282, Local_753[iLocal_700 /*3*/], 0.01f, 0.01f, 0.01f, 0, Local_1714, "", "", "", 0, 0, 1, -1);
	if ((HUD::DOES_BLIP_EXIST(Local_2282.f_5) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[1], Local_1714)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_1648, Local_1714))
	{
		if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_GETIN", 7, 0, 0, 0))
		{
			STREAMING::CLEAR_FOCUS();
			GlobalFunc_5652(&Local_2282, 1, 0);
			if (HUD::DOES_BLIP_EXIST(uLocal_767))
			{
				HUD::REMOVE_BLIP(&uLocal_767);
			}
			if (HUD::DOES_BLIP_EXIST(Local_1648.f_2))
			{
				HUD::REMOVE_BLIP(&(Local_1648.f_2));
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1020 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1020[iVar0 /*33*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1020[iVar0 /*33*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1020[iVar0 /*33*/].f_1);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_887 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_887[iVar0 /*33*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_887[iVar0 /*33*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_887[iVar0 /*33*/].f_1);
				}
				iVar0++;
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
			iLocal_2333 = 11;
			return 1;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_753[iLocal_700 /*3*/], 20f, 20f, 5.5f, 0, 1, 0))
		{
			HUD::SET_BLIP_ALPHA(Local_2282.f_5, 0);
		}
		else
		{
			HUD::SET_BLIP_ALPHA(Local_2282.f_5, 255);
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_753[iLocal_700 /*3*/], 20f, 20f, 2f, 1, 1, 0);
		}
	}
	func_679();
	func_467();
	func_678();
	return 0;
}

void func_678()//Position - 0x6E586
{
	switch (iLocal_708)
	{
		case 0:
			if (func_512(Local_2282.f_5, 1))
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_PICKUP", 7, 0, 0, 0))
				{
					iLocal_708++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_753[iLocal_700 /*3*/], 10f, 10f, 5f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_LANDS", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
							iLocal_708++;
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_679()//Position - 0x6E658
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	struct<3> Var13;
	int iVar16;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[1]))
	{
		switch (iLocal_693)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2019[1], -1683.497f, 4454.595f, 1.566f, 1f, 1f, 2f, 0, 1, 0))
				{
					if (func_484(uLocal_2019[1], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1683.497f, 4454.595f, 1.566f, 2f, -1, 0.2f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
				}
				else if (!PED::IS_PED_FACING_PED(uLocal_2019[1], PLAYER::PLAYER_PED_ID(), 30f))
				{
					if (func_484(uLocal_2019[1], -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_2019[1], PLAYER::PLAYER_PED_ID(), 0);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), 1) < 10f)
				{
					if (!func_470("TM44_FRKHELI"))
					{
						if (!GlobalFunc_5172(&Local_2282, 0))
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FRKHELI", 7, 0, 0, 0))
							{
								func_458("TM44_FRKHELI", 1);
							}
						}
					}
				}
				break;
			
			case 100:
				if (!iLocal_843 >= 21)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_2019[1], -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, 0, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(uLocal_2019[1]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_2019[1], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
						TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_693 = 101;
					}
					else
					{
						TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar0);
						iVar0 = (iVar0 - 1);
						if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar0, &Var1))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 2f, -1, 0.2f, 0, 1193033728);
							TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							iLocal_693 = 101;
						}
					}
				}
				else
				{
					iLocal_693 = 103;
				}
				break;
			
			case 101:
				if (!iLocal_843 >= 21)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_2019[1]))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_2019[1], 2f, 0);
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar4);
					iVar4 = (iVar4 - 1);
					if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar4, &Var5))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2019[1], Var5, 2f, 2f, 2f, 0, 1, 0))
						{
							if (func_484(uLocal_2019[1], 242628503))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_2019[1], -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, 0, 1, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var5, 2f, -1, 0.2f, 0, 1193033728);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
							}
						}
						else if (func_484(uLocal_2019[1], 242628503))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_2019[1], Var5, 4f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_2019[1], 0);
							iLocal_693++;
						}
					}
				}
				else
				{
					iLocal_693 = 103;
				}
				break;
			
			case 102:
				if (iLocal_843 >= 21)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_2019[1], 1);
					iLocal_693 = 103;
				}
				break;
			
			case 103:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) > 10f)
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_2019[1], 3f);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2019[1], ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 2.5f, 2.5f, 4f, 0, 1, 0))
				{
					if (func_484(uLocal_2019[1], 1056466932))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_2019[1], Local_887[3 /*33*/], 0f, 0f, 0f, 2f, -1, 1f, 1);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(uLocal_2019[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 0f), 1.5f, 1.5f, 4f, 0, 1, 0))
				{
					if (func_484(uLocal_2019[1], -653332088))
					{
						TASK::TASK_SHOOT_AT_COORD(uLocal_2019[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 3f), 2000, 1566631136);
					}
				}
				break;
			
			case 200:
				if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[1], Local_1714))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_1714, Local_753[iLocal_700 /*3*/], 20f, 20f, 5.5f, 0, 1, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1714)) && ENTITY::GET_ENTITY_SPEED(Local_1714) < 0.2f)
					{
						if (func_484(uLocal_2019[1], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_2019[1], Local_1714, -1, 2, 2f, 1, 0);
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 45f)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2019[1], Local_760, 2f, 2f, 2f, 0, 1, 0))
					{
						if (func_484(uLocal_2019[1], 242628503))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_760, 2f, -1, 0.2f, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1714, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
					}
					else if (PED::IS_PED_FACING_PED(uLocal_2019[1], PLAYER::PLAYER_PED_ID(), 40f))
					{
						if (func_484(uLocal_2019[1], 242628503))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1714, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[1], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
					}
				}
				break;
			
			case 999:
				break;
		}
	}
	else if (GlobalFunc_8315() == 1 && Local_2097 == 2)
	{
		switch (iLocal_693)
		{
			case 100:
				if (!iLocal_843 >= 21)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, 0, 1, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
						TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_693 = 101;
					}
					else
					{
						TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar8);
						iVar8 = (iVar8 - 1);
						if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar8, &Var9))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9, 2f, -1, 0.2f, 0, 1193033728);
							TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							iLocal_693 = 101;
						}
					}
				}
				else
				{
					iLocal_693 = 103;
				}
				break;
			
			case 101:
				if (!iLocal_843 >= 21)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PLAYER::PLAYER_PED_ID(), 2f, 0);
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar12);
					iVar12 = (iVar12 - 1);
					if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar12, &Var13))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var13, 2f, 2f, 2f, 0, 1, 0))
						{
							if (func_484(PLAYER::PLAYER_PED_ID(), 242628503))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, 0, 1, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var13, 2f, -1, 0.2f, 0, 1193033728);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								}
							}
						}
						else if (func_484(PLAYER::PLAYER_PED_ID(), 242628503))
						{
							iVar16 = func_680(PLAYER::PLAYER_PED_ID(), &Local_1828);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), Local_1828[iVar16 /*3*/], 4f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_693++;
						}
					}
				}
				else
				{
					iLocal_693 = 103;
				}
				break;
			
			case 102:
				if (iLocal_843 >= 21)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
					iLocal_693 = 103;
				}
				break;
			
			case 103:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) > 10f)
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1648, 3f);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, -10f, 0f), 2.5f, 2.5f, 4f, 0, 1, 0))
				{
					if (func_484(PLAYER::PLAYER_PED_ID(), 1056466932))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_887[3 /*33*/], 0f, 0f, 0f, 2f, -1, 1f, 1);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, -10f, 0f), 1.5f, 1.5f, 4f, 0, 1, 0))
				{
					if (func_484(PLAYER::PLAYER_PED_ID(), -653332088))
					{
						TASK::TASK_SHOOT_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 0f, 3f), 2000, 1566631136);
					}
				}
				break;
			
			case 200:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) < 30f)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_1714, Local_753[iLocal_700 /*3*/], 20f, 20f, 5f, 0, 1, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
						{
							if (func_484(PLAYER::PLAYER_PED_ID(), -1794415470))
							{
								TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, -1, 2, 2f, 1, 0);
							}
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 45f)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_760, 2f, 2f, 2f, 0, 1, 0))
					{
						if (func_484(PLAYER::PLAYER_PED_ID(), 242628503))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_760, 2f, -1, 0.2f, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1714, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
					}
					else if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 40f))
					{
						if (func_484(PLAYER::PLAYER_PED_ID(), 242628503))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1714, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
					}
				}
				break;
			}
	}
}

int func_680(int iParam0, var uParam1)//Position - 0x6F1BA
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (*uParam1 - 1))
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), *(uParam1[iVar3 /*3*/]), 1);
		if (iVar3 == 0)
		{
			fVar0 = fVar1;
			iVar2 = 0;
		}
		else if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			iVar2 = iVar3;
		}
		iVar3++;
	}
	return iVar2;
}



void func_683()//Position - 0x6F26F
{
	switch (iLocal_698)
	{
		case 0:
			GlobalFunc_2518(&uLocal_2019, 0, 0);
			GlobalFunc_2518(&uLocal_2019, 1, 0);
			GlobalFunc_729(&uLocal_2019, 0, 1);
			GlobalFunc_729(&uLocal_2019, 1, 1);
			GlobalFunc_729(&uLocal_2019, 2, 0);
			GlobalFunc_2518(&uLocal_2019, 2, 1);
			func_31(&uLocal_2019, 2, 0);
			GlobalFunc_2872(&uLocal_2019, 2, 0);
			iLocal_788 = 1;
			if (Local_2097 == 2)
			{
				GlobalFunc_9134(&uLocal_2019, 2);
				iLocal_657 = 1;
				switch (GlobalFunc_8315())
				{
					case 0:
						func_759();
						func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
						break;
					
					case 1:
						func_757();
						func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
						break;
					}
			}
			iLocal_652 = MISC::GET_GAME_TIMER();
			iLocal_698++;
			break;
		
		case 1:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				iLocal_700 = func_756(&Local_753);
				iLocal_698++;
			}
			else if (GlobalFunc_588(&iLocal_652, 3000))
			{
				iLocal_788 = 1;
				GlobalFunc_9134(&uLocal_2019, 2);
				iLocal_657 = 1;
				switch (GlobalFunc_8315())
				{
					case 0:
						if (Local_2097 != 2)
						{
							func_755();
						}
						else
						{
							func_759();
						}
						break;
					
					case 1:
						if (Local_2097 != 2)
						{
							func_754();
						}
						else
						{
							func_757();
							func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
						}
						break;
				}
				iLocal_700 = func_756(&Local_753);
				iLocal_698++;
			}
			break;
		
		case 2:
			if (GlobalFunc_8315() == 2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::REMOVE_ANIM_SET("move_ped_crouched");
				STREAMING::REMOVE_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
				STREAMING::REMOVE_ANIM_SET("move_ped_crouched_strafing");
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1714.f_13, sLocal_846);
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_846);
				VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_846);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexile2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1774.f_13, "lkexile2");
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1744);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1729);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1729.f_1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1774);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1774.f_1);
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1714.f_13, sLocal_846);
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_846);
				VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_846);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexile2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1774.f_13, "lkexile2");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1804.f_2);
				STREAMING::REMOVE_PTFX_ASSET();
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				STREAMING::SET_PED_POPULATION_BUDGET(1);
				switch (iLocal_700)
				{
					case 0:
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[1]);
						ENTITY::SET_ENTITY_COORDS(uLocal_2019[1], -1594.58f, 4770.974f, 50.0451f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_2019[1], 214.7628f);
						Local_760 = { -1594.58f, 4770.974f, 50.0451f };
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1648);
						ENTITY::SET_ENTITY_COORDS(Local_1648, -1593.292f, 4770.808f, 49.94669f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1648, 214.7628f);
						Local_1648.f_17 = { -1593.292f, 4770.808f, 49.94669f };
						break;
					
					case 1:
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[1]);
						ENTITY::SET_ENTITY_COORDS(uLocal_2019[1], -1563.796f, 4589.273f, 18.5544f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_2019[1], 178.1914f);
						Local_760 = { -1563.796f, 4589.273f, 18.5544f };
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1648);
						ENTITY::SET_ENTITY_COORDS(Local_1648, -1561.667f, 4585.899f, 18.3892f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1648, 28.3876f);
						Local_1648.f_17 = { -1561.667f, 4585.899f, 18.3892f };
						break;
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_767))
				{
					uLocal_767 = GlobalFunc_6783(uLocal_2019[1], 0, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_1648.f_2))
				{
					Local_1648.f_2 = GlobalFunc_6783(Local_1648, 0, 0);
				}
				AUDIO::START_AUDIO_SCENE("EXILE_2_HELI_PICK_UP");
				iLocal_693 = 200;
				iLocal_684 = 400;
				iLocal_2333 = 10;
				GlobalFunc_Checkpoint2(5, "pickup franklin and chop", 1, 0, 0, 1);
				GlobalFunc_164("FS_GOD_2", 7500, 1);
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
	{
		func_751();
	}
	func_467();
	func_750(&Local_2097);
	func_749(Local_1714, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 12000f), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 500f), 1065353216);
	func_684();
	func_489(0);
}

void func_684()//Position - 0x6F6D8
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	func_748(&Local_2097);
	switch (iLocal_657)
	{
		case 0:
			if (iLocal_788)
			{
				if (GlobalFunc_10061(&uLocal_2019, Local_2097 != 2, 1))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (iLocal_2333 == 7)
							{
								if (GlobalFunc_751(&uLocal_2019, 1))
								{
									if (Local_2097 != 2)
									{
										if (func_730())
										{
											func_729();
											func_728();
											iLocal_657++;
										}
									}
									else if (func_727())
									{
										func_729();
										func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
										iLocal_657++;
									}
								}
								if (func_726(&Local_2097, &uLocal_2019))
								{
									if (func_724())
									{
										func_723();
										func_728();
										iLocal_657++;
									}
								}
								if (GlobalFunc_751(&uLocal_2019, 0))
								{
									if (func_722())
									{
										func_721();
										func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
										iLocal_657++;
									}
								}
							}
							else if (iLocal_2333 == 9)
							{
								if (GlobalFunc_751(&uLocal_2019, 2))
								{
									if (Local_2097 != 2)
									{
										func_755();
									}
									else
									{
										func_759();
										func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
									}
									iLocal_700 = func_756(&Local_753);
								}
							}
							break;
						
						case 1:
							if (iLocal_2333 == 7)
							{
								if (GlobalFunc_751(&uLocal_2019, 0))
								{
									if (Local_2097 != 2)
									{
										if (func_720())
										{
											func_721();
											iLocal_657++;
										}
									}
									else if (func_717())
									{
										func_721();
										func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
										iLocal_657++;
									}
								}
								if (func_726(&Local_2097, &uLocal_2019))
								{
									if (func_715())
									{
										func_723();
										iLocal_657++;
									}
								}
								if (GlobalFunc_751(&uLocal_2019, 1))
								{
									if (func_712())
									{
										func_729();
										func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
										iLocal_657++;
									}
								}
							}
							else if (iLocal_2333 == 9)
							{
								if (GlobalFunc_751(&uLocal_2019, 2))
								{
									if (Local_2097 != 2)
									{
										func_754();
										iLocal_657++;
									}
									else
									{
										func_757();
										func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
										iLocal_657++;
									}
									iLocal_700 = func_756(&Local_753);
								}
							}
							break;
						}
					}
			}
			break;
		
		case 1:
			if (func_695())
			{
				if (Local_2063.f_18)
				{
					if (!Local_2063.f_19)
					{
						if (func_693())
						{
							switch (GlobalFunc_8315())
							{
								case 0:
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
									PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 1048576000);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
									PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
									PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 1);
									if (iLocal_789 || iLocal_638)
									{
										PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
									}
									PED::SET_PED_DIES_WHEN_INJURED(uLocal_2019[1], 0);
									PED::SET_PED_CAN_BE_TARGETTED(uLocal_2019[1], 0);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_2019[1], 0);
									PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_2019[1], 0);
									ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_2019[1], 0, 0);
									PED::SET_PED_CAN_RAGDOLL(uLocal_2019[1], 0);
									PED::SET_PED_DIES_IN_WATER(uLocal_2019[1], 0);
									PED::SET_PED_SEEING_RANGE(uLocal_2019[1], 250f);
									PED::SET_PED_HEARING_RANGE(uLocal_2019[1], 250f);
									PED::SET_PED_ID_RANGE(uLocal_2019[1], 250f);
									func_455(&(uLocal_2019[1]), 1);
									func_452(uLocal_2019[1], 1);
									func_458("TM44_MLOOK", 0);
									break;
								
								case 1:
									STREAMING::CLEAR_FOCUS();
									PED::SET_PED_CONFIG_FLAG(uLocal_2019[0], 208, 1);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_2019[0], Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
									PED::SET_PED_MOVEMENT_CLIPSET(uLocal_2019[0], "move_ped_crouched", 1048576000);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(uLocal_2019[0], "Wpn_AssaultRifle_WeaponHoldingCrouched");
									PED::SET_PED_STRAFE_CLIPSET(uLocal_2019[0], "move_ped_crouched_strafing");
									PED::SET_PED_DESIRED_HEADING(uLocal_2019[0], ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
									PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), 1);
									iLocal_693 = 100;
									break;
								
								case 2:
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
									break;
							}
							Local_2063.f_19 = 1;
						}
					}
				}
				func_692();
				if (func_691())
				{
					iLocal_689 = MISC::GET_GAME_TIMER();
					iLocal_690 = 0;
				}
			}
			else
			{
				Global_17017 = 0;
				Local_2063.f_18 = 0;
				Local_2063.f_19 = 0;
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 183);
				PAD::_0xCB0360EFEFB2580D(0);
				switch (GlobalFunc_8315())
				{
					case 0:
						STREAMING::SET_FOCUS_POS_AND_VEL(-1664.92f, 4438.81f, 80f, 0f, 0f, 0f);
						GlobalFunc_7632(1);
						if (!HUD::DOES_BLIP_EXIST(uLocal_767))
						{
							uLocal_767 = GlobalFunc_6797(uLocal_2019[1], 0, 145);
						}
						iLocal_689 = MISC::GET_GAME_TIMER();
						iLocal_690 = 0;
						iLocal_657 = 0;
						if (Local_2097 == 1)
						{
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							CAM::_0x661B5C8654ADD825(Local_2097.f_4, 1);
							func_689(&Local_2097, &uLocal_2019, 1, 0, 3000);
							GlobalFunc_574(179, 0);
							HUD::GET_HUD_COLOUR(174, &uVar0, &uVar1, &uVar2, &uVar3);
							PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0, uVar0, uVar1, uVar2);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1648))
							{
							}
							func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 0, 0, 3000);
							GlobalFunc_571(0, -1);
							CAM::SET_CAM_ACTIVE(uLocal_877, 0);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
						}
						break;
					
					case 1:
						GlobalFunc_7632(0);
						TASK::TASK_AIM_GUN_AT_COORD(uLocal_2019[0], -1531.6f, 4376.7f, 68f, -1, 0, 0);
						PED::SET_PED_RESET_FLAG(uLocal_2019[0], 156, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[0], 1, 0);
						iLocal_657 = 0;
						if (Local_2097 == 1)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							CAM::_0x661B5C8654ADD825(Local_2097.f_4, 1);
							func_689(&Local_2097, &uLocal_2019, 1, 0, 3000);
							GlobalFunc_574(179, 0);
							HUD::GET_HUD_COLOUR(174, &uVar4, &uVar5, &uVar6, &uVar7);
							PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0, uVar4, uVar5, uVar6);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1648))
							{
							}
							PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
							PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), 1);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
							GlobalFunc_571(0, -1);
						}
						break;
					
					case 2:
						func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
						break;
				}
				func_685();
			}
			break;
	}
}

void func_685()//Position - 0x6FD8F
{
	switch (GlobalFunc_8315())
	{
		case 0:
			func_686(PLAYER::PLAYER_PED_ID());
			func_686(uLocal_2019[1]);
			func_686(Local_1648);
			if (Local_2097 != 2)
			{
				func_686(Local_887[0 /*33*/]);
				func_686(Local_887[1 /*33*/]);
				func_686(Local_887[2 /*33*/]);
				if (iLocal_843 >= 21)
				{
					if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_887[3 /*33*/]) > 120)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_887[3 /*33*/], 120);
							func_686(Local_887[3 /*33*/]);
						}
					}
				}
			}
			break;
		
		case 1:
			func_686(PLAYER::PLAYER_PED_ID());
			func_686(uLocal_2019[0]);
			func_686(Local_1648);
			if (Local_2097 != 2)
			{
				if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_887[3 /*33*/], Local_887[3 /*33*/].f_21);
				}
				func_686(Local_887[0 /*33*/]);
				func_686(Local_887[1 /*33*/]);
				func_686(Local_887[2 /*33*/]);
				func_686(Local_887[3 /*33*/]);
			}
			break;
	}
}

void func_686(int iParam0)//Position - 0x6FE93
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			if (iVar0 < 110)
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, 120);
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0);
			}
			ENTITY::SET_ENTITY_PROOFS(iParam0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}



void func_689(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x6FFC2
{
	func_20(uParam0, uParam1, 1);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("chop");
	CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
	if (bParam2)
	{
		CAM::RENDER_SCRIPT_CAMS(true, bParam3, iParam4, 1, 0, 0);
		if (bParam3)
		{
			uParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam4);
		}
	}
	uParam1->f_7 = 4;
	if (uParam0->f_2 == 1)
	{
		GlobalFunc_2243();
	}
	GRAPHICS::ANIMPOSTFX_PLAY("ChopVision", 0, 0);
	PAD::_0xF239400E16C23E08(0, 1);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 0);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_3, 1);
	}
	*uParam0 = 2;
}


int func_691()//Position - 0x70053
{
	if (GlobalFunc_8315() == 0)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_692()//Position - 0x7007F
{
	if (iLocal_2333 == 9)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
				{
					if (GlobalFunc_8315() == 0)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, 0);
							GlobalFunc_11267(uLocal_2019[0], 14, 45, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
						PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 1048576000);
						PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
					}
					else
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[0], Local_1714))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(uLocal_2019[0]))
							{
								ENTITY::DETACH_ENTITY(uLocal_2019[0], 1, 1);
							}
							PED::SET_PED_INTO_VEHICLE(uLocal_2019[0], Local_1714, 0);
							GlobalFunc_11267(uLocal_2019[0], 14, 45, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[0], 0, 0);
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(uLocal_2019[0]);
							PED::RESET_PED_MOVEMENT_CLIPSET(uLocal_2019[0], 1048576000);
							PED::RESET_PED_STRAFE_CLIPSET(uLocal_2019[0]);
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
						}
						if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_1714, 1))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_1714, 12, false);
						}
					}
				}
			}
		}
	}
}

int func_693()//Position - 0x701C3
{
	if (GlobalFunc_751(&uLocal_2019, 0))
	{
		if (GlobalFunc_8315() == 1)
		{
			if (GlobalFunc_10991(&uLocal_2019, 1, 1, 0))
			{
				GlobalFunc_565(181, 1, 0);
				GlobalFunc_503(0, 177);
				GlobalFunc_504(0, 176);
				iLocal_647 = 0;
				return 1;
			}
		}
	}
	if (GlobalFunc_751(&uLocal_2019, 1))
	{
		if (GlobalFunc_8315() == 0)
		{
			if (GlobalFunc_10991(&uLocal_2019, 1, 1, 0))
			{
				GlobalFunc_565(181, 1, 0);
				GlobalFunc_503(0, 177);
				GlobalFunc_504(0, 176);
				iLocal_647 = 0;
				return 1;
			}
		}
	}
	if (iLocal_2333 == 9)
	{
		if (GlobalFunc_751(&uLocal_2019, 2))
		{
			if (GlobalFunc_10991(&uLocal_2019, 1, 1, 0))
			{
				GlobalFunc_565(181, 1, 0);
				GlobalFunc_503(0, 177);
				GlobalFunc_504(0, 176);
				iLocal_647 = 0;
				return 1;
			}
		}
	}
	return 0;
}


int func_695()//Position - 0x70330
{
	switch (iLocal_623)
	{
		case 0:
			if (func_696(&Local_2063, 3, 2050, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		
		case 2:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_2063.f_18 = 1;
					}
				}
				return 1;
			}
			break;
		
		case 3:
			if (func_696(&Local_2063, 3, 1024, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_2063.f_18 = 1;
					}
				}
				return 1;
			}
			break;
		
		case 5:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		
		case 6:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		
		case 7:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		
		case 8:
			if (func_696(&Local_2063, 3, 0, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_2063.f_18 = 1;
					}
				}
				return 1;
			}
			break;
		
		case 10:
			if (func_696(&Local_2063, 3, 1024, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_2063.f_18 = 1;
					}
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_696(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x704DF
{
	return func_697(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_697(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)//Position - 0x70506
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
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
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
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(uParam12);
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
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
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
						GlobalFunc_8031(0, 1);
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
						GlobalFunc_8031(0, 1);
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
				GlobalFunc_8031(0, 1);
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}















int func_712()//Position - 0x70DB9
{
	HUD::CLEAR_HELP(1);
	func_713();
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_767))
	{
		HUD::REMOVE_BLIP(&uLocal_767);
	}
	STREAMING::START_PLAYER_SWITCH(Local_2097.f_3, PLAYER::PLAYER_PED_ID(), 0, 3);
	iLocal_623 = 5;
	return 1;
}

void func_713()//Position - 0x70E0D
{
	switch (GlobalFunc_8315())
	{
		case 0:
			func_714(PLAYER::PLAYER_PED_ID());
			func_714(uLocal_2019[1]);
			func_714(Local_1648);
			func_714(Local_887[0 /*33*/]);
			func_714(Local_887[1 /*33*/]);
			func_714(Local_887[2 /*33*/]);
			func_714(Local_887[3 /*33*/]);
			break;
		
		case 1:
			func_714(PLAYER::PLAYER_PED_ID());
			func_714(uLocal_2019[0]);
			func_714(Local_1648);
			func_714(Local_887[0 /*33*/]);
			func_714(Local_887[1 /*33*/]);
			func_714(Local_887[2 /*33*/]);
			func_714(Local_887[3 /*33*/]);
			if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
			{
				Local_887[3 /*33*/].f_21 = ENTITY::GET_ENTITY_HEALTH(Local_887[3 /*33*/]);
			}
			break;
	}
}

void func_714(int iParam0)//Position - 0x70ED2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			ENTITY::SET_ENTITY_PROOFS(iParam0, 1, 1, 1, 1, 1, 0, 0, 0);
		}
	}
}

int func_715()//Position - 0x70EFB
{
	HUD::CLEAR_HELP(1);
	func_713();
	if (GlobalFunc_663("FS_GOD2b", 0, 0))
	{
		HUD::CLEAR_THIS_PRINT("FS_GOD2b");
	}
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_767))
	{
		HUD::REMOVE_BLIP(&uLocal_767);
	}
	STREAMING::START_PLAYER_SWITCH(PLAYER::PLAYER_PED_ID(), Local_2097.f_3, 0, 3);
	Local_2097 = 1;
	iLocal_623 = 7;
	return 1;
}


int func_717()//Position - 0x70F88
{
	HUD::CLEAR_HELP(1);
	iLocal_791 = 1;
	iLocal_789 = 1;
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_638 = 1;
		iLocal_789 = 0;
	}
	else
	{
		iLocal_638 = 0;
	}
	func_718();
	func_713();
	STREAMING::START_PLAYER_SWITCH(Local_1648, uLocal_2019[0], 2050, 3);
	Global_17017 = 1;
	iLocal_623 = 2;
	return 1;
}

void func_718()//Position - 0x70FD7
{
	var uVar0;
	
	if (GlobalFunc_111())
	{
		MemCopy(&uVar0, {GlobalFunc_560()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(&uVar0, "TM44_chop1"))
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		}
	}
}


int func_720()//Position - 0x71027
{
	HUD::CLEAR_HELP(1);
	if (GlobalFunc_663("FS_GOD2b", 0, 0))
	{
		HUD::CLEAR_THIS_PRINT("FS_GOD2b");
	}
	iLocal_789 = 1;
	iLocal_791 = 1;
	bLocal_784 = true;
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_638 = 1;
		iLocal_789 = 0;
	}
	else
	{
		iLocal_638 = 0;
	}
	func_718();
	func_713();
	if (!CAM::DOES_CAM_EXIST(uLocal_877))
	{
	}
	else
	{
		Local_853 = { -24f, 0f, 65.9f };
		func_462(&Local_1714, &iLocal_877, Local_853.x, 0f, Local_853.f_2);
		CAM::SET_CAM_ACTIVE(iLocal_877, 1);
	}
	Global_17017 = 1;
	Local_2063.f_12 = uLocal_2019[0];
	iLocal_623 = 0;
	return 1;
}

void func_721()//Position - 0x710C4
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
	{
		AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
	}
}

int func_722()//Position - 0x7110D
{
	HUD::CLEAR_HELP(1);
	iLocal_789 = 1;
	iLocal_791 = 1;
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_638 = 1;
		iLocal_789 = 0;
	}
	else
	{
		iLocal_638 = 0;
	}
	iLocal_689 = MISC::GET_GAME_TIMER();
	func_718();
	func_713();
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_767))
	{
		HUD::REMOVE_BLIP(&uLocal_767);
	}
	STREAMING::START_PLAYER_SWITCH(Local_2097.f_3, PLAYER::PLAYER_PED_ID(), 2050, 3);
	Global_17017 = 1;
	iLocal_623 = 1;
	return 1;
}

void func_723()//Position - 0x71192
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
	{
		AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
	}
}

int func_724()//Position - 0x711DB
{
	HUD::CLEAR_HELP(1);
	func_713();
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_767))
	{
		HUD::REMOVE_BLIP(&uLocal_767);
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (CAM::GET_GAMEPLAY_CAM_FOV() < 20f)
		{
			if (func_725(Local_1648))
			{
				iLocal_790 = 1;
			}
			else if (func_725(Local_887[0 /*33*/]))
			{
				iLocal_792 = 1;
			}
			else if (func_725(Local_887[1 /*33*/]))
			{
				iLocal_793 = 1;
			}
			else if (func_725(Local_887[2 /*33*/]))
			{
				iLocal_794 = 1;
			}
			else if (func_725(Local_887[3 /*33*/]))
			{
				iLocal_795 = 1;
			}
		}
		fLocal_728 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		fLocal_729 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		iLocal_789 = 1;
	}
	STREAMING::START_PLAYER_SWITCH(PLAYER::PLAYER_PED_ID(), Local_2097.f_3, 1024, 3);
	Global_17017 = 1;
	Local_2097 = 1;
	iLocal_623 = 6;
	return 1;
}

int func_725(int iParam0)//Position - 0x712BD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_726(int iParam0, var uParam1)//Position - 0x712DC
{
	if (uParam1->f_7 == iParam0->f_1)
	{
		return 1;
	}
	return 0;
}

int func_727()//Position - 0x712F4
{
	HUD::CLEAR_HELP(1);
	func_713();
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_767))
	{
		HUD::REMOVE_BLIP(&uLocal_767);
	}
	STREAMING::START_PLAYER_SWITCH(Local_1648, uLocal_2019[1], 0, 3);
	iLocal_623 = 4;
	return 1;
}

void func_728()//Position - 0x71348
{
	if (!iLocal_843 >= 21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_887[3 /*33*/]))
		{
			if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[3 /*33*/]);
					ENTITY::SET_ENTITY_COORDS(Local_887[3 /*33*/], Local_887[3 /*33*/].f_17, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_887[3 /*33*/], 196.2294f);
					WEAPON::REFILL_AMMO_INSTANTLY(Local_887[3 /*33*/]);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_887[3 /*33*/], Local_1714, 3000, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[3 /*33*/], 0, 0);
					iLocal_843 = 6;
				}
			}
		}
	}
}

void func_729()//Position - 0x713DD
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
	{
		AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
	}
}

int func_730()//Position - 0x71426
{
	HUD::CLEAR_HELP(1);
	func_713();
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	iLocal_646 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_767))
	{
		HUD::REMOVE_BLIP(&uLocal_767);
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (CAM::GET_GAMEPLAY_CAM_FOV() < 20f)
		{
			if (func_731(&Local_1648))
			{
				iLocal_790 = 1;
			}
			else if (func_731(&(uLocal_2019[1])))
			{
				iLocal_791 = 1;
			}
			else if (func_731(&(Local_887[0 /*33*/])))
			{
				iLocal_792 = 1;
			}
			else if (func_731(&(Local_887[1 /*33*/])))
			{
				iLocal_793 = 1;
			}
			else if (func_731(&(Local_887[2 /*33*/])))
			{
				iLocal_794 = 1;
			}
			else if (func_731(&(Local_887[3 /*33*/])))
			{
				iLocal_795 = 1;
			}
		}
		fLocal_728 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		fLocal_729 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		iLocal_789 = 1;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_877))
	{
		if (!CAM::IS_CAM_ACTIVE(iLocal_877))
		{
			CAM::SET_CAM_ACTIVE(iLocal_877, 1);
			func_462(&Local_1714, &iLocal_877, Local_853.x, 0f, Local_853.f_2);
		}
	}
	Global_17017 = 1;
	Local_2063.f_12 = uLocal_2019[1];
	iLocal_623 = 3;
	return 1;
	return 0;
}

int func_731(int iParam0)//Position - 0x7154A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

















void func_748(int iParam0)//Position - 0x72B8C
{
	bool bVar0;
	
	switch (iParam0->f_10)
	{
		case 0:
			if (*iParam0 == 2)
			{
				iParam0->f_10 = 1;
			}
			break;
		
		case 1:
			bVar0 = false;
			switch (iParam0->f_11)
			{
				case 0:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02", 0))
					{
						bVar0 = true;
					}
					break;
				
				case 1:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02", 0))
					{
						bVar0 = true;
					}
					break;
				
				case 2:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02", 0))
					{
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				if (iParam0->f_12 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
					{
						switch (iParam0->f_11)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_A", 0, 1);
								break;
							
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_B", 0, 1);
								break;
							
							case 2:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_C", 0, 1);
								break;
							}
						}
				}
				iParam0->f_11++;
				if (iParam0->f_11 > 2)
				{
					iParam0->f_11 = 0;
				}
				iParam0->f_10 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_749(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x72CC1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			if (!iLocal_785)
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) >= fParam2)
				{
					iLocal_785 = 1;
				}
			}
			else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) <= fParam1)
			{
				iLocal_785 = 0;
			}
			if (iLocal_785)
			{
				fParam3 = (fParam3 * -1f);
			}
			else
			{
				fParam3 = (fParam3 * 1f);
			}
			VEHICLE::SET_PLAYBACK_SPEED(iParam0, fParam3);
		}
	}
}

void func_750(int iParam0)//Position - 0x72D23
{
	if (*iParam0 == 2)
	{
		CAM::SET_USE_HI_DOF();
	}
}

int func_751()//Position - 0x72D36
{
	int iVar0;
	
	switch (iLocal_658)
	{
		case 0:
			Local_1804.f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 0f, 1.5f, 0.7f) };
			iLocal_2337 = OBJECT::CREATE_OBJECT(Local_1804.f_2, Local_1804.f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_2337, 1, 1, 1, 1, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2337, 1);
			uLocal_838 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_rpg_trail", iLocal_2337, 0f, -0.2f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			Local_2370 = { -1532f, 4469.2f, 23f };
			Local_2364 = { GlobalFunc_107(Local_2370 - Local_1804.f_3) };
			Local_1804.f_12 = MISC::ATAN2(Local_2364.f_2, SYSTEM::VMAG(Local_2364.x, Local_2364.f_1, 0f));
			Local_1804.f_12.f_2 = func_753((MISC::ATAN2(Local_2364.f_1, Local_2364.x) - 90f));
			switch (GlobalFunc_8315())
			{
				case 0:
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG", ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), "EXILE_2_SOUNDS", 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_726, "Fire_Missile_Loop", iLocal_2337, "EXILE_2_SOUNDS", 0, 0);
					break;
				
				case 1:
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG_On_Foot", ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), "EXILE_2_SOUNDS", 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_726, "Fire_Missile_Loop", iLocal_2337, "EXILE_2_SOUNDS", 0, 0);
					break;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_727, "Missile_Warning_Sound", Local_1714, "EXILE_2_SOUNDS", 0, 0);
			Local_2373 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1714, -5f, 0f, -0.5f) };
			iLocal_652 = MISC::GET_GAME_TIMER();
			iLocal_658++;
			break;
		
		case 1:
			Local_1804.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1) };
			Local_2373 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1714, -5f, 0f, -0.5f) };
			Local_2367 = { GlobalFunc_107(Local_2373 - Local_1804.f_3) };
			Local_2364.x = (Local_2364.x + ((Local_2367.x - Local_2364.x) * 0.15f));
			Local_2364.f_1 = (Local_2364.f_1 + ((Local_2367.f_1 - Local_2364.f_1) * 0.15f));
			Local_2364.f_2 = (Local_2364.f_2 + ((Local_2367.f_2 - Local_2364.f_2) * 0.15f));
			Local_1804.f_12 = MISC::ATAN2(Local_2364.f_2, SYSTEM::VMAG(Local_2364.x, Local_2364.f_1, 0f));
			Local_1804.f_12.f_2 = func_753((MISC::ATAN2(Local_2364.f_1, Local_2364.x) - 90f));
			if (!func_752(Local_1804.f_3, Local_2373, Local_2364 * FtoV(MISC::GET_FRAME_TIME()) * Vector(50f, 50f, 50f)))
			{
			}
			if (!func_752(Local_1804.f_3, Local_2373, Local_2364 * FtoV(MISC::GET_FRAME_TIME()) * Vector(50f, 50f, 50f)) && !GlobalFunc_588(&iLocal_652, 2500))
			{
				Local_1804.f_3 = { Local_1804.f_3 + Local_2364 * FtoV(MISC::GET_FRAME_TIME()) * Vector(50f, 50f, 50f) };
				Local_2376 = { Local_2364 * Vector(50f, 50f, 50f) };
				ENTITY::SET_ENTITY_VELOCITY(iLocal_2337, Local_2376);
				ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
			}
			else
			{
				iLocal_626 = 1;
				iLocal_658 = 3;
				return 1;
			}
			break;
		
		case 2:
			if (!Local_2063.f_16)
			{
				iLocal_626 = 1;
				iLocal_658 = 3;
				return 1;
			}
			break;
		
		case 3:
			iVar0 = 0;
			if (WEAPON::GET_AMMO_IN_CLIP(Local_887[3 /*33*/], joaat("weapon_rpg"), &iVar0))
			{
				if (iVar0 >= 1)
				{
					if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(Local_887[3 /*33*/]))
					{
						iLocal_2337 = WEAPON::SET_PED_SHOOT_ORDNANCE_WEAPON(Local_887[3 /*33*/], -1082130432);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_2337, 1, 1, 1, 1, 1, 0, 0, 0);
							Local_1804.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1) };
							Local_1804.f_12 = { ENTITY::GET_ENTITY_ROTATION(iLocal_2337, 2) };
							MISC::CLEAR_AREA(Local_1804.f_3, 0.5f, 1, 0, 0, 0);
							iLocal_2337 = OBJECT::CREATE_OBJECT(Local_1804.f_2, Local_1804.f_3, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2337, 1);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2337, 0);
							uLocal_838 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_rpg_trail", iLocal_2337, 0f, -0.2f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
							Local_2364 = { GlobalFunc_107(Vector(19f, 4469.92f, -1537.21f) - ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1)) };
							Local_1804.f_12 = MISC::ATAN2(Local_2364.f_2, SYSTEM::VMAG(Local_2364.x, Local_2364.f_1, 0f));
							Local_1804.f_12.f_2 = func_753((MISC::ATAN2(Local_2364.f_1, Local_2364.x) - 90f));
							switch (GlobalFunc_8315())
							{
								case 0:
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG", ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), "EXILE_2_SOUNDS", 0, 0, 0);
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_726, "Fire_Missile_Loop", iLocal_2337, "EXILE_2_SOUNDS", 0, 0);
									break;
								
								case 1:
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG_On_Foot", ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), "EXILE_2_SOUNDS", 0, 0, 0);
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_726, "Fire_RPG_On_Foot", iLocal_2337, "EXILE_2_SOUNDS", 0, 0);
									break;
							}
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_727, "Missile_Warning_Sound", Local_1714, "EXILE_2_SOUNDS", 0, 0);
							iLocal_658++;
						}
					}
				}
			}
			break;
		
		case 4:
			Local_2373 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1714, -18f, 0.5f, 0.5f) };
			Local_2367 = { GlobalFunc_107(Local_2373 - Local_1804.f_3) };
			Local_2364.x = (Local_2364.x + ((Local_2367.x - Local_2364.x) * 0.15f));
			Local_2364.f_1 = (Local_2364.f_1 + ((Local_2367.f_1 - Local_2364.f_1) * 0.15f));
			Local_2364.f_2 = (Local_2364.f_2 + ((Local_2367.f_2 - Local_2364.f_2) * 0.15f));
			Local_1804.f_12 = MISC::ATAN2(Local_2364.f_2, SYSTEM::VMAG(Local_2364.x, Local_2364.f_1, 0f));
			Local_1804.f_12.f_2 = func_753((MISC::ATAN2(Local_2364.f_1, Local_2364.x) - 90f));
			Local_1804.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1) };
			if (!func_752(Local_1804.f_3, Local_2373, Local_2364 * FtoV(MISC::GET_FRAME_TIME()) * Vector(35f, 35f, 35f)))
			{
				Local_1804.f_3 = { Local_1804.f_3 + Local_2364 * FtoV(MISC::GET_FRAME_TIME()) * Vector(35f, 35f, 35f) };
				Local_2376 = { Local_2364 * Vector(35f, 35f, 35f) };
				ENTITY::SET_ENTITY_VELOCITY(iLocal_2337, Local_2376);
				ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
			}
			else
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), 4, 1f, 1, 0, 1065353216);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_838))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_838, 0);
				}
				ENTITY::DELETE_ENTITY(&iLocal_2337);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_726))
				{
					AUDIO::STOP_SOUND(iLocal_726);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_727))
				{
					AUDIO::STOP_SOUND(iLocal_727);
				}
				iLocal_658 = 3;
				return 1;
			}
			break;
	}
	return 0;
}

int func_752(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x733FA
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param3 - Param0 };
	if (SYSTEM::VMAG(Var0) < 0.2f)
	{
		return 1;
	}
	Var3 = { Param3 - Param0 + Param6 };
	if (SYSTEM::VMAG(Var0) < 20f)
	{
		if (SYSTEM::VMAG(Var3) > SYSTEM::VMAG(Var0))
		{
			return 1;
		}
	}
	return 0;
}

float func_753(float fParam0)//Position - 0x73460
{
	float fVar0;
	
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fParam0 = (fParam0 + IntToFloat(SYSTEM::FLOOR((fVar0 / -360f)) + 1 * 360));
	}
	else if (fParam0 >= 360f)
	{
		fParam0 = (fVar0 % 360f);
	}
	return fParam0;
}

int func_754()//Position - 0x734A4
{
	HUD::CLEAR_THIS_PRINT("FS_help_1");
	func_713();
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
	}
	TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
	TASK::TASK_HELI_MISSION(0, Local_1714, 0, 0, -1562.291f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1082130432, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[2], uLocal_883);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
	Local_2063.f_12 = uLocal_2019[2];
	iLocal_623 = 8;
	return 1;
}

int func_755()//Position - 0x73523
{
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
	}
	TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
	TASK::TASK_HELI_MISSION(0, Local_1714, 0, 0, -1562.291f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1082130432, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[2], uLocal_883);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
	Local_2063.f_12 = uLocal_2019[2];
	Global_17017 = 1;
	iLocal_623 = 10;
	return 1;
}

int func_756(var uParam0)//Position - 0x735B7
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(uParam0[iVar0 /*3*/]), 1);
		if (iVar0 == 0)
		{
			fVar2 = fVar3;
			iVar1 = iVar0;
		}
		else if (fVar3 < fVar2)
		{
			fVar2 = fVar3;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_757()//Position - 0x73610
{
	HUD::CLEAR_THIS_PRINT("FS_help_1");
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	func_713();
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
	}
	TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
	TASK::TASK_HELI_MISSION(0, Local_1714, 0, 0, -1562.291f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1082130432, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[2], uLocal_883);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
	STREAMING::START_PLAYER_SWITCH(Local_1648, uLocal_2019[2], 0, 3);
	iLocal_623 = 9;
	return 1;
}

void func_758(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7369C
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	if (bParam4)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(iParam0->f_13, 2f);
	}
	if (bParam3)
	{
		iVar0 = 0;
		if (!bParam5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 70f)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 0;
				iVar0 = 1;
			}
		}
		else
		{
			iVar1 = iParam6;
		}
		STREAMING::START_PLAYER_SWITCH(iParam0->f_3, PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		if (iVar1 == 3)
		{
			func_17(iParam0, uParam1);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		}
	}
	else
	{
		func_17(iParam0, uParam1);
	}
	*iParam0 = 3;
}

int func_759()//Position - 0x73742
{
	HUD::CLEAR_THIS_PRINT("FS_help_1");
	bLocal_784 = false;
	GRAPHICS::SET_SEETHROUGH(0);
	func_713();
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
	}
	TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
	TASK::TASK_HELI_MISSION(0, Local_1714, 0, 0, -1562.291f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1082130432, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[2], uLocal_883);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
	STREAMING::START_PLAYER_SWITCH(Local_1648, uLocal_2019[2], 0, 3);
	iLocal_623 = 11;
	return 0;
}


void func_761()//Position - 0x73929
{
	switch (iLocal_692)
	{
		case 0:
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_ENDM", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 6f, 4);
						iLocal_692++;
					}
					break;
				
				case 1:
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_ENDF", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 6f, 4);
						iLocal_692++;
					}
					break;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_652 = MISC::GET_GAME_TIMER();
				iLocal_2333 = 9;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
	{
		func_751();
	}
	func_467();
	func_750(&Local_2097);
	func_489(0);
	func_762();
	func_749(Local_1714, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 12000f), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 500f), 1065353216);
}

void func_762()//Position - 0x73A17
{
	if ((GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0 && !Local_2097 == 2) && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (func_691() && Local_2097 != 1)))
	{
		if ((((PAD::IS_CONTROL_PRESSED(0, 25) || iLocal_632) || iLocal_789) || iLocal_638) && (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE() || (func_691() && Local_2097 != 1)))
		{
			if (!iLocal_629)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-41f, 1065353216);
				iLocal_629 = 1;
			}
			if (!bLocal_787)
			{
				if (!GlobalFunc_74("FS_SNIPEHELP"))
				{
					GlobalFunc_Display_Help_Text("FS_SNIPEHELP");
				}
			}
			if (GRAPHICS::GET_USINGSEETHROUGH())
			{
				if (GlobalFunc_74("FS_SNIPEHELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				bLocal_787 = true;
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
				{
					AUDIO::START_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 54))
			{
				if (bLocal_784)
				{
					bLocal_784 = false;
				}
				else
				{
					bLocal_784 = true;
				}
			}
			if (bLocal_784)
			{
				GlobalFunc_5077();
				GRAPHICS::SET_SEETHROUGH(1);
			}
			else
			{
				GRAPHICS::SET_SEETHROUGH(0);
			}
		}
		else
		{
			bLocal_784 = false;
			GRAPHICS::SET_SEETHROUGH(0);
			if (GlobalFunc_74("FS_SNIPEHELP"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!GRAPHICS::GET_USINGSEETHROUGH())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
				{
					AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
				}
			}
		}
	}
}




int func_766()//Position - 0x73BC1
{
	int iVar0;
	
	iVar0 = 0;
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (iLocal_2334 == 0)
	{
		GlobalFunc_574(180, 0);
		STREAMING::STREAMVOL_DELETE(uLocal_780);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
		STREAMING::SET_FOCUS_POS_AND_VEL(-1664.92f, 4438.81f, 80f, 0f, 0f, 0f);
		iLocal_836 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_887 - 1))
		{
			Local_887[iVar0 /*33*/].f_27 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			func_463(&(Local_887[iVar0 /*33*/]));
			HUD::REMOVE_BLIP(&(Local_887[iVar0 /*33*/].f_2));
			PED::SET_PED_DIES_IN_WATER(Local_887[iVar0 /*33*/], 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_887[iVar0 /*33*/], 1);
			iVar0++;
		}
		PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 1);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
		STREAMING::REQUEST_ANIM_DICT(sLocal_7344);
		bLocal_784 = false;
		iLocal_840 = 0;
		iLocal_841 = 0;
		iLocal_842 = 0;
		iLocal_843 = 0;
		iLocal_833 = 0;
		iLocal_844 = 0;
		GlobalFunc_7632(1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1714, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_846);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1714, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 4, sLocal_846, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		CAM::_0x2F7F2B26DD3F18EE(-80f, 80f);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			iLocal_638 = 1;
		}
		else
		{
			iLocal_632 = 1;
		}
		func_450(uLocal_2019[1], joaat("weapon_carbinerifle"), 100, 0, 0, 1);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_629(0, 1, 0, -12f, -41f, 3000, 0);
		}
		else
		{
			func_444(0, -12f, -41f, 0);
		}
		GlobalFunc_2518(&uLocal_2019, 0, 0);
		GlobalFunc_2518(&uLocal_2019, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_1648))
		{
			iLocal_684 = 200;
			GlobalFunc_729(&uLocal_2019, 2, 0);
			func_31(&uLocal_2019, 2, 1);
			Local_2097.f_1 = 2;
			Local_2097.f_3 = Local_1648;
			func_29(&Local_2097);
			Local_2097 = 0;
			func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_1648, 400);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1648);
			ENTITY::SET_ENTITY_COORDS(Local_1648, -1679.821f, 4455.988f, 1.2653f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1648, 114.22f);
			TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
			PED::SET_PED_CAN_RAGDOLL(Local_1648, 0);
		}
		TASK::CLEAR_PED_TASKS(uLocal_2019[1]);
		PED::SET_PED_USING_ACTION_MODE(uLocal_2019[1], 1, -1, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_2019[1], 1);
		ENTITY::SET_ENTITY_LOD_DIST(uLocal_2019[1], 300);
		AUDIO::START_AUDIO_SCENE("EXILE_2_SNIPE_STAGE");
		AUDIO::TRIGGER_MUSIC_EVENT("EXL2_SNIPE_START");
		iLocal_788 = 0;
		func_489(0);
		GlobalFunc_Checkpoint2(3, "start of sniper section", 0, 0, 0, 1);
		iLocal_2334 = 1;
	}
	if (iLocal_2334 == 1)
	{
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 58, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 107, 1);
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
				}
				WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 6);
				break;
			
			case 1:
				break;
		}
		if (func_838())
		{
			iLocal_2333 = 8;
			return 1;
		}
		if (!iLocal_626)
		{
			func_830();
			func_684();
			func_489(0);
			func_762();
			func_826();
			func_813();
			func_812();
			func_811();
			if (iLocal_651 >= 4)
			{
				func_467();
				func_750(&Local_2097);
				func_679();
			}
			if (GlobalFunc_8315() == 0)
			{
				CAM::_0x2F7F2B26DD3F18EE(-80f, 80f);
				CAM::SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(0.3f);
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 200);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			}
			if (!iLocal_627)
			{
				func_749(Local_1714, 5000f, 31000f, 1065353216);
			}
			else
			{
				func_749(Local_1714, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 12000f), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 500f), 0.9f);
			}
		}
		if (iLocal_626)
		{
			func_772();
		}
		if (GlobalFunc_8315() == 0)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			PLAYER::_0x5501B7A5CDB79D37(PLAYER::PLAYER_ID());
		}
	}
	if (iLocal_2334 == 2)
	{
		GlobalFunc_5693(&uLocal_2279);
		GlobalFunc_4935();
		iLocal_2334 = 0;
		iLocal_2333 = 13;
	}
	if (iLocal_2334 == 3)
	{
		switch (iLocal_683)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_887[3 /*33*/]))
				{
					GlobalFunc_4956();
					iVar0 = 0;
					while (iVar0 <= 2)
					{
						if (!PED::IS_PED_INJURED(Local_887[iVar0 /*33*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_887[iVar0 /*33*/], 2);
						}
						iVar0++;
					}
					if (!func_767())
					{
						Local_887[3 /*33*/].f_11 = { -1541.272f, 4489.342f, 18.4372f };
						Local_887[3 /*33*/].f_20 = 187.5681f;
						Local_2370 = { -1552.5f, 4451f, 38.3f };
					}
					func_463(&(Local_887[3 /*33*/]));
					ENTITY::SET_ENTITY_PROOFS(Local_887[3 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_887[3 /*33*/], 0);
					HUD::REMOVE_BLIP(&(Local_887[3 /*33*/].f_2));
					if (GlobalFunc_8315() == 0)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_887[3 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
					}
					PED::SET_PED_HEATSCALE_OVERRIDE(Local_887[3 /*33*/], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_887[3 /*33*/], 1);
					GlobalFunc_173(&uLocal_2114, 6, Local_887[3 /*33*/], "oneil", 0, 1);
					iLocal_651 = 2;
					iLocal_843 = 2;
					func_458("TM44_TWT", 1);
					func_458("TM44_WATER", 1);
					func_458("TM44_DWATER", 1);
					func_458("TM44_GWOOD", 1);
					func_458("TM44_DEADR", 1);
					iLocal_683++;
				}
				break;
			
			case 1:
				if (iLocal_651 > 2)
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (iLocal_657 == 0)
							{
								GlobalFunc_9134(&uLocal_2019, 1);
								func_730();
								iLocal_657 = 1;
								iLocal_683++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_887[3 /*33*/], 2);
								iLocal_683 = 3;
							}
							break;
						}
				}
				break;
			
			case 2:
				if (!CAM::DOES_CAM_EXIST(Local_2063.f_9))
				{
					if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_887[3 /*33*/], 2);
						iLocal_683 = 3;
					}
				}
				break;
			
			case 3:
				break;
			}
	}
	return 0;
}

int func_767()//Position - 0x7429F
{
	float fVar0;
	float fVar1;
	
	if (CAM::GET_GAMEPLAY_CAM_FOV() < 15f)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_887[3 /*33*/].f_11, &fVar0, &fVar1);
		if (MISC::ABSF((fVar0 - 0.5f)) < 0.3f)
		{
			if (MISC::ABSF((fVar1 - 0.5f)) < 0.3f)
			{
				return 1;
			}
		}
	}
	return 0;
}





int func_772()//Position - 0x7439E
{
	int iVar0;
	
	if (GlobalFunc_4926(1000))
	{
		iLocal_659 = 22;
	}
	iVar0 = 0;
	switch (iLocal_659)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(Local_2063.f_9))
			{
				if (func_635(0, 0, 1))
				{
					if (!GlobalFunc_8315() == 0)
					{
						GlobalFunc_9134(&uLocal_2019, 0);
						GlobalFunc_10991(&uLocal_2019, 1, 0, 0);
					}
					func_758(&Local_2097, &uLocal_2019, 1, 0, 0, 0, 3);
					iLocal_788 = 0;
					CAM::DESTROY_CAM(iLocal_877, 0);
					iLocal_836 = 0;
					GRAPHICS::SET_SEETHROUGH(0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
					}
					Local_1681.f_27 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_1681))
					{
						PED::DELETE_PED(&Local_1681);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1681.f_1);
					if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
					{
						Local_887[3 /*33*/].f_11 = { -1541.272f, 4489.342f, 18.4372f };
						Local_887[3 /*33*/].f_20 = 187.5681f;
						Local_2370 = { -1552.5f, 4451f, 38.3f };
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[3 /*33*/]);
						ENTITY::SET_ENTITY_COORDS(Local_887[3 /*33*/], Local_887[3 /*33*/].f_11, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_887[3 /*33*/], Local_887[3 /*33*/].f_20);
						ENTITY::SET_ENTITY_PROOFS(Local_887[3 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
						iLocal_843 = 7;
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 7, sLocal_846, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1714, 4500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_838))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_838, 0);
					}
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_726))
					{
						AUDIO::STOP_SOUND(iLocal_726);
					}
					ENTITY::DELETE_ENTITY(&iLocal_2337);
					MISC::CLEAR_AREA(-1532.08f, 4416.26f, 65.35f, 200f, 1, 0, 0, 0);
					Local_1804.f_3 = { -1532.08f, 4416.26f, 65.35f };
					Local_735 = { -1474.7f, 4385.4f, 93.9f };
					Local_738 = { GlobalFunc_107(Local_735 - Local_1804.f_3) };
					Local_1804.f_12 = MISC::ATAN2(Local_738.f_2, SYSTEM::VMAG(Local_738.x, Local_738.f_1, 0f));
					Local_1804.f_12.f_2 = func_753((MISC::ATAN2(Local_738.f_1, Local_738.x) - 90f));
					iLocal_2337 = OBJECT::CREATE_OBJECT(Local_1804.f_2, Local_1804.f_3, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
					uLocal_838 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_rpg_trail", iLocal_2337, 0f, -0.2f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_726, "Fire_Missile_Loop", iLocal_2337, "EXILE_2_SOUNDS", 0, 0);
					iVar0 = 0;
					while (iVar0 <= (Local_1020 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1020[iVar0 /*33*/]))
						{
							PED::DELETE_PED(&(Local_1020[iVar0 /*33*/]));
							Local_1020[iVar0 /*33*/].f_27 = 0;
						}
						iVar0++;
					}
					iVar0 = 10;
					while (iVar0 <= (Local_1020 - 1))
					{
						if (iVar0 != 15)
						{
							func_449(&(Local_1020[iVar0 /*33*/]));
							iLocal_660[iVar0] = 0;
						}
						iVar0++;
					}
					uLocal_874 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1528.078f, 4415.43f, 67.79733f, 16.76904f, 0.011513f, -122.8883f, 27.57083f, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_874, -1514.495f, 4405.609f, 75.44726f, 16.15536f, 0.011514f, -115.5207f, 27.57083f, 2000, 0, 0, 2);
					CAM::SHAKE_CAM(uLocal_874, "ROAD_VIBRATION_SHAKE", 2f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
					RECORDING::_0x48621C9FCA3EBD28(3);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
					}
					AUDIO::START_AUDIO_SCENE("EXILE_2_RPG_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_RPG_HELI");
					iLocal_659++;
				}
			}
			break;
		
		case 1:
			Local_1804.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1) };
			Local_2376 = { Local_738 * Vector(35f, 35f, 35f) };
			Local_1804.f_12 = MISC::ATAN2(Local_738.f_2, SYSTEM::VMAG(Local_738.x, Local_738.f_1, 0f));
			Local_1804.f_12.f_2 = func_753((MISC::ATAN2(Local_738.f_1, Local_738.x) - 90f));
			ENTITY::SET_ENTITY_VELOCITY(iLocal_2337, Local_2376);
			ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1714) > 3800f)
			{
				if (!func_470("TM44_ROCKET"))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_ROCKET", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
						func_458("TM44_ROCKET", 1);
					}
				}
			}
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1714) > 5800f)
			{
				CAM::DESTROY_CAM(uLocal_874, 0);
				iLocal_874 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1458.352f, 4370.578f, 95.68184f, -9.241117f, 1.31385f, 43.57708f, 23.88931f, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_874, -1447.829f, 4363.347f, 104.0882f, -11.96638f, 1.313851f, 46.56541f, 23.88931f, 2000, 0, 0, 2);
				uLocal_780 = STREAMING::STREAMVOL_CREATE_SPHERE(-1531.9f, 4288f, 103.2f, 100f, 12, 127);
				iLocal_659++;
			}
			break;
		
		case 2:
			Local_1804.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1) };
			if (!func_752(Local_1804.f_3, Local_735, Local_738 * FtoV(MISC::GET_FRAME_TIME()) * Vector(35f, 35f, 35f)))
			{
				Local_2376 = { Local_738 * Vector(35f, 35f, 35f) };
				ENTITY::SET_ENTITY_VELOCITY(iLocal_2337, Local_2376);
				ENTITY::SET_ENTITY_ROTATION(iLocal_2337, Local_1804.f_12, 2, 1);
			}
			else
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), 4, 1f, 1, 0, 1065353216);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_838))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_838, 0);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_726))
				{
					AUDIO::STOP_SOUND(iLocal_726);
				}
				ENTITY::DELETE_ENTITY(&iLocal_2337);
				CAM::SHAKE_CAM(iLocal_874, "sky_diving_shake", 1f);
				iLocal_659++;
			}
			break;
		
		case 3:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1714) > 7300f)
			{
				iLocal_652 = MISC::GET_GAME_TIMER();
				iLocal_659++;
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&iLocal_652, 750))
			{
				iLocal_835 = 5000;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 1, "lkexile2", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1714, 10000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
				iLocal_627 = 1;
				iLocal_785 = 0;
				iLocal_649 = 8;
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				iLocal_632 = 0;
				iLocal_789 = 0;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
				PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 1048576000);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
				PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
				RECORDING::_0x81CBAE94390F9F89();
				func_629(0, 1, 0, 0f, 0f, 3000, 0);
				STREAMING::STREAMVOL_DELETE(uLocal_780);
				func_29(&Local_2097);
				func_489(1);
				iLocal_626 = 0;
				iLocal_788 = 0;
				GlobalFunc_9134(&uLocal_2019, 1);
				iLocal_2379 = 2;
				func_773(&iLocal_3621);
				iLocal_659 = 23;
			}
			break;
		
		case 5:
			break;
		
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_838))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_838, 0);
				}
				ENTITY::DELETE_ENTITY(&iLocal_2337);
				MISC::CLEAR_AREA(-1532.08f, 4416.26f, 65.35f, 200f, 1, 0, 0, 0);
				iLocal_835 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 1, "lkexile2", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1714, 10000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
				iLocal_627 = 1;
				iLocal_785 = 0;
				iLocal_649 = 8;
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				iLocal_632 = 0;
				iLocal_789 = 0;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
				PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 1048576000);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
				PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
				func_444(0, 0f, 0f, 0);
				STREAMING::STREAMVOL_DELETE(uLocal_780);
				func_489(0);
				iLocal_626 = 0;
				iLocal_788 = 0;
				GlobalFunc_9134(&uLocal_2019, 1);
				iLocal_2379 = 2;
				func_773(&iLocal_3621);
				iLocal_659 = 23;
			}
			break;
		
		case 23:
			break;
	}
	return 0;
}

int func_773(int iParam0)//Position - 0x74C1E
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	switch (iLocal_2379)
	{
		case 0:
			break;
		
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			func_808(iParam0, PLAYER::PLAYER_PED_ID(), uLocal_2019[1]);
			func_792(iParam0);
			CAM::SET_CAM_ACTIVE(iParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[1]))
			{
				iVar2 = uLocal_2019[1];
			}
			else
			{
				iVar2 = PLAYER::PLAYER_PED_ID();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iVar2, joaat("weapon_unarmed"), 0, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(iVar2, joaat("weapon_unarmed"), 1);
					PED::SET_PED_USING_ACTION_MODE(iVar2, 0, -1, 0);
				}
			}
			Local_7357 = { Local_7357 };
			Local_7360 = { Local_7360 };
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(Local_1714))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_1714))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 0, 0);
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1714, "seat_dside_r"), Local_7357, Local_7360, 0, 0, 0, 0, 2, 1);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_7363, "ex02_heli_sniper_idle_michael", 1000f, -1000f, -1, 0, 0, 0, 4, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			iLocal_7356 = 0;
			iLocal_7375 = 0;
			iLocal_7376 = 0;
			iLocal_7377 = 0;
			bLocal_7378 = true;
			bLocal_7379 = true;
			bLocal_7380 = true;
			iLocal_7353 = 0;
			iLocal_7354 = 0;
			iLocal_7383 = 0;
			iLocal_7384 = 0;
			iLocal_2379 = 3;
		
		case 3:
			if (CAM::IS_CAM_ACTIVE(iParam0->f_1))
			{
				iVar0 = func_778(iParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1);
				if (iVar0 >= 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7346);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7347, 1065353216);
				}
				if (!iLocal_7375)
				{
					if (iVar0 >= iParam0->f_1218)
					{
						Local_2063.f_18 = 1;
						Local_2063.f_19 = 0;
						iLocal_7375 = 1;
					}
				}
				if (!iLocal_7376)
				{
					if (fVar1 >= fLocal_7371)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[1]))
						{
							iVar2 = uLocal_2019[1];
						}
						else
						{
							iVar2 = PLAYER::PLAYER_PED_ID();
						}
						if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::DOES_ENTITY_EXIST(Local_1648))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !ENTITY::IS_ENTITY_DEAD(Local_1648))
							{
								TASK::CLEAR_PED_TASKS(iVar2);
								TASK::CLEAR_PED_TASKS(Local_1648);
								iLocal_7370 = PED::CREATE_SYNCHRONIZED_SCENE(Local_7364, Local_7367, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iVar2, iLocal_7370, sLocal_7363, "ex02_heli_switch_chop_run_franklin", 1000f, fLocal_7373, 0, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1648, iLocal_7370, sLocal_7363, "ex02_heli_switch_chop_run_chop", 1000f, fLocal_7374, 2, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_7370, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
							}
						}
						iLocal_7376 = 1;
					}
				}
				if (!iLocal_7377)
				{
					if (fVar1 >= fLocal_7372)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_7370))
						{
							iLocal_7377 = 1;
						}
					}
				}
				if (!iLocal_640)
				{
					if (fVar1 >= fLocal_7381)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_722 = MISC::GET_GAME_TIMER();
						iLocal_640 = 1;
					}
				}
				else if (!iLocal_642)
				{
					if (GlobalFunc_588(&iLocal_722, 200))
					{
						iLocal_7352 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_7352, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_642 = 1;
					}
				}
				fLocal_7350 = fLocal_7350;
				iLocal_7354 = iLocal_7354;
				iLocal_7353 = iLocal_7353;
				fLocal_7350 = fLocal_7350;
				fLocal_7351 = fLocal_7351;
				if (!iLocal_7383)
				{
					if (fVar1 >= fLocal_7381)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, 0);
						iLocal_7383 = 1;
					}
				}
				fLocal_7382 = fLocal_7382;
				if (!iLocal_7384)
				{
					if (fVar1 >= 0.5f)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinMid", 0, 0);
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_7352))
						{
							AUDIO::STOP_SOUND(iLocal_7352);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_7384 = 1;
					}
				}
				if (!iLocal_641)
				{
					if (fVar1 >= 0.85f)
					{
						iLocal_641 = 1;
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					if (fVar1 >= 0.9f)
					{
						GlobalFunc_669(&uLocal_2338, PLAYER::PLAYER_PED_ID(), 1, 1f, 1000, 1000, 700, 700, 1045220557);
						GlobalFunc_668(&uLocal_2338, 25f, 0f, 0f);
						func_774(&uLocal_2338, 0, 1, 1, 0, 0, 0);
						iLocal_2379 = 9;
					}
				}
				else if (fVar1 >= 1f)
				{
					iLocal_2379 = 9;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 9:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (func_774(&uLocal_2338, 0, 1, 1, 0, 0, 0))
				{
					AUDIO::STOP_SOUND(iLocal_7352);
					if (CAM::DOES_CAM_EXIST(iParam0->f_1))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_1, 0);
						CAM::DESTROY_CAM(iParam0->f_1, 0);
					}
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7346);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7347, 1065353216);
					iLocal_652 = MISC::GET_GAME_TIMER();
					iLocal_2379 = 10;
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_7352);
				MISC::SET_TIME_SCALE(1f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				if (CAM::DOES_CAM_EXIST(iParam0->f_1))
				{
					CAM::SET_CAM_ACTIVE(iParam0->f_1, 0);
					CAM::DESTROY_CAM(iParam0->f_1, 0);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7346);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7347, 1065353216);
				iLocal_652 = MISC::GET_GAME_TIMER();
				iLocal_2379 = 10;
			}
			break;
		
		case 10:
			if (bLocal_7379)
			{
				if (GlobalFunc_588(&iLocal_652, 700) || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					iLocal_684 = 200;
					func_467();
					bLocal_7379 = false;
				}
			}
			if (bLocal_7380)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1648))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1648))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1648))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1648, 3f, 0);
							bLocal_7380 = false;
						}
					}
				}
			}
			if (bLocal_7378)
			{
				if (SYSTEM::TIMERA() > iLocal_7385)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					bLocal_7378 = false;
				}
			}
			if (bLocal_7378)
			{
			}
			if (bLocal_7379)
			{
			}
			if (bLocal_7380)
			{
			}
			if ((bLocal_7378 == 0 && bLocal_7379 == 0) && bLocal_7380 == 0)
			{
				iLocal_2379 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_774(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7521E
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	
	switch (*uParam0)
	{
		case 0:
			GlobalFunc_5077();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				GlobalFunc_667(uParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var15 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.x)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.x)), SYSTEM::SIN(Var9.x) };
				Var18 = { (-SYSTEM::SIN(Var12.f_2) * SYSTEM::COS(Var12.x)), (SYSTEM::COS(Var12.f_2) * SYSTEM::COS(Var12.x)), SYSTEM::SIN(Var12.x) };
				fVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			GlobalFunc_5077();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					GlobalFunc_667(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}




int func_778(var uParam0)//Position - 0x75668
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_64 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_64 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_64 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_64 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_64);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		GlobalFunc_674(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							GlobalFunc_5158(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						
						case 3:
							GlobalFunc_5158(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), 0);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(GlobalFunc_673(), ""))
				{
					GlobalFunc_5158(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				GlobalFunc_672(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			GlobalFunc_672(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, 1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		GlobalFunc_671(0, 0, 1, 1);
	}
	else
	{
		GlobalFunc_671(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	GlobalFunc_670(uParam0);
	return iVar0;
}














void func_792(var uParam0)//Position - 0x7606A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_5163(uParam0))
	{
	}
	iVar0 = 0;
	uParam0->f_1232 = 0;
	GlobalFunc_685(uParam0);
	iVar1 = 0;
	while (iVar1 < 20)
	{
		uParam0->f_10[iVar1 /*57*/].f_44 = 0;
		iVar1++;
	}
	uParam0->f_1231 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	uParam0->f_1 = CAM::CREATE_CAMERA(1665938388, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1217)
		{
			func_796(uParam0, iVar1);
			if (uParam0->f_10[iVar1 /*57*/].f_4 || uParam0->f_10[iVar1 /*57*/].f_2 == 2)
			{
				if (GlobalFunc_676(uParam0, iVar1))
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
				}
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
			}
			if (GlobalFunc_676(uParam0, iVar1))
			{
				GlobalFunc_6816(uParam0, iVar1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_28 > 0 && uParam0->f_10[iVar1 /*57*/].f_29 > 0f)
			{
				switch (uParam0->f_10[iVar1 /*57*/].f_28)
				{
					case 1:
						iVar0 = 4;
						break;
					
					case 2:
						iVar0 = 8;
						break;
					
					case 3:
						iVar0 = 16;
						break;
				}
				CAM::SET_CAM_SPLINE_NODE_EASE(uParam0->f_1, iVar1, iVar0, uParam0->f_10[iVar1 /*57*/].f_29);
			}
			iVar2 = 0;
			if (uParam0->f_10[iVar1 /*57*/].f_30)
			{
				iVar2++;
			}
			if (uParam0->f_10[iVar1 /*57*/].f_31)
			{
				iVar2 += 8;
			}
			CAM::SET_CAM_SPLINE_NODE_VELOCITY_SCALE(uParam0->f_1, iVar1, uParam0->f_10[iVar1 /*57*/].f_32);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iVar1, iVar2);
			iVar1++;
		}
		if (uParam0->f_3)
		{
			if (uParam0->f_1219 >= 0)
			{
				CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_1, uParam0->f_1219, 2);
			}
		}
		if (uParam0->f_2)
		{
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_1, 0);
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (uParam0->f_1151[iVar1 /*2*/].f_1 > -1f)
			{
				CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_1, iVar1, uParam0->f_1151[iVar1 /*2*/], uParam0->f_1151[iVar1 /*2*/].f_1);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			CAM::OVERRIDE_CAM_SPLINE_MOTION_BLUR(uParam0->f_1, iVar1, uParam0->f_1184[iVar1 /*2*/], uParam0->f_1184[iVar1 /*2*/].f_1);
			iVar1++;
		}
		CAM::_0x271017B9BA825366(uParam0->f_1, 0);
	}
}




void func_796(var uParam0, int iParam1)//Position - 0x7646C
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	float fVar46;
	struct<3> Var47;
	var uVar50;
	
	if (GlobalFunc_676(uParam0, iParam1))
	{
		GlobalFunc_684(uParam0, iParam1);
	}
	if (uParam0->f_10[iParam1 /*57*/].f_21 == 0f)
	{
		fVar0 = CAM::GET_GAMEPLAY_CAM_FOV();
	}
	else
	{
		fVar0 = uParam0->f_10[iParam1 /*57*/].f_21;
	}
	if (GlobalFunc_683(uParam0, iParam1))
	{
		GlobalFunc_682(uParam0, iParam1);
		if (iParam1 == (uParam0->f_1217 - 1))
		{
			uParam0->f_10[iParam1 /*57*/].f_54 = 0;
		}
	}
	if (iParam1 == (uParam0->f_1217 - 1))
	{
		uParam0->f_10[iParam1 /*57*/].f_54 = 0;
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 4)
	{
		if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			Var1 = { GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) };
		}
		else
		{
			Var1 = { uParam0->f_10[iParam1 /*57*/].f_13 };
		}
		if ((iParam1 == 0 || (iParam1 > 0 && uParam0->f_10[(iParam1 - 1) /*57*/].f_4)) || (iParam1 > 0 && uParam0->f_10[(iParam1 - 1) /*57*/].f_2 == 2))
		{
			Var4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		}
		else
		{
			Var4 = { uParam0->f_10[(iParam1 - 1) /*57*/].f_6 };
			if (GlobalFunc_680(uParam0, (iParam1 - 1)))
			{
				ENTITY::GET_ENTITY_MATRIX(GlobalFunc_5162(uParam0, (iParam1 - 1), -1), &Var7, &Var10, &Var13, &Var16);
				if (uParam0->f_10[iParam1 /*57*/].f_20)
				{
					Var4 = { Var16 + Var7 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6.f_1) + Var10 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6) + Var13 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6.f_2) };
				}
				else
				{
					Var4 = { Var16 + uParam0->f_10[(iParam1 - 1) /*57*/].f_6 };
				}
			}
		}
		Var19 = { Var1 - Var4 };
		fVar22 = (SYSTEM::VMAG(Var19) - uParam0->f_10[iParam1 /*57*/].f_12);
		Var19 = { GlobalFunc_107(Var19) };
		Var19 = { Var19 * Vector(fVar22, fVar22, fVar22) };
		uParam0->f_10[iParam1 /*57*/].f_6 = { Var4 + Var19 };
		if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			uParam0->f_10[iParam1 /*57*/].f_13 = { Var1 };
		}
	}
	else if (uParam0->f_10[iParam1 /*57*/].f_2 == 5 || uParam0->f_10[iParam1 /*57*/].f_2 == 6)
	{
		Var23 = { 0f, 0f, 0f };
		if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_5162(uParam0, uParam0->f_1218, -1)))
		{
			if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
			{
				Var23 = { GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) };
			}
			else
			{
				Var23 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, uParam0->f_1218, -1), 1) };
			}
		}
		Var26 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		Var29 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		Var32 = { Var23 - Var29 };
		fVar35 = 0f;
		if (iParam1 < uParam0->f_1218 || uParam0->f_1218 == 0)
		{
			fVar35 = uParam0->f_10[iParam1 /*57*/].f_12;
		}
		fVar36 = (SYSTEM::VMAG(Var32) - fVar35);
		Var32 = { GlobalFunc_679(Var26) };
		Var29 = { Var29 + Var32 * Vector(fVar35, fVar35, fVar35) };
		if (iParam1 < uParam0->f_1218)
		{
			uParam0->f_10[iParam1 /*57*/].f_6 = { Var29 };
		}
		else
		{
			uParam0->f_10[iParam1 /*57*/].f_6 = { Var29 + Var32 * FtoV((fVar36 - uParam0->f_10[iParam1 /*57*/].f_12)) };
		}
		uParam0->f_10[iParam1 /*57*/].f_9 = { Var26 };
	}
	else if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
	{
		Var37 = { uParam0->f_10[iParam1 /*57*/].f_13 };
		Var40 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, iParam1, -1), 1) };
		Var43 = { Var37 - Var40 };
		fVar46 = 0f;
		fVar46 = uParam0->f_10[iParam1 /*57*/].f_12;
		Var43 = { GlobalFunc_107(Var43) };
		Var47 = { Var40 + Var43 * Vector(fVar46, fVar46, fVar46) };
		Var47.f_2 = (Var47.f_2 + uParam0->f_10[iParam1 /*57*/].f_16);
		uParam0->f_10[iParam1 /*57*/].f_6 = { Var47 };
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 8)
	{
		GlobalFunc_678(uParam0, iParam1);
		fVar0 = uParam0->f_10[iParam1 /*57*/].f_21;
	}
	uParam0->f_10[iParam1 /*57*/].f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_10[iParam1 /*57*/].f_6, uParam0->f_10[iParam1 /*57*/].f_9, fVar0, 1, 2);
	uVar50 = uParam0->f_10[iParam1 /*57*/].f_1;
	if (CAM::DOES_CAM_EXIST(uParam0->f_10[iParam1 /*57*/].f_1))
	{
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(uVar50, uParam0->f_10[iParam1 /*57*/].f_22);
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 4)
		{
			CAM::POINT_CAM_AT_COORD(uVar50, uParam0->f_10[iParam1 /*57*/].f_13);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 3 && uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			CAM::POINT_CAM_AT_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 6)
		{
			if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_6 - GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) + uParam0->f_10[iParam1 /*57*/].f_24, 0);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_9, 0);
			}
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
		{
			if (uParam0->f_10[iParam1 /*57*/].f_17)
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_6 - ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, iParam1, -1), 1), 0);
			}
		}
		if (GlobalFunc_680(uParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_5162(uParam0, iParam1, -1)))
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_6, uParam0->f_10[iParam1 /*57*/].f_20);
				if (uParam0->f_10[iParam1 /*57*/].f_18)
				{
					if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
					{
						CAM::POINT_CAM_AT_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
					}
					else
					{
						CAM::POINT_CAM_AT_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
					}
				}
			}
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
		{
			CAM::POINT_CAM_AT_COORD(uVar50, uParam0->f_10[iParam1 /*57*/].f_13);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_46)
		{
			GlobalFunc_677(uParam0, iParam1);
		}
	}
	uParam0->f_10[iParam1 /*57*/].f_55 = 0;
	uParam0->f_10[iParam1 /*57*/].f_56 = 0;
}












void func_808(var uParam0, int iParam1, var uParam2)//Position - 0x771BD
{
	if (!*uParam0)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { -1.8104f, 1.2455f, -0.3514f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { 0.4595f, -0.4049f, 0.7081f };
			uParam0->f_10[0 /*57*/].f_18 = 1;
			uParam0->f_10[0 /*57*/].f_19 = 1;
			uParam0->f_10[0 /*57*/].f_20 = 1;
			uParam0->f_10[0 /*57*/].f_21 = 41f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 0f;
			uParam0->f_10[0 /*57*/].f_53 = 0;
			uParam0->f_10[0 /*57*/].f_23 = 0f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 1;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1000;
			uParam0->f_10[1 /*57*/].f_6 = { -1.8104f, 1.2455f, -0.7f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { 0.4595f, -0.4049f, 0.7081f };
			uParam0->f_10[1 /*57*/].f_18 = 1;
			uParam0->f_10[1 /*57*/].f_19 = 1;
			uParam0->f_10[1 /*57*/].f_20 = 1;
			uParam0->f_10[1 /*57*/].f_21 = 41f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 0f;
			uParam0->f_10[1 /*57*/].f_53 = 0;
			uParam0->f_10[1 /*57*/].f_23 = 0f;
			uParam0->f_10[1 /*57*/].f_28 = 2;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 1;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 600;
			uParam0->f_10[2 /*57*/].f_6 = { -0.316f, 2.77f, -3.1371f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { 10.3624f, 0.9979f, -172.5415f };
			uParam0->f_10[2 /*57*/].f_18 = 0;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 60f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 0;
			uParam0->f_10[2 /*57*/].f_23 = 0f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 0f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 1;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 0f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_54 = 1;
			uParam0->f_10[4 /*57*/].f_2 = 3;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 0;
			uParam0->f_10[4 /*57*/].f_6 = { -1680.621f, 4452.503f, 4.8078f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { 4.134039f, 0f, 71.84638f };
			uParam0->f_10[4 /*57*/].f_18 = 0;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 29.8f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 1f;
			uParam0->f_10[4 /*57*/].f_53 = 0;
			uParam0->f_10[4 /*57*/].f_23 = 0f;
			uParam0->f_10[4 /*57*/].f_28 = 1;
			uParam0->f_10[4 /*57*/].f_29 = 1f;
			uParam0->f_10[4 /*57*/].f_32 = 0f;
			uParam0->f_10[4 /*57*/].f_30 = 1;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 0f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 3;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 600;
			uParam0->f_10[5 /*57*/].f_6 = { -1680.621f, 4452.503f, 2.3f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 4.134039f, 0f, 71.84638f };
			uParam0->f_10[5 /*57*/].f_18 = 0;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 29.5f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 0;
			uParam0->f_10[5 /*57*/].f_23 = 0f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 0f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[6 /*57*/].f_2 = 3;
			uParam0->f_10[6 /*57*/].f_3 = -1;
			uParam0->f_10[6 /*57*/].f_4 = 0;
			uParam0->f_10[6 /*57*/].f_5 = 850;
			uParam0->f_10[6 /*57*/].f_6 = { -1680.621f, 4452.503f, 2.33f };
			uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_12 = 0f;
			uParam0->f_10[6 /*57*/].f_16 = 0f;
			uParam0->f_10[6 /*57*/].f_17 = 0;
			uParam0->f_10[6 /*57*/].f_9 = { 4.134039f, 0f, 71.84638f };
			uParam0->f_10[6 /*57*/].f_18 = 0;
			uParam0->f_10[6 /*57*/].f_19 = 0;
			uParam0->f_10[6 /*57*/].f_20 = 0;
			uParam0->f_10[6 /*57*/].f_21 = 29.1f;
			uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_27 = 0;
			uParam0->f_10[6 /*57*/].f_50 = 0;
			uParam0->f_10[6 /*57*/].f_51 = 0f;
			uParam0->f_10[6 /*57*/].f_52 = 0f;
			uParam0->f_10[6 /*57*/].f_22 = 0f;
			uParam0->f_10[6 /*57*/].f_53 = 0;
			uParam0->f_10[6 /*57*/].f_23 = 0f;
			uParam0->f_10[6 /*57*/].f_28 = 0;
			uParam0->f_10[6 /*57*/].f_29 = 0f;
			uParam0->f_10[6 /*57*/].f_32 = 0f;
			uParam0->f_10[6 /*57*/].f_30 = 1;
			uParam0->f_10[6 /*57*/].f_31 = 0;
			uParam0->f_10[6 /*57*/].f_33 = 1f;
			uParam0->f_10[6 /*57*/].f_34 = 0;
			uParam0->f_10[6 /*57*/].f_35 = 0f;
			uParam0->f_10[6 /*57*/].f_36 = 0;
			uParam0->f_10[6 /*57*/].f_37 = 0;
			uParam0->f_10[6 /*57*/].f_39 = 0f;
			uParam0->f_10[6 /*57*/].f_40 = 0f;
			uParam0->f_10[6 /*57*/].f_41 = 0;
			uParam0->f_10[6 /*57*/].f_42 = 0;
			uParam0->f_10[6 /*57*/].f_43 = 0;
			uParam0->f_10[6 /*57*/].f_38 = 0f;
			uParam0->f_10[6 /*57*/].f_45 = 0;
			uParam0->f_10[6 /*57*/].f_46 = 0;
			uParam0->f_10[6 /*57*/].f_47 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { -1.9066f, 2.8135f, -0.0906f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { -0.0185f, -0.021f, 0.1023f };
			uParam0->f_10[0 /*57*/].f_18 = 1;
			uParam0->f_10[0 /*57*/].f_19 = 0;
			uParam0->f_10[0 /*57*/].f_20 = 0;
			uParam0->f_10[0 /*57*/].f_21 = 60f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 0f;
			uParam0->f_10[0 /*57*/].f_53 = 0;
			uParam0->f_10[0 /*57*/].f_23 = 0f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 1;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1000;
			uParam0->f_10[1 /*57*/].f_6 = { -1.1243f, 3.188f, -0.2969f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { 0.0483f, 0.102f, 0.0414f };
			uParam0->f_10[1 /*57*/].f_18 = 1;
			uParam0->f_10[1 /*57*/].f_19 = 0;
			uParam0->f_10[1 /*57*/].f_20 = 0;
			uParam0->f_10[1 /*57*/].f_21 = 60f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 0f;
			uParam0->f_10[1 /*57*/].f_53 = 0;
			uParam0->f_10[1 /*57*/].f_23 = 0f;
			uParam0->f_10[1 /*57*/].f_28 = 2;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 1;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 600;
			uParam0->f_10[2 /*57*/].f_6 = { -0.316f, 2.77f, -3.1371f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { 10.3624f, 0.9979f, -172.5415f };
			uParam0->f_10[2 /*57*/].f_18 = 0;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 60f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 0;
			uParam0->f_10[2 /*57*/].f_23 = 0f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 0f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 1;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 0f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_54 = 1;
			uParam0->f_10[4 /*57*/].f_2 = 3;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 0;
			uParam0->f_10[4 /*57*/].f_6 = { -1680.972f, 4453.013f, 4.8078f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { 6.0105f, 0f, 85.0164f };
			uParam0->f_10[4 /*57*/].f_18 = 0;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 40f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 1f;
			uParam0->f_10[4 /*57*/].f_53 = 0;
			uParam0->f_10[4 /*57*/].f_23 = 0f;
			uParam0->f_10[4 /*57*/].f_28 = 1;
			uParam0->f_10[4 /*57*/].f_29 = 1f;
			uParam0->f_10[4 /*57*/].f_32 = 0f;
			uParam0->f_10[4 /*57*/].f_30 = 1;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 0f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 3;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 600;
			uParam0->f_10[5 /*57*/].f_6 = { -1681.231f, 4453.036f, 2.3345f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 6.0105f, 0f, 85.0164f };
			uParam0->f_10[5 /*57*/].f_18 = 0;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 40f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 0;
			uParam0->f_10[5 /*57*/].f_23 = 0f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 0f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[6 /*57*/].f_2 = 3;
			uParam0->f_10[6 /*57*/].f_3 = -1;
			uParam0->f_10[6 /*57*/].f_4 = 0;
			uParam0->f_10[6 /*57*/].f_5 = 850;
			uParam0->f_10[6 /*57*/].f_6 = { -1681.231f, 4453.036f, 2.3345f };
			uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_12 = 0f;
			uParam0->f_10[6 /*57*/].f_16 = 0f;
			uParam0->f_10[6 /*57*/].f_17 = 0;
			uParam0->f_10[6 /*57*/].f_9 = { 6.0105f, 0f, 85.0164f };
			uParam0->f_10[6 /*57*/].f_18 = 0;
			uParam0->f_10[6 /*57*/].f_19 = 0;
			uParam0->f_10[6 /*57*/].f_20 = 0;
			uParam0->f_10[6 /*57*/].f_21 = 40f;
			uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_27 = 0;
			uParam0->f_10[6 /*57*/].f_50 = 0;
			uParam0->f_10[6 /*57*/].f_51 = 0f;
			uParam0->f_10[6 /*57*/].f_52 = 0f;
			uParam0->f_10[6 /*57*/].f_22 = 0f;
			uParam0->f_10[6 /*57*/].f_53 = 0;
			uParam0->f_10[6 /*57*/].f_23 = 0f;
			uParam0->f_10[6 /*57*/].f_28 = 0;
			uParam0->f_10[6 /*57*/].f_29 = 0f;
			uParam0->f_10[6 /*57*/].f_32 = 0f;
			uParam0->f_10[6 /*57*/].f_30 = 1;
			uParam0->f_10[6 /*57*/].f_31 = 0;
			uParam0->f_10[6 /*57*/].f_33 = 1f;
			uParam0->f_10[6 /*57*/].f_34 = 0;
			uParam0->f_10[6 /*57*/].f_35 = 0f;
			uParam0->f_10[6 /*57*/].f_36 = 0;
			uParam0->f_10[6 /*57*/].f_37 = 0;
			uParam0->f_10[6 /*57*/].f_39 = 0f;
			uParam0->f_10[6 /*57*/].f_40 = 0f;
			uParam0->f_10[6 /*57*/].f_41 = 0;
			uParam0->f_10[6 /*57*/].f_42 = 0;
			uParam0->f_10[6 /*57*/].f_43 = 0;
			uParam0->f_10[6 /*57*/].f_38 = 0f;
			uParam0->f_10[6 /*57*/].f_45 = 0;
			uParam0->f_10[6 /*57*/].f_46 = 0;
			uParam0->f_10[6 /*57*/].f_47 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		}
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile2_ScopeToFranklin.txt";
		uParam0->f_1225 = "CameraInfo_Exile2_ScopeToFranklin.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}



void func_811()//Position - 0x78937
{
	float fVar0;
	float fVar1;
	
	if (iLocal_651 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_1681))
		{
			switch (iLocal_721)
			{
				case 0:
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1681))
					{
						if (!iLocal_789)
						{
							if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
							{
								fVar0 = 0f;
								fVar1 = 0f;
								GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_1681, 1), &fVar0, &fVar1);
								if (MISC::ABSF((fVar0 - 0.5f)) < 0.18f)
								{
									if (MISC::ABSF((fVar1 - 0.5f)) < 0.18f)
									{
										Local_1681.f_24 = MISC::GET_GAME_TIMER();
										iLocal_721++;
									}
								}
							}
						}
					}
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1681, 1), 4f, 1))
					{
						PED::DELETE_PED(&Local_1681);
					}
					break;
				
				case 1:
					if (bLocal_784)
					{
						if (GlobalFunc_588(&(Local_1681.f_24), 2000))
						{
							PED::DELETE_PED(&Local_1681);
							iLocal_721++;
						}
					}
					else if (GlobalFunc_588(&(Local_1681.f_24), 1300))
					{
						PED::DELETE_PED(&Local_1681);
						iLocal_721++;
					}
					break;
				
				case 2:
					break;
			}
		}
		else if (!Global_86826)
		{
			if (!Local_1681.f_27)
			{
				STREAMING::REQUEST_MODEL(Local_1681.f_1);
				if (STREAMING::HAS_MODEL_LOADED(Local_1681.f_1))
				{
					func_449(&Local_1681);
					ENTITY::SET_ENTITY_PROOFS(Local_1681, 1, 1, 1, 1, 1, 1, 0, 0);
					Global_86826 = 1;
				}
			}
		}
	}
}

void func_812()//Position - 0x78A85
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= (Local_1020 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1020[iVar0 /*33*/]))
		{
			if (!iLocal_660[iVar0] >= 22)
			{
				if (func_484(Local_1020[iVar0 /*33*/], 1805844857))
				{
					if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1020[iVar0 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), 1) < 2f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_1020[iVar0 /*33*/], Local_887[0 /*33*/], 50f, 5000, 0, 0);
						iLocal_660[iVar0] = 22;
					}
					else if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1020[iVar0 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), 1) < 2f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_1020[iVar0 /*33*/], Local_887[1 /*33*/], 50f, 5000, 0, 0);
						iLocal_660[iVar0] = 22;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1020[iVar0 /*33*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 4f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_1020[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 50f, 5000, 0, 0);
						iLocal_660[iVar0] = 22;
					}
					else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1020[iVar0 /*33*/], 1), 4f, 1))
					{
						TASK::TASK_SMART_FLEE_PED(Local_1020[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 350f, -1, 0, 0);
						iLocal_660[iVar0] = 22;
					}
				}
			}
			switch (iLocal_660[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 9:
						case 11:
						case 13:
						case 15:
						case 17:
							if (func_484(Local_1020[iVar0 /*33*/], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1844[iVar0 /*9*/], 2f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1020[iVar0 /*33*/], uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_660[iVar0]++;
							}
							break;
						
						case 2:
						case 4:
						case 6:
						case 8:
						case 10:
						case 12:
						case 14:
						case 16:
						case 18:
							if (func_484(Local_1020[iVar0 /*33*/], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_PAUSE(0, 5000);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1844[iVar0 /*9*/], 1f, -1, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1020[iVar0 /*33*/], uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_660[iVar0]++;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 9:
						case 11:
						case 13:
						case 15:
						case 17:
							if (func_484(Local_1020[iVar0 /*33*/], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1844[iVar0 /*9*/].f_3, 2f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1020[iVar0 /*33*/], uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_660[iVar0]++;
							}
							break;
						
						case 2:
						case 4:
						case 6:
						case 8:
						case 10:
						case 12:
						case 14:
						case 16:
						case 18:
							if (func_484(Local_1020[iVar0 /*33*/], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_PAUSE(0, 5000);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1844[iVar0 /*9*/].f_3, 1f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1020[iVar0 /*33*/], uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_660[iVar0]++;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 9:
						case 11:
						case 13:
						case 15:
						case 17:
							if (func_484(Local_1020[iVar0 /*33*/], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1844[iVar0 /*9*/].f_6, 2f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1020[iVar0 /*33*/], uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_660[iVar0] = 0;
							}
							break;
						
						case 2:
						case 4:
						case 6:
						case 8:
						case 10:
						case 12:
						case 14:
						case 16:
						case 18:
							if (func_484(Local_1020[iVar0 /*33*/], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
								TASK::TASK_PAUSE(0, 5000);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1844[iVar0 /*9*/].f_6, 1f, -1, 0.25f, 0, 1193033728);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
								TASK::TASK_PERFORM_SEQUENCE(Local_1020[iVar0 /*33*/], uLocal_883);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
								iLocal_660[iVar0] = 0;
							}
							break;
					}
					break;
				
				case 22:
					if (func_484(Local_1020[iVar0 /*33*/], 1805844857))
					{
						iLocal_660[iVar0] = 0;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_813()//Position - 0x79030
{
	func_825(&Local_887, 1);
	func_824();
	func_822();
	func_821();
	func_814();
}

void func_814()//Position - 0x79051
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	
	if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
	{
		if (!iLocal_843 >= 21)
		{
			if (!GlobalFunc_5172(&Local_2282, 0))
			{
				if (GlobalFunc_8315() == 1)
				{
					if (GlobalFunc_588(&iLocal_697, 12000))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) < 50f)
						{
							switch (iLocal_845)
							{
								case 0:
									if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_SHOUT", 7, 0, 0, 0))
									{
										iLocal_697 = MISC::GET_GAME_TIMER();
									}
									break;
								
								case 1:
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) < 15f)
									{
										if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_DOG", 7, 0, 0, 0))
										{
											iLocal_697 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										iLocal_845 = 0;
									}
									break;
								}
							}
						}
					}
			}
			if (GlobalFunc_8315() == 1 && Local_2097 != 2)
			{
				if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) < 25f && ENTITY::IS_ENTITY_ON_SCREEN(Local_887[3 /*33*/])) || func_820(&(Local_887[3 /*33*/]), 35f, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_887[3 /*33*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_887[3 /*33*/], joaat("weapon_pistol"), -1, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_887[3 /*33*/], joaat("weapon_unarmed"), 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 2f, -1, 1f, 1, 1193033728);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 44, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[3 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					PED::SET_PED_HEATSCALE_OVERRIDE(Local_887[3 /*33*/], 255);
					iLocal_697 = 0;
					iLocal_843 = 21;
				}
			}
		}
		else
		{
			GlobalFunc_661(Local_887[3 /*33*/], &(Local_887[3 /*33*/].f_3), -1, 0, 1, 0, -1082130432, 0);
		}
		switch (iLocal_843)
		{
			case 0:
				AUDIO::PREPARE_MUSIC_EVENT("EXL2_RPG_FIRED");
				WEAPON::SET_CURRENT_PED_WEAPON(Local_887[3 /*33*/], joaat("weapon_rpg"), 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1714, 99999999, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
				TASK::TASK_PERFORM_SEQUENCE(Local_887[3 /*33*/], uLocal_883);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
				Local_887[3 /*33*/].f_24 = MISC::GET_GAME_TIMER();
				iLocal_843++;
				break;
			
			case 1:
				if (func_818(Local_887[3 /*33*/], 1092616192) || GlobalFunc_588(&(Local_887[3 /*33*/].f_24), 90000))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
					func_817();
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_RPG_FIRED");
					func_751();
					iLocal_843++;
				}
				break;
			
			case 2:
				func_817();
				func_751();
				if ((Local_887[3 /*33*/].f_11 != -1541.272f && Local_887[3 /*33*/].f_11.f_1 != 4489.342f) && Local_887[3 /*33*/].f_11.f_2 != 18.4372f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_887[3 /*33*/].f_17, 2f, -1, 0.25f, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[3 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
				}
				iLocal_843++;
				break;
			
			case 3:
				func_817();
				if (func_751())
				{
					iLocal_835 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
					iLocal_834 = MISC::GET_GAME_TIMER();
					iLocal_843 = 22;
				}
				break;
			
			case 4:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1545.526f, 4486.732f, 18.2761f, Local_1714, 1.5f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492, 20000);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1714, 2000, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1714, 500, 0);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_887[3 /*33*/].f_11, Local_1714, 1.5f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492, 20000);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1714, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
				TASK::TASK_PERFORM_SEQUENCE(Local_887[3 /*33*/], uLocal_883);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
				iLocal_843++;
				break;
			
			case 5:
				iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Local_887[3 /*33*/], 242628503);
				if (iVar0 == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(Local_887[3 /*33*/]) == 2)
					{
						func_751();
						iLocal_843++;
					}
				}
				else
				{
					iLocal_843 = 4;
				}
				break;
			
			case 6:
				if (func_751())
				{
					iLocal_835 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
					iLocal_834 = MISC::GET_GAME_TIMER();
					iLocal_843++;
				}
				break;
			
			case 7:
				if (GlobalFunc_588(&iLocal_834, iLocal_835))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[3 /*33*/], 1);
					iLocal_843 = 4;
				}
				break;
			
			case 21:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
				{
					func_751();
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_887[3 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_887[3 /*33*/], 2f, 0);
				}
				if (func_484(Local_887[3 /*33*/], -1442466670))
				{
					if (Local_2097 != 2)
					{
						if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_887[3 /*33*/], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(Local_887[3 /*33*/])) || ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) < 10f && func_816(PLAYER::PLAYER_PED_ID(), Local_887[3 /*33*/])) && (!iLocal_801 && PED::CAN_PED_SEE_HATED_PED(Local_887[3 /*33*/], PLAYER::PLAYER_PED_ID()))))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[3 /*33*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_887[3 /*33*/], ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 8f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_887[3 /*33*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_887[3 /*33*/], 50, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_887[3 /*33*/], 100f, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_887[3 /*33*/]);
							iLocal_834 = 0;
							iLocal_834 = MISC::GET_GAME_TIMER();
							iLocal_801 = 1;
						}
					}
				}
				if (func_484(Local_887[3 /*33*/], 242628503))
				{
					if (!PED::IS_PED_RAGDOLL(Local_887[3 /*33*/]))
					{
						if (GlobalFunc_588(&iLocal_834, 12000) || Local_2097 == 2)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[3 /*33*/], 1);
							TASK::CLEAR_PED_TASKS(Local_887[3 /*33*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 44, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_887[3 /*33*/], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_887[3 /*33*/]);
							iLocal_801 = 0;
						}
					}
				}
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar1);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_887[3 /*33*/], -1567.908f, 4731.352f, 49.3402f, 4f, 4f, 2f, 0, 1, 0) && (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), &iVar1) && iVar1 < 191))
				{
					STREAMING::REQUEST_ANIM_DICT("missfra0_chop_find");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfra0_chop_find"))
					{
						if (((GlobalFunc_8315() == 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Local_2097 != 2) && iLocal_2307 == 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1648, 1227113341) == 1 && !func_484(Local_887[3 /*33*/], 242628503))
							{
								if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), &iVar1) && iVar1 >= 40)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1648, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], -1f, -1f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_887[3 /*33*/], 1f, -1f, 2f), 3.5f, 0, 1, 0))
									{
										Local_747 = { ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1) };
										Local_750 = { ENTITY::GET_ENTITY_ROTATION(Local_887[3 /*33*/], 2) };
										Var2 = { Local_747 };
										Var5 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "take_down_bad_guy_victim", Local_747, Local_750, 1f, 2) };
										MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14);
										Var5.f_2 = (fVar14 + 1f);
										Var8 = { Var5 - Var2 };
										Var11 = { GlobalFunc_107(Var8) };
										Local_750.x = MISC::ATAN2(Var11.f_2, SYSTEM::VMAG(Var11.x, Var11.f_1, 0f));
										Local_887[3 /*33*/].f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_887[3 /*33*/], Local_887[3 /*33*/].f_23, "missexile2", "take_down_bad_guy_victim", 8f, -8f, 5, 16, 8f, 0);
										iLocal_843 = 22;
									}
								}
							}
						}
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[3 /*33*/], 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, -1, 2f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[3 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_843 = 24;
				}
				break;
			
			case 22:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_887[3 /*33*/].f_23))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_887[3 /*33*/].f_23) >= 1f)
					{
						TASK::SET_HIGH_FALL_TASK(Local_887[3 /*33*/], 5000, 7000, 0);
						iLocal_843++;
					}
				}
				break;
			
			case 23:
				PED::RESET_PED_RAGDOLL_TIMER(Local_887[3 /*33*/]);
				break;
			
			case 24:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1774, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_887[3 /*33*/], Local_1774))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1774))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1774, Local_1774.f_13, "lkexile2", 1);
						}
						iLocal_843 = 24;
					}
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_887[3 /*33*/], joaat("weapon_pistol"), 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[3 /*33*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_887[3 /*33*/], -1567.908f, 4731.352f, 49.3402f, 10f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_887[3 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_843 = 25;
				}
				break;
			
			case 25:
				if (!GlobalFunc_5172(&Local_2282, 0))
				{
					if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_ORUN", 7, 0, 0, 0))
						{
							iLocal_843 = 24;
						}
					}
				}
				break;
			
			case 26:
				break;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 10f))
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_10630(&uLocal_2114, "TM44AUD", "TM44_RPG2", "TM44_RPG2_1", 6, 0, 0);
			}
		}
	}
	else if (Local_887[3 /*33*/].f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1774, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1774))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1774);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
		{
			func_751();
		}
		GlobalFunc_661(Local_887[3 /*33*/], &(Local_887[3 /*33*/].f_3), -1, 0, 1, 0, -1082130432, 0);
	}
}


int func_816(int iParam0, int iParam1)//Position - 0x79AFF
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
					Var6 = { Var3 - Var0 };
					Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 0.5f, 0f) };
					Var12 = { Var9 - Var3 };
					if (GlobalFunc_168(Var6, Var12) < 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_817()//Position - 0x79B84
{
	if (!PED::IS_PED_INJURED(Local_887[3 /*33*/]))
	{
		iLocal_705 = (iLocal_705 - 9);
		if (iLocal_705 < 1)
		{
			iLocal_705 = 1;
		}
		PED::SET_PED_HEATSCALE_OVERRIDE(Local_887[3 /*33*/], iLocal_705);
	}
}

int func_818(int iParam0, float fParam1)//Position - 0x79BBB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!Local_2097 == 2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				if (!iLocal_789)
				{
					if (iParam0 != Local_887[3 /*33*/])
					{
						if (CAM::GET_GAMEPLAY_CAM_FOV() < fParam1)
						{
							fVar0 = 0f;
							fVar1 = 0f;
							GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar0, &fVar1);
							if (MISC::ABSF((fVar0 - 0.5f)) < 0.1f)
							{
								if (MISC::ABSF((fVar1 - 0.5f)) < 0.1f)
								{
									return 1;
								}
							}
						}
					}
					else if (CAM::GET_GAMEPLAY_CAM_FOV() < 25.8f)
					{
						fVar2 = 0f;
						fVar3 = 0f;
						GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar2, &fVar3);
						if (MISC::ABSF((fVar2 - 0.5f)) < 0.225f)
						{
							if (MISC::ABSF((fVar3 - 0.5f)) < 0.225f)
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


int func_820(var uParam0, float fParam1, bool bParam2)//Position - 0x79DBE
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < fParam1)
		{
			if (PED::CAN_PED_SEE_HATED_PED(*uParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (bParam2)
			{
				return 1;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 4f, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_821()//Position - 0x79E59
{
	if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
	{
		if (iLocal_842 != 22)
		{
			if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[2 /*33*/], 1), 1) < 15f && ENTITY::IS_ENTITY_ON_SCREEN(Local_887[2 /*33*/])) || ((GlobalFunc_8315() == 1 && PED::CAN_PED_SEE_HATED_PED(Local_887[2 /*33*/], PLAYER::PLAYER_PED_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[2 /*33*/], 1), 1) < 15f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_887[2 /*33*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_887[2 /*33*/].f_2))
				{
					Local_887[2 /*33*/].f_2 = GlobalFunc_6797(Local_887[2 /*33*/], 1, 145);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[2 /*33*/], 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_887[2 /*33*/], -1569.217f, 4424.892f, 6.168f, 10f, 0, 0);
				TASK::TASK_COMBAT_PED(Local_887[2 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_842 = 22;
			}
		}
		switch (iLocal_842)
		{
			case 0:
				PED::SET_PED_STEALTH_MOVEMENT(Local_887[2 /*33*/], 1, "DEFAULT_ACTION");
				TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1574.28f, 4493.85f, 21.11f, 1.5f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1585.68f, 4500.92f, 19.81f, 1.5f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.22f, 4515.91f, 18.3f, 1.5f, -1, 0.25f, 0, 1193033728);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_883, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
				TASK::TASK_PERFORM_SEQUENCE(Local_887[2 /*33*/], uLocal_883);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
				iLocal_842++;
				break;
			
			case 1:
				if (func_818(Local_887[2 /*33*/], 1092616192))
				{
					Local_887[2 /*33*/].f_2 = GlobalFunc_6783(Local_887[2 /*33*/], 1, 0);
					GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FOUND", 7, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1545.07f, 4470.35f, 18.78f, 1.5f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_PAUSE(0, 2000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.45f, 4457.35f, 15.75f, 1.5f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_PAUSE(0, 2000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.03f, 4457.64f, 16.1f, 1.5f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_PAUSE(0, 2000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1556.83f, 4447.04f, 11.1f, 1.5f, -1, 0.25f, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[2 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_654 = 0;
					iLocal_842++;
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_887[2 /*33*/], -1556.83f, 4447.04f, 11.1f, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_484(Local_887[2 /*33*/], 1418067348) && func_484(Local_887[2 /*33*/], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1545.07f, 4470.35f, 18.78f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.45f, 4457.35f, 15.75f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.03f, 4457.64f, 16.1f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1556.83f, 4447.04f, 11.1f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_887[2 /*33*/], uLocal_883, iLocal_654, 6);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
					else
					{
						iLocal_654 = TASK::GET_SEQUENCE_PROGRESS(Local_887[2 /*33*/]);
					}
				}
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_887[2 /*33*/], 1), 4f, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_PLAY_ANIM(0, "missexile2", "enter_crouch_b", 8f, -8f, -1, 1032, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missexile2", "crouching_idle_b", 8f, -8f, -1, 1032, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[2 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_842 = 3;
				}
				break;
			
			case 3:
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_887[2 /*33*/], 2f);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_887[2 /*33*/], -1556.83f, 4447.04f, 11.1f, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_484(Local_887[2 /*33*/], 1418067348) && func_484(Local_887[2 /*33*/], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1545.07f, 4470.35f, 18.78f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.45f, 4457.35f, 15.75f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.03f, 4457.64f, 16.1f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1556.83f, 4447.04f, 11.1f, 1.5f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_887[2 /*33*/], uLocal_883, iLocal_654, 7);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_887[2 /*33*/], 1418067348) == 1)
					{
						iLocal_654 = TASK::GET_SEQUENCE_PROGRESS(Local_887[2 /*33*/]);
					}
				}
				break;
			
			case 22:
				break;
			}
	}
}

void func_822()//Position - 0x7A46E
{
	if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
	{
		if (iLocal_841 != 22)
		{
			if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), 1) < 40f && ENTITY::IS_ENTITY_ON_SCREEN(Local_887[1 /*33*/])) || ((GlobalFunc_8315() == 1 && PED::CAN_PED_SEE_HATED_PED(Local_887[1 /*33*/], PLAYER::PLAYER_PED_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), 1) < 20f)) || (GlobalFunc_8315() != 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), ENTITY::GET_ENTITY_COORDS(Local_887[1 /*33*/], 1), 1) < 20f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_887[1 /*33*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_887[1 /*33*/].f_2))
				{
					Local_887[1 /*33*/].f_2 = GlobalFunc_6797(Local_887[1 /*33*/], 1, 145);
				}
				if (iLocal_841 < 5)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[1 /*33*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_887[1 /*33*/], -1643.407f, 4396.602f, 7.5152f, 10f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_887[1 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else if (iLocal_841 < 10)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[1 /*33*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_887[1 /*33*/], -1744.208f, 4464.224f, 3.2479f, 3f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_887[1 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iLocal_841 = 22;
			}
		}
		if (!iLocal_797)
		{
			iLocal_797 = 1;
		}
		switch (iLocal_841)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1562.437f, 4365.877f, -0.1f, 1f, -1, 1193033728, 1056964608);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1556.8f, 4361.9f, -0.1f, 2f, -1, 1193033728, 1056964608);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1552.244f, 4353.12f, -0.1f, 2f, -1, 1193033728, 1056964608);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1570.46f, 4360.972f, -0.1f, 2f, -1, 1193033728, 1056964608);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_883, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
				TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
				iLocal_841++;
				break;
			
			case 1:
				if (func_818(Local_887[1 /*33*/], 1092616192))
				{
					Local_887[1 /*33*/].f_2 = GlobalFunc_6783(Local_887[1 /*33*/], 1, 0);
					GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FOUND", 7, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1572.7f, 4363.5f, -0.1f, 1f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_841++;
				}
				PED::SET_PED_RESET_FLAG(Local_887[1 /*33*/], 234, 1);
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_887[1 /*33*/], -1572.7f, 4363.5f, -0.1f, 3f, 3f, 2f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1577.53f, 4365.07f, -0.1f, 1f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_841++;
				}
				break;
			
			case 3:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_887[1 /*33*/], -1577.53f, 4365.07f, -0.1f, 3f, 3f, 2f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1582.07f, 4372.06f, -0.1f, 2f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_841++;
				}
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_887[1 /*33*/], -1582.07f, 4372.06f, -0.1f, 3f, 3f, 2f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1587.37f, 4386.34f, -0.1f, 2f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_841++;
				}
				break;
			
			case 5:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_887[1 /*33*/], -1587.37f, 4386.34f, -0.1f, 3f, 3f, 2f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1567.61f, 4404.78f, 0.17f, 2f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_841++;
				}
				break;
			
			case 6:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_887[1 /*33*/], -1567.61f, 4404.78f, 0.17f, 3f, 3f, 2f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1568.7f, 4539.6f, 16.6f, 2f, -1, -1f, 1, 1193033728);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_841++;
				}
				break;
			
			case 7:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_887[1 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_887[1 /*33*/], 2f, 0);
				}
				else
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_887[1 /*33*/], 2f);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(Local_887[1 /*33*/], -1567.908f, 4731.352f, 49.3402f, 2f, 2f, 2f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_887[0 /*33*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, 0, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, -1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_887[1 /*33*/], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
					iLocal_841++;
				}
				break;
			
			case 8:
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_887[1 /*33*/], Local_1774) && func_823(&(Local_887[0 /*33*/])))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1774))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1774, Local_1774.f_13, "lkexile2", 1);
					}
					iLocal_841++;
				}
				break;
			
			case 9:
				break;
			
			case 22:
				break;
			}
	}
}

int func_823(var uParam0)//Position - 0x7AB28
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, Local_1774))
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(*uParam0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_824()//Position - 0x7AB67
{
	if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
	{
		if (iLocal_840 != 22)
		{
			if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), 1) < 15f || ((GlobalFunc_8315() == 1 && PED::CAN_PED_SEE_HATED_PED(Local_887[0 /*33*/], PLAYER::PLAYER_PED_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), 1) < 15f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_887[0 /*33*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_887[0 /*33*/].f_2))
				{
					Local_887[0 /*33*/].f_2 = GlobalFunc_6797(Local_887[0 /*33*/], 1, 145);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_887[0 /*33*/], 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_887[0 /*33*/], -1492.563f, 4479.996f, 17.2309f, 10f, 0, 0);
				TASK::TASK_COMBAT_PED(Local_887[0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_840 = 22;
			}
		}
		switch (iLocal_840)
		{
			case 0:
				PED::SET_PED_STEALTH_MOVEMENT(Local_887[0 /*33*/], 1, "DEFAULT_ACTION");
				TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1523.34f, 4454.33f, 10.43f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1714, 2000, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1517.54f, 4452.38f, 9.24f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1714, 2000, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1511.87f, 4440.37f, 11.6f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_883, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
				TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
				iLocal_840++;
				break;
			
			case 1:
				if (func_818(Local_887[0 /*33*/], 1092616192))
				{
					Local_887[0 /*33*/].f_2 = GlobalFunc_6783(Local_887[0 /*33*/], 1, 0);
					GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FOUND", 7, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 1f, -1, -1f, 1, 1193033728);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
					TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					iLocal_653 = 0;
					iLocal_840++;
				}
				if (func_818(Local_887[0 /*33*/], 15f))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), 4f, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "enter_crouch_a", 8f, -8f, -1, 1032, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "crouching_idle_a", 8f, -8f, -1, 1032, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_840 = 3;
					}
				}
				break;
			
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_887[0 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_887[0 /*33*/], 2f, 0);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_887[0 /*33*/], -1567.908f, 4731.352f, 49.3402f, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_484(Local_887[0 /*33*/], 1418067348) && func_484(Local_887[0 /*33*/], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 1f, -1, -1f, 1, 1193033728);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_887[0 /*33*/], uLocal_883, iLocal_653, 1);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
					else
					{
						iLocal_653 = TASK::GET_SEQUENCE_PROGRESS(Local_887[0 /*33*/]);
					}
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_887[0 /*33*/], 1), 4f, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "enter_crouch_a", 8f, -8f, -1, 1032, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "crouching_idle_a", 8f, -8f, -1, 1032, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						iLocal_840 = 3;
					}
				}
				else
				{
					iLocal_840 = 4;
				}
				break;
			
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_887[0 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_887[0 /*33*/], 2f, 0);
				}
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_887[0 /*33*/], 2f);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_887[0 /*33*/], -1567.908f, 4731.352f, 49.3402f, 2f, 2f, 2f, 0, 1, 0))
				{
					if (func_484(Local_887[0 /*33*/], 1418067348) && func_484(Local_887[0 /*33*/], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 1f, -1, -1f, 1, 1193033728);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_887[0 /*33*/], uLocal_883, iLocal_653, 1);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_887[0 /*33*/], 1418067348) == 1)
					{
						iLocal_653 = TASK::GET_SEQUENCE_PROGRESS(Local_887[0 /*33*/]);
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_887[1 /*33*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, 0, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
							TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, -1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
							TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_ENTER_VEHICLE(0, Local_1774, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_887[0 /*33*/], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
					iLocal_840++;
				}
				break;
			
			case 4:
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_887[0 /*33*/], Local_1774) && func_823(&(Local_887[1 /*33*/])))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1774))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1774, Local_1774.f_13, "lkexile2", 1);
					}
					iLocal_840++;
				}
				break;
			
			case 5:
				break;
			
			case 22:
				break;
			}
	}
}

int func_825(int iParam0, bool bParam1)//Position - 0x7B1BC
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*33*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*33*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*33*/]);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*33*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar1 /*33*/])->f_2));
				}
				iVar0++;
			}
		}
		else if ((iParam0[iVar1 /*33*/])->f_27)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}

void func_826()//Position - 0x7B245
{
	if (!bLocal_787)
	{
		if (GlobalFunc_2877())
		{
			iLocal_723 = 99;
		}
	}
	else
	{
		func_827(&iLocal_723, &iLocal_724, 1, 0, 15000);
	}
}

void func_827(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x7B272
{
	switch (*iParam0)
	{
		case 0:
			*iParam1 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		
		case 1:
			if (!GlobalFunc_2877())
			{
				if (GlobalFunc_2876(iParam1, iParam4))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
						{
							if (bParam2)
							{
								GlobalFunc_159("SNIPE_HLP0", -1);
							}
							*iParam0++;
						}
						else
						{
							if (bParam3)
							{
								GlobalFunc_159("SNIPE_HLP1", -1);
							}
							*iParam0++;
						}
					}
				}
			}
			else
			{
				*iParam0 = 3;
			}
			break;
		
		case 2:
			if (GlobalFunc_2877())
			{
				if (GlobalFunc_74("SNIPE_HLP0"))
				{
					HUD::CLEAR_HELP(1);
				}
				else if (GlobalFunc_74("SNIPE_HLP1"))
				{
					HUD::CLEAR_HELP(1);
				}
				*iParam0++;
			}
			break;
		
		case 3:
			break;
	}
}



void func_830()//Position - 0x7B3DA
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	switch (iLocal_649)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FINDG", 7, 0, 0, 0))
			{
				iLocal_650 = MISC::GET_GAME_TIMER();
				iLocal_649++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_2282, 0))
			{
				GlobalFunc_164("FS_FINDGANG", 7500, 0);
				iLocal_649++;
			}
			break;
		
		case 2:
			iLocal_649++;
			break;
		
		case 3:
			iLocal_649++;
			break;
		
		case 4:
			if (func_837(&Local_887, 2))
			{
				GlobalFunc_4935();
				iLocal_649 = 5;
			}
			break;
		
		case 5:
			if (!GlobalFunc_5172(&Local_2282, 0))
			{
				if (func_837(&Local_887, 2))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_M0L", 7, 0, 0, 0))
					{
						iLocal_650 = MISC::GET_GAME_TIMER();
						iLocal_649++;
					}
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&iLocal_650, 4000))
			{
				if (!GlobalFunc_5172(&Local_2282, 0))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_THL", 6, 0, 0, 0))
					{
						iLocal_650 = MISC::GET_GAME_TIMER();
						iLocal_649 = 7;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
			{
				GlobalFunc_4935();
				iLocal_649 = 7;
			}
			break;
		
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_RPG3", 7, 0, 0, 0))
				{
					iLocal_649 = 22;
				}
			}
			else
			{
				func_834();
			}
			break;
		
		case 8:
			if (!func_470("TM44_NOGET"))
			{
				if (!GlobalFunc_5172(&Local_2282, 0))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_NOGET", 7, 0, 0, 0))
					{
						func_458("TM44_NOGET", 1);
						iLocal_649++;
					}
				}
			}
			break;
		
		case 9:
			iLocal_649++;
			break;
		
		case 10:
			if (GlobalFunc_8315() == 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FSWITCH", 7, 0, 0, 0))
				{
					GlobalFunc_1998(1);
					func_458("TM44_FSWITCH", 1);
					iLocal_649++;
				}
			}
			break;
		
		case 11:
			if (!GlobalFunc_5172(&Local_2282, 0))
			{
				if (Local_2097 != 2)
				{
					GlobalFunc_164("FS_GOD2b", 7500, 1);
				}
				iLocal_649++;
			}
			break;
		
		case 12:
			func_610();
			bLocal_634 = true;
			iLocal_649++;
			break;
		
		case 13:
			break;
		
		case 22:
			break;
	}
	if ((!GlobalFunc_5172(&Local_2282, 0) && !GlobalFunc_2878(&uLocal_2019)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!bLocal_634)
		{
			if (!func_470("TM44_TWT"))
			{
				if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
				{
					if (GlobalFunc_8315() == 0 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_TWT", 7, 0, 0, 0))
						{
							func_458("TM44_TWT", 1);
							Local_887[1 /*33*/].f_24 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_458("TM44_TWT", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
			{
				if (!func_470("TM44_WATER"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_887[1 /*33*/].f_2))
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_WATER", 7, 0, 0, 0))
						{
							func_458("TM44_WATER", 1);
						}
					}
				}
			}
			else if (!func_470("TM44_DWATER"))
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_DWATER", 7, 0, 0, 0))
				{
					func_458("TM44_DWATER", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
			{
				if (!func_470("TM44_GWOOD"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_887[0 /*33*/].f_2))
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_GWOOD", 7, 0, 0, 0))
						{
							func_458("TM44_GWOOD", 1);
						}
					}
				}
			}
			else if (!func_470("TM44_DEADR"))
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_DEADR", 7, 0, 0, 0))
				{
					func_458("TM44_DEADR", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_887[1 /*33*/].f_2))
				{
					if (GlobalFunc_588(&(Local_887[1 /*33*/].f_24), 40000))
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_TWT", 6, 0, 0, 0))
						{
							Local_887[1 /*33*/].f_24 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_887[0 /*33*/].f_2))
				{
					if (GlobalFunc_588(&(Local_887[0 /*33*/].f_24), 40000))
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_THL2", 6, 0, 0, 0))
						{
							Local_887[0 /*33*/].f_24 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_709++;
				if (iLocal_709 > 4)
				{
					if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]) || !PED::IS_PED_INJURED(Local_887[0 /*33*/]))
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_MISS", 6, 0, 0, 0))
						{
							iLocal_709 = 0;
						}
					}
				}
			}
		}
		else
		{
			if ((GlobalFunc_8315() == 0 && Local_2097 != 2) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!func_470("TM44_MLOOK"))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_MLOOK", 7, 0, 0, 0))
					{
						func_458("TM44_MLOOK", 1);
					}
				}
			}
			if (iLocal_843 >= 21)
			{
				if ((GlobalFunc_8315() == 1 && Local_2097 != 2) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!func_470("TM44_CHOPGO"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) < 30f)
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_CHOPGO", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
								func_458("TM44_CHOPGO", 1);
							}
						}
					}
					if (iLocal_843 == 21)
					{
						if (GlobalFunc_588(&iLocal_697, 10000))
						{
							if (func_484(Local_887[3 /*33*/], -1442466670))
							{
								if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_RPGRUN0", 7, 0, 0, 0))
								{
									func_458("TM44_RPGRUN0", 1);
									iLocal_697 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (!func_470("TM44_mike"))
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_mike", 6, 0, 0, 0))
						{
							func_458("TM44_mike", 1);
						}
					}
				}
			}
			else
			{
				if (!func_470("TM44_LOK"))
				{
					if (GlobalFunc_8315() == 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_LOK", 6, 0, 0, 0))
						{
							func_458("TM44_LOK", 1);
						}
					}
				}
				else if (!func_470("TM44_GOTIT"))
				{
					if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_GOTIT", 6, 0, 0, 0))
						{
							func_458("TM44_GOTIT", 1);
						}
					}
				}
				if (!func_470("TM44_BANG"))
				{
					if (GlobalFunc_8315() == 1)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1648, 1), ENTITY::GET_ENTITY_COORDS(Local_887[3 /*33*/], 1), 1) < 50f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) < 30f)
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_BANG", 6, 0, 0, 0))
							{
								func_458("TM44_BANG", 1);
							}
						}
					}
				}
			}
			if (!func_470("TM44_CHOPSWM"))
			{
				if (GlobalFunc_8315() == 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) < 35f)
					{
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_691) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_691) < 0.5f) || ENTITY::IS_ENTITY_AT_COORD(Local_1648, Local_741, 4f, 4f, 2.5f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_CHOPSWM", 7, 0, 0, 0))
							{
								func_458("TM44_CHOPSWM", 1);
							}
						}
					}
				}
			}
			if (GlobalFunc_8315() == 1)
			{
				if (!func_470("TM44_COLD"))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_COLD", 7, 0, 0, 0))
							{
								func_458("TM44_COLD", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_470("TM44_FRK0"))
	{
		if (GlobalFunc_8315() == 0)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_2019[1]))
			{
				if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
				{
					fVar1 = 0f;
					fVar2 = 0f;
					GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), &fVar1, &fVar2);
					if (MISC::ABSF((fVar1 - 0.5f)) < 0.05f)
					{
						if (MISC::ABSF((fVar2 - 0.5f)) < 0.05f)
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_FRK0", 7, 0, 0, 0))
							{
								func_458("TM44_FRK0", 1);
							}
						}
					}
				}
			}
		}
	}
	if (GlobalFunc_8315() == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1020 - 1))
		{
			if (Local_1020[iVar0 /*33*/].f_27)
			{
				if (PED::IS_PED_INJURED(Local_1020[iVar0 /*33*/]))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_AML", 6, 0, 0, 0))
					{
						GlobalFunc_553(175);
						Local_1020[iVar0 /*33*/].f_27 = 0;
					}
				}
			}
			iVar0++;
		}
	}
}




void func_834()//Position - 0x7BDB7
{
	iLocal_718 = iLocal_718;
	if (GlobalFunc_588(&iLocal_718, 15000))
	{
		if (!GlobalFunc_5172(&Local_2282, 0))
		{
			fLocal_733 = func_836(Local_887[3 /*33*/]);
			fLocal_734 = func_835(Local_887[3 /*33*/]);
			if (MISC::ABSF(fLocal_733) > MISC::ABSF(fLocal_734))
			{
				if (MISC::ABSF(fLocal_733) > 10f)
				{
					if (fLocal_733 > 0f)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_LEFT", 7, 0, 0, 0))
						{
							iLocal_718 = MISC::GET_GAME_TIMER();
						}
					}
					else if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_RIGHT", 7, 0, 0, 0))
					{
						iLocal_718 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (MISC::ABSF(fLocal_734) > 10f)
			{
				if (fLocal_734 > 0f)
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_UP", 7, 0, 0, 0))
					{
						iLocal_718 = MISC::GET_GAME_TIMER();
					}
				}
				else if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_DOWN", 7, 0, 0, 0))
				{
					iLocal_718 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

float func_835(int iParam0)//Position - 0x7BEBF
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - CAM::GET_FINAL_RENDERED_CAM_COORD() };
	Var3 = { GlobalFunc_107(Var0) };
	return (MISC::ATAN2(Var3.f_2, SYSTEM::VMAG(Var3.x, Var3.f_1, 0f)) - Var6.x);
}

float func_836(int iParam0)//Position - 0x7BF02
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1) - Var4.f_2);
	if (fVar3 > 180f)
	{
		fVar3 = (fVar3 - 360f);
	}
	if (fVar3 < -180f)
	{
		fVar3 = (fVar3 + 360f);
	}
	return fVar3;
}

int func_837(int iParam0, int iParam1)//Position - 0x7BF60
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*33*/])->f_27)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*33*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_838()//Position - 0x7BFAB
{
	if (func_825(&Local_887, 0) || func_837(&Local_887, 3))
	{
		GlobalFunc_661(Local_887[3 /*33*/], &(Local_887[3 /*33*/].f_3), -1, 0, 1, 0, -1082130432, 0);
		GlobalFunc_574(180, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
		{
			func_751();
		}
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iLocal_788 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(Local_1774))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1774))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1774);
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EXL2_RPG_DEAD");
			if (GlobalFunc_8315() == 1)
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			}
			else
			{
				PED::SET_PED_USING_ACTION_MODE(uLocal_2019[1], 0, -1, 0);
			}
			if (GlobalFunc_8315() == 1 || (GlobalFunc_8315() == 0 && Local_2097 == 2))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
				}
				TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
				TASK::TASK_HELI_MISSION(0, Local_1714, 0, 0, -1562.291f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1082130432, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_2019[2], uLocal_883);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
			return 1;
		}
	}
	switch (iLocal_651)
	{
		case 0:
			if (func_837(&Local_887, 1))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
				iLocal_651++;
			}
			break;
		
		case 1:
			if (func_837(&Local_887, 2))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_887[0 /*33*/]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_887[1 /*33*/]));
				if (func_767())
				{
					Local_887[3 /*33*/].f_11 = { -1603.75f, 4513.559f, 15.1901f };
					Local_887[3 /*33*/].f_20 = 227.6631f;
					Local_2370 = { -1595.697f, 4510.317f, 20.18878f };
				}
				func_463(&(Local_887[3 /*33*/]));
				ENTITY::SET_ENTITY_PROOFS(Local_887[3 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_887[3 /*33*/], 0);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_887[3 /*33*/], iLocal_705);
				HUD::REMOVE_BLIP(&(Local_887[3 /*33*/].f_2));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_887[3 /*33*/], 1);
				if (GlobalFunc_8315() == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(Local_887[3 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
				}
				GlobalFunc_173(&uLocal_2114, 6, Local_887[3 /*33*/], "oneil", 0, 1);
				iLocal_651++;
			}
			break;
		
		case 2:
			if (iLocal_627)
			{
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_887[3 /*33*/], 1);
				ENTITY::SET_ENTITY_PROOFS(Local_887[3 /*33*/], 0, 0, 0, 0, 0, 0, 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[1]);
				ENTITY::SET_ENTITY_COORDS(uLocal_2019[1], -1683.497f, 4454.595f, 1.566f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_2019[1], 239.1512f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1648);
				ENTITY::SET_ENTITY_COORDS(Local_1648, -1677.731f, 4454.212f, 1.2653f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1648, 257.7928f);
				iLocal_684 = 200;
				AUDIO::TRIGGER_MUSIC_EVENT("EXL2_ON_FOOT");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_RPG_CUTSCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("EXILE_2_RPG_CUTSCENE");
				}
				func_728();
				func_773(&iLocal_3621);
				RECORDING::_0x48621C9FCA3EBD28(3);
				iLocal_651++;
			}
			break;
		
		case 3:
			if (!func_773(&iLocal_3621))
			{
				if (Local_2063.f_18)
				{
					if (!Local_2063.f_19)
					{
						if (func_693())
						{
							switch (GlobalFunc_8315())
							{
								case 1:
									STREAMING::CLEAR_FOCUS();
									PED::SET_PED_CONFIG_FLAG(uLocal_2019[0], 208, 1);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_2019[0], Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
									PED::SET_PED_MOVEMENT_CLIPSET(uLocal_2019[0], "move_ped_crouched", 1048576000);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(uLocal_2019[0], "Wpn_AssaultRifle_WeaponHoldingCrouched");
									PED::SET_PED_STRAFE_CLIPSET(uLocal_2019[0], "move_ped_crouched_strafing");
									PED::SET_PED_DESIRED_HEADING(uLocal_2019[0], ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
									PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), 1);
									iLocal_693 = 100;
									break;
							}
							Local_2063.f_19 = 1;
						}
					}
				}
			}
			else
			{
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 183);
				switch (GlobalFunc_8315())
				{
					case 1:
						GlobalFunc_7632(0);
						TASK::TASK_AIM_GUN_AT_COORD(uLocal_2019[0], -1531.6f, 4376.7f, 68f, -1, 0, 0);
						iLocal_657 = 0;
						if (Local_2097 == 1)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							CAM::_0x661B5C8654ADD825(Local_2097.f_4, 1);
							func_689(&Local_2097, &uLocal_2019, 1, 0, 3000);
							GlobalFunc_574(179, 0);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1648))
							{
							}
							PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
							PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), 1);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							func_15(&Local_2097, &uLocal_2019, 0, 1, 1, 1, 0, 3000);
							GlobalFunc_571(0, -1);
						}
						break;
				}
				Local_2063.f_18 = 0;
				Local_2063.f_19 = 0;
				func_685();
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_651++;
			}
			break;
		
		case 4:
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1 && !Local_2063.f_16)
			{
				STREAMING::REMOVE_ANIM_DICT(sLocal_7363);
				iLocal_788 = 1;
				iLocal_693 = 100;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1774, 0))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_1774, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_1648.f_2))
				{
					Local_1648.f_2 = GlobalFunc_6797(Local_1648, 0, 145);
				}
				GlobalFunc_2511(&uLocal_2019, 0, 1, 1);
				AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
				GlobalFunc_Checkpoint2(4, "shooting the rpg enemy", 0, 0, 0, 1);
				iLocal_651++;
			}
			break;
		
		case 5:
			break;
	}
	return 0;
}


void func_840()//Position - 0x7C563
{
	int iVar0;
	
	if (iLocal_2334 == 0)
	{
		PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 1);
		func_845();
		if (!STREAMING::IS_STREAMVOL_ACTIVE())
		{
		}
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		if (func_844())
		{
			if (!GlobalFunc_5172(&Local_2282, 0))
			{
				if (func_635(1, 1, 1))
				{
					PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, 0, 1, 1, 1);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10000f, 1, 0, 0, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					GlobalFunc_729(&uLocal_2019, 0, 0);
					GlobalFunc_9134(&uLocal_2019, 0);
					GlobalFunc_10991(&uLocal_2019, 1, 0, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
					PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1714, 0, Local_850, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), -1, 1, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), joaat("component_at_scope_max"));
					PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 1048576000);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
					PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					func_487(&uLocal_2019, 0, 9);
					func_487(&uLocal_2019, 0, 12);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[1]);
					ENTITY::SET_ENTITY_COORDS(uLocal_2019[1], -1683.497f, 4454.595f, 1.566f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_2019[1], 239.1512f);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_2019[1], 1);
					TASK::TASK_PLAY_ANIM(uLocal_2019[1], "missexile2", "FranklinWaveToHelicopter", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[1], 0, 0);
					iLocal_693 = 999;
					if (ENTITY::DOES_ENTITY_EXIST(Local_1648))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1648);
						ENTITY::SET_ENTITY_COORDS(Local_1648, -1679.821f, 4455.988f, 1.2653f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1648, 244.1821f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1648, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "fra_0_ig_1_chop_growl", 1000f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 4f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_1648, uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1648, 0, 0);
						iLocal_684 = 200;
					}
					GlobalFunc_2875(&Local_1714);
					VEHICLE::SET_VEHICLE_EXTRA(Local_1714, 12, true);
					ENTITY::SET_ENTITY_PROOFS(Local_1714, 0, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1714, 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
					ENTITY::SET_ENTITY_VISIBLE(Local_1714, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1714, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, Local_1714.f_13, sLocal_846, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1714, 7000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[2]);
					PED::SET_PED_INTO_VEHICLE(uLocal_2019[2], Local_1714, -1);
					iVar0 = 1;
					while (iVar0 <= (Local_1020 - 1))
					{
						if (((iVar0 != 7 && iVar0 != 14) && iVar0 != 15) && iVar0 != 16)
						{
							func_449(&(Local_1020[iVar0 /*33*/]));
						}
						iVar0++;
					}
					Local_1774 = VEHICLE::CREATE_VEHICLE(Local_1774.f_1, Local_1774.f_3, Local_1774.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1774, 3);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1774);
					ENTITY::SET_ENTITY_PROOFS(Local_1774, 1, 1, 1, 1, 1, 0, 0, 0);
					iLocal_874 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1687.75f, 4457.777f, 1.732926f, 11.10459f, -1.886935f, -116.4438f, 30.96153f, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_874, -1687.75f, 4457.777f, 1.732926f, 15.72616f, -1.886931f, -118.3363f, 18.31165f, 2000, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
					RECORDING::_0x48621C9FCA3EBD28(3);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FLY_HELI"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_FLY_HELI");
					}
					AUDIO::START_AUDIO_SCENE("EXILE_2_HELI_IN_POSITION_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_HELI_CS");
					iLocal_652 = MISC::GET_GAME_TIMER();
					iLocal_785 = 0;
					iLocal_833 = 0;
					iLocal_2334 = 1;
				}
			}
		}
	}
	if (iLocal_2334 == 1)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		GlobalFunc_4937(1, 0);
		STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		switch (iLocal_833)
		{
			case 0:
				if (GlobalFunc_10630(&uLocal_2114, "TM44AUD", "TM44_SCENE", "TM44_SCENE_1", 7, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
					TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -1616.5f, 4424.6f, 9.4f, -1, 1, 0);
					iLocal_833++;
				}
				break;
			
			case 1:
				if (!GlobalFunc_5172(&Local_2282, 0))
				{
					CAM::DESTROY_CAM(iLocal_874, 0);
					iLocal_874 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1482.602f, 4334.974f, 98.81744f, 21.26448f, -0.005575f, -157.2007f, 39.26931f, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_874, -1482.611f, 4334.993f, 98.71745f, 20.5587f, -0.005577f, -158.6322f, 39.26931f, 1000, 1, 1, 2);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1714))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1714);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1714, 4, sLocal_846, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1714, 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1714);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1714, 1);
					TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -1616.5f, 4424.6f, 9.4f, -1, 1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 0, 0);
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 401, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-41f, 1065353216);
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_833++;
				}
				break;
			
			case 2:
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_874))
				{
					iLocal_2334 = 2;
				}
				break;
		}
		if (GlobalFunc_75())
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				iLocal_2334 = 3;
			}
		}
	}
	if (iLocal_2334 == 2)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_HELI_IN_POSITION_CUTSCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("EXILE_2_HELI_IN_POSITION_CUTSCENE");
		}
		GlobalFunc_5917(&Local_1714);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_2019[1], 0);
		GlobalFunc_2518(&uLocal_2019, 1, 1);
		GlobalFunc_729(&uLocal_2019, 2, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 1);
		CAM::DISABLE_AIM_CAM_THIS_UPDATE();
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_2334 = 0;
		iLocal_2333 = 7;
	}
	if (iLocal_2334 == 3)
	{
		GlobalFunc_2879();
		GlobalFunc_4935();
		if (GlobalFunc_8315() != 0)
		{
			GlobalFunc_9134(&uLocal_2019, 0);
			GlobalFunc_10991(&uLocal_2019, 1, 0, 0);
		}
		iLocal_2334 = 2;
	}
}




int func_844()//Position - 0x7CCC5
{
	if ((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_2017) && STREAMING::HAS_MODEL_LOADED(iLocal_2018)) && STREAMING::HAS_MODEL_LOADED(iLocal_2016)) && STREAMING::HAS_MODEL_LOADED(Local_887[0 /*33*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1804.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1714.f_13, sLocal_846)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_846)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_846)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1774.f_13, "lkexile2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_3")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_7363)) && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) && STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_heavysniper"))) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_heavysniper")))) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0)) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 1;
	}
	return 0;
}

void func_845()//Position - 0x7CE4D
{
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(Local_887[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(Local_1804.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1714.f_13, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_846);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1774.f_13, "lkexile2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_3");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT(sLocal_7363);
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_heavysniper"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_heavysniper")));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", 0);
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_846()//Position - 0x7CF4F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_2334 == 0)
	{
		func_874();
		if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_2017) && STREAMING::HAS_MODEL_LOADED(iLocal_2016)) && STREAMING::HAS_MODEL_LOADED(Local_1759.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1714.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1714.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexile2")) && AUDIO::PREPARE_MUSIC_EVENT("EXL2_SWITCH_START"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1744))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1744, 0);
			}
			MISC::CLEAR_AREA(1554.667f, 3743.115f, 33.5237f, 100f, 1, 0, 0, 0);
			GlobalFunc_200(&uLocal_2114, 2);
			func_570(&Local_1759, 2, 1554.667f, 3743.115f, 33.5237f, 212.649f, 1, 0);
			VEHICLE::SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Local_1759, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1759, 2, "lkexile2", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1759, 5000f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1759, 1);
			VEHICLE::SET_PLAYBACK_SPEED(Local_1759, 0f);
			ENTITY::SET_ENTITY_VISIBLE(Local_1759, 0);
			func_40(&(uLocal_2019[0]), 0, Local_1759, 0, 1, 0, 0);
			func_456(uLocal_2019[0]);
			func_455(&(uLocal_2019[0]), 1);
			GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_2019[0], 0);
			func_40(&(uLocal_2019[2]), 2, Local_1759, -1, 1, 0, 0);
			func_456(uLocal_2019[2]);
			func_455(&(uLocal_2019[2]), 1);
			GlobalFunc_11267(uLocal_2019[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_173(&uLocal_2114, 2, uLocal_2019[2], "trevor", 0, 1);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_2019[2], 0);
			iLocal_766 = Local_1759;
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PED::SET_CREATE_RANDOM_COPS(1);
			if (HUD::DOES_BLIP_EXIST(Local_1648.f_2))
			{
				HUD::REMOVE_BLIP(&(Local_1648.f_2));
			}
			GlobalFunc_9134(&uLocal_2019, 2);
			Local_2063.f_12 = uLocal_2019[2];
			iLocal_681 = 1;
			iLocal_2379 = 4;
			MISC::CLEAR_AREA(1768.113f, 3240.054f, 41.0869f, 10f, 1, 0, 0, 0);
			GlobalFunc_8032(20, 1702.948f, 3272.022f, 40.1539f, 247.3247f);
			GlobalFunc_7695(20);
			GlobalFunc_76(20);
			Local_1714 = VEHICLE::CREATE_VEHICLE(Local_1714.f_1, 1768.113f, 3240.054f, 41.0869f, 42.5289f, 1, 1);
			GlobalFunc_534(Local_1714, 0);
			VEHICLE::SET_VEHICLE_LIVERY(Local_1714, 1);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1714, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1714, 1);
			VEHICLE::SET_VEHICLE_COLOURS(Local_1714, 34, 34);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1714, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1714);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1714, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("EXL2_SWITCH_START");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_GO_TO_CRASH_SITE"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_GO_TO_CRASH_SITE");
			}
			iLocal_2334 = 1;
		}
	}
	if (iLocal_2334 == 1)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			switch (GlobalFunc_8315())
			{
				case 2:
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
					switch (iLocal_696)
					{
						case 0:
							iLocal_684 = 101;
							func_868(&Local_2282, 1);
							if (GlobalFunc_10366(&Local_2282, ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 50f, 50f, 4f, 0, uLocal_2019[0], "FS_HELI_2", "FS_michael_0", 0, 1, 1, -1))
							{
								GlobalFunc_5652(&Local_2282, 0, 0);
								iLocal_696++;
							}
							break;
						
						case 1:
							func_865(Local_1714);
							func_863();
							if (!iLocal_798)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_GO_TO_HELI"))
									{
										AUDIO::STOP_AUDIO_SCENE("EXILE_2_GO_TO_HELI");
									}
									AUDIO::START_AUDIO_SCENE("EXILE_2_FLY_HELI");
									if (ENTITY::DOES_ENTITY_EXIST(Local_1759))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1759, 0))
										{
											GlobalFunc_10013(Local_1759, 1791.245f, 3242.508f, 41.5105f, 83.8551f, 24, 0);
										}
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1759.f_1);
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1714, 0);
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1714, 1);
									iLocal_798 = 1;
									RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
									GlobalFunc_Checkpoint2(2, "fly to franklin", 0, 0, 0, 1);
								}
							}
							func_851(&Local_2282, -1503.4f, 4358.3f, 155.7f, 0.1f, 0.1f, 0.1f, 0, uLocal_2019[0], Local_1714, "FS_forest_0", "FS_michael_0", "", "FS_HELI_1", 0, 1, 1, -1);
							if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
							{
								if (!func_470("EXL2_HELI_LIFT"))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
									{
										if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1714) > 2f)
										{
											AUDIO::TRIGGER_MUSIC_EVENT("EXL2_HELI_LIFT");
											func_458("EXL2_HELI_LIFT", 1);
										}
									}
								}
								if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
								{
									HUD::SET_BLIP_ROUTE(Local_2282.f_5, 0);
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.4f, 4358.3f, 155.7f, 70f, 70f, 70f, 0, 1, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), 1) < 50f)
								{
									GlobalFunc_4935();
									GlobalFunc_5652(&Local_2282, 1, 0);
									GlobalFunc_2875(&Local_1714);
									iLocal_2334 = 0;
									iLocal_2333 = 6;
									return 1;
								}
								else
								{
									HUD::GET_HUD_COLOUR(12, &uVar0, &uVar1, &uVar2, &uVar3);
									GRAPHICS::DRAW_MARKER(6, -1503.4f, 4358.3f, 155.7f, 0f, 0f, 0f, 0f, 0f, 90f, 25f, 25f, 25f, uVar0, uVar1, uVar2, 100, 1, 0, 2, 0, 0, 0, 0);
								}
							}
							break;
					}
					func_850();
					break;
				}
		}
		func_847();
		func_679();
		func_467();
	}
	if (iLocal_2334 == 2)
	{
		iLocal_2334 = 0;
		iLocal_2333 = 6;
	}
	if (iLocal_2334 == 3)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (func_635(0, 1, 1))
			{
				GlobalFunc_5652(&Local_2282, 1, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_1714, 1, 1, 1, 1, 1, 0, 0, 0);
				iLocal_2334 = 0;
				iLocal_2333 = 6;
			}
		}
	}
	return 0;
}

void func_847()//Position - 0x7D51C
{
	switch (iLocal_681)
	{
		case 0:
			if (iLocal_788)
			{
				if (GlobalFunc_10061(&uLocal_2019, 1, 1))
				{
					switch (GlobalFunc_8315())
					{
						case 2:
							if (GlobalFunc_751(&uLocal_2019, 1))
							{
								GlobalFunc_4935();
								Local_2063.f_12 = uLocal_2019[1];
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(1);
								GlobalFunc_5652(&Local_2282, 1, 0);
								ENTITY::SET_ENTITY_PROOFS(Local_1714, 1, 1, 1, 1, 1, 0, 0, 0);
								iLocal_766 = Local_1759;
								iLocal_681++;
							}
							break;
						
						case 1:
							if (GlobalFunc_751(&uLocal_2019, 2))
							{
								if (HUD::DOES_BLIP_EXIST(Local_1648.f_2))
								{
									HUD::REMOVE_BLIP(&(Local_1648.f_2));
								}
								Local_2063.f_12 = uLocal_2019[2];
								HUD::CLEAR_PRINTS();
								iLocal_766 = Local_1759;
								iLocal_681++;
							}
							break;
						}
					}
			}
			break;
		
		case 1:
			if (!func_848(&iLocal_2380))
			{
			}
			else
			{
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 183);
				switch (GlobalFunc_8315())
				{
					case 2:
						GlobalFunc_2518(&uLocal_2019, 1, 1);
						ENTITY::SET_ENTITY_PROOFS(Local_1714, 0, 0, 0, 0, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_1759))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1759, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1759))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1759);
								}
							}
						}
						iLocal_788 = 0;
						iLocal_681 = 0;
						AUDIO::START_AUDIO_SCENE("EXILE_2_GO_TO_HELI");
						AUDIO::TRIGGER_MUSIC_EVENT("EXL2_TRUCK");
						STREAMING::NEW_LOAD_SCENE_STOP();
						func_850();
						break;
					
					case 1:
						GlobalFunc_2518(&uLocal_2019, 2, 1);
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1714, 1);
						}
						iLocal_681 = 0;
						break;
					}
			}
			break;
	}
}

int func_848(int iParam0)//Position - 0x7D6A9
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_2379)
	{
		case 0:
			break;
		
		case 4:
			GlobalFunc_9134(&uLocal_2019, 2);
			iLocal_2379 = 5;
		
		case 5:
			if (func_696(&Local_2063, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_2063.f_18)
				{
					if (!Local_2063.f_19)
					{
						if (GlobalFunc_10991(&uLocal_2019, 1, 0, 0))
						{
							switch (GlobalFunc_8315())
							{
								case 2:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_766, 0))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_766) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[0], iLocal_766))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[1]);
											ENTITY::SET_ENTITY_COORDS(uLocal_2019[1], -1683.497f, 4454.595f, 1.566f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(uLocal_2019[1], 239.1512f);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1648);
											ENTITY::SET_ENTITY_COORDS(Local_1648, -1679.821f, 4455.988f, 1.2653f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(Local_1648, 114.6932f);
											PED::SET_PED_CAN_RAGDOLL(Local_1648, 0);
										}
									}
									break;
								
								case 1:
									break;
							}
							Local_2063.f_19 = 1;
						}
					}
				}
				if (!iLocal_799)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						iVar1 = STREAMING::GET_PLAYER_SWITCH_STATE();
						if (iVar1 >= 9)
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1759, 1), 50f, 1, 0, 0, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0, 0, 0, 0, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1759))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1759, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1759, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1759)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1759, 1);
								iLocal_799 = 1;
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1759, 2, "lkexile2", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1759, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1759, 1);
								iLocal_799 = 1;
							}
							Local_2063.f_17 = 1;
							func_696(&Local_2063, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0);
							iLocal_2379 = 6;
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
				else
				{
					return 0;
				}
			}
		
		case 6:
			CAM::DESTROY_ALL_CAMS(0);
			func_849(iParam0, Local_1759);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_1759, 1);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_2019[0], 1);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			func_792(iParam0);
			CAM::SET_CAM_ACTIVE(iParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_7356 = 0;
			iLocal_2379 = 7;
		
		case 7:
			if (CAM::IS_CAM_ACTIVE(iParam0->f_1))
			{
				if (iVar0 >= 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7345);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7345, 1065353216);
				}
				if (!iLocal_643)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= 0.2f)
					{
						iLocal_643 = 0;
					}
				}
				iVar0 = func_778(iParam0);
				if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= 1f)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						GlobalFunc_669(&uLocal_2338, Local_1759, 2, 1.75f, 1000, 1000, 700, 700, 1045220557);
						GlobalFunc_668(&uLocal_2338, 5f, 0f, -5f);
						func_774(&uLocal_2338, 1, 1, 1, 0, 0, 0);
					}
					iLocal_2379 = 9;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 8:
			if (CAM::DOES_CAM_EXIST(iParam0->f_1))
			{
				CAM::DESTROY_CAM(iParam0->f_1, 0);
				CAM::DESTROY_ALL_CAMS(0);
			}
			iLocal_2379 = 9;
		
		case 9:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (func_774(&uLocal_2338, 1, 1, 1, 0, 0, 0))
				{
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(iParam0->f_1))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_1, 0);
						CAM::DESTROY_CAM(iParam0->f_1, 0);
					}
					CAM::DESTROY_ALL_CAMS(0);
					if (!iLocal_7356)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_RADAR(1);
						HUD::DISPLAY_HUD(1);
						iLocal_7356 = 1;
					}
					iLocal_2379 = 0;
					return 1;
				}
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				if (CAM::DOES_CAM_EXIST(iParam0->f_1))
				{
					CAM::SET_CAM_ACTIVE(iParam0->f_1, 0);
					CAM::DESTROY_CAM(iParam0->f_1, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				if (!iLocal_7356)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					iLocal_7356 = 1;
				}
				iLocal_2379 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_849(var uParam0, int iParam1)//Position - 0x7DACA
{
	if (!*uParam0)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { 6.8668f, -11.168f, 28.3491f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { -72.7517f, -0.0281f, 35.9953f };
			uParam0->f_10[0 /*57*/].f_18 = 0;
			uParam0->f_10[0 /*57*/].f_19 = 0;
			uParam0->f_10[0 /*57*/].f_20 = 0;
			uParam0->f_10[0 /*57*/].f_21 = 60f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 1f;
			uParam0->f_10[0 /*57*/].f_53 = 2;
			uParam0->f_10[0 /*57*/].f_23 = 0.2f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 0;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1500;
			uParam0->f_10[1 /*57*/].f_6 = { 5.7354f, -9.3271f, 25.0715f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { -74.566f, 0.2104f, 32.3517f };
			uParam0->f_10[1 /*57*/].f_18 = 0;
			uParam0->f_10[1 /*57*/].f_19 = 0;
			uParam0->f_10[1 /*57*/].f_20 = 0;
			uParam0->f_10[1 /*57*/].f_21 = 60f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 1f;
			uParam0->f_10[1 /*57*/].f_53 = 2;
			uParam0->f_10[1 /*57*/].f_23 = 0.2f;
			uParam0->f_10[1 /*57*/].f_28 = 0;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 0;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 500;
			uParam0->f_10[2 /*57*/].f_6 = { 5.1772f, -7.9185f, 7.702f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { -0.1686f, 0.4822f, -0.5376f };
			uParam0->f_10[2 /*57*/].f_18 = 1;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 45f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 2;
			uParam0->f_10[2 /*57*/].f_23 = 0.2f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 1f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 0;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 1f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_2 = 0;
			uParam0->f_10[3 /*57*/].f_3 = -1;
			uParam0->f_10[3 /*57*/].f_4 = 0;
			uParam0->f_10[3 /*57*/].f_5 = 400;
			uParam0->f_10[3 /*57*/].f_6 = { 3.7694f, -5.7515f, 1.8344f };
			uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_12 = 0f;
			uParam0->f_10[3 /*57*/].f_16 = 0f;
			uParam0->f_10[3 /*57*/].f_17 = 0;
			uParam0->f_10[3 /*57*/].f_9 = { 0.0332f, 0.1615f, -0.469f };
			uParam0->f_10[3 /*57*/].f_18 = 1;
			uParam0->f_10[3 /*57*/].f_19 = 0;
			uParam0->f_10[3 /*57*/].f_20 = 0;
			uParam0->f_10[3 /*57*/].f_21 = 40f;
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_27 = 0;
			uParam0->f_10[3 /*57*/].f_50 = 0;
			uParam0->f_10[3 /*57*/].f_51 = 0f;
			uParam0->f_10[3 /*57*/].f_52 = 0f;
			uParam0->f_10[3 /*57*/].f_22 = 0f;
			uParam0->f_10[3 /*57*/].f_53 = 2;
			uParam0->f_10[3 /*57*/].f_23 = 0.2f;
			uParam0->f_10[3 /*57*/].f_28 = 0;
			uParam0->f_10[3 /*57*/].f_29 = 0f;
			uParam0->f_10[3 /*57*/].f_32 = 0.4f;
			uParam0->f_10[3 /*57*/].f_30 = 0;
			uParam0->f_10[3 /*57*/].f_31 = 0;
			uParam0->f_10[3 /*57*/].f_33 = 1f;
			uParam0->f_10[3 /*57*/].f_34 = 0;
			uParam0->f_10[3 /*57*/].f_35 = 1f;
			uParam0->f_10[3 /*57*/].f_36 = 0;
			uParam0->f_10[3 /*57*/].f_37 = 0;
			uParam0->f_10[3 /*57*/].f_39 = 0f;
			uParam0->f_10[3 /*57*/].f_40 = 0f;
			uParam0->f_10[3 /*57*/].f_41 = 0;
			uParam0->f_10[3 /*57*/].f_42 = 0;
			uParam0->f_10[3 /*57*/].f_43 = 0;
			uParam0->f_10[3 /*57*/].f_38 = 0f;
			uParam0->f_10[3 /*57*/].f_45 = 0;
			uParam0->f_10[3 /*57*/].f_46 = 0;
			uParam0->f_10[3 /*57*/].f_47 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[4 /*57*/].f_2 = 0;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 800;
			uParam0->f_10[4 /*57*/].f_6 = { 2.7853f, -4.2615f, 1.0039f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { -0.0299f, 0.0337f, -0.1757f };
			uParam0->f_10[4 /*57*/].f_18 = 1;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 40f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 0f;
			uParam0->f_10[4 /*57*/].f_53 = 2;
			uParam0->f_10[4 /*57*/].f_23 = 0.2f;
			uParam0->f_10[4 /*57*/].f_28 = 0;
			uParam0->f_10[4 /*57*/].f_29 = 0f;
			uParam0->f_10[4 /*57*/].f_32 = 0.958f;
			uParam0->f_10[4 /*57*/].f_30 = 0;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 1f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 0;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 1200;
			uParam0->f_10[5 /*57*/].f_6 = { 2.653f, -4.0735f, 0.98f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 0.0424f, -0.0112f, 0.0879f };
			uParam0->f_10[5 /*57*/].f_18 = 1;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 40f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 2;
			uParam0->f_10[5 /*57*/].f_23 = 0.2f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 1f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_1217 = 6;
			uParam0->f_1218 = 0;
			uParam0->f_1233 = -1f;
			uParam0->f_1234 = -1f;
			uParam0->f_2 = 1;
			uParam0->f_3 = 0;
			uParam0->f_1219 = 0;
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { 6.8668f, -11.168f, 28.3491f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { -72.7517f, -0.0281f, 35.9953f };
			uParam0->f_10[0 /*57*/].f_18 = 0;
			uParam0->f_10[0 /*57*/].f_19 = 0;
			uParam0->f_10[0 /*57*/].f_20 = 0;
			uParam0->f_10[0 /*57*/].f_21 = 60f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 1f;
			uParam0->f_10[0 /*57*/].f_53 = 2;
			uParam0->f_10[0 /*57*/].f_23 = 0.2f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 0;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1500;
			uParam0->f_10[1 /*57*/].f_6 = { 5.7354f, -9.3271f, 25.0715f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { -74.566f, 0.2104f, 32.3517f };
			uParam0->f_10[1 /*57*/].f_18 = 0;
			uParam0->f_10[1 /*57*/].f_19 = 0;
			uParam0->f_10[1 /*57*/].f_20 = 0;
			uParam0->f_10[1 /*57*/].f_21 = 60f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 1f;
			uParam0->f_10[1 /*57*/].f_53 = 2;
			uParam0->f_10[1 /*57*/].f_23 = 0.2f;
			uParam0->f_10[1 /*57*/].f_28 = 0;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 0;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 500;
			uParam0->f_10[2 /*57*/].f_6 = { 5.1772f, -7.9185f, 7.702f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { -0.1686f, 0.4822f, -0.5376f };
			uParam0->f_10[2 /*57*/].f_18 = 1;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 40f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 2;
			uParam0->f_10[2 /*57*/].f_23 = 0.2f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 1f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 0;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 1f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_2 = 0;
			uParam0->f_10[3 /*57*/].f_3 = -1;
			uParam0->f_10[3 /*57*/].f_4 = 0;
			uParam0->f_10[3 /*57*/].f_5 = 400;
			uParam0->f_10[3 /*57*/].f_6 = { 3.7694f, -5.7515f, 1.8344f };
			uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_12 = 0f;
			uParam0->f_10[3 /*57*/].f_16 = 0f;
			uParam0->f_10[3 /*57*/].f_17 = 0;
			uParam0->f_10[3 /*57*/].f_9 = { 0.0332f, 0.1615f, -0.469f };
			uParam0->f_10[3 /*57*/].f_18 = 1;
			uParam0->f_10[3 /*57*/].f_19 = 0;
			uParam0->f_10[3 /*57*/].f_20 = 0;
			uParam0->f_10[3 /*57*/].f_21 = 40f;
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_27 = 0;
			uParam0->f_10[3 /*57*/].f_50 = 0;
			uParam0->f_10[3 /*57*/].f_51 = 0f;
			uParam0->f_10[3 /*57*/].f_52 = 0f;
			uParam0->f_10[3 /*57*/].f_22 = 0f;
			uParam0->f_10[3 /*57*/].f_53 = 2;
			uParam0->f_10[3 /*57*/].f_23 = 0.2f;
			uParam0->f_10[3 /*57*/].f_28 = 0;
			uParam0->f_10[3 /*57*/].f_29 = 0f;
			uParam0->f_10[3 /*57*/].f_32 = 0.4f;
			uParam0->f_10[3 /*57*/].f_30 = 0;
			uParam0->f_10[3 /*57*/].f_31 = 0;
			uParam0->f_10[3 /*57*/].f_33 = 1f;
			uParam0->f_10[3 /*57*/].f_34 = 0;
			uParam0->f_10[3 /*57*/].f_35 = 1f;
			uParam0->f_10[3 /*57*/].f_36 = 0;
			uParam0->f_10[3 /*57*/].f_37 = 0;
			uParam0->f_10[3 /*57*/].f_39 = 0f;
			uParam0->f_10[3 /*57*/].f_40 = 0f;
			uParam0->f_10[3 /*57*/].f_41 = 0;
			uParam0->f_10[3 /*57*/].f_42 = 0;
			uParam0->f_10[3 /*57*/].f_43 = 0;
			uParam0->f_10[3 /*57*/].f_38 = 0f;
			uParam0->f_10[3 /*57*/].f_45 = 0;
			uParam0->f_10[3 /*57*/].f_46 = 0;
			uParam0->f_10[3 /*57*/].f_47 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[4 /*57*/].f_2 = 0;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 800;
			uParam0->f_10[4 /*57*/].f_6 = { 2.7853f, -4.2615f, 1.0039f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { -0.0299f, 0.0337f, -0.1757f };
			uParam0->f_10[4 /*57*/].f_18 = 1;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 40f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 0f;
			uParam0->f_10[4 /*57*/].f_53 = 2;
			uParam0->f_10[4 /*57*/].f_23 = 0.2f;
			uParam0->f_10[4 /*57*/].f_28 = 0;
			uParam0->f_10[4 /*57*/].f_29 = 0f;
			uParam0->f_10[4 /*57*/].f_32 = 0.958f;
			uParam0->f_10[4 /*57*/].f_30 = 0;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 1f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 0;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 1200;
			uParam0->f_10[5 /*57*/].f_6 = { 2.653f, -4.0735f, 0.98f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 0.0424f, -0.0112f, 0.0879f };
			uParam0->f_10[5 /*57*/].f_18 = 1;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 40f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 2;
			uParam0->f_10[5 /*57*/].f_23 = 0.2f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 1f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[6 /*57*/].f_54 = 1;
			uParam0->f_10[7 /*57*/].f_2 = 0;
			uParam0->f_10[7 /*57*/].f_3 = -1;
			uParam0->f_10[7 /*57*/].f_4 = 0;
			uParam0->f_10[7 /*57*/].f_5 = 0;
			uParam0->f_10[7 /*57*/].f_6 = { -4.481f, 7.8828f, 1.7302f };
			uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[7 /*57*/].f_12 = 0f;
			uParam0->f_10[7 /*57*/].f_16 = 0f;
			uParam0->f_10[7 /*57*/].f_17 = 0;
			uParam0->f_10[7 /*57*/].f_9 = { -0.4777f, 0.0964f, 0.7823f };
			uParam0->f_10[7 /*57*/].f_18 = 1;
			uParam0->f_10[7 /*57*/].f_19 = 0;
			uParam0->f_10[7 /*57*/].f_20 = 0;
			uParam0->f_10[7 /*57*/].f_21 = 40f;
			uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[7 /*57*/].f_27 = 0;
			uParam0->f_10[7 /*57*/].f_50 = 0;
			uParam0->f_10[7 /*57*/].f_51 = 0f;
			uParam0->f_10[7 /*57*/].f_52 = 0f;
			uParam0->f_10[7 /*57*/].f_22 = 0f;
			uParam0->f_10[7 /*57*/].f_53 = 0;
			uParam0->f_10[7 /*57*/].f_23 = 0f;
			uParam0->f_10[7 /*57*/].f_28 = 0;
			uParam0->f_10[7 /*57*/].f_29 = 0f;
			uParam0->f_10[7 /*57*/].f_32 = 0f;
			uParam0->f_10[7 /*57*/].f_30 = 0;
			uParam0->f_10[7 /*57*/].f_31 = 0;
			uParam0->f_10[7 /*57*/].f_33 = 1f;
			uParam0->f_10[7 /*57*/].f_34 = 0;
			uParam0->f_10[7 /*57*/].f_35 = 0f;
			uParam0->f_10[7 /*57*/].f_36 = 0;
			uParam0->f_10[7 /*57*/].f_37 = 0;
			uParam0->f_10[7 /*57*/].f_39 = 0f;
			uParam0->f_10[7 /*57*/].f_40 = 0f;
			uParam0->f_10[7 /*57*/].f_41 = 0;
			uParam0->f_10[7 /*57*/].f_42 = 0;
			uParam0->f_10[7 /*57*/].f_43 = 0;
			uParam0->f_10[7 /*57*/].f_38 = 0f;
			uParam0->f_10[7 /*57*/].f_45 = 0;
			uParam0->f_10[7 /*57*/].f_46 = 0;
			uParam0->f_10[7 /*57*/].f_47 = 0f;
			uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
			uParam0->f_1217 = 8;
			uParam0->f_1218 = 0;
			uParam0->f_1233 = -1f;
			uParam0->f_1234 = -1f;
			uParam0->f_2 = 1;
			uParam0->f_3 = 1;
			uParam0->f_1219 = 1500;
		}
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile2_FranklinToTruckOutro.txt";
		uParam0->f_1225 = "CameraInfo_Exile2_FranklinToTruckOutro.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = iParam1;
}

void func_850()//Position - 0x7F407
{
	switch (iLocal_695)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_TSWITCH", 7, 0, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(2f, 5f, 4);
				iLocal_695++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_2282, 1))
			{
				if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_BANT1", 6, 0, 0, 0))
				{
					iLocal_695++;
				}
			}
			break;
		
		case 2:
			if (iLocal_696 > 0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_2282))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) < 45f)
					{
						if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_CHOPPER", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							iLocal_695++;
						}
					}
				}
			}
			else
			{
				func_512(Local_2282.f_5, 1);
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
			{
				if (!GlobalFunc_5172(&Local_2282, 1))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_BANT2", 6, 0, 0, 0))
					{
						iLocal_695++;
					}
				}
			}
			break;
		
		case 4:
			if (func_512(Local_2282.f_5, 1))
			{
				iLocal_695++;
			}
			break;
		
		case 5:
			break;
	}
}

int func_851(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x7F552
{
	return func_640(uParam0, Param1, Param4, iParam7, uParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}












void func_863()//Position - 0x8120D
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.4f, 4358.3f, 155.7f, 220f, 220f, 120f, 0, 1, 0))
	{
		if (!iLocal_628)
		{
			func_845();
			Var0 = { GlobalFunc_107(Vector(113.4f, 4308.2f, -1429f) - Vector(1.732926f, 4457.777f, -1687.75f)) };
			uLocal_780 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1687.75f, 4457.777f, 1.732926f, Var0, 500f, 13, 127);
			iLocal_628 = 1;
		}
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.4f, 4358.3f, 155.7f, 300f, 300f, 200f, 0, 1, 0))
	{
		if (iLocal_628)
		{
			func_864();
			STREAMING::STREAMVOL_DELETE(uLocal_780);
			iLocal_628 = 0;
		}
	}
}

void func_864()//Position - 0x812DE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2017);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2016);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2018);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_887[0 /*33*/].f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1020[0 /*33*/].f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1714.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1729.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1744.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1804.f_2);
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1714.f_13, sLocal_846);
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_846);
	VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_846);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexile2");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_0");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_1");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_2");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_3");
	STREAMING::REMOVE_ANIM_DICT("missexile2");
	STREAMING::REMOVE_ANIM_SET("move_ped_crouched");
	STREAMING::REMOVE_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REMOVE_ANIM_SET("move_ped_crouched_strafing");
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_heavysniper"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_heavysniper")));
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("EXILE_2_01");
}

void func_865(int iParam0)//Position - 0x813C2
{
	switch (iLocal_694)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[0], iParam0))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_2019[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					iLocal_694++;
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[0], iParam0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				TASK::TASK_CLEAR_LOOK_AT(uLocal_2019[0]);
				iLocal_694 = 0;
			}
			break;
	}
}



void func_868(var uParam0, bool bParam1)//Position - 0x814C1
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_13), 30);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_13), 30);
	}
}






void func_874()//Position - 0x81766
{
	STREAMING::REQUEST_MODEL(iLocal_2017);
	STREAMING::REQUEST_MODEL(iLocal_2016);
	STREAMING::REQUEST_MODEL(Local_1759.f_1);
	STREAMING::REQUEST_MODEL(Local_1714.f_1);
	STREAMING::REQUEST_ANIM_DICT(sLocal_7344);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_1714.f_1, 3);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexile2");
	AUDIO::PREPARE_MUSIC_EVENT("EXL2_SWITCH_START");
}

void func_875()//Position - 0x817B3
{
	int iVar0;
	
	if (iLocal_2334 == 0)
	{
		PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 1);
		PED::SET_PED_CAN_RAGDOLL(Local_1648, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1648, 17);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744, 0);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_1744, 1.1f);
			VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_1744, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_1744, 1, 1, 1, 1, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_1744, 1000);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1744, 1000f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1744, 1000f);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1744, 0);
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_837))
			{
				uLocal_837 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_jeep_engine_fire", Local_1744, 0f, 1.5f, 0.5f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_725, "EXILE_2_GANG_CAR_FIRE", Local_1744, 0, 0, 0);
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 1, 1);
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 1);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1744, 0, 0, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1744, 2, 0, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1744, 3, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1744, 2);
			Local_847 = { ENTITY::GET_ENTITY_COORDS(Local_1744, 1) };
			func_874();
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_887 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_887[iVar0 /*33*/]))
			{
				PED::DELETE_PED(&(Local_887[iVar0 /*33*/]));
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_887[iVar0 /*33*/].f_1);
			iVar0++;
		}
		GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_GOCHOP1", 7, 0, 0, 0);
		RECORDING::_0x293220DA1B46CEBC(3f, 8f, 4);
		AUDIO::START_AUDIO_SCENE("EXILE_2_GO_TO_CRASH_SITE");
		iLocal_833 = 0;
		iLocal_2334 = 1;
	}
	if (iLocal_2334 == 1)
	{
		GlobalFunc_9193(&Local_2282, Local_847, 10f, 10f, 3f, 0, "FS_CRASHSITE", 1, 1, -1);
		switch (iLocal_682)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_847, 45f, 45f, 25f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_SPOT", 7, 0, 0, 0))
					{
						iLocal_682++;
					}
				}
				break;
			
			case 1:
				if (!GlobalFunc_5172(&Local_2282, 0))
				{
					iLocal_652 = MISC::GET_GAME_TIMER();
					iLocal_682++;
				}
				break;
			
			case 2:
				if (GlobalFunc_588(&iLocal_652, 1000))
				{
					if (GlobalFunc_10638(&uLocal_2114, 2, "TM44AUD", "TM44_FUPDC", 8, 1, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
						iLocal_686 = -1;
						iLocal_682++;
					}
				}
				break;
			
			case 3:
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != -1)
					{
						iLocal_686 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
						GlobalFunc_2209();
					}
				}
				else if (iLocal_686 != -1)
				{
					if (!GlobalFunc_781() || iLocal_686 >= 0)
					{
						iLocal_2334 = 2;
					}
					else
					{
						iLocal_682 = 2;
					}
				}
				else
				{
					iLocal_682 = 2;
					iLocal_687++;
					if (iLocal_687 > 2)
					{
						iLocal_2334 = 2;
					}
				}
				break;
		}
		func_467();
		func_876();
	}
	if (iLocal_2334 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_1744, 1f);
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_5652(&Local_2282, 1, 0);
		HUD::CLEAR_PRINTS();
		func_618();
		iLocal_2334 = 0;
		iLocal_2333 = 5;
	}
	if (iLocal_2334 == 3)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1876.188f, 4482.834f, 24.5287f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 300.6762f);
		iLocal_2334 = 2;
	}
}

void func_876()//Position - 0x81B0D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Local_1729.x, ENTITY::GET_ENTITY_COORDS(Local_1744, 1), 5f, 5f, 2.5f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_1729.x, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_PROOFS(Local_1729.x, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}




void func_880()//Position - 0x81C22
{
	int iVar0;
	
	iVar0 = 0;
	sLocal_846 = "MattForest";
	if (iLocal_2334 == 0)
	{
		GlobalFunc_4948(&uLocal_2321, 0, 0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
		STREAMING::REQUEST_ANIM_DICT("missexile2ig_5");
		STREAMING::REQUEST_ANIM_DICT("missexile2deer_crash");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_846);
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_846);
		AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS");
		AUDIO::PREPARE_MUSIC_EVENT("EXL2_DEER");
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1))
		{
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2ig_5"))
		{
		}
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_846))
		{
		}
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_846))
		{
		}
		if (AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS"))
		{
		}
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
		}
		if ((((((STREAMING::HAS_MODEL_LOADED(Local_1020[0 /*33*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2ig_5")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2deer_crash")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_846)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_846)) && AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS")) && STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (func_635(1, 1, 1))
			{
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10000f, 1, 0, 0, 0);
				func_883();
				GlobalFunc_2518(&uLocal_2019, 0, 0);
				GlobalFunc_2518(&uLocal_2019, 1, 0);
				GlobalFunc_2518(&uLocal_2019, 2, 0);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
				{
					GRAPHICS::_0x1612C45F9E3E0D44();
					PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 1);
					PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, 0, 1, 1, 1);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10000f, 1, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_1744.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_1744.f_2));
					}
					if (GlobalFunc_8315() != 1)
					{
						GlobalFunc_9134(&uLocal_2019, 1);
						GlobalFunc_10991(&uLocal_2019, 1, 0, 0);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, -1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1729.x, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 3, sLocal_846, 1);
					GlobalFunc_2513(&Local_1729, 48300f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1729.x, 1);
					GlobalFunc_2875(&Local_1729);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744, 1, sLocal_846, 1);
					GlobalFunc_2513(&Local_1744, 48300f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1744, 1);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1744, 1);
					GlobalFunc_2875(&Local_1744);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_1744, 0);
					GlobalFunc_173(&uLocal_2114, 6, Local_887[0 /*33*/], "oneil", 0, 1);
					if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_887[2 /*33*/]);
					}
					Local_747 = { 0f, 0f, 0f };
					Local_750 = { 0f, 0f, 0f };
					iLocal_716 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_716, Local_1744, 0);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1744, iLocal_716, "getout_car_stumble_dubsta", "missexile2ig_5", 1000f, -8f, 1 | 32, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1744);
					if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_887[0 /*33*/], iLocal_716, "missexile2ig_5", "getout_car_stumble_bryce", 1000f, -8f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[0 /*33*/], 1, 0);
					}
					if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_887[1 /*33*/], iLocal_716, "missexile2ig_5", "getout_car_stumble_jeff", 1000f, -8f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[1 /*33*/], 1, 0);
					}
					if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_887[2 /*33*/], iLocal_716, "missexile2ig_5", "getout_car_stumble_andre", 1000f, -8f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[2 /*33*/], 1, 0);
					}
					func_449(&(Local_1020[0 /*33*/]));
					Local_747 = { -1889.262f, 4419.208f, 47.745f };
					Local_750 = { 0f, 0f, -6.12f };
					Local_1020[0 /*33*/].f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_747, Local_750, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1020[0 /*33*/], Local_1020[0 /*33*/].f_23, "missexile2deer_crash", "deer_crash", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1020[0 /*33*/], 0, 0);
					uLocal_875 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1873.222f, 4420.159f, 49.32352f, -6.420567f, -0.016574f, 65.46559f, 24.28346f, 0, 2);
					iLocal_874 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1877.724f, 4422.953f, 47.54752f, -6.420536f, -0.016574f, 65.46535f, 24.28346f, 0, 2);
					CAM::SET_CAM_ACTIVE(uLocal_875, 1);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_874, iLocal_875, 5000, 3, 3);
					CAM::SHAKE_CAM(iLocal_874, "HAND_SHAKE", 1f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOLLOW_CAR_PHONE"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOLLOW_CAR_PHONE");
					}
					AUDIO::PLAY_STREAM_FRONTEND();
					AUDIO::START_AUDIO_SCENE("EXILE_2_CRASH_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_DEER");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					CAM::SET_WIDESCREEN_BORDERS(1, 0);
					iLocal_648 = 0;
					SYSTEM::SETTIMERA(0);
					SYSTEM::SETTIMERB(0);
					GlobalFunc_8316(1, 1, 1, 0);
					iLocal_833 = 0;
					iLocal_839 = 0;
					iLocal_2334 = 1;
				}
			}
		}
	}
	if (iLocal_2334 == 1)
	{
		if (iLocal_648 == 0)
		{
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_648 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
				{
					fLocal_732 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744);
				}
				switch (iLocal_833)
				{
					case 0:
						if (fLocal_732 > 50750f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
									{
										GlobalFunc_2513(&Local_1744, 52428f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
							{
								CAM::DESTROY_CAM(iLocal_875, 0);
								iLocal_875 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_COORD(iLocal_875, -1873.519f, 4435.841f, 46.72681f);
								CAM::SET_CAM_ROT(iLocal_875, -1.481913f, -0.602657f, -42.64133f, 2);
								CAM::SET_CAM_FOV(iLocal_875, 30.1268f);
								CAM::SHAKE_CAM(iLocal_875, "ROAD_VIBRATION_SHAKE", 1f);
								CAM::DESTROY_CAM(iLocal_874, 0);
								iLocal_874 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_COORD(iLocal_874, -1872.068f, 4439.053f, 49.04663f);
								CAM::SET_CAM_ROT(iLocal_874, -24.35414f, -0.577697f, -29.00082f, 2);
								CAM::SET_CAM_FOV(iLocal_874, 28.8534f);
								CAM::SHAKE_CAM(iLocal_874, "ROAD_VIBRATION_SHAKE", 1f);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_874, iLocal_875, 1600, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_833++;
							}
						}
						break;
					
					case 1:
						if (fLocal_732 > 53912f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
									{
										GlobalFunc_2513(&Local_1744, 53552f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
							{
								CAM::DESTROY_CAM(iLocal_875, 0);
								iLocal_875 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_COORD(iLocal_875, -1870.9f, 4476.434f, 27.50593f);
								CAM::SET_CAM_ROT(iLocal_875, 28.29952f, -0.577695f, -160.5686f, 2);
								CAM::SET_CAM_FOV(iLocal_875, 26.02377f);
								CAM::DESTROY_CAM(iLocal_874, 0);
								iLocal_874 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_COORD(iLocal_874, -1872.598f, 4481.579f, 24.81193f);
								CAM::SET_CAM_ROT(iLocal_874, 24.79078f, -0.577697f, -152.0869f, 2);
								CAM::SET_CAM_FOV(iLocal_874, 26.02377f);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_874, iLocal_875, 5000, 3, 3);
								CAM::SHAKE_CAM(iLocal_874, "HAND_SHAKE", 1f);
								SYSTEM::SETTIMERB(0);
								iLocal_833++;
							}
						}
						break;
					
					case 2:
						if (fLocal_732 > 54213.3f)
						{
							CAM::SHAKE_CAM(iLocal_874, "MEDIUM_EXPLOSION_SHAKE", 0.2f);
							iLocal_833++;
						}
						break;
					
					case 3:
						if (fLocal_732 > 55498.5f)
						{
							CAM::DESTROY_CAM(iLocal_875, 0);
							iLocal_875 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::SET_CAM_COORD(iLocal_875, -1875.61f, 4472.934f, 28.4649f);
							CAM::SET_CAM_ROT(iLocal_875, -12.23425f, -4.103173f, -44.42457f, 2);
							CAM::SET_CAM_FOV(iLocal_875, 36.00603f);
							CAM::DESTROY_CAM(iLocal_874, 0);
							iLocal_874 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::SET_CAM_COORD(iLocal_874, -1877.328f, 4474.561f, 27.99638f);
							CAM::SET_CAM_ROT(iLocal_874, -12.21976f, -4.103173f, -19.27652f, 2);
							CAM::SET_CAM_FOV(iLocal_874, 36.00603f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_874, iLocal_875, 1250, 3, 3);
							CAM::SHAKE_CAM(iLocal_874, "ROAD_VIBRATION_SHAKE", 2f);
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_837))
							{
								uLocal_837 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_jeep_engine_fire", Local_1744, 0f, 1.5f, 0.5f, 0f, 0f, 0f, 1f, 0, 0, 0);
							}
							iLocal_833++;
						}
						break;
					
					case 4:
						if (fLocal_732 > 56751.87f)
						{
							CAM::DESTROY_CAM(iLocal_875, 0);
							iLocal_875 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::SET_CAM_COORD(iLocal_875, -1876.13f, 4489.384f, 24.41581f);
							CAM::SET_CAM_ROT(iLocal_875, 15.51182f, -4.103173f, -166.4036f, 2);
							CAM::SET_CAM_FOV(iLocal_875, 35.73084f);
							CAM::SHAKE_CAM(iLocal_875, "ROAD_VIBRATION_SHAKE", 1f);
							CAM::DESTROY_CAM(iLocal_874, 0);
							iLocal_874 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::SET_CAM_COORD(iLocal_874, -1876.13f, 4489.384f, 24.41581f);
							CAM::SET_CAM_ROT(iLocal_874, 10.7982f, -4.103173f, -158.7789f, 2);
							CAM::SET_CAM_FOV(iLocal_874, 35.73084f);
							CAM::SHAKE_CAM(iLocal_874, "ROAD_VIBRATION_SHAKE", 1f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_874, iLocal_875, 2000, 3, 3);
							CAM::SHAKE_CAM(iLocal_874, "ROAD_VIBRATION_SHAKE", 1f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_716, 0.45f);
							iLocal_833++;
						}
						break;
					
					case 5:
						if (fLocal_732 > 57606.82f)
						{
							CAM::SHAKE_CAM(iLocal_874, "small_EXPLOSION_SHAKE", 0.15f);
							iLocal_833++;
						}
						break;
					
					case 6:
						if (fLocal_732 > 59000f)
						{
							iLocal_652 = MISC::GET_GAME_TIMER();
							CAM::DESTROY_CAM(iLocal_875, 0);
							CAM::DESTROY_CAM(iLocal_874, 0);
							uLocal_881 = CAM::CREATE_CAMERA(964613260, 1);
							CAM::PLAY_CAM_ANIM(uLocal_881, "getout_car_stumble_cam", "missexile2ig_5", ENTITY::GET_ENTITY_COORDS(Local_1744, 1), ENTITY::GET_ENTITY_ROTATION(Local_1744, 2), 0, 2);
							CAM::SET_CAM_ANIM_CURRENT_PHASE(uLocal_881, 0.596f);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744);
							}
							iLocal_833++;
						}
						break;
					
					case 7:
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_716))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_716) >= 0.96f)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
									iLocal_833++;
								}
							}
						}
						else
						{
							iLocal_833++;
						}
						break;
					
					case 8:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_716))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_716) >= 0.99f)
							{
								TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, 0);
								ENTITY::DETACH_ENTITY(Local_1648, 1, 1);
								Local_1648.f_11 = { -1895.808f, 4429.068f, 43.38081f };
								Local_1648.f_20 = 9.9039f;
								ENTITY::SET_ENTITY_COORDS(Local_1648, Local_1648.f_11, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_1648, Local_1648.f_20);
								Local_1648.f_2 = GlobalFunc_6783(Local_1648, 0, 0);
								func_467();
								if (!PED::IS_PED_INJURED(Local_1020[0 /*33*/]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1020[0 /*33*/]);
									ENTITY::SET_ENTITY_COORDS(Local_1020[0 /*33*/], -1868.968f, 4427.408f, 46.6996f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_1020[0 /*33*/], 267.4871f);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1820.601f, 4417.22f, 45.891f, 2f, -1, 1193033728, 1056964608);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
									TASK::TASK_PERFORM_SEQUENCE(Local_1020[0 /*33*/], uLocal_883);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
									PED::FORCE_PED_MOTION_STATE(Local_1020[0 /*33*/], -530524, 1, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1020[0 /*33*/], 0, 0);
								}
								iLocal_2334 = 2;
							}
						}
						break;
				}
				switch (iLocal_710)
				{
					case 0:
						if (fLocal_732 > 48500f)
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_ELK", 7, 0, 0, 0))
							{
								iLocal_710++;
							}
						}
						break;
					
					case 1:
						if (fLocal_732 > 50500f)
						{
							if (GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_CRASH", 7, 0, 0, 0))
							{
								iLocal_710++;
							}
						}
						break;
					
					case 2:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_716))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_716) >= 0.7f)
							{
								if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
								{
									AUDIO::PLAY_PAIN(Local_887[0 /*33*/], 19, 0, 0);
								}
								iLocal_710++;
							}
						}
						break;
					
					case 3:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_716))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_716) >= 0.85f)
							{
								if (!PED::IS_PED_INJURED(Local_887[1 /*33*/]))
								{
									GlobalFunc_5117(Local_887[1 /*33*/], "GENERIC_SHOCKED_HIGH", "A_M_M_HillBilly_01_WHITE_MINI_02", 24);
								}
								iLocal_710++;
							}
						}
						break;
				}
				switch (iLocal_839)
				{
					case 0:
						if (fLocal_732 >= 51180f)
						{
							iLocal_839++;
						}
						break;
					
					case 1:
						if (fLocal_732 >= 54187f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
							{
								VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, -0.2f, 0.5f, 0f, 375f, 375f, 1);
								VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.2f, 0.5f, 0f, 375f, 375f, 1);
							}
							iLocal_839++;
						}
						break;
					
					case 2:
						if (fLocal_732 >= 54591f)
						{
							VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 0);
							iLocal_839++;
						}
						break;
					
					case 3:
						if (fLocal_732 >= 55258f)
						{
							VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.3f, -0.1f, 0.75f, 200f, 200f, 1);
							iLocal_839++;
						}
						break;
					
					case 4:
						break;
				}
				switch (iLocal_714)
				{
					case 0:
						if (fLocal_732 >= 54204f)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_ex2_car_impact", Local_1744, 0f, 2.2f, 0.4f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							iLocal_714++;
						}
						break;
					
					case 1:
						if (fLocal_732 > 55321f)
						{
							iLocal_781[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_car_slide", Local_1744, 0.8f, -0.8f, 1.35f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_714++;
						}
						break;
					
					case 2:
						if (fLocal_732 > 56751.87f)
						{
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_781[0]))
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_781[0], 0);
							}
							iLocal_714++;
						}
						break;
					
					case 3:
						break;
					
					case 4:
						break;
				}
			}
		}
		if (GlobalFunc_75())
		{
			if (iLocal_833 > 0)
			{
				iLocal_2334 = 3;
			}
		}
	}
	if (iLocal_2334 == 2)
	{
		AUDIO::STOP_STREAM();
		RECORDING::_0x81CBAE94390F9F89();
		GRAPHICS::_0x5DEBD9C4DC995692();
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_CRASH_CUTSCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("EXILE_2_CRASH_CUTSCENE");
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_781 - 1))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_781[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_781[iVar0], 0);
			}
			iVar0++;
		}
		STREAMING::REMOVE_ANIM_DICT("missexile2ig_5");
		STREAMING::REMOVE_ANIM_DICT("missexile2deer_crash");
		MISC::SET_TIME_SCALE(1f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1744, 1000f, 1);
			ENTITY::SET_ENTITY_HEALTH(Local_1744, 1000);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1744, 1000f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1744, 1000f);
		}
		GlobalFunc_5917(&Local_1729);
		GlobalFunc_5917(&Local_1759);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
			}
		}
		ENTITY::SET_ENTITY_COORDS(Local_1729.x, -1899.395f, 4431.256f, 42.805f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1729.x, 228.1822f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1729.x, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1729.x);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744);
			}
		}
		ENTITY::SET_ENTITY_COORDS(Local_1744, -1873.92f, 4486.02f, 24.625f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1744, 239.2644f);
		VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_846);
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_846);
		VEHICLE::REMOVE_VEHICLE_RECORDING(200, sLocal_846);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		RECORDING::_0x81CBAE94390F9F89();
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_629(0, 1, 0, 0f, 0f, 3000, 0);
		}
		else
		{
			func_444(0, 0f, 0f, 0);
		}
		iLocal_2334 = 0;
		iLocal_2333 = 4;
	}
	if (iLocal_2334 == 3)
	{
		GlobalFunc_2879();
		func_970();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_1744, 1000);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1744, 1000f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1744, 1000f);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
			{
				VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744);
			}
			if (iLocal_839 < 2)
			{
				VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, -0.2f, 0.5f, 0f, 375f, 375f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.2f, 0.5f, 0f, 375f, 375f, 1);
			}
			if (iLocal_839 < 3)
			{
				VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1744, 4, 1);
			}
			if (iLocal_839 < 4)
			{
				VEHICLE::SET_VEHICLE_DAMAGE(Local_1744, 0.3f, -0.1f, 0.75f, 200f, 200f, 1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_1020[0 /*33*/]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1020[0 /*33*/]);
			ENTITY::SET_ENTITY_COORDS(Local_1020[0 /*33*/], -1868.968f, 4427.408f, 46.6996f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1020[0 /*33*/], 267.4871f);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1820.601f, 4417.22f, 45.891f, 2f, -1, 1193033728, 1056964608);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
			TASK::TASK_PERFORM_SEQUENCE(Local_1020[0 /*33*/], uLocal_883);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
			PED::FORCE_PED_MOTION_STATE(Local_1020[0 /*33*/], -530524, 1, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1020[0 /*33*/], 0, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
			}
			ENTITY::SET_ENTITY_COORDS(Local_1729.x, -1899.395f, 4431.256f, 42.805f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1729.x, 228.1822f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1729.x, 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1729.x);
		}
		TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, 0);
		ENTITY::DETACH_ENTITY(Local_1648, 1, 1);
		Local_1648.f_11 = { -1896.432f, 4427.469f, 43.3257f };
		Local_1648.f_20 = 9.9039f;
		ENTITY::SET_ENTITY_COORDS(Local_1648, Local_1648.f_11, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1648, Local_1648.f_20);
		Local_1648.f_2 = GlobalFunc_6783(Local_1648, 0, 0);
		func_467();
		GlobalFunc_5917(&Local_1744);
		GlobalFunc_5917(&Local_1729);
		iLocal_2334 = 2;
	}
}



void func_883()//Position - 0x82F5F
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1965.07f, 3784.35f, 100f, 1994.62f, 3841.22f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1784.3f, 3195.5f, 100f, 1707.6f, 3262.2f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1635.92f, 4389.35f, 100f, -1603.12f, 4371.75f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1517.4f, 4319.4f, 103f, -1569.5f, 4309.2f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1602.2f, 4452.3f, 50f, -1486.8f, 4519.2f, 0f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1320.3f, 4424.9f, 30f, -1409f, 4556f, 0f, 0, 1);
}

int func_884()//Position - 0x83037
{
	if (iLocal_2334 == 0)
	{
		func_456(uLocal_2019[0]);
		STREAMING::REQUEST_MODEL(iLocal_2018);
		STREAMING::REQUEST_MODEL(Local_1729.f_1);
		STREAMING::REQUEST_ANIM_DICT("missswitch");
		STREAMING::REQUEST_ANIM_DICT("missexile2switch");
		STREAMING::REQUEST_ANIM_DICT(sLocal_7344);
		VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1759) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_2019[0], Local_1759))
		{
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_2018) && STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2switch")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_7344)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase"))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(0);
				MISC::CLEAR_AREA(-2689.224f, 2368.075f, 15.7681f, 300f, 1, 0, 0, 0);
				Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -2646.31f, 2677.32f, 16.6427f, 350.3382f, 1, 1);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1729.x, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1729.x, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1729.x, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 0, 0);
				AUDIO::SET_VEH_RADIO_STATION(Local_1729.x, "RADIO_03_HIPHOP_NEW");
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 100, "lkexcile2_chase", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 7500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1729.x, 0f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1729.x, 1);
				func_40(&(uLocal_2019[1]), 1, Local_1729.x, -1, 1, 0, 0);
				func_456(uLocal_2019[1]);
				func_455(&(uLocal_2019[1]), 1);
				GlobalFunc_173(&uLocal_2114, 1, uLocal_2019[1], "franklin", 0, 1);
				GlobalFunc_2518(&uLocal_2019, 1, 1);
				GlobalFunc_11267(uLocal_2019[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_729(&uLocal_2019, 0, 1);
				sLocal_769 = "FS_GOD_0";
				sLocal_770 = "FS_michael_0";
				sLocal_771 = "FS_BACKINCAR";
				iLocal_788 = 0;
				iLocal_652 = MISC::GET_GAME_TIMER();
				iLocal_2334 = 1;
			}
		}
		func_923();
	}
	if (iLocal_2334 == 1)
	{
		func_508();
		if (func_920())
		{
			iLocal_2334 = 0;
			iLocal_2333 = 3;
			return 1;
		}
		func_919();
		func_909();
		func_906();
		if (GlobalFunc_8315() == 1)
		{
			if (!iLocal_788)
			{
				if (!PED::IS_PED_INJURED(Local_887[0 /*33*/]))
				{
					GlobalFunc_10693(&uLocal_2321, Local_887[0 /*33*/], 0, 0, 1, 1, 1);
					func_885();
				}
			}
		}
		if (bLocal_630)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
					}
				}
			}
		}
	}
	if (iLocal_2334 == 2)
	{
		iLocal_2334 = 0;
		iLocal_2333 = 3;
	}
	if (iLocal_2334 == 3)
	{
		if (GlobalFunc_8315() == 1)
		{
			switch (iLocal_706)
			{
				case 0:
					iLocal_652 = 0;
					iLocal_2334 = 1;
					break;
				
				case 1:
					GlobalFunc_5652(&Local_2282, 1, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, -1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_1729.x, -1989.405f, 4501.27f, 29.7859f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1729.x, 215.9919f);
					}
					func_558(Local_1744, 83000f);
					func_518(Local_1744, 1f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
					iLocal_2334 = 1;
					break;
				}
			}
	}
	return 0;
}

void func_885()//Position - 0x83373
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("EXILE_2_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOCUS_CAM");
	}
}





















void func_906()//Position - 0x8415E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
		{
			iLocal_79 = 1;
			switch (iLocal_703)
			{
				case 0:
					if (iLocal_625)
					{
						func_518(Local_1744, 0f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1729.x, 0f);
							}
						}
					}
					else
					{
						func_518(Local_1744, 1f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1729.x, 1f);
							}
						}
					}
					iLocal_79 = 1;
					if (iLocal_704 != 0)
					{
						if (GlobalFunc_588(&iLocal_704, 2000))
						{
							fLocal_730 = 1.1f;
							Local_1744.f_7 = 1.1f;
							iLocal_703++;
						}
					}
					break;
				
				case 1:
					fLocal_731 = 0.01f;
					GlobalFunc_2219(&fLocal_730, &Local_1729, Local_1744, 10f, 18f, 35f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					if (Local_1744.f_7 < 1f && fLocal_730 > Local_1744.f_7)
					{
						fLocal_731 = (fLocal_731 * 2f);
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						fLocal_731 = (fLocal_731 * 2f);
					}
					GlobalFunc_2218(&(Local_1744.f_7), fLocal_730, fLocal_731);
					func_518(Local_1744, Local_1744.f_7);
					break;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1744, 1), 1.7f, 1))
			{
				if (!PED::IS_PED_INJURED(Local_887[2 /*33*/]))
				{
					if (func_484(Local_887[2 /*33*/], 242628503))
					{
						PED::SET_PED_ACCURACY(Local_887[2 /*33*/], 5);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_883);
						TASK::TASK_DRIVE_BY(0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 2f, 300f, 20, 0, -753768974);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_883);
						TASK::TASK_PERFORM_SEQUENCE(Local_887[2 /*33*/], uLocal_883);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_883);
					}
				}
			}
		}
	}
}



void func_909()//Position - 0x8452F
{
	switch (iLocal_656)
	{
		case 0:
			if (iLocal_788)
			{
				if (GlobalFunc_10061(&uLocal_2019, 1, 1))
				{
					switch (GlobalFunc_8315())
					{
						case 2:
							if (GlobalFunc_751(&uLocal_2019, 1))
							{
								GlobalFunc_4935();
								Local_2063.f_12 = uLocal_2019[1];
								HUD::CLEAR_PRINTS();
								GlobalFunc_5652(&Local_2282, 1, 0);
								if (ENTITY::DOES_ENTITY_EXIST(Local_1714))
								{
									ENTITY::SET_ENTITY_PROOFS(Local_1714, 1, 1, 1, 1, 1, 0, 0, 0);
								}
								GlobalFunc_2881(&iLocal_766);
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
								iLocal_656++;
							}
							break;
						
						case 1:
							if (GlobalFunc_751(&uLocal_2019, 2))
							{
								Local_2063.f_12 = uLocal_2019[2];
								HUD::CLEAR_PRINTS();
								if (HUD::DOES_BLIP_EXIST(Local_1744.f_2))
								{
									HUD::REMOVE_BLIP(&(Local_1744.f_2));
								}
								if (HUD::DOES_BLIP_EXIST(Local_1729.f_2))
								{
									HUD::REMOVE_BLIP(&(Local_1729.f_2));
								}
								ENTITY::SET_ENTITY_PROOFS(Local_1729.x, 1, 1, 1, 1, 1, 0, 0, 0);
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
								iLocal_656++;
							}
							break;
						}
					}
			}
			break;
		
		case 1:
			if (!func_910(&iLocal_4862, &iLocal_6103))
			{
			}
			else
			{
				GlobalFunc_2874(0);
				STREAMING::REMOVE_ANIM_DICT("missswitch");
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				switch (GlobalFunc_8315())
				{
					case 1:
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
						AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
						}
						ENTITY::SET_ENTITY_PROOFS(Local_1729.x, 0, 0, 0, 0, 0, 0, 0, 0);
						iLocal_704 = MISC::GET_GAME_TIMER();
						iLocal_656 = 0;
						iLocal_788 = 0;
						GlobalFunc_Checkpoint2(1, "start of car chase", 0, 0, 0, 1);
						break;
					}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_652, 500))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_766))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_766, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_766))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_766);
						}
					}
				}
			}
			break;
	}
}

int func_910(int iParam0, int iParam1)//Position - 0x846F7
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 0.72f;
	switch (iLocal_2379)
	{
		case 0:
			break;
		
		case 4:
			iParam0->f_1217 = iParam0->f_1217;
			func_917();
			GlobalFunc_9134(&uLocal_2019, 1);
			Local_2063.f_12 = uLocal_2019[1];
			iLocal_788 = 1;
			iLocal_7392 = 0;
			iLocal_2379 = 5;
		
		case 5:
			if (iLocal_2333 != 1)
			{
				if (func_696(&Local_2063, 0, 0, 999f, 999f, 1, 0, 0, 0, 0))
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						iVar3 = STREAMING::GET_PLAYER_SWITCH_STATE();
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1744))
						{
							if (iVar3 >= 3)
							{
								if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() >= 2)
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[0]))
									{
										PED::DELETE_PED(&(uLocal_2019[0]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2017);
										GlobalFunc_200(&uLocal_2114, 0);
									}
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[2]))
									{
										PED::DELETE_PED(&(uLocal_2019[2]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2016);
										GlobalFunc_200(&uLocal_2114, 2);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_1759))
									{
										VEHICLE::DELETE_VEHICLE(&Local_1759);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1759.f_1);
										VEHICLE::REMOVE_VEHICLE_ASSET(Local_1759.f_1);
									}
									GlobalFunc_5652(&Local_2282, 1, 0);
									func_916();
									if (func_915())
									{
										func_914();
										STREAMING::ALLOW_PLAYER_SWITCH_PAN();
									}
								}
							}
						}
					}
					if (Local_2063.f_18)
					{
						if (!Local_2063.f_19)
						{
							if (GlobalFunc_10991(&uLocal_2019, 0, 0, 0))
							{
								switch (GlobalFunc_8315())
								{
									case 1:
										PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(1));
										PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.33f, 1);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
											{
												MISC::SET_INSTANCE_PRIORITY_HINT(2);
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
												PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, -1);
												Local_1744.f_2 = GlobalFunc_6783(Local_1744, 1, 0);
												MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1729.x, 1), 10000f, 1, 0, 0, 0);
											}
										}
										break;
								}
								Local_2063.f_19 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_7392)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					iVar4 = STREAMING::GET_PLAYER_SWITCH_STATE();
					if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
					{
						if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 1)
						{
							iLocal_625 = 0;
						}
					}
					if (iVar4 >= 9)
					{
						Local_2063.f_17 = 1;
						func_696(&Local_2063, 0, 0, 999f, 999f, 1, 0, 0, 0, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						iLocal_2379 = 6;
						iLocal_7392 = 1;
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
			else
			{
				return 0;
			}
		
		case 6:
			iLocal_625 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
			{
				func_558(Local_1744, 7500f);
				func_518(Local_1744, 1f);
				ENTITY::SET_ENTITY_VISIBLE(Local_1744, 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_1729.x, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, (7500f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1729.x)));
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1729.x, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 4f, -1000f, -1, 2, 0, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_887[0 /*33*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_887[0 /*33*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[0 /*33*/]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_887[0 /*33*/], Local_1744, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1744, "seat_dside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::TASK_PLAY_ANIM(Local_887[0 /*33*/], "missswitch", "in_car_driver", 1000f, -1000f, -1, 1, fLocal_7386, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[0 /*33*/], 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_887[1 /*33*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_887[1 /*33*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[1 /*33*/]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_887[1 /*33*/], Local_1744, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1744, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::TASK_PLAY_ANIM(Local_887[1 /*33*/], "missswitch", "in_car_passenger", 1000f, -1000f, -1, 1, fLocal_7386, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[1 /*33*/], 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_887[2 /*33*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_887[2 /*33*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[2 /*33*/]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_887[2 /*33*/], Local_1744, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1744, "seat_pside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::TASK_PLAY_ANIM(Local_887[2 /*33*/], "missswitch", "in_car_backseater", 1000f, -1000f, -1, 1, fLocal_7386, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[2 /*33*/], 0, 0);
				}
			}
			CAM::DESTROY_ALL_CAMS(0);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1729.x, 1), 1000f, 1, 0, 0, 0);
			func_912(iParam1, Local_1744, Local_1729.x);
			func_792(iParam1);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchOpenFranklinOut");
			}
			CAM::SET_CAM_ACTIVE(iParam1->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
			iLocal_7393 = 0;
			iLocal_7394 = 0;
			iLocal_7395 = 0;
			iLocal_7356 = 0;
			bLocal_7396 = false;
			bLocal_7397 = false;
			iLocal_2379 = 7;
		
		case 7:
			if (CAM::IS_CAM_ACTIVE(iParam1->f_1))
			{
				iVar0 = iVar0;
				iVar0 = func_778(iParam1);
				fVar1 = fVar1;
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(iParam1->f_1);
				if (!iLocal_645)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_645 = 1;
				}
				if (!bLocal_7396)
				{
					if (fVar1 >= fLocal_7390)
					{
						bLocal_7396 = GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_ONEIL", 7, 0, 0, 0);
					}
				}
				if (!iLocal_644)
				{
					if (fVar1 >= 0.065f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_644 = 1;
					}
				}
				if (!bLocal_7397)
				{
					if (fVar1 >= fLocal_7391)
					{
						bLocal_7397 = GlobalFunc_10618(&uLocal_2114, "TM44AUD", "TM44_SWIT", 7, 0, 0, 0);
					}
				}
				if (!iLocal_7393)
				{
					if (iVar0 >= 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 3))
								{
									TASK::SET_ANIM_RATE(PLAYER::PLAYER_PED_ID(), 0f, 0, 0);
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 4f, -1000f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
									iLocal_7393 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_7394)
				{
					if (fVar1 >= fLocal_7387)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1729.x))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1729.x))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
								{
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 3))
											{
												TASK::SET_ANIM_RATE(PLAYER::PLAYER_PED_ID(), 1f, 0, 0);
												TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 4f, -1000f, -1, 2, fLocal_7388, 0, 0, 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
										}
									}
								}
							}
						}
						iLocal_7394 = 1;
					}
				}
				if (!iLocal_7395)
				{
					if (fVar1 >= fLocal_7389 || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 && fVar1 > fVar2))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1744))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1744))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_887[0 /*33*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_887[0 /*33*/]))
										{
											ENTITY::DETACH_ENTITY(Local_887[0 /*33*/], 1, 1);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[0 /*33*/]);
											PED::SET_PED_INTO_VEHICLE(Local_887[0 /*33*/], Local_1744, -1);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[0 /*33*/], 0, 0);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_887[1 /*33*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_887[1 /*33*/]))
										{
											ENTITY::DETACH_ENTITY(Local_887[1 /*33*/], 1, 1);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[1 /*33*/]);
											PED::SET_PED_INTO_VEHICLE(Local_887[1 /*33*/], Local_1744, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[1 /*33*/], 0, 0);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_887[2 /*33*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_887[2 /*33*/]))
										{
											ENTITY::DETACH_ENTITY(Local_887[2 /*33*/], 1, 1);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_887[2 /*33*/]);
											PED::SET_PED_INTO_VEHICLE(Local_887[2 /*33*/], Local_1744, 2);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_887[2 /*33*/], 0, 0);
										}
									}
								}
							}
						}
						iLocal_7395 = 1;
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (fVar1 > fVar2)
					{
						MISC::SET_TIME_SCALE(1f);
						if (!iLocal_639)
						{
							GlobalFunc_669(&uLocal_2338, Local_1729.x, 1, 0.75f, 1000, 1000, 700, 700, 1045220557);
							GlobalFunc_668(&uLocal_2338, 10f, 0f, -10f);
							iLocal_639 = 1;
						}
						if (func_774(&uLocal_2338, 1, 1, 1, 0, 1, 0))
						{
							func_911(iParam1);
							return 1;
						}
					}
				}
				else if (fVar1 >= 1f)
				{
					MISC::SET_TIME_SCALE(1f);
					func_911(iParam1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_911(var uParam0)//Position - 0x84F57
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_1729.x))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1729.x))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
					GlobalFunc_503(0, 177);
					GlobalFunc_504(0, 176);
					GlobalFunc_503(Local_1729.x, 177);
					GlobalFunc_504(Local_1729.x, 176);
					iLocal_647 = 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	iLocal_2379 = 0;
}

void func_912(var uParam0, int iParam1, int iParam2)//Position - 0x85023
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.3868f, 5.1388f, 0.9563f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.365f, 0.0876f, 0.3022f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 40f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1000;
		uParam0->f_10[1 /*57*/].f_6 = { -1.597f, 3.099f, 1.127f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -0.032f, -0.109f, 0.685f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 40f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 2000;
		uParam0->f_10[2 /*57*/].f_6 = { -1.5737f, 2.6795f, 1.0848f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -0.2538f, -0.2104f, 0.6868f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 40f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = -0.1f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 500;
		uParam0->f_10[3 /*57*/].f_6 = { -2.0237f, 1.6637f, 0.9185f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { -0.6248f, -0.4769f, 0.712f };
		uParam0->f_10[3 /*57*/].f_18 = 1;
		uParam0->f_10[3 /*57*/].f_19 = 1;
		uParam0->f_10[3 /*57*/].f_20 = 1;
		uParam0->f_10[3 /*57*/].f_21 = 40f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0.2f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0.728f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 500;
		uParam0->f_10[4 /*57*/].f_6 = { -1.7515f, 1.2756f, 0.5311f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.1985f, -0.2436f, 0.3584f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0.6f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 2000;
		uParam0->f_10[5 /*57*/].f_6 = { -2.0881f, 0.263f, 0.5245f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 0.0062f, -0.0933f, 0.413f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 2000;
		uParam0->f_10[6 /*57*/].f_6 = { -2.6841f, -4.8933f, 1.0322f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.3427f, 0.1818f, 0.1332f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 50f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0.398f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 1;
		uParam0->f_10[7 /*57*/].f_5 = 1000;
		uParam0->f_10[7 /*57*/].f_6 = { -0.5163f, -7.533f, 1.2559f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 0.5619f, -0.131f, -0.2427f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 50f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1151[0 /*2*/] = 0f;
		uParam0->f_1151[0 /*2*/].f_1 = 0.55f;
		uParam0->f_1151[1 /*2*/] = 1f;
		uParam0->f_1151[1 /*2*/].f_1 = 0.55f;
		uParam0->f_1151[2 /*2*/] = 2f;
		uParam0->f_1151[2 /*2*/].f_1 = 0.55f;
		uParam0->f_1151[3 /*2*/] = 2.8f;
		uParam0->f_1151[3 /*2*/].f_1 = 80f;
		uParam0->f_1151[4 /*2*/] = 3f;
		uParam0->f_1151[4 /*2*/].f_1 = 80f;
		uParam0->f_1151[5 /*2*/] = 3.8f;
		uParam0->f_1151[5 /*2*/].f_1 = 60f;
		uParam0->f_1151[6 /*2*/] = 4f;
		uParam0->f_1151[6 /*2*/].f_1 = 0.2f;
		uParam0->f_1151[7 /*2*/] = 4.2f;
		uParam0->f_1151[7 /*2*/].f_1 = 5f;
		uParam0->f_1151[8 /*2*/] = 5f;
		uParam0->f_1151[8 /*2*/].f_1 = 20f;
		uParam0->f_1151[9 /*2*/] = 6.7f;
		uParam0->f_1151[9 /*2*/].f_1 = 15f;
		uParam0->f_1151[10 /*2*/] = 7f;
		uParam0->f_1151[10 /*2*/].f_1 = 15f;
		uParam0->f_1184[0 /*2*/] = 3f;
		uParam0->f_1184[0 /*2*/].f_1 = 1f;
		uParam0->f_1184[1 /*2*/] = 3.9f;
		uParam0->f_1184[1 /*2*/].f_1 = 1f;
		uParam0->f_1184[2 /*2*/] = 4f;
		uParam0->f_1184[2 /*2*/].f_1 = 0f;
		uParam0->f_1184[3 /*2*/] = 5.15f;
		uParam0->f_1184[3 /*2*/].f_1 = 0f;
		uParam0->f_1184[4 /*2*/] = 6f;
		uParam0->f_1184[4 /*2*/].f_1 = 0.7f;
		uParam0->f_1184[5 /*2*/] = 7f;
		uParam0->f_1184[5 /*2*/].f_1 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile2_BrosToFranklin.txt";
		uParam0->f_1225 = "CameraInfo_Exile2_BrosToFranklin.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = iParam1;
	uParam0->f_4[1] = iParam2;
}


void func_914()//Position - 0x86182
{
	Local_1648.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f) };
	func_34(&Local_1648);
	HUD::REMOVE_BLIP(&(Local_1648.f_2));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1648, Local_1729.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1729.x, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	TASK::TASK_PLAY_ANIM(Local_1648, "missexile2", "chop_sit_in_baller_ps", 8f, -8f, -1, 1, 0, 0, 0, 0);
	Local_1744 = VEHICLE::CREATE_VEHICLE(Local_1744.f_1, -2639.9f, 2733.9f, 16.6f, 350f, 1, 1);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1744, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1744, 3);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1744, 7, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_1744, 1, 1, 1, 1, 1, 0, 0, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1744, "EXILE_2_ENEMY_CAR", 0);
	GRAPHICS::_0x46D1A61A21F566FC(3f);
	func_506(&(Local_887[0 /*33*/]), &Local_1744, -1);
	PED::SET_PED_CAN_BE_TARGETTED(Local_887[0 /*33*/], 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_887[0 /*33*/], 0);
	ENTITY::SET_ENTITY_PROOFS(Local_887[0 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[0 /*33*/].f_2));
	func_506(&(Local_887[1 /*33*/]), &Local_1744, 0);
	PED::SET_PED_CAN_BE_TARGETTED(Local_887[1 /*33*/], 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_887[1 /*33*/], 0);
	ENTITY::SET_ENTITY_PROOFS(Local_887[1 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[1 /*33*/].f_2));
	GlobalFunc_173(&uLocal_2114, 6, Local_887[1 /*33*/], "oneil", 0, 1);
	func_506(&(Local_887[2 /*33*/]), &Local_1744, 1);
	PED::SET_PED_CAN_BE_TARGETTED(Local_887[2 /*33*/], 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_887[2 /*33*/], 0);
	ENTITY::SET_ENTITY_PROOFS(Local_887[2 /*33*/], 1, 1, 1, 1, 1, 0, 0, 0);
	HUD::REMOVE_BLIP(&(Local_887[2 /*33*/].f_2));
	func_562("lkexcile2_chase", 1, 1, 1);
	func_561();
	fLocal_291 = 200f;
	iLocal_93 = 1;
	iLocal_90 = 1;
	func_560(1, 0, 4);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744, 1, "lkexcile2_chase", 1);
	func_518(Local_1744, 1f);
	func_558(Local_1744, 7500f);
	func_518(Local_1744, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1744, 1);
	iLocal_625 = 1;
}

int func_915()//Position - 0x86383
{
	if ((((((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_2018) && STREAMING::HAS_MODEL_LOADED(Local_887[0 /*33*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) && STREAMING::HAS_MODEL_LOADED(joaat("radi"))) && STREAMING::HAS_MODEL_LOADED(joaat("sabregt"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
	{
		return 1;
	}
	return 0;
}

void func_916()//Position - 0x86563
{
	STREAMING::REQUEST_MODEL(iLocal_2018);
	STREAMING::REQUEST_MODEL(Local_887[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1648.f_1);
	STREAMING::REQUEST_MODEL(Local_1729.f_1);
	STREAMING::REQUEST_MODEL(Local_1744.f_1);
	STREAMING::REQUEST_MODEL(joaat("radi"));
	STREAMING::REQUEST_MODEL(joaat("sabregt"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
}

void func_917()//Position - 0x866A5
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_2019[0]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_2019[0]);
			TASK::TASK_PLAY_ANIM(uLocal_2019[0], "missexile2switch", "IG_3_SWITCH_TREV_to_FRA_AND_ONEILLS_MIC", 4f, -4f, -1, 0, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[0], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_2019[2]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_2019[2]);
			TASK::TASK_PLAY_ANIM(uLocal_2019[2], "missexile2switch", "IG_3_SWITCH_TREV_to_FRA_AND_ONEILLS_TREV", 4f, -4f, -1, 0, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[2], 0, 0);
		}
	}
}


void func_919()//Position - 0x8677F
{
	switch (iLocal_712)
	{
		case 0:
			if (GlobalFunc_8315() == 1)
			{
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					iLocal_884[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2592.295f, 3129.918f, 13.8053f, "ch1_roadsdint_tun2");
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_884[0]);
					iLocal_884[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2572.248f, 3325.145f, 12.5609f, "ch1_roadsdint_tun1");
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_884[1]);
					iLocal_712++;
				}
			}
			break;
		
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2589.657f, 3173.952f, 13.2004f, 1) > 1000f)
			{
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_884[0]))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_884[0]);
				}
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_884[1]))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_884[1]);
				}
				iLocal_712++;
			}
			break;
		
		case 2:
			break;
	}
}

int func_920()//Position - 0x8686E
{
	switch (iLocal_706)
	{
		case 0:
			func_640(&Local_2282, -2769.7f, 220.4f, 24.7f, 0.01f, 0.01f, 0.01f, 0, uLocal_2019[0], 0, 0, Local_1759, sLocal_769, sLocal_770, "", "", "", "", sLocal_771, 0, 0, 1, -1);
			if (func_470("TM44_WHERE"))
			{
				if (iLocal_719 == 0)
				{
					if (GlobalFunc_111() && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
					{
						iLocal_719 = MISC::GET_GAME_TIMER();
					}
				}
				if (!GlobalFunc_5172(&Local_2282, 0) || ((GlobalFunc_111() && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1) && GlobalFunc_588(&iLocal_719, 2500)))
				{
					GlobalFunc_9134(&uLocal_2019, 1);
					Local_2063.f_12 = uLocal_2019[1];
					iLocal_656 = 1;
					iLocal_2379 = 4;
					iLocal_788 = 1;
					GlobalFunc_5652(&Local_2282, 1, 0);
					iLocal_706++;
				}
			}
			break;
		
		case 1:
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && iLocal_2379 == 0)
			{
				switch (GlobalFunc_8315())
				{
					case 1:
						func_922();
						if (!iLocal_637)
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 2f, 3);
							iLocal_637 = 1;
						}
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744) < 75400f)
						{
							GlobalFunc_2216(Local_1744.f_2, Local_1744, 200f, 0.9f, 0);
						}
						else
						{
							GlobalFunc_2216(Local_1744.f_2, Local_1744, 60f, 0.9f, 0);
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744) > 72000f)
							{
								STREAMING::REQUEST_MODEL(Local_1020[0 /*33*/].f_1);
								STREAMING::REQUEST_ANIM_DICT("missexile2ig_5");
								STREAMING::REQUEST_ANIM_DICT("missexile2deer_crash");
								VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_846);
								VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_846);
								AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS");
								AUDIO::PREPARE_MUSIC_EVENT("EXL2_DEER");
								STREAMING::REQUEST_PTFX_ASSET();
							}
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744) > 85400f)
							{
								MISC::SET_INSTANCE_PRIORITY_HINT(0);
								if ((HUD::DOES_BLIP_EXIST(Local_1744.f_2) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1946.126f, 4473.044f, 25.943f, -1979.192f, 4435.007f, 46.443f, 106.1f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1914.003f, 4463.934f, 25.943f, -1957.432f, 4414.501f, 46.443f, 51.9f, 0, 1, 0))) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1959.981f, 4434.166f, 25.943f, -1968.885f, 4423.886f, 46.443f, 19.2f, 0, 1, 0))
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
									PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
									GlobalFunc_5652(&Local_2282, 1, 0);
									func_602(0, 1);
									func_883();
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("radi"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sabregt"));
									VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(6, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(7, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(8, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(9, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(10, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(11, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(12, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(13, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(14, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(15, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(16, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(17, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(18, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(19, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(100, "lkexcile2_chase");
									if (ENTITY::DOES_ENTITY_EXIST(Local_1714))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1714, 1, 1, 1, 1, 1, 0, 0, 0);
									}
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOLLOW_CAR"))
									{
										AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
									}
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOCUS_CAM"))
									{
										AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOCUS_CAM");
									}
									GRAPHICS::_0x46D1A61A21F566FC(1f);
									func_610();
									iLocal_2334 = 0;
									iLocal_2333 = 3;
									return 1;
								}
								else
								{
									iLocal_796 = 1;
								}
							}
						}
						break;
					}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}


void func_922()//Position - 0x86DDB
{
	GlobalFunc_9194(&Local_2282, ENTITY::GET_ENTITY_COORDS(Local_1744, 1), 0.01f, 0.01f, 0.01f, 0, Local_1729.x, "FS_CHASE", "", "FS_car", 0, 0, 0, -1);
	if (HUD::DOES_BLIP_EXIST(Local_2282.f_5))
	{
		HUD::SET_BLIP_ALPHA(Local_2282.f_5, 0);
		HUD::SET_BLIP_ROUTE(Local_2282.f_5, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_1744.f_2))
		{
			Local_1744.f_2 = GlobalFunc_6783(Local_1744, 1, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_1744.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_1744.f_2));
	}
}

void func_923()//Position - 0x86E6B
{
	if (!HUD::DOES_BLIP_EXIST(Local_1759.f_2))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1759))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1)
			{
				Local_1759.f_2 = GlobalFunc_6783(Local_1759, 0, 0);
			}
		}
	}
	else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1759))
	{
		HUD::REMOVE_BLIP(&(Local_1759.f_2));
	}
}

void func_924()//Position - 0x86EC8
{
	int iVar0;
	
	if (iLocal_711 >= 2)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	switch (iLocal_711)
	{
		case 0:
			func_568();
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			STREAMING::REQUEST_ANIM_DICT(sLocal_7344);
			iLocal_711++;
			break;
		
		case 1:
			while ((((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2018) || !STREAMING::HAS_MODEL_LOADED(Local_1729.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1744.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_887[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1648.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("radi"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sabregt"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2switch")) || !STREAMING::HAS_ANIM_DICT_LOADED("missswitch")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_7344))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_711++;
			break;
		
		case 2:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if (iVar0 >= 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() >= 0)
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						PED::SET_CREATE_RANDOM_COPS(0);
						MISC::CLEAR_AREA(-2664.224f, 2689.3f, 15.7681f, 10000f, 1, 0, 0, 0);
						Local_1729.x = VEHICLE::CREATE_VEHICLE(Local_1729.f_1, -2646.31f, 2677.32f, 16.6427f, 350.3382f, 1, 1);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1729.x, 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1729.x, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1729.x, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1729.x, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1729.x, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(Local_1729.x, 0, 0);
						AUDIO::SET_VEH_RADIO_STATION(Local_1729.x, "RADIO_03_HIPHOP_NEW");
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 100, "lkexcile2_chase", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1729.x, 7500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1729.x, 1);
						func_914();
						ENTITY::SET_ENTITY_VISIBLE(Local_1729.x, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_1744, 0);
						STREAMING::ALLOW_PLAYER_SWITCH_PAN();
						iLocal_711++;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_8315() == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1729.x, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1729.x, -1);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_173(&uLocal_2114, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
				}
				iLocal_711++;
			}
			func_906();
			break;
		
		case 4:
			func_906();
			if (func_926(1))
			{
				Local_2063.f_16 = 1;
				iLocal_2379 = 5;
				GlobalFunc_576();
				iLocal_711++;
			}
			break;
		
		case 5:
			func_906();
			if (!func_910(&iLocal_4862, &iLocal_6103))
			{
			}
			else
			{
				GlobalFunc_2874(0);
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 183);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				switch (GlobalFunc_8315())
				{
					case 1:
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
						AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1729.x))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1729.x);
						}
						ENTITY::SET_ENTITY_PROOFS(Local_1729.x, 0, 0, 0, 0, 0, 0, 0, 0);
						iLocal_704 = MISC::GET_GAME_TIMER();
						iLocal_656 = 0;
						iLocal_788 = 0;
						iLocal_706 = 1;
						iLocal_2334 = 1;
						iLocal_2333 = 2;
						GlobalFunc_Checkpoint2(1, "start of car chase", 0, 0, 0, 1);
						break;
					}
			}
			break;
		
		case 6:
			break;
	}
}


int func_926(int iParam0)//Position - 0x873F2
{
	int iVar0;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
		if (iVar0 >= 8)
		{
			if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < iParam0)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_927()//Position - 0x87423
{
	int iVar0;
	
	if (iLocal_2334 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("Exile_2_int", 8);
		if (func_938(15, &uLocal_2308, 1, 1, 0, 0, 0))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
						break;
					
					case 2:
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michael", 2, GlobalFunc_4917(0), 0);
						break;
				}
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_2334 = 1;
			}
		}
	}
	if (iLocal_2334 == 1)
	{
		switch (iLocal_701)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GlobalFunc_9140(&uLocal_2308, 0, 0, 2000, 1, 1, 0, 1);
					STREAMING::_0xEF39EE20C537E98C(1981.127f, 3830.467f, 31.4241f, GlobalFunc_590(0f, 0f, 296f));
					GlobalFunc_9805(1994.075f, 3816.573f, 31.096f, 1983.271f, 3834.697f, 35.396f, 22.5f, 1994.902f, 3822.999f, 31.1571f, 211.22f, GlobalFunc_625(), 1, 1, 1, 0, 0);
					func_929(1994.902f, 3822.999f, 31.1571f, 211.22f);
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
					}
					GlobalFunc_6791(2, 0);
					MISC::CLEAR_AREA(1984.265f, 3818.762f, 31.38f, 10000f, 1, 0, 0, 0);
					iLocal_701++;
				}
				break;
			
			case 1:
				STREAMING::REQUEST_MODEL(iLocal_2017);
				STREAMING::REQUEST_MODEL(iLocal_2016);
				STREAMING::REQUEST_MODEL(Local_1759.f_1);
				VEHICLE::REQUEST_VEHICLE_ASSET(Local_1759.f_1, 15);
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0)))
								{
									uLocal_2019[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0));
								}
								break;
							
							case 2:
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0)))
								{
									uLocal_2019[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0));
								}
								break;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1759))
						{
							if (STREAMING::HAS_MODEL_LOADED(Local_1759.f_1))
							{
								func_570(&Local_1759, 2, Local_1759.f_3, Local_1759.f_6, 1, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
						{
							if (GlobalFunc_8315() == 0)
							{
								GlobalFunc_9134(&uLocal_2019, 2);
								GlobalFunc_10991(&uLocal_2019, 1, 1, 0);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.127f, 3830.467f, 31.4241f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 218.8945f);
							GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
							GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
							TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1759, -1, -1, 1f, 3, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
						{
							if (GlobalFunc_8315() == 0)
							{
								GlobalFunc_9134(&uLocal_2019, 2);
								GlobalFunc_10991(&uLocal_2019, 1, 1, 0);
							}
							if (!PED::IS_PED_INJURED(uLocal_2019[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[0]);
								ENTITY::SET_ENTITY_COORDS(uLocal_2019[0], 1982.651f, 3827.786f, 31.41647f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_2019[0], 332.5456f);
								GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
								GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
								TASK::TASK_ENTER_VEHICLE(uLocal_2019[0], Local_1759, 30000, 0, 2f, 1, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_2019[0], 0, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							RECORDING::_0x81CBAE94390F9F89();
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(95f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						}
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						iLocal_2334 = 2;
					}
				}
				else
				{
					func_629(0, 0, 0, 0f, 0f, 0, 0);
					iLocal_2334 = 0;
					iLocal_2333 = 2;
				}
				break;
			}
	}
	if (iLocal_2334 == 2)
	{
		STREAMING::REQUEST_MODEL(iLocal_2017);
		STREAMING::REQUEST_MODEL(iLocal_2016);
		STREAMING::REQUEST_MODEL(Local_1759.f_1);
		VEHICLE::REQUEST_VEHICLE_ASSET(Local_1759.f_1, 15);
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0)))
					{
						uLocal_2019[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0));
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0)))
					{
						uLocal_2019[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0));
					}
					break;
			}
		}
		else if (((STREAMING::HAS_MODEL_LOADED(iLocal_2017) && STREAMING::HAS_MODEL_LOADED(iLocal_2016)) && STREAMING::HAS_MODEL_LOADED(Local_1759.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1759.f_1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1759))
			{
				func_570(&Local_1759, 2, Local_1759.f_3, Local_1759.f_6, 1, 0);
			}
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_9134(&uLocal_2019, 2);
				GlobalFunc_10991(&uLocal_2019, 1, 1, 0);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.127f, 3830.467f, 31.4241f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 218.8945f);
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_173(&uLocal_2114, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
			TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1759, -1, -1, 1f, 3, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_2019[0]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_2019[0]);
				ENTITY::SET_ENTITY_COORDS(uLocal_2019[0], 1982.651f, 3827.786f, 31.41647f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_2019[0], 332.5456f);
				GlobalFunc_11267(uLocal_2019[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_173(&uLocal_2114, 0, uLocal_2019[0], "michael", 0, 1);
				TASK::TASK_ENTER_VEHICLE(uLocal_2019[0], Local_1759, -1, 0, 2f, 1, 0);
			}
			func_444(0, 90f, 0f, 0);
			iLocal_2334 = 0;
			iLocal_2333 = 2;
		}
	}
	if (iLocal_2334 == 3)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
	}
}


void func_929(struct<3> Param0, float fParam3)//Position - 0x87AA4
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			GlobalFunc_10013(iVar0, Param0, fParam3, 24, 0);
		}
	}
}









bool func_938(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x884A6
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_939(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_939(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x884D4
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9141(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}





















void func_960()//Position - 0x8A6C1
{
	if (iLocal_2333 != 20)
	{
		func_618();
		if (ENTITY::DOES_ENTITY_EXIST(Local_1714))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1714, 0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_1714, 1000);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1714, 1000f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1714, 1000f);
				ENTITY::SET_ENTITY_PROOFS(Local_1714, 1, 1, 1, 1, 1, 0, 0, 0);
			}
		}
		STREAMING::CLEAR_FOCUS();
		GRAPHICS::SET_SEETHROUGH(0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
		{
			AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
		}
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_4935();
		if ((iLocal_2333 == 7 || iLocal_2333 == 8) || iLocal_2333 == 10)
		{
			bLocal_636 = true;
		}
		iLocal_786 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("EXL2_MISSION_FAIL");
		GlobalFunc_10835(sLocal_768);
		iLocal_2333 = 20;
	}
}










int func_970()//Position - 0x8B5AC
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_2333)
	{
		case 0:
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				return 1;
			}
			if (GlobalFunc_693(&Local_1759))
			{
				return 1;
			}
			if (GlobalFunc_693(&Local_1714))
			{
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (func_972(&Local_1714))
			{
				sLocal_768 = "FS_HELISTUCK";
				return 1;
			}
			if (GlobalFunc_693(&Local_1729))
			{
				sLocal_768 = "FS_CARDEAD";
				return 1;
			}
			if (GlobalFunc_8315() == 1)
			{
				if (func_972(&Local_1729))
				{
					sLocal_768 = "FS_CARSTUCK";
					return 1;
				}
			}
			if (GlobalFunc_693(&Local_1759))
			{
				sLocal_768 = "FS_CARDEAD2";
				return 1;
			}
			if (GlobalFunc_8315() == 2)
			{
				if (func_972(&Local_1759))
				{
					sLocal_768 = "FS_CARSTUCK2";
					return 1;
				}
			}
			if (GlobalFunc_693(&Local_1744))
			{
			}
			switch (GlobalFunc_8315())
			{
				case 1:
					if (!Local_2063.f_16)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744, 0))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1744, 1), 1) > 200f)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1744))
								{
									sLocal_768 = "FS_FAIL_0";
									return 1;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1744, 1), 1) > 300f)
								{
									sLocal_768 = "FS_FAIL_0";
									return 1;
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2203.082f, 4411.719f, 48.152f, -2155.247f, 4394.323f, 76.352f, 5f, 0, 1, 0))
					{
						iVar0 = 0;
						while (iVar0 <= (Local_887 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_887[iVar0 /*33*/]))
							{
								PED::DELETE_PED(&(Local_887[iVar0 /*33*/]));
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1744))
						{
							VEHICLE::DELETE_VEHICLE(&Local_1744);
						}
						sLocal_768 = "FS_FAIL_0";
						return 1;
					}
					if (iLocal_796)
					{
						sLocal_768 = "FS_FAIL_0";
						return 1;
					}
					Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (Var1.f_2 < 10f)
					{
						sLocal_768 = "FS_FAIL_0";
						return 1;
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744) > 92000f)
						{
							sLocal_768 = "FS_FAIL_0";
							return 1;
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_2019[0]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_2019[0]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[0], 1), 1) > 200f)
							{
								sLocal_768 = "FS_FAIL_1";
								return 1;
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[0], 1), 1) > 300f)
						{
							sLocal_768 = "FS_FAIL_1";
							return 1;
						}
					}
					break;
			}
			break;
		
		case 3:
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (GlobalFunc_693(&Local_1729))
			{
				sLocal_768 = "FS_CARDEAD";
				return 1;
			}
			if (GlobalFunc_693(&Local_1759))
			{
				return 1;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744) > 92000f)
				{
					sLocal_768 = "FS_FAIL_0";
					return 1;
				}
			}
			break;
		
		case 4:
		case 5:
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (func_972(&Local_1714))
			{
				sLocal_768 = "FS_HELISTUCK";
				return 1;
			}
			if (GlobalFunc_693(&Local_1759))
			{
				sLocal_768 = "FS_CARDEAD2";
				return 1;
			}
			if (GlobalFunc_8315() == 2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (func_972(&Local_1759))
				{
					sLocal_768 = "FS_CARSTUCK2";
					return 1;
				}
			}
			switch (GlobalFunc_8315())
			{
				case 1:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1874.09f, 4485.97f, 25.35f, 1) > 400f)
					{
						sLocal_768 = "FS_FAIL_8";
						return 1;
					}
					break;
				
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1874.783f, 4484.71f, 90f, 1) < 120f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							sLocal_768 = "FS_FAIL_2";
							return 1;
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[0], 1), 1) > 200f)
					{
						sLocal_768 = "FS_FAIL_1";
						return 1;
					}
					if (iLocal_696 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 1000f)
						{
							sLocal_768 = "FS_FAIL_10";
							return 1;
						}
					}
					else if (iLocal_696 > 0)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1714) > 15f)
							{
								sLocal_768 = "FS_FAIL_10";
								return 1;
							}
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 200f)
						{
							sLocal_768 = "FS_FAIL_10";
							return 1;
						}
					}
					break;
			}
			break;
		
		case 6:
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (func_972(&Local_1714))
			{
				sLocal_768 = "FS_HELISTUCK";
				return 1;
			}
			if (GlobalFunc_693(&Local_1759))
			{
				sLocal_768 = "FS_CARDEAD2";
				return 1;
			}
			if (func_972(&Local_1759))
			{
				sLocal_768 = "FS_CARSTUCK2";
				return 1;
			}
			if (GlobalFunc_8315() == 2)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[0], 1), 1) > 200f)
				{
					sLocal_768 = "FS_FAIL_3";
					return 1;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			if (GlobalFunc_8315() == 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1627.1f, 4413.2f, 3.66f, 1) > 450f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_887[3 /*33*/]))
					{
						sLocal_768 = "FS_FAIL_4";
					}
					else
					{
						sLocal_768 = "FS_FAIL_0";
					}
					return 1;
				}
			}
			func_971();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1774, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1774))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1774) > 3000f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_887[3 /*33*/]))
						{
							sLocal_768 = "FS_FAIL_4";
						}
						else
						{
							sLocal_768 = "FS_FAIL_0";
						}
						return 1;
					}
				}
			}
			break;
		
		case 8:
		case 9:
		case 10:
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			switch (GlobalFunc_8315())
			{
				case 1:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1627.1f, 4413.2f, 3.66f, 1) > 600f)
					{
						sLocal_768 = "FS_FAIL_5";
						return 1;
					}
					break;
				
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), 1) > 700f)
					{
						sLocal_768 = "FS_FAIL_6";
						return 1;
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 700f)
					{
						sLocal_768 = "FS_FAIL_8";
						return 1;
					}
					if (iLocal_2333 == 10)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1714) > 15f)
							{
								sLocal_768 = "FS_FAIL_10";
								return 1;
							}
						}
						if (func_972(&Local_1714))
						{
							sLocal_768 = "FS_HELISTUCK";
							return 1;
						}
					}
					break;
			}
			break;
		
		case 11:
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1714, 1), 1) > 200f)
			{
				sLocal_768 = "FS_FAIL_10";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[0], 1), 1) > 200f)
			{
				sLocal_768 = "FS_FAIL_3";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_2019[1], 1), 1) > 200f)
			{
				sLocal_768 = "FS_FAIL_7";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1648, 1), 1) > 200f)
			{
				sLocal_768 = "FS_FAIL_8";
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1714, 0))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1714) > 15f)
				{
					sLocal_768 = "FS_FAIL_10";
					return 1;
				}
			}
			if (func_972(&Local_1714))
			{
				sLocal_768 = "FS_HELISTUCK";
				return 1;
			}
			break;
		
		case 12:
			if (GlobalFunc_693(&Local_1714))
			{
				sLocal_768 = "FS_HELIDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[0])))
			{
				sLocal_768 = "FS_MICHDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[1])))
			{
				sLocal_768 = "FS_FRANDEAD";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_2019[2])))
			{
				sLocal_768 = "FS_TREVDEAD";
				return 1;
			}
			if (GlobalFunc_694(&Local_1648))
			{
				sLocal_768 = "FS_CHOP_DEAD";
				return 1;
			}
			break;
	}
	return 0;
}

int func_971()//Position - 0x8C156
{
	if (GlobalFunc_8315() == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1627.1f, 4413.2f, 3.66f, 1) < 450f)
		{
			if (GlobalFunc_663("FS_GOD_3", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("FS_GOD_3");
			}
			iLocal_702 = MISC::GET_GAME_TIMER();
		}
		else
		{
			if (!iLocal_633)
			{
				GlobalFunc_164("FS_GOD_3", 7500, 1);
				iLocal_633 = 1;
			}
			if (GlobalFunc_588(&iLocal_702, 7000))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_887[3 /*33*/]))
				{
					sLocal_768 = "FS_FAIL_4";
				}
				else
				{
					sLocal_768 = "FS_FAIL_0";
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_972(int iParam0)//Position - 0x8C1F7
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



void func_975()//Position - 0x8C2A3
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	GlobalFunc_696();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(1f);
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 183);
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Exile2_Thermal_Scope");
	GlobalFunc_7621(61, 1, 0, 1, 0);
	func_980();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	HUD::REQUEST_ADDITIONAL_TEXT("FORSNIP", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("TM44AUD", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	Local_867 = { -2353.046f, 4401.454f, 0f };
	Local_870 = { -1198.511f, 4483.355f, 100f };
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	func_883();
	PED::ADD_SCENARIO_BLOCKING_AREA(-1692f, 4577f, 120f, -2112f, 4339f, -100f, 0, 1, 1, 1);
	GlobalFunc_8032(20, 1702.948f, 3272.022f, 40.1539f, 247.3247f);
	GlobalFunc_7695(20);
	GlobalFunc_76(20);
	func_594();
	iLocal_2307 = GlobalFunc_2576();
	GlobalFunc_2874(1);
	GlobalFunc_601(4, 1);
	if (GlobalFunc_Is_Mission_Retry())
	{
		iLocal_2336 = 1;
		if (!Global_84544)
		{
			switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
			{
				case 0:
					func_569();
					break;
				
				case 1:
					func_507();
					break;
				
				case 2:
					func_504();
					break;
				
				case 3:
					func_488();
					break;
				
				case 4:
					func_457();
					break;
				
				case 5:
					func_395();
					break;
			}
		}
		else
		{
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint() + 1;
			switch (iVar0)
			{
				case 1:
					func_507();
					break;
				
				case 2:
					func_504();
					break;
				
				case 3:
					func_488();
					break;
				
				case 4:
					func_457();
					break;
				
				case 5:
					func_395();
					break;
				
				case 6:
					func_4();
					break;
				}
		}
		iLocal_2336 = 0;
	}
	else if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iLocal_2333 = 1;
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
		GlobalFunc_Checkpoint2(0, "start of mission", 0, 0, 0, 1);
	}
	else
	{
		func_976();
	}
}

void func_976()//Position - 0x8C4D4
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1974.965f, 3814.863f, 32.4249f, 5f, 1, 0, 0, 0);
	func_341(0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1974.965f, 3814.863f, 32.4249f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 80.0455f);
	STREAMING::NEW_LOAD_SCENE_START(1974.965f, 3814.863f, 32.4249f, GlobalFunc_590(0f, 0f, 80.0455f), 100f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	CUTSCENE::REQUEST_CUTSCENE("Exile_2_int", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
			break;
		
		case 2:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michael", 2, GlobalFunc_4917(0), 0);
			break;
	}
	GlobalFunc_8316(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::_0xEF39EE20C537E98C(1981.127f, 3830.467f, 31.4241f, GlobalFunc_590(0f, 0f, 296f));
	GlobalFunc_9805(1994.075f, 3816.573f, 31.096f, 1983.271f, 3834.697f, 35.396f, 22.5f, 1994.902f, 3822.999f, 31.1571f, 211.22f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
	func_929(1994.902f, 3822.999f, 31.1571f, 211.22f);
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
	}
	GlobalFunc_6791(2, 0);
	MISC::CLEAR_AREA(1984.265f, 3818.762f, 31.38f, 10000f, 1, 0, 0, 0);
	iLocal_701 = 1;
	iLocal_2334 = 1;
	iLocal_2333 = 0;
	CAM::DO_SCREEN_FADE_IN(800);
	GlobalFunc_Checkpoint2(0, "start of mission", 0, 0, 0, 1);
}




void func_980()//Position - 0x8C764
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_2356);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_2357);
	PED::ADD_RELATIONSHIP_GROUP("animal_group", &iLocal_2358);
}







void func_987()//Position - 0x90BE1
{
	GlobalFunc_4935();
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_699();
	GRAPHICS::_0x46D1A61A21F566FC(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
		}
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	}
	func_988();
	GlobalFunc_5652(&Local_2282, 1, 0);
	GlobalFunc_2224(0);
	GlobalFunc_8032(20, 0f, 0f, 0f, 0f);
	GlobalFunc_7632(0);
	GlobalFunc_4937(0, 0);
	GlobalFunc_1998(0);
	GlobalFunc_2874(0);
	func_602(0, 1);
	GlobalFunc_5883(&Local_2063);
	func_19(&Local_2097, 1);
	func_17(&Local_2097, &uLocal_2019);
	PAD::_0xCB0360EFEFB2580D(0);
	GlobalFunc_601(4, 0);
	GRAPHICS::_0x5DEBD9C4DC995692();
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_MISSION_FAIL");
	CAM::DESTROY_ALL_CAMS(0);
	STREAMING::CLEAR_FOCUS();
	GlobalFunc_4948(&uLocal_2321, 0, 0);
	GRAPHICS::SET_SEETHROUGH(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_867, Local_870, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::REMOVE_ANIM_DICT(sLocal_7344);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2337))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_2337, 1), 4, 1f, 1, 0, 1065353216);
		ENTITY::DELETE_ENTITY(&iLocal_2337);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_726))
		{
			AUDIO::STOP_SOUND(iLocal_726);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_837))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_837, 0);
	}
	func_611();
	MISC::SET_TIME_SCALE(1f);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_988()//Position - 0x90DD9
{
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[2 /*3*/] = { 0f, 0f, 0f };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[2] = 0f;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[2] = 0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[2 /*3*/] = { 0f, 0f, 0f };
}




void func_992()//Position - 0x90EFA
{
	if (GlobalFunc_8315() == 1)
	{
		switch (GlobalFunc_2780())
		{
			case 0:
				GlobalFunc_586(0);
				break;
			
			case 1:
				GlobalFunc_586(2);
				break;
			
			case 2:
				GlobalFunc_586(2);
				break;
		}
		GlobalFunc_5129(1980.352f, 3816.627f, 31.2685f, 298.2293f);
	}
}


