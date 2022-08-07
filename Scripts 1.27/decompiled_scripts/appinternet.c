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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_171[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192 = 0;
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
	var uLocal_204 = 8;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 2;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 8;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 8;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	bool bLocal_234 = 0;
	struct<10> Local_235 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	float fLocal_252 = 0f;
	float fLocal_253 = 0f;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_308[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_359[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_410[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	bool bLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	bool bLocal_491 = 0;
	bool bLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	char cLocal_507[64] = "";
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523 = 0;
	float fLocal_524 = 0f;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	var uLocal_527 = 16;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
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
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	struct<57> Local_698 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	struct<57> Local_1011 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_1323 = 0;
	int iLocal_1324 = 0;
	struct<3> Local_1325 = { 0, 0, 0 } ;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	struct<16> Local_1331[10];
	struct<16> Local_1492[2];
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int iLocal_1527 = 0;
	struct<3> Local_1528 = { 0, 0, 0 } ;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	struct<13> Local_1534 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1547 = 0;
	int iLocal_1548 = 0;
	struct<954> Local_1549 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_2515 = 0;
	int iLocal_2516 = 0;
	int iLocal_2517 = 0;
	int iLocal_2518 = 0;
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	char cLocal_2524[64] = "";
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	int iLocal_2540 = 0;
	int iLocal_2541 = 0;
	struct<16> Local_2542[1];
	int iLocal_2559 = 0;
	int iLocal_2560 = 0;
	char cLocal_2561[24] = "";
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	var uLocal_2569 = 0;
	int iLocal_2570 = 0;
	int iLocal_2571 = 0;
	int iLocal_2572 = 0;
	int iLocal_2573 = 0;
	bool bLocal_2574 = 0;
	bool bLocal_2575 = 0;
	int iLocal_2576 = 0;
	int iLocal_2577 = 0;
	int iLocal_2578 = 0;
	int iLocal_2579 = 0;
	int iLocal_2580 = 0;
	int iLocal_2581 = 0;
	int iLocal_2582 = 0;
	int iLocal_2583 = 0;
	int iLocal_2584 = 0;
	int iLocal_2585 = 0;
	int iLocal_2586 = 0;
	int iLocal_2587 = 0;
	int iLocal_2588 = 0;
	int iLocal_2589 = 0;
	int iLocal_2590 = 0;
	int iLocal_2591 = 0;
	int iLocal_2592 = 0;
	int iLocal_2593 = 0;
	int iLocal_2594 = 0;
	int iLocal_2595 = 0;
	float fLocal_2596 = 0f;
	float fLocal_2597 = 0f;
	float fLocal_2598 = 0f;
	float fLocal_2599 = 0f;
	int iLocal_2600 = 0;
	bool bLocal_2601 = 0;
	bool bLocal_2602 = 0;
	int iLocal_2603 = 0;
	bool bLocal_2604 = 0;
	int iLocal_2605 = 0;
	int iLocal_2606 = 0;
	int iLocal_2607 = 0;
	int iLocal_2608 = 0;
	int iLocal_2609 = 0;
	struct<43> Local_2610 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_2664 = -1;
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
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = -1;
	int iLocal_2682 = 0;
	int iLocal_2683 = 0;
	int iLocal_2684 = 0;
	int iLocal_2685 = 0;
	int iLocal_2686 = 0;
	int iLocal_2687 = 0;
	int iLocal_2688 = 0;
	struct<2> Local_2689 = { 0, 0 } ;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	int iLocal_2693 = 0;
	int iLocal_2694 = 0;
	int iLocal_2695 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	int iVar321;
	int iVar322;
	int iVar323;
	int iVar324;
	int iVar325;
	bool bVar326;
	int iVar327;
	int iVar328;
	struct<16> Var329;
	int iVar345;
	bool bVar346;
	bool bVar347;
	int iVar348;
	bool bVar349;
	float fVar350;
	int iVar351;
	int iVar352;
	int iVar353;
	int iVar354;
	
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
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = -1;
	iLocal_46 = -1;
	iLocal_48 = -1;
	bLocal_234 = true;
	iLocal_493 = 1;
	iLocal_498 = -1;
	iLocal_503 = -1;
	iLocal_504 = -1;
	iLocal_505 = -1;
	iLocal_506 = -1;
	fLocal_524 = 0f;
	iLocal_694 = -1;
	iLocal_697 = -1;
	iLocal_2559 = 1;
	iLocal_2560 = joaat("ARROW");
	StringCopy(&cLocal_2561, "", 24);
	iLocal_2568 = -1;
	iLocal_2571 = -1;
	iLocal_2572 = -1;
	iLocal_2573 = -1;
	fLocal_2596 = 0f;
	fLocal_2597 = 0f;
	fLocal_2598 = 0f;
	fLocal_2599 = 0f;
	iLocal_2607 = -1;
	iLocal_2683 = -1;
	iLocal_2684 = -1;
	iLocal_2695 = -1;
	Global_54739 = 0;
	Global_67132 = -1;
	GlobalFunc_1589();
	func_776();
	uVar0 = 160;
	if (GlobalFunc_456())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_3)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_774();
	Global_54737 = 1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_1526 = 0;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 1)
	{
		return;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		Global_14393.f_1 = 3;
		return;
	}
	func_773(1, 0, 0);
	iVar321 = 0;
	iVar322 = 0;
	iVar323 = 0;
	bLocal_486 = false;
	Global_67092 = 0;
	Global_67061 = 0;
	iVar324 = unk_0x67D02A194A2FC2BD("font_lib_web");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar324))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_702(1, 1, 1))
	{
		iLocal_494 = 1;
	}
	if (Global_67067 == 2)
	{
	}
	if (iLocal_495 == 0)
	{
		iLocal_495 = unk_0x67D02A194A2FC2BD("web_browser");
	}
	iVar325 = (Global_67134 + Global_67068);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_495))
	{
		SYSTEM::WAIT(0);
	}
	func_771(0);
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		Global_67114 = ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	}
	func_761();
	if (Global_67067 == 2)
	{
		iVar325 = (iVar325 - Global_67134);
		if (iVar325 > 0)
		{
			SYSTEM::WAIT(iVar325);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ATM_WINDOW", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		func_760(&iLocal_495, "SET_WIDESCREEN", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		func_760(&iLocal_495, "SET_WIDESCREEN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (Global_67067 == 2)
	{
		func_760(&iLocal_495, "SET_BROWSER_SKIN", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else if (Global_68245)
	{
		func_760(&iLocal_495, "SET_BROWSER_SKIN", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		switch (GlobalFunc_8329())
		{
			case 0:
				func_760(&iLocal_495, "SET_BROWSER_SKIN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			
			case 1:
				func_760(&iLocal_495, "SET_BROWSER_SKIN", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			
			case 2:
				func_760(&iLocal_495, "SET_BROWSER_SKIN", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			}
	}
	Global_67058 = 1;
	bVar326 = false;
	GlobalFunc_6685(1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 1);
	}
	if (Global_68245)
	{
		HUD::SET_MULTIPLAYER_WALLET_CASH();
		HUD::SET_MULTIPLAYER_BANK_CASH();
		GlobalFunc_1560();
	}
	if (!Global_67092)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
	}
	while (Global_67058)
	{
		if (iLocal_2694 || iLocal_2693)
		{
			if (!AUDIO::IS_GAME_IN_CONTROL_OF_MUSIC())
			{
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("WEB_EPSILONISM_SITE_MUSIC_SCENE");
				iLocal_2694 = 0;
				iLocal_2693 = 0;
			}
		}
		if (iLocal_487)
		{
			func_773(1, 0, 0);
			iLocal_487 = 0;
		}
		else
		{
			iVar327 = HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(0);
			if (iVar327 == 0)
			{
				if (iLocal_489)
				{
					iLocal_487 = 1;
					iLocal_489 = 0;
				}
			}
			else if (!iLocal_489)
			{
				iLocal_487 = 1;
				iLocal_489 = 1;
			}
			iVar328 = 0;
			if (iVar328 == 0)
			{
				if (iLocal_488)
				{
					iLocal_487 = 1;
					iLocal_488 = 0;
				}
			}
			else if (!iLocal_488)
			{
				iLocal_487 = 1;
				iLocal_488 = 1;
			}
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				iLocal_487 = 1;
			}
		}
		func_761();
		if ((!GlobalFunc_5085() || GlobalFunc_268()) || CAM::IS_SCREEN_FADED_OUT())
		{
			Global_67058 = 0;
			Global_67061 = 1;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Global_67058 = 0;
			Global_67061 = 1;
		}
		if (Global_67058)
		{
			if (iLocal_2541 == 1)
			{
				iLocal_2541 = 0;
				func_749();
			}
			if (iLocal_1526 > 3)
			{
				if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
				{
					if (HUD::GET_CURRENT_WEBPAGE_ID() != 7 && HUD::GET_CURRENT_WEBPAGE_ID() != 8)
					{
						if (iLocal_1526 != 6)
						{
							iLocal_1526 = 0;
						}
					}
				}
			}
			switch (iLocal_1526)
			{
				case 0:
					func_748();
					func_742();
					break;
				
				case 1:
					if (iLocal_2518 == 0)
					{
						func_741(0, 6);
					}
					else
					{
						func_741((5 * iLocal_2518), 6);
					}
					break;
				
				case 2:
					func_740();
					break;
				
				case 3:
					if (iLocal_2518 == 0)
					{
						func_737(0, 5);
					}
					else
					{
						func_737(0, 5);
					}
					break;
				
				case 4:
					if (iLocal_2540 == 0)
					{
						func_732();
						func_742();
					}
					break;
				
				case 5:
					if (iLocal_2540 == 0)
					{
						func_712();
					}
					break;
				
				case 6:
					if (iLocal_2540 == 0)
					{
						func_711();
					}
					break;
			}
			if (iLocal_2605)
			{
				if (Global_67072 > -1)
				{
					switch (Global_67072)
					{
						case 10:
						case 11:
						case 12:
						case 13:
						case 15:
						case 16:
							if (Global_67071 == 15)
							{
								switch (Global_67075)
								{
									case 2:
										func_658(Global_67072, -1);
										break;
									
									case 3:
										func_657(Global_67072, 7, -1, -1);
										break;
									}
							}
							break;
						
						case 14:
							func_656(iLocal_495);
							break;
						
						case 6:
							if (Global_67075 >= 4)
							{
								func_655(iLocal_495, Global_67075);
							}
							else
							{
								func_654(iLocal_495, Global_67075);
							}
							break;
						
						case 20:
							if (iLocal_506 == 4)
							{
								if (Global_67075 == 0 && Global_67115 < 2)
								{
									if (GlobalFunc_469(GlobalFunc_8329()) >= 199)
									{
										GlobalFunc_10834(GlobalFunc_8329(), 1, 199);
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
										GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
										Global_67115 = 2;
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
										func_651("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							else if (iLocal_506 == 6)
							{
								if (Global_67075 == 0 && Global_67115 < 3)
								{
									if (GlobalFunc_469(GlobalFunc_8329()) >= 4999)
									{
										GlobalFunc_10834(GlobalFunc_8329(), 1, 4999);
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
										GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
										Global_67115 = 3;
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
										func_651("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							else if (iLocal_506 == 8)
							{
								if (Global_67075 == 0 && Global_67115 < 5)
								{
									if (GlobalFunc_469(GlobalFunc_8329()) >= 9999)
									{
										GlobalFunc_10834(GlobalFunc_8329(), 1, 9999);
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
										GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
										GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
										Global_67115 = 5;
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
										func_651("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							break;
						
						case 21:
							if (Global_68245)
							{
								if (Global_67071 == 3)
								{
									func_648(Global_67075);
								}
								else if (Global_67071 == 4)
								{
									func_647(Global_67075);
								}
								else if (Global_67071 == 5)
								{
									func_646(Global_67075);
								}
								else if (Global_67071 == 8)
								{
									func_638(iLocal_495, Global_67075, 334016/*func_640*/);
								}
							}
							break;
						
						default:
							break;
					}
				}
				else
				{
					switch (Global_67074)
					{
						case -1582107009:
							if (!iLocal_501)
							{
								if (iLocal_506 == 2 && Global_67075 == 6)
								{
									func_637("PL_WEB_FOS");
								}
								else if (iLocal_506 == 1 && Global_67075 == 8)
								{
									func_637("PL_WEB_FOS");
								}
								else if (iLocal_506 == 4 && Global_67075 == 8)
								{
									func_637("PL_WEB_FOS");
								}
								else if (iLocal_506 == 4 && Global_67075 == 8)
								{
									func_637("PL_WEB_FOS");
								}
							}
							break;
						
						case -1144347054:
							if (!iLocal_501)
							{
								if (Global_67075 == 7)
								{
									func_637("PL_WEB_HOWITZER");
								}
							}
							break;
						
						case -399181701:
							if (!iLocal_501)
							{
								if (Global_67075 == 6)
								{
									func_637("PL_WEB_KFLF");
								}
							}
							break;
						
						case 168455551:
							if (!(MISC::IS_PC_VERSION() && !DLC::IS_DLC_PRESENT(729266842)))
							{
								if (!iLocal_501)
								{
									if (Global_67075 == 6)
									{
										func_637("PL_WEB_PRB2");
									}
								}
							}
							break;
						
						case -650963915:
							if (!iLocal_501)
							{
								if (Global_67075 == 8)
								{
									func_637("PL_WEB_RANGERS");
								}
							}
							break;
						
						case -361339786:
							if (!iLocal_501)
							{
								if (Global_67075 == 3)
								{
									func_637("PL_WEB_RS");
								}
							}
							break;
						
						case -405709583:
							if (Global_67075 == 5)
							{
							}
							break;
						
						case -1015187353:
							if (Global_67071 == 2)
							{
								switch (Global_67075)
								{
									case 0:
										func_635(0, &uLocal_527);
										break;
									
									case 1:
										func_635(1, &uLocal_527);
										break;
									
									case 2:
										func_635(2, &uLocal_527);
										break;
									
									case 3:
										func_635(3, &uLocal_527);
										break;
									
									case 4:
										func_635(4, &uLocal_527);
										break;
									
									case 5:
										func_635(5, &uLocal_527);
										break;
									
									case 6:
										func_635(6, &uLocal_527);
										break;
									}
							}
							break;
						
						default:
							break;
						}
				}
				iLocal_2605 = 0;
			}
			if (HUD::IS_FLOATING_HELP_TEXT_ON_SCREEN(0))
			{
				HUD::CLEAR_FLOATING_HELP(0, 1);
			}
			if (HUD::IS_FLOATING_HELP_TEXT_ON_SCREEN(1))
			{
				HUD::CLEAR_FLOATING_HELP(1, 1);
			}
			func_640(0, 0);
			SYSTEM::WAIT(0);
			PAD::SET_INPUT_EXCLUSIVE(0, Global_14364);
			PAD::SET_INPUT_EXCLUSIVE(0, Global_14365);
			if (Global_67060)
			{
				func_608(iLocal_495);
			}
			else
			{
				func_771(0);
				if (iLocal_2600 == 3)
				{
					func_760(&iLocal_495, "SET_ANALOG_STICK_INPUT", 0f, 0f, 33f, -1082130432, -1082130432);
				}
				else
				{
					func_760(&iLocal_495, "SET_ANALOG_STICK_INPUT", 0f, 0f, 0f, -1082130432, -1082130432);
				}
			}
			if (!bVar326)
			{
				StringCopy(&Var329, "WWW_EYEFIND_INFO", 64);
				switch (Global_67067)
				{
					case 2:
						StringCopy(&Var329, "WWW_BANK_COM", 64);
						break;
					
					case 1:
						StringCopy(&Var329, "WWW_EYEFIND_INFO", 64);
						break;
					
					case 3:
						StringCopy(&Var329, "WWW_LIFEINVADER_COM", 64);
						Global_67066 = -1;
						break;
					
					case 4:
						Global_67066 = -1;
						StringCopy(&Var329, "WWW_LIFEINVADER_COM_S_USER584348_3", 64);
						break;
					
					case 7:
						Var329 = { Global_67042 };
						break;
					
					case 5:
						StringCopy(&Var329, "WWW_BAWSAQ_COM", 64);
						break;
					
					case 6:
						Var329 = { Global_2428131.f_656.f_12 };
						break;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GO_TO_WEBPAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(&Var329);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				bVar326 = true;
			}
			if (iLocal_499 != 0)
			{
				if (bLocal_486)
				{
					Global_67058 = 0;
				}
			}
			if (!bLocal_2575)
			{
				iVar345 = 0;
				bVar346 = false;
				switch (iLocal_499)
				{
					case 0:
						while (!GRAPHICS::HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(iLocal_495) && !bVar346)
						{
							func_771(0);
							if (PAD::_IS_USING_KEYBOARD_2(2))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								fLocal_524 = 0f;
							}
							iVar345 = (iVar345 + SYSTEM::FLOOR((0f + (1000f * SYSTEM::TIMESTEP()))));
							if (iVar345 > 10000)
							{
								bVar346 = true;
							}
							func_640(0, 0);
							if (((!GRAPHICS::HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(iLocal_495) && !bVar346) && iVar345 > 2000) && ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || (PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !HUD::IS_WARNING_MESSAGE_ACTIVE())))
							{
								func_749();
								GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_495);
								return;
							}
							SYSTEM::WAIT(0);
						}
						if (!bVar346)
						{
							iLocal_499 = 2;
						}
						else
						{
							func_749();
						}
						break;
					
					case 2:
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "INITIALISE_WEBSITE");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "IS_SITE_DYNAMIC");
						uLocal_2569 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						iVar345 = Global_67134 + 6000;
						bVar346 = false;
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_2569) && !bVar346)
						{
							func_771(0);
							if (PAD::_IS_USING_KEYBOARD_2(2))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								fLocal_524 = 0f;
							}
							func_640(0, 0);
							if (Global_67134 > iVar345)
							{
								bVar346 = true;
							}
							else
							{
								SYSTEM::WAIT(0);
							}
						}
						if (!bVar346)
						{
							iLocal_2570 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_2569);
						}
						else
						{
							iLocal_2570 = 0;
						}
						func_607();
						if (iLocal_2570 == 1)
						{
							iLocal_505 = -1;
							iLocal_506 = 0;
							iLocal_503 = -1;
							iLocal_504 = 0;
							bLocal_2574 = true;
							iVar321 = 10;
							while (iVar321 != 0)
							{
								iVar321 = (iVar321 - 1);
								if (PAD::_IS_USING_KEYBOARD_2(2))
								{
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								}
								else
								{
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									fLocal_524 = 0f;
								}
								func_640(0, 0);
								SYSTEM::WAIT(0);
							}
							iVar322 = HUD::GET_CURRENT_WEBPAGE_ID();
							iVar323 = HUD::GET_CURRENT_WEBSITE_ID();
							if (iVar322 != 0)
							{
								if (iVar322 != iLocal_2572)
								{
									iLocal_2573 = iLocal_2572;
									iLocal_2572 = iVar322;
								}
							}
							else
							{
								iVar322 = iLocal_2572;
							}
							if (iVar323 != 0)
							{
								if (iVar323 != iLocal_2571)
								{
									iLocal_500 = 0;
								}
								iLocal_2571 = iVar323;
							}
							else
							{
								iVar323 = iLocal_2571;
							}
							switch (Global_67067)
							{
								case 0:
									if (iVar323 == 2)
									{
										func_605();
									}
									func_489(iVar323, iVar322, iLocal_495, &uVar0, &uLocal_527, 1);
									iLocal_493 = 0;
									if (iVar323 == 6)
									{
										if (bLocal_234)
										{
											while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
											{
												func_640(0, 0);
												SYSTEM::WAIT(0);
											}
											if (HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
											{
											}
											Global_67069 = (MISC::GET_GAME_TIMER() - 120);
										}
									}
									break;
								
								case 3:
								case 4:
									bLocal_2604 = true;
									func_489(iVar323, iVar322, iLocal_495, &uVar0, &uLocal_527, 1);
									break;
							}
						}
						else
						{
							iVar321 = 10;
							while (iVar321 != 0)
							{
								iVar321 = (iVar321 - 1);
								if (PAD::_IS_USING_KEYBOARD_2(2))
								{
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								}
								else
								{
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									fLocal_524 = 0f;
								}
								func_640(0, 0);
								SYSTEM::WAIT(0);
							}
							func_102();
							bLocal_2574 = false;
							if (Global_67074 == -1582107009)
							{
								if (GlobalFunc_230(20))
								{
								}
								else
								{
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								}
							}
							if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("act_cinema")) != 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ob_tv")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) != 0)
							{
								if (((((Global_67074 == -1582107009 || Global_67074 == -1144347054) || Global_67074 == -399181701) || Global_67074 == 168455551) || Global_67074 == -650963915) || Global_67074 == -361339786)
								{
									func_100();
								}
								else
								{
									iLocal_502 = 0;
								}
							}
							if (MISC::IS_PC_VERSION() && !DLC::IS_DLC_PRESENT(729266842))
							{
								if (Global_67074 == 168455551)
								{
									func_100();
								}
							}
							if (Global_67074 == -405709583)
							{
								func_100();
							}
						}
						iLocal_499 = 3;
						bLocal_2575 = true;
						break;
				}
			}
			else
			{
				if (bLocal_486)
				{
					Global_67058 = 0;
				}
				if (!GRAPHICS::HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(iLocal_495))
				{
					if (iLocal_2694 || iLocal_2693)
					{
						AUDIO::STOP_STREAM();
						iLocal_2694 = 0;
						iLocal_2693 = 0;
					}
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
					{
						HUD::CLEAR_ADDITIONAL_TEXT(4, 0);
						func_98();
					}
					bLocal_2575 = false;
					Global_67070 = 0;
					iLocal_499 = 0;
				}
				else
				{
					bVar347 = false;
					if (bLocal_2574)
					{
						iLocal_2608 = HUD::GET_CURRENT_WEBPAGE_ID();
						iVar323 = HUD::GET_CURRENT_WEBSITE_ID();
						iVar348 = iLocal_2571;
						if (iVar323 != 0)
						{
							iLocal_2571 = iVar323;
						}
						if (iLocal_2608 != 0)
						{
							iLocal_2572 = iLocal_2608;
						}
						if ((iLocal_2572 != iLocal_2573 || iLocal_2571 != iVar348) || Global_67073 != Global_67074)
						{
							Global_67073 = Global_67074;
							bLocal_2601 = false;
							bVar349 = false;
							switch (iLocal_2571)
							{
								case 4:
									if (iLocal_2573 != 4)
									{
										Global_54737 = 1;
									}
									bVar349 = true;
									break;
								
								case 5:
									if (!iLocal_2694)
									{
										iLocal_2693 = 1;
									}
									break;
								
								case 6:
									if (!GlobalFunc_6687(0) && !bLocal_2604)
									{
									}
									else
									{
										switch (iLocal_2572)
										{
											case 6:
												Global_67062 = 1;
												break;
											
											case 8:
												Global_67063 = 1;
												break;
											}
									}
									break;
								
								case 7:
									if (iLocal_2573 != 7)
									{
										Global_54737 = 1;
									}
									bVar349 = true;
									break;
							}
							func_39(bVar349);
							if (iLocal_2571 == 2)
							{
								func_605();
							}
							func_489(iLocal_2571, iLocal_2572, iLocal_495, &uVar0, &uLocal_527, iLocal_493);
							iLocal_493 = 1;
							iLocal_2573 = iLocal_2572;
							if (iLocal_2693)
							{
								if (AUDIO::IS_GAME_IN_CONTROL_OF_MUSIC())
								{
									while (!AUDIO::LOAD_STREAM("MUSIC", "EPSILONISM_SITE_SOUNDS"))
									{
										func_771(0);
										if (PAD::_IS_USING_KEYBOARD_2(2))
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
										}
										else
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											fLocal_524 = 0f;
										}
										func_640(0, 0);
										SYSTEM::WAIT(0);
									}
									iLocal_2694 = 1;
									AUDIO::PLAY_STREAM_FRONTEND();
									iLocal_2693 = 0;
									AUDIO::START_AUDIO_SCENE("WEB_EPSILONISM_SITE_MUSIC_SCENE");
								}
								else
								{
									iLocal_2694 = 0;
									iLocal_2693 = 0;
								}
							}
						}
						else
						{
							if (Global_51929)
							{
								if (Global_67072 == 4)
								{
									if (!(iLocal_2572 == 9 || iLocal_2572 == 8))
									{
										Global_67070 = 1;
									}
								}
							}
							Global_51929 = 0;
							if (Global_67070)
							{
								if (iLocal_2571 == 2)
								{
									func_605();
								}
								Global_67070 = 0;
								func_489(iLocal_2571, iLocal_2572, iLocal_495, &uVar0, &uLocal_527, iLocal_493);
								iLocal_493 = 1;
							}
						}
					}
					else
					{
						bLocal_2601 = false;
						func_102();
					}
					if (!bVar347)
					{
						if (Global_67132 > -1)
						{
							if (Global_67132 < Global_67134)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GO_TO_WEBPAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(&Global_67116);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								Global_67132 = -1;
							}
						}
					}
				}
				if (bLocal_2574)
				{
					if (iLocal_2571 == 4 || iLocal_2571 == 7)
					{
						fVar350 = (0f + (1f * SYSTEM::TIMESTEP()));
						iVar351 = SYSTEM::FLOOR((fVar350 * 1000f));
						GlobalFunc_183(joaat("time_spent_on_stockmarket"), iVar351);
					}
				}
				iLocal_490 = 1;
				if (Global_67067 != 7)
				{
					if (GlobalFunc_1545())
					{
						if ((!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_470 && !Global_68245) && !GlobalFunc_756())
						{
							func_34();
						}
					}
				}
			}
			if (Global_67136 != iLocal_2695)
			{
				if (Global_67136 > 6)
				{
					Global_67136 = -1;
				}
				if (iLocal_2695 == -1 && Global_67136 > 0)
				{
					CLOCK::PAUSE_CLOCK(1);
					func_32();
				}
				else if (Global_67136 == -1 && iLocal_2695 > 0)
				{
					CLOCK::PAUSE_CLOCK(0);
				}
				if (Global_67136 > -1 && Global_67136 < 6)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "PROXY_FUNCTION");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67136);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iLocal_2695 = Global_67136;
			}
			if (Global_67136 > -1)
			{
				func_19();
			}
			if (iLocal_501)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SUPRESS_HISTORY");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::SET_TV_CHANNEL(-1);
					AUDIO::STOP_AUDIO_SCENE("INTERNET_BROWSER_VIDEO_SCENE");
					iLocal_501 = 0;
				}
				else
				{
					HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, 0.5f, 0.5f, 0f, 255, 255, 255, 255);
				}
			}
		}
		else
		{
			SYSTEM::WAIT(200);
		}
		if (GlobalFunc_153(8, -1))
		{
			Global_67061 = 1;
		}
		if (GlobalFunc_142())
		{
			Global_67061 = 1;
		}
		if (Global_67061 == 1)
		{
			if (bLocal_2575)
			{
				Global_67061 = 0;
				func_749();
			}
		}
		if (bLocal_2601)
		{
			if (iLocal_2603 > 20)
			{
				func_15("BUSY");
				if (bLocal_2602)
				{
					Global_67082 = (Global_67082 + (1 + (Global_67082 + 1 / 50)));
					Global_67070 = 1;
					if (Global_67082 > Global_67084)
					{
						Global_67082 = Global_67084;
					}
				}
				else
				{
					Global_67082 = (Global_67082 - (1 + (Global_67082 + 1 / 100)));
					Global_67070 = 1;
				}
			}
			else
			{
				iLocal_2603++;
			}
		}
		if (bLocal_486)
		{
			Global_67058 = 0;
		}
		if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()) || GlobalFunc_236())
		{
			func_749();
		}
		if (Global_68245 && GlobalFunc_1277())
		{
			func_749();
		}
		if (Global_68245 && GlobalFunc_1591())
		{
			func_749();
		}
		if (!Global_68245 && GlobalFunc_2025())
		{
			func_749();
		}
	}
	if (Global_68245)
	{
		HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
		HUD::REMOVE_MULTIPLAYER_BANK_CASH();
	}
	func_749();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SUPRESS_HISTORY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SHUTDOWN_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_490 = 0;
	func_10();
	SYSTEM::WAIT(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_495);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_496);
	if (iLocal_497 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_497);
	}
	iVar352 = MISC::GET_GAME_TIMER();
	while (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_496) && MISC::GET_GAME_TIMER() <= iVar352 + 500)
	{
		func_10();
		SYSTEM::WAIT(0);
	}
	iLocal_496 = 0;
	if (iLocal_2694 || iLocal_2693)
	{
		AUDIO::STOP_STREAM();
		AUDIO::STOP_AUDIO_SCENE("WEB_EPSILONISM_SITE_MUSIC_SCENE");
		iLocal_2694 = 0;
	}
	Global_67067 = 0;
	if (bLocal_491)
	{
		HUD::DISPLAY_RADAR(1);
	}
	if (bLocal_492)
	{
		AUDIO::STOP_AUDIO_SCENE("WEB_GENERAL_BROWSING_SCENE");
	}
	GlobalFunc_5207("BS_TUT_1", 1);
	iVar352 = MISC::GET_GAME_TIMER();
	while (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_495) && MISC::GET_GAME_TIMER() <= iVar352 + 500)
	{
		func_10();
		SYSTEM::WAIT(0);
	}
	iLocal_495 = 0;
	func_10();
	SYSTEM::WAIT(0);
	if (iLocal_523)
	{
		GlobalFunc_4989(3, 0);
		iLocal_523 = 0;
	}
	iVar353 = Global_67134 + 500;
	iVar354 = 10;
	while (iVar354 > 0)
	{
		func_10();
		Global_67134 = (Global_67134 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		SYSTEM::WAIT(0);
		iVar354 = (iVar354 - 1);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iVar324);
	while (iVar353 > Global_67134)
	{
		func_10();
		Global_67134 = (Global_67134 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		SYSTEM::WAIT(0);
	}
	HUD::CLEAR_ADDITIONAL_TEXT(4, 1);
	if (Global_68245)
	{
		GlobalFunc_1531();
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1548);
	HUD::_FORCE_CLOSE_TEXT_INPUT_BOX();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
	}
	Global_54739 = 0;
	if (GlobalFunc_702(0, 0, iLocal_494))
	{
		iLocal_494 = 0;
	}
}










void func_10()//Position - 0x1BD2
{
	func_761();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
	if (!iLocal_490)
	{
		return;
	}
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 217, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 203, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 204, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 239, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 240, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::ENABLE_CONTROL_ACTION(0, 0, 1);
	if (!CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 3, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 4, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 5, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 6, 1);
	}
	PAD::ENABLE_CONTROL_ACTION(0, 95, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 98, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 209, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 210, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 228, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 229, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 230, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 231, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 218, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 219, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 220, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 221, 1);
	PAD::SET_INPUT_EXCLUSIVE(2, 237);
	PAD::SET_INPUT_EXCLUSIVE(2, 238);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
	if (!(PAD::_IS_USING_KEYBOARD(2) && (HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(0) != 0 && !iLocal_501)))
	{
		PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
	}
	RECORDING::_STOP_RECORDING_THIS_FRAME();
}





void func_15(char* sParam0)//Position - 0x1DFF
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (iLocal_2560 == iVar0)
	{
		return;
	}
	iLocal_2560 = iVar0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_CURSOR_STATE");
	GlobalFunc_726(sParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}




void func_19()//Position - 0x1EC0
{
	if (!GlobalFunc_111() && Global_67136 != -1)
	{
		if (!iLocal_2688)
		{
			if (func_20(&uLocal_527, "EPSWAUD", &Local_2689, 9, 0, 1, 0))
			{
				iLocal_2688 = 1;
			}
		}
		else
		{
			iLocal_2688 = 0;
			Global_67136++;
			switch (Global_67136)
			{
				case 2:
					StringCopy(&Local_2689, "EPSW_VOICE2", 16);
					break;
				
				case 3:
					StringCopy(&Local_2689, "EPSW_VOICE3", 16);
					break;
				
				case 4:
					StringCopy(&Local_2689, "EPSW_VOICE4", 16);
					break;
				
				case 5:
					StringCopy(&Local_2689, "EPSW_VOICE5", 16);
					break;
				
				case 6:
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "PROXY_FUNCTION");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67136);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					Global_67136 = -1;
					break;
				
				default:
					Global_67136 = -1;
					break;
				}
			}
	}
}

bool func_20(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1F91
{
	GlobalFunc_154(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return GlobalFunc_9817(sParam2, iParam3, 0);
}












void func_32()//Position - 0x2604
{
	GlobalFunc_173(&uLocal_527, 0, 0, "CRIS", 0, 1);
	iLocal_2688 = 0;
	StringCopy(&Local_2689, "EPSW_VOICE1", 16);
}


void func_34()//Position - 0x26C3
{
	if (iLocal_526 == 0)
	{
		GlobalFunc_2032(1);
		iLocal_525 = Global_67134 + 7500;
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			Global_67114 = ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
		}
		iLocal_526++;
	}
	if (iLocal_526 != 0)
	{
		switch (iLocal_526)
		{
			case 1:
				Global_67092 = 1;
				StringCopy(&Global_67093, "BROWTUT1", 16);
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					StringCopy(&Global_67093, "BROWTUT1_KM", 16);
				}
				break;
			
			case 2:
				StringCopy(&Global_67093, "BROWTUT2", 16);
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					StringCopy(&Global_67093, "BROWTUT2_KM", 16);
				}
				break;
			
			case 3:
				StringCopy(&Global_67093, "BROWTUT3", 16);
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					StringCopy(&Global_67093, "BROWTUT3_KM", 16);
				}
				break;
			
			case 4:
				StringCopy(&Global_67093, "BROWTUT4", 16);
				break;
			
			case 5:
				StringCopy(&Global_67093, "BROWTUT5", 16);
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					StringCopy(&Global_67093, "BROWTUT5_KM", 16);
				}
				break;
			
			case 6:
				if (MISC::IS_ORBIS_VERSION())
				{
					StringCopy(&Global_67093, "BROWTUT1a", 16);
				}
				else
				{
					iLocal_526++;
				}
				break;
			
			default:
				Global_67092 = 0;
				iLocal_526 = 0;
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_470 = 1;
				GlobalFunc_2032(0);
				break;
		}
		if (iLocal_525 < Global_67134)
		{
			iLocal_525 = Global_67134 + 7500;
			iLocal_526++;
		}
	}
}





void func_39(bool bParam0)//Position - 0x2890
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (bParam0)
	{
		if (!Global_68245)
		{
			if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_99 && !Global_67091)
			{
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_470)
				{
					if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_99)
					{
						GlobalFunc_6677("BS_TUT_1", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_99 = 1;
					}
				}
			}
		}
		if (iLocal_2572 == 8)
		{
			if (iLocal_2573 == 6)
			{
				Global_67078 = 1;
			}
			if (iLocal_2573 == 7)
			{
				Global_67078 = 0;
			}
		}
		if (iLocal_2572 == 9)
		{
			if (iLocal_2573 == 8)
			{
				if (Global_67078)
				{
					switch (GlobalFunc_8329())
					{
						case 0:
							iVar0 = 0;
							iVar1 = 0;
							break;
						
						case 2:
							iVar0 = 2;
							iVar1 = 2;
							break;
						
						case 1:
							iVar0 = 1;
							iVar1 = 1;
							break;
					}
					if (Global_67082 >= 0)
					{
						func_82(iVar1, iVar0, Global_67081, Global_67082, Global_67085);
					}
				}
				else
				{
					switch (GlobalFunc_8329())
					{
						case 0:
							iVar2 = 0;
							iVar3 = 0;
							break;
						
						case 2:
							iVar2 = 2;
							iVar3 = 2;
							break;
						
						case 1:
							iVar2 = 1;
							iVar3 = 1;
							break;
					}
					if (Global_67082 > 0)
					{
						func_78(iVar3, iVar2, Global_67081, Global_67082, Global_67085);
					}
				}
			}
			else if (iLocal_2573 == 16)
			{
				Global_67081 = -2;
				switch (GlobalFunc_8329())
				{
					case 0:
						iVar4 = 0;
						iVar5 = 0;
						break;
					
					case 2:
						iVar4 = 2;
						iVar5 = 2;
						break;
					
					case 1:
						iVar4 = 1;
						iVar5 = 1;
						break;
				}
				func_40(iVar5, iVar4);
			}
		}
		if (iLocal_2573 == 4)
		{
			if (iLocal_2572 == 6 || iLocal_2572 == 7)
			{
				Global_67082 = 0;
			}
		}
		if (iLocal_2572 == 4)
		{
			if (iLocal_2573 == 3 || iLocal_2573 == 2)
			{
				Global_67081 = -1;
			}
		}
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x2A66
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	iVar0 = 0;
	iVar1 = 0;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	bVar6 = false;
	iVar7 = 0;
	while (iVar7 < 10)
	{
		if (GlobalFunc_2035(iParam1, iVar7) > 0)
		{
			fVar8 = func_75(GlobalFunc_2034(iParam1, iVar7));
			if (fVar8 > 0f)
			{
				iVar9 = GlobalFunc_2035(iParam1, iVar7);
				iVar0 = (iVar0 + iVar9);
				iVar1++;
				fVar10 = (IntToFloat(GlobalFunc_2035(iParam1, iVar7)) * fVar8);
				fVar11 = func_70(iParam1, iVar7);
				fVar2 = (fVar2 + fVar10);
				fVar12 = (fVar10 - fVar11);
				if (fVar12 > 0f)
				{
					fVar4 = (fVar4 + fVar12);
				}
				else
				{
					fVar5 = (fVar5 + -fVar12);
				}
				fVar3 = (fVar3 + fVar12);
				if (!bVar6 && fVar12 > 0f)
				{
					bVar6 = true;
				}
			}
		}
		iVar7++;
	}
	if (iVar0 == 0)
	{
		return;
	}
	fVar13 = SYSTEM::TO_FLOAT(GlobalFunc_2033(iParam0));
	fVar14 = (fVar2 + fVar13);
	if (fVar13 < 1f)
	{
		fVar13 = 1f;
	}
	Global_67104 = ((fVar14 / fVar13) * 100f);
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 + SYSTEM::FLOOR(fVar2));
	if (!func_68(0))
	{
		if (bVar6)
		{
			func_68(1);
		}
	}
	if (Global_54734 == 0)
	{
		Global_54734 = SYSTEM::FLOOR(fVar2);
	}
	if (Global_54734 == 0)
	{
		return;
	}
	if (!GlobalFunc_10608(iParam0, 1, 2, Global_54734, 0))
	{
		return;
	}
	Global_54734 = 0;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 10)
	{
		func_43(iParam1, iVar7, 0, 0);
		iVar7++;
	}
	Global_67100 = iVar0;
	Global_67101 = iVar1;
	Global_67102 = fVar4;
	Global_67103 = fVar5;
	Global_67098 = fVar2;
	Global_67099 = fVar3;
	func_41(iParam1);
}

void func_41(int iParam0)//Position - 0x2C08
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_47050[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_47050[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_42(iParam0, iVar0);
				if (Global_47050[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				STATS::STAT_SET_INT(Global_49931[iVar1 /*7*/].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_42(int iParam0, int iParam1)//Position - 0x2C70
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0] == iParam1)
				{
					if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0] > 0)
					{
						return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0] == iParam1)
				{
					if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0] > 0)
					{
						return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0] == iParam1)
				{
					if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0] > 0)
					{
						return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D45
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iParam1];
			break;
		
		case 1:
			iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iParam1];
			break;
		
		case 2:
			iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iParam1];
			break;
	}
	if (Global_47050[iVar0 /*36*/].f_9 <= 0f)
	{
		return;
	}
	iVar1 = 0;
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1] + iParam2);
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1];
				break;
			
			case 1:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1] + iParam2);
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1];
				break;
			
			case 2:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1] + iParam2);
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1];
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1] = iParam2;
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1];
				break;
			
			case 1:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1] = iParam2;
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1];
				break;
			
			case 2:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1] = iParam2;
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1];
				break;
			}
	}
	if (Global_47050[iVar0 /*36*/].f_8)
	{
		iVar2 = Global_47050[iVar0 /*36*/].f_35;
		if (iVar2 > -1)
		{
			STATS::STAT_SET_INT(Global_49931[iVar2 /*7*/].f_3[iParam0], iVar1, 1);
		}
	}
	return;
}

























int func_68(bool bParam0)//Position - 0x3E0A
{
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 <= 0 && !bParam0)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(28))
	{
		return 0;
	}
	GlobalFunc_8960(28, 1);
	return 1;
}


float func_70(int iParam0, int iParam1)//Position - 0x3E52
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0f;
	}
	fVar0 = func_71(GlobalFunc_2034(iParam0, iParam1));
	if (fVar0 > 0f)
	{
		switch (iParam0)
		{
			case 0:
				return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1];
			
			case 1:
				return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1];
			
			case 2:
				return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1];
			}
		
		default:
	}
	return 0f;
}

float func_71(int iParam0)//Position - 0x3ECF
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_47050[iParam0 /*36*/].f_9 * func_72(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_72(int iParam0)//Position - 0x3F03
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (GlobalFunc_526(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (GlobalFunc_526(74) || GlobalFunc_526(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (GlobalFunc_526(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (GlobalFunc_526(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (GlobalFunc_526(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (GlobalFunc_526(93))
			{
				if (!GlobalFunc_526(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (GlobalFunc_526(38))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (GlobalFunc_526(84))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (GlobalFunc_526(90))
			{
				if (!GlobalFunc_526(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (GlobalFunc_526(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (GlobalFunc_526(93))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (GlobalFunc_526(61))
			{
				if (!GlobalFunc_526(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_73(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar1], Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = GlobalFunc_2035(0, iVar4);
		iVar6 = GlobalFunc_2035(1, iVar4);
		iVar7 = GlobalFunc_2035(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_51925[0] + Global_51925[1]) + Global_51925[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar2]));
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar2]));
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

float func_73(int iParam0, int iParam1)//Position - 0x4280
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = MISC::IS_BIT_SET(iParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (MISC::IS_BIT_SET(iParam1, 3))
	{
		iVar3++;
	}
	if (MISC::IS_BIT_SET(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (MISC::IS_BIT_SET(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (MISC::IS_BIT_SET(iParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (MISC::IS_BIT_SET(iParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (MISC::IS_BIT_SET(iParam1, 1))
	{
		if (GlobalFunc_526(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (MISC::IS_BIT_SET(iParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (MISC::IS_BIT_SET(iParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (MISC::IS_BIT_SET(iParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!MISC::IS_BIT_SET(iParam1, 1))
	{
		if (MISC::IS_BIT_SET(iParam1, 6))
		{
			fVar6 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (MISC::IS_BIT_SET(iParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (MISC::IS_BIT_SET(iParam1, 11))
		{
			fVar8 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (MISC::IS_BIT_SET(iParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}


var func_75(int iParam0)//Position - 0x44B8
{
	var uVar0;
	int iVar1;
	
	if (Global_47050[iParam0 /*36*/].f_8)
	{
		uVar0 = func_71(iParam0);
	}
	else
	{
		iVar1 = (Global_47050[iParam0 /*36*/].f_13 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		uVar0 = Global_47050[iParam0 /*36*/].f_14[iVar1];
	}
	return uVar0;
}



void func_78(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x45D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (GlobalFunc_2034(iParam1, iVar1) == iParam2)
		{
			if (GlobalFunc_2035(iParam1, iVar1) > 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = GlobalFunc_2035(iParam1, iVar0);
	fVar3 = func_70(iParam1, iVar0);
	if (GlobalFunc_2035(iParam1, iVar0) < iParam3)
	{
		return;
	}
	if (!GlobalFunc_10608(iParam0, 1, 2, SYSTEM::FLOOR(fParam4), 0))
	{
		return;
	}
	fVar4 = (fParam4 - ((func_70(iParam1, iVar0) / IntToFloat(GlobalFunc_2035(iParam1, iVar0))) * IntToFloat(iParam3)));
	if (fVar4 <= -50000f)
	{
		func_80();
	}
	func_79(iParam1, iVar0, -fParam4, 1);
	func_43(iParam1, iVar0, -iParam3, 1);
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 + SYSTEM::FLOOR(fParam4));
	if (!func_68(0))
	{
		fVar5 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(iVar2));
		fVar6 = (fVar3 * fVar5);
		if (fParam4 > fVar6)
		{
			func_68(1);
		}
	}
	if (Global_47050[iParam2 /*36*/].f_8)
	{
		iVar7 = Global_47050[iParam2 /*36*/].f_35;
		if (iVar7 > -1)
		{
			STATS::STAT_SET_INT(Global_49931[iVar7 /*7*/].f_3[iParam1], GlobalFunc_2035(iParam1, iVar0), 1);
		}
	}
	if (fVar4 > 100000f)
	{
		STATS::_UPDATE_STAT_INT(joaat("sp0_crouched_and_shot"), 20, 0);
	}
	else if (fVar4 < 0f)
	{
		if (fVar4 < -100000f)
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched_and_shot"), 30, 0);
		}
	}
	if (Global_47050[iParam2 /*36*/].f_8)
	{
		func_41(iParam1);
	}
}

void func_79(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x4765
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] + fParam2);
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] < 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] = 0f;
				}
				break;
			
			case 1:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] + fParam2);
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] < 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] = 0f;
				}
				break;
			
			case 2:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] + fParam2);
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] < 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] = 0f;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] = fParam2;
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] < 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iParam1] = 0f;
				}
				break;
			
			case 1:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] = fParam2;
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] < 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iParam1] = 0f;
				}
				break;
			
			case 2:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] = fParam2;
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] < 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iParam1] = 0f;
				}
				break;
			}
	}
	return;
}

void func_80()//Position - 0x4915
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(76);
	Global_2408820[iVar0 /*83*/] = 76;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}


void func_82(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x498D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = func_92(iParam1, iParam2);
	if (iVar0 == -1)
	{
		Global_54739 = 1;
		return;
	}
	Global_54739 = 0;
	if (GlobalFunc_2035(iParam1, iVar0) == 0)
	{
		func_79(iParam1, iVar0, 0f, 0);
	}
	iVar1 = SYSTEM::CEIL(fParam4);
	bVar2 = false;
	if (iVar1 > Global_51925[iParam0])
	{
		iVar1 = Global_51925[iParam0];
		bVar2 = true;
	}
	if (!GlobalFunc_10608(iParam0, 0, 2, iVar1, bVar2))
	{
		return;
	}
	func_43(iParam1, iVar0, iParam3, 1);
	func_79(iParam1, iVar0, fParam4, 1);
	func_91(iParam1, iVar0, iParam2);
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_441 - SYSTEM::CEIL(fParam4));
	if (fParam4 > 1000000f)
	{
		func_90();
	}
	GlobalFunc_7734(310, 0, 0);
	if (iParam3 < 1)
	{
		return;
	}
	if (Global_47050[iParam2 /*36*/].f_8)
	{
		iVar3 = Global_47050[iParam2 /*36*/].f_35;
		if (iVar3 > -1)
		{
			STATS::STAT_SET_INT(Global_49931[iVar3 /*7*/].f_3[iParam1], GlobalFunc_2035(iParam1, iVar0), 1);
		}
	}
	if (fParam4 > 1000000f)
	{
		STATS::_UPDATE_STAT_INT(joaat("sp0_crouched_and_shot"), 10, 0);
	}
	if (Global_47050[iParam2 /*36*/].f_8)
	{
		func_41(iParam1);
	}
	if (Global_34913 == 15)
	{
		GlobalFunc_174(1);
	}
}








void func_90()//Position - 0x5359
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(77);
	Global_2408820[iVar0 /*83*/] = 77;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_91(int iParam0, int iParam1, int iParam2)//Position - 0x5384
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iParam1] = iParam2;
			break;
		
		case 1:
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iParam1] = iParam2;
			break;
		
		case 2:
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iParam1] = iParam2;
			break;
	}
	return;
}

int func_92(int iParam0, int iParam1)//Position - 0x53F1
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (GlobalFunc_2035(iParam0, iVar2) == 0 && !bVar1)
		{
			iVar0 = iVar2;
		}
		if (GlobalFunc_2034(iParam0, iVar2) == iParam1 && GlobalFunc_2035(iParam0, iVar2) > 0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}






void func_98()//Position - 0x5857
{
	int iVar0;
	
	iLocal_45 = -1;
	iLocal_46 = -1;
	iLocal_48 = -1;
	iLocal_47 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		iLocal_49[iVar0] = 211;
		iVar0++;
	}
	func_99();
}

void func_99()//Position - 0x588A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_150[iVar0] = -1;
		iVar0++;
	}
	iLocal_192 = 0;
}

void func_100()//Position - 0x58AF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_VIDEO");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_502 = 1;
}


void func_102()//Position - 0x590C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = HUD::GET_CURRENT_WEBPAGE_ID();
	iVar1 = HUD::GET_CURRENT_WEBSITE_ID();
	if ((iLocal_504 == 18 && (iLocal_506 == 1 || iLocal_506 == 2)) && Global_68245)
	{
		if (Global_67113)
		{
			func_484(iLocal_495);
			Global_67113 = 0;
		}
	}
	bVar2 = false;
	if (iVar0 > 0)
	{
		if (iLocal_506 != iVar0)
		{
			bVar2 = true;
		}
		iLocal_506 = iVar0;
		Global_67105 = 0;
	}
	else
	{
		Global_67105 = 1;
	}
	if (iVar1 > 0)
	{
		if (iLocal_504 != iVar1)
		{
			bVar2 = true;
		}
		iLocal_504 = iVar1;
	}
	else
	{
		Global_67105 = 1;
	}
	if (Global_67072 != iLocal_504)
	{
		iLocal_500 = 0;
	}
	Global_67071 = iLocal_506;
	Global_67072 = iLocal_504;
	if (bVar2)
	{
		iLocal_506 = iVar0;
		iLocal_504 = iVar1;
		Global_67071 = iLocal_506;
		Global_67072 = iLocal_504;
		func_103();
	}
}

void func_103()//Position - 0x59DB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iLocal_505 != iLocal_506 || iLocal_503 != iLocal_504)
	{
		func_480(iLocal_504);
	}
	if (iLocal_505 != iLocal_506)
	{
		if (iLocal_2609)
		{
			iLocal_2609 = 0;
		}
		if (func_479(iLocal_504, (iLocal_506 - 3)) && func_476(func_478(iLocal_504, iLocal_506)) == 0)
		{
			func_475(-1, -1, 1);
			iLocal_696 = 7;
			func_657(iLocal_504, 7, func_478(iLocal_504, iLocal_506), -1);
		}
		else if (iLocal_504 == iLocal_503)
		{
			iLocal_2609 = 0;
			switch (iLocal_504)
			{
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 16:
					iLocal_2609 = 0;
					if (iLocal_506 != iLocal_505)
					{
						iVar1 = func_478(iLocal_504, iLocal_506);
						if (iVar1 != -1)
						{
							iLocal_2609 = 1;
							if (func_474(iVar1, iLocal_504, &iLocal_2609, &Global_67135))
							{
							}
						}
					}
					if (func_473(iLocal_504, iLocal_506))
					{
						func_472(iLocal_504);
					}
					else if (func_471(iLocal_504, iLocal_506))
					{
						func_470(iLocal_504);
					}
					func_360(iLocal_504, iLocal_505, iLocal_506);
					break;
				
				case 17:
					switch (iLocal_506)
					{
						case 2:
							if (func_358())
							{
								func_651("WWW_IWILLSURVIVEITALL_COM_S_MY_D_PORTFOLIO");
							}
							break;
						
						case 15:
							if (!func_355())
							{
								func_651("WWW_IWILLSURVIVEITALL_COM_S_PURCHASE_D_ERROR");
							}
							break;
					}
					break;
				
				case 18:
					if (iLocal_505 == 21)
					{
						if (iLocal_506 == 4)
						{
							if (iLocal_498 > -1)
							{
								func_195();
							}
						}
						if (iLocal_506 == 5)
						{
							if (iLocal_498 > -1)
							{
								func_194(Global_1048995[iLocal_498 /*1425*/]);
							}
						}
					}
					if (iLocal_506 == 23)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT_EMPTY");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GlobalFunc_726("VHSITPURFH");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						switch (iLocal_695)
						{
							case 3:
								GlobalFunc_726("LAR_IRANK");
								break;
							
							case 2:
								GlobalFunc_726("LAR_ICASH");
								break;
							
							case 1:
								GlobalFunc_726("LAR_NLOCK");
								break;
							
							case 4:
								GlobalFunc_726("LAR_IRANKC");
								break;
							
							case 6:
								GlobalFunc_726("LAR_SAVTRB");
								break;
							
							case 0:
								break;
							
							case 5:
								break;
							
							default:
								break;
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					break;
				
				case 20:
					if (iLocal_506 == 1)
					{
						if (Global_67115 == 3)
						{
							while (!GlobalFunc_7022(-606278748, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
							{
								SYSTEM::WAIT(0);
							}
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							Global_67115 = 4;
						}
					}
					else if (iLocal_506 == 14)
					{
						if (Global_67115 == 5)
						{
							while (!GlobalFunc_7022(-414580094, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
							{
								SYSTEM::WAIT(0);
							}
							func_104(joaat("player_one"), 3, 295, 1, 1);
							Global_67115 = 6;
						}
					}
					break;
			}
		}
		else
		{
			switch (iLocal_504)
			{
				case 20:
					if (iLocal_506 == 1 && Global_67115 < 1)
					{
						while (!GlobalFunc_7022(-921778680, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
						{
							SYSTEM::WAIT(0);
						}
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						Global_67115 = 1;
					}
					break;
				}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_67113 = 1;
	}
	switch (iLocal_504)
	{
		case 19:
			if ((iLocal_503 == 19 && iLocal_505 == 1) && iLocal_506 == 15)
			{
				iVar2 = GlobalFunc_8329();
				switch (iVar2)
				{
					case 0:
						if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY[0])
						{
							if (GlobalFunc_469(0) < 500)
							{
								func_651("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								GlobalFunc_10608(0, 0, 92, 500, 0);
								Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY[0] = 1;
							}
						}
						break;
					
					case 1:
						if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY[1])
						{
							if (GlobalFunc_469(1) < 500)
							{
								func_651("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								GlobalFunc_10608(1, 0, 92, 500, 0);
								Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY[1] = 1;
							}
						}
						break;
					
					case 2:
						if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY[2])
						{
							if (GlobalFunc_469(2) < 500)
							{
								func_651("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								GlobalFunc_10608(2, 0, 92, 500, 0);
								Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY[2] = 1;
							}
						}
						break;
					}
			}
			break;
		
		case 9:
			if (iLocal_2606)
			{
				if (!Global_68245)
				{
					if (iLocal_506 == 5)
					{
						iLocal_2606 = 0;
						switch (iLocal_2607)
						{
							case 6:
								func_194(-1569.525f, 444.04f, 108.135f);
								break;
							
							case 7:
								func_194(-1352.88f, 613.77f, 134.34f);
								break;
							
							case 8:
								func_194(-1469.2f, -5.33f, 53.105f);
								break;
							
							case 9:
								func_194(-1632.833f, -413.8573f, 39.9441f);
								break;
							
							case 10:
								func_194(-1774.225f, -430.03f, 44.04f);
								break;
							
							case 11:
								func_194(-380.75f, 427.79f, 110.97f);
								break;
							
							case 12:
								func_194(-163.2826f, 989.2324f, 234.0641f);
								break;
							
							case 13:
								func_194(-492.2117f, 585.2451f, 122f);
								break;
							
							case 14:
								func_194(-818.84f, 434.74f, 88.15f);
								break;
							
							case 15:
								func_194(-910.1f, 784.344f, 184.471f);
								break;
							
							case 16:
								func_194(-825.92f, -26.67f, 38.68f);
								break;
							
							case 17:
								func_194(-1103.5f, 587.29f, 102.865f);
								break;
							
							case 18:
								func_194(-1253.255f, 496.615f, 93.82f);
								break;
							
							case 19:
								func_194(166.55f, 487.31f, 142.12f);
								break;
							
							case 20:
								func_194(-1163.859f, 319.19f, 67.96f);
								break;
							
							default:
								break;
							}
						}
				}
			}
			else
			{
				iLocal_2606 = 1;
			}
			iLocal_2607 = iLocal_506;
			break;
	}
	iLocal_503 = iLocal_504;
	iLocal_505 = iLocal_506;
}

int func_104(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6093
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar19;
	int iVar29;
	
	Global_68106[1 /*14*/] = { GlobalFunc_10858(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 1, Global_68106[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { GlobalFunc_7617(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_104(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_112(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar19 = { GlobalFunc_7616(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_104(iParam0, 14, uVar19[iVar2], 1, 1);
									func_112(iParam0, 14, uVar19[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 1, Global_68106[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar29 = (227 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 3, iVar29, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar29 = (176 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 3, iVar29, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar29 = (25 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 11, iVar29, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar29 = (9 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 11, iVar29, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar29 = (43 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 8, iVar29, 1, 0);
								iVar29 = (59 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 8, iVar29, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar29 = (27 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 8, iVar29, 1, 0);
								iVar29 = (59 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 8, iVar29, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar29 = (27 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 8, iVar29, 1, 0);
								iVar29 = (43 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 8, iVar29, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar29 = (41 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 14, iVar29, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar29 = (94 + Global_68106[1 /*14*/].f_4);
								func_104(iParam0, 4, iVar29, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_104(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}








int func_112(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x74B3
{
	Global_68106[1 /*14*/] = { GlobalFunc_10858(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 0, Global_68106[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 0, Global_68106[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}


















































































void func_194(struct<2> Param0, float fParam2)//Position - 0x1E9D7
{
	if (Global_68245)
	{
		if (!NETWORK::NETWORK_CAN_SET_WAYPOINT())
		{
			return;
		}
	}
	if (fLocal_252 != Param0 && fLocal_253 != Param0.f_1)
	{
		HUD::SET_NEW_WAYPOINT(Param0, Param0.f_1);
		fLocal_252 = Param0;
		fLocal_253 = Param0.f_1;
	}
}

void func_195()//Position - 0x1EA19
{
	struct<2> Var0;
	int iVar51;
	int iVar52;
	struct<4> Var53;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	struct<4> Var64;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	
	Var0.f_1 = 39;
	iVar51 = -1;
	if (iLocal_498 < 0)
	{
		return;
	}
	if (!GlobalFunc_9055(60, 0))
	{
		func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		if (GlobalFunc_1343(PLAYER::GET_PLAYER_INDEX()) < 5)
		{
			iLocal_695 = 3;
		}
		else
		{
			iLocal_695 = 4;
		}
		return;
	}
	Var53 = { GlobalFunc_1583(iLocal_498) };
	iVar57 = 0;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		if (iVar57 < func_344(iVar52))
		{
			iVar57 = func_344(iVar52);
		}
		iVar52++;
	}
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar58 = GlobalFunc_5062(iVar52, -1);
		if (iVar58 == iLocal_498)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
		iVar52++;
	}
	iVar59 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_342(iLocal_498)) * Global_262145.f_63));
	if (func_339(iLocal_498))
	{
		iVar59 = 0;
	}
	iVar60 = (iVar59 - iVar57);
	iVar62 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	iVar63 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
	if (iVar60 > 0)
	{
		if ((iVar62 + iVar63) < iVar60)
		{
			if (iVar60 <= 0 || (iVar60 > 0 && (iVar62 + iVar63) < iVar60))
			{
				func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
				iLocal_695 = 2;
				Var64 = { GlobalFunc_1583(iLocal_498) };
				func_475(MISC::GET_HASH_KEY(&Var64), iVar60, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			if (iVar60 <= 0 || (iVar60 > 0 && MONEY::NETWORK_CAN_SPEND_MONEY(iVar60, 0, 1, 0, -1)))
			{
				func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
				iLocal_695 = 2;
				Var64 = { GlobalFunc_1583(iLocal_498) };
				func_475(MISC::GET_HASH_KEY(&Var64), iVar60, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
		}
	}
	if (GlobalFunc_5062(0, -1) > 0)
	{
		while (!func_265(&Var0, &iVar51, iLocal_498) && func_264())
		{
			GlobalFunc_187();
			GlobalFunc_7629();
			SYSTEM::WAIT(0);
			Global_17236.f_7172 = 1;
		}
		GlobalFunc_187();
		GlobalFunc_7629();
		SYSTEM::WAIT(0);
		Global_17236.f_7172 = 1;
		iLocal_496 = 0;
	}
	else
	{
		iVar51 = 0;
	}
	if (iVar51 == -1)
	{
		func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
		iLocal_695 = 5;
		Global_67132 = Global_67134;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		return;
	}
	else
	{
		iVar61 = (iVar59 - func_344(iVar51));
	}
	if (iVar61 > 0)
	{
		if (((iVar62 + iVar63) + func_344(iVar51)) < iVar61)
		{
			func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
			iLocal_695 = 2;
			Var64 = { GlobalFunc_1583(iLocal_498) };
			func_475(MISC::GET_HASH_KEY(&Var64), iVar61, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar61, 0, 1, 0, -1))
		{
			func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
			iLocal_695 = 2;
			Var64 = { GlobalFunc_1583(iLocal_498) };
			func_475(MISC::GET_HASH_KEY(&Var64), iVar61, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	if (GlobalFunc_218())
	{
		iVar68 = 0;
		if (func_339(iLocal_498))
		{
			iVar68 = 1;
		}
		iLocal_692 = 1;
		iLocal_693 = 0;
		iVar69 = func_258(iLocal_498, iVar68);
		iVar70 = func_257(iVar51);
		iVar71 = GlobalFunc_5062(iVar51, -1);
		iVar72 = 0;
		iVar73 = 0;
		if (iVar71 > 0)
		{
			iVar74 = 0;
			if (func_339(iVar71))
			{
				iVar74 = 1;
			}
			iVar72 = func_344(iVar51);
			iVar73 = func_258(iVar71, iVar74);
		}
		iVar75 = -1;
		while (func_220(&iVar75, iVar59, iVar51, 1394405165, 1372920054, iVar69, iVar70, 0, iVar72, iVar73, 0))
		{
			func_640(0, 0);
			SYSTEM::WAIT(0);
		}
		switch (iVar75)
		{
			case 0:
				func_651("WWW_DYNASTY8REALESTATE_COM_S_PURCHASE_D_ERROR");
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				iLocal_695 = 6;
				return;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	if (iVar61 >= 0 && (iVar61 == 0 || (iVar61 > 0 && (GlobalFunc_218() || MONEY::NETWORK_CAN_SPEND_MONEY(iVar61, 0, 1, 0, -1)))))
	{
		Var64 = { GlobalFunc_1583(iVar51) };
		if (iVar61 > 0)
		{
			GlobalFunc_5311(joaat("mpply_ingamestore_moneyspent"), iVar61);
		}
		if (func_344(iVar51) > 0)
		{
			if (GlobalFunc_218())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
			}
			Var64 = { GlobalFunc_1583(GlobalFunc_5062(iVar51, -1)) };
			MONEY::NETWORK_EARN_FROM_PROPERTY(func_344(iVar51), MISC::GET_HASH_KEY(&Var64));
		}
		if (GlobalFunc_218())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
		}
		Var64 = { GlobalFunc_1583(iLocal_498) };
		MONEY::NETWORK_BUY_PROPERTY(iVar59, MISC::GET_HASH_KEY(&Var64), 0, 1);
		if (GlobalFunc_218())
		{
			GlobalFunc_5069(GlobalFunc_5422());
		}
	}
	else if (iVar61 < 0)
	{
		if (func_344(iVar51) > 0)
		{
			if (GlobalFunc_218())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
			}
			Var64 = { GlobalFunc_1583(GlobalFunc_5062(iVar51, -1)) };
			MONEY::NETWORK_EARN_FROM_PROPERTY(func_344(iVar51), MISC::GET_HASH_KEY(&Var64));
		}
		if (GlobalFunc_218())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
		}
		Var64 = { GlobalFunc_1583(iLocal_498) };
		MONEY::NETWORK_BUY_PROPERTY(iVar59, MISC::GET_HASH_KEY(&Var64), 0, 1);
		if (GlobalFunc_218())
		{
			GlobalFunc_5069(GlobalFunc_5422());
		}
	}
	else if (!func_339(iLocal_498))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		return;
	}
	if (GlobalFunc_5062(iVar51, -1) > 0)
	{
	}
	if (iVar51 == 0)
	{
		if (GlobalFunc_5062(iVar51, -1) <= 0)
		{
			func_210();
		}
		GlobalFunc_6719(1265, iLocal_498, -1, 1);
		GlobalFunc_6720(1473, NETWORK::GET_CLOUD_TIME_AS_INT(), -1, 1);
		GlobalFunc_6720(1470, iLocal_498, -1, 1);
		GlobalFunc_6720(1471, NETWORK::GET_CLOUD_TIME_AS_INT(), -1, 1);
		GlobalFunc_7748(1226, -1);
		if (!func_339(iLocal_498))
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_3 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_342(iLocal_498)) * Global_262145.f_63));
		}
		else
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_3 = 0;
		}
		GlobalFunc_6720(1472, Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_3, -1, 1);
	}
	else if (iVar51 == 1)
	{
		if (GlobalFunc_5062(1, -1) <= 0)
		{
			func_205();
		}
		GlobalFunc_6719(1862, iLocal_498, -1, 1);
		GlobalFunc_7748(1226, -1);
		if (!func_339(iLocal_498))
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_681 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_342(iLocal_498)) * Global_262145.f_63));
		}
		else
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_681 = 0;
		}
		GlobalFunc_6720(1863, Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_681, -1, 1);
	}
	else if (iVar51 == 2)
	{
		if (GlobalFunc_5062(2, -1) <= 0)
		{
			func_204();
		}
		GlobalFunc_6719(2251, iLocal_498, -1, 1);
		GlobalFunc_7748(1226, -1);
		if (!func_339(iLocal_498))
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_682[0] = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_342(iLocal_498)) * Global_262145.f_63));
		}
		else
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_682[0] = 0;
		}
		GlobalFunc_6720(2252, Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_682[0], -1, 1);
	}
	switch (GlobalFunc_1339(iLocal_498))
	{
		case 4:
		case 5:
		case 6:
			GlobalFunc_6857(100, 1, -1, 1);
			GlobalFunc_6857(102, 1, -1, 1);
		
		case 1:
		case 2:
		case 3:
			GlobalFunc_6857(102, 1, -1, 1);
			break;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
	iLocal_523 = 1;
	func_196(0);
	func_484(iLocal_495);
}

int func_196(int iParam0)//Position - 0x1F15B
{
	if (!GlobalFunc_6714())
	{
		return 0;
	}
	if (!Global_68245)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
	}
	if (!GlobalFunc_6725(100, -1))
	{
		if (iParam0 == 1)
		{
		}
		return 0;
	}
	if (!GlobalFunc_6725(102, -1))
	{
		if (iParam0 == 1)
		{
		}
		return 0;
	}
	if (!GlobalFunc_6725(101, -1))
	{
		if (iParam0 == 1)
		{
		}
		return 0;
	}
	GlobalFunc_8960(49, 1);
	return 1;
}








void func_204()//Position - 0x1F46B
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(17);
	Global_2408820[iVar0 /*83*/] = 17;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_205()//Position - 0x1F498
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(16);
	Global_2408820[iVar0 /*83*/] = 16;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}





void func_210()//Position - 0x1F85E
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(15);
	Global_2408820[iVar0 /*83*/] = 15;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}










int func_220(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1FB89
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iLocal_692)
	{
		if (!func_264())
		{
			iLocal_693 = 3;
		}
		switch (iLocal_693)
		{
			case 0:
				iVar0 = iParam1;
				if (iParam9 != 0)
				{
					iVar0 = (iVar0 - iParam8);
				}
				if (iParam7 != 0)
				{
					switch (iParam7)
					{
						case 118439962:
							iVar0 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam1)));
							break;
						
						case 1514966546:
							iVar0 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam1)));
							break;
						
						case 1776242445:
							iVar0 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam1)));
							break;
						
						default:
							break;
						}
				}
				iVar1 = 0;
				iVar2 = 0;
				iVar3 = iVar0;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar3)
					{
						iVar2 = iVar3;
					}
					else
					{
						iVar2 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar3 = (iVar3 - iVar2);
				}
				if (iVar3 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar3)
						{
							iVar1 = iVar3;
						}
						else
						{
							iVar1 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar3 = (iVar3 - iVar1);
					}
				}
				if (iParam3 == 1394405165)
				{
					if (GlobalFunc_7912(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
					{
						if (iParam9 != 0)
						{
							if (GlobalFunc_7912(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
							{
							}
							else
							{
								iLocal_693 = 3;
								return 1;
							}
						}
						if (iParam7 != 0)
						{
							if (GlobalFunc_7912(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
							{
							}
							else
							{
								iLocal_693 = 3;
								return 1;
							}
						}
						if (iLocal_693 != 3)
						{
							if (GlobalFunc_6940())
							{
								HUD::_0x170F541E1CADD1DE(1);
								HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
								iLocal_693 = 1;
							}
							else
							{
								iLocal_693 = 3;
							}
						}
					}
					else
					{
						iLocal_693 = 3;
					}
				}
				else if (iParam3 == -1224924353)
				{
					if (GlobalFunc_7912(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
					{
						if (iParam7 != 0)
						{
							if (GlobalFunc_7912(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
							{
							}
							else
							{
								iLocal_693 = 3;
								return 1;
							}
						}
						if (func_223(iLocal_2683, iParam10, 1))
						{
							if (GlobalFunc_6940())
							{
								HUD::_0x170F541E1CADD1DE(1);
								HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
								iLocal_693 = 1;
							}
							else
							{
								iLocal_693 = 3;
							}
						}
						else
						{
							iLocal_693 = 3;
						}
					}
					else
					{
						iLocal_693 = 3;
					}
				}
				else if (GlobalFunc_7912(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (iParam7 != 0)
					{
						if (GlobalFunc_7912(78225582, iParam3, iParam7, iParam4, 1, iParam1, iParam2, 4, iParam5, 3))
						{
						}
						else
						{
							iLocal_693 = 3;
							return 1;
						}
					}
					if (GlobalFunc_6940())
					{
						HUD::_0x170F541E1CADD1DE(1);
						HUD::_SET_PLAYER_CASH_CHANGE(-iVar1, -iVar2);
						iLocal_693 = 1;
					}
					else
					{
						iLocal_693 = 3;
					}
				}
				else
				{
					iLocal_693 = 3;
				}
				break;
			
			case 1:
				if (GlobalFunc_1363(GlobalFunc_5422()))
				{
					if (GlobalFunc_1362(GlobalFunc_5422()) == 2)
					{
						iLocal_693 = 2;
					}
					else
					{
						iLocal_693 = 3;
					}
				}
				break;
			
			case 2:
				iLocal_692 = 0;
				iLocal_693 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				GlobalFunc_5069(GlobalFunc_5422());
				iLocal_692 = 0;
				iLocal_693 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	iLocal_693 = 0;
	*iParam0 = -1;
	return 0;
}



int func_223(int iParam0, int iParam1, int iParam2)//Position - 0x1FF1B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar9;
	char* sVar13;
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
	
	if (!Global_2543148 || VEHICLE::GET_NUM_MOD_KITS(uParam1) <= 0)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar0 = true;
	if ((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38)
	{
		bVar0 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1, 0))
	{
		iVar1 = GlobalFunc_5451(ENTITY::GET_ENTITY_MODEL(uParam1));
		if (bVar0)
		{
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", GlobalFunc_1616(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar1, -1))
			{
				return 0;
			}
			if (!func_248(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", GlobalFunc_1616(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar1, -1))
			{
				return 0;
			}
		}
		if (bVar0)
		{
			if (!func_245(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", GlobalFunc_1615(VEHICLE::GET_VEHICLE_MOD(iParam1, 14) + 1), 10, iVar1))
			{
				return 0;
			}
		}
		if (bVar0)
		{
			if (!func_244(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar1))
			{
				return 0;
			}
			if (!func_244(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar1))
			{
				return 0;
			}
		}
		if (!func_242(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar0)
		{
			if (!func_248(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1), 33, iVar1, -1))
			{
				return 0;
			}
		}
		if (bVar0)
		{
			if (!func_248(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1), 23, iVar1, -1))
			{
				return 0;
			}
		}
		if (bVar0)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_248(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar1, -1))
				{
					return 0;
				}
			}
			else if (!func_248(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar1, -1))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_248(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar1, -1))
				{
					return 0;
				}
			}
			else if (!func_248(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar1, -1))
			{
				return 0;
			}
		}
		func_241(iParam1, &iVar2, &sVar5, &iVar17, &iVar3, &sVar9, &iVar18, &iVar4, &sVar13, &iVar19, &iVar20);
		iVar21 = GlobalFunc_1613(iVar20);
		if (!func_248(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar21, 29, iVar1, -1))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar17, iVar18);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar19, iVar20);
		if (!func_239(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar5, 1, 24, iVar1, iVar2, iVar17))
		{
			return 0;
		}
		if (!func_239(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar13, 3, 24, iVar1, iVar4, iVar19))
		{
			return 0;
		}
		if (!func_237(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", GlobalFunc_1612(iVar2)))
		{
			return 0;
		}
		if (!func_239(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar9, 2, 25, iVar1, iVar3, iVar18))
		{
			return 0;
		}
		if (!func_237(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", GlobalFunc_1612(iVar3)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar22, &iVar23, &iVar24);
		switch (GlobalFunc_5450(iVar22, iVar23, iVar24))
		{
			case 1:
				iVar25 = 3;
				break;
			
			case 2:
				iVar25 = 4;
				break;
			
			case 3:
				iVar25 = 5;
				break;
			
			case 4:
				iVar25 = 6;
				break;
			
			case 5:
				iVar25 = 11;
				break;
			
			case 6:
				iVar25 = 7;
				break;
			
			case 7:
				iVar25 = 10;
				break;
			
			case 8:
				iVar25 = 8;
				break;
			
			case 9:
				iVar25 = 12;
				break;
			
			case 10:
				iVar25 = 13;
				break;
			
			case 11:
				iVar25 = -1;
				break;
			
			case 12:
				iVar25 = 9;
				break;
		}
		if (bVar0)
		{
			if (!func_233(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar25, 18, iVar1))
			{
				return 0;
			}
		}
		iVar26 = GlobalFunc_1610(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar0)
		{
			if (!func_231(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar26, 21, iVar1, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar22, &iVar23, &iVar24);
		iVar27 = GlobalFunc_6961(iVar22, iVar23, iVar24);
		if (bVar0)
		{
			if (!func_231(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar27, 21, iVar1, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_248(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar1, GlobalFunc_1609(ENTITY::GET_ENTITY_MODEL(iParam1))))
			{
				return 0;
			}
		}
		if (bVar0)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_226(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar1))
				{
					return 0;
				}
			}
		}
		if (iParam2 && bVar0)
		{
			if (!func_225(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar0)
		{
			if (!func_224(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_224(int iParam0, char* sParam1)//Position - 0x20685
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_225(int iParam0, char* sParam1, int iParam2)//Position - 0x206E2
{
	char cVar0[64];
	char cVar16[16];
	char cVar20[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar16) || MISC::GET_HASH_KEY(&cVar16) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar20, "VEM_INSURANCE_", 64);
	StringConCat(&cVar20, &cVar16, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
			StringConCat(&cVar20, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
			StringConCat(&cVar20, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar20, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar20)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar20), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_226(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x207CC
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}





int func_231(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x20A9F
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar16, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


int func_233(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x20C03
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar16, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}




int func_237(int iParam0, char* sParam1, int iParam2)//Position - 0x20ECC
{
	char cVar0[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


int func_239(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x20FC7
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar16, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar16, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar16, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar16, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar16, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar16, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar16, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar16, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar16, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar16, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar16, "MCT_NONE_", 64);
	}
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar16, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar16, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


void func_241(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, char* sParam5, var uParam6, var uParam7, char* sParam8, var uParam9, var uParam10)//Position - 0x2131F
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(uParam0, uParam3, uParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(uParam0, uParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	VEHICLE::GET_VEHICLE_MOD_COLOR_1(uParam0, uParam1, &uVar0, &uVar2);
	VEHICLE::GET_VEHICLE_MOD_COLOR_2(uParam0, uParam4, &uVar1);
	iVar3 = 0;
	while (iVar3 != 6)
	{
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(uParam0, iVar3, iVar4, uVar2);
			VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar6, &uVar9);
			if (iVar6 == *uParam3)
			{
				*uParam1 = iVar3;
				StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(uParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			iVar3++;
		}
		else
		{
			iVar3 = 6;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*uParam1 = 6;
		IntToString(sParam2, *uParam3, 16);
	}
	iVar4 = 0;
	iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, 1);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		VEHICLE::SET_VEHICLE_MOD_COLOR_1(uParam0, 0, iVar4, iVar4);
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(uParam0, &iVar8, &uVar9);
		if (iVar8 == *uParam9)
		{
			StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(uParam0, 0), 16);
			iVar4 = iVar5 + 1;
		}
		iVar4++;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *uParam9, 16);
		*uParam7 = 6;
	}
	else
	{
		*uParam7 = *uParam1;
	}
	iVar3 = 0;
	while (iVar3 != 6)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_2(uParam0, iVar3, iVar4);
			VEHICLE::GET_VEHICLE_COLOURS(uParam0, &uVar9, &iVar7);
			if (iVar7 == *uParam6)
			{
				*uParam4 = iVar3;
				StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(uParam0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			iVar3++;
		}
		else
		{
			iVar3 = 6;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*uParam4 = 6;
		IntToString(sParam5, *uParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(uParam0, *uParam3, *uParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *uParam9, *uParam10);
}

int func_242(int iParam0, char* sParam1, var uParam2)//Position - 0x214EE
{
	char cVar0[64];
	int iVar16;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar16 = GlobalFunc_1614(VEHICLE::GET_VEHICLE_WHEEL_TYPE(uParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar16))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, iVar16, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


int func_244(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x21613
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	iVar32 = VEHICLE::GET_VEHICLE_MOD(uParam2, iParam3);
	if (iVar32 == -1)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar16, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar16, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar16, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar32), 64);
	}
	StringConCat(&cVar16, "_t19_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_245(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x216BF
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}



int func_248(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x21958
{
	char cVar0[64];
	char cVar16[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar16, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar16, "_n", 64);
		StringIntConCat(&cVar16, iParam6, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
	{
		return 1;
	}
	return GlobalFunc_7912(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}









int func_257(int iParam0)//Position - 0x22D40
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_PROPERTY_HOUSE_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_2_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_258(int iParam0, int iParam1)//Position - 0x22D95
{
	char* sVar0;
	
	GlobalFunc_5438(&sVar0, iParam0, iParam1);
	return MISC::GET_HASH_KEY(&sVar0);
}






int func_264()//Position - 0x22E7F
{
	if (Global_68245 && GlobalFunc_1591())
	{
		return 0;
	}
	if (!Global_68245 && GlobalFunc_2025())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

int func_265(var uParam0, int iParam1, int iParam2)//Position - 0x22EBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GlobalFunc_1277()) || !GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1)) || Global_1315828) || Global_1315830) || Global_2428891.f_3157.f_32)
	{
		if (Global_1315830)
		{
		}
		*iParam1 = -1;
		func_337(uParam0);
		return 1;
	}
	iVar0 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(Global_1048995[iParam2 /*1425*/].f_32) * Global_262145.f_63));
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	GlobalFunc_1394();
	GlobalFunc_187();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 174);
	PAD::SET_INPUT_EXCLUSIVE(2, 175);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 1, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		GlobalFunc_6900(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_46), 1);
	if (GlobalFunc_4998(0, -1))
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_46, 0))
			{
				func_314(uParam0);
				MISC::SET_BIT(&(uParam0->f_46), 0);
				func_310(uParam0, iParam2);
				if (!MISC::IS_BIT_SET(uParam0->f_49, 2))
				{
					GlobalFunc_8511(1, -1, 1, 0, 1, -1082130432, 0, 0);
				}
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !GlobalFunc_153(8, -1)) && !Global_2428131.f_656.f_5)
			{
				if (!MISC::IS_BIT_SET(uParam0->f_49, 0))
				{
					if ((GlobalFunc_1389() || (GlobalFunc_1391() && Global_2543381 == uParam0->f_43)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
						iVar1 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
						iVar2 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
						if (iVar1 + iVar2) >= (iVar0 - func_344(uParam0->f_43))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_49, 2) && uParam0->f_1[uParam0->f_43] != 0)
							{
								if (Global_262145.f_7161 && uParam0->f_43 >= 2)
								{
									MISC::SET_BIT(&(uParam0->f_46), 6);
									MISC::CLEAR_BIT(&(uParam0->f_46), 0);
								}
								else if (GlobalFunc_361(PLAYER::PLAYER_ID()) || GlobalFunc_362(PLAYER::PLAYER_ID()))
								{
									MISC::SET_BIT(&(uParam0->f_46), 5);
								}
								else
								{
									GlobalFunc_4988(1, -1);
									MISC::SET_BIT(&(uParam0->f_49), 2);
									MISC::CLEAR_BIT(&(uParam0->f_46), 0);
									return 0;
								}
							}
							else if (Global_262145.f_7161 && uParam0->f_43 >= 2)
							{
								MISC::SET_BIT(&(uParam0->f_46), 6);
								MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							}
							else if (uParam0->f_1[uParam0->f_43] == 0)
							{
								*iParam1 = uParam0->f_43;
								MISC::CLEAR_BIT(&(uParam0->f_46), 0);
								func_337(uParam0);
								return 1;
							}
							else
							{
								*iParam1 = uParam0->f_43;
								MISC::CLEAR_BIT(&(uParam0->f_46), 0);
								func_337(uParam0);
								return 1;
							}
						}
						else
						{
							MISC::SET_BIT(&(uParam0->f_46), 2);
						}
						MISC::SET_BIT(&(uParam0->f_49), 0);
					}
				}
				else if (!PAD::IS_CONTROL_JUST_RELEASED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
				{
					MISC::CLEAR_BIT(&(uParam0->f_49), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_49, 1))
				{
					if ((GlobalFunc_1383() || (GlobalFunc_2041() && Global_2543381 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (!MISC::IS_BIT_SET(uParam0->f_49, 2))
						{
							func_337(uParam0);
							*iParam1 = -1;
							return 1;
						}
						else
						{
							MISC::CLEAR_BIT(&(uParam0->f_49), 2);
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
						}
						MISC::SET_BIT(&(uParam0->f_49), 1);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 202))
				{
					MISC::CLEAR_BIT(&(uParam0->f_49), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_49, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_49, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || GlobalFunc_2040(0, 0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							uParam0->f_43 = (uParam0->f_43 - 1);
							MISC::SET_BIT(&(uParam0->f_49), 4);
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							GlobalFunc_434(&(uParam0->f_47));
						}
					}
					else if (func_268(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_49), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_49, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || GlobalFunc_2039(0, 0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							uParam0->f_43++;
							MISC::SET_BIT(&(uParam0->f_49), 5);
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							GlobalFunc_434(&(uParam0->f_47));
						}
					}
					else if (func_268(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_49), 5);
					}
				}
				if (GlobalFunc_1391())
				{
					if (Global_2543381 != uParam0->f_43)
					{
						uParam0->f_43 = Global_2543381;
						GlobalFunc_1355(uParam0->f_43, 1, 1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
					}
				}
				if (uParam0->f_43 >= uParam0->f_45)
				{
					uParam0->f_43 = 0;
				}
				if (uParam0->f_43 < 0)
				{
					uParam0->f_43 = (uParam0->f_45 - 1);
				}
				func_310(uParam0, iParam2);
				if (!MISC::IS_BIT_SET(uParam0->f_49, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					GlobalFunc_8511(1, -1, 1, 0, 1, -1082130432, 0, 0);
				}
			}
		}
	}
	return 0;
}



int func_268(var uParam0, int iParam1)//Position - 0x23601
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || GlobalFunc_5071(&(uParam0->f_47), 250, 1))
	{
		return 1;
	}
	return 0;
}










































void func_310(var uParam0, int iParam1)//Position - 0x27710
{
	bool bVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(uParam0->f_49, 2))
	{
		if (GlobalFunc_5439(iParam1) < GlobalFunc_5439(GlobalFunc_5062(uParam0->f_43, -1)))
		{
			bVar0 = true;
		}
		iVar1 = func_344(uParam0->f_43);
		func_312(iVar1, bVar0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_46), 4);
		MISC::CLEAR_BIT(&(uParam0->f_46), 3);
		if (MISC::IS_BIT_SET(uParam0->f_46, 2))
		{
			GlobalFunc_1353("MP_REP_PROP_4", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_46, 5))
		{
			GlobalFunc_1353("MP_PROP_HEI_0", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_46, 6))
		{
			GlobalFunc_1353("PROP3RDDIS", 1000, 0);
		}
		else
		{
			GlobalFunc_1353("MP_REP_PROP_3", 100, 0);
		}
	}
}


void func_312(int iParam0, bool bParam1)//Position - 0x27823
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	sVar0 = "BRSCRWTEX";
	if (bParam1)
	{
		sVar1 = "BRDISPROP2B1";
		iVar2 = "BRSHETPROSUB1";
	}
	else
	{
		sVar1 = "BRDISPROPB1";
		iVar2 = "BRSHETPROSUB1";
	}
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 = (iVar3 * -1);
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1);
}


void func_314(var uParam0)//Position - 0x278E1
{
	int iVar0;
	struct<2> Var1;
	int iVar5;
	int iVar6;
	
	GlobalFunc_262(0);
	if (MISC::IS_BIT_SET(uParam0->f_49, 2))
	{
	}
	else
	{
		GlobalFunc_1317(1, 1, 0, 0, 0);
		GlobalFunc_1316(1, 2, 1, 1, 1);
		GlobalFunc_1315(0, 0, 0, 0, 0);
		if (GlobalFunc_5062(1, -1) > 0)
		{
			GlobalFunc_1318("MP_REP_PROP_0");
		}
		else
		{
			GlobalFunc_1318("MP_REP_PROP_0b");
		}
		iVar5 = 0;
		while (iVar5 < 3)
		{
			iVar6 = GlobalFunc_5062(iVar5, -1);
			if (iVar6 > 0)
			{
				if (!GlobalFunc_1587())
				{
					if (!GlobalFunc_1586())
					{
						GlobalFunc_7830(iVar0, &(Global_1048995[iVar6 /*1425*/].f_16), 0, 1, 0, 0);
					}
					else
					{
						Var1 = { Global_1048995[iVar6 /*1425*/].f_16 };
						StringConCat(&Var1, "S", 16);
						GlobalFunc_7830(iVar0, &Var1, 0, 1, 0, 0);
					}
				}
				else
				{
					GlobalFunc_7830(iVar0, "PIM_DNAME", 1, 1, 0, 0);
					func_320(HUD::_GET_LABEL_TEXT(&(Global_1048995[iVar6 /*1425*/].f_16)), 0, 1);
				}
				GlobalFunc_7830(iVar0, "CUST_GAR_COST", 1, 1, 0, 0);
				func_317(func_344(iVar5), 0);
				uParam0->f_1[iVar5] = iVar6;
				iVar0++;
			}
			else if (iVar5 > 0)
			{
				if (GlobalFunc_5062((iVar5 - 1), -1) > 0)
				{
					GlobalFunc_7830(iVar0, "MP_REP_PROP_1", 0, 1, 0, 0);
					uParam0->f_1[iVar5] = iVar6;
					iVar0++;
				}
			}
			iVar5++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_46), 2);
		MISC::CLEAR_BIT(&(uParam0->f_46), 5);
		uParam0->f_45 = iVar0;
		GlobalFunc_1355(uParam0->f_43, 1, 1);
		GlobalFunc_5342(-1);
		GlobalFunc_261(176, "BB_SELECT", -1);
		GlobalFunc_261(177, "BB_BACK", -1);
	}
}



void func_317(int iParam0, bool bParam1)//Position - 0x27BB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3340[Global_17236.f_4496] = iParam0;
	Global_17236.f_4496++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 2;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = GlobalFunc_7829();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			GlobalFunc_6942(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = GlobalFunc_7828();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}



void func_320(char* sParam0, bool bParam1, bool bParam2)//Position - 0x28181
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4495 >= 32)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	StringCopy(&(Global_2435345[Global_17236.f_4495 /*16*/]), sParam0, 64);
	Global_17236.f_4495++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 5;
	Global_17236.f_4998++;
	fVar0 = GlobalFunc_7829();
	if (bParam2)
	{
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = GlobalFunc_7829();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			GlobalFunc_6942(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = GlobalFunc_7828();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}

















void func_337(var uParam0)//Position - 0x29014
{
	*uParam0 = 0;
	uParam0->f_43 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_49 = 0;
	GlobalFunc_4988(1, -1);
}


int func_339(int iParam0)//Position - 0x2907E
{
	if (GlobalFunc_84() && GlobalFunc_296())
	{
		if (iParam0 == 31)
		{
			return 1;
		}
	}
	return 0;
}



int func_342(int iParam0)//Position - 0x291E5
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_218())
	{
		iVar0 = 0;
		if (func_339(iParam0))
		{
			iVar0 = 1;
		}
		iVar1 = func_258(iParam0, iVar0);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
		{
			return NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar1, 426439576, 1);
		}
	}
	return Global_1048995[iParam0 /*1425*/].f_32;
}


int func_344(int iParam0)//Position - 0x29274
{
	int iVar0;
	
	if (GlobalFunc_5062(iParam0, -1) > 0)
	{
		if (GlobalFunc_218())
		{
			return SYSTEM::ROUND((IntToFloat(func_342(GlobalFunc_5062(iParam0, -1))) * 0.5f));
		}
		if (iParam0 == 0)
		{
			return SYSTEM::ROUND((IntToFloat(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_3) * 0.5f));
		}
		else if (iParam0 == 1)
		{
			return SYSTEM::ROUND((IntToFloat(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_681) * 0.5f));
		}
		else if (iParam0 < 3)
		{
			iVar0 = (iParam0 - 2);
			return SYSTEM::ROUND((IntToFloat(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_682[iVar0]) * 0.5f));
		}
	}
	return 0;
}











int func_355()//Position - 0x29AEB
{
	if (func_358())
	{
		return 1;
	}
	switch (GlobalFunc_8329())
	{
		case 0:
			if (GlobalFunc_469(0) < 10000)
			{
				return 0;
			}
			else
			{
				GlobalFunc_585(111, 1);
				func_356();
				GlobalFunc_10608(0, 0, 91, 10000, 1);
			}
			break;
		
		case 2:
			if (GlobalFunc_469(2) < 10000)
			{
				return 0;
			}
			else
			{
				GlobalFunc_585(113, 1);
				func_356();
				GlobalFunc_10608(2, 0, 91, 10000, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_469(1) < 10000)
			{
				return 0;
			}
			else
			{
				GlobalFunc_585(112, 1);
				func_356();
				GlobalFunc_10608(1, 0, 91, 10000, 1);
			}
			break;
	}
	GlobalFunc_4907();
	return 1;
}

void func_356()//Position - 0x29BA6
{
	if (Global_68245)
	{
		return;
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		return;
	}
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), "PURCHASE_ONLINE", "SPEECH_PARAMS_FORCE", 1);
}


int func_358()//Position - 0x29C32
{
	switch (GlobalFunc_8329())
	{
		case 0:
			if (GlobalFunc_485(111))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (GlobalFunc_485(113))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (GlobalFunc_485(112))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}


void func_360(int iParam0, int iParam1, int iParam2)//Position - 0x29CC8
{
	struct<2> Var0;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	bool bVar61;
	int iVar62;
	
	Var0.f_1 = 39;
	iVar51 = -1;
	iVar52 = -1;
	bVar54 = false;
	bVar57 = false;
	if ((iParam0 == 16 && iParam2 == 34) || (iParam0 != 16 && iParam2 == 12))
	{
		bVar57 = true;
	}
	if (bVar57)
	{
		if (func_469(iParam0, (iParam1 - 3)) || (iParam1 > 2 && iParam1 < 34))
		{
			iVar53 = func_478(iParam0, iParam1);
			if (!Global_68245)
			{
				iVar55 = func_467(iVar53, 0, 0);
				if (func_466(iVar53, GlobalFunc_8329()))
				{
					func_657(iParam0, 4, iVar53, iVar55);
					return;
				}
				if (iVar53 == 200 && Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked)
				{
					func_657(iParam0, 4, iVar53, iVar55);
					return;
				}
				if (iVar55 > 0 && iVar55 > GlobalFunc_469(GlobalFunc_8329()))
				{
					func_657(iParam0, 2, iVar53, iVar55);
					return;
				}
				if (!func_465(iVar53))
				{
					func_657(iParam0, 1, iVar53, iVar55);
					return;
				}
				if (!func_464(iVar53, GlobalFunc_8329()))
				{
					func_657(iParam0, 5, iVar53, iVar55);
					return;
				}
				switch (iParam0)
				{
					case 10:
						if (GlobalFunc_4962(3))
						{
							iVar55 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iVar55)));
							bVar54 = true;
						}
						break;
					
					case 11:
						if (GlobalFunc_4962(4))
						{
							iVar55 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iVar55)));
							bVar54 = true;
						}
						break;
					
					case 12:
						if (GlobalFunc_4962(2))
						{
							iVar55 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iVar55)));
							bVar54 = true;
						}
						break;
				}
				if (bVar54)
				{
					switch (iParam0)
					{
						case 10:
							GlobalFunc_4960(3);
							break;
						
						case 11:
							GlobalFunc_4960(4);
							break;
						
						case 12:
							GlobalFunc_4960(2);
							break;
						}
				}
				switch (iParam0)
				{
					case 10:
						GlobalFunc_10834(GlobalFunc_8329(), 85, iVar55);
						break;
					
					case 11:
						GlobalFunc_10834(GlobalFunc_8329(), 87, iVar55);
						break;
					
					case 12:
						GlobalFunc_10834(GlobalFunc_8329(), 86, iVar55);
						break;
					
					case 13:
						GlobalFunc_10834(GlobalFunc_8329(), 88, iVar55);
						break;
					
					case 15:
						GlobalFunc_10834(GlobalFunc_8329(), 89, iVar55);
						break;
					
					case 16:
						GlobalFunc_10834(GlobalFunc_8329(), 90, iVar55);
						break;
				}
				STATS::STAT_GET_INT(joaat("sp0_sp_money_spent_on_vehicles"), &iVar58, -1);
				STATS::STAT_GET_INT(joaat("sp1_sp_money_spent_on_vehicles"), &iVar59, -1);
				STATS::STAT_GET_INT(joaat("sp2_sp_money_spent_on_vehicles"), &iVar60, -1);
				switch (GlobalFunc_8329())
				{
					case 0:
						STATS::STAT_SET_INT(joaat("sp0_sp_money_spent_on_vehicles"), (iVar58 + iVar55), 1);
						break;
					
					case 1:
						STATS::STAT_SET_INT(joaat("sp1_sp_money_spent_on_vehicles"), (iVar59 + iVar55), 1);
						break;
					
					case 2:
						STATS::STAT_SET_INT(joaat("sp2_sp_money_spent_on_vehicles"), (iVar60 + iVar55), 1);
						break;
				}
				func_356();
				func_429(iVar53, GlobalFunc_8329(), &Local_2610, iParam0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", " WEB_NAVIGATION_SOUNDS_PHONE", 1);
			}
			else
			{
				iLocal_2683 = -1;
				iLocal_2686 = -1;
				iLocal_2684 = -1;
				bVar61 = false;
				if (iVar53 == 164)
				{
					if (Global_67135 == 1)
					{
						bVar61 = false;
					}
					if (Global_67135 == 2)
					{
						bVar61 = true;
					}
				}
				iVar55 = func_412(iVar53, bVar61);
				if (func_411(iVar53))
				{
					if (GlobalFunc_5062(0, -1) < 1)
					{
						func_657(iParam0, 1, iVar53, iVar55);
						return;
					}
				}
				else
				{
					iVar62 = GlobalFunc_996(iVar53, Global_67135);
					if (GlobalFunc_5266(iVar62))
					{
						func_657(iParam0, 4, iVar53, iVar55);
						return;
					}
				}
				if (Global_68245)
				{
					switch (iParam0)
					{
						case 10:
						case 16:
							iVar55 = SYSTEM::CEIL((Global_262145.f_64 * SYSTEM::TO_FLOAT(iVar55)));
							break;
						
						case 11:
						case 12:
							if (GlobalFunc_2044(iVar53) == 1)
							{
								iVar55 = SYSTEM::CEIL((Global_262145.f_65 * SYSTEM::TO_FLOAT(iVar55)));
							}
							else
							{
								iVar55 = SYSTEM::CEIL((Global_262145.f_66 * SYSTEM::TO_FLOAT(iVar55)));
							}
							break;
						
						case 13:
							iVar55 = SYSTEM::CEIL((Global_262145.f_67 * SYSTEM::TO_FLOAT(iVar55)));
							break;
						
						case 15:
							iVar55 = SYSTEM::CEIL((Global_262145.f_68 * SYSTEM::TO_FLOAT(iVar55)));
							break;
					}
					if (Global_262145.f_6018)
					{
						switch (iParam0)
						{
							case 10:
								iVar55 = SYSTEM::CEIL((((100f - Global_262145.f_6704) / 100f) * SYSTEM::TO_FLOAT(iVar55)));
								break;
							
							case 11:
								iVar55 = SYSTEM::CEIL((((100f - Global_262145.f_6705) / 100f) * SYSTEM::TO_FLOAT(iVar55)));
								break;
							
							case 16:
								iVar55 = SYSTEM::CEIL((((100f - Global_262145.f_6706) / 100f) * SYSTEM::TO_FLOAT(iVar55)));
								break;
							}
						}
				}
				if (iVar55 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar55, 0, 1, 0, -1))
				{
					func_657(iParam0, 2, iVar53, iVar55);
					return;
				}
				if (iVar55 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(iVar55, 0, 1, 0, -1))
				{
					func_657(iParam0, 2, iVar53, iVar55);
					return;
				}
				if (GlobalFunc_464())
				{
					func_657(iParam0, 8, iVar53, iVar55);
					return;
				}
				iLocal_2682 = iVar53;
				GlobalFunc_7025(iLocal_2682, &Local_2610, 1, 145);
				if (!func_411(iVar53))
				{
					if (!func_392(iParam0, iVar53, iVar55))
					{
						func_657(iParam0, 3, iVar53, iVar55);
					}
					else if (iLocal_696 != 4 && iLocal_696 != 6)
					{
						func_384(iVar53, 0, iParam0, -1);
						func_383();
						GlobalFunc_4989(3, 0);
					}
					return;
				}
				if (GlobalFunc_5062(1, -1) < 1 && GlobalFunc_5062(2, -1) < 1)
				{
					iVar56 = GlobalFunc_6953(1, 0, GlobalFunc_1361(Local_2610.f_42), 0, -1);
					iVar52 = GlobalFunc_8512(1, 0, GlobalFunc_1361(Local_2610.f_42), 0, -1, 0);
				}
				else
				{
					iVar56 = -1;
				}
				if (iVar56 == -1 || iVar52 == -1)
				{
					Global_17236.f_7172 = 1;
					iVar52 = -1;
					while (!func_361(&Var0, &iVar51, &iVar52, GlobalFunc_1361(Local_2610.f_42), 0) && func_264())
					{
						GlobalFunc_187();
						GlobalFunc_7629();
						SYSTEM::WAIT(0);
						Global_17236.f_7172 = 1;
					}
					Global_17236.f_7172 = 0;
					iLocal_2683 = iVar51;
					iLocal_2684 = iVar52;
					func_773(0, 0, 0);
					if (iVar51 == -1 || iVar52 == -1)
					{
						func_657(iParam0, 7, iVar53, iVar55);
						return;
					}
				}
				else
				{
					iLocal_2683 = iVar56;
				}
				iLocal_2685 = 1;
				if (func_658(iParam0, iVar55))
				{
					func_384(iVar53, Global_67135, iParam0, iLocal_2686);
				}
				else
				{
					func_657(iParam0, 8, iVar53, iVar55);
				}
			}
		}
	}
}

int func_361(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2A33E
{
	bool bVar0;
	bool bVar1;
	
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1)) || GlobalFunc_1277()) || Global_1315828) || Global_2428891.f_3157.f_32)
	{
		*iParam1 = -1;
		func_337(uParam0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	GlobalFunc_1394();
	GlobalFunc_187();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 1, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		GlobalFunc_6900(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_46), 1);
	if (GlobalFunc_4998(0, -1))
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_46, 0))
			{
				func_364(uParam0, bParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_46), 0);
				func_363(uParam0, bParam4, bVar1);
				GlobalFunc_8511(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !GlobalFunc_153(8, -1)) && !Global_2428131.f_656.f_5)
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (GlobalFunc_1391())
					{
						if (uParam0->f_42 == 0)
						{
							if (Global_2543381 != uParam0->f_43)
							{
								uParam0->f_43 = Global_2543381;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
								MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_2543381 != uParam0->f_44)
						{
							uParam0->f_44 = Global_2543381;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!MISC::IS_BIT_SET(uParam0->f_49, 0))
				{
					if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || GlobalFunc_1389()) || bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
						if (uParam0->f_42 == 0)
						{
							if (uParam0->f_1[uParam0->f_43] > 0)
							{
								*iParam2 = GlobalFunc_8512(1, 0, bParam3, uParam0->f_1[uParam0->f_43], -1, 0);
								if (*iParam2 >= 0)
								{
									GlobalFunc_1582(*iParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = GlobalFunc_6953(1, 0, bParam3, 0, -1);
									}
								}
								if (*iParam1 >= 0 && *iParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_46), 0);
									func_337(uParam0);
									return 1;
								}
							}
							uParam0->f_42 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							bVar1 = true;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_49, 2) && !MISC::IS_BIT_SET(uParam0->f_41, uParam0->f_44))
						{
							GlobalFunc_5342(-1);
							GlobalFunc_261(176, "BB_YES", -1);
							GlobalFunc_261(177, "BB_NO", -1);
							MISC::SET_BIT(&(uParam0->f_49), 2);
						}
						else
						{
							*iParam2 = uParam0->f_1[uParam0->f_44];
							GlobalFunc_1582(*iParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = GlobalFunc_6953(1, 0, bParam3, 0, -1);
							}
							if (*iParam1 >= 0 && *iParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_46), 0);
								func_337(uParam0);
							}
							else
							{
								func_337(uParam0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_49), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 201) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_49), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_49, 1))
				{
					if (((GlobalFunc_1383() || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || (GlobalFunc_2041() && Global_2543381 > -1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (uParam0->f_42 == 0)
						{
							func_337(uParam0);
							*iParam1 = -1;
							return 1;
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_49, 2))
						{
							uParam0->f_42 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
						}
						else
						{
							GlobalFunc_5342(-1);
							GlobalFunc_261(176, "BB_SELECT", -1);
							GlobalFunc_261(177, "BB_BACK", -1);
							MISC::CLEAR_BIT(&(uParam0->f_49), 2);
						}
						MISC::SET_BIT(&(uParam0->f_49), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2, 202) && !PAD::IS_CONTROL_PRESSED(2, 238)) && !GlobalFunc_1383())
				{
					MISC::CLEAR_BIT(&(uParam0->f_49), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_49, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_49, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))
						{
							if (uParam0->f_42 == 0)
							{
								uParam0->f_43 = (uParam0->f_43 - 1);
							}
							else
							{
								uParam0->f_44 = (uParam0->f_44 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							MISC::SET_BIT(&(uParam0->f_49), 4);
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							GlobalFunc_434(&(uParam0->f_47));
						}
					}
					else if (func_268(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_49), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_49, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))
						{
							if (uParam0->f_42 == 0)
							{
								uParam0->f_43++;
							}
							else
							{
								uParam0->f_44++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							MISC::SET_BIT(&(uParam0->f_49), 5);
							MISC::CLEAR_BIT(&(uParam0->f_46), 0);
							GlobalFunc_434(&(uParam0->f_47));
						}
					}
					else if (func_268(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_49), 5);
					}
				}
				if (uParam0->f_42 == 0)
				{
					if (uParam0->f_43 >= uParam0->f_45)
					{
						uParam0->f_43 = 0;
					}
					if (uParam0->f_43 < 0)
					{
						uParam0->f_43 = (uParam0->f_45 - 1);
					}
				}
				else
				{
					if (uParam0->f_44 >= uParam0->f_45)
					{
						uParam0->f_44 = 0;
					}
					if (uParam0->f_44 < 0)
					{
						uParam0->f_44 = (uParam0->f_45 - 1);
					}
				}
				func_363(uParam0, bParam4, bVar1);
				GlobalFunc_8511(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
		}
	}
	return 0;
}


void func_363(var uParam0, bool bParam1, bool bParam2)//Position - 0x2A995
{
	if (!bParam2)
	{
		if (uParam0->f_42 == 0)
		{
			GlobalFunc_1353("DEL_VEH_SEL1", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_49, 2))
		{
			GlobalFunc_1353("MP_PROP_SC_2", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_41, uParam0->f_44))
		{
			GlobalFunc_1353("DEL_VEH_SEL2", 100, 0);
		}
		else if (bParam1)
		{
			GlobalFunc_1353("MP_PROP_SC_3", 100, 0);
		}
		else
		{
			GlobalFunc_1353("MP_PROP_SC_1", 100, 0);
		}
	}
}

void func_364(var uParam0, bool bParam1, bool bParam2)//Position - 0x2AA0E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	iVar0 = 0;
	GlobalFunc_262(0);
	if (bParam2)
	{
		GlobalFunc_7023(GlobalFunc_2043());
	}
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1315(0, 0, 0, 0, 0);
	bVar2 = false;
	iVar12 = 1;
	switch (uParam0->f_42)
	{
		case 0:
			GlobalFunc_1318("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				iVar3 = GlobalFunc_5062(iVar1, -1);
				if (iVar3 > 0)
				{
					if (!GlobalFunc_1587())
					{
						if (!GlobalFunc_1586())
						{
							GlobalFunc_7830(iVar0, &(Global_1048995[iVar3 /*1425*/].f_16), 0, 1, 0, 0);
						}
						else
						{
							Var6 = { Global_1048995[iVar3 /*1425*/].f_16 };
							StringConCat(&Var6, "S", 16);
							GlobalFunc_7830(iVar0, &Var6, 0, 1, 0, 0);
						}
					}
					else
					{
						GlobalFunc_7830(iVar0, "PIM_DNAME", 1, 1, 0, 0);
						func_320(HUD::_GET_LABEL_TEXT(&(Global_1048995[iVar3 /*1425*/].f_16)), 0, 1);
					}
					uParam0->f_1[iVar1] = iVar3;
					iVar0++;
				}
				iVar1++;
			}
			uParam0->f_45 = iVar0;
			GlobalFunc_1355(uParam0->f_43, 1, 1);
			break;
		
		case 1:
			GlobalFunc_1318("DEL_VEH_SEL3");
			uParam0->f_41 = 0;
			iVar4 = (0 + (13 * uParam0->f_43));
			iVar3 = GlobalFunc_5062(uParam0->f_43, -1);
			iVar5 = (10 + (13 * uParam0->f_43));
			iVar1 = 0;
			while (iVar1 < 13)
			{
				iVar10 = (iVar1 + iVar4);
				bVar2 = false;
				if (iVar3 <= 0)
				{
					bVar2 = true;
				}
				else if (Global_1048995[iVar3 /*1425*/].f_33 == 2)
				{
					if (iVar10 >= iVar4 + 2 && iVar10 != iVar5)
					{
						bVar2 = true;
					}
				}
				else if (Global_1048995[iVar3 /*1425*/].f_33 == 6)
				{
					if ((iVar10 >= iVar4 + 6 && iVar10 != iVar5) && iVar10 != iVar5 + 1)
					{
						bVar2 = true;
					}
				}
				if (!bParam1)
				{
					if (iVar10 >= iVar5)
					{
						bVar2 = true;
					}
				}
				else if (iVar10 < iVar5)
				{
					bVar2 = true;
				}
				if (!bVar2)
				{
					GlobalFunc_1582(iVar10, &iVar11, 1);
					if ((iVar11 >= 0 && Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42))
					{
						iVar12 = 1;
						StringCopy(&Var13, "", 24);
						if (GlobalFunc_1359(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/])))
						{
							iVar12++;
						}
						if (GlobalFunc_1358(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42, Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_53))
						{
							iVar12++;
						}
						if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_72, 1))
						{
							if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_72, 2) && !bParam1)
							{
								StringCopy(&Var13, "MP_MAN_VEH_S0", 24);
								StringIntConCat(&Var13, iVar12, 24);
								GlobalFunc_7830(iVar0, &Var13, iVar12, 1, 0, 0);
								GlobalFunc_8454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42), 0);
								if (GlobalFunc_1359(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/])))
								{
									GlobalFunc_8454("VEH_LIVERY", 0);
								}
								if (GlobalFunc_1358(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42, Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_53))
								{
									GlobalFunc_8454("VEH_TOPL", 0);
								}
								uParam0->f_1[iVar0] = iVar10;
								iVar0++;
							}
							else
							{
								GlobalFunc_7830(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
								uParam0->f_1[iVar0] = iVar10;
								MISC::SET_BIT(&(uParam0->f_41), iVar0);
								iVar0++;
							}
						}
						else if (bParam1)
						{
							if (GlobalFunc_1361(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42))
							{
								if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_72, 6))
								{
									StringCopy(&Var13, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var13, iVar12, 24);
									GlobalFunc_7830(iVar0, &Var13, iVar12, 1, 0, 0);
									GlobalFunc_8454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42), 0);
									if (GlobalFunc_1359(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/])))
									{
										GlobalFunc_8454("VEH_LIVERY", 0);
									}
									if (GlobalFunc_1358(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42, Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_53))
									{
										GlobalFunc_8454("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var13, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var13, iVar12, 24);
									GlobalFunc_7830(iVar0, &Var13, iVar12, 1, 0, 0);
									GlobalFunc_8454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42), 0);
									if (GlobalFunc_1359(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/])))
									{
										GlobalFunc_8454("VEH_LIVERY", 0);
									}
									if (GlobalFunc_1358(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42, Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_53))
									{
										GlobalFunc_8454("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar10;
								iVar0++;
							}
						}
						else if (!GlobalFunc_1361(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42))
						{
							if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_72, 6))
							{
								StringCopy(&Var13, "MP_MAN_VEH_S1", 24);
								StringIntConCat(&Var13, iVar12, 24);
								GlobalFunc_7830(iVar0, &Var13, iVar12, 1, 0, 0);
								GlobalFunc_8454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42), 0);
								if (GlobalFunc_1359(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/])))
								{
									GlobalFunc_8454("VEH_LIVERY", 0);
								}
								if (GlobalFunc_1358(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42, Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_53))
								{
									GlobalFunc_8454("VEH_TOPL", 0);
								}
							}
							else
							{
								StringCopy(&Var13, "PIL_MP_VEH_0", 24);
								StringIntConCat(&Var13, iVar12, 24);
								GlobalFunc_7830(iVar0, &Var13, iVar12, 1, 0, 0);
								GlobalFunc_8454(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42), 0);
								if (GlobalFunc_1359(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/])))
								{
									GlobalFunc_8454("VEH_LIVERY", 0);
								}
								if (GlobalFunc_1358(Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_42, Global_2097152[GlobalFunc_177() /*8053*/][iVar11 /*111*/].f_53))
								{
									GlobalFunc_8454("VEH_TOPL", 0);
								}
							}
							uParam0->f_1[iVar0] = iVar10;
							iVar0++;
						}
					}
					else
					{
						GlobalFunc_7830(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
						uParam0->f_1[iVar0] = iVar10;
						MISC::SET_BIT(&(uParam0->f_41), iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
			uParam0->f_45 = iVar0;
			if (uParam0->f_44 >= uParam0->f_45)
			{
				uParam0->f_44 = 0;
			}
			GlobalFunc_1355(uParam0->f_44, 1, 1);
			break;
	}
	GlobalFunc_5342(-1);
	GlobalFunc_261(176, "BB_SELECT", -1);
	GlobalFunc_261(177, "BB_BACK", -1);
}



















void func_383()//Position - 0x2D1BC
{
	GlobalFunc_6720(1711, Global_2097152[GlobalFunc_177() /*8053*/].f_4330, -1, 1);
	GlobalFunc_6720(1712, Global_2097152[GlobalFunc_177() /*8053*/].f_4330.f_1[0], -1, 1);
	GlobalFunc_6720(1713, Global_2097152[GlobalFunc_177() /*8053*/].f_4330.f_1[1], -1, 1);
	GlobalFunc_6720(1714, Global_2097152[GlobalFunc_177() /*8053*/].f_4330.f_1[2], -1, 1);
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2D22F
{
	int iVar0;
	struct<3> Var1;
	char cVar7[64];
	bool bVar23;
	struct<6> Var24;
	
	StringCopy(&cVar7, GlobalFunc_5594(iParam0), 64);
	if (iParam0 == 166)
	{
		StringCopy(&cVar7, GlobalFunc_5594(165), 64);
	}
	bVar23 = false;
	if (GlobalFunc_996(iParam0, iParam1) != -1)
	{
		iVar0 = 41;
		bVar23 = true;
	}
	switch (iParam2)
	{
		case 10:
			iVar0 = 138;
			if (bVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 11:
			iVar0 = 141;
			if (bVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 12:
			iVar0 = 140;
			if (bVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 13:
			iVar0 = 139;
			if (bVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 15:
			iVar0 = 142;
			if (bVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 16:
			iVar0 = 143;
			if (bVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
				if (!GlobalFunc_1386(iParam0))
				{
					StringCopy(&Var24, "", 24);
					switch (iParam1)
					{
						case 1:
							StringCopy(&Var24, "TXT_CAR_GARN0", 24);
							break;
						
						case 2:
							StringCopy(&Var24, "TXT_CAR_GARN1", 24);
							break;
						
						case 3:
							StringCopy(&Var24, "TXT_CAR_GARN2", 24);
							break;
						
						case 4:
							StringCopy(&Var24, "TXT_CAR_GARN3", 24);
							break;
						
						case 5:
							StringCopy(&Var24, "TXT_CAR_GARN4", 24);
							break;
						
						case 6:
							StringCopy(&Var24, "TXT_CAR_GARN5", 24);
							break;
						
						case 7:
							StringCopy(&Var24, "TXT_CAR_GARN6", 24);
							break;
						
						case 8:
							StringCopy(&Var24, "TXT_CAR_GARN7", 24);
							break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var24) && HUD::DOES_TEXT_LABEL_EXIST(&Var24))
					{
						Var1 = { Var24 };
					}
				}
			}
			break;
		
		default:
			break;
	}
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		if (bVar23)
		{
			StringCopy(&Var1, "TXT_VEH_BASEPEG", 24);
		}
		else
		{
			StringCopy(&Var1, "TXT_VEH_GARN", 24);
		}
		StringCopy(&cVar7, "", 64);
	}
	if (GlobalFunc_996(iParam0, iParam1) != -1)
	{
		func_387(iParam2, &cVar7, 1);
		func_385(iVar0, &Var1, &cVar7, "", 120000, -1, -1);
	}
	else if (iParam3 == -1)
	{
	}
	else
	{
		func_387(iParam2, &cVar7, 0);
		func_385(iVar0, &Var1, &cVar7, "", 120000, 1, iParam3);
	}
	func_771(0);
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_524 = 0f;
	}
	func_640(1, 0);
	SYSTEM::WAIT(0);
}

void func_385(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2D4F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (GlobalFunc_439(&(Global_2446554.f_2078[iVar0 /*44*/].f_41)))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2446554.f_2078[iVar0 /*44*/]), sParam1))
			{
				if (iParam6 != -1)
				{
					if (iParam6 == Global_2446554.f_2078[iVar0 /*44*/].f_40)
					{
						iVar1 = iVar0;
						bVar4 = true;
					}
				}
			}
		}
		if (!GlobalFunc_439(&(Global_2446554.f_2078[iVar0 /*44*/].f_41)))
		{
			if (iVar2 == -1)
			{
				iVar2 = iVar0;
			}
		}
		if (bVar4)
		{
			iVar0 = 39;
		}
		iVar0++;
	}
	iVar3 = iVar1;
	if (iVar3 == -1)
	{
		iVar3 = iVar2;
	}
	if (iVar3 >= 0)
	{
		Global_2446554.f_2078[iVar3 /*44*/].f_6 = iParam0;
		StringCopy(&(Global_2446554.f_2078[iVar3 /*44*/]), sParam1, 24);
		StringCopy(&(Global_2446554.f_2078[iVar3 /*44*/].f_7), sParam2, 64);
		StringCopy(&(Global_2446554.f_2078[iVar3 /*44*/].f_23), sParam3, 64);
		Global_2446554.f_2078[iVar3 /*44*/].f_39 = iParam5;
		Global_2446554.f_2078[iVar3 /*44*/].f_40 = iParam6;
		GlobalFunc_436(&(Global_2446554.f_2078[iVar3 /*44*/].f_41), 1, 0);
		Global_2446554.f_2078[iVar3 /*44*/].f_43 = iParam4;
	}
}


void func_387(int iParam0, char* sParam1, bool bParam2)//Position - 0x2D626
{
	char* sVar0;
	char* sVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_388();
		sVar0 = HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[41 /*29*/].f_7));
		sVar1 = "DELVIRLP";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar1 = "DELVIRLB";
		}
		if (!bParam2)
		{
			sVar1 = "DELVIRL";
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				sVar1 = "DELVIRLG";
			}
			switch (iParam0)
			{
				case 10:
					sVar0 = "CHAR_CARSITE";
					break;
				
				case 11:
					sVar0 = "CHAR_PLANESITE";
					break;
				
				case 12:
					sVar0 = "CHAR_MILSITE";
					break;
				
				case 13:
					sVar0 = "CHAR_BOATSITE";
					break;
				
				case 15:
					sVar0 = "CHAR_BIKESITE";
					break;
				
				case 16:
					sVar0 = "CHAR_CARSITE2";
					break;
				}
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sVar1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
		}
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar0, sVar0, 0, 0, "DELPURCN", 0);
	}
}

void func_388()//Position - 0x2D703
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(21);
	Global_2408820[iVar0 /*83*/] = 21;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}




int func_392(int iParam0, int iParam1, int iParam2)//Position - 0x2EEAC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = GlobalFunc_996(iParam1, Global_67135);
	bVar1 = false;
	if (iVar0 < -1)
	{
		return 0;
	}
	if (!GlobalFunc_7679())
	{
		func_657(iParam0, 6, iParam1, iParam2);
		return 1;
	}
	if (GlobalFunc_5266(iVar0))
	{
		func_657(iParam0, 4, iParam1, iParam2);
		return 1;
	}
	func_402(iVar0);
	switch (iParam0)
	{
		case 10:
			if (GlobalFunc_4962(3))
			{
				bVar1 = true;
			}
			break;
		
		case 11:
			if (GlobalFunc_4962(4))
			{
				bVar1 = true;
			}
			break;
		
		case 12:
			if (GlobalFunc_4962(2))
			{
				bVar1 = true;
			}
			break;
	}
	if (GlobalFunc_218())
	{
		iLocal_692 = 1;
		iLocal_693 = 0;
		iVar2 = 0;
		if (iParam1 == 164)
		{
			if (Global_67135 == 2)
			{
				iVar2 = 1;
			}
		}
		else if (iParam1 == 200)
		{
			switch (Global_67135)
			{
				case 1:
					iVar2 = 0;
					break;
				
				case 2:
					iVar2 = 1;
					break;
				
				case 3:
					iVar2 = 2;
					break;
				
				case 4:
					iVar2 = 3;
					break;
				
				case 5:
					iVar2 = 4;
					break;
				
				case 6:
					iVar2 = 5;
					break;
				
				case 7:
					iVar2 = 6;
					break;
				
				case 8:
					iVar2 = 7;
					break;
				
				case 9:
					iVar2 = 8;
					break;
				
				case 10:
					iVar2 = 9;
					break;
				
				case 11:
					iVar2 = 10;
					break;
				
				case 12:
					iVar2 = 11;
					break;
				
				case 13:
					iVar2 = 12;
					break;
				
				case 14:
					iVar2 = 13;
					break;
				
				case 15:
					iVar2 = 14;
					break;
				
				case 16:
					iVar2 = 15;
					break;
				
				case 17:
					iVar2 = 16;
					break;
				
				case 18:
					iVar2 = 17;
					break;
				
				case 19:
					iVar2 = 18;
					break;
				
				case 20:
					iVar2 = 19;
					break;
				
				case 21:
					iVar2 = 20;
					break;
				
				case 22:
					iVar2 = 21;
					break;
				
				case 23:
					iVar2 = 22;
					break;
				
				case 24:
					iVar2 = 23;
					break;
				
				case 25:
					iVar2 = 24;
					break;
				}
		}
		iVar3 = func_400(iParam1, iVar2);
		iVar4 = Global_2097152[GlobalFunc_177() /*8053*/].f_4330.f_1[(iVar0 / 32)];
		iVar5 = -1;
		iVar6 = 0;
		if (bVar1)
		{
			switch (iParam0)
			{
				case 10:
					iVar6 = 118439962;
					break;
				
				case 11:
					iVar6 = 1514966546;
					break;
				
				case 12:
					iVar6 = 1776242445;
					break;
				}
		}
		while (func_220(&iVar5, iParam2, iVar4, -1843039992, 537254313, iVar3, 0, iVar6, 0, 0, 0))
		{
			func_640(0, 0);
			SYSTEM::WAIT(0);
		}
		switch (iVar5)
		{
			case 0:
				func_399(iVar0);
				func_657(iParam0, 8, iParam1, iParam2);
				return 0;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	if (bVar1)
	{
		switch (iParam0)
		{
			case 10:
				iParam2 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam2)));
				break;
			
			case 11:
				iParam2 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam2)));
				break;
			
			case 12:
				iParam2 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam2)));
				break;
			}
	}
	iVar7 = GlobalFunc_1365(iParam1);
	if (iVar7 != GlobalFunc_1365(iParam1))
	{
		func_657(iParam0, 6, iParam1, iParam2);
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar7))
	{
		GlobalFunc_6857(131, 1, -1, 1);
	}
	else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
	{
		GlobalFunc_6857(132, 1, -1, 1);
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar7))
	{
		GlobalFunc_6857(130, 1, -1, 1);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 10:
				GlobalFunc_4960(3);
				break;
			
			case 11:
				GlobalFunc_4960(4);
				break;
			
			case 12:
				GlobalFunc_4960(2);
				break;
			}
	}
	if (iParam2 < 1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 10:
			iVar8 = 85;
			break;
		
		case 11:
			iVar8 = 87;
			break;
		
		case 12:
			iVar8 = 86;
			break;
		
		case 13:
			iVar8 = 88;
			break;
		
		case 15:
			iVar8 = 89;
			break;
		
		case 16:
			iVar8 = 90;
			break;
	}
	GlobalFunc_5311(joaat("mpply_ingamestore_moneyspent"), iParam2);
	bVar9 = MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
	bVar10 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iParam2;
	if (GlobalFunc_218())
	{
		NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
	}
	MONEY::NETWORK_BUY_ITEM(iParam2, iVar7, 7, 1, bVar9, GlobalFunc_5594(iParam1), 0, iVar8, 0, bVar10);
	if (GlobalFunc_218())
	{
		GlobalFunc_5069(GlobalFunc_5422());
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_394(iVar7, iParam2);
		if (iVar7 == joaat("monster"))
		{
			GlobalFunc_5217(3604, 1, -1, 1);
		}
		else if (iVar7 == joaat("sovereign"))
		{
			GlobalFunc_5217(3605, 1, -1, 1);
		}
		iVar11 = GlobalFunc_6872(2042, -1, 0);
		iVar12 = ((iVar11 / 1000000) + 1 * 1000000);
		if ((iVar11 + iParam2) >= iVar12)
		{
			func_393((iVar12 / 1000000) + 1);
		}
		GlobalFunc_6720(2042, (iVar11 + iParam2), -1, 1);
	}
	iLocal_523 = 1;
	Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_149 = 1;
	return 1;
}

void func_393(var uParam0)//Position - 0x2F3CA
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(85);
	Global_2408820[iVar0 /*83*/] = 85;
	Global_2408820[iVar0 /*83*/].f_17 = uParam0;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_394(int iParam0, int iParam1)//Position - 0x2F401
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!func_398(iParam0))
	{
		return 0;
	}
	GlobalFunc_5311(joaat("mpply_money_spent_on_heistveh"), iParam1);
	iVar0 = GlobalFunc_1028(joaat("mpply_money_spent_on_heistveh"));
	if (iVar0 >= 8000000)
	{
		GlobalFunc_7024(6, 1);
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(57))
		{
			GlobalFunc_8960(57, 1);
		}
		return 1;
	}
	return 0;
}




int func_398(int iParam0)//Position - 0x2F668
{
	switch (iParam0)
	{
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("gresley"):
		case joaat("jackal"):
		case joaat("landstalker"):
		case joaat("mesa3"):
		case joaat("nemesis"):
		case joaat("pbus"):
		case joaat("rumpo"):
		case joaat("schafter2"):
		case joaat("seminole"):
		case joaat("surge"):
			return 1;
		
		default:
	}
	return 0;
}

void func_399(int iParam0)//Position - 0x2F71E
{
	if (iParam0 != -1)
	{
		MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_4330.f_1[(iParam0 / 32)]), (iParam0 % 32));
	}
}

int func_400(int iParam0, int iParam1)//Position - 0x2F74C
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	char* sVar6;
	
	iVar0 = GlobalFunc_996(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar0 = (iVar0 + iParam1);
	StringCopy(&Var1, GlobalFunc_5594(iParam0), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == -515263000)
	{
		return 0;
	}
	iVar5 = GlobalFunc_1365(iParam0);
	if (iVar5 == 0)
	{
		return 0;
	}
	GlobalFunc_215(&sVar6, Var1, iVar5, 4, 1, iParam1, -1, -1);
	return MISC::GET_HASH_KEY(&sVar6);
}


void func_402(int iParam0)//Position - 0x2FC06
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_4330.f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2097152[GlobalFunc_177() /*8053*/].f_4330 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_383();
	}
}









int func_411(int iParam0)//Position - 0x3147B
{
	if (GlobalFunc_996(iParam0, 0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, bool bParam1)//Position - 0x31493
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar9;
	
	iVar0 = 0;
	iVar1 = GlobalFunc_1028(joaat("mpply_vehicle_id_admin_web"));
	iVar2 = GlobalFunc_1365(iParam0);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (iVar1 != 0)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 1;
			if (iParam0 == 109 && iVar1 == joaat("btype"))
			{
				iVar0 = 1;
			}
		}
	}
	switch (iParam0)
	{
		case 95:
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				return func_424(iVar2, Global_262145.f_6439, 1);
			}
			else
			{
				return -2;
			}
			break;
		
		case 96:
			if (GlobalFunc_84() && GlobalFunc_296())
			{
				return func_424(iVar2, Global_262145.f_6440, 1);
			}
			return func_424(iVar2, Global_262145.f_6440, bParam1);
			break;
		
		case 97:
			if (GlobalFunc_84() && GlobalFunc_296())
			{
				return func_424(iVar2, Global_262145.f_6441, 1);
			}
			return func_424(iVar2, Global_262145.f_6441, bParam1);
			break;
		
		case 98:
			if (GlobalFunc_84() && GlobalFunc_296())
			{
				return func_424(iVar2, Global_262145.f_6442, 1);
			}
			return func_424(iVar2, Global_262145.f_6442, bParam1);
			break;
	}
	switch (iParam0)
	{
		case 99:
			if (func_476(99))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 100:
			if (func_476(100))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 101:
			if (func_476(101))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 102:
			if (func_476(102))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 109:
			if (Global_262145.f_4937 || iVar0)
			{
				if (func_476(109))
				{
					return func_424(iVar2, Global_262145.f_4933, bParam1);
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 111:
			if (func_476(111))
			{
				return func_424(iVar2, Global_262145.f_4905, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 114:
			if (func_476(114))
			{
				return func_424(iVar2, Global_262145.f_4906, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 112:
			if (func_476(112))
			{
				return func_424(iVar2, Global_262145.f_4907, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 115:
			if (func_476(115))
			{
				return func_424(iVar2, Global_262145.f_4908, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 116:
			if (func_476(116))
			{
				return func_424(iVar2, Global_262145.f_4904, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 110:
			if (func_476(110))
			{
				return func_424(iVar2, Global_262145.f_4903, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 113:
			if (func_476(113))
			{
				return func_424(iVar2, Global_262145.f_4958, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 121:
			if (func_476(121))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 143:
			if (func_476(143))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 144:
			if (func_476(144))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 145:
			if (func_476(145))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 146:
			if (func_476(146))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 147:
			if (func_476(147))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 148:
			if (func_476(148))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 149:
			if (func_476(149))
			{
				return func_424(iVar2, -1, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 160:
			if (Global_262145.f_6128 || GlobalFunc_6708(3604, -1, -1))
			{
				if (func_476(160))
				{
					return func_424(iVar2, Global_262145.f_6132, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 161:
			if (Global_262145.f_6127 || GlobalFunc_6708(3605, -1, -1))
			{
				if (func_476(161))
				{
					return func_424(iVar2, Global_262145.f_6133, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 162:
			if (func_476(162))
			{
				return func_424(iVar2, Global_262145.f_6371, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 163:
			if (func_476(163))
			{
				return func_424(iVar2, Global_262145.f_6370, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 164:
			if (func_476(164))
			{
				if (!bParam1)
				{
					return func_424(iVar2, Global_262145.f_6372, 0);
				}
				else
				{
					return func_424(iVar2, Global_262145.f_6373, 1);
				}
				return -3;
			}
			break;
		
		case 165:
			if (func_476(165))
			{
				return func_424(iVar2, Global_262145.f_6368, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 166:
			if (func_476(166))
			{
				return func_424(iVar2, Global_262145.f_6369, 1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 167:
			if (func_476(167))
			{
				return func_424(iVar2, Global_262145.f_6644, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 168:
			if (func_476(168))
			{
				return func_424(iVar2, Global_262145.f_6645, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 169:
			if (func_476(169))
			{
				return func_424(iVar2, Global_262145.f_6646, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 170:
			if (func_476(170))
			{
				return func_424(iVar2, Global_262145.f_6647, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 187:
			if (Global_262145.f_6507 || GlobalFunc_8513(16))
			{
				if (func_476(187))
				{
					return func_424(iVar2, Global_262145.f_6891, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 177:
			if (Global_262145.f_6503 || GlobalFunc_8513(12))
			{
				if (func_476(177))
				{
					return func_424(iVar2, Global_262145.f_6882, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 185:
			if (Global_262145.f_6505 || GlobalFunc_8513(14))
			{
				if (func_476(185))
				{
					return func_424(iVar2, Global_262145.f_6889, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 174:
			if (GlobalFunc_8513(9))
			{
				if (func_476(174))
				{
					return func_424(iVar2, Global_262145.f_6879, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 171:
			if (Global_262145.f_6825 || GlobalFunc_8513(20))
			{
				return func_424(iVar2, Global_262145.f_6876, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 172:
			if (Global_262145.f_6500 || GlobalFunc_8513(7))
			{
				if (func_476(172))
				{
					return func_424(iVar2, Global_262145.f_6877, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 173:
			if (Global_262145.f_6501 || GlobalFunc_8513(8))
			{
				return func_424(iVar2, Global_262145.f_6878, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 175:
			if (Global_262145.f_6502 || GlobalFunc_8513(10))
			{
				if (func_476(175))
				{
					return func_424(iVar2, Global_262145.f_6880, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 176:
			if (GlobalFunc_8513(11))
			{
				if (func_476(176))
				{
					return func_424(iVar2, Global_262145.f_6881, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 178:
			if (Global_262145.f_6498 || GlobalFunc_8513(5))
			{
				if (func_476(178))
				{
					return func_424(iVar2, Global_262145.f_6883, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 179:
			if (Global_262145.f_6499 || GlobalFunc_8513(6))
			{
				if (func_476(179))
				{
					return func_424(iVar2, Global_262145.f_6884, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 183:
			if (Global_262145.f_6827 || GlobalFunc_8513(21))
			{
				return func_424(iVar2, Global_262145.f_6888, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 180:
			if (Global_262145.f_6509 || GlobalFunc_8513(18))
			{
				if (func_476(180))
				{
					return func_424(iVar2, Global_262145.f_6885, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 181:
			if (Global_262145.f_6826 || GlobalFunc_8513(22))
			{
				if (func_476(181))
				{
					return func_424(iVar2, Global_262145.f_6886, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 182:
			if (Global_262145.f_6510 || GlobalFunc_8513(19))
			{
				if (func_476(182))
				{
					return func_424(iVar2, Global_262145.f_6887, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 184:
			if (Global_262145.f_6504 || GlobalFunc_8513(13))
			{
				return func_424(iVar2, Global_262145.f_6893, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 186:
			if (Global_262145.f_6506 || GlobalFunc_8513(15))
			{
				if (func_476(186))
				{
					return func_424(iVar2, Global_262145.f_6890, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 188:
			if (Global_262145.f_6508 || GlobalFunc_8513(17))
			{
				if (func_476(188))
				{
					return func_424(iVar2, Global_262145.f_6892, bParam1);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 189:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7261, bParam1);
			break;
		
		case 190:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7262, bParam1);
			break;
		
		case 191:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7263, bParam1);
			break;
		
		case 192:
			return func_424(GlobalFunc_1365(iParam0), -1, bParam1);
			break;
		
		case 193:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7264, bParam1);
			break;
		
		case 194:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7265, bParam1);
			break;
		
		case 195:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7266, bParam1);
			break;
		
		case 196:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7267, bParam1);
			break;
		
		case 197:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7268, bParam1);
			break;
		
		case 198:
			return func_424(GlobalFunc_1365(iParam0), Global_262145.f_7269, bParam1);
			break;
		
		case 199:
			if (GlobalFunc_84())
			{
				return func_424(iVar2, Global_262145.f_6962, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 200:
			if (GlobalFunc_84())
			{
				return func_424(iVar2, Global_262145.f_6964, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 201:
			if (GlobalFunc_84())
			{
				return func_424(iVar2, Global_262145.f_6966, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 202:
			if (GlobalFunc_84())
			{
				return func_424(iVar2, Global_262145.f_6961, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 203:
			if (GlobalFunc_84())
			{
				return func_424(iVar2, Global_262145.f_6965, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 204:
			if (GlobalFunc_84())
			{
				return func_424(iVar2, Global_262145.f_6963, bParam1);
			}
			else
			{
				return -1;
			}
			break;
		
		case 205:
			return -1;
		
		case 206:
			return -1;
			break;
		
		case 207:
			return -1;
			break;
		
		case 208:
			return -1;
			break;
		
		case 209:
			return -1;
			break;
	}
	switch (iParam0)
	{
		case 210:
			if (func_476(210))
			{
				return func_424(iVar2, Global_262145.f_7175, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 211:
			if (func_476(211))
			{
				return func_424(iVar2, Global_262145.f_7174, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 212:
			if (func_476(212))
			{
				return func_424(iVar2, Global_262145.f_7172, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 213:
			if (func_476(213))
			{
				return func_424(iVar2, Global_262145.f_7173, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 214:
			if (func_476(214))
			{
				return func_424(GlobalFunc_1365(iParam0), Global_262145.f_8259, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 215:
			if (func_476(215))
			{
				return func_424(GlobalFunc_1365(iParam0), Global_262145.f_8260, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 216:
			if (func_476(216))
			{
				return func_424(GlobalFunc_1365(iParam0), Global_262145.f_8261, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 217:
			if (func_476(217))
			{
				return func_424(GlobalFunc_1365(iParam0), Global_262145.f_8262, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 218:
			if (func_476(218))
			{
				return func_424(GlobalFunc_1365(iParam0), Global_262145.f_8263, bParam1);
			}
			else
			{
				return -3;
			}
			break;
		
		case 219:
			if (func_476(219))
			{
				return func_424(GlobalFunc_1365(iParam0), Global_262145.f_8264, bParam1);
			}
			else
			{
				return -3;
			}
			break;
	}
	switch (iParam0)
	{
		case 117:
			return func_424(iVar2, -1, 1);
		
		case 118:
			return func_424(iVar2, -1, 1);
		
		case 119:
			return func_424(iVar2, -1, 1);
		
		case 120:
			return func_424(iVar2, -1, 1);
		
		default:
	}
	switch (iParam0)
	{
		case 5:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 82:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 63:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 78:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 57:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 49:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 22:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 62:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 94:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 51:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 89:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 66:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 33:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 70:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 83:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 20:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 71:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 19:
			return func_424(iVar2, -1, bParam1);
		
		case 58:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 3:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 84:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 7:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 48:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 72:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 38:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 21:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 12:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 54:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 90:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 81:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 13:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 4:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 56:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 69:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 60:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 91:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 50:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 15:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 53:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 41:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 92:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 44:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 43:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 2:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 25:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 85:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 14:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case joaat("mpsv_lp0_31"):
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 24:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 16:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 6:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 86:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 47:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 73:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 61:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 67:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 74:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 75:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 87:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 17:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 59:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 64:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 68:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 52:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 39:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 34:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 30:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 10:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 27:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 1:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 76:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 88:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 11:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 32:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 55:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 45:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 18:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 35:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 36:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 37:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 29:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 46:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 65:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 80:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 42:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 77:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 40:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 93:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 0:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 103:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 104:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 105:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 106:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 107:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 108:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 128:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 129:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 130:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 131:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 132:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 133:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 134:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 135:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 136:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 137:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 138:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 139:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 140:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 141:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 142:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 122:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 123:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 124:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 125:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 126:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 127:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 150:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 151:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 152:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 153:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 154:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 155:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 156:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 157:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 158:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		case 159:
			return func_424(iVar2, func_413(iParam0), bParam1);
		
		default:
	}
	iVar9 = func_424(iVar2, -1, bParam1);
	if (iVar9 != -1)
	{
		return uVar3;
	}
	return -1;
}

int func_413(int iParam0)//Position - 0x33030
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_3978;
		
		case 82:
			return Global_262145.f_3979;
		
		case 63:
			return Global_262145.f_3980;
		
		case 78:
			return Global_262145.f_3981;
		
		case 57:
			return Global_262145.f_3982;
		
		case 49:
			return Global_262145.f_3983;
		
		case 22:
			return Global_262145.f_3984;
		
		case 62:
			return Global_262145.f_3985;
		
		case 94:
			return Global_262145.f_3986;
		
		case 51:
			return Global_262145.f_3987;
		
		case 89:
			return Global_262145.f_3988;
		
		case 66:
			return Global_262145.f_3989;
		
		case 33:
			return Global_262145.f_3990;
		
		case 70:
			return Global_262145.f_3991;
		
		case 83:
			return Global_262145.f_3992;
		
		case 20:
			return Global_262145.f_3993;
		
		case 71:
			return Global_262145.f_3994;
		
		case 19:
			return -1;
		
		case 58:
			return Global_262145.f_3996;
		
		case 3:
			return Global_262145.f_3997;
		
		case 84:
			return Global_262145.f_3998;
		
		case 7:
			return Global_262145.f_3999;
		
		case 48:
			return Global_262145.f_4000;
		
		case 72:
			return Global_262145.f_4001;
		
		case 38:
			return Global_262145.f_4002;
		
		case 21:
			return Global_262145.f_4003;
		
		case 12:
			return Global_262145.f_4004;
		
		case 54:
			return Global_262145.f_4005;
		
		case 90:
			return Global_262145.f_4006;
		
		case 81:
			return Global_262145.f_4007;
		
		case 13:
			return Global_262145.f_4008;
		
		case 4:
			return Global_262145.f_4010;
		
		case 56:
			return Global_262145.f_4011;
		
		case 69:
			return Global_262145.f_4012;
		
		case 60:
			return Global_262145.f_4013;
		
		case 91:
			return Global_262145.f_4070;
		
		case 50:
			return Global_262145.f_4014;
		
		case 15:
			return Global_262145.f_4015;
		
		case 53:
			return Global_262145.f_4016;
		
		case 41:
			return Global_262145.f_4017;
		
		case 92:
			return Global_262145.f_4018;
		
		case 44:
			return Global_262145.f_4020;
		
		case 43:
			return Global_262145.f_4021;
		
		case 2:
			return Global_262145.f_4022;
		
		case 25:
			return Global_262145.f_4023;
		
		case 85:
			return Global_262145.f_4024;
		
		case 14:
			return Global_262145.f_4026;
		
		case joaat("mpsv_lp0_31"):
			return Global_262145.f_4027;
		
		case 24:
			return Global_262145.f_4028;
		
		case 16:
			return Global_262145.f_4029;
		
		case 6:
			return Global_262145.f_4030;
		
		case 86:
			return Global_262145.f_4031;
		
		case 47:
			return Global_262145.f_4032;
		
		case 73:
			return Global_262145.f_4033;
		
		case 61:
			return Global_262145.f_4034;
		
		case 67:
			return Global_262145.f_4035;
		
		case 74:
			return Global_262145.f_4036;
		
		case 75:
			return Global_262145.f_4037;
		
		case 87:
			return Global_262145.f_4038;
		
		case 17:
			return Global_262145.f_4039;
		
		case 59:
			return Global_262145.f_4040;
		
		case 64:
			return Global_262145.f_4041;
		
		case 68:
			return Global_262145.f_4042;
		
		case 52:
			return Global_262145.f_4043;
		
		case 39:
			return Global_262145.f_4044;
		
		case 34:
			return Global_262145.f_4045;
		
		case 30:
			return Global_262145.f_4046;
		
		case 10:
			return Global_262145.f_4047;
		
		case 27:
			return Global_262145.f_4048;
		
		case 1:
			return Global_262145.f_4049;
		
		case 76:
			return Global_262145.f_4050;
		
		case 88:
			return Global_262145.f_4051;
		
		case 11:
			return Global_262145.f_4052;
		
		case 32:
			return Global_262145.f_4053;
		
		case 55:
			return Global_262145.f_4054;
		
		case 45:
			return Global_262145.f_4055;
		
		case 18:
			return Global_262145.f_4056;
		
		case 35:
			return Global_262145.f_4057;
		
		case 36:
			return Global_262145.f_4058;
		
		case 37:
			return Global_262145.f_4059;
		
		case 29:
			return Global_262145.f_4060;
		
		case 46:
			return Global_262145.f_4061;
		
		case 65:
			return Global_262145.f_4062;
		
		case 80:
			return Global_262145.f_4063;
		
		case 42:
			return Global_262145.f_4064;
		
		case 77:
			return Global_262145.f_4065;
		
		case 40:
			return Global_262145.f_4066;
		
		case 93:
			return Global_262145.f_4067;
		
		case 0:
			return Global_262145.f_4068;
		
		case 103:
			return Global_262145.f_4815;
		
		case 104:
			return Global_262145.f_4816;
		
		case 105:
			return Global_262145.f_4817;
		
		case 106:
			return Global_262145.f_4818;
		
		case 107:
			return Global_262145.f_4819;
		
		case 108:
			return Global_262145.f_4820;
		
		case 128:
			return Global_262145.f_4069;
		
		case 129:
			return Global_262145.f_4909;
		
		case 130:
			return Global_262145.f_4910;
		
		case 131:
			return Global_262145.f_4911;
		
		case 132:
			return Global_262145.f_4912;
		
		case 133:
			return Global_262145.f_4913;
		
		case 134:
			return Global_262145.f_4914;
		
		case 135:
			return Global_262145.f_4915;
		
		case 136:
			return Global_262145.f_4916;
		
		case 137:
			return Global_262145.f_4917;
		
		case 138:
			return Global_262145.f_4918;
		
		case 139:
			return Global_262145.f_4938;
		
		case 140:
			return Global_262145.f_4919;
		
		case 141:
			return Global_262145.f_4920;
		
		case 142:
			return Global_262145.f_4921;
		
		case 150:
			return Global_262145.f_5985;
		
		case 151:
			return Global_262145.f_5988;
		
		case 152:
			return Global_262145.f_5989;
		
		case 153:
			return Global_262145.f_5991;
		
		case 154:
			return Global_262145.f_5982;
		
		case 155:
			return Global_262145.f_5987;
		
		case 156:
			return Global_262145.f_5986;
		
		case 157:
			return Global_262145.f_5983;
		
		case 158:
			return Global_262145.f_5984;
		
		case 159:
			return Global_262145.f_5990;
		
		default:
	}
	return -1;
}











int func_424(int iParam0, int iParam1, bool bParam2)//Position - 0x33B82
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar32;
	
	if (GlobalFunc_4979())
	{
		iVar0 = GlobalFunc_997(iParam0);
		iVar1 = -1;
		iVar2 = -1;
		if (func_411(iVar0))
		{
			iVar1 = GlobalFunc_6962(iParam0, bParam2);
		}
		else
		{
			iVar2 = 0;
			if (bParam2)
			{
				iVar2 = 1;
			}
			if (iVar0 == 200)
			{
				switch (Global_67135)
				{
					case 1:
						iVar2 = 0;
						break;
					
					case 2:
						iVar2 = 1;
						break;
					
					case 3:
						iVar2 = 2;
						break;
					
					case 4:
						iVar2 = 3;
						break;
					
					case 5:
						iVar2 = 4;
						break;
					
					case 6:
						iVar2 = 5;
						break;
					
					case 7:
						iVar2 = 6;
						break;
					
					case 8:
						iVar2 = 7;
						break;
					
					case 9:
						iVar2 = 8;
						break;
					
					case 10:
						iVar2 = 9;
						break;
					
					case 11:
						iVar2 = 10;
						break;
					
					case 12:
						iVar2 = 11;
						break;
					
					case 13:
						iVar2 = 12;
						break;
					
					case 14:
						iVar2 = 13;
						break;
					
					case 15:
						iVar2 = 14;
						break;
					
					case 16:
						iVar2 = 15;
						break;
					
					case 17:
						iVar2 = 16;
						break;
					
					case 18:
						iVar2 = 17;
						break;
					
					case 19:
						iVar2 = 18;
						break;
					
					case 20:
						iVar2 = 19;
						break;
					
					case 21:
						iVar2 = 20;
						break;
					
					case 22:
						iVar2 = 21;
						break;
					
					case 23:
						iVar2 = 22;
						break;
					
					case 24:
						iVar2 = 23;
						break;
					
					case 25:
						iVar2 = 24;
						break;
					}
			}
			iVar1 = func_400(iVar0, iVar2);
		}
		StringCopy(&Var3, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
		iVar7 = GlobalFunc_5451(iParam0);
		if (func_411(iVar0))
		{
			if (bParam2)
			{
				GlobalFunc_215(&sVar8, Var3, iParam0, 4, 1, iVar7, -1, -1);
			}
			else
			{
				GlobalFunc_215(&sVar8, Var3, iParam0, 4, 0, iVar7, -1, -1);
			}
		}
		else
		{
			GlobalFunc_215(&sVar8, Var3, iParam0, 4, 1, iVar2, -1, -1);
		}
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
		{
			iVar24 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar1, 1232888418, 1);
			if (iVar24 == iParam1)
			{
			}
			return iVar24;
		}
		else
		{
			iVar25 = iParam1;
			if (iVar25 < 0)
			{
				if (GlobalFunc_1357(&iVar26, iParam0, bParam2))
				{
					iVar25 = iVar26;
				}
			}
			return -2;
		}
	}
	if (iParam1 < 0)
	{
		if (GlobalFunc_1357(&uVar32, iParam0, bParam2))
		{
			return uVar32;
		}
		return -1;
	}
	return iParam1;
}





void func_429(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x36B86
{
	int iVar0;
	
	if (iParam3 > -1)
	{
		GlobalFunc_7734(293, 0, 0);
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.OWVEC_IND[iParam0]), iVar0);
	if (iParam1 == 0)
	{
		Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_M[iParam0] = Global_67135;
	}
	else if (iParam1 == 1)
	{
		Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_F[iParam0] = Global_67135;
	}
	else
	{
		iParam1 = 2;
		Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_T[iParam0] = Global_67135;
	}
	func_462(iParam0);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 128:
		case 89:
		case 103:
		case 122:
		case 123:
		case 124:
		case 132:
		case 133:
		case 134:
		case 135:
		case 125:
		case 138:
		case 139:
		case 105:
		case 155:
		case 106:
		case 108:
		case 127:
		case 93:
		case 99:
		case 143:
		case 145:
		case 100:
		case 147:
		case 101:
		case 149:
		case 146:
		case 144:
		case 167:
		case 168:
		case 169:
		case 170:
		case 161:
		case 202:
		case 204:
		case 205:
		case 203:
		case 206:
		case 207:
		case 208:
		case 209:
		case 148:
		case 97:
		case 98:
		case 112:
		case 115:
		case 165:
		case 166:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 218:
		case 219:
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched"), 10, 0);
			switch (iParam1)
			{
				case 0:
					func_430(iParam1, GlobalFunc_7915(21), iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_430(iParam1, GlobalFunc_7915(22), iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_430(iParam1, GlobalFunc_7915(23), iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 199:
		case 113:
		case 162:
		case 163:
		case 215:
			switch (iParam1)
			{
				case 0:
					func_430(iParam1, 12, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_430(iParam1, 13, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_430(iParam1, 14, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 20:
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched"), 30, 0);
		
		case 15:
		case 16:
		case 19:
		case 164:
		case 217:
			switch (iParam1)
			{
				case 0:
					func_430(iParam1, 18, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_430(iParam1, 19, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_430(iParam1, 20, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 17:
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched"), 20, 0);
		
		case 18:
		case 22:
		case 21:
		case 200:
			switch (iParam1)
			{
				case 0:
					func_430(iParam1, 12, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_430(iParam1, 13, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_430(iParam1, 14, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 201:
		case 102:
		case 173:
			switch (iParam1)
			{
				case 0:
					func_430(iParam1, 15, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_430(iParam1, 16, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_430(iParam1, 17, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			switch (iParam1)
			{
				case 0:
					func_430(iParam1, GlobalFunc_7915(21), iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_430(iParam1, GlobalFunc_7915(22), iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_430(iParam1, GlobalFunc_7915(23), iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		default:
			switch (GlobalFunc_2044(iParam0))
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							func_430(iParam1, GlobalFunc_7915(21), iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_430(iParam1, GlobalFunc_7915(22), iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_430(iParam1, GlobalFunc_7915(23), iParam3, iParam0, uParam2);
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							func_430(iParam1, 12, iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_430(iParam1, 13, iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_430(iParam1, 14, iParam3, iParam0, uParam2);
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							func_430(iParam1, 15, iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_430(iParam1, 16, iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_430(iParam1, 17, iParam3, iParam0, uParam2);
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 0:
							func_430(iParam1, 18, iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_430(iParam1, 19, iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_430(iParam1, 20, iParam3, iParam0, uParam2);
							break;
					}
					break;
			}
			break;
	}
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x372D2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (GlobalFunc_42(iParam0))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iParam0 /*939*/][iParam3] = iParam2;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iParam0 /*939*/].f_313[iParam3] = iParam1;
		if (iParam2 == -1)
		{
			bVar0 = true;
			if (GlobalFunc_5599(iParam1))
			{
				if (GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam1) && Global_67138.f_555[0 /*21*/].f_4 != 0)
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				GlobalFunc_14(uParam4);
				GlobalFunc_7025(iParam3, uParam4, 0, iParam0);
				MISC::SET_BIT(&(uParam4->f_53), 14);
				GlobalFunc_8387(iParam1, *uParam4, 0f, 0f, 0f, -1f, 145);
			}
		}
		else
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			uVar3 = GlobalFunc_7732();
			if (((((((((((iParam1 == 21 || iParam1 == 22) || iParam1 == 23) || iParam1 == 26) || iParam1 == 29) || iParam1 == 32) || iParam1 == 27) || iParam1 == 30) || iParam1 == 33) || iParam1 == 28) || iParam1 == 31) || iParam1 == 34)
			{
				GlobalFunc_14(uParam4);
				GlobalFunc_7025(iParam3, uParam4, 0, iParam0);
				MISC::SET_BIT(&(uParam4->f_53), 14);
				GlobalFunc_8387(iParam1, *uParam4, 0f, 0f, 0f, -1f, 145);
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.OWVEC_IND[iParam3]), iParam0);
			}
			else
			{
				func_431(&uVar3, iVar1, iVar2, 5, 0, 0, 0);
			}
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iParam0 /*939*/].f_626[iParam3] = uVar3;
		}
	}
}

void func_431(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x37481
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GlobalFunc_4975(*uParam0);
	iVar1 = GlobalFunc_93(*uParam0);
	iVar2 = GlobalFunc_820(*uParam0);
	iVar3 = GlobalFunc_483(*uParam0);
	iVar4 = GlobalFunc_482(*uParam0);
	iVar5 = GlobalFunc_821(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = GlobalFunc_91(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = GlobalFunc_91(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_432(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_432(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x37603
{
	GlobalFunc_96(uParam0, iParam1);
	GlobalFunc_95(uParam0, iParam2);
	GlobalFunc_94(uParam0, iParam3);
	GlobalFunc_6826(uParam0, iParam4);
	GlobalFunc_90(uParam0, iParam5);
	GlobalFunc_89(uParam0, iParam6);
}






























void func_462(int iParam0)//Position - 0x3981C
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_1365(iParam0);
	iVar1 = GlobalFunc_2045(iVar0);
	switch (iVar1)
	{
		case 0:
			GlobalFunc_184(19, 1);
			return;
		
		case 7:
			GlobalFunc_184(17, 1);
			return;
		
		case 1:
			GlobalFunc_184(15, 1);
			return;
		
		case 2:
			GlobalFunc_184(13, 1);
			return;
		
		case 3:
			GlobalFunc_184(18, 1);
			return;
		
		case 4:
			GlobalFunc_184(12, 1);
			return;
		
		case 5:
			GlobalFunc_184(14, 1);
			return;
		
		case 6:
			GlobalFunc_184(16, 1);
			return;
		
		default:
	}
}


int func_464(int iParam0, int iParam1)//Position - 0x39A0B
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	if (GlobalFunc_2044(iParam0) == 0)
	{
		if (((iParam1 == 0 && GlobalFunc_7915(21) == -1) || (iParam1 == 1 && GlobalFunc_7915(22) == -1)) || (iParam1 == 2 && GlobalFunc_7915(23) == -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_465(int iParam0)//Position - 0x39A7D
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_2044(iParam0);
	iVar1 = GlobalFunc_8329();
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					return GlobalFunc_78(21, 5);
				
				case 2:
					return GlobalFunc_78(23, 5);
				
				case 1:
					return GlobalFunc_78(22, 5);
				
				default:
			}
			break;
		
		case 1:
			switch (iVar1)
			{
				case 0:
					return GlobalFunc_78(12, 5);
				
				case 2:
					return GlobalFunc_78(14, 5);
				
				case 1:
					return GlobalFunc_78(13, 5);
				
				default:
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					return GlobalFunc_78(15, 5);
				
				case 2:
					return GlobalFunc_78(17, 5);
				
				case 1:
					return GlobalFunc_78(16, 5);
				
				default:
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					return GlobalFunc_78(18, 5);
				
				case 2:
					return GlobalFunc_78(20, 5);
				
				case 1:
					return GlobalFunc_78(19, 5);
				
				default:
			}
			break;
	}
	return 1;
}

bool func_466(int iParam0, int iParam1)//Position - 0x39B9B
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.OWVEC_IND[iParam0], iVar0);
}

int func_467(int iParam0, bool bParam1, bool bParam2)//Position - 0x39BCD
{
	int iVar0;
	var uVar1;
	
	switch (iParam0)
	{
		case 4:
		case 3:
			if (!GlobalFunc_230(8))
			{
				return -2;
			}
			break;
		
		case 0:
			if (!GlobalFunc_230(9))
			{
				return -2;
			}
			break;
		
		case 2:
			if (!GlobalFunc_230(10))
			{
				return -2;
			}
			break;
		
		case 6:
			if (!GlobalFunc_230(11))
			{
				return -2;
			}
			break;
	}
	iVar0 = GlobalFunc_1365(iParam0);
	switch (iParam0)
	{
		case 168:
		case 144:
		case 145:
		case 146:
		case 147:
		case 149:
		case 114:
		case 116:
		case 121:
		case 111:
		case 110:
			return -1;
			break;
		
		case 199:
			if (GlobalFunc_84())
			{
				if (GlobalFunc_2046(32, 0))
				{
					return func_424(iVar0, -1, 0);
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 200:
			if (GlobalFunc_84())
			{
				return func_424(iVar0, -1, 0);
			}
			else
			{
				return -1;
			}
			break;
		
		case 201:
			if (GlobalFunc_84() && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 0))
			{
				return func_424(iVar0, -1, 0);
			}
			else
			{
				return -1;
			}
			break;
		
		case 202:
			if (GlobalFunc_84())
			{
				return func_424(iVar0, -1, 0);
			}
			else
			{
				return -1;
			}
			break;
		
		case 203:
			if (GlobalFunc_84())
			{
				return func_424(iVar0, -1, 0);
			}
			else
			{
				return -1;
			}
			break;
		
		case 204:
			if (GlobalFunc_84())
			{
				if (GlobalFunc_2046(31, 0))
				{
					return func_424(iVar0, -1, 0);
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 205:
			if (GlobalFunc_84())
			{
				if (GlobalFunc_2046(31, 0))
				{
					return func_424(iVar0, -1, 0);
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		
		case 206:
			return -1;
			break;
		
		case 207:
			return -1;
			break;
		
		case 208:
			return -1;
			break;
		
		case 209:
			return -1;
			break;
		
		case 173:
			return -1;
			break;
	}
	if (iParam0 == 68)
	{
		if (GlobalFunc_1357(&uVar1, joaat("sanchez"), 0))
		{
			return uVar1;
		}
	}
	if (iParam0 == 97 || iParam0 == 98)
	{
		if (GlobalFunc_84() && GlobalFunc_296())
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 0:
			return 10000000;
		
		case 1:
			return 1000000;
		
		case 2:
			return 475000;
		
		case 3:
			return 650000;
		
		case 4:
			return 795000;
		
		case 5:
			return 1000000;
		
		case 6:
			return 490000;
		
		case 7:
			return 185000;
		
		case 9:
			return 232560;
		
		case 13:
			return 275000;
		
		case 10:
			return 1150000;
		
		case 12:
			return 240000;
		
		case 14:
			return 1500000;
		
		case 11:
			return 250000;
		
		case 15:
			return 1300000;
		
		case 16:
			return 780000;
		
		case 17:
			return 3000000;
		
		case 22:
			return 450000;
		
		case 18:
			return 1200000;
		
		case 19:
			return 2200000;
		
		case 20:
			return 2000000;
		
		case 21:
			return 225000;
		
		case 23:
			return 75000;
		
		case 24:
			return 413990;
		
		case 25:
			return 299000;
		
		case 26:
			return 135000;
		
		case 27:
			return 196621;
		
		case 28:
			return 25160;
		
		case 29:
			return 22000;
		
		case 30:
			return 16899;
		
		case 31:
			return 695000;
		
		case 32:
			return 25160;
		
		case 33:
			return 500;
		
		case 34:
			return 1000;
		
		case 35:
			return 2500;
		
		case 36:
			return 2500;
		
		case 37:
			return 2500;
		
		case 38:
			return 3000;
		
		case 57:
			return 90000;
		
		default:
	}
	if (!bParam2)
	{
		if (iParam0 == 164)
		{
			if (Global_67135 == 2)
			{
				bParam1 = false;
			}
			if (Global_67135 == 1)
			{
				bParam1 = true;
			}
		}
	}
	if (GlobalFunc_1357(&uVar1, iVar0, bParam1))
	{
		return uVar1;
	}
	return -1;
}


int func_469(int iParam0, int iParam1)//Position - 0x3A0A6
{
	if (iParam0 == 10)
	{
		if (iParam1 >= 0 && iParam1 <= 8)
		{
			return 1;
		}
		else if (Global_68245)
		{
			if (iParam1 >= 14 && iParam1 < 63)
			{
				return 1;
			}
		}
		else if (!Global_68245)
		{
			if (iParam1 >= 14 && iParam1 < 63)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (iParam1 >= 0 && iParam1 <= 30)
		{
			return 1;
		}
		else if ((Global_68245 && iParam1 >= 35) && iParam1 < 117)
		{
			return 1;
		}
		else if ((!Global_68245 && iParam1 >= 35) && iParam1 < 117)
		{
			return 1;
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam1 >= 0 && iParam1 <= 5)
		{
			return 1;
		}
		else if (iParam1 >= 12 && iParam1 < 25)
		{
			return 1;
		}
	}
	else if (iParam0 == 12)
	{
		if ((((iParam1 == 0 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 7)
		{
			return 1;
		}
		else if (Global_68245)
		{
			if ((((iParam1 == 14 || iParam1 == 15) || iParam1 == 17) || iParam1 == 18) || (iParam1 >= 21 && iParam1 < 40))
			{
				return 1;
			}
		}
		else if (!Global_68245)
		{
			if ((((iParam1 == 14 || iParam1 == 15) || iParam1 == 17) || iParam1 == 18) || (iParam1 >= 21 && iParam1 < 40))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (((iParam1 >= 0 && iParam1 <= 6) || iParam1 == 8) || (iParam1 >= 13 && iParam1 <= 15))
		{
			return 1;
		}
	}
	else if (iParam0 == 15)
	{
		if (iParam1 >= 0 && iParam1 <= 5)
		{
			return 1;
		}
	}
	return 0;
}

void func_470(int iParam0)//Position - 0x3A2D9
{
	var uVar0;
	
	uVar0 = iParam0;
	uVar0 = uVar0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GlobalFunc_726("VHSITUSURE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GlobalFunc_726("CELL_270");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GlobalFunc_726("CELL_271");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_471(int iParam0, int iParam1)//Position - 0x3A350
{
	switch (iParam0)
	{
		case 10:
		case 12:
		case 11:
		case 15:
		case 13:
			break;
		
		case 16:
			if (iParam1 == 34)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_472(int iParam0)//Position - 0x3A395
{
	var uVar0;
	
	uVar0 = iParam0;
	uVar0 = uVar0;
	switch (iLocal_696)
	{
		case 7:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VSITALRPURC");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITALVECBNE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 0:
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			switch (GlobalFunc_8329())
			{
				case 0:
					switch (GlobalFunc_2044(iLocal_697))
					{
						case 1:
							if (GlobalFunc_78(12, 0))
							{
								GlobalFunc_726("VSITNSTA_HANGAR");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						case 2:
							if (GlobalFunc_78(15, 0))
							{
								GlobalFunc_726("VSITNSTA_MARINA");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						case 3:
							if (GlobalFunc_78(18, 0))
							{
								GlobalFunc_726("VSITNSTA_HELIPAD");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						default:
							if (!GlobalFunc_78(21, 0))
							{
								GlobalFunc_726("VSITNSTA_GARAGE");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
					}
					break;
				
				case 1:
					switch (GlobalFunc_2044(iLocal_697))
					{
						case 1:
							if (GlobalFunc_78(13, 0))
							{
								GlobalFunc_726("VSITNSTA_HANGAR");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						case 2:
							if (GlobalFunc_78(16, 0))
							{
								GlobalFunc_726("VSITNSTA_MARINA");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						case 3:
							if (GlobalFunc_78(19, 0))
							{
								GlobalFunc_726("VSITNSTA_HELIPAD");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						default:
							if (!GlobalFunc_78(22, 0))
							{
								GlobalFunc_726("VSITNSTA_GARAGE");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
					}
					break;
				
				case 2:
					switch (GlobalFunc_2044(iLocal_697))
					{
						case 1:
							if (GlobalFunc_78(14, 0))
							{
								GlobalFunc_726("VSITNSTA_HANGAR");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						case 2:
							if (GlobalFunc_78(17, 0))
							{
								GlobalFunc_726("VSITNSTA_MARINA");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						case 3:
							if (GlobalFunc_78(20, 0))
							{
								GlobalFunc_726("VSITNSTA_HELIPAD");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
						
						default:
							if (!GlobalFunc_78(23, 0))
							{
								GlobalFunc_726("VSITNSTA_GARAGE");
							}
							else
							{
								GlobalFunc_726("VSITNSTA");
							}
							break;
					}
					break;
				
				default:
					GlobalFunc_726("VSITNSTA");
					break;
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITINSF");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITCATINVAL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITALRDOW");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 5:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITALRDOR");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 6:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITALRDPEG");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 8:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("VHSITPURFH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726("VSITSAVTRB");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_696 = 0;
}

int func_473(int iParam0, int iParam1)//Position - 0x3A7F7
{
	switch (iParam0)
	{
		case 10:
		case 12:
		case 11:
		case 15:
		case 13:
			if (iParam1 == 14)
			{
				return 1;
			}
			break;
		
		case 16:
			if (iParam1 == 36)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_474(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3A847
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 == 10)
	{
		switch (iParam0)
		{
			case 0:
				*uParam3 = 2;
				break;
			
			case 1:
				*uParam3 = 5;
				break;
			
			case 2:
				*uParam3 = 8;
				break;
			
			case 3:
				*uParam3 = 4;
				break;
			
			case 4:
				*uParam3 = 1;
				break;
			
			case 5:
				*uParam3 = 6;
				break;
			
			case 6:
				*uParam3 = 3;
				break;
			
			case 7:
				*uParam3 = 8;
				break;
			
			default:
				return 0;
				break;
		}
		return 1;
	}
	else if (iParam1 == 16)
	{
		switch (iParam0)
		{
			case 39:
				*uParam3 = 7;
				break;
			
			case 40:
				*uParam3 = 7;
				break;
			
			case 41:
				*uParam3 = 1;
				break;
			
			case 42:
				*uParam3 = 7;
				break;
			
			case 43:
				*uParam3 = 2;
				break;
			
			case 44:
				*uParam3 = 6;
				break;
			
			case 45:
				*uParam3 = 8;
				break;
			
			case 46:
				*uParam3 = 6;
				break;
			
			case 47:
				*uParam3 = 3;
				break;
			
			case 48:
				*uParam3 = 3;
				break;
			
			case 49:
				*uParam3 = 1;
				break;
			
			case 50:
				*uParam3 = 5;
				break;
			
			case 51:
				*uParam3 = 7;
				break;
			
			case 52:
				*uParam3 = 1;
				break;
			
			case 53:
				*uParam3 = 6;
				break;
			
			case 54:
				*uParam3 = 2;
				break;
			
			case 55:
				*uParam3 = 7;
				break;
			
			case 56:
				*uParam3 = 7;
				break;
			
			case 57:
				*uParam3 = 8;
				break;
			
			case 58:
				*uParam3 = 5;
				break;
			
			case 59:
				*uParam3 = 1;
				break;
			
			case 60:
				*uParam3 = 8;
				break;
			
			case 61:
				*uParam3 = 4;
				break;
			
			case 62:
				*uParam3 = 7;
				break;
			
			case 63:
				*uParam3 = 4;
				break;
			
			case 64:
				*uParam3 = 3;
				break;
			
			case 65:
				*uParam3 = 4;
				break;
			
			case 66:
				*uParam3 = 2;
				break;
			
			case 67:
				*uParam3 = 6;
				break;
			
			case 68:
				*uParam3 = 5;
				break;
			
			case 69:
				*uParam3 = 8;
				break;
			
			case 206:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 207:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 208:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 209:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 210:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 211:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 212:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 213:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			default:
				return 0;
				break;
		}
		return 1;
	}
	else if (iParam1 == 11)
	{
		switch (iParam0)
		{
			case 164:
				*uParam3 = 1;
				break;
			
			case 113:
				*uParam3 = 8;
				*iParam2 = 0;
				break;
			
			case 12:
				*uParam3 = 8;
				*iParam2 = 0;
				break;
			
			default:
				*uParam3 = 0;
				*iParam2 = 0;
				return 0;
				break;
		}
		return 1;
	}
	else if (iParam1 == 12)
	{
		switch (iParam0)
		{
			case 200:
				*uParam3 = 8;
				break;
			
			case 205:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 17:
				*uParam3 = 8;
				break;
			
			case 19:
				*uParam3 = 8;
				*iParam2 = 0;
				break;
			
			case 22:
				*uParam3 = 8;
				*iParam2 = 0;
				break;
			
			case 148:
				*uParam3 = 0;
				*iParam2 = 0;
				break;
			
			case 179:
				*uParam3 = 5;
				*iParam2 = 0;
				break;
			
			case 178:
				*uParam3 = 5;
				*iParam2 = 0;
				break;
			
			case 192:
				*uParam3 = 5;
				*iParam2 = 0;
				break;
			
			default:
				*uParam3 = 0;
				*iParam2 = 0;
				return 0;
				break;
		}
		return 1;
	}
	else
	{
		*uParam3 = 0;
		*iParam2 = 0;
		return 0;
	}
	return 0;
}

void func_475(int iParam0, int iParam1, int iParam2)//Position - 0x3AC35
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		Global_67111 = iParam0;
		Global_67112 = iParam1;
		Global_67110 = 1;
		Global_2543304 = iParam2;
	}
}

int func_476(int iParam0)//Position - 0x3AC65
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_477(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (FILES::GET_NUM_DLC_VEHICLES() <= 0)
	{
		return 0;
	}
	if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &uVar1))
	{
		if (FILES::IS_CONTENT_ITEM_LOCKED(uVar1))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0)//Position - 0x3ACAE
{
	int iVar0;
	int iVar1;
	
	iVar1 = GlobalFunc_1365(iParam0);
	iVar0 = 0;
	while (iVar0 <= (FILES::GET_NUM_DLC_VEHICLES() - 1))
	{
		if (FILES::GET_DLC_VEHICLE_MODEL(iVar0) == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_478(int iParam0, int iParam1)//Position - 0x3ACE6
{
	int iVar0;
	
	iVar0 = (iParam1 - 3);
	if ((iParam0 < 10 || iParam0 == 14) || iParam0 > 16)
	{
		return -1;
	}
	if (!func_469(iParam0, iVar0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 10:
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 46;
				
				case 14:
					return 70;
				
				case 15:
					return 71;
				
				case 16:
					return 72;
				
				case 17:
					return 56;
				
				case 18:
					return 50;
				
				case 19:
					return 44;
				
				case 20:
					return 47;
				
				case 21:
					return 73;
				
				case 22:
					return 74;
				
				case 23:
					return 75;
				
				case 24:
					return 76;
				
				case 25:
					return 55;
				
				case 26:
					return 95;
				
				case 27:
					return 96;
				
				case 28:
					return 97;
				
				case 29:
					return 98;
				
				case 30:
					return 77;
				
				case 32:
					return 45;
				
				case 33:
					return 49;
				
				case 34:
					return 48;
				
				case 35:
					return 109;
				
				case 36:
					return 111;
				
				case 37:
					return 114;
				
				case 38:
					return 112;
				
				case 39:
					return 115;
				
				case 40:
					return 116;
				
				case 41:
					return 110;
				
				case 42:
					return 117;
				
				case 43:
					return 118;
				
				case 44:
					return 119;
				
				case 45:
					return 120;
				
				case 46:
					return 121;
				
				case 47:
					return 165;
				
				case 48:
					return 166;
				
				case 49:
					return 169;
				
				case 50:
					return 172;
				
				case 51:
					return 182;
				
				case 57:
					return 216;
				
				case 58:
					return 214;
				
				case 61:
					return 218;
				
				case 62:
					return 219;
				
				case 63:
					return -1;
				
				default:
			}
			break;
		
		case 11:
			switch (iVar0)
			{
				case 0:
					return 13;
				
				case 1:
					return 10;
				
				case 2:
					return 12;
				
				case 3:
					return 14;
				
				case 4:
					return 11;
				
				case 5:
					return 15;
				
				case 12:
					return 16;
				
				case 13:
					return 78;
				
				case 14:
					return 79;
				
				case 15:
					return 18;
				
				case 16:
					return 80;
				
				case 17:
					return 113;
				
				case 18:
					return 162;
				
				case 19:
					return 163;
				
				case 20:
					return 199;
				
				case 21:
					return 164;
				
				case 22:
					return 188;
				
				case 23:
					return 215;
				
				case 24:
					return 217;
				
				case 25:
					return -1;
				
				default:
			}
			break;
		
		case 12:
			switch (iVar0)
			{
				case 0:
					return 17;
				
				case 2:
					return 22;
				
				case 4:
					return 19;
				
				case 5:
					return 20;
				
				case 7:
					return 21;
				
				case 14:
					return 82;
				
				case 15:
					return 85;
				
				case 17:
					return 84;
				
				case 18:
					return 83;
				
				case 21:
					return 86;
				
				case 24:
					return 87;
				
				case 25:
					return 81;
				
				case 26:
					return 148;
				
				case 27:
					return 160;
				
				case 28:
					return 171;
				
				case 29:
					return 187;
				
				case 30:
					return 177;
				
				case 31:
					return 178;
				
				case 32:
					return 179;
				
				case 33:
					return 183;
				
				case 34:
					return 185;
				
				case 35:
					return 186;
				
				case 36:
					return 192;
				
				case 37:
					return 184;
				
				case 38:
					return 200;
				
				case 39:
					return 205;
				
				case 40:
					return -1;
				
				default:
			}
			break;
		
		case 13:
			switch (iVar0)
			{
				case 0:
					return 24;
				
				case 1:
					return 25;
				
				case 2:
					return 102;
				
				case 3:
					return 27;
				
				case 4:
					return 32;
				
				case 5:
					return 29;
				
				case 6:
					return 30;
				
				case 8:
					return 173;
				
				case 14:
					return 201;
				
				case 15:
					return -1;
				
				default:
			}
			break;
		
		case 15:
			switch (iVar0)
			{
				case 0:
					return 33;
				
				case 1:
					return 34;
				
				case 2:
					return 35;
				
				case 3:
					return 36;
				
				case 4:
					return 37;
				
				case 5:
					return 38;
				
				default:
			}
			break;
		
		case 16:
			switch (iVar0)
			{
				case 0:
					return 39;
				
				case 1:
					return 40;
				
				case 2:
					return 41;
				
				case 3:
					return 42;
				
				case 4:
					return 43;
				
				case 5:
					return 44;
				
				case 6:
					return 45;
				
				case 7:
					return 46;
				
				case 8:
					return 47;
				
				case 9:
					return 48;
				
				case 10:
					return 49;
				
				case 11:
					return 50;
				
				case 12:
					return 51;
				
				case 13:
					return 52;
				
				case 14:
					return 53;
				
				case 15:
					return 54;
				
				case 16:
					return 55;
				
				case 17:
					return 56;
				
				case 18:
					return 57;
				
				case 19:
					return 58;
				
				case 20:
					return 59;
				
				case 21:
					return 60;
				
				case 22:
					return 61;
				
				case 23:
					return 62;
				
				case 24:
					return 63;
				
				case 25:
					return 64;
				
				case 26:
					return 65;
				
				case 27:
					return 66;
				
				case 28:
					return 67;
				
				case 29:
					return 68;
				
				case 30:
					return 69;
				
				case 35:
					return 89;
				
				case 36:
					return 90;
				
				case 37:
					return 91;
				
				case 38:
					return 92;
				
				case 39:
					return 93;
				
				case 40:
					return 94;
				
				case 41:
					return 88;
				
				case 42:
					return 99;
				
				case 43:
					return 100;
				
				case 44:
					return 101;
				
				case 45:
					return 103;
				
				case 46:
					return 104;
				
				case 47:
					return 105;
				
				case 48:
					return 106;
				
				case 49:
					return 108;
				
				case 50:
					return 107;
				
				case 51:
					return 139;
				
				case 52:
					return 128;
				
				case 53:
					return 129;
				
				case 54:
					return 130;
				
				case 55:
					return 131;
				
				case 56:
					return 132;
				
				case 57:
					return 133;
				
				case 58:
					return 134;
				
				case 59:
					return 135;
				
				case 60:
					return 136;
				
				case 61:
					return 137;
				
				case 62:
					return 138;
				
				case 63:
					return 140;
				
				case 64:
					return 141;
				
				case 65:
					return 142;
				
				case 66:
					return 122;
				
				case 67:
					return 123;
				
				case 68:
					return 124;
				
				case 69:
					return 125;
				
				case 70:
					return 126;
				
				case 71:
					return 127;
				
				case 72:
					return 143;
				
				case 73:
					return 144;
				
				case 74:
					return 145;
				
				case 75:
					return 146;
				
				case 76:
					return 147;
				
				case 77:
					return 149;
				
				case 78:
					return 150;
				
				case joaat("mpsv_lp0_31"):
					return 151;
				
				case 80:
					return 152;
				
				case 81:
					return 153;
				
				case 82:
					return 154;
				
				case 83:
					return 155;
				
				case 84:
					return 156;
				
				case 85:
					return 157;
				
				case 86:
					return 158;
				
				case 87:
					return 159;
				
				case 88:
					return 161;
				
				case 89:
					return 168;
				
				case 90:
					return 167;
				
				case 91:
					return 170;
				
				case 92:
					return 189;
				
				case 93:
					return 190;
				
				case 94:
					return 191;
				
				case 95:
					return 193;
				
				case 96:
					return 194;
				
				case 97:
					return 195;
				
				case 98:
					return 196;
				
				case 99:
					return 197;
				
				case 100:
					return 198;
				
				case 101:
					return 174;
				
				case 102:
					return 175;
				
				case 103:
					return 176;
				
				case 104:
					return 180;
				
				case 105:
					return 181;
				
				case 106:
					return 204;
				
				case 107:
					return 202;
				
				case 108:
					return 203;
				
				case 109:
					return 206;
				
				case 110:
					return 207;
				
				case 111:
					return 208;
				
				case 112:
					return 209;
				
				case 113:
					return 211;
				
				case 114:
					return 210;
				
				case 115:
					return 213;
				
				case 116:
					return 212;
				
				case 117:
					return -1;
				
				default:
			}
			break;
	}
	return -1;
}

int func_479(int iParam0, int iParam1)//Position - 0x3B74D
{
	if (iParam0 == 10)
	{
		if (iParam1 >= 35 && iParam1 <= 46)
		{
			if (((iParam1 != 42 && iParam1 != 43) && iParam1 != 44) && iParam1 != 45)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (iParam1 >= 42 && iParam1 <= 44)
		{
			return 1;
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam1 == 18 || iParam1 == 21)
		{
			return 1;
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

void func_480(int iParam0)//Position - 0x3B7EE
{
	if (((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 13) || iParam0 == 15) || iParam0 == 16)
	{
		if (Global_68245)
		{
			func_482(&iLocal_495, iParam0);
		}
		else
		{
			func_481(&iLocal_495, iParam0);
		}
	}
}

void func_481(int iParam0, int iParam1)//Position - 0x3B851
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (iParam1 == 10)
	{
		iVar2 = 63;
	}
	else if (iParam1 == 16)
	{
		iVar2 = 117;
	}
	else if (iParam1 == 12)
	{
		iVar2 = 40;
	}
	else if (iParam1 == 11)
	{
		iVar2 = 25;
	}
	else if (iParam1 == 13)
	{
		iVar2 = 15;
	}
	else
	{
		iVar2 = 9;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (func_469(iParam1, iVar0))
		{
			iVar3 = iVar0 + 3;
			iVar4 = func_478(iParam1, iVar3);
			iVar1 = func_467(iVar4, 0, 0);
			if (iVar4 == 15)
			{
				if (!func_466(15, 2))
				{
					iVar1 = -1;
				}
			}
			if (iVar4 == 46)
			{
				if (iParam1 == 16)
				{
					iVar1 = -1;
				}
			}
			if (iVar4 != -1)
			{
				if (iVar1 == -3)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-3);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (iVar1 == -2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (iVar1 == -1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (iVar1 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GlobalFunc_726("ITEM_FREE");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					bVar5 = false;
					if (iVar4 == 164)
					{
						bVar5 = true;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					if (!bVar5)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_467(iVar4, 1, 1));
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_467(iVar4, 0, 1));
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_482(int iParam0, int iParam1)//Position - 0x3BA01
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (iParam1 == 10)
	{
		iVar2 = 63;
	}
	else if (iParam1 == 16)
	{
		iVar2 = 117;
	}
	else if (iParam1 == 12)
	{
		iVar2 = 40;
	}
	else if (iParam1 == 11)
	{
		iVar2 = 25;
	}
	else if (iParam1 == 13)
	{
		iVar2 = 15;
	}
	else
	{
		iVar2 = 9;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (func_469(iParam1, iVar0))
		{
			iVar3 = iVar0 + 3;
			iVar4 = func_478(iParam1, iVar3);
			bVar5 = false;
			if (iVar4 == 164)
			{
				if (Global_67135 == 1)
				{
					bVar5 = false;
				}
				if (Global_67135 == 2)
				{
					bVar5 = true;
				}
			}
			iVar1 = func_412(iVar4, bVar5);
			if (iVar1 == -3)
			{
				if (iVar4 != -1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-3);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (iVar1 == -2)
			{
				if (iVar4 != -1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (iVar1 == -1)
			{
				if (iVar4 != -1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else
			{
				switch (iParam1)
				{
					case 10:
					case 16:
						iVar1 = SYSTEM::CEIL((Global_262145.f_64 * SYSTEM::TO_FLOAT(iVar1)));
						break;
					
					case 11:
					case 12:
						if (GlobalFunc_2044(iVar4) == 1)
						{
							iVar1 = SYSTEM::CEIL((Global_262145.f_65 * SYSTEM::TO_FLOAT(iVar1)));
						}
						else
						{
							iVar1 = SYSTEM::CEIL((Global_262145.f_66 * SYSTEM::TO_FLOAT(iVar1)));
						}
						break;
					
					case 13:
						iVar1 = SYSTEM::CEIL((Global_262145.f_67 * SYSTEM::TO_FLOAT(iVar1)));
						break;
					
					case 15:
						iVar1 = SYSTEM::CEIL((Global_262145.f_68 * SYSTEM::TO_FLOAT(iVar1)));
						break;
				}
				if (Global_262145.f_6018)
				{
					switch (iParam1)
					{
						case 10:
							iVar1 = SYSTEM::CEIL((((100f - Global_262145.f_6704) / 100f) * SYSTEM::TO_FLOAT(iVar1)));
							break;
						
						case 11:
							iVar1 = SYSTEM::CEIL((((100f - Global_262145.f_6705) / 100f) * SYSTEM::TO_FLOAT(iVar1)));
							break;
						
						case 16:
							iVar1 = SYSTEM::CEIL((((100f - Global_262145.f_6706) / 100f) * SYSTEM::TO_FLOAT(iVar1)));
							break;
						}
				}
				bVar6 = false;
				iVar7 = func_483(iVar4, &bVar6);
				if (iVar1 == 0)
				{
					if (iVar4 != -1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
						GlobalFunc_726("ITEM_FREE");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (bVar6)
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_RANKS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_1343(PLAYER::PLAYER_ID()));
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_RANKS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_1343(PLAYER::PLAYER_ID()));
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
				else if (iVar4 != -1)
				{
					bVar8 = false;
					iVar9 = 0;
					if (iVar4 == 164)
					{
						bVar8 = true;
					}
					if (Global_262145.f_6974)
					{
						if (func_413(iVar4) != -1)
						{
							iVar9 = 1;
						}
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PRICES");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					if (!bVar8)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_412(iVar4, 0));
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_412(iVar4, 1));
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					if (bVar6)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_RANKS");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_1343(PLAYER::PLAYER_ID()));
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_RANKS");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_1343(PLAYER::PLAYER_ID()));
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_483(int iParam0, int iParam1)//Position - 0x3BDD2
{
	*iParam1 = 0;
	if ((((iParam0 == 17 || iParam0 == 20) || iParam0 == 78) || iParam0 == 148) || iParam0 == 169)
	{
		*iParam1 = 1;
	}
	switch (iParam0)
	{
		case 0:
			return 31;
		
		case 1:
			return 43;
		
		case 2:
			return 45;
		
		case 3:
			return 27;
		
		case 4:
			return 47;
		
		case 5:
			return 49;
		
		case 6:
			return 36;
		
		case 7:
			return 26;
		
		case 46:
			return 29;
		
		case 70:
			return 24;
		
		case 71:
			return 21;
		
		case 72:
			return 35;
		
		case 56:
			return 44;
		
		case 50:
			return 46;
		
		case 44:
			return 25;
		
		case 47:
			return 28;
		
		case 73:
			return 28;
		
		case 74:
			return 33;
		
		case 75:
			return 33;
		
		case 76:
			return 43;
		
		case 55:
			return 22;
		
		case 77:
			return 23;
		
		case 48:
			return 20;
		
		case 45:
			return 19;
		
		case 49:
			return 16;
		
		case 95:
			return 1;
		
		case 96:
			return 1;
		
		case 97:
			return 1;
		
		case 98:
			return 1;
		
		case 9:
			return 1;
		
		case 13:
			return 9;
		
		case 10:
			return 39;
		
		case 12:
			return 16;
		
		case 14:
			return 50;
		
		case 11:
			return 40;
		
		case 15:
			return 30;
		
		case 16:
			return 7;
		
		case 78:
			*iParam1 = 1;
			return 37;
		
		case joaat("mpsv_lp0_31"):
			return 12;
		
		case 80:
			return 20;
		
		case 17:
			*iParam1 = 1;
			return 70;
		
		case 22:
			return 10;
		
		case 18:
			return 32;
		
		case 19:
			return 22;
		
		case 20:
			*iParam1 = 1;
			return 42;
		
		case 21:
			return 8;
		
		case 81:
			return 19;
		
		case 82:
			return 41;
		
		case 83:
			return 41;
		
		case 84:
			return 23;
		
		case 85:
			return 11;
		
		case 86:
			return 13;
		
		case 87:
			return 17;
		
		case 148:
			*iParam1 = 1;
			return 100;
		
		case 23:
			return 1;
		
		case 24:
			return 48;
		
		case 25:
			return 17;
		
		case 26:
			return 1;
		
		case 27:
			return 23;
		
		case 28:
			return 1;
		
		case 29:
			return 16;
		
		case 30:
			return 5;
		
		case 31:
			return 1;
		
		case 32:
			return 38;
		
		case 33:
			return 9;
		
		case 34:
			return 13;
		
		case 35:
			return 19;
		
		case 36:
			return 18;
		
		case 37:
			return 17;
		
		case 38:
			return 5;
		
		case 63:
			return 12;
		
		case 57:
			return 12;
		
		case 62:
			return 18;
		
		case 94:
			return 18;
		
		case 51:
			return 7;
		
		case 89:
			return 14;
		
		case 66:
			return 15;
		
		case 58:
			return 14;
		
		case 54:
			return 10;
		
		case 90:
			return 11;
		
		case 69:
			return 5;
		
		case 60:
			return 21;
		
		case 91:
			return 21;
		
		case 53:
			return 17;
		
		case 41:
			return 13;
		
		case 92:
			return 15;
		
		case 43:
			return 5;
		
		case 61:
			return 9;
		
		case 67:
			return 8;
		
		case 59:
			return 11;
		
		case 64:
			return 10;
		
		case 68:
			return 6;
		
		case 52:
			return 15;
		
		case 39:
			return 15;
		
		case 88:
			return 34;
		
		case 65:
			return 7;
		
		case 42:
			return 6;
		
		case 40:
			return 14;
		
		case 93:
			return 14;
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return 1;
		
		case 100:
			return 1;
		
		case 101:
			return 1;
		
		case 102:
			return 1;
		
		case 109:
			return 1;
		
		case 111:
			return 1;
		
		case 114:
			return 1;
		
		case 112:
			return 1;
		
		case 115:
			return 1;
		
		case 116:
			return 1;
		
		case 110:
			return 1;
		
		case 113:
			return 1;
		
		case 117:
			return 1;
		
		case 118:
			return 1;
		
		case 119:
			return 1;
		
		case 120:
			return 1;
		
		case 121:
			return 1;
		
		case 128:
			return 1;
		
		case 129:
			return 1;
		
		case 130:
			return 1;
		
		case 131:
			return 1;
		
		case 132:
			return 1;
		
		case 133:
			return 1;
		
		case 134:
			return 1;
		
		case 135:
			return 1;
		
		case 136:
			return 1;
		
		case 137:
			return 1;
		
		case 138:
			return 1;
		
		case 139:
			return 1;
		
		case 140:
			return 1;
		
		case 141:
			return 1;
		
		case 142:
			return 1;
		
		case 122:
			return 1;
		
		case 123:
			return 1;
		
		case 124:
			return 1;
		
		case 125:
			return 1;
		
		case 126:
			return 1;
		
		case 127:
			return 1;
		
		case 143:
			return 1;
		
		case 144:
			return 1;
		
		case 145:
			return 1;
		
		case 146:
			return 1;
		
		case 147:
			return 1;
		
		case 149:
			return 1;
		
		case 150:
			return 1;
		
		case 151:
			return 1;
		
		case 152:
			return 1;
		
		case 153:
			return 1;
		
		case 154:
			return 1;
		
		case 155:
			return 1;
		
		case 156:
			return 1;
		
		case 157:
			return 1;
		
		case 158:
			return 1;
		
		case 159:
			return 1;
		
		case 160:
			return 1;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 163:
			return 1;
		
		case 164:
			return 1;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 167:
			return 1;
		
		case 168:
			return 1;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 199:
			return 1;
		
		case 200:
			return 1;
		
		case 201:
			return 1;
		
		case 202:
			return 1;
		
		case 203:
			return 1;
		
		case 204:
			return 1;
		
		case 205:
			return 1;
		
		case 206:
			return 1;
		
		case 207:
			return 1;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 171:
			return 1;
		
		case 172:
			return 1;
		
		case 173:
			return 1;
		
		case 174:
			return 1;
		
		case 175:
			return 1;
		
		case 176:
			return 1;
		
		case 177:
			return 1;
		
		case 178:
			return 1;
		
		case 179:
			return 1;
		
		case 183:
			return 1;
		
		case 180:
			return 1;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 184:
			return 1;
		
		case 185:
			return 1;
		
		case 186:
			return 1;
		
		case 187:
			return 1;
		
		case 188:
			return 1;
		
		case 189:
			return 1;
		
		case 190:
			return 1;
		
		case 191:
			return 1;
		
		case 192:
			return 1;
		
		case 193:
			return 1;
		
		case 194:
			return 1;
		
		case 195:
			return 1;
		
		case 196:
			return 1;
		
		case 197:
			return 1;
		
		case 198:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 210:
			return 1;
		
		case 211:
			return 1;
		
		case 212:
			return 1;
		
		case 213:
			return 1;
		
		case 214:
			return 1;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 217:
			return 1;
		
		case 218:
			return 1;
		
		case 219:
			return 1;
		
		default:
	}
	return 1;
}

void func_484(int iParam0)//Position - 0x3C8CA
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	bool bVar7;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2[iVar1] = GlobalFunc_5062(iVar1, -1);
		iVar1++;
	}
	iVar6 = 0;
	iVar0 = 1;
	while (iVar0 <= 72)
	{
		bVar7 = true;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (iVar2[iVar1] != 0)
			{
				if (iVar2[iVar1] == iVar0)
				{
					if (bVar7)
					{
						bVar7 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar7)
		{
			func_485(&iVar6, iVar0, iParam0);
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_485(int iParam0, int iParam1, int iParam2)//Position - 0x3C971
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam0);
	GlobalFunc_726(&(Global_1048995[iParam1 /*1425*/].f_16));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_1048995[iParam1 /*1425*/].f_3[0 /*3*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_1048995[iParam1 /*1425*/].f_3[0 /*3*/].f_1);
	if (func_342(iParam1) < 1 || func_339(iParam1))
	{
		GlobalFunc_726("ITEM_FREE");
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_342(iParam1)) * Global_262145.f_63)));
	}
	GlobalFunc_2047(func_488(iParam1));
	GlobalFunc_726(&(Global_1048995[iParam1 /*1425*/].f_20));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_1339(Global_1048995[iParam1 /*1425*/].f_31));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_486(Global_1048995[iParam1 /*1425*/].f_31));
	switch (Global_1048995[iParam1 /*1425*/].f_31)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			GlobalFunc_726("DYN_UPDATEDINT");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam0++;
}

int func_486(int iParam0)//Position - 0x3CA80
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 1;
		
		case 5:
			return 2;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 3;
		
		case 16:
			return 2;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 3;
		
		case 20:
			return 2;
		
		case 21:
			return 3;
		
		case 22:
			return 3;
		
		case 23:
			return 3;
		
		case 24:
			return 4;
		
		case 25:
			return 4;
		
		case 26:
			return 4;
		
		case 27:
			return 4;
		
		case 28:
			return 4;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 4;
		
		case 32:
			return 5;
		
		case 33:
			return 5;
		
		case 34:
			return 6;
		
		case 35:
			return 6;
		
		case 36:
			return 6;
		
		case 37:
			return 6;
		
		case 38:
			return 6;
		
		case 39:
			return 6;
		
		case 40:
			return 6;
		
		case 41:
			return 6;
		
		case 42:
			return 6;
		
		case 43:
			return 5;
		
		case 44:
			return 5;
		
		case 45:
			return 5;
		
		case 46:
			return 5;
		
		case 47:
			return 5;
		
		case 48:
			return 5;
		
		case 49:
			return 1;
		
		case 50:
			return 4;
		
		default:
	}
	return 0;
}


char* func_488(int iParam0)//Position - 0x3CC92
{
	switch (iParam0)
	{
		case 1:
			return "DYN_MP_1";
		
		case 2:
			return "DYN_MP_2";
		
		case 3:
			return "DYN_MP_3";
		
		case 4:
			return "DYN_MP_4";
		
		case 5:
			return "DYN_MP_5";
		
		case 6:
			return "DYN_MP_6";
		
		case 7:
			return "DYN_MP_7";
		
		case 8:
			return "DYN_MP_8";
		
		case 9:
			return "DYN_MP_9";
		
		case 10:
			return "DYN_MP_10";
		
		case 11:
			return "DYN_MP_11";
		
		case 12:
			return "DYN_MP_12";
		
		case 13:
			return "DYN_MP_13";
		
		case 14:
			return "DYN_MP_14";
		
		case 15:
			return "DYN_MP_15";
		
		case 16:
			return "DYN_MP_16";
		
		case 17:
			return "DYN_MP_17";
		
		case 18:
			return "DYN_MP_18";
		
		case 19:
			return "DYN_MP_19";
		
		case 20:
			return "DYN_MP_20";
		
		case 21:
			return "DYN_MP_21";
		
		case 22:
			return "DYN_MP_22";
		
		case 23:
			return "DYN_MP_23";
		
		case 24:
			return "DYN_MP_24";
		
		case 25:
			return "DYN_MP_25";
		
		case 26:
			return "DYN_MP_26";
		
		case 27:
			return "DYN_MP_27";
		
		case 28:
			return "DYN_MP_28";
		
		case 29:
			return "DYN_MP_29";
		
		case 30:
			return "DYN_MP_30";
		
		case 31:
			return "DYN_MP_31";
		
		case 32:
			return "DYN_MP_32";
		
		case 33:
			return "DYN_MP_33";
		
		case 34:
			return "DYN_MP_34";
		
		case 35:
			return "DYN_MP_35";
		
		case 36:
			return "DYN_MP_36";
		
		case 37:
			return "DYN_MP_37";
		
		case 38:
			return "DYN_MP_38";
		
		case 39:
			return "DYN_MP_39";
		
		case 40:
			return "DYN_MP_40";
		
		case 41:
			return "DYN_MP_41";
		
		case 42:
			return "DYN_MP_42";
		
		case 43:
			return "DYN_MP_43";
		
		case 44:
			return "DYN_MP_44";
		
		case 45:
			return "DYN_MP_45";
		
		case 46:
			return "DYN_MP_46";
		
		case 47:
			return "DYN_MP_48";
		
		case 48:
			return "DYN_MP_49";
		
		case 49:
			return "DYN_MP_50";
		
		case 50:
			return "DYN_MP_51";
		
		case 51:
			return "DYN_MP_52";
		
		case 52:
			return "DYN_MP_57";
		
		case 53:
			return "DYN_MP_59";
		
		case 54:
			return "DYN_MP_60";
		
		case 55:
			return "DYN_MP_61";
		
		case 56:
			return "DYN_MP_62";
		
		case 57:
			return "DYN_MP_63";
		
		case 58:
			return "DYN_MP_64";
		
		case 59:
			return "DYN_MP_65";
		
		case 60:
			return "DYN_MP_66";
		
		case 61:
			return "DYN_MP_1";
		
		case 62:
			return "DYN_MP_7";
		
		case 63:
			return "DYN_MP_40";
		
		case 64:
			return "DYN_MP_42";
		
		case 65:
			return "DYN_MP_38";
		
		case 66:
			return "DYN_MP_72";
		
		case 67:
			return "DYN_MP_73";
		
		case 68:
			return "DYN_MP_74";
		
		case 69:
			return "DYN_MP_75";
		
		case 70:
			return "DYN_MP_76";
		
		case 71:
			return "DYN_MP_77";
		
		case 72:
			return "DYN_MP_78";
		
		default:
	}
	return "";
}

void func_489(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x3D093
{
	if (MISC::GET_GAME_TIMER() > Global_67069 + 120)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Global_67071 = iParam1;
		Global_67072 = iParam0;
		if (Global_67136 != -1)
		{
			if (iParam0 != 5 || (iParam0 == 5 && iParam1 != 14))
			{
				GlobalFunc_4935();
				Global_67136 = -1;
			}
		}
		switch (iParam0)
		{
			case 0:
				break;
			
			case 2:
				func_598(iParam2, iParam1, uParam3, bParam5);
				break;
			
			case 4:
				Global_67097 = 1;
				func_569(iParam2, iParam1);
				break;
			
			case 5:
				if (!Global_68245)
				{
					switch (GlobalFunc_8329())
					{
						case 1:
							func_567(1, uParam4);
							break;
						
						case 2:
							func_567(2, uParam4);
							break;
						}
				}
				Global_67088 = 1;
				func_566(iParam2, iParam1);
				break;
			
			case 7:
				Global_67097 = 0;
				func_569(iParam2, iParam1);
				break;
			
			case 14:
				func_550(iParam2, iParam1, uParam3);
				break;
			
			case 6:
				if (bLocal_234)
				{
					func_504(iParam2, &bLocal_234);
				}
				else
				{
					func_651("WWW_EYEFIND_INFO_S_ERROR");
				}
				break;
			
			case 25:
				func_503(iParam2, iParam1);
				break;
			
			case 21:
				if (Global_68245)
				{
					func_493(iParam2, iParam1);
				}
				else
				{
					func_490(iParam2, iParam1);
				}
				break;
			
			case 22:
			case 23:
				func_490(iParam2, iParam1);
				break;
			
			case 997:
				break;
			
			case 998:
				break;
		}
		Global_67069 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_67070 = 1;
	}
}

void func_490(int iParam0, int iParam1)//Position - 0x3D229
{
	switch (iParam1)
	{
		case 1:
			break;
		
		case 2:
			func_491(iParam0);
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_491(int iParam0)//Position - 0x3D27A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[GlobalFunc_8329() /*29*/].f_17;
	if (iVar0 == 4 || iVar0 == 3)
	{
		return;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_51925[iVar0]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (iVar0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("ACCNA_MIKE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("ACCNA_TREVOR");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_726("ACCNA_FRANKLIN");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GlobalFunc_726("W_BA_ATL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_51925[iVar0]);
	GlobalFunc_726("W_BA_BAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar1 = 4;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 11;
	iVar4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/];
	if (!iVar4 < 11)
	{
		iVar4 = 11;
	}
	iVar5 = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_1 - 1);
	if (iVar5 > -1)
	{
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (iVar5 < 0)
			{
				iVar5 = 10;
			}
			iVar3 = 0;
			if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar5 /*6*/] == 1)
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar5 /*6*/].f_2);
			GlobalFunc_726(func_492(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar5 /*6*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar5 = (iVar5 - 1);
			iVar1++;
			iVar2++;
		}
	}
}

char* func_492(int iParam0)//Position - 0x3D456
{
	switch (iParam0)
	{
		case 31:
			return "ACCNA_SIM";
			break;
		
		case 32:
			return "ACCNA_LES";
			break;
		
		case 33:
			return "ACCNA_AMA";
			break;
		
		case 34:
			return "ACCNA_JIM";
			break;
		
		case 35:
			return "ACCNA_TRA";
			break;
		
		case 36:
			return "ACCNA_OSC";
			break;
		
		case 37:
			return "ACCNA_ABI";
			break;
		
		case 38:
			return "ACCNA_BUR";
			break;
		
		case 3:
			return "ACCNA_MIKE";
			break;
		
		case 24:
			return "ACCNA_DRFR";
			break;
		
		case 25:
			return "ACCNA_STRP";
			break;
		
		case 39:
			return "ACCNA_MRSPOKE";
			break;
		
		case 40:
			return "ACCNA_GOL_CLU";
			break;
		
		case 4:
			return "ACCNA_CBELL";
			break;
		
		case 5:
			return "ACCNA_WHIZZ";
			break;
		
		case 6:
			return "ACCNA_MCHON";
			break;
		
		case 7:
			return "ACCNA_DSACH";
			break;
		
		case 8:
			return "ACCNA_LSANH";
			break;
		
		case 9:
			return "ACCNA_CRAPKI";
			break;
		
		case 10:
			return "ACCNA_VCLEAN";
			break;
		
		case 11:
			return "ACCNA_CSUX";
			break;
		
		case 12:
			return "ACCNA_VBEU";
			break;
		
		case 13:
			return "ACCNA_ANAT";
			break;
		
		case 14:
			return "ACCNA_BAHAMA";
			break;
		
		case 15:
			return "ACCNA_BAR_BY";
			break;
		
		case 16:
			return "ACCNA_BAR_BI";
			break;
		
		case 17:
			return "ACCNA_BAR_HI";
			break;
		
		case 18:
			return "ACCNA_BAR_MO";
			break;
		
		case 19:
			return "ACCNA_BAR_SH";
			break;
		
		case 20:
			return "ACCNA_BAR_SI";
			break;
		
		case 21:
			return "ACCNA_TAXI";
			break;
		
		case 22:
			return "ACCNA_DTRAF";
			break;
		
		case 23:
			return "ACCNA_REPO";
			break;
		
		case 26:
			return "ACCNA_HUNT";
			break;
		
		case 27:
			return "ACCNA_RANGE";
			break;
		
		case 28:
			return "ACCNA_RACES";
			break;
		
		case 29:
			return "ACCNA_EPS_ST";
			break;
		
		case 30:
			return "ACCNA_EPS_RB";
			break;
		
		case 2:
			return "ACCNA_BROKERA";
			break;
		
		case 85:
			return "ACCNA_CARSITE";
			break;
		
		case 86:
			return "ACCNA_ARMYSITE";
			break;
		
		case 87:
			return "ACCNA_PLANESITE";
			break;
		
		case 88:
			return "ACCNA_BOATSITE";
			break;
		
		case 89:
			return "ACCNA_BIKESITE";
			break;
		
		case 90:
			return "ACCNA_AUTOSITE";
			break;
		
		case 94:
			return "ACCNA_CASHDEP";
			break;
		
		case 93:
			return "ACCNA_BAILBONDS";
			break;
		
		case 95:
			return "ACCNA_HOFFSHORE";
			break;
		
		case 96:
			return "ACCNA_SNACK";
			break;
		
		case 41:
			return "S_H_01";
			break;
		
		case 42:
			return "S_H_02";
			break;
		
		case 43:
			return "S_H_03";
			break;
		
		case 44:
			return "S_H_04";
			break;
		
		case 45:
			return "S_H_05";
			break;
		
		case 46:
			return "S_H_06";
			break;
		
		case 47:
			return "S_H_07";
			break;
		
		case 48:
			return "S_CL_01";
			break;
		
		case 49:
			return "S_CL_02";
			break;
		
		case 50:
			return "S_CL_03";
			break;
		
		case 51:
			return "S_CL_04";
			break;
		
		case 52:
			return "S_CL_05";
			break;
		
		case 53:
			return "S_CL_06";
			break;
		
		case 54:
			return "S_CL_07";
			break;
		
		case 55:
			return "S_CM_01";
			break;
		
		case 56:
			return "S_CM_03";
			break;
		
		case 57:
			return "S_CM_04";
			break;
		
		case 58:
			return "S_CM_05";
			break;
		
		case 59:
			return "S_CH_01";
			break;
		
		case 60:
			return "S_CH_02";
			break;
		
		case 61:
			return "S_CH_03";
			break;
		
		case 62:
			return "S_CA_01";
			break;
		
		case 63:
			return "S_T_01";
			break;
		
		case 64:
			return "S_T_02";
			break;
		
		case 65:
			return "S_T_03";
			break;
		
		case 66:
			return "S_T_04";
			break;
		
		case 67:
			return "S_T_05";
			break;
		
		case 68:
			return "S_T_06";
			break;
		
		case 69:
			return "S_G_01";
			break;
		
		case 70:
			return "S_G_02";
			break;
		
		case 71:
			return "S_G_03";
			break;
		
		case 72:
			return "S_G_04";
			break;
		
		case 73:
			return "S_G_05";
			break;
		
		case 74:
			return "S_G_06";
			break;
		
		case 75:
			return "S_G_07";
			break;
		
		case 76:
			return "S_G_08";
			break;
		
		case 77:
			return "S_G_09";
			break;
		
		case 78:
			return "S_G_10";
			break;
		
		case joaat("mpsv_lp0_31"):
			return "S_G_11";
			break;
		
		case 80:
			return "S_MO_01";
			break;
		
		case 81:
			return "S_MO_05";
			break;
		
		case 82:
			return "S_MO_06";
			break;
		
		case 83:
			return "S_MO_07";
			break;
		
		case 84:
			return "S_MO_08";
			break;
		
		case 97:
			return "ACCNA_TOWING";
			break;
		
		case 98:
			return "ACCNA_TAXI_LOT";
			break;
		
		case 99:
			return "ACCNA_ARMS";
			break;
		
		case 100:
			return "ACCNA_SONAR";
			break;
		
		case 101:
			return "ACCNA_CARMOD";
			break;
		
		case 102:
			return "ACCNA_VCINEMA";
			break;
		
		case 103:
			return "ACCNA_DCINEMA";
			break;
		
		case 104:
			return "ACCNA_MCINEMA";
			break;
		
		case 105:
			return "ACCNA_GOLF";
			break;
		
		case 106:
			return "ACCNA_CSCRAP";
			break;
		
		case 107:
			return "ACCNA_SMOKE";
			break;
		
		case 108:
			return "ACCNA_TEQUILA";
			break;
		
		case 109:
			return "ACCNA_PITCHERS";
			break;
		
		case 110:
			return "ACCNA_HEN";
			break;
		
		case 111:
			return "ACCNA_HOOKIES";
			break;
		
		case 112:
			return "ACCNA_MARINA";
			break;
		
		case 113:
			return "ACCNA_HANGAR";
			break;
		
		case 114:
			return "ACCNA_HELIPAD";
			break;
		
		case 115:
			return "ACCNA_GARAGE";
			break;
		
		case 116:
			return "ACCNA_PD_VB";
			break;
		
		case 117:
			return "ACCNA_PD_SC";
			break;
		
		case 118:
			return "ACCNA_PD_DT";
			break;
		
		case 119:
			return "ACCNA_PD_RH";
			break;
		
		case 120:
			return "ACCNA_PD_SS";
			break;
		
		case 121:
			return "ACCNA_PD_PB";
			break;
		
		case 122:
			return "ACCNA_PD_HW";
			break;
		
		case 123:
			return "ACCNA_H_RH";
			break;
		
		case 124:
			return "ACCNA_H_SC";
			break;
		
		case 125:
			return "ACCNA_H_DT";
			break;
		
		case 126:
			return "ACCNA_H_SS";
			break;
		
		case 127:
			return "ACCNA_H_PB";
			break;
		
		case 91:
			return "ACCNA_CONSIT";
			break;
		
		case 92:
			return "ACCNA_TRMSITE";
			break;
		
		case 128:
			return "ACCNA_DYNPROP";
			break;
	}
	return "";
}

void func_493(int iParam0, int iParam1)//Position - 0x3DCD6
{
	bool bVar0;
	
	bVar0 = false;
	switch (iParam1)
	{
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GlobalFunc_2047(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			func_502(iParam0);
			break;
		
		case 3:
			iLocal_254 = 0;
			iLocal_256 = -1;
			func_501(iParam0, &bVar0);
			break;
		
		case 4:
			func_499(iParam0);
			break;
		
		case 5:
			func_496(iParam0);
			break;
		
		case 6:
			func_495(iParam0);
			break;
		
		case 7:
			break;
		
		case 8:
			func_494(iParam0);
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bVar0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GlobalFunc_726("MPATM_WITM");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_494(int iParam0)//Position - 0x3DDB3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (iLocal_256)
	{
		case 1:
			switch (iLocal_254)
			{
				case 1:
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATC_CONFW");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iLocal_255, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GlobalFunc_726("MO_YES");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GlobalFunc_726("MO_NO");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					break;
				
				case 2:
					break;
			}
			break;
		
		case 2:
			switch (iLocal_254)
			{
				case 1:
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_CONF");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iLocal_255, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GlobalFunc_726("MO_YES");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GlobalFunc_726("MO_NO");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					break;
				
				case 2:
					break;
			}
			break;
	}
}

void func_495(int iParam0)//Position - 0x3DED4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (iLocal_256)
	{
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726("MPATM_NODO2");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726("MPATM_NODO");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726("MPATM_ERR");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
}

void func_496(int iParam0)//Position - 0x3DF62
{
	int iVar0;
	
	if (func_497(func_498(0, 1)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GlobalFunc_2047(MONEY::NETWORK_GET_STRING_BANK_BALANCE());
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GlobalFunc_2047(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GlobalFunc_726("MPATM_DITMT");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_497(func_498(iVar0, 1)))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0 + 3);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_498(iVar0, 1), 1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GlobalFunc_726("MPATM_BACK");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		iLocal_256 = 2;
		func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
	}
}

int func_497(int iParam0)//Position - 0x3E058
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iParam0, 0, 0, 0, &uVar0, -1))
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0, bool bParam1)//Position - 0x3E07E
{
	int iVar0;
	
	iVar0 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (iVar0 == 0)
				{
					return -1;
				}
				else if (iVar0 < 50)
				{
					return iVar0;
				}
				else
				{
					return 50;
				}
			}
			else
			{
				return 50;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if (iVar0 <= 2500)
				{
					return -1;
				}
				else if (iVar0 > 2500 && iVar0 < 10000)
				{
					return iVar0;
				}
				else
				{
					return 10000;
				}
			}
			else
			{
				return 10000;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (iVar0 <= 50)
				{
					return -1;
				}
				else if (iVar0 > 50 && iVar0 < 500)
				{
					return iVar0;
				}
				else
				{
					return 500;
				}
			}
			else
			{
				return 500;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (iVar0 <= 10000)
				{
					return -1;
				}
				else if (iVar0 > 10000 && iVar0 < 100000)
				{
					return iVar0;
				}
				else
				{
					return 100000;
				}
			}
			else
			{
				return 100000;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (iVar0 <= 500)
				{
					return -1;
				}
				else if (iVar0 > 500 && iVar0 < 2500)
				{
					return iVar0;
				}
				else
				{
					return 2500;
				}
			}
			else
			{
				return 2500;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				if (iVar0 <= 100000)
				{
					return -1;
				}
				else
				{
					return iVar0;
				}
			}
			else
			{
				return 1000000;
			}
			break;
	}
	return 0;
}

void func_499(int iParam0)//Position - 0x3E21A
{
	int iVar0;
	
	if (func_500(func_498(0, 0)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GlobalFunc_2047(MONEY::NETWORK_GET_STRING_BANK_BALANCE());
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GlobalFunc_2047(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GlobalFunc_726("MPATM_WITMT");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_500(func_498(iVar0, 0)))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0 + 3);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_498(iVar0, 0), 1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GlobalFunc_726("MPATM_BACK");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		iLocal_256 = 2;
		func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
	}
}

int func_500(int iParam0)//Position - 0x3E310
{
	if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iParam0)
	{
		return 1;
	}
	return 0;
}

void func_501(int iParam0, int iParam1)//Position - 0x3E326
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_2047(MONEY::NETWORK_GET_STRING_BANK_BALANCE());
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GlobalFunc_2047(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GlobalFunc_726("MPATM_SER");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GlobalFunc_726("MPATM_DIDM");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (func_500(func_498(0, 0)))
	{
		*iParam1 = 0;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GlobalFunc_726("MPATM_WITM");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		*iParam1 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GlobalFunc_726("MPATM_WITM");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GlobalFunc_726("MPATM_LOG");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_502(int iParam0)//Position - 0x3E422
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_2047(MONEY::NETWORK_GET_STRING_BANK_BALANCE());
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GlobalFunc_2047(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GlobalFunc_726("MPATM_LOG");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(MONEY::NETWORK_GET_VC_BANK_BALANCE());
	GlobalFunc_726("MPATM_ACBA");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 4;
	if (Global_2097152[GlobalFunc_177() /*8053*/].f_7876 > 15)
	{
		Global_2097152[GlobalFunc_177() /*8053*/].f_7876 = 0;
	}
	iVar1 = (Global_2097152[GlobalFunc_177() /*8053*/].f_7876 - 1);
	if (iVar1 < 0)
	{
		iVar1 = 15;
	}
	iVar2 = 16;
	while (iVar2 > 0)
	{
		if (Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_1[iVar1] > 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			switch (Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_115[iVar1])
			{
				case 4:
				case 2:
				case 1:
				case 6:
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					break;
				
				case 0:
				case 3:
				case 5:
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					break;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_1[iVar1]);
			switch (Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_115[iVar1])
			{
				case 0:
					GlobalFunc_726("MPATM_PLCHLDR_WDR");
					break;
				
				case 1:
					GlobalFunc_726("MPATM_PLCHLDR_CAD");
					break;
				
				case 2:
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_PLCHLDR_CRF");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_18[iVar1 /*6*/]));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					break;
				
				case 3:
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_PLCHLDR_CST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_18[iVar1 /*6*/]));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					break;
				
				case 4:
					GlobalFunc_726("MPATM_PLCHLDR_BRT");
					break;
				
				case 5:
					if (Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_132[iVar1] != 0)
					{
						iVar3 = Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_132[iVar1];
						switch (iVar3)
						{
							case joaat("money_spent_contact_service"):
								GlobalFunc_726("MONEY_SPENT_CONTACT_SERVICE");
								break;
							
							case joaat("money_spent_property_util"):
								GlobalFunc_726("MONEY_SPENT_PROPERTY_UTIL");
								break;
							
							case joaat("money_spent_job_activity"):
								GlobalFunc_726("MONEY_SPENT_JOB_ACTIVITY");
								break;
							
							case joaat("money_spent_betting"):
								GlobalFunc_726("MONEY_SPENT_BETTING");
								break;
							
							case joaat("money_spent_style_ent"):
								GlobalFunc_726("MONEY_SPENT_STYLE_ENT");
								break;
							
							case joaat("money_spent_healthcare"):
								GlobalFunc_726("MONEY_SPENT_HEALTHCARE");
								break;
							
							case -152954333:
								GlobalFunc_726("MONEY_SPENT_FROM_DEBUG");
								break;
							
							case joaat("money_spent_dropped_stolen"):
								GlobalFunc_726("MONEY_SPENT_DROPPED_STOLEN");
								break;
							
							case joaat("money_spent_veh_maintenance"):
								GlobalFunc_726("MONEY_SPENT_VEH_MAINTENANCE");
								break;
							
							case -1995364556:
								GlobalFunc_726("MONEY_SPENT_HOLDUPS");
								break;
							
							case joaat("MONEY_SPENT_PASSIVEMODE"):
								GlobalFunc_726("MONEY_SPENT_PASSIVEMODE");
								break;
						}
					}
					else
					{
						GlobalFunc_726("MPATM_PLCHLDR_PRCH");
					}
					break;
				
				case 6:
					if (Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_132[iVar1] != 0)
					{
						iVar4 = Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_132[iVar1];
						switch (iVar4)
						{
							case joaat("money_earn_jobs"):
								GlobalFunc_726("MONEY_EARN_JOBS");
								break;
							
							case joaat("money_earn_selling_veh"):
								GlobalFunc_726("MONEY_EARN_SELLING_VEH");
								break;
							
							case joaat("money_earn_betting"):
								GlobalFunc_726("MONEY_EARN_BETTING");
								break;
							
							case joaat("money_earn_good_sport"):
								GlobalFunc_726("MONEY_EARN_GOOD_SPORT");
								break;
							
							case joaat("money_earn_picked_up"):
								GlobalFunc_726("MONEY_EARN_PICKED_UP");
								break;
							
							case joaat("money_earn_shared"):
								GlobalFunc_726("MONEY_EARN_SHARED");
								break;
							
							case joaat("money_earn_jobshared"):
								GlobalFunc_726("MONEY_EARN_JOBSHARED");
								break;
							
							case joaat("money_earn_rockstar_award"):
								GlobalFunc_726("MONEY_EARN_ROCKSTAR_AWARD");
								break;
							
							case joaat("MONEY_EARN_REFUND"):
								GlobalFunc_726("MONEY_EARN_REFUND");
								break;
							
							case -1392064501:
								GlobalFunc_726("MONEY_EARN_JOB_BONUS");
								break;
							
							case -1378221995:
								GlobalFunc_726("MONEY_EARN_HEIST_JOB");
								break;
						}
					}
					else
					{
						GlobalFunc_726("MPATM_PLCHLDR_REF");
					}
					break;
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 == -1)
		{
			iVar1 = 15;
		}
		iVar2 = (iVar2 - 1);
	}
}

void func_503(int iParam0, int iParam1)//Position - 0x3E87F
{
	switch (iParam1)
	{
		case 1:
			switch (GlobalFunc_8329())
			{
				case 0:
					break;
				
				case 2:
					break;
			}
			break;
		
		case 3:
			break;
		
		default:
			break;
	}
}

void func_504(int iParam0, bool bParam1)//Position - 0x3E8BE
{
	if (iLocal_45 == -1)
	{
		func_99();
		if (HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(4, 0);
		}
		switch (GlobalFunc_8329())
		{
			case 0:
				iLocal_45 = 0;
				HUD::REQUEST_ADDITIONAL_TEXT("LFI_M", 4);
				*bParam1 = 1;
				break;
			
			case 1:
				iLocal_45 = 1;
				HUD::REQUEST_ADDITIONAL_TEXT("LFI_F", 4);
				*bParam1 = 1;
				break;
			
			case 2:
				iLocal_45 = 2;
				HUD::REQUEST_ADDITIONAL_TEXT("LFI_T", 4);
				*bParam1 = 1;
				break;
		}
		iLocal_47 = 0;
		func_549(iLocal_45, iLocal_47);
	}
	else
	{
		func_505(iParam0, 0);
	}
}

void func_505(int iParam0, int iParam1)//Position - 0x3E94A
{
	if (iLocal_45 != iLocal_46 || iParam1 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_542(iParam0);
		func_541(iParam0);
		if (func_540(iLocal_45))
		{
			switch (iLocal_47)
			{
				case 0:
					func_526(iParam0);
					break;
				
				case 1:
					func_523(iParam0);
					break;
				
				case 2:
					func_521(iParam0);
					break;
			}
			func_506(iParam0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iLocal_46 = iLocal_45;
	}
}

void func_506(int iParam0)//Position - 0x3E9D8
{
	struct<2> Var0;
	struct<2> Var4;
	char cVar8[16];
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar13 = iLocal_48;
	iVar14 = 0;
	while (iVar14 <= 2)
	{
		if (!func_520(iLocal_45))
		{
			switch (iVar14)
			{
				case 0:
					StringCopy(&Var0, "LFI_FAMILY", 16);
					Var4 = { func_518(func_519(iLocal_45)) };
					cVar8 = { func_517(func_519(iLocal_45)) };
					iVar12 = func_516(iLocal_45);
					break;
				
				case 1:
					StringCopy(&Var0, "LFI_FRIENDS", 16);
					Var4 = { func_518(func_515(iLocal_45)) };
					cVar8 = { func_517(func_515(iLocal_45)) };
					iVar12 = func_511(iLocal_45);
					break;
				
				case 2:
					StringCopy(&Var0, "LFI_STALKING", 16);
					Var4 = { func_518(func_510(iLocal_45)) };
					cVar8 = { func_517(func_510(iLocal_45)) };
					iVar12 = func_508(iLocal_45);
					break;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726(&Var0);
			GlobalFunc_726(&Var4);
			GlobalFunc_2047(&cVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			switch (iVar14)
			{
				case 0:
					Var0 = { func_507(iLocal_45) };
					Var4 = { func_518(func_519(iLocal_45)) };
					cVar8 = { func_517(func_519(iLocal_45)) };
					iVar12 = 0;
					break;
				
				case 1:
					StringCopy(&Var0, "", 16);
					Var4 = { func_518(func_515(iLocal_45)) };
					cVar8 = { func_517(func_515(iLocal_45)) };
					iVar12 = 0;
					break;
				
				case 2:
					StringCopy(&Var0, "", 16);
					Var4 = { func_518(func_510(iLocal_45)) };
					cVar8 = { func_517(func_510(iLocal_45)) };
					iVar12 = 0;
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(&Var4, "LFI_UNKNOWN"))
			{
				StringCopy(&Var4, "", 16);
			}
			if (MISC::ARE_STRINGS_EQUAL(&cVar8, "BLANK"))
			{
				StringCopy(&cVar8, "", 16);
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726(&Var0);
			GlobalFunc_726(&Var4);
			GlobalFunc_2047(&cVar8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar13++;
		iVar14++;
	}
}

struct<4> func_507(int iParam0)//Position - 0x3EBCB
{
	struct<4> Var0;
	
	StringCopy(&Var0, "LFI_", 16);
	switch (iParam0)
	{
		case 10:
			StringConCat(&Var0, "REDWOODCNT", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "SPRUNKCNT", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "FEUDCNT", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "INKCNT", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "HKCNT", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "LSCCNT", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "LUDENCNT", 16);
			break;
		
		default:
			StringConCat(&Var0, "UNKNOWN", 16);
			break;
	}
	return Var0;
}

int func_508(int iParam0)//Position - 0x3EC71
{
	return func_509(iParam0);
}

int func_509(int iParam0)//Position - 0x3EC7F
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 5;
			break;
		
		case 77:
			return 3;
			break;
		
		case 78:
			return 2;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 2;
			break;
		
		case 80:
			return 1;
			break;
		
		case 81:
			return 2;
			break;
		
		case 82:
			return 2;
			break;
		
		case 83:
			return 2;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 2;
			break;
		
		case 86:
			return 2;
			break;
		
		case 87:
			return 2;
			break;
		
		case 104:
			return 2;
			break;
		
		case 105:
			return 1;
			break;
		
		case 106:
			return 1;
			break;
		
		case 107:
			return 1;
			break;
		
		case 108:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 2;
			break;
		
		case 6:
			return 2;
			break;
		
		case 7:
			return 2;
			break;
		
		case 8:
			return 2;
			break;
		
		case 9:
			return 2;
			break;
		
		case 10:
			return 1;
			break;
		
		case 2:
			return 1;
			break;
		
		case 197:
			return 2;
			break;
		
		case 198:
			return 2;
			break;
		
		case 199:
			return 1;
			break;
	}
	return 0;
}

int func_510(int iParam0)//Position - 0x3EE15
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 3:
			return 196;
			break;
		
		case 4:
			return 194;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 72;
			break;
		
		case 7:
			return 73;
			break;
		
		case 8:
			return 71;
			break;
		
		case 9:
			return 74;
			break;
		
		case 10:
			return 55;
			break;
		
		case 1:
			return 108;
			break;
		
		case 77:
			return 104;
			break;
		
		case 78:
			return 193;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 194;
			break;
		
		case 80:
			return 189;
			break;
		
		case 81:
			return 104;
			break;
		
		case 82:
			return 195;
			break;
		
		case 83:
			return 194;
			break;
		
		case 84:
			return 192;
			break;
		
		case 85:
			return 196;
			break;
		
		case 86:
			return 196;
			break;
		
		case 87:
			return 104;
			break;
		
		case 104:
			return 81;
			break;
		
		case 105:
			return 168;
			break;
		
		case 106:
			return 170;
			break;
		
		case 107:
			return 180;
			break;
		
		case 108:
			return 185;
			break;
		
		case 2:
			return 199;
			break;
		
		case 197:
			return 208;
			break;
		
		case 198:
			return 209;
			break;
	}
	return 211;
}

int func_511(int iParam0)//Position - 0x3EFBC
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 5;
			if (GlobalFunc_230(44))
			{
				iVar0++;
			}
			if (GlobalFunc_5600(21, 7))
			{
				iVar0++;
			}
			return iVar0;
			break;
		
		case 3:
			return 443;
			break;
		
		case 4:
			return 152;
			break;
		
		case 5:
			return 217;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 63;
			break;
		
		case 8:
			return 91;
			break;
		
		case 9:
			return 126;
			break;
		
		case 10:
			return 1000;
			break;
		
		case 1:
			iVar0 = 14;
			if (GlobalFunc_5600(17, 7))
			{
				iVar0++;
			}
			if (GlobalFunc_5600(46, 7))
			{
				iVar0++;
			}
			if (GlobalFunc_230(8))
			{
				iVar0++;
			}
			return iVar0;
			break;
		
		case 77:
			return 107;
			break;
		
		case 78:
			return 84;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 53;
			break;
		
		case 80:
			return 126;
			break;
		
		case 81:
			return 78;
			break;
		
		case 82:
			return 239;
			break;
		
		case 83:
			return 182;
			break;
		
		case 84:
			return 32;
			break;
		
		case 85:
			return 68;
			break;
		
		case 86:
			return 1648;
			break;
		
		case 87:
			return 131;
			break;
		
		case 104:
			return 1000;
			break;
		
		case 105:
			return 1000;
			break;
		
		case 107:
			return 1000;
			break;
		
		case 106:
			return 1000;
			break;
		
		case 108:
			return 1000;
			break;
		
		case 2:
			return 2;
			break;
		
		case 197:
			return 14;
			break;
		
		case 198:
			return 32;
			break;
		
		case 199:
			return 1000;
			break;
	}
	return -1;
}




int func_515(int iParam0)//Position - 0x3F2C5
{
	switch (iParam0)
	{
		case 0:
			return 9;
			break;
		
		case 3:
			return 13;
			break;
		
		case 4:
			return 19;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 35;
			break;
		
		case 7:
			return 41;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 45;
			break;
		
		case 10:
			return 52;
			break;
		
		case 1:
			return 77;
			break;
		
		case 77:
			return 1;
			break;
		
		case 78:
			return 119;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 77;
			break;
		
		case 80:
			return 130;
			break;
		
		case 81:
			return 87;
			break;
		
		case 82:
			return 1;
			break;
		
		case 83:
			return 77;
			break;
		
		case 84:
			return 138;
			break;
		
		case 85:
			return 142;
			break;
		
		case 86:
			return 143;
			break;
		
		case 87:
			return 77;
			break;
		
		case 104:
			return 87;
			break;
		
		case 105:
			return 169;
			break;
		
		case 106:
			return 172;
			break;
		
		case 107:
			return 175;
			break;
		
		case 108:
			return 186;
			break;
		
		case 2:
			return 198;
			break;
		
		case 197:
			return 2;
			break;
		
		case 198:
			return 204;
			break;
	}
	return 211;
}

int func_516(int iParam0)//Position - 0x3F469
{
	switch (iParam0)
	{
		case 0:
			return 3;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 3;
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
		
		case 1:
			return 5;
			break;
		
		case 77:
			return 0;
			break;
		
		case 78:
			return 2;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 0;
			break;
		
		case 80:
			return 2;
			break;
		
		case 81:
			return 0;
			break;
		
		case 82:
			return 0;
			break;
		
		case 83:
			return 2;
			break;
		
		case 84:
			return 0;
			break;
		
		case 85:
			return 1;
			break;
		
		case 86:
			return 0;
			break;
		
		case 87:
			return 1;
			break;
		
		case 2:
			return 0;
			break;
		
		case 197:
			return 0;
			break;
		
		case 198:
			return 1;
			break;
	}
	return -1;
}

struct<4> func_517(int iParam0)//Position - 0x3F5A4
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SMALL_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "164", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "165", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "166", 16);
			break;
		
		case 5:
			StringConCat(&Var0, "167", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "168", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "169", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "170", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "171", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "172", 16);
			break;
		
		case 11:
			StringConCat(&Var0, "91", 16);
			break;
		
		case 12:
			StringConCat(&Var0, "92", 16);
			break;
		
		case 13:
			StringConCat(&Var0, "93", 16);
			break;
		
		case 14:
			StringConCat(&Var0, "94", 16);
			break;
		
		case 15:
			StringConCat(&Var0, "95", 16);
			break;
		
		case 16:
			StringConCat(&Var0, "96", 16);
			break;
		
		case 17:
			StringConCat(&Var0, "97", 16);
			break;
		
		case 18:
			StringConCat(&Var0, "98", 16);
			break;
		
		case 19:
			StringConCat(&Var0, "99", 16);
			break;
		
		case 20:
			StringConCat(&Var0, "100", 16);
			break;
		
		case 21:
			StringConCat(&Var0, "101", 16);
			break;
		
		case 22:
			StringConCat(&Var0, "102", 16);
			break;
		
		case 23:
			StringConCat(&Var0, "103", 16);
			break;
		
		case 24:
			StringConCat(&Var0, "104", 16);
			break;
		
		case 25:
			StringConCat(&Var0, "105", 16);
			break;
		
		case 26:
			StringConCat(&Var0, "106", 16);
			break;
		
		case 27:
			StringConCat(&Var0, "107", 16);
			break;
		
		case 28:
			StringConCat(&Var0, "108", 16);
			break;
		
		case 29:
			StringConCat(&Var0, "109", 16);
			break;
		
		case 30:
			StringConCat(&Var0, "110", 16);
			break;
		
		case 31:
			StringConCat(&Var0, "111", 16);
			break;
		
		case 32:
			StringConCat(&Var0, "112", 16);
			break;
		
		case 33:
			StringConCat(&Var0, "113", 16);
			break;
		
		case 34:
			StringConCat(&Var0, "114", 16);
			break;
		
		case 35:
			StringConCat(&Var0, "115", 16);
			break;
		
		case 36:
			StringConCat(&Var0, "116", 16);
			break;
		
		case 37:
			StringConCat(&Var0, "117", 16);
			break;
		
		case 38:
			StringConCat(&Var0, "118", 16);
			break;
		
		case 39:
			StringConCat(&Var0, "119", 16);
			break;
		
		case 40:
			StringConCat(&Var0, "120", 16);
			break;
		
		case 41:
			StringConCat(&Var0, "121", 16);
			break;
		
		case 42:
			StringConCat(&Var0, "142", 16);
			break;
		
		case 43:
			StringConCat(&Var0, "122", 16);
			break;
		
		case 44:
			StringConCat(&Var0, "123", 16);
			break;
		
		case 45:
			StringConCat(&Var0, "124", 16);
			break;
		
		case 46:
			StringConCat(&Var0, "125", 16);
			break;
		
		case 47:
			StringConCat(&Var0, "126", 16);
			break;
		
		case 48:
			StringConCat(&Var0, "127", 16);
			break;
		
		case 49:
			StringConCat(&Var0, "128", 16);
			break;
		
		case 50:
			StringConCat(&Var0, "129", 16);
			break;
		
		case 51:
			StringConCat(&Var0, "130", 16);
			break;
		
		case 52:
			StringConCat(&Var0, "131", 16);
			break;
		
		case 53:
			StringConCat(&Var0, "132", 16);
			break;
		
		case 54:
			StringConCat(&Var0, "133", 16);
			break;
		
		case 55:
			StringConCat(&Var0, "134", 16);
			break;
		
		case 56:
			StringConCat(&Var0, "141", 16);
			break;
		
		case 66:
			StringConCat(&Var0, "182", 16);
			break;
		
		case 67:
			StringConCat(&Var0, "183", 16);
			break;
		
		case 68:
			StringConCat(&Var0, "184", 16);
			break;
		
		case 69:
			StringConCat(&Var0, "185", 16);
			break;
		
		case 70:
			StringConCat(&Var0, "186", 16);
			break;
		
		case 71:
			StringConCat(&Var0, "137", 16);
			break;
		
		case 72:
			StringConCat(&Var0, "138", 16);
			break;
		
		case 73:
			StringConCat(&Var0, "139", 16);
			break;
		
		case 74:
			StringConCat(&Var0, "140", 16);
			break;
		
		case 75:
			StringConCat(&Var0, "187", 16);
			break;
		
		case 196:
			StringConCat(&Var0, "85", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "143", 16);
			break;
		
		case 77:
			StringConCat(&Var0, "144", 16);
			break;
		
		case 78:
			StringConCat(&Var0, "145", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringConCat(&Var0, "146", 16);
			break;
		
		case 80:
			StringConCat(&Var0, "147", 16);
			break;
		
		case 81:
			StringConCat(&Var0, "148", 16);
			break;
		
		case 82:
			StringConCat(&Var0, "149", 16);
			break;
		
		case 83:
			StringConCat(&Var0, "150", 16);
			break;
		
		case 84:
			StringConCat(&Var0, "151", 16);
			break;
		
		case 85:
			StringConCat(&Var0, "152", 16);
			break;
		
		case 86:
			StringConCat(&Var0, "153", 16);
			break;
		
		case 87:
			StringConCat(&Var0, "154", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "155", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "156", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "157", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "158", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "159", 16);
			break;
		
		case 109:
			StringConCat(&Var0, "1", 16);
			break;
		
		case 110:
			StringConCat(&Var0, "2", 16);
			break;
		
		case 111:
			StringConCat(&Var0, "3", 16);
			break;
		
		case 112:
			StringConCat(&Var0, "4", 16);
			break;
		
		case 113:
			StringConCat(&Var0, "5", 16);
			break;
		
		case 114:
			StringConCat(&Var0, "6", 16);
			break;
		
		case 115:
			StringConCat(&Var0, "7", 16);
			break;
		
		case 116:
			StringConCat(&Var0, "8", 16);
			break;
		
		case 117:
			StringConCat(&Var0, "9", 16);
			break;
		
		case 118:
			StringConCat(&Var0, "10", 16);
			break;
		
		case 119:
			StringConCat(&Var0, "11", 16);
			break;
		
		case 120:
			StringConCat(&Var0, "12", 16);
			break;
		
		case 121:
			StringConCat(&Var0, "13", 16);
			break;
		
		case 122:
			StringConCat(&Var0, "39", 16);
			break;
		
		case 123:
			StringConCat(&Var0, "14", 16);
			break;
		
		case 124:
			StringConCat(&Var0, "15", 16);
			break;
		
		case 125:
			StringConCat(&Var0, "31", 16);
			break;
		
		case 126:
			StringConCat(&Var0, "16", 16);
			break;
		
		case 127:
			StringConCat(&Var0, "17", 16);
			break;
		
		case 128:
			StringConCat(&Var0, "18", 16);
			break;
		
		case 129:
			StringConCat(&Var0, "19", 16);
			break;
		
		case 130:
			StringConCat(&Var0, "20", 16);
			break;
		
		case 131:
			StringConCat(&Var0, "21", 16);
			break;
		
		case 132:
			StringConCat(&Var0, "22", 16);
			break;
		
		case 133:
			StringConCat(&Var0, "23", 16);
			break;
		
		case 134:
			StringConCat(&Var0, "24", 16);
			break;
		
		case 135:
			StringConCat(&Var0, "25", 16);
			break;
		
		case 136:
			StringConCat(&Var0, "26", 16);
			break;
		
		case 137:
			StringConCat(&Var0, "27", 16);
			break;
		
		case 138:
			StringConCat(&Var0, "28", 16);
			break;
		
		case 139:
			StringConCat(&Var0, "29", 16);
			break;
		
		case 140:
			StringConCat(&Var0, "30", 16);
			break;
		
		case 141:
			StringConCat(&Var0, "32", 16);
			break;
		
		case 142:
			StringConCat(&Var0, "33", 16);
			break;
		
		case 143:
			StringConCat(&Var0, "34", 16);
			break;
		
		case 144:
			StringConCat(&Var0, "35", 16);
			break;
		
		case 145:
			StringConCat(&Var0, "36", 16);
			break;
		
		case 146:
			StringConCat(&Var0, "37", 16);
			break;
		
		case 147:
			StringConCat(&Var0, "38", 16);
			break;
		
		case 148:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 149:
			StringConCat(&Var0, "40", 16);
			break;
		
		case 150:
			StringConCat(&Var0, "42", 16);
			break;
		
		case 151:
			StringConCat(&Var0, "43", 16);
			break;
		
		case 152:
			StringConCat(&Var0, "44", 16);
			break;
		
		case 153:
			StringConCat(&Var0, "45", 16);
			break;
		
		case 154:
			StringConCat(&Var0, "46", 16);
			break;
		
		case 155:
			StringConCat(&Var0, "47", 16);
			break;
		
		case 156:
			StringConCat(&Var0, "48", 16);
			break;
		
		case 157:
			StringConCat(&Var0, "49", 16);
			break;
		
		case 158:
			StringConCat(&Var0, "50", 16);
			break;
		
		case 159:
			StringConCat(&Var0, "51", 16);
			break;
		
		case 160:
			StringConCat(&Var0, "52", 16);
			break;
		
		case 161:
			StringConCat(&Var0, "53", 16);
			break;
		
		case 162:
			StringConCat(&Var0, "54", 16);
			break;
		
		case 163:
			StringConCat(&Var0, "55", 16);
			break;
		
		case 164:
			StringConCat(&Var0, "56", 16);
			break;
		
		case 165:
			StringConCat(&Var0, "57", 16);
			break;
		
		case 166:
			StringConCat(&Var0, "58", 16);
			break;
		
		case 167:
			StringConCat(&Var0, "59", 16);
			break;
		
		case 168:
			StringConCat(&Var0, "60", 16);
			break;
		
		case 169:
			StringConCat(&Var0, "61", 16);
			break;
		
		case 170:
			StringConCat(&Var0, "62", 16);
			break;
		
		case 171:
			StringConCat(&Var0, "63", 16);
			break;
		
		case 172:
			StringConCat(&Var0, "64", 16);
			break;
		
		case 173:
			StringConCat(&Var0, "65", 16);
			break;
		
		case 174:
			StringConCat(&Var0, "66", 16);
			break;
		
		case 175:
			StringConCat(&Var0, "67", 16);
			break;
		
		case 176:
			StringConCat(&Var0, "68", 16);
			break;
		
		case 177:
			StringConCat(&Var0, "69", 16);
			break;
		
		case 178:
			StringConCat(&Var0, "70", 16);
			break;
		
		case 179:
			StringConCat(&Var0, "71", 16);
			break;
		
		case 180:
			StringConCat(&Var0, "72", 16);
			break;
		
		case 181:
			StringConCat(&Var0, "73", 16);
			break;
		
		case 182:
			StringConCat(&Var0, "74", 16);
			break;
		
		case 183:
			StringConCat(&Var0, "75", 16);
			break;
		
		case 184:
			StringConCat(&Var0, "76", 16);
			break;
		
		case 185:
			StringConCat(&Var0, "77", 16);
			break;
		
		case 186:
			StringConCat(&Var0, "78", 16);
			break;
		
		case 187:
			StringConCat(&Var0, "79", 16);
			break;
		
		case 188:
			StringConCat(&Var0, "174", 16);
			break;
		
		case 189:
			StringConCat(&Var0, "175", 16);
			break;
		
		case 190:
			StringConCat(&Var0, "176", 16);
			break;
		
		case 191:
			StringConCat(&Var0, "177", 16);
			break;
		
		case 192:
			StringConCat(&Var0, "178", 16);
			break;
		
		case 193:
			StringConCat(&Var0, "81", 16);
			break;
		
		case 194:
			StringConCat(&Var0, "82", 16);
			break;
		
		case 195:
			StringConCat(&Var0, "83", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "160", 16);
			break;
		
		case 197:
			StringConCat(&Var0, "161", 16);
			break;
		
		case 198:
			StringConCat(&Var0, "162", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "163", 16);
			break;
		
		case 200:
			StringConCat(&Var0, "86", 16);
			break;
		
		case 201:
			StringConCat(&Var0, "87", 16);
			break;
		
		case 202:
			StringConCat(&Var0, "88", 16);
			break;
		
		case 203:
			StringConCat(&Var0, "89", 16);
			break;
		
		case 204:
			StringConCat(&Var0, "90", 16);
			break;
		
		case 76:
			StringConCat(&Var0, "181", 16);
			break;
		
		case 208:
			StringConCat(&Var0, "180", 16);
			break;
		
		case 209:
			StringConCat(&Var0, "179", 16);
			break;
		
		case 210:
			StringConCat(&Var0, "80", 16);
			break;
		
		default:
			StringCopy(&Var0, "BLANK", 16);
			break;
	}
	return Var0;
}

struct<4> func_518(int iParam0)//Position - 0x402A7
{
	struct<4> Var0;
	
	StringCopy(&Var0, "LFI_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "MISA", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "TRSA", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "JISA", 16);
			break;
		
		case 5:
			StringConCat(&Var0, "AMSA", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "LECE", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "MAQU", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "HADU", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "KYCH", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "REDW", 16);
			break;
		
		case 11:
			StringConCat(&Var0, "FRSL", 16);
			break;
		
		case 12:
			StringConCat(&Var0, "RADA", 16);
			break;
		
		case 13:
			StringConCat(&Var0, "LADE", 16);
			break;
		
		case 14:
			StringConCat(&Var0, "FOMA", 16);
			break;
		
		case 15:
			StringConCat(&Var0, "BRYO", 16);
			break;
		
		case 16:
			StringConCat(&Var0, "KITR", 16);
			break;
		
		case 17:
			StringConCat(&Var0, "LIWA", 16);
			break;
		
		case 18:
			StringConCat(&Var0, "IAKE", 16);
			break;
		
		case 19:
			StringConCat(&Var0, "AHWA", 16);
			break;
		
		case 20:
			StringConCat(&Var0, "RYBE", 16);
			break;
		
		case 21:
			StringConCat(&Var0, "COEA", 16);
			break;
		
		case 22:
			StringConCat(&Var0, "EVAR", 16);
			break;
		
		case 23:
			StringConCat(&Var0, "ROCO", 16);
			break;
		
		case 24:
			StringConCat(&Var0, "JAWA", 16);
			break;
		
		case 25:
			StringConCat(&Var0, "AMTU", 16);
			break;
		
		case 26:
			StringConCat(&Var0, "FALA", 16);
			break;
		
		case 27:
			StringConCat(&Var0, "LIBA", 16);
			break;
		
		case 28:
			StringConCat(&Var0, "DRST", 16);
			break;
		
		case 29:
			StringConCat(&Var0, "KEBA", 16);
			break;
		
		case 30:
			StringConCat(&Var0, "PEKE", 16);
			break;
		
		case 31:
			StringConCat(&Var0, "SACA", 16);
			break;
		
		case 32:
			StringConCat(&Var0, "FILA", 16);
			break;
		
		case 33:
			StringConCat(&Var0, "CHMA", 16);
			break;
		
		case 34:
			StringConCat(&Var0, "GURO", 16);
			break;
		
		case 35:
			StringConCat(&Var0, "MALE", 16);
			break;
		
		case 36:
			StringConCat(&Var0, "KASU", 16);
			break;
		
		case 37:
			StringConCat(&Var0, "NIHA", 16);
			break;
		
		case 38:
			StringConCat(&Var0, "GIHE", 16);
			break;
		
		case 39:
			StringConCat(&Var0, "DRWE", 16);
			break;
		
		case 40:
			StringConCat(&Var0, "JOAU", 16);
			break;
		
		case 41:
			StringConCat(&Var0, "RITR", 16);
			break;
		
		case 42:
			StringConCat(&Var0, "MOTR", 16);
			break;
		
		case 43:
			StringConCat(&Var0, "MEDU", 16);
			break;
		
		case 44:
			StringConCat(&Var0, "JAOH", 16);
			break;
		
		case 45:
			StringConCat(&Var0, "REPO", 16);
			break;
		
		case 46:
			StringConCat(&Var0, "DESP", 16);
			break;
		
		case 47:
			StringConCat(&Var0, "ALDE", 16);
			break;
		
		case 48:
			StringConCat(&Var0, "SUCH", 16);
			break;
		
		case 49:
			StringConCat(&Var0, "ALTI", 16);
			break;
		
		case 50:
			StringConCat(&Var0, "BIPE", 16);
			break;
		
		case 51:
			StringConCat(&Var0, "LIMA", 16);
			break;
		
		case 52:
			StringConCat(&Var0, "KERU", 16);
			break;
		
		case 53:
			StringConCat(&Var0, "BRMO", 16);
			break;
		
		case 54:
			StringConCat(&Var0, "GEKI", 16);
			break;
		
		case 55:
			StringConCat(&Var0, "GEHU", 16);
			break;
		
		case 56:
			StringConCat(&Var0, "GASC", 16);
			break;
		
		case 66:
			StringConCat(&Var0, "FASH", 16);
			break;
		
		case 67:
			StringConCat(&Var0, "RISL", 16);
			break;
		
		case 68:
			StringConCat(&Var0, "GAFO", 16);
			break;
		
		case 69:
			StringConCat(&Var0, "PECY", 16);
			break;
		
		case 70:
			StringConCat(&Var0, "PRLP", 16);
			break;
		
		case 71:
			StringConCat(&Var0, "LOSA", 16);
			break;
		
		case 72:
			StringConCat(&Var0, "FACA", 16);
			break;
		
		case 73:
			StringConCat(&Var0, "EGCH", 16);
			break;
		
		case 74:
			StringConCat(&Var0, "HEAT", 16);
			break;
		
		case 75:
			StringConCat(&Var0, "PEND", 16);
			break;
		
		case 76:
			StringConCat(&Var0, "AMMU", 16);
			break;
		
		case 57:
			StringConCat(&Var0, "TRSA_CNT", 16);
			break;
		
		case 58:
			StringConCat(&Var0, "JISA_CNT", 16);
			break;
		
		case 59:
			StringConCat(&Var0, "AMSA_CNT", 16);
			break;
		
		case 60:
			StringConCat(&Var0, "LECE_CNT", 16);
			break;
		
		case 61:
			StringConCat(&Var0, "MAQU_CNT", 16);
			break;
		
		case 62:
			StringConCat(&Var0, "HADU_CNT", 16);
			break;
		
		case 63:
			StringConCat(&Var0, "KYCH_CNT", 16);
			break;
		
		case 64:
			StringConCat(&Var0, "REDW_CNT", 16);
			break;
		
		case 65:
			StringConCat(&Var0, "BUGS_CNT", 16);
			break;
	}
	switch (iParam0)
	{
		case 1:
			StringConCat(&Var0, "FRCL", 16);
			break;
		
		case 77:
			StringConCat(&Var0, "LADA", 16);
			break;
		
		case 78:
			StringConCat(&Var0, "SIYE", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringConCat(&Var0, "TOWI", 16);
			break;
		
		case 80:
			StringConCat(&Var0, "DECL", 16);
			break;
		
		case 81:
			StringConCat(&Var0, "HAJO", 16);
			break;
		
		case 82:
			StringConCat(&Var0, "TAJA", 16);
			break;
		
		case 83:
			StringConCat(&Var0, "TACL", 16);
			break;
		
		case 84:
			StringConCat(&Var0, "DOBE", 16);
			break;
		
		case 85:
			StringConCat(&Var0, "BEFE", 16);
			break;
		
		case 86:
			StringConCat(&Var0, "DEWE", 16);
			break;
		
		case 87:
			StringConCat(&Var0, "DEBR", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "FEUD", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "SPK", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "INK", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "HEKU", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "LSCU", 16);
			break;
		
		case 109:
			StringConCat(&Var0, "ANBA", 16);
			break;
		
		case 110:
			StringConCat(&Var0, "NIBE", 16);
			break;
		
		case 111:
			StringConCat(&Var0, "JARE", 16);
			break;
		
		case 112:
			StringConCat(&Var0, "JBBR", 16);
			break;
		
		case 113:
			StringConCat(&Var0, "DAKN", 16);
			break;
		
		case 114:
			StringConCat(&Var0, "DAEL", 16);
			break;
		
		case 115:
			StringConCat(&Var0, "LEVA", 16);
			break;
		
		case 116:
			StringConCat(&Var0, "GEG", 16);
			break;
		
		case 117:
			StringConCat(&Var0, "OWYA", 16);
			break;
		
		case 118:
			StringConCat(&Var0, "BAWA", 16);
			break;
		
		case 119:
			StringConCat(&Var0, "ANHO", 16);
			break;
		
		case 120:
			StringConCat(&Var0, "YETA", 16);
			break;
		
		case 121:
			StringConCat(&Var0, "SAYE", 16);
			break;
		
		case 122:
			StringConCat(&Var0, "TYFI", 16);
			break;
		
		case 123:
			StringConCat(&Var0, "KENE", 16);
			break;
		
		case 124:
			StringConCat(&Var0, "SHMI", 16);
			break;
		
		case 125:
			StringConCat(&Var0, "MAFO", 16);
			break;
		
		case 126:
			StringConCat(&Var0, "CODA", 16);
			break;
		
		case 127:
			StringConCat(&Var0, "NIBR", 16);
			break;
		
		case 128:
			StringConCat(&Var0, "LAWH", 16);
			break;
		
		case 129:
			StringConCat(&Var0, "MAHO", 16);
			break;
		
		case 130:
			StringConCat(&Var0, "MAAN", 16);
			break;
		
		case 131:
			StringConCat(&Var0, "JUPO", 16);
			break;
		
		case 132:
			StringConCat(&Var0, "PIEG", 16);
			break;
		
		case 133:
			StringConCat(&Var0, "RESI", 16);
			break;
		
		case 134:
			StringConCat(&Var0, "LEYA", 16);
			break;
		
		case 135:
			StringConCat(&Var0, "CAWE", 16);
			break;
		
		case 136:
			StringConCat(&Var0, "MOAL", 16);
			break;
		
		case 137:
			StringConCat(&Var0, "GAHI", 16);
			break;
		
		case 138:
			StringConCat(&Var0, "JECH", 16);
			break;
		
		case 139:
			StringConCat(&Var0, "KALI", 16);
			break;
		
		case 140:
			StringConCat(&Var0, "MAPE", 16);
			break;
		
		case 141:
			StringConCat(&Var0, "ALFE", 16);
			break;
		
		case 142:
			StringConCat(&Var0, "RAGO", 16);
			break;
		
		case 143:
			StringConCat(&Var0, "RANA", 16);
			break;
		
		case 144:
			StringConCat(&Var0, "SIHA", 16);
			break;
		
		case 145:
			StringConCat(&Var0, "MOSC", 16);
			break;
		
		case 146:
			StringConCat(&Var0, "DEME", 16);
			break;
		
		case 147:
			StringConCat(&Var0, "HABR", 16);
			break;
		
		case 148:
			StringConCat(&Var0, "ERDU", 16);
			break;
		
		case 149:
			StringConCat(&Var0, "GRRA", 16);
			break;
		
		case 150:
			StringConCat(&Var0, "NEWE", 16);
			break;
		
		case 151:
			StringConCat(&Var0, "MOFE", 16);
			break;
		
		case 152:
			StringConCat(&Var0, "JASA", 16);
			break;
		
		case 153:
			StringConCat(&Var0, "ADHO", 16);
			break;
		
		case 154:
			StringConCat(&Var0, "KARA", 16);
			break;
		
		case 155:
			StringConCat(&Var0, "TABU", 16);
			break;
		
		case 156:
			StringConCat(&Var0, "TRMA", 16);
			break;
		
		case 157:
			StringConCat(&Var0, "LOGI", 16);
			break;
		
		case 158:
			StringConCat(&Var0, "REWE", 16);
			break;
		
		case 159:
			StringConCat(&Var0, "REMI", 16);
			break;
		
		case 160:
			StringConCat(&Var0, "ANPO", 16);
			break;
		
		case 161:
			StringConCat(&Var0, "BECO", 16);
			break;
		
		case 162:
			StringConCat(&Var0, "STLA", 16);
			break;
		
		case 163:
			StringConCat(&Var0, "SAPR", 16);
			break;
		
		case 164:
			StringConCat(&Var0, "DAST", 16);
			break;
		
		case 165:
			StringConCat(&Var0, "PAOH", 16);
			break;
		
		case 166:
			StringConCat(&Var0, "KAMO", 16);
			break;
		
		case 167:
			StringConCat(&Var0, "JOWA", 16);
			break;
		
		case 168:
			StringConCat(&Var0, "VIHA", 16);
			break;
		
		case 169:
			StringConCat(&Var0, "TORA", 16);
			break;
		
		case 170:
			StringConCat(&Var0, "STWE", 16);
			break;
		
		case 171:
			StringConCat(&Var0, "MIHA", 16);
			break;
		
		case 172:
			StringConCat(&Var0, "HAPR", 16);
			break;
		
		case 173:
			StringConCat(&Var0, "ANWH", 16);
			break;
		
		case 174:
			StringConCat(&Var0, "TAHO", 16);
			break;
		
		case 175:
			StringConCat(&Var0, "DOHE", 16);
			break;
		
		case 176:
			StringConCat(&Var0, "LCWH", 16);
			break;
		
		case 177:
			StringConCat(&Var0, "PHSC", 16);
			break;
		
		case 178:
			StringConCat(&Var0, "JAEL", 16);
			break;
		
		case 179:
			StringConCat(&Var0, "JOHE", 16);
			break;
		
		case 180:
			StringConCat(&Var0, "GECO", 16);
			break;
		
		case 181:
			StringConCat(&Var0, "AAFI", 16);
			break;
		
		case 182:
			StringConCat(&Var0, "COSH", 16);
			break;
		
		case 183:
			StringConCat(&Var0, "POLE", 16);
			break;
		
		case 184:
			StringConCat(&Var0, "HAWA", 16);
			break;
		
		case 185:
			StringConCat(&Var0, "FN_NM_SAWA", 16);
			break;
		
		case 186:
			StringConCat(&Var0, "GAHA", 16);
			break;
		
		case 187:
			StringConCat(&Var0, "HASI", 16);
			break;
		
		case 188:
			StringConCat(&Var0, "PRDE", 16);
			break;
		
		case 189:
			StringConCat(&Var0, "GRTR", 16);
			break;
		
		case 190:
			StringConCat(&Var0, "VANG", 16);
			break;
		
		case 191:
			StringConCat(&Var0, "STST", 16);
			break;
		
		case 192:
			StringConCat(&Var0, "BWSQ", 16);
			break;
		
		case 193:
			StringConCat(&Var0, "CCCK", 16);
			break;
		
		case 194:
			StringConCat(&Var0, "ALCO", 16);
			break;
		
		case 195:
			StringConCat(&Var0, "MXRE", 16);
			break;
		
		case 196:
			StringConCat(&Var0, "STCE", 16);
			break;
		
		case 88:
			StringConCat(&Var0, "LADA_CNT", 16);
			break;
		
		case 89:
			StringConCat(&Var0, "SIYE_CNT", 16);
			break;
		
		case 90:
			StringConCat(&Var0, "TOWI_CNT", 16);
			break;
		
		case 91:
			StringConCat(&Var0, "DECL_CNT", 16);
			break;
		
		case 92:
			StringConCat(&Var0, "HAJO_CNT", 16);
			break;
		
		case 93:
			StringConCat(&Var0, "TAJA_CNT", 16);
			break;
		
		case 94:
			StringConCat(&Var0, "TACL_CNT", 16);
			break;
		
		case 95:
			StringConCat(&Var0, "DOBE_CNT", 16);
			break;
		
		case 96:
			StringConCat(&Var0, "BEFE_CNT", 16);
			break;
		
		case 97:
			StringConCat(&Var0, "DEWE_CNT", 16);
			break;
		
		case 98:
			StringConCat(&Var0, "DEBR_CNT", 16);
			break;
		
		case 99:
			StringConCat(&Var0, "FEUD_CNT", 16);
			break;
		
		case 100:
			StringConCat(&Var0, "SPK_CNT", 16);
			break;
		
		case 101:
			StringConCat(&Var0, "INK_CNT", 16);
			break;
		
		case 102:
			StringConCat(&Var0, "HEKU_CNT", 16);
			break;
		
		case 103:
			StringConCat(&Var0, "LSCU_CNT", 16);
			break;
	}
	switch (iParam0)
	{
		case 2:
			StringConCat(&Var0, "TRPH", 16);
			break;
		
		case 197:
			StringConCat(&Var0, "ROJA", 16);
			break;
		
		case 198:
			StringConCat(&Var0, "WAHE", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "LUDE", 16);
			break;
		
		case 200:
			StringConCat(&Var0, "ASBU", 16);
			break;
		
		case 201:
			StringConCat(&Var0, "CLEW", 16);
			break;
		
		case 202:
			StringConCat(&Var0, "JETI", 16);
			break;
		
		case 203:
			StringConCat(&Var0, "FLHE", 16);
			break;
		
		case 204:
			StringConCat(&Var0, "HATE", 16);
			break;
		
		case 208:
			StringConCat(&Var0, "FAIN", 16);
			break;
		
		case 209:
			StringConCat(&Var0, "BCRC", 16);
			break;
		
		case 205:
			StringConCat(&Var0, "ROJA_CNT", 16);
			break;
		
		case 206:
			StringConCat(&Var0, "WAHE_CNT", 16);
			break;
		
		case 207:
			StringConCat(&Var0, "LUDE_CNT", 16);
			break;
		
		case 210:
			StringConCat(&Var0, "NOFM", 16);
			break;
	}
	if (MISC::ARE_STRINGS_EQUAL(&Var0, "LFI_"))
	{
		StringConCat(&Var0, "UNKNOWN", 16);
	}
	return Var0;
}

int func_519(int iParam0)//Position - 0x411BE
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 210;
			break;
		
		case 7:
			return 42;
			break;
		
		case 8:
			return 43;
			break;
		
		case 9:
			return 48;
			break;
		
		case 10:
			return 0;
			break;
		
		case 1:
			return 80;
			break;
		
		case 77:
			return 210;
			break;
		
		case 78:
			return 121;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 210;
			break;
		
		case 80:
			return 83;
			break;
		
		case 81:
			return 210;
			break;
		
		case 82:
			return 210;
			break;
		
		case 83:
			return 1;
			break;
		
		case 84:
			return 210;
			break;
		
		case 85:
			return 141;
			break;
		
		case 86:
			return 210;
			break;
		
		case 87:
			return 147;
			break;
		
		case 104:
			return 1;
			break;
		
		case 105:
			return 1;
			break;
		
		case 106:
			return 1;
			break;
		
		case 107:
			return 181;
			break;
		
		case 108:
			return 1;
			break;
		
		case 2:
			return 210;
			break;
		
		case 197:
			return 210;
			break;
		
		case 198:
			return 203;
			break;
		
		case 199:
			return 2;
			break;
	}
	return 211;
}

int func_520(int iParam0)//Position - 0x41368
{
	switch (iParam0)
	{
		case 10:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 199:
		case 76:
			return 1;
		
		default:
	}
	return 0;
}

void func_521(int iParam0)//Position - 0x413AC
{
	struct<4> Var0;
	char cVar4[32];
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar8 = 5;
	iVar9 = 1;
	while (iVar9 <= func_509(iLocal_45))
	{
		iVar10 = 1;
		if (iVar10 == 1)
		{
			Var0 = { func_518(func_522(iLocal_45, iVar9)) };
			cVar4 = { func_517(func_522(iLocal_45, iVar9)) };
			iLocal_49[iVar8] = func_522(iLocal_45, iVar9);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726(&Var0);
			GlobalFunc_726("");
			GlobalFunc_2047(&cVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar8++;
		}
		iVar9++;
	}
	iLocal_48 = iVar8;
}

int func_522(int iParam0, int iParam1)//Position - 0x4143F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return 66;
					break;
				
				case 2:
					return 196;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 67;
					break;
				
				case 2:
					return 194;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 1:
					return 68;
					break;
				
				case 2:
					return 71;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					return 192;
					break;
				
				case 2:
					return 72;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 1:
					return 69;
					break;
				
				case 2:
					return 73;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 192;
					break;
				
				case 2:
					return 71;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 1:
					return 70;
					break;
				
				case 2:
					return 74;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 76;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					return 104;
					break;
				
				case 2:
					return 105;
					break;
				
				case 3:
					return 106;
					break;
				
				case 4:
					return 107;
					break;
				
				case 5:
					return 108;
					break;
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 1:
					return 104;
					break;
				
				case 2:
					return 106;
					break;
				
				case 3:
					return 108;
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 1:
					return 188;
					break;
				
				case 2:
					return 193;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 1:
					return 106;
					break;
				
				case 2:
					return 194;
					break;
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 1:
					return 189;
					break;
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 1:
					return 104;
					break;
				
				case 2:
					return 106;
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 1:
					return 190;
					break;
				
				case 2:
					return 195;
					break;
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 1:
					return 104;
					break;
				
				case 2:
					return 194;
					break;
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 1:
					return 105;
					break;
				
				case 2:
					return 192;
					break;
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 1:
					return 191;
					break;
				
				case 2:
					return 196;
					break;
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 1:
					return 192;
					break;
				
				case 2:
					return 196;
					break;
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 1:
					return 104;
					break;
				
				case 2:
					return 106;
					break;
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 1:
					return 105;
					break;
				
				case 2:
					return 194;
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 1:
					return 192;
					break;
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 1:
					return 107;
					break;
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 1:
					return 106;
					break;
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 1:
					return 105;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					return 199;
					break;
			}
			break;
		
		case 197:
			switch (iParam1)
			{
				case 1:
					return 209;
					break;
				
				case 2:
					return 208;
					break;
			}
			break;
		
		case 198:
			switch (iParam1)
			{
				case 1:
					return 208;
					break;
				
				case 2:
					return 209;
					break;
			}
			break;
		
		case 199:
			switch (iParam1)
			{
				case 1:
					return 76;
					break;
			}
			break;
	}
	return 211;
}

void func_523(int iParam0)//Position - 0x41932
{
	struct<4> Var0;
	char cVar4[32];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar8 = 5;
	iVar9 = 1;
	while (iVar9 <= func_525(iLocal_45))
	{
		iVar10 = 1;
		if (iLocal_45 == 0)
		{
			if (func_524(iLocal_45, iVar9) == 7)
			{
				if (!GlobalFunc_5600(21, 7))
				{
					iVar10 = 0;
				}
			}
			else if (func_524(iLocal_45, iVar9) == 6)
			{
				if (!GlobalFunc_230(44))
				{
					iVar10 = 0;
				}
			}
		}
		else if (iLocal_45 == 1)
		{
			if (func_524(iLocal_45, iVar9) == 84)
			{
				if (!GlobalFunc_5600(17, 7))
				{
					iVar10 = 0;
				}
			}
			else if (func_524(iLocal_45, iVar9) == 85)
			{
				if (!GlobalFunc_5600(46, 7))
				{
					iVar10 = 0;
				}
			}
			else if (func_524(iLocal_45, iVar9) == 86)
			{
				if (!GlobalFunc_230(8))
				{
					iVar10 = 0;
				}
			}
		}
		if (iVar10 == 1)
		{
			Var0 = { func_518(func_524(iLocal_45, iVar9)) };
			cVar4 = { func_517(func_524(iLocal_45, iVar9)) };
			iLocal_49[iVar8] = func_524(iLocal_45, iVar9);
			iVar11 = 1;
			if (iVar9 == func_525(iLocal_45))
			{
				if ((iLocal_45 != 0 && iLocal_45 != 1) && iLocal_45 != 2)
				{
					iVar11 = 0;
				}
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GlobalFunc_726(&Var0);
			GlobalFunc_726("");
			GlobalFunc_2047(&cVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar8++;
		}
		iVar9++;
	}
	iLocal_48 = iVar8;
}

int func_524(int iParam0, int iParam1)//Position - 0x41A8B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 3;
					break;
				
				case 2:
					return 4;
					break;
				
				case 3:
					return 5;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 8;
					break;
				
				case 7:
					return 9;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 4;
					break;
				
				case 3:
					return 5;
					break;
				
				case 4:
					return 11;
					break;
				
				case 5:
					return 12;
					break;
				
				case 6:
					return 13;
					break;
				
				case 7:
					return 14;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 16;
					break;
				
				case 10:
					return 17;
					break;
				
				case 11:
					return 18;
					break;
				
				case 12:
					return 56;
					break;
				
				case 13:
					return 57;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 5;
					break;
				
				case 4:
					return 19;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 21;
					break;
				
				case 7:
					return 22;
					break;
				
				case 8:
					return 23;
					break;
				
				case 9:
					return 24;
					break;
				
				case 10:
					return 25;
					break;
				
				case 11:
					return 58;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 8;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 26;
					break;
				
				case 7:
					return 27;
					break;
				
				case 8:
					return 28;
					break;
				
				case 9:
					return 29;
					break;
				
				case 10:
					return 30;
					break;
				
				case 11:
					return 31;
					break;
				
				case 12:
					return 32;
					break;
				
				case 13:
					return 59;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 60;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 39;
					break;
				
				case 3:
					return 40;
					break;
				
				case 4:
					return 41;
					break;
				
				case 5:
					return 42;
					break;
				
				case 6:
					return 61;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 9;
					break;
				
				case 4:
					return 43;
					break;
				
				case 5:
					return 44;
					break;
				
				case 6:
					return 62;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 8;
					break;
				
				case 4:
					return 45;
					break;
				
				case 5:
					return 46;
					break;
				
				case 6:
					return 47;
					break;
				
				case 7:
					return 48;
					break;
				
				case 8:
					return 49;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 51;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				
				case 2:
					return 52;
					break;
				
				case 3:
					return 53;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 55;
					break;
				
				case 6:
					return 64;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					return 77;
					break;
				
				case 2:
					return 78;
					break;
				
				case 3:
					return 79;
					break;
				
				case 4:
					return 80;
					break;
				
				case 5:
					return 81;
					break;
				
				case 6:
					return 82;
					break;
				
				case 7:
					return 83;
					break;
				
				case 8:
					return 84;
					break;
				
				case 9:
					return 85;
					break;
				
				case 10:
					return 86;
					break;
				
				case 11:
					return 87;
					break;
				
				case 12:
					return 109;
					break;
				
				case 13:
					return 110;
					break;
				
				case 14:
					return 111;
					break;
				
				case 15:
					return 112;
					break;
				
				case 16:
					return 113;
					break;
				
				case 17:
					return 114;
					break;
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 78;
					break;
				
				case 3:
					return 79;
					break;
				
				case 4:
					return 80;
					break;
				
				case 5:
					return 81;
					break;
				
				case 6:
					return 82;
					break;
				
				case 7:
					return 83;
					break;
				
				case 8:
					return 87;
					break;
				
				case 9:
					return 115;
					break;
				
				case 10:
					return 110;
					break;
				
				case 11:
					return 111;
					break;
				
				case 12:
					return 112;
					break;
				
				case 13:
					return 113;
					break;
				
				case 14:
					return 114;
					break;
				
				case 15:
					return 88;
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 117;
					break;
				
				case 4:
					return 118;
					break;
				
				case 5:
					return 119;
					break;
				
				case 6:
					return 120;
					break;
				
				case 7:
					return 121;
					break;
				
				case 8:
					return 89;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 82;
					break;
				
				case 4:
					return 81;
					break;
				
				case 5:
					return 87;
					break;
				
				case 6:
					return 112;
					break;
				
				case 7:
					return 123;
					break;
				
				case 8:
					return 124;
					break;
				
				case 9:
					return 126;
					break;
				
				case 10:
					return 127;
					break;
				
				case 11:
					return 128;
					break;
				
				case 12:
					return 90;
					break;
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 82;
					break;
				
				case 4:
					return 83;
					break;
				
				case 5:
					return 130;
					break;
				
				case 6:
					return 129;
					break;
				
				case 7:
					return 131;
					break;
				
				case 8:
					return 132;
					break;
				
				case 9:
					return 91;
					break;
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 82;
					break;
				
				case 4:
					return 83;
					break;
				
				case 5:
					return 79;
					break;
				
				case 6:
					return 87;
					break;
				
				case 7:
					return 113;
					break;
				
				case 8:
					return 112;
					break;
				
				case 9:
					return 133;
					break;
				
				case 10:
					return 92;
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 79;
					break;
				
				case 4:
					return 81;
					break;
				
				case 5:
					return 87;
					break;
				
				case 6:
					return 83;
					break;
				
				case 7:
					return 80;
					break;
				
				case 8:
					return 134;
					break;
				
				case 9:
					return 135;
					break;
				
				case 10:
					return 136;
					break;
				
				case 11:
					return 114;
					break;
				
				case 12:
					return 127;
					break;
				
				case 13:
					return 128;
					break;
				
				case 14:
					return 93;
					break;
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 82;
					break;
				
				case 4:
					return 81;
					break;
				
				case 5:
					return 87;
					break;
				
				case 6:
					return 80;
					break;
				
				case 7:
					return 110;
					break;
				
				case 8:
					return 94;
					break;
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 137;
					break;
				
				case 3:
					return 138;
					break;
				
				case 4:
					return 139;
					break;
				
				case 5:
					return 140;
					break;
				
				case 6:
					return 95;
					break;
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 125;
					break;
				
				case 3:
					return 142;
					break;
				
				case 4:
					return 141;
					break;
				
				case 5:
					return 96;
					break;
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 143;
					break;
				
				case 3:
					return 144;
					break;
				
				case 4:
					return 145;
					break;
				
				case 5:
					return 97;
					break;
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 81;
					break;
				
				case 4:
					return 82;
					break;
				
				case 5:
					return 79;
					break;
				
				case 6:
					return 83;
					break;
				
				case 7:
					return 146;
					break;
				
				case 8:
					return 112;
					break;
				
				case 9:
					return 113;
					break;
				
				case 10:
					return 147;
					break;
				
				case 11:
					return 98;
					break;
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 1:
					return 77;
					break;
				
				case 2:
					return 81;
					break;
				
				case 3:
					return 83;
					break;
				
				case 4:
					return 1;
					break;
				
				case 5:
					return 87;
					break;
				
				case 6:
					return 122;
					break;
				
				case 7:
					return 149;
					break;
				
				case 8:
					return 148;
					break;
				
				case 9:
					return 150;
					break;
				
				case 10:
					return 151;
					break;
				
				case 11:
					return 153;
					break;
				
				case 12:
					return 154;
					break;
				
				case 13:
					return 155;
					break;
				
				case 14:
					return 156;
					break;
				
				case 15:
					return 157;
					break;
				
				case 16:
					return 113;
					break;
				
				case 17:
					return 158;
					break;
				
				case 18:
					return 159;
					break;
				
				case 19:
					return 160;
					break;
				
				case 20:
					return 161;
					break;
				
				case 21:
					return 162;
					break;
				
				case 22:
					return 163;
					break;
				
				case 23:
					return 164;
					break;
				
				case 24:
					return 152;
					break;
				
				case 25:
					return 99;
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 84;
					break;
				
				case 3:
					return 165;
					break;
				
				case 4:
					return 166;
					break;
				
				case 5:
					return 167;
					break;
				
				case 6:
					return 168;
					break;
				
				case 7:
					return 169;
					break;
				
				case 8:
					return 100;
					break;
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 87;
					break;
				
				case 3:
					return 81;
					break;
				
				case 4:
					return 79;
					break;
				
				case 5:
					return 171;
					break;
				
				case 6:
					return 172;
					break;
				
				case 7:
					return 173;
					break;
				
				case 8:
					return 174;
					break;
				
				case 9:
					return 170;
					break;
				
				case 10:
					return 101;
					break;
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 175;
					break;
				
				case 3:
					return 176;
					break;
				
				case 4:
					return 177;
					break;
				
				case 5:
					return 178;
					break;
				
				case 6:
					return 179;
					break;
				
				case 7:
					return 180;
					break;
				
				case 8:
					return 181;
					break;
				
				case 9:
					return 182;
					break;
				
				case 10:
					return 102;
					break;
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 183;
					break;
				
				case 4:
					return 184;
					break;
				
				case 5:
					return 185;
					break;
				
				case 6:
					return 186;
					break;
				
				case 7:
					return 187;
					break;
				
				case 8:
					return 103;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					return 197;
					break;
				
				case 2:
					return 198;
					break;
			}
			break;
		
		case 197:
			switch (iParam1)
			{
				case 1:
					return 2;
					break;
				
				case 2:
					return 198;
					break;
				
				case 3:
					return 200;
					break;
				
				case 4:
					return 201;
					break;
				
				case 5:
					return 205;
					break;
			}
			break;
		
		case 198:
			switch (iParam1)
			{
				case 1:
					return 2;
					break;
				
				case 2:
					return 197;
					break;
				
				case 3:
					return 202;
					break;
				
				case 4:
					return 203;
					break;
				
				case 5:
					return 204;
					break;
				
				case 6:
					return 206;
					break;
			}
			break;
		
		case 199:
			switch (iParam1)
			{
				case 1:
					return 2;
					break;
				
				case 2:
					return 207;
					break;
			}
			break;
	}
	return 211;
}

int func_525(int iParam0)//Position - 0x42B7A
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 3:
			return 13;
			break;
		
		case 4:
			return 11;
			break;
		
		case 5:
			return 13;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 6;
			break;
		
		case 9:
			return 11;
			break;
		
		case 10:
			return 6;
			break;
		
		case 1:
			return 17;
			break;
		
		case 77:
			return 15;
			break;
		
		case 78:
			return 8;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 12;
			break;
		
		case 80:
			return 9;
			break;
		
		case 81:
			return 10;
			break;
		
		case 82:
			return 14;
			break;
		
		case 83:
			return 8;
			break;
		
		case 84:
			return 6;
			break;
		
		case 85:
			return 5;
			break;
		
		case 86:
			return 5;
			break;
		
		case 87:
			return 11;
			break;
		
		case 104:
			return 25;
			break;
		
		case 105:
			return 8;
			break;
		
		case 106:
			return 10;
			break;
		
		case 107:
			return 10;
			break;
		
		case 108:
			return 8;
			break;
		
		case 2:
			return 2;
			break;
		
		case 197:
			return 5;
			break;
		
		case 198:
			return 6;
			break;
		
		case 199:
			return 2;
			break;
	}
	return 0;
}

void func_526(int iParam0)//Position - 0x42D23
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
	
	iVar0 = 5;
	iVar1 = -1;
	iVar2 = GlobalFunc_56();
	while (iVar2 > 0)
	{
		iVar3 = -1;
		iVar4 = 1;
		iVar3 = func_538(iVar2);
		if (iVar3 == -1)
		{
			iVar3 = func_537(iVar2);
			iVar4 = 0;
		}
		if (iVar3 != -1 && iVar4 == 1)
		{
			iVar1 = func_536(iLocal_45, iVar3);
			if (iVar1 != -1)
			{
				iVar5 = 1;
				while (iVar5 <= func_535(iLocal_45, iVar3))
				{
					func_531(iParam0, iVar0, iVar1);
					iVar1++;
					iVar0++;
					iVar5++;
				}
			}
		}
		if (iVar3 != -1 && iVar4 == 0)
		{
			iVar6 = 1;
			if (iLocal_45 == 0)
			{
				if (iVar3 == 22)
				{
					if (!GlobalFunc_5600(21, 7) || Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[22 /*6*/].f_3 < Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[21 /*6*/].f_3)
					{
						iVar6 = 0;
					}
				}
			}
			if (iVar6 == 1)
			{
				iVar1 = func_530(iLocal_45, iVar3);
				if (iVar1 != -1)
				{
					iVar7 = 1;
					while (iVar7 <= func_529(iLocal_45, iVar3))
					{
						iVar8 = 1;
						if (iLocal_45 == 7)
						{
							if (iVar3 == 21)
							{
								if (iVar1 == 6)
								{
									if (GlobalFunc_5600(22, 7) && Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[22 /*6*/].f_3 < Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[21 /*6*/].f_3)
									{
										iVar8 = 0;
									}
								}
							}
							if (iVar3 == 22)
							{
								if (iVar1 == 3)
								{
									if (GlobalFunc_5600(23, 7) && Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[23 /*6*/].f_3 < Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[22 /*6*/].f_3)
									{
										iVar8 = 0;
									}
								}
							}
						}
						if (iVar8 == 1)
						{
							func_531(iParam0, iVar0, iVar1);
							iVar0++;
						}
						iVar1++;
						iVar7++;
					}
				}
			}
		}
		if (iVar2 == 1)
		{
			iVar1 = func_528(iLocal_45);
			if (iVar1 != -1)
			{
				iVar9 = func_528(iLocal_45);
				while (iVar9 <= func_527(iLocal_45))
				{
					func_531(iParam0, iVar0, iVar1);
					iVar1++;
					iVar0++;
					iVar9++;
				}
			}
		}
		if (iLocal_45 == 8)
		{
			if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iREDomesticCompOrder != -1)
			{
				if (iVar2 == Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iREDomesticCompOrder)
				{
					func_531(iParam0, iVar0, 7);
					iVar0++;
				}
			}
		}
		iVar1 = -1;
		iVar2 = (iVar2 - 1);
	}
	iLocal_48 = iVar0;
}

int func_527(int iParam0)//Position - 0x42F4B
{
	switch (iParam0)
	{
		case 0:
			return 77;
			break;
		
		case 3:
			return 65;
			break;
		
		case 4:
			return 65;
			break;
		
		case 5:
			return 49;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 25;
			break;
		
		case 9:
			return 17;
			break;
		
		case 10:
			return 21;
			break;
		
		case 1:
			return 57;
			break;
		
		case 77:
			return 29;
			break;
		
		case 78:
			return 21;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 40;
			break;
		
		case 80:
			return 26;
			break;
		
		case 81:
			return 30;
			break;
		
		case 82:
			return 29;
			break;
		
		case 83:
			return 23;
			break;
		
		case 84:
			return 37;
			break;
		
		case 85:
			return 23;
			break;
		
		case 86:
			return 34;
			break;
		
		case 87:
			return 26;
			break;
		
		case 104:
			return 27;
			break;
		
		case 105:
			return 18;
			break;
		
		case 106:
			return 25;
			break;
		
		case 107:
			return 27;
			break;
		
		case 108:
			return 24;
			break;
		
		case 2:
			return 9;
			break;
		
		case 197:
			return 5;
			break;
		
		case 198:
			return 8;
			break;
		
		case 199:
			return 9;
			break;
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x430FE
{
	switch (iParam0)
	{
		case 0:
			return 50;
			break;
		
		case 3:
			return 27;
			break;
		
		case 4:
			return 33;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 12;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 4;
			break;
		
		case 10:
			return 9;
			break;
		
		case 1:
			return 43;
			break;
		
		case 77:
			return 20;
			break;
		
		case 78:
			return 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 19;
			break;
		
		case 80:
			return 15;
			break;
		
		case 81:
			return 15;
			break;
		
		case 82:
			return 14;
			break;
		
		case 83:
			return 10;
			break;
		
		case 84:
			return -1;
			break;
		
		case 85:
			return -1;
			break;
		
		case 86:
			return -1;
			break;
		
		case 87:
			return 10;
			break;
		
		case 104:
			return 10;
			break;
		
		case 105:
			return 5;
			break;
		
		case 106:
			return 7;
			break;
		
		case 107:
			return 10;
			break;
		
		case 108:
			return 9;
			break;
		
		case 2:
			return 6;
			break;
		
		case 197:
			return 2;
			break;
		
		case 198:
			return 7;
			break;
		
		case 199:
			return 3;
			break;
	}
	return 1;
}

int func_529(int iParam0, int iParam1)//Position - 0x432A7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					return 1;
					break;
				
				case 15:
					return 1;
					break;
				
				case 22:
					return 1;
					break;
				
				case 21:
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 47:
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 23:
					return 2;
					break;
				
				case 22:
					return 2;
					break;
				
				case 21:
					return 2;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 28:
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 47:
					return 2;
					break;
				
				case 49:
					return 2;
					break;
				
				case 18:
					return 2;
					break;
				
				case 19:
					return 2;
					break;
				
				case 59:
					return 2;
					break;
				
				case 61:
					return 2;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 62:
					return 3;
					break;
				
				case 59:
					return 3;
					break;
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 20:
					return 2;
					break;
				
				case 19:
					return 3;
					break;
				
				case 18:
					return 3;
					break;
				
				case 17:
					return 29;
					break;
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 50:
					return 2;
					break;
				
				case 49:
					return 1;
					break;
				
				case 47:
					return 2;
					break;
				
				case 46:
					return 18;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 35:
					return 1;
					break;
			}
			break;
	}
	return -1;
}

int func_530(int iParam0, int iParam1)//Position - 0x4349B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					return 46;
					break;
				
				case 15:
					return 47;
					break;
				
				case 22:
					return 48;
					break;
				
				case 21:
					return 49;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 47:
					return 32;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 23:
					return 1;
					break;
				
				case 22:
					return 3;
					break;
				
				case 21:
					return 5;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 28:
					return 6;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 47:
					return 32;
					break;
				
				case 49:
					return 30;
					break;
				
				case 18:
					return 28;
					break;
				
				case 19:
					return 26;
					break;
				
				case 59:
					return 24;
					break;
				
				case 61:
					return 22;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 62:
					return 1;
					break;
				
				case 59:
					return 4;
					break;
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 20:
					return 1;
					break;
				
				case 19:
					return 3;
					break;
				
				case 18:
					return 6;
					break;
				
				case 17:
					return 9;
					break;
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 50:
					return 1;
					break;
				
				case 49:
					return 3;
					break;
				
				case 47:
					return 4;
					break;
				
				case 46:
					return 6;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 35:
					return 5;
					break;
			}
			break;
	}
	return -1;
}

void func_531(int iParam0, int iParam1, int iParam2)//Position - 0x43699
{
	struct<4> Var0;
	struct<4> Var4;
	char cVar8[32];
	int iVar12;
	
	if (iLocal_45 == func_534(iLocal_45, iParam2))
	{
		iVar12 = 0;
	}
	else
	{
		iVar12 = 1;
	}
	Var0 = { func_518(func_534(iLocal_45, iParam2)) };
	Var4 = { func_532(func_533(iLocal_45), iParam2) };
	cVar8 = { func_517(func_534(iLocal_45, iParam2)) };
	iLocal_49[iParam1] = func_534(iLocal_45, iParam2);
	if (iLocal_45 == 7)
	{
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GlobalFunc_726(&Var0);
	GlobalFunc_726("LFI_POSTEDUPDATE");
	GlobalFunc_726(&Var4);
	GlobalFunc_2047(&cVar8);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar12);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

struct<4> func_532(int iParam0, int iParam1)//Position - 0x43735
{
	struct<4> Var0;
	
	StringCopy(&Var0, "LFI_", 16);
	switch (GlobalFunc_8329())
	{
		case 0:
			StringConCat(&Var0, "M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "T", 16);
			break;
		
		default:
			StringConCat(&Var0, "UNKNOWN", 16);
			break;
	}
	StringIntConCat(&Var0, iParam0, 16);
	StringConCat(&Var0, "_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	return Var0;
}

int func_533(int iParam0)//Position - 0x437A7
{
	switch (iParam0)
	{
		case 0:
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
			return 9;
			break;
		
		case 1:
			return 1;
			break;
		
		case 77:
			return 2;
			break;
		
		case 78:
			return 3;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 4;
			break;
		
		case 80:
			return 5;
			break;
		
		case 81:
			return 6;
			break;
		
		case 82:
			return 7;
			break;
		
		case 83:
			return 8;
			break;
		
		case 84:
			return 9;
			break;
		
		case 85:
			return 10;
			break;
		
		case 86:
			return 11;
			break;
		
		case 87:
			return 12;
			break;
		
		case 104:
			return 13;
			break;
		
		case 105:
			return 14;
			break;
		
		case 106:
			return 15;
			break;
		
		case 107:
			return 16;
			break;
		
		case 108:
			return 17;
			break;
		
		case 2:
			return 1;
			break;
		
		case 197:
			return 2;
			break;
		
		case 198:
			return 3;
			break;
		
		case 199:
			return 4;
			break;
	}
	return 0;
}

int func_534(int iParam0, int iParam1)//Position - 0x43949
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 6;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 5;
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
					return 3;
					break;
				
				case 8:
					return 4;
					break;
				
				case 9:
					return 5;
					break;
				
				case 10:
					return 3;
					break;
				
				case 11:
					return 4;
					break;
				
				case 12:
					return 5;
					break;
				
				case 13:
					return 3;
					break;
				
				case 14:
					return 4;
					break;
				
				case 15:
					return 3;
					break;
				
				case 16:
					return 5;
					break;
				
				case 17:
					return 3;
					break;
				
				case 18:
					return 6;
					break;
				
				case 19:
					return 3;
					break;
				
				case 20:
					return 4;
					break;
				
				case 21:
					return 5;
					break;
				
				case 22:
					return 6;
					break;
				
				case 23:
					return 6;
					break;
				
				case 24:
					return 3;
					break;
				
				case 25:
					return 8;
					break;
				
				case 26:
					return 6;
					break;
				
				case 27:
					return 6;
					break;
				
				case 28:
					return 6;
					break;
				
				case 29:
					return 4;
					break;
				
				case 30:
					return 6;
					break;
				
				case 31:
					return 5;
					break;
				
				case 32:
					return 3;
					break;
				
				case 33:
					return 3;
					break;
				
				case 34:
					return 6;
					break;
				
				case 35:
					return 5;
					break;
				
				case 36:
					return 6;
					break;
				
				case 37:
					return 6;
					break;
				
				case 38:
					return 8;
					break;
				
				case 39:
					return 4;
					break;
				
				case 40:
					return 3;
					break;
				
				case 41:
					return 4;
					break;
				
				case 42:
					return 9;
					break;
				
				case 43:
					return 5;
					break;
				
				case 44:
					return 4;
					break;
				
				case 45:
					return 4;
					break;
				
				case 46:
					return 4;
					break;
				
				case 47:
					return 8;
					break;
				
				case 48:
					return 7;
					break;
				
				case 49:
					return 7;
					break;
				
				case 50:
					return 4;
					break;
				
				case 51:
					return 8;
					break;
				
				case 52:
					return 3;
					break;
				
				case 53:
					return 3;
					break;
				
				case 54:
					return 9;
					break;
				
				case 55:
					return 5;
					break;
				
				case 56:
					return 4;
					break;
				
				case 57:
					return 5;
					break;
				
				case 58:
					return 4;
					break;
				
				case 59:
					return 8;
					break;
				
				case 60:
					return 5;
					break;
				
				case 61:
					return 4;
					break;
				
				case 62:
					return 8;
					break;
				
				case 63:
					return 5;
					break;
				
				case 64:
					return 9;
					break;
				
				case 65:
					return 8;
					break;
				
				case 66:
					return 3;
					break;
				
				case 67:
					return 9;
					break;
				
				case 68:
					return 5;
					break;
				
				case 69:
					return 10;
					break;
				
				case 70:
					return 8;
					break;
				
				case 71:
					return 5;
					break;
				
				case 72:
					return 3;
					break;
				
				case 73:
					return 4;
					break;
				
				case 74:
					return 9;
					break;
				
				case 75:
					return 8;
					break;
				
				case 76:
					return 5;
					break;
				
				case 77:
					return 4;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return 3;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 3;
					break;
				
				case 5:
					return 3;
					break;
				
				case 6:
					return 3;
					break;
				
				case 7:
					return 3;
					break;
				
				case 8:
					return 3;
					break;
				
				case 9:
					return 3;
					break;
				
				case 10:
					return 3;
					break;
				
				case 11:
					return 3;
					break;
				
				case 12:
					return 3;
					break;
				
				case 13:
					return 3;
					break;
				
				case 14:
					return 3;
					break;
				
				case 15:
					return 3;
					break;
				
				case 16:
					return 3;
					break;
				
				case 17:
					return 3;
					break;
				
				case 18:
					return 3;
					break;
				
				case 19:
					return 4;
					break;
				
				case 20:
					return 11;
					break;
				
				case 21:
					return 3;
					break;
				
				case 22:
					return 3;
					break;
				
				case 23:
					return 3;
					break;
				
				case 24:
					return 3;
					break;
				
				case 25:
					return 4;
					break;
				
				case 26:
					return 3;
					break;
				
				case 27:
					return 3;
					break;
				
				case 28:
					return 3;
					break;
				
				case 29:
					return 5;
					break;
				
				case 30:
					return 3;
					break;
				
				case 31:
					return 3;
					break;
				
				case 32:
					return 56;
					break;
				
				case 33:
					return 3;
					break;
				
				case 34:
					return 3;
					break;
				
				case 35:
					return 12;
					break;
				
				case 36:
					return 3;
					break;
				
				case 37:
					return 3;
					break;
				
				case 38:
					return 4;
					break;
				
				case 39:
					return 3;
					break;
				
				case 40:
					return 13;
					break;
				
				case 41:
					return 3;
					break;
				
				case 42:
					return 14;
					break;
				
				case 43:
					return 3;
					break;
				
				case 44:
					return 3;
					break;
				
				case 45:
					return 15;
					break;
				
				case 46:
					return 3;
					break;
				
				case 47:
					return 3;
					break;
				
				case 48:
					return 3;
					break;
				
				case 49:
					return 3;
					break;
				
				case 50:
					return 16;
					break;
				
				case 51:
					return 3;
					break;
				
				case 52:
					return 16;
					break;
				
				case 53:
					return 3;
					break;
				
				case 54:
					return 3;
					break;
				
				case 55:
					return 3;
					break;
				
				case 56:
					return 17;
					break;
				
				case 57:
					return 3;
					break;
				
				case 58:
					return 15;
					break;
				
				case 59:
					return 3;
					break;
				
				case 60:
					return 3;
					break;
				
				case 61:
					return 3;
					break;
				
				case 62:
					return 3;
					break;
				
				case 63:
					return 4;
					break;
				
				case 64:
					return 18;
					break;
				
				case 65:
					return 3;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 4;
					break;
				
				case 2:
					return 4;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 3;
					break;
				
				case 5:
					return 4;
					break;
				
				case 6:
					return 4;
					break;
				
				case 7:
					return 4;
					break;
				
				case 8:
					return 4;
					break;
				
				case 9:
					return 4;
					break;
				
				case 10:
					return 4;
					break;
				
				case 11:
					return 4;
					break;
				
				case 12:
					return 4;
					break;
				
				case 13:
					return 4;
					break;
				
				case 14:
					return 4;
					break;
				
				case 15:
					return 19;
					break;
				
				case 16:
					return 4;
					break;
				
				case 17:
					return 19;
					break;
				
				case 18:
					return 4;
					break;
				
				case 19:
					return 20;
					break;
				
				case 20:
					return 3;
					break;
				
				case 21:
					return 3;
					break;
				
				case 22:
					return 4;
					break;
				
				case 23:
					return 3;
					break;
				
				case 24:
					return 4;
					break;
				
				case 25:
					return 4;
					break;
				
				case 26:
					return 4;
					break;
				
				case 27:
					return 4;
					break;
				
				case 28:
					return 4;
					break;
				
				case 29:
					return 3;
					break;
				
				case 30:
					return 4;
					break;
				
				case 31:
					return 4;
					break;
				
				case 32:
					return 4;
					break;
				
				case 33:
					return 4;
					break;
				
				case 34:
					return 5;
					break;
				
				case 35:
					return 4;
					break;
				
				case 36:
					return 21;
					break;
				
				case 37:
					return 4;
					break;
				
				case 38:
					return 22;
					break;
				
				case 39:
					return 3;
					break;
				
				case 40:
					return 23;
					break;
				
				case 41:
					return 3;
					break;
				
				case 42:
					return 4;
					break;
				
				case 43:
					return 21;
					break;
				
				case 44:
					return 3;
					break;
				
				case 45:
					return 4;
					break;
				
				case 46:
					return 3;
					break;
				
				case 47:
					return 3;
					break;
				
				case 48:
					return 24;
					break;
				
				case 49:
					return 21;
					break;
				
				case 50:
					return 4;
					break;
				
				case 51:
					return 22;
					break;
				
				case 52:
					return 4;
					break;
				
				case 53:
					return 25;
					break;
				
				case 54:
					return 4;
					break;
				
				case 55:
					return 4;
					break;
				
				case 56:
					return 25;
					break;
				
				case 57:
					return 4;
					break;
				
				case 58:
					return 3;
					break;
				
				case 59:
					return 4;
					break;
				
				case 60:
					return 4;
					break;
				
				case 61:
					return 21;
					break;
				
				case 62:
					return 4;
					break;
				
				case 63:
					return 3;
					break;
				
				case 64:
					return 4;
					break;
				
				case 65:
					return 3;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 1:
					return 5;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 5;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 5;
					break;
				
				case 7:
					return 5;
					break;
				
				case 8:
					return 5;
					break;
				
				case 9:
					return 5;
					break;
				
				case 10:
					return 5;
					break;
				
				case 11:
					return 5;
					break;
				
				case 12:
					return 5;
					break;
				
				case 13:
					return 26;
					break;
				
				case 14:
					return 5;
					break;
				
				case 15:
					return 26;
					break;
				
				case 16:
					return 4;
					break;
				
				case 17:
					return 6;
					break;
				
				case 18:
					return 3;
					break;
				
				case 19:
					return 5;
					break;
				
				case 20:
					return 4;
					break;
				
				case 21:
					return 5;
					break;
				
				case 22:
					return 9;
					break;
				
				case 23:
					return 5;
					break;
				
				case 24:
					return 9;
					break;
				
				case 25:
					return 27;
					break;
				
				case 26:
					return 9;
					break;
				
				case 27:
					return 5;
					break;
				
				case 28:
					return 26;
					break;
				
				case 29:
					return 5;
					break;
				
				case 30:
					return 28;
					break;
				
				case 31:
					return 5;
					break;
				
				case 32:
					return 29;
					break;
				
				case 33:
					return 5;
					break;
				
				case 34:
					return 5;
					break;
				
				case 35:
					return 5;
					break;
				
				case 36:
					return 5;
					break;
				
				case 37:
					return 5;
					break;
				
				case 38:
					return 26;
					break;
				
				case 39:
					return 5;
					break;
				
				case 40:
					return 30;
					break;
				
				case 41:
					return 5;
					break;
				
				case 42:
					return 26;
					break;
				
				case 43:
					return 31;
					break;
				
				case 44:
					return 31;
					break;
				
				case 45:
					return 32;
					break;
				
				case 46:
					return 4;
					break;
				
				case 47:
					return 5;
					break;
				
				case 48:
					return 5;
					break;
				
				case 49:
					return 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
					return 6;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 6;
					break;
				
				case 7:
					return 6;
					break;
				
				case 8:
					return 6;
					break;
				
				case 9:
					return 6;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 6;
					break;
				
				case 12:
					return 33;
					break;
				
				case 13:
					return 34;
					break;
				
				case 14:
					return 35;
					break;
				
				case 15:
					return 6;
					break;
				
				case 16:
					return 36;
					break;
				
				case 17:
					return 37;
					break;
				
				case 18:
					return 6;
					break;
				
				case 19:
					return 6;
					break;
				
				case 20:
					return 38;
					break;
				
				case 21:
					return 6;
					break;
				
				case 22:
					return 6;
					break;
				
				case 23:
					return 6;
					break;
				
				case 24:
					return 6;
					break;
				
				case 25:
					return 6;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 1:
					return 7;
					break;
				
				case 2:
					return 39;
					break;
				
				case 3:
					return 7;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 7;
					break;
				
				case 8:
					return 7;
					break;
				
				case 9:
					return 7;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 7;
					break;
				
				case 12:
					return 7;
					break;
				
				case 13:
					return 7;
					break;
				
				case 14:
					return 7;
					break;
				
				case 15:
					return 7;
					break;
				
				case 16:
					return 7;
					break;
				
				case 17:
					return 7;
					break;
				
				case 18:
					return 7;
					break;
				
				case 19:
					return 7;
					break;
				
				case 20:
					return 7;
					break;
				
				case 21:
					return 40;
					break;
				
				case 22:
					return 7;
					break;
				
				case 23:
					return 7;
					break;
				
				case 24:
					return 42;
					break;
				
				case 25:
					return 41;
					break;
				
				case 26:
					return 40;
					break;
				
				case 27:
					return 7;
					break;
				
				case 28:
					return 7;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 8;
					break;
				
				case 2:
					return 8;
					break;
				
				case 3:
					return 8;
					break;
				
				case 4:
					return 8;
					break;
				
				case 5:
					return 8;
					break;
				
				case 6:
					return 8;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 8;
					break;
				
				case 9:
					return 43;
					break;
				
				case 10:
					return 8;
					break;
				
				case 11:
					return 8;
					break;
				
				case 12:
					return 8;
					break;
				
				case 13:
					return 8;
					break;
				
				case 14:
					return 44;
					break;
				
				case 15:
					return 8;
					break;
				
				case 16:
					return 8;
					break;
				
				case 17:
					return 8;
					break;
				
				case 18:
					return 8;
					break;
				
				case 19:
					return 8;
					break;
				
				case 20:
					return 9;
					break;
				
				case 21:
					return 8;
					break;
				
				case 22:
					return 8;
					break;
				
				case 23:
					return 8;
					break;
				
				case 24:
					return 8;
					break;
				
				case 25:
					return 8;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 1:
					return 9;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 9;
					break;
				
				case 4:
					return 45;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 46;
					break;
				
				case 7:
					return 9;
					break;
				
				case 8:
					return 5;
					break;
				
				case 9:
					return 9;
					break;
				
				case 10:
					return 47;
					break;
				
				case 11:
					return 48;
					break;
				
				case 12:
					return 9;
					break;
				
				case 13:
					return 49;
					break;
				
				case 14:
					return 9;
					break;
				
				case 15:
					return 9;
					break;
				
				case 16:
					return 50;
					break;
				
				case 17:
					return 51;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 10;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 10;
					break;
				
				case 5:
					return 10;
					break;
				
				case 6:
					return 10;
					break;
				
				case 7:
					return 10;
					break;
				
				case 8:
					return 10;
					break;
				
				case 9:
					return 10;
					break;
				
				case 10:
					return 10;
					break;
				
				case 11:
					return 52;
					break;
				
				case 12:
					return 53;
					break;
				
				case 13:
					return 54;
					break;
				
				case 14:
					return 10;
					break;
				
				case 15:
					return 55;
					break;
				
				case 16:
					return 10;
					break;
				
				case 17:
					return 10;
					break;
				
				case 18:
					return 10;
					break;
				
				case 19:
					return 10;
					break;
				
				case 20:
					return 10;
					break;
				
				case 21:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					return 82;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 83;
					break;
				
				case 4:
					return 86;
					break;
				
				case 5:
					return 109;
					break;
				
				case 6:
					return 86;
					break;
				
				case 7:
					return 110;
					break;
				
				case 8:
					return 111;
					break;
				
				case 9:
					return 86;
					break;
				
				case 10:
					return 77;
					break;
				
				case 11:
					return 82;
					break;
				
				case 12:
					return 87;
					break;
				
				case 13:
					return 81;
					break;
				
				case 14:
					return 83;
					break;
				
				case 15:
					return 81;
					break;
				
				case 16:
					return 77;
					break;
				
				case 17:
					return 81;
					break;
				
				case 18:
					return 87;
					break;
				
				case 19:
					return 77;
					break;
				
				case 20:
					return 108;
					break;
				
				case 21:
					return 110;
					break;
				
				case 22:
					return 112;
					break;
				
				case 23:
					return 77;
					break;
				
				case 24:
					return 79;
					break;
				
				case 25:
					return 109;
					break;
				
				case 26:
					return 84;
					break;
				
				case 27:
					return 113;
					break;
				
				case 28:
					return 84;
					break;
				
				case 29:
					return 80;
					break;
				
				case 30:
					return 85;
					break;
				
				case 31:
					return 107;
					break;
				
				case 32:
					return 85;
					break;
				
				case 33:
					return 77;
					break;
				
				case 34:
					return 114;
					break;
				
				case 35:
					return 80;
					break;
				
				case 36:
					return 77;
					break;
				
				case 37:
					return 83;
					break;
				
				case 38:
					return 80;
					break;
				
				case 39:
					return 77;
					break;
				
				case 40:
					return 78;
					break;
				
				case 41:
					return 77;
					break;
				
				case 42:
					return 113;
					break;
				
				case 43:
					return 77;
					break;
				
				case 44:
					return 78;
					break;
				
				case 45:
					return 82;
					break;
				
				case 46:
					return 78;
					break;
				
				case 47:
					return 77;
					break;
				
				case 48:
					return 77;
					break;
				
				case 49:
					return 83;
					break;
				
				case 50:
					return 87;
					break;
				
				case 51:
					return 81;
					break;
				
				case 52:
					return 79;
					break;
				
				case 53:
					return 80;
					break;
				
				case 54:
					return 111;
					break;
				
				case 55:
					return 77;
					break;
				
				case 56:
					return 80;
					break;
				
				case 57:
					return 77;
					break;
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 1:
					return 79;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 113;
					break;
				
				case 4:
					return 77;
					break;
				
				case 5:
					return 113;
					break;
				
				case 6:
					return 81;
					break;
				
				case 7:
					return 111;
					break;
				
				case 8:
					return 112;
					break;
				
				case 9:
					return 77;
					break;
				
				case 10:
					return 81;
					break;
				
				case 11:
					return 87;
					break;
				
				case 12:
					return 111;
					break;
				
				case 13:
					return 78;
					break;
				
				case 14:
					return 115;
					break;
				
				case 15:
					return 77;
					break;
				
				case 16:
					return 77;
					break;
				
				case 17:
					return 77;
					break;
				
				case 18:
					return 82;
					break;
				
				case 19:
					return 109;
					break;
				
				case 20:
					return 78;
					break;
				
				case 21:
					return 81;
					break;
				
				case 22:
					return 77;
					break;
				
				case 23:
					return 87;
					break;
				
				case 24:
					return 109;
					break;
				
				case 25:
					return 111;
					break;
				
				case 26:
					return 77;
					break;
				
				case 27:
					return 77;
					break;
				
				case 28:
					return 81;
					break;
				
				case 29:
					return 116;
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 1:
					return 78;
					break;
				
				case 2:
					return 117;
					break;
				
				case 3:
					return 118;
					break;
				
				case 4:
					return 78;
					break;
				
				case 5:
					return 78;
					break;
				
				case 6:
					return 78;
					break;
				
				case 7:
					return 119;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 78;
					break;
				
				case 10:
					return 120;
					break;
				
				case 11:
					return 78;
					break;
				
				case 12:
					return 121;
					break;
				
				case 13:
					return 78;
					break;
				
				case 14:
					return 119;
					break;
				
				case 15:
					return 78;
					break;
				
				case 16:
					return 78;
					break;
				
				case 17:
					return 121;
					break;
				
				case 18:
					return 78;
					break;
				
				case 19:
					return 78;
					break;
				
				case 20:
					return 77;
					break;
				
				case 21:
					return 78;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 1:
					return 79;
					break;
				
				case 2:
					return 79;
					break;
				
				case 3:
					return 79;
					break;
				
				case 4:
					return 79;
					break;
				
				case 5:
					return 79;
					break;
				
				case 6:
					return 112;
					break;
				
				case 7:
					return 79;
					break;
				
				case 8:
					return 123;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 79;
					break;
				
				case 11:
					return 124;
					break;
				
				case 12:
					return 79;
					break;
				
				case 13:
					return 79;
					break;
				
				case 14:
					return 112;
					break;
				
				case 15:
					return 79;
					break;
				
				case 16:
					return 79;
					break;
				
				case 17:
					return 126;
					break;
				
				case 18:
					return 79;
					break;
				
				case 19:
					return 79;
					break;
				
				case 20:
					return 79;
					break;
				
				case 21:
					return 79;
					break;
				
				case 22:
					return 79;
					break;
				
				case 23:
					return 79;
					break;
				
				case 24:
					return 79;
					break;
				
				case 25:
					return 79;
					break;
				
				case 26:
					return 79;
					break;
				
				case 27:
					return 79;
					break;
				
				case 28:
					return 127;
					break;
				
				case 29:
					return 79;
					break;
				
				case 30:
					return 79;
					break;
				
				case 31:
					return 82;
					break;
				
				case 32:
					return 79;
					break;
				
				case 33:
					return 79;
					break;
				
				case 34:
					return 128;
					break;
				
				case 35:
					return 79;
					break;
				
				case 36:
					return 112;
					break;
				
				case 37:
					return 79;
					break;
				
				case 38:
					return 79;
					break;
				
				case 39:
					return 79;
					break;
				
				case 40:
					return 79;
					break;
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 1:
					return 80;
					break;
				
				case 2:
					return 80;
					break;
				
				case 3:
					return 80;
					break;
				
				case 4:
					return 129;
					break;
				
				case 5:
					return 80;
					break;
				
				case 6:
					return 80;
					break;
				
				case 7:
					return 80;
					break;
				
				case 8:
					return 129;
					break;
				
				case 9:
					return 80;
					break;
				
				case 10:
					return 80;
					break;
				
				case 11:
					return 130;
					break;
				
				case 12:
					return 80;
					break;
				
				case 13:
					return 77;
					break;
				
				case 14:
					return 80;
					break;
				
				case 15:
					return 80;
					break;
				
				case 16:
					return 80;
					break;
				
				case 17:
					return 80;
					break;
				
				case 18:
					return 131;
					break;
				
				case 19:
					return 80;
					break;
				
				case 20:
					return 80;
					break;
				
				case 21:
					return 80;
					break;
				
				case 22:
					return 132;
					break;
				
				case 23:
					return 80;
					break;
				
				case 24:
					return 80;
					break;
				
				case 25:
					return 80;
					break;
				
				case 26:
					return 80;
					break;
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 1:
					return 81;
					break;
				
				case 2:
					return 133;
					break;
				
				case 3:
					return 77;
					break;
				
				case 4:
					return 87;
					break;
				
				case 5:
					return 77;
					break;
				
				case 6:
					return 112;
					break;
				
				case 7:
					return 81;
					break;
				
				case 8:
					return 81;
					break;
				
				case 9:
					return 81;
					break;
				
				case 10:
					return 77;
					break;
				
				case 11:
					return 79;
					break;
				
				case 12:
					return 81;
					break;
				
				case 13:
					return 77;
					break;
				
				case 14:
					return 81;
					break;
				
				case 15:
					return 87;
					break;
				
				case 16:
					return 81;
					break;
				
				case 17:
					return 77;
					break;
				
				case 18:
					return 81;
					break;
				
				case 19:
					return 81;
					break;
				
				case 20:
					return 81;
					break;
				
				case 21:
					return 81;
					break;
				
				case 22:
					return 81;
					break;
				
				case 23:
					return 77;
					break;
				
				case 24:
					return 81;
					break;
				
				case 25:
					return 81;
					break;
				
				case 26:
					return 77;
					break;
				
				case 27:
					return 81;
					break;
				
				case 28:
					return 81;
					break;
				
				case 29:
					return 81;
					break;
				
				case 30:
					return 77;
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 1:
					return 82;
					break;
				
				case 2:
					return 82;
					break;
				
				case 3:
					return 77;
					break;
				
				case 4:
					return 82;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 82;
					break;
				
				case 8:
					return 82;
					break;
				
				case 9:
					return 82;
					break;
				
				case 10:
					return 79;
					break;
				
				case 11:
					return 82;
					break;
				
				case 12:
					return 82;
					break;
				
				case 13:
					return 77;
					break;
				
				case 14:
					return 82;
					break;
				
				case 15:
					return 82;
					break;
				
				case 16:
					return 82;
					break;
				
				case 17:
					return 112;
					break;
				
				case 18:
					return 82;
					break;
				
				case 19:
					return 82;
					break;
				
				case 20:
					return 77;
					break;
				
				case 21:
					return 82;
					break;
				
				case 22:
					return 114;
					break;
				
				case 23:
					return 82;
					break;
				
				case 24:
					return 82;
					break;
				
				case 25:
					return 135;
					break;
				
				case 26:
					return 80;
					break;
				
				case 27:
					return 82;
					break;
				
				case 28:
					return 136;
					break;
				
				case 29:
					return 82;
					break;
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 1:
					return 83;
					break;
				
				case 2:
					return 83;
					break;
				
				case 3:
					return 83;
					break;
				
				case 4:
					return 83;
					break;
				
				case 5:
					return 83;
					break;
				
				case 6:
					return 83;
					break;
				
				case 7:
					return 83;
					break;
				
				case 8:
					return 83;
					break;
				
				case 9:
					return 83;
					break;
				
				case 10:
					return 83;
					break;
				
				case 11:
					return 77;
					break;
				
				case 12:
					return 83;
					break;
				
				case 13:
					return 83;
					break;
				
				case 14:
					return 83;
					break;
				
				case 15:
					return 83;
					break;
				
				case 16:
					return 83;
					break;
				
				case 17:
					return 110;
					break;
				
				case 18:
					return 83;
					break;
				
				case 19:
					return 83;
					break;
				
				case 20:
					return 83;
					break;
				
				case 21:
					return 80;
					break;
				
				case 22:
					return 83;
					break;
				
				case 23:
					return 83;
					break;
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 1:
					return 186;
					break;
				
				case 2:
					return 138;
					break;
				
				case 3:
					return 84;
					break;
				
				case 4:
					return 84;
					break;
				
				case 5:
					return 84;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 84;
					break;
				
				case 8:
					return 84;
					break;
				
				case 9:
					return 84;
					break;
				
				case 10:
					return 84;
					break;
				
				case 11:
					return 84;
					break;
				
				case 12:
					return 84;
					break;
				
				case 13:
					return 84;
					break;
				
				case 14:
					return 84;
					break;
				
				case 15:
					return 84;
					break;
				
				case 16:
					return 84;
					break;
				
				case 17:
					return 84;
					break;
				
				case 18:
					return 139;
					break;
				
				case 19:
					return 84;
					break;
				
				case 20:
					return 84;
					break;
				
				case 21:
					return 84;
					break;
				
				case 22:
					return 84;
					break;
				
				case 23:
					return 84;
					break;
				
				case 24:
					return 138;
					break;
				
				case 25:
					return 84;
					break;
				
				case 26:
					return 84;
					break;
				
				case 27:
					return 84;
					break;
				
				case 28:
					return 138;
					break;
				
				case 29:
					return 84;
					break;
				
				case 30:
					return 84;
					break;
				
				case 31:
					return 140;
					break;
				
				case 32:
					return 84;
					break;
				
				case 33:
					return 186;
					break;
				
				case 34:
					return 84;
					break;
				
				case 35:
					return 84;
					break;
				
				case 36:
					return 84;
					break;
				
				case 37:
					return 84;
					break;
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 1:
					return 85;
					break;
				
				case 2:
					return 85;
					break;
				
				case 3:
					return 85;
					break;
				
				case 4:
					return 85;
					break;
				
				case 5:
					return 85;
					break;
				
				case 6:
					return 85;
					break;
				
				case 7:
					return 85;
					break;
				
				case 8:
					return 85;
					break;
				
				case 9:
					return 85;
					break;
				
				case 10:
					return 85;
					break;
				
				case 11:
					return 85;
					break;
				
				case 12:
					return 85;
					break;
				
				case 13:
					return 85;
					break;
				
				case 14:
					return 85;
					break;
				
				case 15:
					return 85;
					break;
				
				case 16:
					return 125;
					break;
				
				case 17:
					return 85;
					break;
				
				case 18:
					return 85;
					break;
				
				case 19:
					return 141;
					break;
				
				case 20:
					return 85;
					break;
				
				case 21:
					return 85;
					break;
				
				case 22:
					return 142;
					break;
				
				case 23:
					return 85;
					break;
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 1:
					return 86;
					break;
				
				case 2:
					return 86;
					break;
				
				case 3:
					return 143;
					break;
				
				case 4:
					return 86;
					break;
				
				case 5:
					return 86;
					break;
				
				case 6:
					return 86;
					break;
				
				case 7:
					return 86;
					break;
				
				case 8:
					return 86;
					break;
				
				case 9:
					return 86;
					break;
				
				case 10:
					return 86;
					break;
				
				case 11:
					return 86;
					break;
				
				case 12:
					return 86;
					break;
				
				case 13:
					return 86;
					break;
				
				case 14:
					return 86;
					break;
				
				case 15:
					return 144;
					break;
				
				case 16:
					return 86;
					break;
				
				case 17:
					return 86;
					break;
				
				case 18:
					return 86;
					break;
				
				case 19:
					return 86;
					break;
				
				case 20:
					return 143;
					break;
				
				case 21:
					return 86;
					break;
				
				case 22:
					return 86;
					break;
				
				case 23:
					return 86;
					break;
				
				case 24:
					return 86;
					break;
				
				case 25:
					return 143;
					break;
				
				case 26:
					return 86;
					break;
				
				case 27:
					return 86;
					break;
				
				case 28:
					return 86;
					break;
				
				case 29:
					return 86;
					break;
				
				case 30:
					return 145;
					break;
				
				case 31:
					return 86;
					break;
				
				case 32:
					return 86;
					break;
				
				case 33:
					return 86;
					break;
				
				case 34:
					return 145;
					break;
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 1:
					return 87;
					break;
				
				case 2:
					return 87;
					break;
				
				case 3:
					return 87;
					break;
				
				case 4:
					return 87;
					break;
				
				case 5:
					return 87;
					break;
				
				case 6:
					return 87;
					break;
				
				case 7:
					return 87;
					break;
				
				case 8:
					return 87;
					break;
				
				case 9:
					return 87;
					break;
				
				case 10:
					return 87;
					break;
				
				case 11:
					return 77;
					break;
				
				case 12:
					return 146;
					break;
				
				case 13:
					return 87;
					break;
				
				case 14:
					return 87;
					break;
				
				case 15:
					return 87;
					break;
				
				case 16:
					return 87;
					break;
				
				case 17:
					return 87;
					break;
				
				case 18:
					return 146;
					break;
				
				case 19:
					return 87;
					break;
				
				case 20:
					return 87;
					break;
				
				case 21:
					return 112;
					break;
				
				case 22:
					return 184;
					break;
				
				case 23:
					return 87;
					break;
				
				case 24:
					return 87;
					break;
				
				case 25:
					return 81;
					break;
				
				case 26:
					return 87;
					break;
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 1:
					return 122;
					break;
				
				case 2:
					return 149;
					break;
				
				case 3:
					return 104;
					break;
				
				case 4:
					return 148;
					break;
				
				case 5:
					return 122;
					break;
				
				case 6:
					return 150;
					break;
				
				case 7:
					return 151;
					break;
				
				case 8:
					return 152;
					break;
				
				case 9:
					return 77;
					break;
				
				case 10:
					return 151;
					break;
				
				case 11:
					return 153;
					break;
				
				case 12:
					return 154;
					break;
				
				case 13:
					return 122;
					break;
				
				case 14:
					return 155;
					break;
				
				case 15:
					return 157;
					break;
				
				case 16:
					return 113;
					break;
				
				case 17:
					return 151;
					break;
				
				case 18:
					return 158;
					break;
				
				case 19:
					return 156;
					break;
				
				case 20:
					return 159;
					break;
				
				case 21:
					return 160;
					break;
				
				case 22:
					return 159;
					break;
				
				case 23:
					return 161;
					break;
				
				case 24:
					return 149;
					break;
				
				case 25:
					return 162;
					break;
				
				case 26:
					return 163;
					break;
				
				case 27:
					return 164;
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 1:
					return 105;
					break;
				
				case 2:
					return 165;
					break;
				
				case 3:
					return 166;
					break;
				
				case 4:
					return 105;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 167;
					break;
				
				case 7:
					return 105;
					break;
				
				case 8:
					return 105;
					break;
				
				case 9:
					return 105;
					break;
				
				case 10:
					return 105;
					break;
				
				case 11:
					return 105;
					break;
				
				case 12:
					return 105;
					break;
				
				case 13:
					return 168;
					break;
				
				case 14:
					return 105;
					break;
				
				case 15:
					return 105;
					break;
				
				case 16:
					return 105;
					break;
				
				case 17:
					return 105;
					break;
				
				case 18:
					return 169;
					break;
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 1:
					return 106;
					break;
				
				case 2:
					return 106;
					break;
				
				case 3:
					return 106;
					break;
				
				case 4:
					return 106;
					break;
				
				case 5:
					return 106;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 106;
					break;
				
				case 8:
					return 170;
					break;
				
				case 9:
					return 106;
					break;
				
				case 10:
					return 106;
					break;
				
				case 11:
					return 106;
					break;
				
				case 12:
					return 171;
					break;
				
				case 13:
					return 106;
					break;
				
				case 14:
					return 172;
					break;
				
				case 15:
					return 106;
					break;
				
				case 16:
					return 106;
					break;
				
				case 17:
					return 106;
					break;
				
				case 18:
					return 106;
					break;
				
				case 19:
					return 106;
					break;
				
				case 20:
					return 106;
					break;
				
				case 21:
					return 173;
					break;
				
				case 22:
					return 106;
					break;
				
				case 23:
					return 174;
					break;
				
				case 24:
					return 106;
					break;
				
				case 25:
					return 106;
					break;
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 1:
					return 107;
					break;
				
				case 2:
					return 107;
					break;
				
				case 3:
					return 175;
					break;
				
				case 4:
					return 176;
					break;
				
				case 5:
					return 177;
					break;
				
				case 6:
					return 107;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 178;
					break;
				
				case 9:
					return 175;
					break;
				
				case 10:
					return 107;
					break;
				
				case 11:
					return 107;
					break;
				
				case 12:
					return 107;
					break;
				
				case 13:
					return 179;
					break;
				
				case 14:
					return 107;
					break;
				
				case 15:
					return 107;
					break;
				
				case 16:
					return 107;
					break;
				
				case 17:
					return 107;
					break;
				
				case 18:
					return 107;
					break;
				
				case 19:
					return 180;
					break;
				
				case 20:
					return 175;
					break;
				
				case 21:
					return 107;
					break;
				
				case 22:
					return 107;
					break;
				
				case 23:
					return 107;
					break;
				
				case 24:
					return 181;
					break;
				
				case 25:
					return 107;
					break;
				
				case 26:
					return 107;
					break;
				
				case 27:
					return 182;
					break;
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 1:
					return 108;
					break;
				
				case 2:
					return 183;
					break;
				
				case 3:
					return 108;
					break;
				
				case 4:
					return 108;
					break;
				
				case 5:
					return 108;
					break;
				
				case 6:
					return 108;
					break;
				
				case 7:
					return 184;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 77;
					break;
				
				case 10:
					return 108;
					break;
				
				case 11:
					return 185;
					break;
				
				case 12:
					return 108;
					break;
				
				case 13:
					return 108;
					break;
				
				case 14:
					return 186;
					break;
				
				case 15:
					return 108;
					break;
				
				case 16:
					return 108;
					break;
				
				case 17:
					return 108;
					break;
				
				case 18:
					return 187;
					break;
				
				case 19:
					return 108;
					break;
				
				case 20:
					return 108;
					break;
				
				case 21:
					return 108;
					break;
				
				case 22:
					return 108;
					break;
				
				case 23:
					return 108;
					break;
				
				case 24:
					return 108;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					return 197;
					break;
				
				case 2:
					return 197;
					break;
				
				case 3:
					return 197;
					break;
				
				case 4:
					return 197;
					break;
				
				case 5:
					return 197;
					break;
				
				case 6:
					return 197;
					break;
				
				case 7:
					return 197;
					break;
				
				case 8:
					return 197;
					break;
				
				case 9:
					return 197;
					break;
			}
			break;
		
		case 197:
			switch (iParam1)
			{
				case 1:
					return 200;
					break;
				
				case 2:
					return 197;
					break;
				
				case 3:
					return 201;
					break;
				
				case 4:
					return 198;
					break;
				
				case 5:
					return 198;
					break;
			}
			break;
		
		case 198:
			switch (iParam1)
			{
				case 1:
					return 202;
					break;
				
				case 2:
					return 198;
					break;
				
				case 3:
					return 203;
					break;
				
				case 4:
					return 203;
					break;
				
				case 5:
					return 203;
					break;
				
				case 6:
					return 198;
					break;
				
				case 7:
					return 198;
					break;
				
				case 8:
					return 204;
					break;
			}
			break;
		
		case 199:
			switch (iParam1)
			{
				case 1:
					return 199;
					break;
				
				case 2:
					return 199;
					break;
				
				case 3:
					return 199;
					break;
				
				case 4:
					return 199;
					break;
				
				case 5:
					return 199;
					break;
				
				case 6:
					return 199;
					break;
				
				case 7:
					return 199;
					break;
				
				case 8:
					return 199;
					break;
				
				case 9:
					return 199;
					break;
			}
			break;
	}
	return 211;
}

int func_535(int iParam0, int iParam1)//Position - 0x46B71
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 77:
					return 1;
					break;
				
				case 84:
				case 85:
					return 1;
					break;
				
				case 49:
					return 2;
					break;
				
				case 42:
					return 2;
					break;
				
				case 52:
					return 1;
					break;
				
				case 51:
					return 1;
					break;
				
				case 22:
					return 3;
					break;
				
				case 66:
					return 3;
					break;
				
				case 39:
					return 3;
					break;
				
				case 8:
					return 4;
					break;
				
				case 91:
					return 1;
					break;
				
				case 47:
					return 1;
					break;
				
				case 16:
					return 1;
					break;
				
				case 15:
					return 1;
					break;
				
				case 14:
					return 1;
					break;
				
				case 45:
					return 1;
					break;
				
				case 74:
				case 75:
					return 1;
					break;
				
				case 21:
					return 2;
					break;
				
				case 20:
					return 3;
					break;
				
				case 90:
					return 1;
					break;
				
				case 50:
					return 1;
					break;
				
				case 44:
					return 3;
					break;
				
				case 18:
					return 3;
					break;
				
				case 19:
					return 2;
					break;
				
				case 17:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 42:
					return 2;
					break;
				
				case 49:
					return 1;
					break;
				
				case 52:
					return 1;
					break;
				
				case 22:
					return 2;
					break;
				
				case 47:
					return 1;
					break;
				
				case 59:
					return 1;
					break;
				
				case 39:
					return 1;
					break;
				
				case 15:
					return 1;
					break;
				
				case 45:
					return 1;
					break;
				
				case 38:
					return 1;
					break;
				
				case 21:
					return 1;
					break;
				
				case 20:
					return 1;
					break;
				
				case 90:
					return 1;
					break;
				
				case 64:
					return 1;
					break;
				
				case 63:
					return 1;
					break;
				
				case 18:
					return 4;
					break;
				
				case 17:
					return 2;
					break;
				
				case 2:
					return 1;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 49:
					return 3;
					break;
				
				case 42:
					return 2;
					break;
				
				case 51:
					return 1;
					break;
				
				case 22:
					return 2;
					break;
				
				case 47:
					return 1;
					break;
				
				case 46:
					return 1;
					break;
				
				case 16:
					return 1;
					break;
				
				case 14:
					return 1;
					break;
				
				case 38:
					return 1;
					break;
				
				case 21:
					return 2;
					break;
				
				case 20:
					return 4;
					break;
				
				case 64:
					return 1;
					break;
				
				case 44:
					return 1;
					break;
				
				case 18:
					return 2;
					break;
				
				case 17:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 0:
					return 2;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 42:
					return 2;
					break;
				
				case 22:
					return 1;
					break;
				
				case 47:
					return 2;
					break;
				
				case 46:
					return 1;
					break;
				
				case 15:
					return 1;
					break;
				
				case 45:
					return 1;
					break;
				
				case 38:
					return 1;
					break;
				
				case 21:
					return 2;
					break;
				
				case 20:
					return 2;
					break;
				
				case 50:
					return 1;
					break;
				
				case 44:
					return 1;
					break;
				
				case 19:
					return 2;
					break;
				
				case 18:
					return 1;
					break;
				
				case 90:
					return 1;
					break;
				
				case 17:
					return 1;
					break;
				
				case 0:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 84:
				case 85:
					return 1;
					break;
				
				case 69:
				case 70:
					return 1;
					break;
				
				case 47:
					return 1;
					break;
				
				case 92:
					return 1;
					break;
				
				case 91:
					return 1;
					break;
				
				case 74:
				case 75:
					return 2;
					break;
				
				case 71:
					return 1;
					break;
				
				case 5:
					return 2;
					break;
				
				case 44:
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 84:
				case 85:
					return 1;
					break;
				
				case 49:
					return 1;
					break;
				
				case 21:
					return 1;
					break;
				
				case 44:
					return 1;
					break;
				
				case 19:
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 20:
					return 1;
					break;
				
				case 19:
					return 1;
					break;
				
				case 2:
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 4:
					return 2;
					break;
				
				case 3:
					return 2;
					break;
				
				case 42:
					return 1;
					break;
				
				case 41:
					return 1;
					break;
				
				case 16:
					return 1;
					break;
				
				case 62:
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 2;
					break;
				
				case 4:
					return 2;
					break;
				
				case 40:
					return 3;
					break;
				
				case 43:
					return 4;
					break;
				
				case 41:
					return 4;
					break;
				
				case 8:
					return 2;
					break;
				
				case 9:
					return 3;
					break;
				
				case 10:
					return 2;
					break;
				
				case 11:
					return 2;
					break;
				
				case 42:
					return 1;
					break;
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 1:
					return 4;
					break;
				
				case 2:
					return 4;
					break;
				
				case 40:
					return 3;
					break;
				
				case 43:
					return 3;
					break;
				
				case 41:
					return 2;
					break;
				
				case 11:
					return 2;
					break;
				
				case 42:
					return 1;
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 2:
					return 3;
					break;
				
				case 64:
					return 3;
					break;
				
				case 45:
					return 3;
					break;
				
				case 46:
					return 3;
					break;
				
				case 49:
					return 2;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 49:
					return 3;
					break;
				
				case 46:
					return 3;
					break;
				
				case 45:
					return 3;
					break;
				
				case 64:
					return 3;
					break;
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 49:
					return 2;
					break;
				
				case 46:
					return 3;
					break;
				
				case 45:
					return 1;
					break;
				
				case 64:
					return 3;
					break;
				
				case 3:
					return 3;
					break;
				
				case 41:
					return 2;
					break;
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 42:
					return 4;
					break;
				
				case 41:
					return 3;
					break;
				
				case 64:
					return 3;
					break;
				
				case 43:
					return 4;
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 42:
					return 4;
					break;
				
				case 45:
					return 4;
					break;
				
				case 64:
					return 5;
					break;
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 46:
					return 3;
					break;
				
				case 4:
					return 3;
					break;
				
				case 41:
					return 3;
					break;
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 61:
					return 2;
					break;
				
				case 10:
					return 3;
					break;
				
				case 38:
					return 3;
					break;
				
				case 8:
					return 25;
					break;
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 49:
					return 3;
					break;
				
				case 46:
					return 3;
					break;
				
				case 41:
					return 3;
					break;
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 49:
					return 2;
					break;
				
				case 46:
					return 2;
					break;
				
				case 45:
					return 2;
					break;
				
				case 64:
					return 3;
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 46:
					return 2;
					break;
				
				case 45:
					return 1;
					break;
				
				case 64:
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 2;
					break;
				
				case 45:
					return 2;
					break;
				
				case 64:
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 49:
					return 3;
					break;
				
				case 46:
					return 3;
					break;
				
				case 45:
					return 3;
					break;
				
				case 64:
					return 3;
					break;
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 49:
					return 2;
					break;
				
				case 46:
					return 2;
					break;
				
				case 45:
					return 2;
					break;
				
				case 64:
					return 2;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 16:
					return 1;
					break;
				
				case 14:
					return 1;
					break;
				
				case 63:
					return 2;
					break;
			}
			break;
		
		case 197:
			switch (iParam1)
			{
				case 62:
					return 1;
					break;
			}
			break;
		
		case 198:
			switch (iParam1)
			{
				case 46:
					return 1;
					break;
				
				case 65:
					return 1;
					break;
				
				case 14:
					return 1;
					break;
				
				case 71:
					return 1;
					break;
				
				case 64:
					return 2;
					break;
			}
			break;
		
		case 199:
			switch (iParam1)
			{
				case 46:
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_536(int iParam0, int iParam1)//Position - 0x476AE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 84:
				case 85:
					return 1;
					break;
				
				case 77:
					return 2;
					break;
				
				case 49:
					return 3;
					break;
				
				case 42:
					return 5;
					break;
				
				case 52:
					return 7;
					break;
				
				case 51:
					return 8;
					break;
				
				case 22:
					return 9;
					break;
				
				case 66:
					return 12;
					break;
				
				case 39:
					return 15;
					break;
				
				case 8:
					return 18;
					break;
				
				case 91:
					return 22;
					break;
				
				case 47:
					return 23;
					break;
				
				case 16:
					return 24;
					break;
				
				case 15:
					return 25;
					break;
				
				case 14:
					return 26;
					break;
				
				case 45:
					return 27;
					break;
				
				case 74:
				case 75:
					return 28;
					break;
				
				case 21:
					return 29;
					break;
				
				case 20:
					return 31;
					break;
				
				case 90:
					return 34;
					break;
				
				case 50:
					return 35;
					break;
				
				case 44:
					return 36;
					break;
				
				case 18:
					return 39;
					break;
				
				case 19:
					return 42;
					break;
				
				case 17:
					return 44;
					break;
				
				case 2:
					return 45;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 42:
					return 2;
					break;
				
				case 49:
					return 4;
					break;
				
				case 52:
					return 5;
					break;
				
				case 22:
					return 6;
					break;
				
				case 47:
					return 8;
					break;
				
				case 59:
					return 9;
					break;
				
				case 39:
					return 10;
					break;
				
				case 15:
					return 11;
					break;
				
				case 45:
					return 12;
					break;
				
				case 38:
					return 13;
					break;
				
				case 21:
					return 14;
					break;
				
				case 20:
					return 15;
					break;
				
				case 90:
					return 16;
					break;
				
				case 64:
					return 17;
					break;
				
				case 63:
					return 18;
					break;
				
				case 18:
					return 19;
					break;
				
				case 17:
					return 23;
					break;
				
				case 2:
					return 25;
					break;
				
				case 1:
					return 26;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 49:
					return 2;
					break;
				
				case 42:
					return 5;
					break;
				
				case 51:
					return 7;
					break;
				
				case 22:
					return 8;
					break;
				
				case 47:
					return 10;
					break;
				
				case 46:
					return 11;
					break;
				
				case 16:
					return 12;
					break;
				
				case 14:
					return 13;
					break;
				
				case 38:
					return 14;
					break;
				
				case 21:
					return 15;
					break;
				
				case 20:
					return 17;
					break;
				
				case 64:
					return 21;
					break;
				
				case 44:
					return 22;
					break;
				
				case 18:
					return 23;
					break;
				
				case 17:
					return 25;
					break;
				
				case 2:
					return 27;
					break;
				
				case 0:
					return 30;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 49:
					return 2;
					break;
				
				case 42:
					return 3;
					break;
				
				case 22:
					return 5;
					break;
				
				case 47:
					return 6;
					break;
				
				case 46:
					return 8;
					break;
				
				case 15:
					return 9;
					break;
				
				case 45:
					return 10;
					break;
				
				case 38:
					return 11;
					break;
				
				case 21:
					return 12;
					break;
				
				case 20:
					return 14;
					break;
				
				case 50:
					return 16;
					break;
				
				case 44:
					return 17;
					break;
				
				case 19:
					return 18;
					break;
				
				case 18:
					return 20;
					break;
				
				case 90:
					return 21;
					break;
				
				case 17:
					return 22;
					break;
				
				case 0:
					return 23;
					break;
				
				case 2:
					return 24;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 84:
				case 85:
					return 1;
					break;
				
				case 69:
				case 70:
					return 2;
					break;
				
				case 47:
					return 3;
					break;
				
				case 92:
					return 4;
					break;
				
				case 91:
					return 5;
					break;
				
				case 74:
				case 75:
					return 6;
					break;
				
				case 71:
					return 8;
					break;
				
				case 5:
					return 9;
					break;
				
				case 44:
					return 11;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 84:
				case 85:
					return 1;
					break;
				
				case 49:
					return 2;
					break;
				
				case 21:
					return 3;
					break;
				
				case 44:
					return 4;
					break;
				
				case 19:
					return 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 20:
					return 1;
					break;
				
				case 19:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 4:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 42:
					return 5;
					break;
				
				case 16:
					return 6;
					break;
				
				case 41:
					return 7;
					break;
				
				case 62:
					return 8;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 42;
					break;
				
				case 1:
					return 38;
					break;
				
				case 2:
					return 36;
					break;
				
				case 4:
					return 34;
					break;
				
				case 40:
					return 19;
					break;
				
				case 43:
					return 15;
					break;
				
				case 41:
					return 11;
					break;
				
				case 8:
					return 9;
					break;
				
				case 9:
					return 6;
					break;
				
				case 10:
					return 4;
					break;
				
				case 11:
					return 2;
					break;
				
				case 42:
					return 1;
					break;
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 1:
					return 16;
					break;
				
				case 2:
					return 12;
					break;
				
				case 40:
					return 9;
					break;
				
				case 43:
					return 6;
					break;
				
				case 41:
					return 4;
					break;
				
				case 11:
					return 2;
					break;
				
				case 42:
					return 1;
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 2:
					return 12;
					break;
				
				case 64:
					return 9;
					break;
				
				case 45:
					return 6;
					break;
				
				case 46:
					return 3;
					break;
				
				case 49:
					return 1;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 49:
					return 7;
					break;
				
				case 46:
					return 10;
					break;
				
				case 45:
					return 13;
					break;
				
				case 64:
					return 16;
					break;
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 3;
					break;
				
				case 45:
					return 6;
					break;
				
				case 64:
					return 7;
					break;
				
				case 3:
					return 10;
					break;
				
				case 41:
					return 13;
					break;
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 42:
					return 1;
					break;
				
				case 41:
					return 5;
					break;
				
				case 64:
					return 8;
					break;
				
				case 43:
					return 11;
					break;
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 42:
					return 1;
					break;
				
				case 45:
					return 5;
					break;
				
				case 64:
					return 9;
					break;
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 46:
					return 1;
					break;
				
				case 4:
					return 4;
					break;
				
				case 41:
					return 7;
					break;
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 61:
					return 2;
					break;
				
				case 10:
					return 4;
					break;
				
				case 38:
					return 7;
					break;
				
				case 8:
					return 10;
					break;
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 4;
					break;
				
				case 41:
					return 7;
					break;
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 3;
					break;
				
				case 45:
					return 5;
					break;
				
				case 64:
					return 7;
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 46:
					return 1;
					break;
				
				case 45:
					return 3;
					break;
				
				case 64:
					return 4;
					break;
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 2;
					break;
				
				case 45:
					return 4;
					break;
				
				case 64:
					return 6;
					break;
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 4;
					break;
				
				case 45:
					return 7;
					break;
				
				case 64:
					return 10;
					break;
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 49:
					return 1;
					break;
				
				case 46:
					return 3;
					break;
				
				case 45:
					return 5;
					break;
				
				case 64:
					return 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 16:
					return 1;
					break;
				
				case 14:
					return 2;
					break;
				
				case 63:
					return 3;
					break;
			}
			break;
		
		case 197:
			switch (iParam1)
			{
				case 62:
					return 1;
					break;
			}
			break;
		
		case 198:
			switch (iParam1)
			{
				case 46:
					return 1;
					break;
				
				case 65:
					return 2;
					break;
				
				case 14:
					return 3;
					break;
				
				case 71:
					return 4;
					break;
				
				case 64:
					return 5;
					break;
			}
			break;
		
		case 199:
			switch (iParam1)
			{
				case 46:
					return 1;
					break;
			}
			break;
	}
	return -1;
}

int func_537(int iParam0)//Position - 0x48253
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (63 - 1))
	{
		if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_3 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_538(int iParam0)//Position - 0x48288
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (94 - 1))
	{
		if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_3 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


int func_540(int iParam0)//Position - 0x482DC
{
	if (iParam0 == 84)
	{
		if (!GlobalFunc_5600(17, 7))
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 1:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 2:
		case 197:
		case 198:
		case 199:
			return 1;
		
		default:
	}
	return 0;
}

void func_541(int iParam0)//Position - 0x483BA
{
	struct<2> Var0;
	
	if (func_540(iLocal_45))
	{
		switch (iLocal_47)
		{
			case 0:
				StringCopy(&Var0, "LFI_MSGHEADER", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "LFI_FRIENDHEAD", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "LFI_STLKHEADER", 16);
				break;
		}
		if (iLocal_45 == 84)
		{
			if (!GlobalFunc_5600(17, 7))
			{
				StringCopy(&Var0, "LFI_PRIV1", 16);
			}
		}
	}
	else if (func_520(iLocal_45))
	{
		StringCopy(&Var0, "LFI_NOT_STLK", 16);
	}
	else
	{
		StringCopy(&Var0, "LFI_PRIV1", 16);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GlobalFunc_726(&Var0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_542(int iParam0)//Position - 0x48462
{
	struct<4> Var0;
	char cVar4[16];
	struct<2> Var8;
	struct<2> Var12;
	char cVar16[16];
	char cVar20[16];
	char cVar24[16];
	int iVar28;
	int iVar29;
	int iVar30;
	
	Var0 = { func_518(iLocal_45) };
	cVar4 = { func_548(iLocal_45) };
	Var8 = { func_547(iLocal_45) };
	Var12 = { func_546(iLocal_45) };
	cVar16 = { func_545(iLocal_45) };
	cVar20 = { func_544(iLocal_45) };
	cVar24 = { func_543(iLocal_45) };
	if (iLocal_45 >= 3)
	{
		iVar28 = 1;
	}
	else if (iLocal_47 == 0)
	{
		iVar28 = 0;
	}
	else
	{
		iVar28 = 1;
	}
	iVar29 = 0;
	if (func_540(iLocal_45))
	{
		iVar29 = 1;
	}
	iVar30 = 0;
	if (func_540(iLocal_45))
	{
		iVar30 = 1;
	}
	if (iLocal_45 == 84)
	{
		if (!GlobalFunc_5600(17, 7))
		{
			StringCopy(&cVar4, "BLANK", 16);
			StringCopy(&Var8, "", 16);
			StringCopy(&Var12, "", 16);
			StringCopy(&cVar16, "BLANK", 16);
			StringCopy(&cVar20, "BLANK", 16);
			StringCopy(&cVar24, "BLANK", 16);
			iVar29 = 0;
			iVar30 = 0;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_726(&Var0);
	GlobalFunc_2047(&cVar4);
	GlobalFunc_726(&Var8);
	GlobalFunc_726(&Var12);
	GlobalFunc_2047(&cVar16);
	GlobalFunc_2047(&cVar20);
	GlobalFunc_2047(&cVar24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar28);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar29);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar30);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

struct<4> func_543(int iParam0)//Position - 0x48585
{
	struct<4> Var0;
	
	StringCopy(&Var0, "MED_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "63", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "23", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "24", 16);
			break;
		
		case 5:
			StringConCat(&Var0, "25", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "5", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "27", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "5", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "28", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "22", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "48", 16);
			break;
		
		case 77:
			StringConCat(&Var0, "52", 16);
			break;
		
		case 78:
			StringConCat(&Var0, "1", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringConCat(&Var0, "50", 16);
			break;
		
		case 80:
			StringConCat(&Var0, "2", 16);
			break;
		
		case 81:
			StringConCat(&Var0, "50", 16);
			break;
		
		case 82:
			StringConCat(&Var0, "3", 16);
			break;
		
		case 83:
			StringConCat(&Var0, "48", 16);
			break;
		
		case 84:
			StringConCat(&Var0, "49", 16);
			break;
		
		case 85:
			StringConCat(&Var0, "4", 16);
			break;
		
		case 86:
			StringConCat(&Var0, "5", 16);
			break;
		
		case 87:
			StringConCat(&Var0, "50", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "49", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "5", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "51", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "50", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "48", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "56", 16);
			break;
		
		case 197:
			StringConCat(&Var0, "20", 16);
			break;
		
		case 198:
			StringConCat(&Var0, "21", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "22", 16);
			break;
		
		default:
			StringCopy(&Var0, "BLANK", 16);
			break;
	}
	return Var0;
}

struct<4> func_544(int iParam0)//Position - 0x487C6
{
	struct<4> Var0;
	
	StringCopy(&Var0, "MED_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "61", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "59", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "58", 16);
			break;
		
		case 5:
			StringConCat(&Var0, "61", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "57", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "57", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "57", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "59", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "57", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "43", 16);
			break;
		
		case 77:
			StringConCat(&Var0, "43", 16);
			break;
		
		case 78:
			StringConCat(&Var0, "42", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringConCat(&Var0, "45", 16);
			break;
		
		case 80:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 81:
			StringConCat(&Var0, "46", 16);
			break;
		
		case 82:
			StringConCat(&Var0, "42", 16);
			break;
		
		case 83:
			StringConCat(&Var0, "44", 16);
			break;
		
		case 84:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 85:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 86:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 87:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "42", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "47", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "43", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "41", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "42", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "54", 16);
			break;
		
		case 197:
			StringConCat(&Var0, "55", 16);
			break;
		
		case 198:
			StringConCat(&Var0, "53", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "53", 16);
			break;
		
		default:
			StringCopy(&Var0, "BLANK", 16);
			break;
	}
	return Var0;
}

struct<4> func_545(int iParam0)//Position - 0x48A0A
{
	struct<4> Var0;
	
	StringCopy(&Var0, "MED_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "33", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "40", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "33", 16);
			break;
		
		case 5:
			StringConCat(&Var0, "33", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "34", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "35", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "36", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "37", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "38", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "6", 16);
			break;
		
		case 77:
			StringConCat(&Var0, "6", 16);
			break;
		
		case 78:
			StringConCat(&Var0, "8", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringConCat(&Var0, "7", 16);
			break;
		
		case 80:
			StringConCat(&Var0, "9", 16);
			break;
		
		case 81:
			StringConCat(&Var0, "6", 16);
			break;
		
		case 82:
			StringConCat(&Var0, "7", 16);
			break;
		
		case 83:
			StringConCat(&Var0, "10", 16);
			break;
		
		case 84:
			StringConCat(&Var0, "11", 16);
			break;
		
		case 85:
			StringConCat(&Var0, "12", 16);
			break;
		
		case 86:
			StringConCat(&Var0, "13", 16);
			break;
		
		case 87:
			StringConCat(&Var0, "14", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "6", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "15", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "16", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "17", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "18", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "30", 16);
			break;
		
		case 197:
			StringConCat(&Var0, "31", 16);
			break;
		
		case 198:
			StringConCat(&Var0, "32", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "32", 16);
			break;
		
		default:
			StringCopy(&Var0, "BLANK", 16);
			break;
	}
	return Var0;
}

struct<4> func_546(int iParam0)//Position - 0x48C4E
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_520(iParam0))
	{
		return Var0;
	}
	if (!func_540(iParam0))
	{
		return Var0;
	}
	Var0 = { func_518(iParam0) };
	StringConCat(&Var0, "_RP", 16);
	return Var0;
}

struct<4> func_547(int iParam0)//Position - 0x48C94
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_520(iParam0))
	{
		return Var0;
	}
	if (!func_540(iParam0))
	{
		return Var0;
	}
	Var0 = { func_518(iParam0) };
	StringConCat(&Var0, "_OC", 16);
	return Var0;
}

struct<4> func_548(int iParam0)//Position - 0x48CDA
{
	struct<4> Var0;
	
	StringCopy(&Var0, "LARGE_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "22", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "1", 16);
			break;
		
		case 77:
			StringConCat(&Var0, "2", 16);
			break;
		
		case 78:
			StringConCat(&Var0, "3", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringConCat(&Var0, "4", 16);
			break;
		
		case 80:
			StringConCat(&Var0, "5", 16);
			break;
		
		case 81:
			StringConCat(&Var0, "6", 16);
			break;
		
		case 82:
			StringConCat(&Var0, "7", 16);
			break;
		
		case 83:
			StringConCat(&Var0, "8", 16);
			break;
		
		case 84:
			StringConCat(&Var0, "9", 16);
			break;
		
		case 85:
			StringConCat(&Var0, "10", 16);
			break;
		
		case 86:
			StringConCat(&Var0, "11", 16);
			break;
		
		case 87:
			StringConCat(&Var0, "12", 16);
			break;
		
		case 104:
			StringConCat(&Var0, "13", 16);
			break;
		
		case 105:
			StringConCat(&Var0, "14", 16);
			break;
		
		case 106:
			StringConCat(&Var0, "15", 16);
			break;
		
		case 107:
			StringConCat(&Var0, "16", 16);
			break;
		
		case 108:
			StringConCat(&Var0, "17", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "18", 16);
			break;
		
		case 197:
			StringConCat(&Var0, "19", 16);
			break;
		
		case 198:
			StringConCat(&Var0, "20", 16);
			break;
		
		case 199:
			StringConCat(&Var0, "21", 16);
			break;
		
		case 3:
			StringConCat(&Var0, "23", 16);
			break;
		
		case 4:
			StringConCat(&Var0, "24", 16);
			break;
		
		case 5:
			StringConCat(&Var0, "25", 16);
			break;
		
		case 6:
			StringConCat(&Var0, "26", 16);
			break;
		
		case 7:
			StringConCat(&Var0, "27", 16);
			break;
		
		case 8:
			StringConCat(&Var0, "28", 16);
			break;
		
		case 9:
			StringConCat(&Var0, "29", 16);
			break;
		
		case 10:
			StringConCat(&Var0, "30", 16);
			break;
		
		default:
			StringCopy(&Var0, "BLANK", 16);
			break;
	}
	return Var0;
}

void func_549(int iParam0, int iParam1)//Position - 0x48F1B
{
	int iVar0;
	
	if (iLocal_192 < 19)
	{
		if (iLocal_192 < 0)
		{
			iLocal_192 = 0;
		}
		iLocal_192++;
		iLocal_150[iLocal_192] = iParam0;
		uLocal_171[iLocal_192] = iParam1;
	}
	else
	{
		iVar0 = 1;
		while (iVar0 < 20)
		{
			iLocal_150[(iVar0 - 1)] = iLocal_150[iVar0];
			iVar0++;
		}
		iLocal_150[iLocal_192] = iParam0;
	}
}

void func_550(int iParam0, int iParam1, var uParam2)//Position - 0x48F75
{
	var uVar0;
	
	uVar0 = iParam1;
	uVar0 = uVar0;
	iLocal_485 = iParam0;
	func_557(uParam2);
	func_552(iParam0);
	func_551(iLocal_461);
}

void func_551(int iParam0)//Position - 0x48F9D
{
	int iVar0;
	
	if (iLocal_484 < 19)
	{
		if (iLocal_484 < 0)
		{
			iLocal_484 = 0;
		}
		iLocal_484++;
		iLocal_463[iLocal_484] = iParam0;
	}
	else
	{
		iVar0 = 1;
		while (iVar0 < 20)
		{
			iLocal_463[(iVar0 - 1)] = iLocal_463[iVar0];
			iVar0++;
		}
		iLocal_463[iLocal_484] = iParam0;
	}
}

void func_552(int iParam0)//Position - 0x48FFA
{
	func_555(iLocal_461, iParam0);
	func_553(iLocal_461, iParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_553(int iParam0, int iParam1)//Position - 0x49023
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	iVar0 = ((iParam0 - 1) / 10) * 10 + 1;
	iVar1 = iVar0 + 10;
	if (iParam0 < 10)
	{
		iVar0 = 1;
		iVar1 = 10;
	}
	else
	{
		iVar0 = ((iParam0 - 1) / 10) * 10 + 1;
		iVar1 = iVar0 + 10;
	}
	if (iVar1 > iLocal_462)
	{
		iVar1 = iLocal_462;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
		iVar2++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (iLocal_461 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iLocal_461 == func_554())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_554()//Position - 0x49189
{
	if (iLocal_462 > 0)
	{
		return iLocal_462;
	}
	return iLocal_462;
}

void func_555(int iParam0, int iParam1)//Position - 0x491A1
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam0 < 1 || iParam0 > 50)
	{
	}
	iVar4 = iLocal_308[iLocal_257[(iParam0 - 1)]];
	iVar5 = iLocal_359[iLocal_257[(iParam0 - 1)]];
	iVar6 = (iVar5 - iVar4) + 1;
	if (iVar6 < 1)
	{
		return;
	}
	if (iVar4 < 0 || iVar4 >= 480)
	{
		return;
	}
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar8 = (iVar4 + iVar7);
		if (iVar8 >= 480)
		{
			return;
		}
		Var0 = { func_556(iVar8) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7 + 2);
		GlobalFunc_726(&Var0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar7++;
	}
}

struct<4> func_556(int iParam0)//Position - 0x4924E
{
	char* sVar0;
	struct<4> Var1;
	
	sVar0 = "BLE_";
	if (iParam0 < 0 || iParam0 >= 480)
	{
		StringCopy(&Var1, "BLE_BLANK", 16);
		return Var1;
	}
	StringCopy(&Var1, "", 16);
	StringConCat(&Var1, sVar0, 16);
	StringIntConCat(&Var1, iParam0, 16);
	return Var1;
}

void func_557(var uParam0)//Position - 0x49296
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_308[0] = 0;
	iLocal_359[0] = 9;
	iLocal_308[1] = 10;
	iLocal_359[1] = 19;
	iLocal_308[2] = 20;
	iLocal_359[2] = 29;
	iLocal_308[3] = 30;
	iLocal_359[3] = 39;
	iLocal_308[4] = 40;
	iLocal_359[4] = 49;
	iLocal_308[5] = 50;
	iLocal_359[5] = 58;
	iLocal_308[6] = 60;
	iLocal_359[6] = 79;
	iLocal_308[7] = 80;
	iLocal_359[7] = 89;
	iLocal_308[8] = 90;
	iLocal_359[8] = 98;
	iLocal_308[9] = 99;
	iLocal_359[9] = 108;
	iLocal_308[10] = 99;
	iLocal_359[10] = 108;
	iLocal_308[11] = 109;
	iLocal_359[11] = 118;
	iLocal_308[12] = 119;
	iLocal_359[12] = 128;
	iLocal_308[13] = 129;
	iLocal_359[13] = 138;
	iLocal_308[14] = 139;
	iLocal_359[14] = 148;
	iLocal_308[15] = 149;
	iLocal_359[15] = 158;
	iLocal_308[16] = 159;
	iLocal_359[16] = 168;
	iLocal_308[17] = 169;
	iLocal_359[17] = 179;
	iLocal_308[18] = 180;
	iLocal_359[18] = 189;
	iLocal_308[19] = 190;
	iLocal_359[19] = 199;
	iLocal_308[20] = 200;
	iLocal_359[20] = 209;
	iLocal_308[21] = 210;
	iLocal_359[21] = 219;
	iLocal_308[22] = 220;
	iLocal_359[22] = 230;
	iLocal_308[23] = 231;
	iLocal_359[23] = 240;
	iLocal_308[24] = 241;
	iLocal_359[24] = 250;
	iLocal_308[25] = 251;
	iLocal_359[25] = 260;
	iLocal_308[26] = 261;
	iLocal_359[26] = 270;
	if (GlobalFunc_485(76))
	{
		iLocal_308[27] = 271;
		iLocal_359[27] = 280;
	}
	else
	{
		iLocal_308[27] = 281;
		iLocal_359[27] = 290;
	}
	iLocal_308[28] = 291;
	iLocal_359[28] = 300;
	iLocal_308[29] = 301;
	iLocal_359[29] = 310;
	iLocal_308[30] = 311;
	iLocal_359[30] = 320;
	iLocal_308[31] = 321;
	iLocal_359[31] = 329;
	iLocal_308[32] = 330;
	iLocal_359[32] = 339;
	iLocal_308[33] = 340;
	iLocal_359[33] = 349;
	iLocal_308[34] = 350;
	iLocal_359[34] = 359;
	iLocal_308[35] = 360;
	iLocal_359[35] = 369;
	iLocal_308[36] = 370;
	iLocal_359[36] = 379;
	iLocal_308[37] = 370;
	iLocal_359[37] = 379;
	iLocal_308[38] = 380;
	iLocal_359[38] = 389;
	iLocal_308[39] = 390;
	iLocal_359[39] = 399;
	iLocal_308[40] = 400;
	iLocal_359[40] = 409;
	iLocal_308[41] = 410;
	iLocal_359[41] = 419;
	iLocal_308[42] = 410;
	iLocal_359[42] = 419;
	iLocal_308[43] = 420;
	iLocal_359[43] = 429;
	iLocal_308[44] = 430;
	iLocal_359[44] = 439;
	iLocal_308[45] = 440;
	iLocal_359[45] = 449;
	iLocal_308[46] = 450;
	iLocal_359[46] = 458;
	iLocal_308[47] = 459;
	iLocal_359[47] = 468;
	iLocal_308[48] = 469;
	iLocal_359[48] = 478;
	iLocal_410[0] = 0;
	iLocal_410[1] = 1;
	iLocal_410[2] = 2;
	iLocal_410[3] = 40;
	iLocal_410[4] = 17;
	iLocal_410[5] = 18;
	iLocal_410[6] = 19;
	iLocal_410[7] = 44;
	iLocal_410[8] = 43;
	iLocal_410[9] = 90;
	iLocal_410[10] = 90;
	iLocal_410[11] = 62;
	iLocal_410[12] = 63;
	iLocal_410[13] = 12;
	iLocal_410[14] = 13;
	iLocal_410[15] = 64;
	iLocal_410[16] = 20;
	iLocal_410[17] = 21;
	iLocal_410[18] = 29;
	iLocal_410[19] = 30;
	iLocal_410[20] = 31;
	iLocal_410[21] = 38;
	iLocal_410[22] = 41;
	iLocal_410[23] = 74;
	iLocal_410[24] = 75;
	iLocal_410[25] = 59;
	iLocal_410[26] = 8;
	iLocal_410[27] = 9;
	iLocal_410[28] = 45;
	iLocal_410[29] = 10;
	iLocal_410[30] = 14;
	iLocal_410[31] = 15;
	iLocal_410[32] = 16;
	iLocal_410[33] = 93;
	iLocal_410[34] = 65;
	iLocal_410[35] = 46;
	iLocal_410[36] = 69;
	iLocal_410[37] = 70;
	iLocal_410[38] = 22;
	iLocal_410[39] = 61;
	iLocal_410[40] = 49;
	iLocal_410[41] = 84;
	iLocal_410[42] = 85;
	iLocal_410[43] = 27;
	iLocal_410[44] = (8 + 200);
	iLocal_410[45] = (38 + 200);
	iLocal_410[46] = (39 + 200);
	iLocal_410[47] = (47 + 200);
	iLocal_410[48] = (50 + 200);
	GlobalFunc_8514(uParam0, 1, 1, 0);
	iVar0 = GlobalFunc_56();
	if (iVar0 == 0 || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		iLocal_257[0] = 0;
		iLocal_461 = 1;
		iLocal_462 = 1;
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if ((uParam0[iVar1 /*2*/])->f_1 == 7)
		{
			(*uParam0)[iVar1 /*2*/] += 200;
		}
		iVar1++;
	}
	iLocal_462 = 0;
	iVar1 = (iVar1 - 1);
	while (iVar1 >= 0)
	{
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (iLocal_410[iVar2] == (*uParam0)[iVar1 /*2*/])
			{
				if (iLocal_462 < 50)
				{
					iLocal_257[iLocal_462] = iVar2;
					iLocal_462++;
					iVar2 = 51;
				}
			}
			iVar2++;
		}
		iVar1 = (iVar1 - 1);
	}
	if (iLocal_462 == 0)
	{
		iLocal_257[0] = 0;
		iLocal_462 = 1;
	}
	func_558();
	iLocal_461 = 1;
}

void func_558()//Position - 0x49897
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_463[iVar0] = 0;
		iVar0++;
	}
	iLocal_484 = 0;
}








void func_566(int iParam0, int iParam1)//Position - 0x49E7E
{
	int iVar0;
	
	switch (iParam1)
	{
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (GlobalFunc_485(88))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISABLE_BUTTON");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 12:
			STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
			if (iVar0 < 1)
			{
				STATS::STAT_SET_INT(joaat("num_epsilon_step"), 1, 1);
				GlobalFunc_4(23, 1);
			}
			GlobalFunc_585(86, 1);
			break;
		
		case 14:
			if (Global_67136 == -1)
			{
				Global_67136 = 1;
			}
			break;
		
		case 15:
			break;
		
		case 16:
		case 22:
			switch (Global_67137)
			{
				case 3:
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GlobalFunc_726("EPSI_IP_FRIN");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					break;
				
				case 1:
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GlobalFunc_726("EPSI_NO_STOCK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					break;
				
				case 0:
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GlobalFunc_726("EPSI_NO_MP_VISIT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					break;
			}
			break;
		
		default:
			Global_67136 = -1;
			break;
	}
	if (iParam1 != 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_567(int iParam0, var uParam1)//Position - 0x49FC2
{
	int iVar0;
	
	if (GlobalFunc_111())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			GlobalFunc_173(uParam1, 1, iVar0, "FRANKLIN", 0, 1);
			while (!GlobalFunc_10641(uParam1, "EPSWAUD", "EPSW_BACKF", 1, 0, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
			break;
		
		case 2:
			GlobalFunc_173(uParam1, 2, iVar0, "TREVOR", 0, 1);
			while (!GlobalFunc_10641(uParam1, "EPSWAUD", "EPSW_BACKT", 1, 0, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
			break;
	}
}


void func_569(int iParam0, int iParam1)//Position - 0x4A0AB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	bVar1 = false;
	iVar2 = 0;
	iVar3 = 0;
	if (iParam1 != 15)
	{
		if (Global_54739)
		{
			if (Global_67097)
			{
				func_651("WWW_BAWSAQ_COM_S_ERROR");
			}
			else
			{
				func_651("WWW_LCN_D_EXCHANGE_COM_S_ERROR");
			}
			Global_67081 = -1;
			return;
		}
		if (Global_67097)
		{
			if (((!NETWORK::NETWORK_IS_SIGNED_ONLINE() || Global_68245) || Global_54735) || Global_54736)
			{
				if (Global_67132 < Global_67134)
				{
					func_651("WWW_BAWSAQ_COM_S_ERROR");
				}
				return;
			}
		}
		else if (Global_68245 || Global_54735)
		{
			func_651("WWW_LCN_D_EXCHANGE_COM_S_ERROR");
			return;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "PROXY_FUNCTION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	switch (GlobalFunc_8329())
	{
		case 0:
			iVar0 = 0;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_2033(0));
			break;
		
		case 2:
			iVar0 = 2;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_2033(2));
			break;
		
		case 1:
			iVar0 = 1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_2033(1));
			break;
		
		default:
			if (Global_68245)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE()));
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar7 = SYSTEM::TO_FLOAT(Global_51925[iVar0]);
	switch (iParam1)
	{
		case 1:
			func_597(iParam0, 0);
			func_596(iParam0, 4);
			func_594(iParam0);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
			GlobalFunc_726("BS_NP_GENNEWS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (GlobalFunc_230(44) && !GlobalFunc_230(21))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
				GlobalFunc_726("BS_NEWS_LFIH1");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
				GlobalFunc_726("BS_NEWS_LFIB1");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
				GlobalFunc_726("BS_NEWS_LFIH2");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
				GlobalFunc_726("BS_NEWS_LFIB2");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
				GlobalFunc_726("BS_NEWS_LFIH3");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
				GlobalFunc_726("BS_NEWS_LFIB3");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				if (!func_592(iParam0, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
					GlobalFunc_726(&(Global_54597[0 /*34*/][0 /*11*/].f_1));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (!func_592(iParam0, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
					GlobalFunc_726(&(Global_54597[0 /*34*/][1 /*11*/].f_1));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
				GlobalFunc_726(&(Global_54597[0 /*34*/][2 /*11*/].f_1));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 2:
			Global_67079 = 1;
			Global_67081 = -1;
			Global_67080 = -1;
			Global_54734 = 0;
			func_597(iParam0, 0);
			func_596(iParam0, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
			GlobalFunc_726("BS_WB_MLIST");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
			GlobalFunc_726("BS_WB_PERCHA");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
			GlobalFunc_726("BS_WB_STCKLST");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
			GlobalFunc_726("BS_WB_LCSTWT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_591(iParam0, 0, 7);
			func_590(iParam0, 15);
			break;
		
		case 3:
			Global_67079 = 0;
			Global_67081 = -1;
			Global_67080 = -1;
			Global_54734 = 0;
			func_597(iParam0, 0);
			func_596(iParam0, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
			GlobalFunc_726("BS_WB_MSTOCK");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
			GlobalFunc_726("BS_WB_BUYPRC");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_591(iParam0, 1, 7);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
			GlobalFunc_726("BS_TL_PROF");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
			GlobalFunc_726("BS_TL_SEARCH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(13f);
			GlobalFunc_726("BS_TL_GOSTRT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(14f);
			GlobalFunc_726("BS_TL_SELLALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_589(iParam0, 15);
			break;
		
		case 4:
			Global_54734 = 0;
			if (Global_67075 < 0)
			{
			}
			else
			{
				if (Global_67081 == -1)
				{
					if (Global_67075 > 10)
					{
						Global_67081 = (Global_67075 - Global_67077);
						if (!Global_67079)
						{
							iVar4 = func_588(iVar0, Global_67081, Global_67097);
							Global_67081 = iVar4;
							Global_67080 = -1;
						}
						else
						{
							bVar1 = false;
							iVar2 = 0;
							iVar3 = 0;
							while (!bVar1)
							{
								if (iVar3 < 80)
								{
									if (Global_67097 && Global_47050[iVar3 /*36*/].f_9 <= 0f)
									{
										Global_67081++;
									}
									if (iVar2 == Global_67081 && Global_47050[iVar3 /*36*/].f_8 == Global_67097)
									{
										bVar1 = true;
										Global_67081 = iVar3;
									}
									else if (iVar3 > (80 - 1))
									{
										bVar1 = true;
									}
									else
									{
										if (Global_47050[iVar3 /*36*/].f_8 == Global_67097)
										{
											iVar2++;
										}
										iVar3++;
									}
								}
								else
								{
									bVar1 = true;
								}
							}
							iVar4 = Global_67081;
						}
					}
				}
				else
				{
					iVar4 = Global_67081;
				}
				if (Global_67097 != Global_47050[iVar4 /*36*/].f_8)
				{
					Global_67097 = Global_47050[iVar4 /*36*/].f_8;
					if (Global_67097)
					{
						func_651("WWW_BAWSAQ_COM_S_STOCK_VIEW");
					}
					else
					{
						func_651("WWW_LCN_D_EXCHANGE_COM_S_STOCK_VIEW");
					}
					return;
				}
				func_583(iParam0, iVar4);
			}
			break;
		
		case 6:
			if (Global_67081 == -1)
			{
			}
			else
			{
				func_597(iParam0, 0);
				iVar4 = Global_67081;
				func_581(iParam0, iVar4);
			}
			break;
		
		case 7:
			if (Global_67081 == -1)
			{
			}
			else
			{
				func_597(iParam0, 0);
				iVar4 = Global_67081;
				func_578(iParam0, iVar4);
			}
			break;
		
		case 8:
			if (Global_67081 == -1)
			{
			}
			else
			{
				iVar4 = Global_67081;
				func_577(iParam0, iVar4);
			}
			break;
		
		case 9:
			if (Global_67081 > -1)
			{
				iVar4 = Global_67081;
				func_576(iParam0, iVar4);
				Global_67082 = 0;
				Global_67085 = 0f;
				Global_67086 = 0f;
				Global_67087 = 0f;
			}
			else if (Global_67081 == -2)
			{
				func_575(iParam0);
			}
			break;
		
		case 11:
			func_597(iParam0, 0);
			func_596(iParam0, 4);
			func_574(iParam0, 5);
			break;
		
		case 10:
			func_597(iParam0, 0);
			func_573(iParam0, 0);
			break;
		
		case 12:
			func_597(iParam0, 0);
			func_573(iParam0, 1);
			break;
		
		case 13:
			func_597(iParam0, 0);
			func_573(iParam0, 2);
			break;
		
		case 14:
			func_597(iParam0, 0);
			func_573(iParam0, 3);
			break;
		
		case 15:
			func_597(iParam0, 0);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
			GlobalFunc_726("");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (Global_68245)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
				GlobalFunc_726("BS_WB_FAI1MP");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
				GlobalFunc_726("BS_WB_FAI2MP");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (Global_54739)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
				GlobalFunc_726("BS_WB_FAI1NS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
				GlobalFunc_726("BS_WB_FAI2NS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_54739 = 0;
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
				GlobalFunc_726("BS_WB_FAI1");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
				GlobalFunc_726("BS_WB_FAI2");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 16:
			func_597(iParam0, 0);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
			GlobalFunc_726(" ");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
			GlobalFunc_726("BS_SL_ALLSHRS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
			fVar5 = func_572(iVar0);
			if ((fVar5 + fVar7) > 2.147484E+09f)
			{
				fVar5 = (2.147484E+09f - fVar7);
			}
			Global_54734 = SYSTEM::FLOOR(fVar5);
			fVar5 = (fVar5 - func_571(iVar0));
			iVar6 = SYSTEM::FLOOR(fVar5);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BS_YU_SURE");
			if (fVar5 > 0f)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("BS_TL_PROF");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iVar6, 1);
			}
			else
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("BS_TL_LOSS");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iVar6), 1);
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
			GlobalFunc_726("BS_WB_CONFTRSH");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
			GlobalFunc_726("BS_WB_CAN");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_54737)
	{
		func_570(iParam0, 0);
		Global_54737 = 0;
	}
	if (iParam1 == 6 || iParam1 == 7)
	{
		if (Global_67082 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISABLE_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISABLE_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_570(int iParam0, bool bParam1)//Position - 0x4A9EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (!bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (Global_47050[iVar0 /*36*/].f_9 > 0f)
			{
				if (Global_47050[iVar0 /*36*/].f_8 == Global_67097)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0 /*36*/].f_14[Global_47050[iVar0 /*36*/].f_13]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0 /*36*/].f_33);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0 /*36*/].f_34);
					GlobalFunc_726(&(Global_47050[iVar0 /*36*/].f_4));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TICKERTAPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.5f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_571(int iParam0)//Position - 0x4AAC7
{
	float fVar0;
	int iVar1;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (GlobalFunc_2035(iParam0, iVar1) > 0)
		{
			fVar0 = (fVar0 + func_70(iParam0, iVar1));
		}
		iVar1++;
	}
	return fVar0;
}

float func_572(int iParam0)//Position - 0x4AB03
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar2 = GlobalFunc_2035(iParam0, iVar1);
		if (iVar2 > 0)
		{
			iVar3 = GlobalFunc_2034(iParam0, iVar1);
			fVar4 = func_75(iVar3);
			if (fVar4 > 0f)
			{
				fVar5 = (fVar4 * SYSTEM::TO_FLOAT(iVar2));
				fVar0 = (fVar0 + fVar5);
			}
		}
		iVar1++;
	}
	return fVar0;
}

void func_573(int iParam0, int iParam1)//Position - 0x4AB61
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
	GlobalFunc_726("BS_NP_GENNEWS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
	GlobalFunc_726("BS_NP_CITNEWS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
	GlobalFunc_726("BS_NP_MONNEWS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
	GlobalFunc_726("BS_NP_TECNEWS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (iParam1)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
			GlobalFunc_726("BS_NP_GENNEWS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
			GlobalFunc_726("BS_NP_CITNEWS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
			GlobalFunc_726("BS_NP_MONNEWS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
			GlobalFunc_726("BS_NP_TECNEWS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
	GlobalFunc_726(&(Global_54597[iParam1 /*34*/][0 /*11*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GlobalFunc_726(&(Global_54597[iParam1 /*34*/][0 /*11*/].f_5));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
	GlobalFunc_726(&(Global_54597[iParam1 /*34*/][1 /*11*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
	GlobalFunc_726(&(Global_54597[iParam1 /*34*/][1 /*11*/].f_5));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(13f);
	GlobalFunc_726(&(Global_54597[iParam1 /*34*/][2 /*11*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(14f);
	GlobalFunc_726(&(Global_54597[iParam1 /*34*/][2 /*11*/].f_5));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_574(int iParam0, int iParam1)//Position - 0x4AD6E
{
	float fVar0;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_SOR");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_GOBUY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_575(int iParam0)//Position - 0x4ADBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	func_597(iParam0, 0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
	GlobalFunc_726("BS_WB_CONTBU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1 + 5;
		StringCopy(&Var3, "BS_SACO_", 16);
		StringIntConCat(&Var3, iVar2, 16);
		switch (iVar2)
		{
			case 9:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67098);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 11:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_67099));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 17:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(Global_67100));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 19:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67102);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 21:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(Global_67101));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 23:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67103);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 13:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67098);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 14:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67099);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			case 15:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67104);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			
			default:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar2));
				GlobalFunc_726(&Var3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
		}
		iVar1++;
	}
}

void func_576(int iParam0, int iParam1)//Position - 0x4AFBA
{
	float fVar0;
	
	func_597(iParam0, 0);
	fVar0 = func_75(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
	GlobalFunc_726("BS_WB_CONTBU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_67078)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
		GlobalFunc_726("BS_WB_BS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
		GlobalFunc_726("BS_WB_SS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
	GlobalFunc_726("BS_TL_SHARES");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67082);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GlobalFunc_726("BS_WB_TRCOM");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67085);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
	GlobalFunc_726("BS_WB_COST");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_67078)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
		GlobalFunc_726("BS_WB_COST");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
		GlobalFunc_726("BS_WB_PROLOS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(13f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(14f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(15f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_34);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(16f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_HIGHFH"))
	{
		GlobalFunc_726("BS_WB_HIGHFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_HIGH");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(17f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_31);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_LOWFH"))
	{
		GlobalFunc_726("BS_WB_LOWFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_LOW");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(19f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_32);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(20f);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(21f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(898989);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(22f);
	GlobalFunc_726("BS_WB_VAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(23f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_577(int iParam0, int iParam1)//Position - 0x4B2DE
{
	float fVar0;
	
	func_597(iParam0, 0);
	if (Global_67078)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
		GlobalFunc_726("BS_WB_BS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
		GlobalFunc_726("BS_WB_SS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	fVar0 = func_75(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
	GlobalFunc_726("BS_TL_SHARES");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(787878);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(13f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67082);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(14f);
	GlobalFunc_726("BS_WB_CONFTR");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(15f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67085);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(16f);
	GlobalFunc_726("BS_WB_COST");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
	GlobalFunc_726("BS_WB_CONF");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(19f);
	GlobalFunc_726("BS_WB_CAN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(20f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_34);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(21f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_HIGHFH"))
	{
		GlobalFunc_726("BS_WB_HIGHFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_HIGH");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(22f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_31);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(23f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_LOWFH"))
	{
		GlobalFunc_726("BS_WB_LOWFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_LOW");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(24f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_32);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(25f);
	GlobalFunc_726("BS_WB_VAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(26f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_578(int iParam0, int iParam1)//Position - 0x4B5DC
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	switch (GlobalFunc_8329())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 1:
			iVar0 = 1;
			break;
	}
	if (Global_67080 == -1)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (GlobalFunc_2034(iVar0, iVar1) == iParam1 && GlobalFunc_2035(iVar0, iVar1) > 0)
			{
				Global_67080 = iVar1;
			}
			iVar1++;
		}
	}
	if (Global_67080 == -1)
	{
	}
	fVar2 = func_75(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
	GlobalFunc_726("BS_BU_SELL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/]));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(676767);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_67082 < 0)
	{
		Global_67082 = 0;
	}
	Global_67084 = GlobalFunc_2035(iVar0, Global_67080);
	if (Global_67082 > Global_67084)
	{
		Global_67082 = Global_67084;
	}
	fVar3 = fVar2;
	fVar4 = (IntToFloat(Global_67082) * fVar3);
	fVar5 = SYSTEM::TO_FLOAT(Global_51925[iVar0]);
	fVar6 = 2.147484E+09f;
	if ((fVar4 + fVar5) > fVar6)
	{
		Global_67082 = SYSTEM::FLOOR(((fVar6 - fVar5) / fVar3));
		Global_67084 = Global_67082;
	}
	Global_67085 = (IntToFloat(Global_67082) * fVar2);
	Global_67086 = func_70(iVar0, Global_67080);
	Global_67087 = (Global_67085 - (Global_67086 * (SYSTEM::TO_FLOAT(Global_67082) / SYSTEM::TO_FLOAT(GlobalFunc_2035(iVar0, Global_67080)))));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67082);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(13f);
	GlobalFunc_726("BS_TL_SHARES");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(14f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_2035(iVar0, Global_67080));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(15f);
	GlobalFunc_726("BS_TL_SHOWN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(16f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67086);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(17f);
	GlobalFunc_726("BS_TL_IVEST");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_67087 > -1E-06f)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67087);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(19f);
		GlobalFunc_726("BS_TL_PROF");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(-Global_67087);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(19f);
		GlobalFunc_726("BS_TL_LOSS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(20f);
	GlobalFunc_726("BS_BU_SELL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(21f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(22f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(23f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_34);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(24f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_HIGHFH"))
	{
		GlobalFunc_726("BS_WB_HIGHFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_HIGH");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar7 = func_580(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(25f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(26f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_LOWFH"))
	{
		GlobalFunc_726("BS_WB_LOWFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_LOW");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar8 = func_579(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(27f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(28f);
	GlobalFunc_726("BS_WB_VAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(29f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(30f);
	GlobalFunc_726("BS_TL_SELLALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_579(int iParam0)//Position - 0x4BAF5
{
	float fVar0;
	int iVar1;
	
	fVar0 = 3.402823E+38f;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		if (Global_47050[iParam0 /*36*/].f_14[iVar1] > 0f)
		{
			if (fVar0 > Global_47050[iParam0 /*36*/].f_14[iVar1])
			{
				fVar0 = Global_47050[iParam0 /*36*/].f_14[iVar1];
			}
		}
		iVar1++;
	}
	return fVar0;
}

float func_580(int iParam0)//Position - 0x4BB4D
{
	float fVar0;
	int iVar1;
	
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		if (Global_47050[iParam0 /*36*/].f_14[iVar1] > 0f)
		{
			if (fVar0 < Global_47050[iParam0 /*36*/].f_14[iVar1])
			{
				fVar0 = Global_47050[iParam0 /*36*/].f_14[iVar1];
			}
		}
		iVar1++;
	}
	return fVar0;
}

void func_581(int iParam0, int iParam1)//Position - 0x4BBA1
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (iParam1 == -1)
	{
		return;
	}
	fVar0 = func_75(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
	GlobalFunc_726("BS_BU_BUY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/]));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99999);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (GlobalFunc_8329())
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			break;
		
		case 2:
			iVar1 = 2;
			iVar2 = 2;
			break;
		
		case 1:
			iVar1 = 1;
			iVar2 = 1;
			break;
	}
	if (Global_67082 < 0)
	{
		if (Global_67083 > 1000000000)
		{
			Global_67082 = 2147483647;
		}
		else
		{
			Global_67082 = 0;
		}
	}
	Global_67083 = Global_67082;
	Global_67084 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_51925[iVar2]) / fVar0));
	if (Global_67084 < 0)
	{
		Global_67084 = 2147483647;
	}
	bVar3 = false;
	iVar4 = -1;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 10)
	{
		if (GlobalFunc_2034(iVar1, iVar5) == iParam1 && !bVar3)
		{
			if (GlobalFunc_2035(iVar1, iVar5) > 0)
			{
				iVar4 = iVar5;
				bVar3 = true;
				Global_67084 = GlobalFunc_254(Global_67084, 0, (2147483647 - GlobalFunc_2035(iVar1, iVar5)));
			}
		}
		iVar5++;
	}
	Global_67082 = GlobalFunc_254(Global_67082, 0, Global_67084);
	Global_67085 = (IntToFloat(Global_67082) * fVar0);
	if (Global_67085 > SYSTEM::TO_FLOAT(Global_51925[iVar2]))
	{
		Global_67085 = SYSTEM::TO_FLOAT(Global_51925[iVar2]);
	}
	if (!bVar3)
	{
		Global_67086 = 0f;
		Global_67087 = 0f;
	}
	else
	{
		Global_67086 = SYSTEM::TO_FLOAT(GlobalFunc_2035(iVar1, iVar4));
		Global_67087 = func_70(iVar1, iVar4);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(12f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67082);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(13f);
	GlobalFunc_726("BS_TL_SHARES");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(14f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67085);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(15f);
	GlobalFunc_726("BS_TL_GSUM");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(16f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67086);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(17f);
	GlobalFunc_726("BS_TL_SHOWN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_67087);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(19f);
	GlobalFunc_726("BS_TL_IVEST");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(20f);
	GlobalFunc_726("BS_BU_BUY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(21f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(22f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(23f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_34);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(24f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_HIGHFH"))
	{
		GlobalFunc_726("BS_WB_HIGHFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_HIGH");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(25f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_31);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(26f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_LOWFH"))
	{
		GlobalFunc_726("BS_WB_LOWFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_LOW");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(27f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_32);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(28f);
	GlobalFunc_726("BS_WB_VAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(29f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_583(int iParam0, int iParam1)//Position - 0x4C0A2
{
	float fVar0;
	int iVar1;
	
	if (Global_47050[iParam1 /*36*/].f_8 == 0)
	{
		func_587(iParam0, iParam1, 37, 38);
	}
	else
	{
		func_586(iParam0, iParam1, 37, 38);
	}
	func_597(iParam0, 0);
	fVar0 = func_75(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
	GlobalFunc_726("BS_WB_STCKINF");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(5f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/]));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(8f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(777777);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(9f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GlobalFunc_726(&(Global_47050[iParam1 /*36*/].f_4));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_67097)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
		GlobalFunc_726("BS_PH_HRS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(11f);
		GlobalFunc_726("BS_PH_GR");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(17f);
	GlobalFunc_726("BS_BU_BUY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar1 = 0;
	switch (GlobalFunc_8329())
	{
		case 0:
			iVar1 = func_585(iParam1, 0);
			break;
		
		case 2:
			iVar1 = func_585(iParam1, 2);
			break;
		
		case 1:
			iVar1 = func_585(iParam1, 1);
			break;
	}
	if (iVar1 > 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
		GlobalFunc_726("BS_BU_SELL");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(18f);
		GlobalFunc_726("");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(19f);
	GlobalFunc_726(func_584(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(20f);
	GlobalFunc_726("BS_PH_F");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(21f);
	GlobalFunc_726(func_584(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(22f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_34);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(23f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_HIGHFH"))
	{
		GlobalFunc_726("BS_WB_HIGHFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_HIGH");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(24f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_31);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(25f);
	if (Global_67097 && HUD::DOES_TEXT_LABEL_EXIST("BS_WB_LOWFH"))
	{
		GlobalFunc_726("BS_WB_LOWFH");
	}
	else
	{
		GlobalFunc_726("BS_WB_LOW");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(26f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_32);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(27f);
	GlobalFunc_726("BS_WB_VAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(28f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(33f);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(34f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(88888f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(29f);
	GlobalFunc_726("BS_H_LST");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(30f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((fVar0 - Global_47050[iParam1 /*36*/].f_33));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(31f);
	GlobalFunc_726("BS_H_CHNG");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(32f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iParam1 /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(35f);
	GlobalFunc_726("BS_H_OWNED");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(36f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_584(int iParam0)//Position - 0x4C540
{
	switch (iParam0)
	{
		case 0:
			return "BS_CO_AMUDESC";
		
		case 1:
			return "BS_CO_BDGDESC";
		
		case 2:
			return "BS_CO_BOLDESC";
		
		case 3:
			return "BS_CO_BFADESC";
		
		case 4:
			return "BS_CO_BINDESC";
		
		case 5:
			return "BS_CO_BTRDESC";
		
		case 6:
			return "BS_CO_BLEDESC";
		
		case 7:
			return "BS_CO_BRUDESC";
		
		case 8:
			return "BS_CO_CNTDESC";
		
		case 9:
			return "BS_CO_CREDESC";
		
		case 10:
			return "BS_CO_DGPDESC";
		
		case 11:
			return "BS_CO_WAPDESC";
		
		case 12:
			return "BS_CO_FACDESC";
		
		case 13:
			return "BS_CO_FLCDESC";
		
		case 14:
			return "BS_CO_HJKDESC";
		
		case 15:
			return "BS_CO_FRTDESC";
		
		case 16:
			return "BS_CO_AUGDESC";
		
		case 17:
			return "BS_CO_BULDESC";
		
		case 18:
			return "BS_CO_HAFDESC";
		
		case 19:
			return "BS_CO_SSSDESC";
		
		case 20:
			return "BS_CO_LSCDESC";
		
		case 21:
			return "BS_CO_LSTDESC";
		
		case 22:
			return "BS_CO_LTDDESC";
		
		case 23:
			return "BS_CO_MAIDESC";
		
		case 24:
			return "BS_CO_MAZDESC";
		
		case 25:
			return "BS_CO_PKWDESC";
		
		case 26:
			return "BS_CO_ARKDESC";
		
		case 27:
			return "BS_CO_PISDESC";
		
		case 28:
			return "BS_CO_PONDESC";
		
		case 29:
			return "BS_CO_RAIDESC";
		
		case 30:
			return "BS_CO_RONDESC";
		
		case 31:
			return "BS_CO_SHTDESC";
		
		case 32:
			return "BS_CO_SPUDESC";
		
		case 33:
			return "BS_CO_TNKDESC";
		
		case 34:
			return "BS_CO_WIWDESC";
		
		case 35:
			return "BS_CO_UMADESC";
		
		case 36:
			return "BS_CO_VAPDESC";
		
		case 37:
			return "BS_CO_VOMDESC";
		
		case 38:
			return "BS_CO_WZLDESC";
		
		case 39:
			return "BS_CO_WIZDESC";
		
		case 49:
			return "BS_CO_GOLDESC";
		
		case 41:
			return "BS_CO_ZITDESC";
		
		case 42:
			return "BS_CO_SHKDESC";
		
		case 43:
			return "BS_CO_MOLDESC";
		
		case 44:
			return "BS_CO_PMPDESC";
		
		case 45:
			return "BS_CO_GOTDESC";
		
		case 46:
			return "BS_CO_EYEDESC";
		
		case 47:
			return "BS_CO_EMUDESC";
		
		case 48:
			return "BS_CO_BENDESC";
		
		case 50:
			return "BS_CO_BOMDESC";
		
		case 51:
			return "BS_CO_BGRDESC";
		
		case 52:
			return "BS_CO_CLKDESC";
		
		case 53:
			return "BS_CO_BANDESC";
		
		case 54:
			return "BS_CO_DOPDESC";
		
		case 55:
			return "BS_CO_ECLDESC";
		
		case 56:
			return "BS_CO_FUSDESC";
		
		case 57:
			return "BS_CO_GASDESC";
		
		case 58:
			return "BS_CO_GOPDESC";
		
		case 59:
			return "BS_CO_GRUDESC";
		
		case 60:
			return "BS_CO_KRPDESC";
		
		case 61:
			return "BS_CO_LFIDESC";
		
		case 62:
			return "BS_CO_MAXDESC";
		
		case 63:
			return "BS_CO_POPDESC";
		
		case 64:
			return "BS_CO_PRODESC";
		
		case 65:
			return "BS_CO_RWCDESC";
		
		case 66:
			return "BS_CO_RIMDESC";
		
		case 67:
			return "BS_CO_TBODESC";
		
		case 68:
			return "BS_CO_UPADESC";
		
		case 69:
			return "BS_CO_VAGDESC";
		
		case 70:
			return "BS_CO_UNIDESC";
		
		case 71:
			return "BS_CO_HVYDESC";
		
		case 72:
			return "BS_CO_LOGDESC";
		
		case 73:
			return "BS_CO_MERDESC";
		
		case 74:
			return "BS_CO_RA1DESC";
		
		case 75:
			return "BS_CO_RA2DESC";
		
		case 76:
			return "BS_CO_SHRDESC";
		
		case 77:
			return "BS_CO_HALDESC";
		
		case 78:
			return "BS_CO_MORDESC";
		
		case 40:
			return "BS_CO_DEBDESC";
		
		case joaat("mpsv_lp0_31"):
			return "BS_CO_BILDESC";
		
		default:
	}
	return "BS_BU_STINFO";
}

int func_585(int iParam0, int iParam1)//Position - 0x4C9B4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (GlobalFunc_2034(iParam1, iVar0) == iParam0)
		{
			if (GlobalFunc_2035(iParam1, iVar0) > 0)
			{
				return GlobalFunc_2035(iParam1, iVar0);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_586(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C9F7
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		return;
	}
	if (Global_47050[iParam1 /*36*/].f_8 != 1)
	{
		return;
	}
	if (Global_47050[iParam1 /*36*/].f_35 == -1)
	{
		return;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GlobalFunc_726("BS_PH_5");
	GlobalFunc_726("BS_PH_4");
	GlobalFunc_726("BS_PH_3");
	GlobalFunc_726("BS_PH_2");
	GlobalFunc_726("BS_PH_1");
	GlobalFunc_726("BS_PH_0");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1.5f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = func_75(iParam1);
	fVar1 = fVar0;
	if (fVar0 > Global_47050[iParam1 /*36*/].f_31)
	{
		Global_47050[iParam1 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_47050[iParam1 /*36*/].f_32)
	{
		Global_47050[iParam1 /*36*/].f_32 = fVar0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	iVar2 = 0;
	fVar3 = 0f;
	bVar4 = false;
	if (fVar0 != Global_47050[iVar2 /*36*/].f_9)
	{
		bVar4 = true;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		STATS::_0xBED9F5693F34ED17(Global_49931[Global_47050[iParam1 /*36*/].f_35 /*7*/], iVar2, &fVar3);
		fVar1 = (fVar1 + fVar3);
		if (bVar4)
		{
			fVar5 = (IntToFloat(iVar2) * 0.2f);
			fVar6 = (((1f - fVar5) * fVar3) + (fVar5 * fVar0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar3);
		}
		iVar2++;
	}
	fVar1 = (fVar1 / 6f);
	Global_47050[iParam1 /*36*/].f_33 = (fVar0 - fVar1);
	Global_47050[iParam1 /*36*/].f_34 = ((Global_47050[iParam1 /*36*/].f_33 / fVar1) * 100f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_587(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4CB8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (Global_47050[iParam1 /*36*/].f_8)
	{
		func_586(iParam0, iParam1, iParam2, iParam3);
		return;
	}
	iVar0 = 0;
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK() + 2;
	if (iVar1 > 6)
	{
		iVar1 = (iVar1 - 7);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		switch (iVar1)
		{
			case 0:
				GlobalFunc_726("BS_PH_SU");
				break;
			
			case 1:
				GlobalFunc_726("BS_PH_M");
				break;
			
			case 2:
				GlobalFunc_726("BS_PH_TU");
				break;
			
			case 3:
				GlobalFunc_726("BS_PH_W");
				break;
			
			case 4:
				GlobalFunc_726("BS_PH_TH");
				break;
			
			case 5:
				GlobalFunc_726("BS_PH_F");
				break;
			
			case 6:
				GlobalFunc_726("BS_PH_SA");
				break;
		}
		iVar1++;
		if (iVar1 > 6)
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		iVar2 = (Global_47050[iParam1 /*36*/].f_13 + iVar0);
		if (iVar2 >= 16)
		{
			iVar2 = (iVar2 - 16);
		}
		fVar3 = Global_47050[iParam1 /*36*/].f_14[iVar2];
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar3);
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_588(int iParam0, var uParam1, var uParam2)//Position - 0x4CCDB
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (GlobalFunc_2035(iParam0, iVar1) > 0)
		{
			if (iVar0 == 0)
			{
				return GlobalFunc_2034(iParam0, iVar1);
			}
			iVar0 = (iVar0 - 1);
		}
		iVar1++;
	}
	return 0;
}

void func_589(int iParam0, int iParam1)//Position - 0x4CD21
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	Global_67077 = iParam1;
	iVar0 = 0;
	switch (GlobalFunc_8329())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 1:
			iVar0 = 1;
			break;
	}
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (GlobalFunc_2035(iVar0, iVar2) > 0)
		{
			iVar3 = 1;
			iVar4 = GlobalFunc_2034(iVar0, iVar2);
			fVar5 = func_75(iVar4);
			if (fVar5 > 0f)
			{
				fVar6 = (fVar5 * IntToFloat(GlobalFunc_2035(iVar0, iVar2)));
				fVar7 = 0f;
				if (func_70(iVar0, iVar2) > 0f)
				{
					fVar7 = (((fVar6 / func_70(iVar0, iVar2)) * 100f) - 100f);
				}
				fVar6 = (fVar6 - func_70(iVar0, iVar2));
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(66666f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
				GlobalFunc_726(&(Global_47050[GlobalFunc_2034(iVar0, iVar2) /*36*/].f_4));
				GlobalFunc_726(&(Global_47050[GlobalFunc_2034(iVar0, iVar2) /*36*/]));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_70(iVar0, iVar2));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fVar1 = (fVar1 + 1f);
			}
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
	}
}

void func_590(int iParam0, int iParam1)//Position - 0x4CE5A
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	Global_67077 = iParam1;
	fVar0 = SYSTEM::TO_FLOAT(iParam1);
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (Global_47050[iVar1 /*36*/].f_9 > 0f)
		{
			if (Global_67097 == Global_47050[iVar1 /*36*/].f_8)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((IntToFloat(iVar2) + fVar0));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_75(iVar1));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55555);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar1 /*36*/].f_33);
				GlobalFunc_726(&(Global_47050[iVar1 /*36*/].f_4));
				GlobalFunc_726(&(Global_47050[iVar1 /*36*/]));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "APPEND_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((IntToFloat(iVar2) + fVar0));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar1 /*36*/].f_34);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_591(int iParam0, bool bParam1, int iParam2)//Position - 0x4CF26
{
	float fVar0;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_NAMEH");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_CURPRICH");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_VOLU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	if (bParam1)
	{
		GlobalFunc_726("BS_WB_RETP");
	}
	else
	{
		GlobalFunc_726("BS_WB_MOVH");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
}

int func_592(int iParam0, bool bParam1)//Position - 0x4CFD3
{
	struct<2> Var0;
	int iVar4;
	
	StringCopy(&Var0, "", 16);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	if (iVar4 == 5)
	{
		return 0;
	}
	while (true)
	{
		switch (iVar4)
		{
			case 1:
				if (func_593(33))
				{
					if (bParam1)
					{
						StringCopy(&Var0, "TNK_P_USR_H", 16);
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 2:
				if (bParam1)
				{
					if (GlobalFunc_526(90))
					{
						if (func_593(69))
						{
							StringCopy(&Var0, "VAG_P_USF_H", 16);
						}
					}
				}
				else
				{
					return 0;
				}
				break;
			
			case 3:
				if (GlobalFunc_526(7))
				{
					if (func_593(49))
					{
						if (bParam1)
						{
							StringCopy(&Var0, "GOL_P_USR_H", 16);
						}
						else
						{
							return 0;
						}
					}
				}
				else if (GlobalFunc_526(6))
				{
					if (func_593(36))
					{
						if (bParam1)
						{
							StringCopy(&Var0, "VAP_P_USF_H", 16);
						}
						else
						{
							return 0;
						}
					}
				}
				else if (GlobalFunc_526(5))
				{
					if (bParam1)
					{
						StringCopy(&Var0, "FAC_P_USF_H", 16);
					}
					else
					{
						StringCopy(&Var0, "FRT_P_USR_H", 16);
					}
				}
				else if (GlobalFunc_526(4))
				{
					if (bParam1)
					{
						StringCopy(&Var0, "RWC_P_USF_H", 16);
					}
					else
					{
						StringCopy(&Var0, "DEB_P_USR_H", 16);
					}
				}
				else if (GlobalFunc_526(3))
				{
					if (bParam1)
					{
						StringCopy(&Var0, "BET_P_USR_H", 16);
					}
					else
					{
						StringCopy(&Var0, "BIL_P_USF_H", 16);
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_526(16))
				{
					if (bParam1)
					{
						StringCopy(&Var0, "LFI_P_USR_H", 16);
					}
					else
					{
						return 0;
					}
				}
				else if (GlobalFunc_526(44))
				{
					if (bParam1)
					{
						StringCopy(&Var0, "LFI_P_USF_H", 16);
					}
					else
					{
						return 0;
					}
				}
				break;
			
			default:
				return 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			iVar4++;
		}
		else if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
		{
			iVar4 = 5;
		}
		else
		{
			iVar4++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			if (bParam1)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(6f);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(7f);
			}
			GlobalFunc_726(&Var0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			return 1;
		}
	}
	return 0;
}

int func_593(int iParam0)//Position - 0x4D1D0
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 > 0)
	{
		if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 < 8)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 = 7;
		}
		iVar0 = 0;
		while (iVar0 < Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442)
		{
			if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_443[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 < 0)
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 = 0;
	}
	return 0;
}

void func_594(int iParam0)//Position - 0x4D254
{
	int iVar0[5];
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	
	iVar6 = 0;
	iVar7 = 0;
	while (iVar7 < 5)
	{
		if (Global_47050[iVar6 /*36*/].f_9 > 0f)
		{
			if (Global_47050[iVar6 /*36*/].f_8 == Global_67097)
			{
				iVar0[iVar7] = iVar6;
				iVar7++;
			}
		}
		iVar6++;
	}
	iVar8 = func_595(&iVar0);
	fVar9 = MISC::ABSF(Global_47050[iVar0[iVar8] /*36*/].f_33);
	iVar6 = 0;
	while (iVar6 < 80)
	{
		if (Global_47050[iVar6 /*36*/].f_9 > 0f)
		{
			if (Global_47050[iVar6 /*36*/].f_8 == Global_67097)
			{
				bVar10 = true;
				iVar7 = 0;
				while (iVar7 < 5)
				{
					if (iVar0[iVar7] == iVar6)
					{
						bVar10 = false;
					}
					iVar7++;
				}
				if (bVar10)
				{
					fVar11 = MISC::ABSF(Global_47050[iVar6 /*36*/].f_33);
					if (fVar11 > fVar9)
					{
						iVar0[iVar8] = iVar6;
						iVar8 = func_595(&iVar0);
						fVar9 = MISC::ABSF(Global_47050[iVar0[iVar8] /*36*/].f_33);
					}
				}
			}
		}
		iVar6++;
	}
	while (!bVar12)
	{
		bVar12 = true;
		iVar6 = 0;
		while (iVar6 < 5)
		{
			iVar7 = 0;
			while (iVar7 < 5)
			{
				if (iVar6 > iVar7)
				{
					if (MISC::ABSF(Global_47050[iVar0[iVar6] /*36*/].f_33) > MISC::ABSF(Global_47050[iVar0[iVar7] /*36*/].f_33))
					{
						iVar13 = iVar0[iVar6];
						iVar0[iVar6] = iVar0[iVar7];
						iVar0[iVar7] = iVar13;
						bVar12 = false;
					}
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(22);
	GlobalFunc_726(&(Global_47050[iVar0[0] /*36*/].f_4));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_75(iVar0[0]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0[0] /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
	GlobalFunc_726(&(Global_47050[iVar0[1] /*36*/].f_4));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_75(iVar0[1]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0[1] /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
	GlobalFunc_726(&(Global_47050[iVar0[2] /*36*/].f_4));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_75(iVar0[2]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0[2] /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GlobalFunc_726(&(Global_47050[iVar0[3] /*36*/].f_4));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_75(iVar0[3]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0[3] /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GlobalFunc_726(&(Global_47050[iVar0[4] /*36*/].f_4));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_75(iVar0[4]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Global_47050[iVar0[4] /*36*/].f_33);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_587(iParam0, iVar0[0], 27, 28);
}

int func_595(int iParam0)//Position - 0x4D525
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0 = 0;
	fVar1 = MISC::ABSF(Global_47050[(*iParam0)[0] /*36*/].f_33);
	iVar2 = 0;
	while (iVar2 < 5)
	{
		fVar3 = MISC::ABSF(Global_47050[(*iParam0)[iVar2] /*36*/].f_33);
		if (fVar1 > fVar3)
		{
			iVar0 = iVar2;
			fVar1 = fVar3;
		}
		iVar2++;
	}
	return iVar0;
}

void func_596(int iParam0, int iParam1)//Position - 0x4D579
{
	float fVar0;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_DATELINE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_597(int iParam0, int iParam1)//Position - 0x4D5A6
{
	float fVar0;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_HOME");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_NEWS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_MARK");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GlobalFunc_726("BS_WB_MSTOCK");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	fVar0 = (fVar0 + 1f);
}

void func_598(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x4D642
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	char* sVar12;
	
	iVar8 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	iVar9 = MISC::GET_NEXT_WEATHER_TYPE_HASH_NAME();
	bVar11 = false;
	switch (iParam1)
	{
		case 1:
		case 4:
		case 5:
			switch (iVar9)
			{
				case 1840358669:
				case -1530260698:
				case 916995460:
					iVar10 = 1;
					break;
				
				case -1148613331:
				case 282916021:
				case -318724249:
					iVar10 = 3;
					break;
				
				case 821931868:
					iVar10 = 2;
					break;
				
				case 1420204096:
					iVar10 = 4;
					break;
				
				case -1233681761:
					iVar10 = 6;
					break;
				
				case -273223690:
					iVar10 = 7;
					break;
				
				default:
					iVar10 = 0;
					break;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
			{
				sVar12 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1));
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GlobalFunc_726(sVar12);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			switch (iVar8)
			{
				case 0:
					GlobalFunc_726("BS_PH_SU");
					break;
				
				case 1:
					GlobalFunc_726("BS_PH_M");
					break;
				
				case 2:
					GlobalFunc_726("BS_PH_TU");
					break;
				
				case 3:
					GlobalFunc_726("BS_PH_W");
					break;
				
				case 4:
					GlobalFunc_726("BS_PH_TH");
					break;
				
				case 5:
					GlobalFunc_726("BS_PH_F");
					break;
				
				case 6:
					GlobalFunc_726("BS_PH_SA");
					break;
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::ARE_STRINGS_EQUAL(&(Local_235.f_9), ""))
			{
				if (func_601(&(Local_235.f_1), &(Local_235.f_9), &Local_235))
				{
					bVar11 = true;
				}
			}
			else if (bParam3)
			{
				if (Global_67071 == 5)
				{
					bVar11 = true;
				}
				else if (func_601(&(Local_235.f_1), &(Local_235.f_9), &Local_235))
				{
					bVar11 = true;
				}
			}
			else
			{
				bVar11 = true;
			}
			if (bLocal_234)
			{
				if (bVar11)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GlobalFunc_726(&(Local_235.f_1));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_235);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
					GlobalFunc_726(&(Local_235.f_9));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			Var0 = { func_600(uParam2) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GlobalFunc_726(&Var0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GlobalFunc_726(&(Var0.f_4));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (Global_68245)
			{
				if (Global_262145.f_6018)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					func_599(10, Global_262145.f_6704);
					func_599(11, Global_262145.f_6705);
					func_599(16, Global_262145.f_6706);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			break;
		
		default:
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_599(int iParam0, float fParam1)//Position - 0x4D91B
{
	switch (iParam0)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			break;
		
		case 18:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			break;
		
		case 11:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			break;
		
		case 10:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			break;
		
		case 9:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			break;
		
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
			break;
		
		case 16:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			break;
		
		case 12:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			break;
		
		default:
			break;
	}
	if (fParam1 == 0f)
	{
		GlobalFunc_726("EYEDISC_00");
	}
	else if (fParam1 == 5f)
	{
		GlobalFunc_726("EYEDISC_05");
	}
	else if (fParam1 == 10f)
	{
		GlobalFunc_726("EYEDISC_10");
	}
	else if (fParam1 == 15f)
	{
		GlobalFunc_726("EYEDISC_15");
	}
	else if (fParam1 == 20f)
	{
		GlobalFunc_726("EYEDISC_20");
	}
	else if (fParam1 == 25f)
	{
		GlobalFunc_726("EYEDISC_25");
	}
	else
	{
		GlobalFunc_726("EYEDISC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::CEIL(fParam1));
	}
}

struct<8> func_600(var uParam0)//Position - 0x4DA32
{
	struct<8> Var0;
	
	func_557(uParam0);
	Var0 = { func_556(iLocal_308[iLocal_257[0]]) };
	Var0.f_4 = { func_556(iLocal_308[iLocal_257[0]] + 1) };
	return Var0;
}

int func_601(char* sParam0, char* sParam1, var uParam2)//Position - 0x4DA6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_472;
	iVar1 = 1;
	if (iVar0 == 0)
	{
		iVar1 = 1;
		iVar2 = 6;
		StringCopy(sParam0, "NWS_PRO_HL", 32);
		StringCopy(sParam1, "NWS_PRO_S", 32);
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
		iVar2 = 5;
		StringCopy(sParam0, "NWS_AR2_HL", 32);
		StringCopy(sParam1, "NWS_AR2_S", 32);
	}
	else if (iVar0 == 2)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_AR3_HL", 32);
		StringCopy(sParam1, "NWS_AR3_S", 32);
	}
	else if (iVar0 == 3)
	{
		iVar1 = 1;
		iVar2 = 5;
		StringCopy(sParam0, "NWS_FAM1_HL", 32);
		StringCopy(sParam1, "NWS_FAM1_S", 32);
	}
	else if (iVar0 == 4)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_FAM3_HL", 32);
		StringCopy(sParam1, "NWS_FAM3_S", 32);
	}
	else if (iVar0 == 5)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_LAM1_HL", 32);
		StringCopy(sParam1, "NWS_LAM1_S", 32);
	}
	else if (iVar0 == 6)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_LST1_HL", 32);
		StringCopy(sParam1, "NWS_LST1_S", 32);
	}
	else if (iVar0 == 7)
	{
		if (GlobalFunc_597(7) == 1)
		{
			iVar1 = 1;
			iVar2 = 3;
		}
		else
		{
			iVar1 = 4;
			iVar2 = 6;
		}
		StringCopy(sParam0, "NWS_JWLH_HL", 32);
		StringCopy(sParam1, "NWS_JWLH_S", 32);
	}
	else if (iVar0 == 8)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_TRE2_HL", 32);
		StringCopy(sParam1, "NWS_TRE2_S", 32);
	}
	else if (iVar0 == 9)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_CHI1_HL", 32);
		StringCopy(sParam1, "NWS_CHI1_S", 32);
	}
	else if (iVar0 == 10)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_CHI2_HL", 32);
		StringCopy(sParam1, "NWS_CHI2_S", 32);
	}
	else if (iVar0 == 11)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_TRE3_HL", 32);
		StringCopy(sParam1, "NWS_TRE3_S", 32);
	}
	else if (iVar0 == 12)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_FAM4_HL", 32);
		StringCopy(sParam1, "NWS_FAM4_S", 32);
	}
	else if (iVar0 == 13)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_FIB2_HL", 32);
		StringCopy(sParam1, "NWS_FIB2_S", 32);
	}
	else if (iVar0 == 14)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_FIB3_HL", 32);
		StringCopy(sParam1, "NWS_FIB3_S", 32);
	}
	else if (iVar0 == 15)
	{
		if (GlobalFunc_485(43))
		{
			iVar1 = 1;
			iVar2 = 3;
		}
		else
		{
			iVar1 = 2;
			iVar2 = 3;
		}
		StringCopy(sParam0, "NWS_FRA1_HL", 32);
		StringCopy(sParam1, "NWS_FRA1_S", 32);
	}
	else if (iVar0 == 16)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_FIB4_HL", 32);
		StringCopy(sParam1, "NWS_FIB4_S", 32);
	}
	else if (iVar0 == 17)
	{
		iVar1 = 1;
		iVar2 = 4;
		StringCopy(sParam0, "NWS_DCKH_HL", 32);
		StringCopy(sParam1, "NWS_DCKH_S", 32);
	}
	else if (iVar0 == 18)
	{
		if (GlobalFunc_485(76))
		{
			iVar1 = 5;
			iVar2 = 8;
		}
		else
		{
			iVar1 = 1;
			iVar2 = 4;
		}
		StringCopy(sParam0, "NWS_CARS2_HL", 32);
		StringCopy(sParam1, "NWS_CARS2_S", 32);
	}
	else if (iVar0 == 19)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_SOL1_HL", 32);
		StringCopy(sParam1, "NWS_SOL1_S", 32);
	}
	else if (iVar0 == 20)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_MTN1_HL", 32);
		StringCopy(sParam1, "NWS_MTN1_S", 32);
	}
	else if (iVar0 == 21)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_CARS3_HL", 32);
		StringCopy(sParam1, "NWS_CARS3_S", 32);
	}
	else if (iVar0 == 22)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_EXL1_HL", 32);
		StringCopy(sParam1, "NWS_EXL1_S", 32);
	}
	else if (iVar0 == 23)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_RBH_HL", 32);
		StringCopy(sParam1, "NWS_RBH_S", 32);
	}
	else if (iVar0 == 24)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_EXL3_HL", 32);
		StringCopy(sParam1, "NWS_EXL3_S", 32);
	}
	else if (iVar0 == 25)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_FIB5_HL", 32);
		StringCopy(sParam1, "NWS_FIB5_S", 32);
	}
	else if (iVar0 == 26)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_MIC1_HL", 32);
		StringCopy(sParam1, "NWS_MIC1_S", 32);
	}
	else if (iVar0 == 27)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_SOL2_HL", 32);
		StringCopy(sParam1, "NWS_SOL2_S", 32);
	}
	else if (iVar0 == 28)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_FAM6_HL", 32);
		StringCopy(sParam1, "NWS_FAM6_S", 32);
	}
	else if (iVar0 == 29)
	{
		if (GlobalFunc_597(10) == 6)
		{
			iVar1 = 1;
			iVar2 = 3;
		}
		else
		{
			iVar1 = 4;
			iVar2 = 6;
		}
		StringCopy(sParam0, "NWS_AGH_HL", 32);
		StringCopy(sParam1, "NWS_AGH_S", 32);
	}
	else if (iVar0 == 30)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_MIC3_HL", 32);
		StringCopy(sParam1, "NWS_MIC3_S", 32);
	}
	else if (iVar0 == 31)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_SOL3_HL", 32);
		StringCopy(sParam1, "NWS_SOL3_S", 32);
	}
	else if (iVar0 == 32)
	{
		iVar1 = 1;
		iVar2 = 3;
		StringCopy(sParam0, "NWS_MIC4_HL", 32);
		StringCopy(sParam1, "NWS_MIC4_S", 32);
	}
	else if (iVar0 == 33)
	{
		if (GlobalFunc_597(11) == 8)
		{
			iVar1 = 1;
			iVar2 = 3;
		}
		else
		{
			iVar1 = 4;
			iVar2 = 6;
		}
		StringCopy(sParam0, "NWS_BSH_HL", 32);
		StringCopy(sParam1, "NWS_BSH_S", 32);
	}
	else if (iVar0 == 34)
	{
		iVar1 = 1;
		iVar2 = 5;
		StringCopy(sParam0, "NWS_FIN_HL", 32);
		StringCopy(sParam1, "NWS_FIN_S", 32);
	}
	else if (iVar0 == 35)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_PAP1_HL", 32);
		StringCopy(sParam1, "NWS_PAP1_S", 32);
	}
	else if (iVar0 == 36)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_PAP3A_HL", 32);
		StringCopy(sParam1, "NWS_PAP3A_S", 32);
	}
	else if (iVar0 == 37)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_PAP3B_HL", 32);
		StringCopy(sParam1, "NWS_PAP3B_S", 32);
	}
	else if (iVar0 == 38)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 0))
		{
			iVar1 = 1;
			iVar2 = 1;
		}
		else
		{
			iVar1 = 2;
			iVar2 = 2;
		}
		StringCopy(sParam0, "NWS_DRF1_HL", 32);
		StringCopy(sParam1, "NWS_DRF1_S", 32);
	}
	else if (iVar0 == 39)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 1))
		{
			iVar1 = 1;
			iVar2 = 1;
		}
		else
		{
			iVar1 = 2;
			iVar2 = 2;
		}
		StringCopy(sParam0, "NWS_EPN8_HL", 32);
		StringCopy(sParam1, "NWS_EPN8_S", 32);
	}
	else if (iVar0 == 40)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 2))
		{
			iVar1 = 2;
			iVar2 = 2;
		}
		else
		{
			iVar1 = 1;
			iVar2 = 1;
		}
		StringCopy(sParam0, "NWS_NIG1A_HL", 32);
		StringCopy(sParam1, "NWS_NIG1A_S", 32);
	}
	else if (iVar0 == 41)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 3))
		{
			iVar1 = 1;
			iVar2 = 1;
		}
		else
		{
			iVar1 = 2;
			iVar2 = 2;
		}
		StringCopy(sParam0, "NWS_NIG1B_HL", 32);
		StringCopy(sParam1, "NWS_NIG1B_S", 32);
	}
	else if (iVar0 == 42)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_NIG1C_HL", 32);
		StringCopy(sParam1, "NWS_NIG1C_S", 32);
	}
	else if (iVar0 == 43)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 4))
		{
			iVar1 = 1;
			iVar2 = 1;
		}
		else
		{
			iVar1 = 2;
			iVar2 = 2;
		}
		StringCopy(sParam0, "NWS_NIG1D_HL", 32);
		StringCopy(sParam1, "NWS_NIG1D_S", 32);
	}
	else if (iVar0 == 44)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_NIG2_HL", 32);
		StringCopy(sParam1, "NWS_NIG2_S", 32);
	}
	else if (iVar0 == 45)
	{
		if (GlobalFunc_485(101))
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 5))
			{
				iVar1 = 2;
				iVar2 = 2;
			}
			else
			{
				iVar1 = 1;
				iVar2 = 1;
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("postrc_nigel3")) == 0)
		{
			iVar1 = 3;
			iVar2 = 3;
		}
		else
		{
			iVar1 = 4;
			iVar2 = 4;
		}
		StringCopy(sParam0, "NWS_NIG3_HL", 32);
		StringCopy(sParam1, "NWS_NIG3_S", 32);
	}
	else if (iVar0 == 46)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_EXT4_HL", 32);
		StringCopy(sParam1, "NWS_EXT4_S", 32);
	}
	else if (iVar0 == 47)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_ASS1_HL", 32);
		StringCopy(sParam1, "NWS_ASS1_S", 32);
	}
	else if (iVar0 == 48)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_ASS2_HL", 32);
		StringCopy(sParam1, "NWS_ASS2_S", 32);
	}
	else if (iVar0 == 49)
	{
		iVar1 = 1;
		iVar2 = 1;
		StringCopy(sParam0, "NWS_ASS3_HL", 32);
		StringCopy(sParam1, "NWS_ASS3_S", 32);
	}
	else if (iVar0 == 50)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_ASS4_HL", 32);
		StringCopy(sParam1, "NWS_ASS4_S", 32);
	}
	else if (iVar0 == 51)
	{
		iVar1 = 1;
		iVar2 = 2;
		StringCopy(sParam0, "NWS_ASS5_HL", 32);
		StringCopy(sParam1, "NWS_ASS5_S", 32);
	}
	else if (iVar0 == 52)
	{
		iVar1 = 1;
		iVar2 = 1;
		StringCopy(sParam0, "NWS_O_ATA_HL", 32);
		StringCopy(sParam1, "NWS_O_ATA_S", 32);
	}
	else if (iVar0 == 53)
	{
		if (GlobalFunc_485(80))
		{
			iVar1 = 1;
			iVar2 = 1;
		}
		else
		{
			iVar1 = 2;
			iVar2 = 2;
		}
		StringCopy(sParam0, "NWS_SHK5_HL", 32);
		StringCopy(sParam1, "NWS_SHK5_S", 32);
	}
	else if (iVar0 == 54)
	{
		iVar1 = 1;
		iVar2 = 1;
		StringCopy(sParam0, "NWS_CULT_HL", 32);
		StringCopy(sParam1, "NWS_CULT_S", 32);
	}
	else
	{
		iVar1 = 1;
		iVar2 = 6;
		StringCopy(sParam0, "NWS_PRO_HL", 32);
		StringCopy(sParam1, "NWS_PRO_S", 32);
	}
	if (iVar0 != 55)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar2 + 1);
		StringIntConCat(sParam0, iVar3, 32);
		StringIntConCat(sParam1, iVar3, 32);
		*uParam2 = func_602(iVar0, iVar3);
		return 1;
	}
	return 0;
}

int func_602(int iParam0, int iParam1)//Position - 0x4E350
{
	if (iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 3;
		}
		else if (iParam1 == 3)
		{
			return 12;
		}
		else if (iParam1 == 4)
		{
			return 1;
		}
		else if (iParam1 == 5)
		{
			return 2;
		}
		else if (iParam1 == 6)
		{
			return 13;
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 3;
		}
		else if (iParam1 == 3)
		{
			return 12;
		}
		else if (iParam1 == 4)
		{
			return 0;
		}
		else if (iParam1 == 5)
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 1)
		{
			return 4;
		}
		else if (iParam1 == 2)
		{
			return 7;
		}
		else if (iParam1 == 3)
		{
			return 1;
		}
		else if (iParam1 == 4)
		{
			return 7;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 0;
		}
		else if (iParam1 == 3)
		{
			return 3;
		}
		else if (iParam1 == 4)
		{
			return 1;
		}
		else if (iParam1 == 5)
		{
			return 5;
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam1 == 1)
		{
			return 1;
		}
		else if (iParam1 == 2)
		{
			return 3;
		}
		else if (iParam1 == 3)
		{
			return 12;
		}
		else if (iParam1 == 4)
		{
			return 0;
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam1 == 1)
		{
			return 4;
		}
		else if (iParam1 == 2)
		{
			return 7;
		}
		else if (iParam1 == 3)
		{
			return 9;
		}
		else if (iParam1 == 4)
		{
			return 7;
		}
	}
	else if (iParam0 == 6)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 2;
		}
		else if (iParam1 == 3)
		{
			return 13;
		}
		else if (iParam1 == 4)
		{
			return 12;
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 10;
		}
		else if (iParam1 == 3)
		{
			return 3;
		}
		else if (iParam1 == 4)
		{
			return 3;
		}
		else if (iParam1 == 5)
		{
			return 10;
		}
		else if (iParam1 == 6)
		{
			return 3;
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
		else if (iParam1 == 3)
		{
			return 0;
		}
		else if (iParam1 == 4)
		{
			return 3;
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
		else if (iParam1 == 2)
		{
			return 7;
		}
		else if (iParam1 == 3)
		{
			return 4;
		}
		else if (iParam1 == 4)
		{
			return 3;
		}
	}
	else if (iParam0 == 10)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
		else if (iParam1 == 3)
		{
			return 13;
		}
		else if (iParam1 == 4)
		{
			return 8;
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
		else if (iParam1 == 2)
		{
			return 1;
		}
		else if (iParam1 == 3)
		{
			return 3;
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 11;
		}
		else if (iParam1 == 3)
		{
			return 7;
		}
		else if (iParam1 == 4)
		{
			return 13;
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
		else if (iParam1 == 3)
		{
			return 0;
		}
		else if (iParam1 == 4)
		{
			return 12;
		}
	}
	else if (iParam0 == 14)
	{
		if (iParam1 == 1)
		{
			return 4;
		}
		else if (iParam1 == 2)
		{
			return 8;
		}
		else if (iParam1 == 3)
		{
			return 1;
		}
		else if (iParam1 == 4)
		{
			return 12;
		}
	}
	else if (iParam0 == 15)
	{
		if (iParam1 == 1)
		{
			return 4;
		}
		else if (iParam1 == 2)
		{
			return 0;
		}
		else if (iParam1 == 3)
		{
			return 5;
		}
		else if (iParam1 == 4)
		{
			return 0;
		}
		else if (iParam1 == 5)
		{
			return 5;
		}
	}
	else if (iParam0 == 16)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 7;
		}
		else if (iParam1 == 3)
		{
			return 12;
		}
		else if (iParam1 == 4)
		{
			return 3;
		}
	}
	else if (iParam0 == 17)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 1;
		}
		else if (iParam1 == 3)
		{
			return 9;
		}
		else if (iParam1 == 4)
		{
			return 12;
		}
	}
	else if (iParam0 == 18)
	{
		if (iParam1 == 1)
		{
			return 10;
		}
		else if (iParam1 == 2)
		{
			return 0;
		}
		else if (iParam1 == 3)
		{
			return 9;
		}
		else if (iParam1 == 4)
		{
			return 1;
		}
		else if (iParam1 == 5)
		{
			return 10;
		}
		else if (iParam1 == 6)
		{
			return 0;
		}
		else if (iParam1 == 7)
		{
			return 9;
		}
		else if (iParam1 == 8)
		{
			return 1;
		}
	}
	else if (iParam0 == 19)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 5;
		}
	}
	else if (iParam0 == 20)
	{
		if (iParam1 == 1)
		{
			return 1;
		}
		else if (iParam1 == 2)
		{
			return 5;
		}
		else if (iParam1 == 3)
		{
			return 0;
		}
	}
	else if (iParam0 == 21)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 11;
		}
		else if (iParam1 == 3)
		{
			return 13;
		}
	}
	else if (iParam0 == 22)
	{
		if (iParam1 == 1)
		{
			return 7;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
		else if (iParam1 == 3)
		{
			return 0;
		}
	}
	else if (iParam0 == 23)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
		else if (iParam1 == 2)
		{
			return 7;
		}
		else if (iParam1 == 3)
		{
			return 11;
		}
	}
	else if (iParam0 == 24)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 11;
		}
		else if (iParam1 == 3)
		{
			return 0;
		}
	}
	else if (iParam0 == 25)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
		else if (iParam1 == 3)
		{
			return 1;
		}
	}
	else if (iParam0 == 26)
	{
		if (iParam1 == 1)
		{
			return 6;
		}
		else if (iParam1 == 2)
		{
			return 7;
		}
		else if (iParam1 == 3)
		{
			return 0;
		}
	}
	else if (iParam0 == 27)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 3;
		}
	}
	else if (iParam0 == 28)
	{
		if (iParam1 == 1)
		{
			return 10;
		}
		else if (iParam1 == 2)
		{
			return 11;
		}
	}
	else if (iParam0 == 29)
	{
		if (iParam1 == 1)
		{
			return 13;
		}
		else if (iParam1 == 2)
		{
			return 11;
		}
		else if (iParam1 == 3)
		{
			return 2;
		}
		else if (iParam1 == 4)
		{
			return 13;
		}
		else if (iParam1 == 5)
		{
			return 11;
		}
		else if (iParam1 == 6)
		{
			return 2;
		}
	}
	else if (iParam0 == 30)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 0;
		}
	}
	else if (iParam0 == 31)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 8;
		}
		else if (iParam1 == 3)
		{
			return 7;
		}
	}
	else if (iParam0 == 32)
	{
		if (iParam1 == 1)
		{
			return 5;
		}
		else if (iParam1 == 2)
		{
			return 1;
		}
		else if (iParam1 == 3)
		{
			return 2;
		}
	}
	else if (iParam0 == 33)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
		else if (iParam1 == 3)
		{
			return 13;
		}
		else if (iParam1 == 4)
		{
			return 12;
		}
		else if (iParam1 == 5)
		{
			return 12;
		}
		else if (iParam1 == 6)
		{
			return 13;
		}
	}
	else if (iParam0 == 34)
	{
		if (iParam1 == 1)
		{
			return 4;
		}
		else if (iParam1 == 2)
		{
			return 1;
		}
		else if (iParam1 == 3)
		{
			return 3;
		}
		else if (iParam1 == 4)
		{
			return 2;
		}
		else if (iParam1 == 5)
		{
			return 12;
		}
	}
	else if (iParam0 == 35)
	{
		if (iParam1 == 1)
		{
			return 10;
		}
		else if (iParam1 == 2)
		{
			return 3;
		}
	}
	else if (iParam0 == 36)
	{
		if (iParam1 == 1)
		{
			return 8;
		}
		else if (iParam1 == 2)
		{
			return 13;
		}
	}
	else if (iParam0 == 37)
	{
		if (iParam1 == 1)
		{
			return 13;
		}
		else if (iParam1 == 2)
		{
			return 5;
		}
	}
	else if (iParam0 == 38)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
	}
	else if (iParam0 == 39)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 5;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 1)
		{
			return 10;
		}
		else if (iParam1 == 2)
		{
			return 11;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 1)
		{
			return 8;
		}
		else if (iParam1 == 2)
		{
			return 2;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 1)
		{
			return 10;
		}
		else if (iParam1 == 2)
		{
			return 8;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 1)
		{
			return 8;
		}
		else if (iParam1 == 2)
		{
			return 2;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
	}
	else if (iParam0 == 45)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 1;
		}
		else if (iParam1 == 3)
		{
			return 3;
		}
		else if (iParam1 == 4)
		{
			return 1;
		}
	}
	else if (iParam0 == 46)
	{
		if (iParam1 == 1)
		{
			return 0;
		}
		else if (iParam1 == 2)
		{
			return 12;
		}
	}
	else if (iParam0 == 47)
	{
		if (iParam1 == 1)
		{
			return 7;
		}
		else if (iParam1 == 2)
		{
			return 0;
		}
	}
	else if (iParam0 == 48)
	{
		if (iParam1 == 1)
		{
			return 7;
		}
		else if (iParam1 == 2)
		{
			return 0;
		}
	}
	else if (iParam0 == 49)
	{
		if (iParam1 == 1)
		{
			return 2;
		}
	}
	else if (iParam0 == 50)
	{
		if (iParam1 == 1)
		{
			return 12;
		}
		else if (iParam1 == 2)
		{
			return 3;
		}
	}
	else if (iParam0 == 51)
	{
		if (iParam1 == 1)
		{
			return 13;
		}
		else if (iParam1 == 2)
		{
			return 4;
		}
	}
	else if (iParam0 == 52)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
	}
	else if (iParam0 == 53)
	{
		if (iParam1 == 1)
		{
			return 3;
		}
		else if (iParam1 == 2)
		{
			return 13;
		}
	}
	else if (iParam0 == 54)
	{
		if (iParam1 == 1)
		{
			return 9;
		}
	}
	else if (iParam1 == 1)
	{
		return 0;
	}
	else if (iParam1 == 2)
	{
		return 3;
	}
	else if (iParam1 == 3)
	{
		return 12;
	}
	else if (iParam1 == 4)
	{
		return 1;
	}
	else if (iParam1 == 5)
	{
		return 2;
	}
	else if (iParam1 == 6)
	{
		return 13;
	}
	return 0;
}



void func_605()//Position - 0x4EEA6
{
	if (MISC::ARE_STRINGS_EQUAL(&cLocal_2561, ""))
	{
		HUD::CLEAR_ADDITIONAL_TEXT(4, 1);
		StringCopy(&cLocal_2561, func_606(), 24);
	}
	else if (!MISC::ARE_STRINGS_EQUAL(&cLocal_2561, func_606()))
	{
		HUD::CLEAR_ADDITIONAL_TEXT(4, 1);
		StringCopy(&cLocal_2561, func_606(), 24);
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_2561, 4);
	bLocal_234 = true;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&cLocal_2561))
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
		{
			func_640(0, 0);
			SYSTEM::WAIT(0);
		}
	}
}

char* func_606()//Position - 0x4EF16
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_472;
	if (iVar0 == 0)
	{
		return "NWS_PRO";
	}
	else if (iVar0 == 1)
	{
		return "NWS_AR2";
	}
	else if (iVar0 == 2)
	{
		return "NWS_AR3";
	}
	else if (iVar0 == 3)
	{
		return "NWS_FAM1";
	}
	else if (iVar0 == 4)
	{
		return "NWS_FAM3";
	}
	else if (iVar0 == 5)
	{
		return "NWS_LAM1";
	}
	else if (iVar0 == 6)
	{
		return "NWS_LST1";
	}
	else if (iVar0 == 7)
	{
		return "NWS_JWLH";
	}
	else if (iVar0 == 8)
	{
		return "NWS_TRE2";
	}
	else if (iVar0 == 9)
	{
		return "NWS_CHI1";
	}
	else if (iVar0 == 10)
	{
		return "NWS_CHI2";
	}
	else if (iVar0 == 11)
	{
		return "NWS_TRE3";
	}
	else if (iVar0 == 12)
	{
		return "NWS_FAM4";
	}
	else if (iVar0 == 13)
	{
		return "NWS_FIB2";
	}
	else if (iVar0 == 14)
	{
		return "NWS_FIB3";
	}
	else if (iVar0 == 15)
	{
		return "NWS_FRA1";
	}
	else if (iVar0 == 16)
	{
		return "NWS_FIB4";
	}
	else if (iVar0 == 17)
	{
		return "NWS_DCKH";
	}
	else if (iVar0 == 18)
	{
		return "NWS_CARS2";
	}
	else if (iVar0 == 19)
	{
		return "NWS_SOL1";
	}
	else if (iVar0 == 20)
	{
		return "NWS_MTN1";
	}
	else if (iVar0 == 21)
	{
		return "NWS_CARS3";
	}
	else if (iVar0 == 22)
	{
		return "NWS_EXL1";
	}
	else if (iVar0 == 23)
	{
		return "NWS_RBH";
	}
	else if (iVar0 == 24)
	{
		return "NWS_EXL3";
	}
	else if (iVar0 == 25)
	{
		return "NWS_FIB5";
	}
	else if (iVar0 == 26)
	{
		return "NWS_MIC1";
	}
	else if (iVar0 == 27)
	{
		return "NWS_SOL2";
	}
	else if (iVar0 == 28)
	{
		return "NWS_FAM6";
	}
	else if (iVar0 == 29)
	{
		return "NWS_AGH";
	}
	else if (iVar0 == 30)
	{
		return "NWS_MIC3";
	}
	else if (iVar0 == 31)
	{
		return "NWS_SOL3";
	}
	else if (iVar0 == 32)
	{
		return "NWS_MIC4";
	}
	else if (iVar0 == 33)
	{
		return "NWS_BSH";
	}
	else if (iVar0 == 34)
	{
		return "NWS_FIN";
	}
	else if (iVar0 == 35)
	{
		return "NWS_PAP1";
	}
	else if (iVar0 == 36)
	{
		return "NWS_PAP3A";
	}
	else if (iVar0 == 37)
	{
		return "NWS_PAP3B";
	}
	else if (iVar0 == 38)
	{
		return "NWS_DRF1";
	}
	else if (iVar0 == 39)
	{
		return "NWS_EPN8";
	}
	else if (iVar0 == 40)
	{
		return "NWS_NIG1A";
	}
	else if (iVar0 == 41)
	{
		return "NWS_NIG1B";
	}
	else if (iVar0 == 42)
	{
		return "NWS_NIG1C";
	}
	else if (iVar0 == 43)
	{
		return "NWS_NIG1D";
	}
	else if (iVar0 == 44)
	{
		return "NWS_NIG2";
	}
	else if (iVar0 == 45)
	{
		return "NWS_NIG3";
	}
	else if (iVar0 == 46)
	{
		return "NWS_EXT4";
	}
	else if (iVar0 == 47)
	{
		return "NWS_ASS1";
	}
	else if (iVar0 == 48)
	{
		return "NWS_ASS2";
	}
	else if (iVar0 == 49)
	{
		return "NWS_ASS3";
	}
	else if (iVar0 == 50)
	{
		return "NWS_ASS4";
	}
	else if (iVar0 == 51)
	{
		return "NWS_ASS5";
	}
	else if (iVar0 == 52)
	{
		return "NWS_O_ATA";
	}
	else if (iVar0 == 53)
	{
		return "NWS_SHK5";
	}
	else if (iVar0 == 54)
	{
		return "NWS_CULT";
	}
	return "";
}

void func_607()//Position - 0x4F302
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GET_CURRENT_WEBSITE");
	uVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar0))
	{
		func_771(0);
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			fLocal_524 = 0f;
		}
		func_640(0, 0);
		SYSTEM::WAIT(0);
	}
	sVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(uVar0);
	iVar2 = MISC::GET_HASH_KEY(sVar1);
	STATS::PLAYSTATS_WEBSITE_VISITED(iVar2, iLocal_500);
	StringCopy(&cLocal_507, sVar1, 64);
	if (MISC::ARE_STRINGS_EQUAL(sVar1, "WWW_MYDIVINEWITHIN_COM") && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 6))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 6);
		while (!GlobalFunc_7022(-1067764575, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar1, "WWW_THECHILDRENOFTHEMOUNTAIN_COM"))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_67115);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Global_67073 = Global_67074;
	Global_67074 = MISC::GET_HASH_KEY(sVar1);
}

void func_608(int iParam0)//Position - 0x4F452
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5[3];
	int iVar9;
	int iVar10;
	var uVar11;
	bool bVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	
	if (Global_67133 != -1)
	{
		if (Global_67133 > Global_67134)
		{
			return;
		}
		else
		{
			Global_67133 = -1;
		}
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (Global_67110)
	{
		if (Global_67109)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (PAD::IS_CONTROL_JUST_PRESSED(2, 237) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
			{
				Global_67109 = 0;
				Global_67110 = 0;
				func_15("ARROW");
				func_773(1, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_507))
				{
					if (Global_68245)
					{
						GlobalFunc_5423();
						GlobalFunc_1539();
					}
				}
				NETWORK::_0xFAE628F1E9ADB239(Global_67111, Global_67112, 0);
				NETWORK::OPEN_COMMERCE_STORE("", "", 4);
				while (NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					func_640(0, 0);
					SYSTEM::WAIT(0);
				}
				Global_67133 = Global_67134 + 500;
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_497);
				iLocal_497 = 0;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || (PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
			{
				StringCopy(&(Global_2428131.f_656.f_12), "", 64);
				func_15("ARROW");
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				Global_67109 = 0;
				Global_67110 = 0;
				func_773(1, 0, 0);
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_497);
				iLocal_497 = 0;
				Global_67133 = Global_67134 + 500;
			}
		}
		return;
	}
	switch (GlobalFunc_8329())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 1:
			iVar0 = 1;
			break;
	}
	if (!Global_67058)
	{
		return;
	}
	if ((GRAPHICS::_0xD1C7CB175E012964(iParam0) || iLocal_1328) || iLocal_1329)
	{
		return;
	}
	iLocal_2588 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
	iLocal_2589 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
	iLocal_2590 = (PAD::GET_CONTROL_VALUE(2, 197) - 128);
	iLocal_2591 = (PAD::GET_CONTROL_VALUE(2, 198) - 128);
	if (iLocal_2588 < 10 && iLocal_2588 > -10)
	{
		iLocal_2588 = 0;
	}
	if (iLocal_2589 < 10 && iLocal_2589 > -10)
	{
		iLocal_2589 = 0;
	}
	if (iLocal_2590 < 10 && iLocal_2590 > -10)
	{
		iLocal_2590 = 0;
	}
	if (iLocal_2591 < 10 && iLocal_2591 > -10)
	{
		iLocal_2591 = 0;
	}
	fVar1 = (1f + (Global_67090 * SYSTEM::TIMESTEP()));
	if (!iLocal_501)
	{
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			fLocal_2596 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
			fLocal_2597 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
			if (fLocal_2596 != fLocal_2598 || fLocal_2597 != fLocal_2599)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MOUSE_INPUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_2596);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_2597);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fLocal_2598 = fLocal_2596;
				fLocal_2599 = fLocal_2597;
			}
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_CONTROL_PRESSED(2, 207))
			{
				fLocal_524 = 200f;
			}
			else if (PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_CONTROL_PRESSED(2, 208))
			{
				fLocal_524 = -200f;
			}
			else if (PAD::IS_CONTROL_PRESSED(2, 242))
			{
				if (fLocal_524 <= 0f)
				{
					fLocal_524 = 200f;
				}
				else
				{
					fLocal_524 = (fLocal_524 + 200f);
					if (fLocal_524 >= 1000f)
					{
						fLocal_524 = 1000f;
					}
				}
			}
			else if (PAD::IS_CONTROL_PRESSED(2, 241))
			{
				if (fLocal_524 >= 0f)
				{
					fLocal_524 = -200f;
				}
				else
				{
					fLocal_524 = (fLocal_524 - 200f);
					if (fLocal_524 <= -1000f)
					{
						fLocal_524 = -1000f;
					}
				}
			}
		}
		else
		{
			if (!iLocal_2592 == iLocal_2588 || !iLocal_2593 == iLocal_2589)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ANALOG_STICK_INPUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((SYSTEM::TO_FLOAT(iLocal_2588) * fVar1));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((SYSTEM::TO_FLOAT(iLocal_2589) * fVar1));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_2592 = iLocal_2588;
				iLocal_2593 = iLocal_2589;
			}
			if (!iLocal_2594 == iLocal_2590 || !iLocal_2595 == iLocal_2591)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ANALOG_STICK_INPUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((SYSTEM::TO_FLOAT(iLocal_2590) * fVar1));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((SYSTEM::TO_FLOAT(iLocal_2591) * fVar1));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_2594 = iLocal_2590;
				iLocal_2595 = iLocal_2591;
				fLocal_524 = 0f;
			}
		}
		if (fLocal_524 != 0f)
		{
			fLocal_524 = (fLocal_524 * 0.9f);
			if (fLocal_524 < 5f && fLocal_524 > -5f)
			{
				fLocal_524 = 0f;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ANALOG_STICK_INPUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_524);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 205))
		{
			if (iLocal_2576 == 0)
			{
				iLocal_2576 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(4));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		else
		{
			iLocal_2576 = 0;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 207))
		{
			if (iLocal_2577 == 0)
			{
				iLocal_2577 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(5));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		else
		{
			iLocal_2577 = 0;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 206))
		{
			if (iLocal_2578 == 0)
			{
				iLocal_2578 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(6));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		else
		{
			iLocal_2578 = 0;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 208))
		{
			if (iLocal_2579 == 0)
			{
				iLocal_2579 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(7));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		else
		{
			iLocal_2579 = 0;
		}
		if (!PAD::_IS_USING_KEYBOARD(2))
		{
			if (PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188))
			{
				if (iLocal_2580 == 0)
				{
					iLocal_2580 = 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(8));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else
			{
				iLocal_2580 = 0;
			}
			if (PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187))
			{
				if (iLocal_2581 == 0)
				{
					iLocal_2581 = 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(9));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else
			{
				iLocal_2581 = 0;
			}
			if (PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 189))
			{
				if (iLocal_2582 == 0)
				{
					iLocal_2582 = 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(10));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else
			{
				iLocal_2582 = 0;
			}
			if (PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 190))
			{
				if (iLocal_2583 == 0)
				{
					iLocal_2583 = 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(11));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else
			{
				iLocal_2583 = 0;
			}
		}
		if (PAD::IS_CONTROL_PRESSED(2, 217))
		{
			if (iLocal_2584 == 0)
			{
				iLocal_2584 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(13));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		else
		{
			iLocal_2584 = 0;
		}
	}
	fVar3 = SYSTEM::TO_FLOAT(Global_51925[iVar0]);
	if (PAD::IS_CONTROL_PRESSED(2, 201) || (PAD::IS_CONTROL_PRESSED(2, 237) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
	{
		if (iLocal_2586 == 0)
		{
			iLocal_2586 = 1;
			if (iLocal_501)
			{
				return;
			}
			if (HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(0) != 0)
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (PAD::IS_CONTROL_PRESSED(2, 201))
					{
						return;
					}
				}
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			if (PAD::IS_CONTROL_PRESSED(2, 201))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(16));
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(1001));
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (PAD::_IS_USING_KEYBOARD_2(2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fLocal_524 = 0f;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "GET_CURRENT_SELECTION");
			uLocal_2569 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_2569))
			{
				func_771(0);
				if (PAD::_IS_USING_KEYBOARD_2(2))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					fLocal_524 = 0f;
				}
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			iLocal_2570 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_2569);
			iVar4 = iLocal_2570;
			Global_67076 = 1;
			if (iVar4 > -1)
			{
				Global_67076 = 0;
				Global_67075 = iVar4;
				iLocal_2605 = 1;
				if ((iLocal_1526 == 5 || iLocal_1526 == 4) || iLocal_1526 == 6)
				{
					iLocal_2517 = 1;
				}
			}
			if (Global_67072 == 18 && Global_67071 == 2)
			{
				if (iVar4 > -1)
				{
					iLocal_498 = iVar4 + 1;
					iVar9 = 0;
					while (iVar9 < 3)
					{
						iVar5[iVar9] = GlobalFunc_5062(iVar9, -1);
						iVar9++;
					}
					func_632(&iVar5, 3);
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (iVar5[iVar9] != 0)
						{
							if (iLocal_498 >= iVar5[iVar9])
							{
								iLocal_498++;
							}
						}
						iVar9++;
					}
				}
			}
			if (iLocal_2609)
			{
				if (!Global_67076)
				{
					iVar10 = func_478(iLocal_504, iLocal_506);
					if (GlobalFunc_82(iLocal_504, Global_67075))
					{
						if (iVar10 != 200)
						{
							func_630(iLocal_504, Global_67075, &uVar11);
						}
						else
						{
							func_629(Global_67075, &uVar11);
						}
					}
				}
			}
			bVar12 = false;
			switch (Global_67072)
			{
				case 4:
					bVar12 = true;
					break;
				
				case 5:
					func_616(iVar4);
					func_615();
					break;
				
				case 7:
					bVar12 = true;
					break;
				
				case 10:
				case 11:
				case 12:
				case 13:
				case 16:
					if (Global_67071 == 15)
					{
						switch (Global_67075)
						{
							case 2:
								func_658(Global_67072, -1);
								break;
							
							case 3:
								iLocal_2685 = 0;
								break;
							}
					}
					break;
			}
			if (bVar12)
			{
				switch (Global_67071)
				{
					case 6:
						if (Global_67075 == 21 && iVar4 != -1)
						{
							Global_67082++;
							Global_67070 = 1;
							bLocal_2601 = true;
							bLocal_2602 = true;
							iLocal_2603 = 0;
						}
						else if (Global_67075 == 22 && iVar4 != -1)
						{
							Global_67082 = (Global_67082 - 1);
							Global_67070 = 1;
							bLocal_2601 = true;
							bLocal_2602 = false;
							iLocal_2603 = 0;
						}
						break;
					
					case 7:
						if (Global_67075 == 21 && iVar4 != -1)
						{
							Global_67082++;
							Global_67070 = 1;
							bLocal_2601 = true;
							bLocal_2602 = true;
							iLocal_2603 = 0;
						}
						else if (Global_67075 == 22 && iVar4 != -1)
						{
							Global_67082 = (Global_67082 - 1);
							Global_67070 = 1;
							bLocal_2601 = true;
							bLocal_2602 = false;
							iLocal_2603 = 0;
						}
						if (Global_67075 == 30)
						{
							Global_67082 = GlobalFunc_2035(iVar0, Global_67080);
							if (Global_67082 > 0)
							{
								iVar2 = GlobalFunc_2034(iVar0, Global_67080);
								fVar13 = func_75(iVar2);
								Global_67085 = (IntToFloat(Global_67082) * fVar13);
								if ((fVar3 + Global_67085) > 2.147484E+09f)
								{
									Global_67082 = SYSTEM::FLOOR(((2.147484E+09f - fVar3) / fVar13));
									Global_67085 = (IntToFloat(Global_67082) * fVar13);
								}
								Global_67086 = SYSTEM::TO_FLOAT(GlobalFunc_2035(iVar0, Global_67080));
								Global_67087 = func_70(iVar0, Global_67080);
							}
						}
						break;
					}
				}
		}
	}
	else
	{
		if (bLocal_2601)
		{
			func_15("ARROW");
		}
		bLocal_2601 = false;
		iLocal_2586 = 0;
	}
	if (HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(0) != 0)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
		}
	}
	if (PAD::IS_CONTROL_PRESSED(2, 202) || (PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
	{
		if (iLocal_2587 == 0)
		{
			iLocal_2587 = 1;
			if (Global_67132 != -1 || iLocal_499 != 3)
			{
			}
			else
			{
				iVar14 = HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(1);
				if (iVar14 == 1)
				{
					if (!func_609(Global_67072, iParam0))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(15));
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (iLocal_1526 > 0)
						{
							func_749();
						}
						if (Global_67067 != 2)
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "GO_BACK");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "CLICK_BACK", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
						}
						else
						{
							func_749();
						}
					}
				}
				else
				{
					func_749();
				}
			}
		}
		if (iLocal_501)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SUPRESS_HISTORY");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::SET_TV_CHANNEL(-1);
			AUDIO::STOP_AUDIO_SCENE("INTERNET_BROWSER_VIDEO_SCENE");
			iLocal_501 = 0;
		}
	}
	else
	{
		iLocal_2587 = 0;
	}
	if (!PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_PRESSED(2, 204))
	{
		if (iLocal_2585 == 0 && iLocal_2687)
		{
			iLocal_2585 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(17));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (Global_67067 != 2)
			{
				func_749();
			}
		}
	}
	else
	{
		iLocal_2585 = 0;
		iLocal_2687 = 1;
	}
	iVar15 = HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(5);
	if (iVar15 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
		{
			func_749();
		}
	}
	func_771(1);
}

int func_609(int iParam0, int iParam1)//Position - 0x500FD
{
	switch (iParam0)
	{
		case 14:
			return func_613();
			break;
		
		case 6:
			return func_610(iParam1);
			break;
	}
	return 0;
}

int func_610(int iParam0)//Position - 0x5012F
{
	int iVar0;
	int iVar1;
	
	iLocal_192 = (iLocal_192 - 1);
	iVar0 = func_612();
	iVar1 = func_611();
	if (iLocal_192 > 0)
	{
		iLocal_45 = iVar0;
		iLocal_47 = iVar1;
		func_505(iParam0, 1);
		return 1;
	}
	return 0;
}

int func_611()//Position - 0x50163
{
	if (iLocal_192 <= 0)
	{
		return iLocal_47;
	}
	return uLocal_171[iLocal_192];
}

int func_612()//Position - 0x5017F
{
	if (iLocal_192 <= 0)
	{
		return 0;
	}
	return iLocal_150[iLocal_192];
}

int func_613()//Position - 0x5019A
{
	int iVar0;
	
	iVar0 = func_614();
	if (iVar0 > 0)
	{
		iLocal_461 = iVar0;
		func_552(iLocal_485);
		return 1;
	}
	return 0;
}

int func_614()//Position - 0x501BF
{
	iLocal_484 = (iLocal_484 - 1);
	if (iLocal_484 <= 0)
	{
		return 0;
	}
	return iLocal_463[iLocal_484];
}

void func_615()//Position - 0x501E5
{
	if (Global_67071 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("epsrobes")) < 1)
		{
			return;
		}
		if (GlobalFunc_8329() != 0)
		{
			return;
		}
		if (Global_67089 != 1)
		{
			Global_67089 = 1;
		}
	}
}

void func_616(int iParam0)//Position - 0x5021D
{
	int iVar0;
	
	switch (Global_67071)
	{
		case 20:
			switch (iParam0)
			{
				case 2:
					if (GlobalFunc_469(0) < 500)
					{
						func_628(2);
						return;
					}
					GlobalFunc_10608(0, 0, 29, 500, 0);
					func_617(500);
					break;
				
				case 3:
					if (GlobalFunc_469(0) < 5000)
					{
						func_628(2);
						return;
					}
					GlobalFunc_10608(0, 0, 29, 5000, 0);
					func_617(5000);
					break;
			}
			break;
		
		case 21:
			if (iParam0 == 1)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("epsrobes")) < 1)
				{
					func_628(1);
					return;
				}
				if (GlobalFunc_469(0) < 25000)
				{
					func_628(2);
					return;
				}
				GlobalFunc_10608(0, 0, 30, 25000, 0);
				if (!GlobalFunc_485(91))
				{
					GlobalFunc_585(91, 1);
					STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
					if (iVar0 < 15)
					{
						STATS::STAT_SET_INT(joaat("num_epsilon_step"), 15, 1);
						GlobalFunc_4(23, 15);
					}
					func_356();
					GlobalFunc_4907();
				}
			}
			break;
	}
}

void func_617(int iParam0)//Position - 0x50325
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment < 1000000)
	{
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment = (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment + iParam0);
	}
	if (GlobalFunc_794(12))
	{
		if (!GlobalFunc_485(89))
		{
			if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment >= 10000)
			{
				STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
				if (iVar0 < 13)
				{
					STATS::STAT_SET_INT(joaat("num_epsilon_step"), 13, 1);
					GlobalFunc_4(23, 13);
				}
				GlobalFunc_585(89, 1);
				GlobalFunc_7917(1357988739);
				GlobalFunc_4907();
			}
		}
	}
	else if (GlobalFunc_794(10))
	{
		if (!GlobalFunc_485(88))
		{
			if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment >= 5000)
			{
				STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar1, -1);
				if (iVar1 < 5)
				{
					STATS::STAT_SET_INT(joaat("num_epsilon_step"), 5, 1);
					GlobalFunc_4(23, 5);
				}
				GlobalFunc_585(88, 1);
				GlobalFunc_7917(1343538152);
				GlobalFunc_4907();
			}
		}
	}
	else if (GlobalFunc_794(9))
	{
		if (!GlobalFunc_485(87))
		{
			if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment >= 500)
			{
				STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar2, -1);
				if (iVar2 < 3)
				{
					STATS::STAT_SET_INT(joaat("num_epsilon_step"), 3, 1);
					GlobalFunc_4(23, 3);
				}
				GlobalFunc_585(87, 1);
				GlobalFunc_7917(-1504002834);
				GlobalFunc_4907();
			}
		}
	}
}











void func_628(int iParam0)//Position - 0x50B0F
{
	Global_67137 = iParam0;
	switch (iParam0)
	{
		case 3:
			if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			}
			func_651("WWW_EPSILONPROGRAM_COM_S_ERROR");
			break;
		
		case 1:
			func_651("WWW_EPSILONPROGRAM_COM_S_TRANSACTION_D_FAILED");
			break;
		
		case 0:
			func_651("WWW_EPSILONPROGRAM_COM_S_TRANSACTION_D_FAILED");
			break;
		
		default:
			func_651("WWW_EPSILONPROGRAM_COM_S_ERROR");
			break;
	}
}

void func_629(int iParam0, var uParam1)//Position - 0x50B7C
{
	switch (iParam0)
	{
		case 25:
			Global_67135 = 1;
			*uParam1 = 1;
			break;
		
		case 26:
			Global_67135 = 2;
			*uParam1 = 1;
			break;
		
		case 27:
			Global_67135 = 3;
			*uParam1 = 1;
			break;
		
		case 28:
			Global_67135 = 4;
			*uParam1 = 1;
			break;
		
		case 29:
			Global_67135 = 5;
			*uParam1 = 1;
			break;
		
		case 30:
			Global_67135 = 6;
			*uParam1 = 1;
			break;
		
		case 31:
			Global_67135 = 7;
			*uParam1 = 1;
			break;
		
		case 32:
			Global_67135 = 8;
			*uParam1 = 1;
			break;
		
		case 33:
			Global_67135 = 9;
			*uParam1 = 1;
			break;
		
		case 34:
			Global_67135 = 10;
			*uParam1 = 1;
			break;
		
		case 35:
			Global_67135 = 11;
			*uParam1 = 1;
			break;
		
		case 36:
			Global_67135 = 12;
			*uParam1 = 1;
			break;
		
		case 37:
			Global_67135 = 13;
			*uParam1 = 1;
			break;
		
		case 38:
			Global_67135 = 14;
			*uParam1 = 1;
			break;
		
		case 39:
			Global_67135 = 15;
			*uParam1 = 1;
			break;
		
		case 40:
			Global_67135 = 16;
			*uParam1 = 1;
			break;
		
		case 41:
			Global_67135 = 17;
			*uParam1 = 1;
			break;
		
		case 42:
			Global_67135 = 18;
			*uParam1 = 1;
			break;
		
		case 43:
			Global_67135 = 19;
			*uParam1 = 1;
			break;
		
		case 44:
			Global_67135 = 20;
			*uParam1 = 1;
			break;
		
		case 45:
			Global_67135 = 21;
			*uParam1 = 1;
			break;
		
		case 46:
			Global_67135 = 22;
			*uParam1 = 1;
			break;
		
		case 47:
			Global_67135 = 23;
			*uParam1 = 1;
			break;
		
		case 48:
			Global_67135 = 24;
			*uParam1 = 1;
			break;
		
		case 49:
			Global_67135 = 25;
			*uParam1 = 1;
			break;
		
		case 0:
			Global_67135 = 1;
			*uParam1 = 0;
			break;
		
		case 1:
			Global_67135 = 2;
			*uParam1 = 0;
			break;
		
		case 2:
			Global_67135 = 3;
			*uParam1 = 0;
			break;
		
		case 3:
			Global_67135 = 4;
			*uParam1 = 0;
			break;
		
		case 4:
			Global_67135 = 5;
			*uParam1 = 0;
			break;
		
		case 5:
			Global_67135 = 6;
			*uParam1 = 0;
			break;
		
		case 6:
			Global_67135 = 7;
			*uParam1 = 0;
			break;
		
		case 7:
			Global_67135 = 8;
			*uParam1 = 0;
			break;
		
		case 8:
			Global_67135 = 9;
			*uParam1 = 0;
			break;
		
		case 9:
			Global_67135 = 10;
			*uParam1 = 0;
			break;
		
		case 10:
			Global_67135 = 11;
			*uParam1 = 0;
			break;
		
		case 11:
			Global_67135 = 12;
			*uParam1 = 0;
			break;
		
		case 12:
			Global_67135 = 13;
			*uParam1 = 0;
			break;
		
		case 13:
			Global_67135 = 14;
			*uParam1 = 0;
			break;
		
		case 14:
			Global_67135 = 15;
			*uParam1 = 0;
			break;
		
		case 15:
			Global_67135 = 16;
			*uParam1 = 0;
			break;
		
		case 16:
			Global_67135 = 17;
			*uParam1 = 0;
			break;
		
		case 17:
			Global_67135 = 18;
			*uParam1 = 0;
			break;
		
		case 18:
			Global_67135 = 19;
			*uParam1 = 0;
			break;
		
		case 19:
			Global_67135 = 20;
			*uParam1 = 0;
			break;
		
		case 20:
			Global_67135 = 21;
			*uParam1 = 0;
			break;
		
		case 21:
			Global_67135 = 22;
			*uParam1 = 0;
			break;
		
		case 22:
			Global_67135 = 23;
			*uParam1 = 0;
			break;
		
		case 23:
			Global_67135 = 24;
			*uParam1 = 0;
			break;
		
		case 24:
			Global_67135 = 25;
			*uParam1 = 0;
			break;
		
		default:
			break;
	}
}

void func_630(int iParam0, int iParam1, var uParam2)//Position - 0x50F36
{
	*uParam2 = 0;
	if (iParam0 == 10)
	{
		switch (iParam1)
		{
			case 8:
				Global_67135 = 1;
				*uParam2 = 0;
				break;
			
			case 9:
				Global_67135 = 2;
				*uParam2 = 0;
				break;
			
			case 10:
				Global_67135 = 3;
				*uParam2 = 0;
				break;
			
			case 11:
				Global_67135 = 4;
				*uParam2 = 0;
				break;
			
			case 12:
				Global_67135 = 5;
				*uParam2 = 0;
				break;
			
			case 13:
				Global_67135 = 6;
				*uParam2 = 0;
				break;
			
			case 14:
				Global_67135 = 7;
				*uParam2 = 0;
				break;
			
			case 15:
				Global_67135 = 8;
				*uParam2 = 0;
				break;
			
			case 0:
				Global_67135 = 1;
				*uParam2 = 1;
				break;
			
			case 1:
				Global_67135 = 2;
				*uParam2 = 1;
				break;
			
			case 2:
				Global_67135 = 3;
				*uParam2 = 1;
				break;
			
			case 3:
				Global_67135 = 4;
				*uParam2 = 1;
				break;
			
			case 4:
				Global_67135 = 5;
				*uParam2 = 1;
				break;
			
			case 5:
				Global_67135 = 6;
				*uParam2 = 1;
				break;
			
			case 6:
				Global_67135 = 7;
				*uParam2 = 1;
				break;
			
			case 7:
				Global_67135 = 8;
				*uParam2 = 1;
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 16)
	{
		switch (iParam1)
		{
			case 8:
				Global_67135 = 1;
				*uParam2 = 0;
				break;
			
			case 9:
				Global_67135 = 2;
				*uParam2 = 0;
				break;
			
			case 10:
				Global_67135 = 3;
				*uParam2 = 0;
				break;
			
			case 11:
				Global_67135 = 4;
				*uParam2 = 0;
				break;
			
			case 12:
				Global_67135 = 5;
				*uParam2 = 0;
				break;
			
			case 13:
				Global_67135 = 6;
				*uParam2 = 0;
				break;
			
			case 14:
				Global_67135 = 7;
				*uParam2 = 0;
				break;
			
			case 15:
				Global_67135 = 8;
				*uParam2 = 0;
				break;
			
			case 0:
				Global_67135 = 1;
				*uParam2 = 1;
				break;
			
			case 1:
				Global_67135 = 2;
				*uParam2 = 1;
				break;
			
			case 2:
				Global_67135 = 3;
				*uParam2 = 1;
				break;
			
			case 3:
				Global_67135 = 4;
				*uParam2 = 1;
				break;
			
			case 4:
				Global_67135 = 5;
				*uParam2 = 1;
				break;
			
			case 5:
				Global_67135 = 6;
				*uParam2 = 1;
				break;
			
			case 6:
				Global_67135 = 7;
				*uParam2 = 1;
				break;
			
			case 7:
				Global_67135 = 8;
				*uParam2 = 1;
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 12)
	{
	}
	else if (iParam0 == 11)
	{
		switch (iParam1)
		{
			case 2:
				Global_67135 = 1;
				*uParam2 = 0;
				break;
			
			case 3:
				Global_67135 = 2;
				*uParam2 = 0;
				break;
			
			case 0:
				Global_67135 = 1;
				*uParam2 = 1;
				break;
			
			case 1:
				Global_67135 = 2;
				*uParam2 = 1;
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 13)
	{
	}
}


void func_632(int iParam0, int iParam1)//Position - 0x51227
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		iVar1 = iVar0 + 1;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*iParam0)[iVar1] < (*iParam0)[iVar0])
			{
				uVar2 = (*iParam0)[iVar1];
				(*iParam0)[iVar1] = (*iParam0)[iVar0];
				(*iParam0)[iVar0] = uVar2;
			}
			iVar1++;
		}
		iVar0++;
	}
}



void func_635(int iParam0, var uParam1)//Position - 0x512D1
{
	struct<6> Var0;
	int iVar6;
	
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Var0 = { func_636() };
		return;
	}
	iVar6 = MISC::GET_GAME_TIMER() + 2000;
	switch (iParam0)
	{
		case 0:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_TASTY", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
		
		case 1:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_COLON", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
		
		case 2:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_CSEC", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
		
		case 3:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_DOG", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
		
		case 4:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_VOMIT", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
		
		case 5:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_PAIN", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
		
		case 6:
			GlobalFunc_173(uParam1, 1, 0, "PACO", 0, 1);
			while (!func_20(uParam1, "PACOWAU", "PACOW_MELT", 1, 0, 1, 0) && MISC::GET_GAME_TIMER() <= iVar6)
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			break;
	}
}

struct<6> func_636()//Position - 0x51501
{
	return Global_15311;
}

void func_637(char* sParam0)//Position - 0x5150E
{
	if (iLocal_502 == 1)
	{
		return;
	}
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, sParam0, 1);
	GRAPHICS::SET_TV_AUDIO_FRONTEND(1);
	GRAPHICS::SET_TV_VOLUME(-5f);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
	GRAPHICS::SET_TV_CHANNEL(0);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, 0.5f, 0.5f, 0f, 255, 255, 255, 255);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SUPRESS_HISTORY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	AUDIO::START_AUDIO_SCENE("INTERNET_BROWSER_VIDEO_SCENE");
	iLocal_501 = 1;
}

void func_638(int iParam0, int iParam1, int iParam2)//Position - 0x51593
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iLocal_256)
	{
		case 1:
			switch (iLocal_254)
			{
				case 1:
					if (iParam1 == 0)
					{
						if (func_500(iLocal_255))
						{
							if (GlobalFunc_218())
							{
								if (NETSHOPPING::_0x613F125BA3BD2EB9())
								{
									iLocal_256 = 3;
									func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
									return;
								}
								NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
								if (iVar0 != 8)
								{
									iLocal_256 = 3;
									func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
									return;
								}
								if (NETSHOPPING::_NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(GlobalFunc_1028(joaat("mpply_last_mp_char")), iLocal_255))
								{
									iVar2 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS();
									while (iVar2 == 1)
									{
										iVar2 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2();
										Stack.Push(0);
										Stack.Push(0);
										Call_Loc(iParam2);
										SYSTEM::WAIT(0);
									}
									if (iVar2 == 3)
									{
										NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED();
									}
									else
									{
										iLocal_256 = 3;
										func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
										return;
									}
								}
								else
								{
									iLocal_256 = 2;
									func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
									return;
								}
							}
							MONEY::WITHDRAW_VC(iLocal_255);
							if (Global_68245 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								GlobalFunc_7743(1903, 1, -1);
							}
							iLocal_254 = 2;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GlobalFunc_726("MPATM_TRANCOM");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GlobalFunc_726("MPATM_MENU");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					else if (iParam1 == 1)
					{
						func_651("WWW_MAZE_D_BANK_COM_S_MAINMENU");
					}
					break;
				
				case 2:
					if (iParam1 == 0)
					{
						func_651("WWW_MAZE_D_BANK_COM_S_MAINMENU");
					}
					break;
			}
			break;
		
		case 2:
			switch (iLocal_254)
			{
				case 1:
					if (iParam1 == 0)
					{
						if (func_497(iLocal_255))
						{
							if (GlobalFunc_218())
							{
								if (NETSHOPPING::_0x613F125BA3BD2EB9())
								{
									iLocal_256 = 3;
									func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
									return;
								}
								NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar3, &uVar4);
								if (iVar3 != 8)
								{
									iLocal_256 = 3;
									func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
									return;
								}
								if (NETSHOPPING::_NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(GlobalFunc_1028(joaat("mpply_last_mp_char")), iLocal_255))
								{
									iVar5 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2();
									while (iVar5 == 1)
									{
										iVar5 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2();
										Stack.Push(0);
										Stack.Push(0);
										Call_Loc(iParam2);
										SYSTEM::WAIT(0);
									}
									if (iVar5 == 3)
									{
										NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED();
									}
									else
									{
										iLocal_256 = 3;
										func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
										return;
									}
								}
								else
								{
									iLocal_256 = 2;
									func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
									return;
								}
							}
							MONEY::DEPOSIT_VC(iLocal_255);
							if (Global_68245 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								GlobalFunc_7743(1903, 1, -1);
							}
							iLocal_254 = 2;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GlobalFunc_726("MPATM_TRANCOM");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GlobalFunc_726("MPATM_MENU");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "UPDATE_TEXT");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					else if (iParam1 == 1)
					{
						func_651("WWW_MAZE_D_BANK_COM_S_MAINMENU");
					}
					break;
				
				case 2:
					if (iParam1 == 0)
					{
						func_651("WWW_MAZE_D_BANK_COM_S_MAINMENU");
					}
					break;
			}
			break;
	}
}


void func_640(bool bParam0, bool bParam1)//Position - 0x518C0
{
	int iVar0;
	
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 26, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 26, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 270, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 271, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 272, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 273, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 282, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 283, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 284, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 285, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 286, 1);
	PAD::DISABLE_CONTROL_ACTION(1, 287, 1);
	iVar0 = SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP())));
	Global_67134 = (Global_67134 + iVar0);
	iLocal_500 = (iLocal_500 + iVar0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!bLocal_492)
	{
		AUDIO::START_AUDIO_SCENE("WEB_GENERAL_BROWSING_SCENE");
		bLocal_492 = true;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(20);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	if (Global_68245)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
	}
	if (Global_68245)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	if (!HUD::IS_RADAR_HIDDEN())
	{
		bLocal_491 = true;
		HUD::DISPLAY_RADAR(0);
	}
	GlobalFunc_187();
	if (!bParam0)
	{
		GlobalFunc_7629();
	}
	if (!iLocal_692)
	{
		if (iLocal_694 == 2)
		{
			iLocal_694 = -1;
			HUD::_SET_MOUSE_CURSOR_SPRITE(1);
			func_15("ARROW");
		}
	}
	else if (iLocal_694 != 2)
	{
		iLocal_694 = 2;
		HUD::_SET_MOUSE_CURSOR_SPRITE(2);
		func_15("BUSY");
	}
	if (func_761())
	{
		return;
	}
	Global_35729 = 1;
	GlobalFunc_5473();
	if (Global_67092)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_67093))
		{
			GlobalFunc_573(&Global_67093, -1);
		}
		if (iLocal_525 < Global_67134)
		{
			StringCopy(&Global_67093, "", 16);
		}
	}
	if (Global_67058 && !bLocal_486)
	{
		func_10();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_495))
		{
			if (iLocal_495 == 0)
			{
				iLocal_495 = unk_0x67D02A194A2FC2BD("web_browser");
			}
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
		}
		if (!bParam1)
		{
			func_642();
		}
		if (Global_67110)
		{
			func_641();
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		if (Global_67060)
		{
			if (iLocal_489 || Global_67109)
			{
				if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_496))
				{
					if (iLocal_496 == 0)
					{
						iLocal_496 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
					}
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_496, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_641()//Position - 0x51B4F
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 189, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 190, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
	iVar2 = 18;
	iVar3 = 0;
	if (!Global_67109)
	{
		Global_67109 = 0;
		Global_2428131.f_656.f_12 = { cLocal_507 };
		func_773(1, 0, 0);
		Global_67109 = 1;
	}
	sVar0 = "BRSCRWTEX";
	if (!GlobalFunc_227())
	{
		switch (Global_2543304)
		{
			case 0:
				sVar1 = "BRDISTEX";
				break;
			
			case 1:
				sVar1 = "BRDISDLC";
				break;
		}
		iVar3 = "BRSHETEX";
	}
	else
	{
		switch (Global_2543304)
		{
			case 0:
				sVar1 = "BRDISTES";
				break;
			
			case 1:
				sVar1 = "BRDISDLC";
				break;
		}
		iVar3 = "BRSHETES";
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, iVar2, iVar3, 0, -1, 0, 0, 1);
}

void func_642()//Position - 0x51C33
{
	if (iLocal_2568 > 0)
	{
		iLocal_2568 = (iLocal_2568 - SYSTEM::CEIL((0f + (1000f * SYSTEM::TIMESTEP()))));
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2567))
		{
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_2567, 255, 255, 255, 0, 0);
		}
	}
	else if (iLocal_2567 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2567);
		iLocal_2567 = 0;
	}
}




void func_646(int iParam0)//Position - 0x51D22
{
	if (iParam0 > 2 && iParam0 < 9)
	{
		if (func_497(func_498((iParam0 - 3), 1)))
		{
			iLocal_256 = 2;
			iLocal_254 = 1;
			iLocal_255 = func_498((iParam0 - 3), 1);
			func_651("WWW_MAZE_D_BANK_COM_S_MESSAGE");
		}
		else
		{
			iLocal_256 = 2;
			func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
		}
	}
}

void func_647(int iParam0)//Position - 0x51D76
{
	if (iParam0 > 2 && iParam0 < 9)
	{
		if (func_500(func_498((iParam0 - 3), 0)))
		{
			iLocal_256 = 1;
			iLocal_254 = 1;
			iLocal_255 = func_498((iParam0 - 3), 0);
			func_651("WWW_MAZE_D_BANK_COM_S_MESSAGE");
		}
		else
		{
			iLocal_256 = 1;
			func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
		}
	}
}

void func_648(int iParam0)//Position - 0x51DCA
{
	if (iParam0 == 3)
	{
		if (func_650())
		{
			func_651("WWW_MAZE_D_BANK_COM_S_DEPOSIT");
		}
		else
		{
			iLocal_256 = 2;
			func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
		}
	}
	else if (iParam0 == 4)
	{
		if (func_649())
		{
			func_651("WWW_MAZE_D_BANK_COM_S_WITHDRAW");
		}
		else
		{
			iLocal_256 = 1;
			func_651("WWW_MAZE_D_BANK_COM_S_ERROR");
		}
	}
	else if (iParam0 == 5)
	{
		func_651("WWW_MAZE_D_BANK_COM_S_TRANSACTIONS");
	}
}

bool func_649()//Position - 0x51E33
{
	return func_500(func_498(0, 0));
}

bool func_650()//Position - 0x51E45
{
	return func_497(func_498(0, 0));
}

void func_651(char* sParam0)//Position - 0x51E57
{
	StringCopy(&Global_67116, sParam0, 64);
	Global_67132 = Global_67134 + 1000;
}



void func_654(int iParam0, int iParam1)//Position - 0x51F13
{
	switch (iParam1)
	{
		case 0:
			switch (GlobalFunc_8329())
			{
				case 0:
					iLocal_45 = 0;
					break;
				
				case 1:
					iLocal_45 = 1;
					break;
				
				case 2:
					iLocal_45 = 2;
					break;
			}
			iLocal_47 = 0;
			break;
		
		case 1:
			break;
		
		case 2:
			iLocal_47 = 1;
			break;
		
		case 3:
			iLocal_47 = 2;
			break;
	}
	func_549(iLocal_45, iLocal_47);
	func_505(iParam0, 1);
}

void func_655(int iParam0, int iParam1)//Position - 0x51F8B
{
	int iVar0;
	struct<4> Var1;
	
	iLocal_45 = iLocal_49[iParam1];
	iLocal_47 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		iLocal_49[iVar0] = 211;
		iVar0++;
	}
	func_549(iLocal_45, iLocal_47);
	Var1 = { func_518(iLocal_45) };
	func_505(iParam0, 0);
}

void func_656(int iParam0)//Position - 0x51FD2
{
	int iVar0;
	int iVar1;
	
	if (Global_67075 < 1)
	{
		return;
	}
	if (Global_67075 == 1)
	{
		iLocal_461 = 1;
	}
	else if (Global_67075 == 2)
	{
		iLocal_461 = func_554();
	}
	else if (Global_67075 == 3)
	{
		iLocal_461 = (iLocal_461 - 1);
	}
	else if (Global_67075 == 4)
	{
		iLocal_461++;
	}
	else if (Global_67075 > 4 && Global_67075 < 15)
	{
		if (iLocal_461 > 10)
		{
			iVar0 = ((iLocal_461 - 1) / 10) * 10;
			iLocal_461 = ((Global_67075 - 4) + iVar0);
		}
		else
		{
			iLocal_461 = (Global_67075 - 4);
		}
	}
	if (iVar1 != iLocal_461)
	{
		func_552(iParam0);
		func_551(iLocal_461);
	}
}

void func_657(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x52082
{
	int iVar0;
	
	iLocal_696 = iParam1;
	iLocal_697 = iParam2;
	if (iParam1 == 2)
	{
		if (Global_68245)
		{
			iVar0 = GlobalFunc_1365(iParam2);
			func_475(iVar0, iParam3, 0);
			func_15("BUSY");
		}
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	switch (iParam0)
	{
		case 10:
			func_651("WWW_LEGENDARYMOTORSPORT_NET_S_PURCHASE_D_ERROR");
			break;
		
		case 11:
			func_651("WWW_ELITASTRAVEL_COM_S_PURCHASE_D_ERROR");
			break;
		
		case 12:
			func_651("WWW_WARSTOCK_D_CACHE_D_AND_D_CARRY_COM_S_PURCHASE_D_ERROR");
			break;
		
		case 13:
			func_651("WWW_DOCKTEASE_COM_S_PURCHASE_D_ERROR");
			break;
		
		case 15:
			func_651("WWW_PANDMCYCLES_COM_S_PURCHASE_D_ERROR");
			break;
		
		case 16:
			func_651("WWW_SOUTHERNSANANDREASSUPERAUTOS_COM_S_PURCHASE_D_ERROR");
			break;
		
		default:
			break;
	}
}

int func_658(int iParam0, int iParam1)//Position - 0x52147
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	if (!iLocal_2685)
	{
		return 0;
	}
	iLocal_2685 = 0;
	if (Local_2610.f_42 != GlobalFunc_1365(iLocal_2682))
	{
		return 0;
	}
	bVar1 = false;
	while (!func_698(iLocal_2682, &Local_2610, &iVar0, &bVar1) && func_264())
	{
		func_771(0);
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_MOUSE_INPUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_ANALOG_STICK_INPUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			fLocal_524 = 0f;
		}
		func_640(0, 0);
		SYSTEM::WAIT(0);
	}
	iVar2 = -1;
	iVar3 = -1;
	if (iLocal_2683 == -1)
	{
		iVar2 = GlobalFunc_6953(1, 0, GlobalFunc_1361(Local_2610.f_42), 0, -1);
	}
	else
	{
		iVar2 = iLocal_2683;
	}
	if (iLocal_2684 == -1)
	{
		iVar3 = GlobalFunc_8512(1, 0, GlobalFunc_1361(Local_2610.f_42), 0, -1, 0);
	}
	else
	{
		iVar3 = iLocal_2684;
	}
	if (Global_262145.f_7796)
	{
		iVar3 = iVar2;
	}
	if (iVar2 > -1 && iVar3 > -1)
	{
		if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_2 == iVar2)
		{
			GlobalFunc_6760(0, 0, 0, 0);
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_2 = -1;
		}
		iVar4 = func_412(iLocal_2682, bVar1);
		bVar5 = false;
		switch (iParam0)
		{
			case 10:
			case 16:
				iVar4 = SYSTEM::CEIL((Global_262145.f_64 * SYSTEM::TO_FLOAT(iVar4)));
				break;
			
			case 11:
			case 12:
				if (GlobalFunc_2044(iLocal_2682) == 1)
				{
					iVar4 = SYSTEM::CEIL((Global_262145.f_65 * SYSTEM::TO_FLOAT(iVar4)));
				}
				else
				{
					iVar4 = SYSTEM::CEIL((Global_262145.f_66 * SYSTEM::TO_FLOAT(iVar4)));
				}
				break;
			
			case 13:
				iVar4 = SYSTEM::CEIL((Global_262145.f_67 * SYSTEM::TO_FLOAT(iVar4)));
				break;
			
			case 15:
				iVar4 = SYSTEM::CEIL((Global_262145.f_68 * SYSTEM::TO_FLOAT(iVar4)));
				break;
		}
		if (Global_262145.f_6018)
		{
			switch (iParam0)
			{
				case 10:
					iVar4 = SYSTEM::CEIL((((100f - Global_262145.f_6704) / 100f) * SYSTEM::TO_FLOAT(iVar4)));
					break;
				
				case 11:
					iVar4 = SYSTEM::CEIL((((100f - Global_262145.f_6705) / 100f) * SYSTEM::TO_FLOAT(iVar4)));
					break;
				
				case 16:
					iVar4 = SYSTEM::CEIL((((100f - Global_262145.f_6706) / 100f) * SYSTEM::TO_FLOAT(iVar4)));
					break;
				}
		}
		if (iParam1 > -1)
		{
			iVar4 = iParam1;
		}
		switch (iParam0)
		{
			case 10:
				if (GlobalFunc_4962(3))
				{
					bVar5 = true;
				}
				break;
			
			case 11:
				if (GlobalFunc_4962(4))
				{
					bVar5 = true;
				}
				break;
			
			case 12:
				if (GlobalFunc_4962(2))
				{
					bVar5 = true;
				}
				break;
		}
		if (GlobalFunc_218())
		{
			iLocal_692 = 1;
			iLocal_693 = 0;
			iVar6 = GlobalFunc_6962(Local_2610.f_42, bVar1);
			iVar7 = GlobalFunc_1618(iLocal_2683);
			iVar8 = -1;
			iVar9 = 0;
			if (bVar5)
			{
				switch (iParam0)
				{
					case 10:
						iVar9 = 118439962;
						break;
					
					case 11:
						iVar9 = 1514966546;
						break;
					
					case 12:
						iVar9 = 1776242445;
						break;
					}
			}
			while (func_220(&iVar8, iParam1, Local_2610.f_42, -1224924353, -897111558, iVar6, iVar7, iVar9, 0, 0, iVar0))
			{
				func_640(0, 0);
				SYSTEM::WAIT(0);
			}
			switch (iVar8)
			{
				case 0:
					StringCopy(&cVar10, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Local_2610.f_42), 16);
					VEHICLE::DELETE_VEHICLE(&iVar0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2610.f_42);
					iLocal_2683 = -1;
					iLocal_2684 = -1;
					return 0;
					break;
				
				case 2:
					break;
				
				default:
					break;
			}
		}
		if (bVar5)
		{
			switch (iParam0)
			{
				case 10:
					iVar4 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iVar4)));
					break;
				
				case 11:
					iVar4 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iVar4)));
					break;
				
				case 12:
					iVar4 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iVar4)));
					break;
				}
		}
		func_669(iVar0, iVar2, 1, 1, 0, 1, 1, -1);
		GlobalFunc_6748(iVar3, iVar2, -1);
		if (!GlobalFunc_1361(Local_2610.f_42))
		{
			func_665(iVar2);
		}
		func_664(iVar2);
		if (bVar5)
		{
			switch (iParam0)
			{
				case 10:
					GlobalFunc_4960(3);
					break;
				
				case 11:
					GlobalFunc_4960(4);
					break;
				
				case 12:
					GlobalFunc_4960(2);
					break;
				}
		}
		switch (iParam0)
		{
			case 10:
				iVar14 = 85;
				break;
			
			case 11:
				iVar14 = 87;
				break;
			
			case 12:
				iVar14 = 86;
				break;
			
			case 13:
				iVar14 = 88;
				break;
			
			case 15:
				iVar14 = 89;
				break;
			
			case 16:
				iVar14 = 90;
				break;
		}
		iVar15 = GlobalFunc_1028(joaat("mpply_vehicle_id_admin_web"));
		if (iVar15 == Local_2610.f_42)
		{
			GlobalFunc_949(joaat("mpply_vehicle_id_admin_web"), 0);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		if (iVar4 >= 0)
		{
			GlobalFunc_5311(joaat("mpply_ingamestore_moneyspent"), iVar4);
			bVar16 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= false;
			bVar17 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iVar4;
			if (((bVar16 && MONEY::NETWORK_CAN_SPEND_MONEY(iVar4, 1, 0, 0, -1)) || (bVar17 && MONEY::NETWORK_CAN_SPEND_MONEY(iVar4, 0, 1, 0, -1))) || GlobalFunc_218())
			{
				if (GlobalFunc_218())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
				}
				MONEY::NETWORK_BUY_ITEM(iVar4, GlobalFunc_1365(iLocal_2682), 7, 1, bVar16, GlobalFunc_5594(iLocal_2682), iVar14, 0, 0, bVar17);
				if (GlobalFunc_218())
				{
					GlobalFunc_5069(GlobalFunc_5422());
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (Local_2610.f_42 == joaat("monster"))
					{
						GlobalFunc_5217(3604, 1, -1, 1);
					}
					else if (Local_2610.f_42 == joaat("sovereign"))
					{
						GlobalFunc_5217(3605, 1, -1, 1);
					}
					func_394(GlobalFunc_1365(iLocal_2682), iVar4);
					iVar18 = GlobalFunc_6872(2042, -1, 0);
					iVar19 = ((iVar18 / 1000000) + 1 * 1000000);
					if ((iVar18 + iVar4) >= iVar19)
					{
						func_393((iVar19 / 1000000) + 1);
					}
					GlobalFunc_6720(2042, (iVar18 + iVar4), -1, 1);
				}
			}
			Global_2097152[GlobalFunc_177() /*8053*/][iVar2 /*111*/].f_109 = iVar4;
		}
		if (iVar4 == 0)
		{
			MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar2 /*111*/].f_72), 13);
		}
		Global_2097152[GlobalFunc_177() /*8053*/].f_7876.f_149 = 1;
		iLocal_523 = 1;
		GlobalFunc_7918(iVar2, &(Global_2097152[GlobalFunc_177() /*8053*/][iVar2 /*111*/]), 0, -1, 0, 0);
		VEHICLE::DELETE_VEHICLE(&iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2610.f_42);
		iLocal_2686 = iLocal_2683;
		iLocal_2683 = -1;
		iLocal_2684 = -1;
		return 1;
	}
	func_657(iParam0, 1, iLocal_2682, func_412(iLocal_2682, bVar1));
	VEHICLE::DELETE_VEHICLE(&iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2610.f_42);
	iLocal_2686 = iLocal_2683;
	iLocal_2683 = -1;
	iLocal_2684 = -1;
	return 0;
}






void func_664(int iParam0)//Position - 0x53367
{
	MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 10);
	GlobalFunc_7918(iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/]), 1, -1, 0, 0);
}

void func_665(int iParam0)//Position - 0x533A0
{
	if (iParam0 >= 0 && iParam0 <= 39)
	{
		MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 2);
		GlobalFunc_6857(101, 1, -1, 1);
		GlobalFunc_7918(iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/]), 1, -1, 0, 0);
		if (!Global_1318828)
		{
			GlobalFunc_9660(91, 3, 1);
			Global_1318828 = 1;
		}
		else
		{
			GlobalFunc_9660(91, 3, 0);
		}
	}
}




void func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x53677
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		GlobalFunc_5021();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 12);
			MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 15);
			MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 2);
			GlobalFunc_5457(iParam1, 1);
		}
		func_676(iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/]), bParam5);
		Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_46 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 1);
			MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 6);
			MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 0);
		}
		if (bParam4)
		{
			GlobalFunc_5352(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 15);
			MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 2);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (MISC::IS_BIT_SET(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_72), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) < 255)
		{
			GlobalFunc_102(&iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9), &(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_35));
			if (GlobalFunc_1608(iParam1, &iVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2097152[GlobalFunc_177() /*8053*/].f_4358.f_1396 = iParam1 + 1;
				}
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_40 = 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_41 = 0;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/] = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_42;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_3 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_41;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_4 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_38;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_5 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_39;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_6 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_40;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_10 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_45;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_16 = MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_53, 9);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_19 = { Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_1 };
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_23 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_7 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[11];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_8 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[12];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_9 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[23];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_11 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[4];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_12 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[15];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_13 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[16];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_14 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[14];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_15 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[22];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_18 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[20];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_17 = Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_9[18];
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 11) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 12) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 4) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 23) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 14) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 16) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 15) + 1;
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(iParam0);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(iParam0);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iParam0, 14, 0);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iParam0, 14, 1);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iParam0, 14, 2);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iParam0, 14, 3);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0);
				Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_31 = GlobalFunc_192(iParam0);
				GlobalFunc_4968(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_5, Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_7, Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_107, 1, &(Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_1));
				GlobalFunc_4968(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_6, -1, Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/].f_108, 0, &(Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_2));
				if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
				{
					Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_1 = -1;
				}
				if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
				{
					Global_2097152[GlobalFunc_177() /*8053*/].f_4358[iVar1 /*43*/].f_2 = -1;
				}
			}
		}
		Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_652 = NETWORK::GET_CLOUD_TIME_AS_INT();
		GlobalFunc_7918(iParam1, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/]), 0, iParam7, 0, 0);
	}
}







void func_676(int iParam0, var uParam1, bool bParam2)//Position - 0x5582D
{
	int iVar0;
	
	GlobalFunc_5034(uParam1);
	if (bParam2)
	{
		uParam1->f_72 = 0;
		uParam1->f_74 = 0;
		StringCopy(&(uParam1->f_75), "", 64);
		StringCopy(&(uParam1->f_91), "", 64);
		uParam1->f_109 = 0;
		uParam1->f_107 = -1;
		uParam1->f_108 = -1;
		uParam1->f_110 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (func_689(iParam0, 0))
	{
		MISC::SET_BIT(&(uParam1->f_72), 3);
	}
	func_677(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_72), 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(uParam1->f_72, 8))
	{
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
		}
	}
	else if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
	{
		MISC::SET_BIT(&(uParam1->f_72), 8);
		MISC::SET_BIT(&(uParam1->f_72), 9);
	}
}

void func_677(int iParam0, var uParam1)//Position - 0x55900
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam1->f_53, 11))
	{
		MISC::SET_BIT(&(uParam1->f_70), 0);
	}
	if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
	{
		MISC::SET_BIT(&(uParam1->f_70), 0);
	}
	if (GlobalFunc_317(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_70), 0);
	}
	func_686(iParam0, uParam1);
	if (uParam1->f_46 == 0)
	{
		uParam1->f_46 = 1;
	}
	uParam1->f_54 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
	uParam1->f_55 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
	iVar0 = func_680(iParam0, &(uParam1->f_69), &(uParam1->f_71));
	MISC::CLEAR_BIT(&(uParam1->f_70), 3);
	if (!iVar0 == GlobalFunc_314())
	{
		NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_56), 13);
		MISC::SET_BIT(&(uParam1->f_70), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam1->f_70), 1);
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		MISC::SET_BIT(&(uParam1->f_70), 2);
		if (uParam1->f_69 == 1)
		{
			if (GlobalFunc_313(iParam0))
			{
				MISC::SET_BIT(&(uParam1->f_70), 3);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam1->f_70), 2);
	}
}



int func_680(int iParam0, var uParam1, var uParam2)//Position - 0x55A0B
{
	var uVar0;
	
	if (func_685(uParam0))
	{
		*uParam1 = 1;
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(uParam0, "PV_Slot"))
			{
				*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
			}
		}
		return func_684(iParam0);
	}
	else if (func_683(iParam0))
	{
		*uParam1 = 2;
		return func_681(iParam0);
	}
	else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (PED::IS_PED_A_PLAYER(uVar0))
		{
			*uParam1 = 3;
			return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0);
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_681(int iParam0)//Position - 0x55AA0
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "Veh_Modded_By_Player");
	return GlobalFunc_5015(iVar0);
}


int func_683(int iParam0)//Position - 0x55B11
{
	if (Global_68245)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0, "Veh_Modded_By_Player"))
		{
			return 1;
		}
	}
	return 0;
}

int func_684(int iParam0)//Position - 0x55B33
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "Player_Vehicle");
	return GlobalFunc_5015(iVar0);
}

int func_685(int iParam0)//Position - 0x55B4E
{
	if (Global_68245)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

void func_686(int iParam0, var uParam1)//Position - 0x55B70
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		GlobalFunc_14(uParam1);
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
		GlobalFunc_102(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), GlobalFunc_101(iVar0 + 1));
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



int func_689(int iParam0, int iParam1)//Position - 0x55F02
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}









int func_698(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x564E9
{
	struct<3> Var0;
	struct<72> Var3;
	int iVar75;
	
	STREAMING::REQUEST_MODEL(uParam1->f_42);
	if (!STREAMING::HAS_MODEL_LOADED(uParam1->f_42))
	{
		return 0;
	}
	Var0 = { GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()) };
	*uParam2 = VEHICLE::CREATE_VEHICLE(uParam1->f_42, Var0.x, Var0.f_1, (Var0.f_2 + 200f), 0f, 0, 0);
	Var3.f_9 = 25;
	Var3.f_35 = 2;
	Var3.f_54 = -1;
	Var3.f_71 = -1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_686(*uParam2, &Var3);
	}
	else
	{
		func_677(*uParam2, &Var3);
	}
	iVar75 = 0;
	while (iVar75 < 12)
	{
		if (MISC::IS_BIT_SET(Var3.f_53, GlobalFunc_101(iVar75 + 1)))
		{
			MISC::SET_BIT(&(uParam1->f_53), GlobalFunc_101(iVar75 + 1));
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), GlobalFunc_101(iVar75 + 1));
		}
		iVar75++;
	}
	uParam1->f_53 = 0;
	GlobalFunc_5597(iParam0, &(uParam1->f_53));
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GlobalFunc_7028(*uParam2, uParam1, 0, 1);
	}
	else
	{
		func_699(*uParam2, uParam1, 1, 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_218())
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam2, 1);
		ENTITY::SET_ENTITY_VISIBLE(*uParam2, 0);
		ENTITY::SET_ENTITY_COLLISION(*uParam2, 0, 0);
	}
	if (iParam0 == 164)
	{
		if (Global_67135 == 1)
		{
			*iParam3 = 0;
		}
		if (Global_67135 == 2)
		{
			*iParam3 = 1;
		}
	}
	switch (uParam1->f_42)
	{
		case joaat("banshee"):
			if (iParam0 == 118)
			{
				*iParam3 = 1;
			}
			break;
		
		case joaat("voltic"):
			if (iParam0 == 120)
			{
				*iParam3 = 1;
			}
			break;
		
		case joaat("stinger"):
			if (iParam0 == 119)
			{
				*iParam3 = 1;
			}
			break;
		
		case joaat("coquette"):
			if (iParam0 == 117)
			{
				*iParam3 = 1;
			}
			break;
		
		case joaat("coquette2"):
			if (iParam0 == 166)
			{
				*iParam3 = 1;
			}
			break;
		
		case joaat("elegy2"):
			if (iParam0 == 95)
			{
				*iParam3 = 1;
			}
			break;
	}
	return 1;
}

void func_699(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x566B1
{
	char* sVar0;
	
	if (uParam1->f_46 == 0)
	{
		uParam1->f_46 = 1;
	}
	GlobalFunc_7028(uParam0, uParam1, bParam2, bParam3);
	if (!uParam1->f_54 == -1)
	{
		if (uParam1->f_9[14] == -1)
		{
			AUDIO::OVERRIDE_VEH_HORN(uParam0, 1, uParam1->f_54);
		}
	}
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(uParam0, uParam1->f_55);
	if (MISC::IS_BIT_SET(uParam1->f_70, 0))
	{
		func_701(uParam0, &(uParam1->f_56));
	}
	switch (uParam1->f_69)
	{
		case 0:
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(uParam1->f_70, 1) && MISC::IS_BIT_SET(uParam1->f_70, 2))
			{
				if (MISC::IS_BIT_SET(uParam1->f_70, 3))
				{
				}
			}
			else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
			{
				DECORATOR::DECOR_SET_INT(uParam0, "Player_Vehicle", -1);
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(uParam1->f_70, 1) && MISC::IS_BIT_SET(uParam1->f_70, 2))
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
				{
					DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				}
			}
			else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
			{
				if (GlobalFunc_319(uParam1->f_56) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_56)))
				{
					sVar0 = NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&(uParam1->f_56));
					DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", MISC::GET_HASH_KEY(sVar0));
				}
				else
				{
					DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", -1);
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}


int func_701(int iParam0, var uParam1)//Position - 0x56836
{
	int iVar0;
	var uVar1;
	
	if (!GlobalFunc_5017(uParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			uVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_702(iParam0, PLAYER::GET_PLAYER_PED(uVar1)))
			{
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
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	return 0;
}

bool func_702(int iParam0, var uParam1)//Position - 0x568AB
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	float fVar11;
	int iVar12;
	
	if (Global_1312467.f_18 != 0)
	{
		fVar11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(uParam0);
		if (fVar11 < 0f)
		{
			fVar11 = 0f;
		}
	}
	func_703(uParam0, &uVar0, &Var1, &Var4, &Var7, &uVar10);
	Var1.f_2 = (Var1.f_2 - fVar11);
	iVar12 = 200;
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("windsor"))
	{
		iVar12 = 255;
	}
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(iParam0, uParam1, uVar0, Var1, Var4, Var7, uVar10, 0, iVar12);
}

int func_703(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x5691C
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { 0f, 0.053f, 1.23f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.02f, 1f };
			*uParam3 = { 0f, -0.108f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
	}
	return 1;
}








void func_711()//Position - 0x58DC0
{
	if (iLocal_2517)
	{
		iLocal_2517 = 0;
		iLocal_1526 = 1;
	}
}

void func_712()//Position - 0x58DD6
{
	int iVar0;
	int iVar1;
	
	if (iLocal_1547 == 1)
	{
		if (!MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_1548, 255, 255, 255, 0, 0);
		}
		if (PAD::IS_CONTROL_PRESSED(2, 179))
		{
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Local_1534);
		}
	}
	if (HUD::GET_CURRENT_WEBPAGE_ID() == 7)
	{
		iLocal_1526 = 1;
	}
	if (iLocal_1328)
	{
		func_731();
	}
	if (iLocal_1329)
	{
		func_721();
	}
	if (iLocal_1328 == 0 && iLocal_1329 == 0)
	{
		if (iLocal_2517)
		{
			iLocal_2517 = 0;
			if (Global_67075 == 7)
			{
				iLocal_1328 = 1;
			}
			if (Global_67075 == 6)
			{
				iLocal_1329 = 1;
			}
			if (Global_67075 == 5)
			{
				iLocal_1547 = 0;
				StringCopy(&(Local_1331[0 /*16*/]), "", 64);
				StringCopy(&(Local_1331[1 /*16*/]), "", 64);
				iLocal_1526 = 1;
			}
			if (Global_67075 == 8)
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					Local_1011.f_56[iVar0 /*16*/] = { Local_1331[iVar0 /*16*/] };
					iVar0++;
				}
				Local_1011.f_23[0 /*16*/] = { Local_1492[0 /*16*/] };
				Local_1011.f_23[1 /*16*/] = { Local_1492[1 /*16*/] };
				SOCIALCLUB::_0x116FB94DC4B79F17(&Local_1011);
				iLocal_1324 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GO_TO_WEBPAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE("WWW_EYEFIND_INFO_S_EMAILSTATUS");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_CSUC");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				StringCopy(&(Local_1331[0 /*16*/]), "", 64);
				StringCopy(&(Local_1331[1 /*16*/]), "", 64);
				iLocal_1526 = 6;
			}
			if (Global_67075 > 9)
			{
				SOCIALCLUB::SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST();
				iLocal_1547 = 0;
				Local_1549.f_952 = (Global_67075 - 10);
				if (Local_1549.f_952 < Local_1549.f_33)
				{
					Local_1549.f_953 = { GlobalFunc_318(Local_1549[Local_1549.f_952]) };
					StringCopy(&cLocal_2524, func_718(&(Local_1549.f_953)), 64);
				}
				else
				{
					Local_1549.f_953 = { Local_1549.f_34[func_717(Local_1549.f_952) /*13*/] };
					StringCopy(&cLocal_2524, func_718(&(Local_1549.f_953)), 64);
				}
				iVar1 = 1;
				if (!GlobalFunc_319(Local_1549.f_953))
				{
					iVar1 = 0;
				}
				if (((NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&(Local_1549.f_953)) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(&(Local_1549.f_953))) || NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(&(Local_1549.f_953))) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(&(Local_1549.f_953)))
				{
					iVar1 = 0;
				}
				if (iVar1 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GO_TO_WEBPAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE("WWW_EYEFIND_INFO_S_EMAILSTATUS");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
					if (MISC::ARE_STRINGS_EQUAL(&cLocal_2524, ""))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_ERR");
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_CBLK");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_1526 = 6;
				}
				if (iVar1 == 1)
				{
					SOCIALCLUB::SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(&(Local_1549.f_953));
					Local_1534 = { Local_1549.f_953 };
					if (!MISC::IS_PC_VERSION())
					{
						iLocal_1547 = 1;
						func_714();
					}
					func_713();
				}
			}
		}
	}
}

void func_713()//Position - 0x590F0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_714()//Position - 0x59145
{
	func_716(iLocal_1548, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_716(iLocal_1548, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (MISC::IS_ORBIS_VERSION())
	{
		func_715(iLocal_1548, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 179, 1), "CELL_EMAIL_PROF");
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		func_715(iLocal_1548, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 179, 1), "CELL_EMAIL_CARO");
	}
	func_716(iLocal_1548, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_715(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)//Position - 0x591F0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam3))
	{
		GlobalFunc_257(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		GlobalFunc_726(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_716(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x5922F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_717(int iParam0)//Position - 0x59292
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_1549.f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

var func_718(var uParam0)//Position - 0x592B1
{
	int iVar0;
	var uVar1;
	struct<13> Var2[1];
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	
	iVar0 = 0;
	if (MISC::IS_DURANGO_VERSION())
	{
		StringCopy(&(Local_2542[0 /*16*/]), "Durango_Empty", 64);
		iVar0 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_15("ARROW");
		Var2[0 /*13*/] = { *uParam0 };
		iVar16 = -99;
		iVar17 = -99;
		iVar18 = 0;
		iVar16 = NETWORK::_0xD66C9E72B3CC4982(&Var2, 1);
		if (iVar16 > -1)
		{
			iVar18 = 1;
		}
		else
		{
			iVar0 = -1;
		}
		SYSTEM::SETTIMERA(0);
		while (iVar0 == 1 && SYSTEM::TIMERA() < 7000)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
			SYSTEM::WAIT(0);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
			if (iVar18 == 1)
			{
				iVar17 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(iVar16, &Local_2542, 1);
				if (iVar17 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uVar1 = GlobalFunc_217(&(Local_2542[0 /*16*/]));
					return uVar1;
				}
				else if (iVar17 == -1)
				{
					iVar0 = -1;
				}
			}
		}
		if (SYSTEM::TIMERA() > 6999)
		{
		}
	}
	if ((MISC::IS_XBOX360_VERSION() || MISC::IS_PC_VERSION()) || iVar0 == -1)
	{
		uVar19 = HUD::_GET_LABEL_TEXT("CELL_1091");
		iLocal_2540 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_15("ARROW");
		iVar20 = 0;
		if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam0))
		{
			iVar20 = 1;
		}
		else
		{
			iLocal_2540 = 0;
		}
		SYSTEM::SETTIMERA(0);
		while (iLocal_2540 == 1 && SYSTEM::TIMERA() < 7000)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
			SYSTEM::WAIT(0);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
			if (iVar20 == 1)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
				{
					iVar20 = 2;
					uVar19 = NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam0);
					iLocal_2540 = 0;
				}
				else
				{
					iLocal_2541 = 1;
					iLocal_2540 = 0;
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (iLocal_2540 == 1 && SYSTEM::TIMERA() > 6999)
		{
			iLocal_2541 = 1;
			iLocal_2540 = 0;
		}
		iLocal_2540 = 0;
		return uVar19;
	}
	return NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam0);
}



void func_721()//Position - 0x594FF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (GlobalFunc_7910(&Local_1325, &(Local_1325.f_1), &(Local_1325.f_2), 0, 0, &(Local_1492[0 /*16*/]), 0, 0, 1, 0, "", 1, 0, 0, 0, 0))
	{
		Local_1325.x = 0;
		Local_1325.f_2 = 0;
		Local_1325.f_1 = 0;
		iLocal_1329 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
		{
			StringCopy(&(Local_1492[0 /*16*/]), "", 64);
			StringCopy(&(Local_1492[1 /*16*/]), "", 64);
			iLocal_1330 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
			iVar0 = 0;
			iVar1 = 0;
			bVar2 = false;
			while (!bVar2)
			{
				if (iVar0 >= iLocal_1330)
				{
					bVar2 = true;
				}
				else if (iVar1 >= 1)
				{
					bVar2 = true;
				}
				else
				{
					StringCopy(&(Local_1492[iVar1 /*16*/]), HUD::_GET_TEXT_SUBSTRING_SAFE(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iVar0, iLocal_1330, 63), 64);
					iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&(Local_1492[iVar1 /*16*/])));
					iVar1++;
				}
			}
			func_722();
		}
	}
	else if (Local_1325.x == 2)
	{
		Local_1325.x = 0;
		Local_1325.f_2 = 0;
		Local_1325.f_1 = 0;
		iLocal_1329 = 0;
	}
}

void func_722()//Position - 0x595E9
{
	int iVar0;
	
	if (iLocal_2520 == 1)
	{
		SOCIALCLUB::SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST();
		iLocal_1547 = 0;
		iLocal_2520 = 0;
		Local_1549.f_953 = { Local_698.f_10 };
		StringCopy(&cLocal_2524, func_718(&(Local_698.f_10)), 64);
		Local_1492[0 /*16*/] = { Local_698.f_23[0 /*16*/] };
		Local_1492[1 /*16*/] = { Local_698.f_23[1 /*16*/] };
		iVar0 = 1;
		if (!GlobalFunc_319(Local_698.f_10))
		{
			iVar0 = 0;
		}
		if (((NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&(Local_698.f_10)) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(&(Local_698.f_10))) || NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(&(Local_698.f_10))) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(&(Local_698.f_10)))
		{
			iVar0 = 0;
		}
		if (iVar0 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GO_TO_WEBPAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE("WWW_EYEFIND_INFO_S_EMAILSTATUS");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			if (MISC::ARE_STRINGS_EQUAL(&cLocal_2524, ""))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_ERR");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_CBLK");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_1526 = 6;
		}
		if (iVar0 == 1)
		{
			SOCIALCLUB::SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(&(Local_698.f_10));
			Local_1534 = { Local_698.f_10 };
			if (!MISC::IS_PC_VERSION())
			{
				iLocal_1547 = 1;
				func_714();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_23[0 /*16*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_23[1 /*16*/]));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1492[0 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1492[1 /*16*/]));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iLocal_1324 == 0)
		{
			func_723();
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[0 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[1 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[2 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[3 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[4 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[5 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[6 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[7 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[8 /*16*/]));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1331[9 /*16*/]));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_723()//Position - 0x598C0
{
	StringCopy(&(Local_1331[0 /*16*/]), "", 64);
	StringCopy(&(Local_1331[1 /*16*/]), "", 64);
	StringCopy(&(Local_1331[2 /*16*/]), "", 64);
	StringCopy(&(Local_1331[3 /*16*/]), "", 64);
	StringCopy(&(Local_1331[4 /*16*/]), "", 64);
	StringCopy(&(Local_1331[5 /*16*/]), "", 64);
	StringCopy(&(Local_1331[6 /*16*/]), "", 64);
	StringCopy(&(Local_1331[7 /*16*/]), "", 64);
	StringCopy(&(Local_1331[8 /*16*/]), "", 64);
	StringCopy(&(Local_1331[9 /*16*/]), "", 64);
}








void func_731()//Position - 0x5A535
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (GlobalFunc_7910(&Local_1325, &(Local_1325.f_1), &(Local_1325.f_2), 0, 0, &(Local_1331[0 /*16*/]), 0, 0, 0, 0, &(Local_1331[1 /*16*/]), 1, 0, 0, 0, 0))
	{
		Local_1325.x = 0;
		Local_1325.f_2 = 0;
		Local_1325.f_1 = 0;
		iLocal_1328 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
		{
			StringCopy(&(Local_1331[0 /*16*/]), "", 64);
			StringCopy(&(Local_1331[1 /*16*/]), "", 64);
			StringCopy(&(Local_1331[2 /*16*/]), "", 64);
			StringCopy(&(Local_1331[3 /*16*/]), "", 64);
			StringCopy(&(Local_1331[4 /*16*/]), "", 64);
			StringCopy(&(Local_1331[5 /*16*/]), "", 64);
			StringCopy(&(Local_1331[6 /*16*/]), "", 64);
			StringCopy(&(Local_1331[7 /*16*/]), "", 64);
			StringCopy(&(Local_1331[8 /*16*/]), "", 64);
			StringCopy(&(Local_1331[9 /*16*/]), "", 64);
			iLocal_1330 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
			iVar0 = 0;
			iVar1 = 0;
			bVar2 = false;
			while (!bVar2)
			{
				if (iVar0 >= iLocal_1330)
				{
					bVar2 = true;
				}
				else if (iVar1 >= 10)
				{
					bVar2 = true;
				}
				else
				{
					StringCopy(&(Local_1331[iVar1 /*16*/]), HUD::_GET_TEXT_SUBSTRING_SAFE(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iVar0, iLocal_1330, 63), 64);
					iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&(Local_1331[iVar1 /*16*/])));
					iVar1++;
				}
			}
			iLocal_1324 = 1;
			func_722();
		}
	}
	else if (Local_1325.x == 2)
	{
		Local_1325.x = 0;
		Local_1325.f_2 = 0;
		Local_1325.f_1 = 0;
		iLocal_1328 = 0;
	}
}

void func_732()//Position - 0x5A67A
{
	var uVar0[1];
	
	if (HUD::GET_CURRENT_WEBSITE_ID() == 2 && HUD::GET_CURRENT_WEBPAGE_ID() == 7)
	{
		if (iLocal_1328 == 0 && iLocal_1329 == 0)
		{
			if (iLocal_2517)
			{
				iLocal_2517 = 0;
				if (Global_67075 > 9)
				{
					iLocal_2519 = (Global_67075 - 10);
					SOCIALCLUB::_0x4737980E8A283806(iLocal_2519, &Local_698);
				}
				if (Global_67075 == 8)
				{
					iLocal_2520 = 1;
					iLocal_1324 = 0;
					SOCIALCLUB::_0x4737980E8A283806(iLocal_2519, &Local_698);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "GO_TO_WEBPAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE("WWW_EYEFIND_INFO_S_COMPOSE");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (Global_67075 == 9)
				{
					SOCIALCLUB::_0x4737980E8A283806(iLocal_2519, &Local_698);
					uVar0[0] = Local_698;
					if (iLocal_2523 > 0)
					{
						iLocal_2523 = (iLocal_2523 - 1);
						if (iLocal_2523 == 0)
						{
							if (iLocal_2518 > 0)
							{
								iLocal_2518 = (iLocal_2518 - 1);
							}
						}
					}
					iLocal_2521 = Local_698.f_1;
					SOCIALCLUB::_0x44ACA259D67651DB(&uVar0, 1);
					iLocal_1526 = 1;
				}
				if (Global_67075 == 7)
				{
					if (iLocal_2518 > 0)
					{
						iLocal_2518 = (iLocal_2518 - 1);
						iLocal_2522 = 0;
						GlobalFunc_7017();
						iLocal_1526 = 1;
					}
					else
					{
						GlobalFunc_2011();
					}
				}
				if (Global_67075 == 6)
				{
					if (iLocal_2518 > -1 && iLocal_2522 == 0)
					{
						iLocal_2518++;
						GlobalFunc_7017();
						iLocal_1526 = 1;
					}
					else
					{
						GlobalFunc_2011();
						if (iLocal_2522 == 1)
						{
						}
					}
				}
			}
		}
	}
	if (iLocal_1525 == 1)
	{
		Local_698.f_56[0 /*16*/] = { Local_1331[0 /*16*/] };
		if (Local_698 == Local_698)
		{
		}
		StringCopy(&(Local_1011.f_23[0 /*16*/]), "Test Subject 1", 64);
		StringCopy(&(Local_1011.f_23[1 /*16*/]), "Test Subject 2", 64);
		if (Local_1011 == Local_1011)
		{
		}
		if (iLocal_2518 == iLocal_2518)
		{
		}
		if (iLocal_2519 == iLocal_2519)
		{
		}
	}
	if (iLocal_1328)
	{
		func_731();
	}
}





void func_737(int iParam0, int iParam1)//Position - 0x5A8D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = iParam0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_2523 = 0;
	while (iVar0 < iParam1 + 1)
	{
		SOCIALCLUB::_0x4737980E8A283806(iVar0, &Local_698);
		iVar3 = 0;
		NETWORK::CONVERT_POSIX_TIME(Local_698.f_1, &Local_1528);
		while (iVar3 < 10)
		{
			if (iVar3 < 2)
			{
			}
			iVar3++;
		}
		iVar4 = 0;
		if (Local_698.f_1 == iLocal_2521)
		{
			iVar4 = 1;
		}
		if (Local_698.f_1 != 0 && iVar1 != Local_698.f_1)
		{
			if (iVar4 == 0)
			{
				if (iVar0 < iParam1)
				{
					func_738(iVar2);
					iVar2++;
					iLocal_2523++;
				}
			}
		}
		else
		{
			iLocal_2522 = 1;
		}
		iVar0++;
		iVar1 = Local_698.f_1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (HUD::GET_CURRENT_WEBSITE_ID() == 2 && HUD::GET_CURRENT_WEBPAGE_ID() == 7)
	{
		if (iLocal_2518 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (iLocal_2522 == 1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "DISABLE_BUTTON");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	iLocal_1526 = 4;
}

void func_738(int iParam0)//Position - 0x5AA37
{
	StringCopy(&cLocal_2524, func_718(&(Local_698.f_10)), 64);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0 + 10);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cLocal_2524);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_DATE");
	HUD::ADD_TEXT_COMPONENT_INTEGER(Local_1528.f_2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_739(Local_1528.f_1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_23[0 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_23[1 /*16*/]));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[0 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[1 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[2 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[3 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[4 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[5 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[6 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[7 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[8 /*16*/]));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_698.f_56[9 /*16*/]));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_739(int iParam0)//Position - 0x5AB47
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "CELL_JAN";
			break;
		
		case 2:
			sVar0 = "CELL_FEB";
			break;
		
		case 3:
			sVar0 = "CELL_MAR";
			break;
		
		case 4:
			sVar0 = "CELL_APR";
			break;
		
		case 5:
			sVar0 = "CELL_MAY";
			break;
		
		case 6:
			sVar0 = "CELL_JUN";
			break;
		
		case 7:
			sVar0 = "CELL_JUL";
			break;
		
		case 8:
			sVar0 = "CELL_AUG";
			break;
		
		case 9:
			sVar0 = "CELL_SEP";
			break;
		
		case 10:
			sVar0 = "CELL_OCT";
			break;
		
		case 11:
			sVar0 = "CELL_NOV";
			break;
		
		case 12:
			sVar0 = "CELL_DEC";
			break;
		
		default:
			sVar0 = "CELL_JAN";
			break;
	}
	return sVar0;
}

void func_740()//Position - 0x5AC22
{
	iLocal_1527 = SOCIALCLUB::_0x16DA8172459434AA();
	switch (iLocal_1527)
	{
		case 3:
			iLocal_1526 = 3;
			break;
		
		case 0:
			iLocal_1526 = 3;
			break;
		
		case 1:
			break;
		
		case 4:
			iLocal_1526 = 0;
			break;
		
		case 2:
			iLocal_1526 = 0;
			break;
	}
}

void func_741(int iParam0, int iParam1)//Position - 0x5AC76
{
	iLocal_2522 = 0;
	SOCIALCLUB::_SC_INBOX_GET_EMAILS(iParam0, iParam1);
	iLocal_1526 = 2;
}

void func_742()//Position - 0x5AC8E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
		{
			if (HUD::GET_CURRENT_WEBPAGE_ID() == 8)
			{
				iLocal_1324 = 0;
				func_743();
				iLocal_1548 = unk_0x67D02A194A2FC2BD("instructional_buttons");
				while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1548))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
					SYSTEM::WAIT(0);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_1526 = 5;
				}
			}
		}
	}
}

void func_743()//Position - 0x5ACEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_2515 = 0;
	iLocal_2516 = iLocal_2515;
	func_747();
	iVar16 = 0;
	if (Global_68245)
	{
		if (GlobalFunc_7679() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (GlobalFunc_252(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				Local_1549[iVar1] = iVar0;
				func_746(PLAYER::GET_PLAYER_NAME(iVar0));
				iVar1++;
			}
		}
		iVar2++;
	}
	Local_1549.f_33 = iVar1;
	iVar1 = 0;
	if (GlobalFunc_5255(0))
	{
		iVar2 = 0;
		while (iVar2 <= (NETWORK::NETWORK_GET_FRIEND_COUNT() - 1))
		{
			Var3 = { GlobalFunc_2024(iVar2) };
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
			{
				if (iVar16 == 0)
				{
					if (iVar1 < 70)
					{
						Local_1549.f_34[iVar1 /*13*/] = { Var3 };
						if (MISC::IS_DURANGO_VERSION())
						{
							StringCopy(&cLocal_2524, NETWORK::_NETWORK_GET_FRIEND_NAME_FROM_INDEX(iVar2), 64);
						}
						else
						{
							StringCopy(&cLocal_2524, NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
						}
						func_746(&cLocal_2524);
						iVar1++;
					}
				}
			}
			iVar2++;
		}
	}
	Local_1549.f_951 = (Local_1549.f_33 + iVar1);
	if (iLocal_2520 == 1)
	{
		func_722();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "UPDATE_TEXT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}



void func_746(char[4] cParam0)//Position - 0x5AEF8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2516 + 10);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(cParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_2516++;
	iLocal_2515++;
}

void func_747()//Position - 0x5AF3B
{
	int iVar0;
	struct<13> Var1;
	struct<13> Var30;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1549[iVar0] = GlobalFunc_314();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		Local_1549.f_34[iVar0 /*13*/] = { Var30 };
		iVar0++;
	}
	Local_1549.f_952 = 0;
	Local_1549.f_33 = 0;
	Local_1549.f_951 = 0;
	Local_1549.f_953 = { Var1 };
	StringCopy(&(Local_1549.f_945), "", 24);
}

void func_748()//Position - 0x5AFB7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
		{
			if (HUD::GET_CURRENT_WEBPAGE_ID() == 7)
			{
				iLocal_1548 = unk_0x67D02A194A2FC2BD("instructional_buttons");
				while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1548))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
					SYSTEM::WAIT(0);
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_1526 = 1;
				}
			}
		}
	}
}

void func_749()//Position - 0x5B019
{
	Global_54739 = 0;
	if (Global_67092 == 1)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_572(&Global_67093))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		Global_67092 = 0;
	}
	if (Global_67136 != -1)
	{
		GlobalFunc_4935();
		Global_67136 = -1;
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
	{
		HUD::CLEAR_ADDITIONAL_TEXT(4, 0);
	}
	if (iLocal_692)
	{
		GlobalFunc_5069(GlobalFunc_5422());
		iLocal_692 = 0;
		iLocal_693 = 0;
		HUD::_0x170F541E1CADD1DE(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	}
	bLocal_486 = true;
	Global_67067 = 0;
	Global_67109 = 0;
	Global_67110 = 0;
	GlobalFunc_1589();
	func_776();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1548);
	HUD::_FORCE_CLOSE_TEXT_INPUT_BOX();
	if (GlobalFunc_702(0, 0, iLocal_494))
	{
		iLocal_494 = 0;
	}
}











void func_760(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x5B361
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_761()//Position - 0x5B3B1
{
	if (Global_68245)
	{
		if (GlobalFunc_7680())
		{
			func_749();
			return 0;
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			func_749();
			return 0;
		}
		if (GlobalFunc_1277())
		{
			return 0;
		}
		if (Global_1573542)
		{
			func_749();
			return 0;
		}
	}
	if (Global_68505)
	{
		func_749();
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		func_749();
		return 1;
	}
	if (Global_87287)
	{
		func_749();
		return 0;
	}
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		func_749();
		return 0;
	}
	if (ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) != Global_67114)
	{
		if (ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) < Global_67114)
		{
			func_749();
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		if (PED::IS_PED_RAGDOLL(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			func_749();
			return 1;
		}
	}
	else
	{
		func_749();
		return 1;
	}
	return 0;
}










void func_771(int iParam0)//Position - 0x5B6E1
{
	if (iLocal_2559 == iParam0)
	{
		return;
	}
	iLocal_2559 = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_495, "SHOW_CURSOR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_773(bool bParam0, int iParam1, bool bParam2)//Position - 0x5B741
{
	int iVar0;
	
	if (iLocal_495 == 0)
	{
		iLocal_495 = unk_0x67D02A194A2FC2BD("web_browser");
	}
	if (iLocal_496 == 0 || !bParam0)
	{
		iLocal_496 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_496))
	{
		if (bParam2)
		{
			func_10();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_495))
			{
			}
			else
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_495, 255, 255, 255, 0, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	if (Global_67110 || iParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		iVar0++;
		GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1));
		GlobalFunc_726("CELL_270");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		iVar0++;
		GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
		GlobalFunc_726("CELL_271");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else if (iLocal_489 && iLocal_501 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		iVar0++;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			GlobalFunc_257(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 28, 1));
		}
		else
		{
			GlobalFunc_257(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 6, 1));
		}
		GlobalFunc_726("IB_NAVIGATE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		iVar0++;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 237, 1));
		}
		else
		{
			GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1));
		}
		GlobalFunc_726("APINTRHLSEL");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		iVar0++;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 238, 1));
		}
		else
		{
			GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
		}
		GlobalFunc_726("APINTRHLDEL");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_496, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_774()//Position - 0x5B92C
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 > (Global_51924 + 120000) || Global_51924 == -1)
	{
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			Global_54736 = 1;
			return;
		}
		if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			Global_54736 = 1;
			return;
		}
		if (!Global_51923)
		{
			if (STATS::_0x5A556B229A169402())
			{
				Global_51924 = iVar0;
				Global_51923 = 1;
			}
		}
	}
}


void func_776()//Position - 0x5B994
{
	if (Global_67059)
	{
	}
	Global_67059 = 0;
}


