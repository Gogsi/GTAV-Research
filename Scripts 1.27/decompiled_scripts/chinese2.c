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
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char* sLocal_50 = NULL;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_88 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_253[8] = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	bool bLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	bool bLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	struct<3> Local_273 = { 0, 0, 0 } ;
	struct<3> Local_276 = { 0, 0, 0 } ;
	int iLocal_279 = 0;
	struct<5> Local_280[31];
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	struct<5> Local_443[61];
	float fLocal_749 = 0f;
	int iLocal_750 = 0;
	struct<3> Local_751 = { 0, 0, 0 } ;
	struct<33> Local_754[26];
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	struct<24> Local_1618[26];
	struct<3> Local_2243 = { 0, 0, 0 } ;
	struct<3> Local_2246 = { 0, 0, 0 } ;
	struct<3> Local_2249 = { 0, 0, 0 } ;
	struct<3> Local_2252 = { 0, 0, 0 } ;
	struct<3> Local_2255 = { 0, 0, 0 } ;
	struct<3> Local_2258 = { 0, 0, 0 } ;
	struct<3> Local_2261 = { 0, 0, 0 } ;
	struct<3> Local_2264 = { 0, 0, 0 } ;
	struct<3> Local_2267 = { 0, 0, 0 } ;
	struct<3> Local_2270 = { 0, 0, 0 } ;
	struct<3> Local_2273[21];
	char[] cLocal_2337[8] = 0;
	bool bLocal_2338 = 0;
	int iLocal_2339 = 0;
	bool bLocal_2340 = 0;
	int iLocal_2341 = 0;
	struct<6> Local_2342[6];
	struct<18> Local_2379[4];
	float fLocal_2452 = 0f;
	int iLocal_2453 = 0;
	int iLocal_2454[4] = { 0, 0, 0, 0 };
	int iLocal_2459[4] = { 0, 0, 0, 0 };
	struct<3> Local_2464[13];
	int iLocal_2504 = 0;
	int iLocal_2505 = 0;
	int iLocal_2506 = 0;
	int iLocal_2507 = 0;
	int iLocal_2508 = 0;
	int iLocal_2509 = 0;
	int iLocal_2510 = 0;
	int iLocal_2511 = 0;
	char* sLocal_2512 = NULL;
	bool bLocal_2513 = 0;
	struct<6> Local_2514[20];
	int iLocal_2635 = 0;
	var uLocal_2636 = 0;
	int iLocal_2637 = 0;
	float fLocal_2638 = 0f;
	int iLocal_2639 = 0;
	int iLocal_2640 = 0;
	int iLocal_2641 = 0;
	int iLocal_2642 = 0;
	int iLocal_2643 = 0;
	int iLocal_2644 = 0;
	int iLocal_2645 = 0;
	bool bLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	var uLocal_2649 = 0;
	int iLocal_2650[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2656[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2667 = 0;
	struct<3> Local_2668 = { 0, 0, 0 } ;
	var uLocal_2671 = 0;
	int iLocal_2672 = 0;
	float fLocal_2673 = 0f;
	var uLocal_2674 = 0;
	int iLocal_2675 = 0;
	var uLocal_2676 = 0;
	int iLocal_2677 = 0;
	int iLocal_2678 = 0;
	int iLocal_2679 = 0;
	int iLocal_2680 = 0;
	int iLocal_2681 = 0;
	struct<7> Local_2682 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_2689 = 1092616192;
	var uLocal_2690 = 1101004800;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 3;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 16;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
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
	var uLocal_2736 = 0;
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
	var uLocal_2766 = 0;
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
	var uLocal_2793 = 0;
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
	var uLocal_2850 = 0;
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
	int iLocal_2872 = 0;
	int iLocal_2873 = 0;
	int iLocal_2874 = 0;
	int iLocal_2875 = 0;
	int iLocal_2876 = 0;
	int iLocal_2877 = 0;
	int iLocal_2878 = 0;
	int iLocal_2879 = 0;
	int iLocal_2880 = 0;
	int iLocal_2881 = 0;
	int iLocal_2882 = 0;
	int iLocal_2883 = 0;
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	int iLocal_2886 = 0;
	int iLocal_2887 = 0;
	struct<3> Local_2888[9];
	struct<10> Local_2916[20];
	bool bLocal_3117 = 0;
	int iLocal_3118 = 0;
	struct<8> Local_3119[27];
	struct<4> Local_3336[5];
	struct<7> Local_3357[17];
	struct<3> Local_3477[4];
	int iLocal_3490 = 0;
	char cLocal_3491[24] = "";
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	struct<3> Local_3497 = { 0, 0, 0 } ;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	int iLocal_3503 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	char* sLocal_3508 = NULL;
	char* sLocal_3509 = NULL;
	int iLocal_3510[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3521 = 16;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
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
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
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
	var uLocal_3665 = 0;
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
	int iLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
	int iLocal_3689 = 0;
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
	iLocal_30 = 3;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	uLocal_48 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_49 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_60 = -1;
	iLocal_61 = -1;
	bLocal_76 = true;
	iLocal_265 = -1;
	iLocal_268 = -1;
	fLocal_271 = 0.5f;
	fLocal_272 = 0f;
	iLocal_437 = 1;
	fLocal_749 = 160f;
	cLocal_2337 = "CHI2AUD";
	iLocal_2675 = -1;
	iLocal_2883 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_404(2);
	}
	fLocal_749 = 160f;
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_129();
			func_127();
			if (iLocal_2510 >= 7)
			{
				func_119();
			}
			func_117();
			func_78();
			func_3();
			func_2();
			func_1();
			RECORDING::_0x208784099002BC30("m_Chinese2", 0);
		}
		iLocal_3686 = 0;
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x11A
{
	if (iLocal_3504)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_3503))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3503);
			iLocal_3504 = 0;
		}
	}
}

int func_2()//Position - 0x13D
{
	if (iLocal_3505)
	{
		if (iLocal_3506)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_3508))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_3508))
				{
					iLocal_3505 = 0;
					iLocal_3506 = 0;
					return 1;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_3508))
		{
			iLocal_3505 = 0;
			return 1;
		}
	}
	else if (iLocal_3507)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_3509))
		{
			iLocal_3507 = 0;
		}
	}
	return 0;
}

void func_3()//Position - 0x19E
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if (Local_2514[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_2514[iVar0 /*6*/])
			{
				case 0:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 0:
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							GlobalFunc_10159(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							GlobalFunc_10159(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							GlobalFunc_10159(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_2505 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_68(iLocal_2505) && GlobalFunc_713(iLocal_2505, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_2505), 3);
							}
							Local_2514[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_2510 >= 3)
					{
						Local_2514[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case -1:
							GlobalFunc_4935();
							GlobalFunc_5744();
							break;
						
						case 0:
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || GlobalFunc_665(39))
							{
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_2514[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_60("PHN2", 1, PLAYER::PLAYER_PED_ID(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								if (func_35("CHI2_ONEILPH", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_2514[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_2510 >= 3)
					{
						Local_2514[iVar0 /*6*/].f_2 = -1;
						Local_2514[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_2514[iVar0 /*6*/].f_2++;
							}
							iLocal_2887 = 0;
							Local_2514[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
							break;
						
						case 1:
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_490())
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (MISC::GET_GAME_TIMER() > Local_2514[iVar0 /*6*/].f_5)
										{
											if (iLocal_2887 < 13)
											{
												if (func_35("DRI1", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_2887++;
													Local_2514[iVar0 /*6*/].f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 10000));
												}
											}
											else
											{
												Local_2514[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (!ENTITY::IS_ENTITY_IN_AIR(uVar1))
						{
							if (GlobalFunc_2572(6f, 2))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_2514[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_2514[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case -20:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								STREAMING::REQUEST_MODEL(joaat("a_m_m_hillbilly_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_pallet_pile_01"));
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_hillbilly_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pallet_pile_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("a_m_m_hillbilly_02"));
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_hillbilly_02")))
							{
								STREAMING::REQUEST_MODEL(joaat("burrito"));
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (STREAMING::HAS_MODEL_LOADED(joaat("burrito")))
							{
								STREAMING::REQUEST_MODEL(joaat("a_m_y_methhead_01"));
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_methhead_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("prop_ld_can_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_fertilizer"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
								STREAMING::REQUEST_MODEL(joaat("dubsta"));
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank5");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@generic");
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (STREAMING::HAS_MODEL_LOADED(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_2514[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								STREAMING::REQUEST_MODEL(joaat("a_m_m_hillbilly_01"));
								STREAMING::REQUEST_MODEL(joaat("a_m_m_hillbilly_02"));
								STREAMING::REQUEST_MODEL(joaat("a_m_y_methhead_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_ld_can_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_fertilizer"));
								STREAMING::REQUEST_MODEL(joaat("burrito"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								if (iLocal_2510 <= 3)
								{
									STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
									STREAMING::REQUEST_MODEL(joaat("dubsta"));
								}
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank5");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_hillbilly_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_hillbilly_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_methhead_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("burrito"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fertilizer"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_can_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank5")) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank1")) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_barrelRoll")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward")) && ((iLocal_2510 <= 3 && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing"))) || iLocal_2510 > 3)) && ((iLocal_2510 <= 3 && STREAMING::HAS_MODEL_LOADED(joaat("dubsta"))) || iLocal_2510 > 3))
							{
								Local_2514[iVar0 /*6*/].f_2 = 4;
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_02"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_methhead_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01"));
								STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
								STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_2677 != 0)
								{
									INTERIOR::UNPIN_INTERIOR(iLocal_2677);
									iLocal_2677 = 0;
								}
								Local_2514[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								Local_2514[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_2510 >= 3 && !func_30(22))
							{
								func_27();
								Local_2514[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_2677 != 0)
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_2677);
							}
							iLocal_2677 = 0;
							break;
						
						case 0:
							iLocal_2677 = INTERIOR::GET_INTERIOR_AT_COORDS(2440.492f, 4969.948f, 52.5247f);
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!INTERIOR::IS_VALID_INTERIOR(iLocal_2677))
							{
								iLocal_2677 = INTERIOR::GET_INTERIOR_AT_COORDS(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2677);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_2514[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 0:
							GlobalFunc_7621(50, 0, 0, 1, 0);
							GlobalFunc_7621(51, 0, 0, 1, 0);
							GlobalFunc_7621(52, 0, 0, 1, 0);
							GlobalFunc_7621(53, 0, 0, 1, 0);
							GlobalFunc_7621(54, 1, 0, 1, 0);
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_2514[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_754[iVar2 /*33*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_754[iVar2 /*33*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar2 /*33*/], 1785177548) == 7)
											{
												STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
												Local_2514[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_754[iVar2 /*33*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar2 /*33*/], 1785177548) == 7)
										{
											STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
											Local_2514[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case -1:
							PED::REMOVE_SCENARIO_BLOCKING_AREAS();
							break;
						
						case 0:
							PED::ADD_SCENARIO_BLOCKING_AREA(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2473.061f, 4981.482f, 24.64584f, 1) < 250f)
								{
									Local_2514[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2473.061f, 4981.482f, 24.64584f, 1) > 250f)
							{
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case -1:
							MISC::ENABLE_DISPATCH_SERVICE(3, 1);
							MISC::ENABLE_DISPATCH_SERVICE(5, 1);
							MISC::ENABLE_DISPATCH_SERVICE(1, 1);
							MISC::ENABLE_DISPATCH_SERVICE(7, 1);
							break;
						
						case 0:
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								MISC::ENABLE_DISPATCH_SERVICE(3, 0);
								MISC::ENABLE_DISPATCH_SERVICE(5, 0);
								MISC::ENABLE_DISPATCH_SERVICE(1, 0);
								MISC::ENABLE_DISPATCH_SERVICE(7, 0);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								MISC::ENABLE_DISPATCH_SERVICE(3, 1);
								MISC::ENABLE_DISPATCH_SERVICE(5, 1);
								MISC::ENABLE_DISPATCH_SERVICE(1, 1);
								MISC::ENABLE_DISPATCH_SERVICE(7, 1);
								Local_2514[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 0:
							GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 149);
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								GlobalFunc_504(iVar3, 152);
								GlobalFunc_503(iVar3, -1);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								GlobalFunc_504(0, 152);
								GlobalFunc_503(0, -1);
								Local_2514[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_2514[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 7000;
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_2514[iVar0 /*6*/].f_5)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2466.385f, 4953.096f, 44.1228f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 221f);
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 1193033728, 1056964608);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
								Local_2514[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						Local_2514[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_2671 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2671))
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 2);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671) == 3)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 4);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_2672 == 1)
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671) == 5)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 6);
									AUDIO::START_AUDIO_SCENE("CHI_2_RAYFIRE");
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
									Local_2514[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_2514[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_2514[iVar0 /*6*/].f_2 != -1)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0) || !OBJECT::DOES_PICKUP_EXIST(uLocal_2674))
						{
							iLocal_2678 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_2678 != 0)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_2676))
								{
									HUD::REMOVE_BLIP(&uLocal_2676);
								}
								uLocal_2676 = func_13(iLocal_2678);
								func_12(1);
								GlobalFunc_571(0, 157);
							}
						}
						else
						{
							Local_2514[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (HUD::DOES_BLIP_EXIST(uLocal_2676))
							{
								HUD::REMOVE_BLIP(&uLocal_2676);
							}
							GlobalFunc_574(157, 0);
							if (iLocal_2648 == 0)
							{
								iLocal_2648 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
							}
							else
							{
								GlobalFunc_565(158, (iLocal_2648 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							GlobalFunc_571(0, 157);
							Local_2514[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, 1, 0) && MISC::GET_GAME_TIMER() > Local_2514[iVar0 /*6*/].f_5)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_2676))
						{
							HUD::REMOVE_BLIP(&uLocal_2676);
						}
						Local_2514[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_2514[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!GlobalFunc_111())
								{
									GlobalFunc_527("FRMSHP", 7500, 1);
									Local_2514[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
									uLocal_2676 = GlobalFunc_5104(2450f, 4954f, 45f, 0);
									Local_2514[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 0))
					{
						iLocal_2884 = func_18(4);
						if (iLocal_2884 != -1)
						{
							MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 1))
					{
						if (!PED::IS_PED_INJURED(Local_754[iLocal_2884 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_754[iLocal_2884 /*33*/].f_20))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iLocal_2884 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && ENTITY::IS_ENTITY_ATTACHED(Local_754[iLocal_2884 /*33*/].f_20))
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 2))
					{
						if (PED::IS_PED_INJURED(Local_754[iLocal_2884 /*33*/]))
						{
							MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 2);
						}
						if (!PED::IS_PED_INJURED(Local_754[iLocal_2884 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iLocal_2884 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 2);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iLocal_2884 /*33*/], -2017877118) == 2 || TASK::GET_SCRIPT_TASK_STATUS(Local_754[iLocal_2884 /*33*/], -2017877118) == 7)
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 2);
							}
							if (PED::IS_PED_IN_COMBAT(Local_754[iLocal_2884 /*33*/], PLAYER::PLAYER_PED_ID()) || Local_1618[iLocal_2884 /*24*/].f_3 > 3)
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_754[iLocal_2884 /*33*/].f_20) && ENTITY::IS_ENTITY_ATTACHED(Local_754[iLocal_2884 /*33*/].f_20))
					{
						ENTITY::DETACH_ENTITY(Local_754[iLocal_2884 /*33*/].f_20, 0, 0);
					}
					if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 4))
					{
						iLocal_2885 = func_18(5);
						if (iLocal_2885 != -1)
						{
							MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 5))
					{
						if (!PED::IS_PED_INJURED(Local_754[iLocal_2885 /*33*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[iLocal_2885 /*33*/].f_20))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_754[iLocal_2885 /*33*/].f_20))
									{
										MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 6))
					{
						if (PED::IS_PED_INJURED(Local_754[iLocal_2885 /*33*/]))
						{
							MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 6);
						}
						if (!PED::IS_PED_INJURED(Local_754[iLocal_2885 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 6);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iLocal_2885 /*33*/], -2017877118) == 2 || TASK::GET_SCRIPT_TASK_STATUS(Local_754[iLocal_2885 /*33*/], -2017877118) == 7)
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 6);
							}
							if (PED::IS_PED_IN_COMBAT(Local_754[iLocal_2885 /*33*/], PLAYER::PLAYER_PED_ID()) || Local_1618[iLocal_2885 /*24*/].f_3 > 3)
							{
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_754[iLocal_2885 /*33*/].f_20) && ENTITY::IS_ENTITY_ATTACHED(Local_754[iLocal_2885 /*33*/].f_20))
					{
						ENTITY::DETACH_ENTITY(Local_754[iLocal_2885 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_2656[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[0], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[1], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[2], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[3], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[4], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[5], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[6], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2656[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[7], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2656[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[8], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2656[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2656[9], 3.955f, 0f, 139.68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_2656)
							{
								ENTITY::SET_ENTITY_DYNAMIC(iLocal_2656[iVar4], 1);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_2656[iVar4], 1);
								iVar4++;
							}
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2679) && !ENTITY::DOES_ENTITY_EXIST(iLocal_2680))
							{
								if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), 0) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), 0))
								{
									iLocal_2679 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), 1, 0, 1);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, 1);
									ENTITY::CREATE_MODEL_HIDE(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), 0);
									iLocal_2680 = OBJECT::CREATE_OBJECT(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(iLocal_2680, -1.436373f, 0.176147f, -36.6601f, 2, 1);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2680, 1);
									func_32(24, 0);
									Local_2514[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								OBJECT::DELETE_OBJECT(&iLocal_2680);
								iLocal_2680 = OBJECT::CREATE_OBJECT(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, 1, 1, 0);
								ENTITY::SET_ENTITY_ROTATION(iLocal_2680, -1.436373f, 0.176147f, -36.6601f, 2, 1);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_2680, 1);
								func_32(24, 0);
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_2656)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2656[iVar4]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2656[iVar4], 0);
								}
								iVar4++;
							}
							Local_2514[iVar0 /*6*/].f_1 = 0;
							Local_2514[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2679, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2679, 1) < 30f)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, 0);
									MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2680))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2680, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2680, 1) < 30f)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2680, 0);
									MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 0) && MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 1)) || iLocal_2510 == 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2680))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2680, 0);
						}
						Local_2514[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_2514[iVar0 /*6*/].f_2)
					{
						case -1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[12 /*33*/]))
							{
								PED::DELETE_PED(&(Local_754[12 /*33*/]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[13 /*33*/]))
							{
								PED::DELETE_PED(&(Local_754[13 /*33*/]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[14 /*33*/]))
							{
								PED::DELETE_PED(&(Local_754[14 /*33*/]));
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_janet"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man1a"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man2"));
							Local_2514[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							STREAMING::REQUEST_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
							Local_2514[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (CUTSCENE::HAS_CUTSCENE_FINISHED() || !CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_754[13 /*33*/]) && !PED::IS_PED_INJURED(Local_754[13 /*33*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_754[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, 1, 0, 0, 1);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_754[14 /*33*/]) && !PED::IS_PED_INJURED(Local_754[14 /*33*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_754[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, 1, 0, 0, 1);
									}
									Local_2514[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1984.89f, 3052.46f, 46.98f, 0.3f, 1) && TASK::DOES_SCENARIO_EXIST_IN_AREA(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_754[13 /*33*/]))
								{
									Local_754[13 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_754[14 /*33*/]))
								{
									Local_754[14 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_754[12 /*33*/]))
								{
									Local_754[12 /*33*/] = PED::CREATE_PED(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 1);
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[14 /*33*/], 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[14 /*33*/], 0);
								MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 0);
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[13 /*33*/], 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[13 /*33*/], 0);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2514[iVar0 /*6*/].f_5))
								{
									Local_2514[iVar0 /*6*/].f_5 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2514[iVar0 /*6*/].f_5, 1);
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_754[12 /*33*/], Local_2514[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[12 /*33*/], 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[12 /*33*/], 0);
								Local_2514[iVar0 /*6*/].f_5 = 0;
								Local_2514[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (CUTSCENE::HAS_CUTSCENE_FINISHED() || !CUTSCENE::IS_CUTSCENE_PLAYING())
							{
							}
							if (!PED::IS_PED_INJURED(Local_754[13 /*33*/]) && !PED::IS_PED_INJURED(Local_754[14 /*33*/]))
							{
								PED::SET_PED_CONFIG_FLAG(Local_754[13 /*33*/], 152, 1);
								PED::SET_PED_CONFIG_FLAG(Local_754[14 /*33*/], 152, 1);
								if (MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 0) && MISC::IS_BIT_SET(Local_2514[iVar0 /*6*/].f_5, 1))
								{
									Local_2514[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[13 /*33*/], 993674639) != 1)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1984.89f, 3052.46f, 46.98f, 0.3f, 1))
										{
											MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 0);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[13 /*33*/], 0);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 0);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[14 /*33*/], 993674639) != 1)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
										{
											MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 1);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[14 /*33*/], 0);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_2514[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2514[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!PED::IS_PED_INJURED(Local_754[12 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_754[12 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(Local_754[12 /*33*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[12 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_754[13 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_754[13 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(Local_754[13 /*33*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[13 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_754[14 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_754[14 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(Local_754[14 /*33*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[14 /*33*/]));
							}
							Local_2514[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2514[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					ENTITY::CREATE_FORCED_OBJECT(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_door03"), 1);
					ENTITY::CREATE_FORCED_OBJECT(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_2514[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_2514[iVar0 /*6*/].f_2 == -1)
			{
				Local_2514[iVar0 /*6*/].f_1 = 0;
				Local_2514[iVar0 /*6*/].f_2 = 0;
				Local_2514[iVar0 /*6*/].f_3 = 0;
				Local_2514[iVar0 /*6*/].f_4 = 0;
				Local_2514[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}





int func_8()//Position - 0x24F9
{
	if (iLocal_268 == 0)
	{
		return 1;
	}
	return 0;
}




void func_12(int iParam0)//Position - 0x269B
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_261 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_443)
			{
				if (HUD::DOES_BLIP_EXIST(Local_443[iVar0 /*5*/].f_3))
				{
					if (HUD::GET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3) < 255)
					{
						HUD::REMOVE_BLIP(&(Local_443[iVar0 /*5*/].f_3));
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_261 = 1;
		}
	}
	else if (iLocal_261)
	{
		iVar0 = 0;
		while (iVar0 < Local_443)
		{
			if (HUD::DOES_BLIP_EXIST(Local_443[iVar0 /*5*/].f_3))
			{
				HUD::SET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_443[iVar0 /*5*/].f_3 = GlobalFunc_5104(Local_443[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_443[iVar0 /*5*/].f_3, 1);
				HUD::SET_BLIP_SCALE(Local_443[iVar0 /*5*/].f_3, 0.4f);
				HUD::SET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3, 0);
				HUD::SET_BLIP_COLOUR(Local_443[iVar0 /*5*/].f_3, 5);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_443[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_261 = 0;
	}
}

int func_13(int iParam0)//Position - 0x27AC
{
	return GlobalFunc_5215(iParam0, 1, 0);
}


void func_15(char* sParam0, int iParam1, char* sParam2)//Position - 0x2860
{
	iLocal_3505 = 1;
	iLocal_3506 = iParam1;
	sLocal_3508 = sParam0;
	sLocal_3509 = sParam2;
}



int func_18(int iParam0)//Position - 0x28F8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_754)
	{
		if (Local_754[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}









void func_27()//Position - 0x6C56
{
	int iVar0;
	
	func_32(27, 0);
	MISC::CLEAR_AREA(2479.875f, 4980.868f, 44.82052f, 60f, 1, 0, 0, 0);
	iLocal_2506 = VEHICLE::CREATE_VEHICLE(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2506, 1);
	VEHICLE::SET_VEHICLE_LIVERY(iLocal_2506, 2);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2506);
	if (iLocal_2510 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_2510 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_2510 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_2510 == 7)
	{
		STREAMING::REQUEST_ANIM_DICT("DEAD");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("DEAD"))
		{
			func_28(323, 1);
		}
		Local_754[15 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 1, 1);
		TASK::TASK_PLAY_ANIM(Local_754[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[15 /*33*/], 1, 0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_754[15 /*33*/], 1);
		Local_754[16 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 1, 1);
		TASK::TASK_PLAY_ANIM(Local_754[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[16 /*33*/], 1, 0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_754[16 /*33*/], 1);
		Local_754[17 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 1, 1);
		TASK::TASK_PLAY_ANIM(Local_754[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[17 /*33*/], 1, 0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_754[17 /*33*/], 1);
		Local_754[18 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 1, 1);
		TASK::TASK_PLAY_ANIM(Local_754[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[18 /*33*/], 1, 0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_754[18 /*33*/], 1);
		while (((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[15 /*33*/], "DEAD", "DEAD_C", 3) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[16 /*33*/], "DEAD", "DEAD_D", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[17 /*33*/], "DEAD", "DEAD_E", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!PED::IS_PED_INJURED(Local_754[15 /*33*/]) && !PED::IS_PED_INJURED(Local_754[16 /*33*/])) && !PED::IS_PED_INJURED(Local_754[17 /*33*/])) && !PED::IS_PED_INJURED(Local_754[18 /*33*/]))
			{
			}
		}
		ENTITY::SET_ENTITY_HEALTH(Local_754[15 /*33*/], 0);
		ENTITY::SET_ENTITY_HEALTH(Local_754[16 /*33*/], 0);
		ENTITY::SET_ENTITY_HEALTH(Local_754[17 /*33*/], 0);
		ENTITY::SET_ENTITY_HEALTH(Local_754[18 /*33*/], 0);
		STREAMING::REMOVE_ANIM_DICT("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 8);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	uLocal_2649 = OBJECT::CREATE_PICKUP(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, 1, 0);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2509))
	{
		iLocal_2509 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0, 7);
	}
	iLocal_2650[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2650[0], "V_8_Bed1Rm");
	iLocal_2650[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2650[1], "V_8_KitchnRm");
	iLocal_2650[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2650[3], "V_8_StudyRm");
	iLocal_2650[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2650[4], "V_8_Hall2Rm");
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 3);
	iLocal_2650[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2650[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)//Position - 0x71D1
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	SYSTEM::WAIT(0);
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x71E6
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_754[iVar0 /*33*/].f_1 = iParam0;
	Local_754[iVar0 /*33*/].f_3 = iParam1;
	Local_754[iVar0 /*33*/].f_2 = iParam2;
	Local_754[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)//Position - 0x721D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if (Local_2514[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2514[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)//Position - 0x7257
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if (Local_2514[iVar0 /*6*/] == iParam0)
		{
			Local_2514[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_2514[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x729E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if (Local_2514[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2514[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if (Local_2514[iVar0 /*6*/].f_1 == 0)
		{
			Local_2514[iVar0 /*6*/].f_1 = 1;
			Local_2514[iVar0 /*6*/] = iParam0;
			Local_2514[iVar0 /*6*/].f_2 = 0;
			Local_2514[iVar0 /*6*/].f_3 = iParam1;
			Local_2514[iVar0 /*6*/].f_4 = 0;
			Local_2514[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}



int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x73CD
{
	if (!iLocal_3686)
	{
		iLocal_3686 = 1;
		Local_3477[0 /*3*/] = iParam1;
		Local_3477[0 /*3*/].f_1 = iParam2;
		Local_3477[0 /*3*/].f_2 = sParam3;
		Local_3477[1 /*3*/] = iParam4;
		Local_3477[1 /*3*/].f_1 = iParam5;
		Local_3477[1 /*3*/].f_2 = sParam6;
		Local_3477[2 /*3*/] = iParam7;
		Local_3477[2 /*3*/].f_1 = iParam8;
		Local_3477[2 /*3*/].f_2 = sParam9;
		Local_3477[3 /*3*/] = iParam10;
		Local_3477[3 /*3*/].f_1 = iParam11;
		Local_3477[3 /*3*/].f_2 = sParam12;
		func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_55(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_55(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_55(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_55(iParam10, iParam11, sParam12);
		}
		if (!GlobalFunc_4996())
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (GlobalFunc_10618(&uLocal_3521, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_3490 = 1;
					return 1;
				}
			}
			else if (GlobalFunc_10618(&uLocal_3521, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_3490 = 0;
				return 1;
			}
		}
	}
	return 0;
}




















void func_55(int iParam0, int iParam1, char* sParam2)//Position - 0x7D8B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_3510)
	{
		if (iLocal_3510[iVar0] == iParam1)
		{
			GlobalFunc_200(&uLocal_3521, iVar0);
			iLocal_3510[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_3510[iParam0] != 0)
	{
		GlobalFunc_200(&uLocal_3521, iParam0);
	}
	GlobalFunc_173(&uLocal_3521, iParam0, iParam1, sParam2, 0, 1);
	iLocal_3510[iParam0] = iParam1;
}



void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7EA8
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uLocal_50) || !MISC::ARE_STRINGS_EQUAL(uLocal_50, uParam0))
	{
		sLocal_50 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_88[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					GlobalFunc_200(&Local_88, iVar0);
				}
			}
			iVar0++;
		}
	}
}


int func_60(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x7F3A
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_62(iParam1) != iParam2 || iParam2 == 0)
		{
			func_55(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_62(iParam4) != iParam5 || iParam5 == 0)
			{
				func_55(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_62(iParam7) != iParam8 || iParam8 == 0)
			{
				func_55(iParam7, iParam8, sParam9);
			}
		}
		if (GlobalFunc_10663(&uLocal_3521, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}


int func_62(int iParam0)//Position - 0x8029
{
	return iLocal_3510[iParam0];
}






int func_68(int iParam0)//Position - 0x812C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}










void func_78()//Position - 0x8B1E
{
	if (iLocal_2510 >= 3)
	{
		if (iLocal_2510 > 3)
		{
			func_103(&Local_1618, &Local_2273, Local_2252, Local_2255, Local_2258, Local_2261, Local_2249, Local_2270, Local_2243, Local_2246, Local_2264, Local_2267);
		}
		func_79();
	}
}

void func_79()//Position - 0x8B74
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_1618)
	{
		if ((!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_754[iVar0 /*33*/], 1)) || Local_1618[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_1618[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_754[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_754[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 0, 0);
										Local_754[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 1, 0);
										Local_754[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 1, 0, 0);
										func_99(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_2510 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_754[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 1, 1, 0);
											Local_754[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										Local_754[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 1, 1, 0);
										Local_754[iVar0 /*33*/].f_5 = 1;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_2510 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_754[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 1, 1, 0);
											Local_754[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										Local_754[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 1, 1, 0);
										Local_754[iVar0 /*33*/].f_5++;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										Local_754[iVar0 /*33*/].f_14 = PED::CREATE_SYNCHRONIZED_SCENE(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										GlobalFunc_2249(Local_754[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										AUDIO::SET_AMBIENT_VOICE_NAME(Local_754[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], Local_754[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_754[iVar0 /*33*/].f_14, 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_754[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_754[iVar0 /*33*/].f_14 = PED::CREATE_SYNCHRONIZED_SCENE(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_754[iVar0 /*33*/].f_14, 1);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], Local_754[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_754[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/]))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_754[iVar0 /*33*/], 1);
								PED::SET_PED_TO_LOAD_COVER(Local_754[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_754[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_2510 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0, 0))
										{
											func_99(iVar0, 14, 0, 0);
											func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_2510 < 5)
									{
										if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 1, 1, 0);
											func_99(iVar0, 14, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0, 1))
									{
										PED::SET_PED_ACCURACY(Local_754[iVar0 /*33*/], 5);
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_2510 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											Local_754[iVar0 /*33*/].f_4 = 7;
											func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 23, 0, 0);
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_2510 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
											Local_754[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_754[iVar0 /*33*/].f_4 = 32;
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_754[iVar0 /*33*/].f_4 = 7;
										func_100(&Local_1618, iVar0, Local_754[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_754[iVar0 /*33*/], 1);
							}
							break;
						
						case 5:
							switch (Local_754[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_754[iVar0 /*33*/], 1);
						Local_1618[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_1618[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_754[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
										{
											if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_754[iVar0 /*33*/].f_20) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_754[iVar0 /*33*/].f_20))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_754[iVar0 /*33*/].f_20, Local_754[iVar0 /*33*/], PED::GET_PED_BONE_INDEX(Local_754[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_754[iVar0 /*33*/].f_5++;
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
											{
												if (Local_754[iVar0 /*33*/].f_2 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													TASK::TASK_PLAY_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_754[iVar0 /*33*/], 1);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_754[iVar0 /*33*/].f_5 < 7)
								{
									GlobalFunc_661(Local_754[iVar0 /*33*/], &(Local_754[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									ENTITY::SET_ENTITY_ANIM_SPEED(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									ENTITY::SET_ENTITY_ANIM_SPEED(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
								{
									if (Local_754[iVar0 /*33*/].f_5 > 2 && Local_754[iVar0 /*33*/].f_5 <= 6)
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_754[iVar0 /*33*/].f_20))
										{
											Local_754[iVar0 /*33*/].f_12 = (GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(Local_754[iVar0 /*33*/], 1), Local_754[iVar0 /*33*/].f_6, 1) - ENTITY::GET_ENTITY_HEADING(Local_754[iVar0 /*33*/]));
											Local_754[iVar0 /*33*/].f_12 = GlobalFunc_253((Local_754[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!PED::IS_PED_RAGDOLL(Local_754[iVar0 /*33*/]))
											{
												ENTITY::SET_ENTITY_HEADING(Local_754[iVar0 /*33*/], (ENTITY::GET_ENTITY_HEADING(Local_754[iVar0 /*33*/]) + (SYSTEM::TIMESTEP() * Local_754[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
										{
											if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_754[iVar0 /*33*/].f_20) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_754[iVar0 /*33*/].f_20))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_754[iVar0 /*33*/].f_20, Local_754[iVar0 /*33*/], PED::GET_PED_BONE_INDEX(Local_754[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
										{
											if (GlobalFunc_713(Local_754[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_754[iVar0 /*33*/].f_2 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													TASK::TASK_PLAY_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_754[iVar0 /*33*/], 1);
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_754[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_754[iVar0 /*33*/], Local_754[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											Local_754[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_754[iVar0 /*33*/], Local_754[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											Local_754[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_754[iVar0 /*33*/], Local_754[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											if (Local_754[iVar0 /*33*/].f_2 == 5)
											{
												Local_754[iVar0 /*33*/].f_6 = { 2452.091f, 4993.674f, 45.1404f };
												Local_754[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_754[iVar0 /*33*/].f_6 = { 2454.091f, 4995.674f, 45.1404f };
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_754[iVar0 /*33*/], Local_754[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												TASK::STOP_ANIM_TASK(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												TASK::STOP_ANIM_TASK(Local_754[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_754[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
											{
												ENTITY::DETACH_ENTITY(Local_754[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_68(iLocal_2506))
											{
												if (Local_754[iVar0 /*33*/].f_2 == 4)
												{
													PED::SET_PED_MOVEMENT_CLIPSET(Local_754[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													TASK::TASK_ENTER_VEHICLE(Local_754[iVar0 /*33*/], iLocal_2506, -1, -1, 1f, 1, 0);
													func_99(func_18(6), 14, 0, 0);
													func_99(func_18(7), 33, 0, 0);
												}
												else
												{
													PED::SET_PED_MOVEMENT_CLIPSET(Local_754[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													TASK::TASK_ENTER_VEHICLE(Local_754[iVar0 /*33*/], iLocal_2506, -1, 0, 1f, 1, 0);
												}
											}
											Local_754[iVar0 /*33*/].f_5++;
											Local_754[iVar0 /*33*/].f_14 = 0;
											Local_754[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_94(iVar0);
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_754[iVar0 /*33*/], 0))
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_754[iVar0 /*33*/], 0);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_68(iLocal_2506))
										{
											if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2506, -1))
											{
												if (Local_754[iVar0 /*33*/].f_2 == 4)
												{
													if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2506, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!PED::IS_PED_INJURED(Local_754[iVar1 /*33*/]))
															{
																if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_754[iVar1 /*33*/]))
																{
																	func_93();
																	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_2506, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_2506, 19f, 786599);
																	func_92(&(Local_754[iVar0 /*33*/]), 0);
																	func_91(25, 1);
																	Local_754[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2506, 0))
											{
												if (Local_754[iVar0 /*33*/].f_2 == 5)
												{
													Local_754[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 0.25f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, 0, 1193033728);
										TASK::TASK_PED_SLIDE_TO_COORD(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 1061158912);
										TASK::TASK_ACHIEVE_HEADING(0, 92.5678f, 0);
										func_92(&(Local_754[iVar0 /*33*/]), 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 242628503) == 7)
										{
											func_99(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_99(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_93();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 0.25f, 0, 1193033728);
										TASK::TASK_ACHIEVE_HEADING(0, 309.5567f, 0);
										TASK::TASK_PAUSE(0, 2000);
										func_92(&(Local_754[iVar0 /*33*/]), 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 242628503) == 7)
										{
											Local_754[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 993674639) == 7 && Local_754[iVar0 /*33*/].f_5 > 1)
								{
									Local_754[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										WEAPON::SET_CURRENT_PED_WEAPON(Local_754[iVar0 /*33*/], joaat("weapon_unarmed"), 1);
										TASK::TASK_ACHIEVE_HEADING(Local_754[iVar0 /*33*/], 219f, 1500);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 1920390111) == 7)
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
								{
									if (Local_754[iVar0 /*33*/].f_1 == 1 || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754[iVar0 /*33*/], 1) < 20f)
									{
										GlobalFunc_661(Local_754[iVar0 /*33*/], &(Local_754[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0);
									}
									if (Local_754[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_754[iVar0 /*33*/].f_5)
									{
										case 0:
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_754[iVar0 /*33*/].f_14, 0);
											Local_754[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar3 == 0)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_754[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_754[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_754[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_754[iVar0 /*33*/].f_5++;
												Local_754[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
											}
											break;
										
										case 2:
											if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
											{
												Local_754[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_754[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_754[iVar0 /*33*/].f_5++;
												Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 1000;
											}
											break;
										
										case 11:
											if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
											{
												TASK::TASK_TURN_PED_TO_FACE_COORD(Local_754[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5000);
												Local_754[iVar0 /*33*/].f_5++;
												Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 5000;
											}
											break;
										
										case 12:
											if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_754[iVar0 /*33*/]) && GlobalFunc_713(Local_754[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (MISC::GET_GAME_TIMER() > (Local_754[iVar0 /*33*/].f_14 - 3000))
												{
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_754[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f, 20000, 0.25f, 0, 1193033728);
													Local_754[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_754[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_754[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_93();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, 0, 1193033728);
											TASK::TASK_ACHIEVE_HEADING(0, 127.6328f, 3000);
											func_92(&(Local_754[iVar0 /*33*/]), 0);
											Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
											Local_754[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14 || TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 242628503) == 7)
											{
												Local_754[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_754[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_754[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 713668775) == 7)
											{
												Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
												Local_754[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
										{
											if (func_68(iLocal_2506))
											{
												TASK::TASK_ENTER_VEHICLE(Local_754[iVar0 /*33*/], iLocal_2506, 20000, 1, 1f, 1, 0);
												Local_754[iVar0 /*33*/].f_5++;
												Local_754[iVar0 /*33*/].f_14 = 0;
												Local_754[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_94(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_754[iVar0 /*33*/].f_1 == 1 || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754[iVar0 /*33*/], 1) < 20f)
								{
									GlobalFunc_661(Local_754[iVar0 /*33*/], &(Local_754[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0);
								}
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (WEAPON::GET_CURRENT_PED_WEAPON(Local_754[iVar0 /*33*/], &iVar4, 1))
										{
											TASK::TASK_SWAP_WEAPON(Local_754[iVar0 /*33*/], 0);
										}
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!WEAPON::GET_CURRENT_PED_WEAPON(Local_754[iVar0 /*33*/], &iVar4, 1))
										{
											func_93();
											if (iVar0 == 1)
											{
												if (!PED::IS_PED_INJURED(Local_754[2 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_754[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!PED::IS_PED_INJURED(Local_754[1 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_754[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!PED::IS_PED_INJURED(Local_754[7 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_754[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!PED::IS_PED_INJURED(Local_754[6 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_754[6 /*33*/], 2000);
												}
											}
											if (Local_754[iVar0 /*33*/].f_14 != 0)
											{
												TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_754[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_92(&(Local_754[iVar0 /*33*/]), 0);
											Local_754[iVar0 /*33*/].f_5++;
											Local_754[iVar0 /*33*/].f_15 = MISC::GET_GAME_TIMER() + 15000;
										}
										break;
									
									case 2:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 242628503) == 7 || MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_15)
										{
											TASK::CLEAR_PED_TASKS(Local_754[iVar0 /*33*/]);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_754[iVar0 /*33*/].f_4 == 5)
											{
												TASK::TASK_SWAP_WEAPON(Local_754[iVar0 /*33*/], 1);
												Local_754[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_754[iVar0 /*33*/].f_4 == 5)
											{
												func_99(iVar0, Local_754[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_99(iVar0, Local_754[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 993674639) == 7)
										{
											Local_754[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_754[iVar0 /*33*/], 0, 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_754[iVar0 /*33*/].f_5 < 10)
								{
									if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_754[iVar0 /*33*/]))
									{
										Local_754[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										STREAMING::REQUEST_ANIM_DICT("misscarsteal2peeing");
										Local_754[iVar0 /*33*/].f_5++;
										Local_754[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2peeing"))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754[iVar0 /*33*/], 1) < 21.6f)
										{
											TASK::TASK_PLAY_ANIM(Local_754[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_754[iVar0 /*33*/].f_5++;
											Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 23000;
										}
										break;
									
									case 3:
										if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
										{
											Local_754[iVar0 /*33*/].f_14 = -1;
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_754[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, 0, 1193033728);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_92(&(Local_754[iVar0 /*33*/]), 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_754[iVar0 /*33*/].f_2)
										{
											case 12:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2433.04f, 4967.87f, 46.28f, 0.8f, 0))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_754[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2432.56f, 4968.38f, 46.27f, 0.8f, 0))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_754[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2433.12f, 4965.59f, 46.27f, 0.8f, 0))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_754[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2439.61f, 4960.99f, 46.27f, 0.4f, 0))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_754[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2440.16f, 4962.99f, 46.27f, 0.4f, 0))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_754[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2438.23f, 4962.25f, 46.27f, 0.4f, 0))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_754[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_754[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_754[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_754[iVar0 /*33*/]) || (GlobalFunc_742(ENTITY::GET_ENTITY_COORDS(Local_754[iVar0 /*33*/], 1), 1f, 1120403456) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, 1, 0)))
										{
											TASK::TASK_HANDS_UP(Local_754[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_754[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_754[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_754[iVar0 /*33*/]) || (GlobalFunc_742(ENTITY::GET_ENTITY_COORDS(Local_754[iVar0 /*33*/], 1), 1f, 1120403456) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, 1, 0)))
										{
											if (func_35("TRV1", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_754[iVar0 /*33*/].f_5++;
												Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 2000;
											}
										}
										else
										{
											Local_754[iVar0 /*33*/].f_5++;
											Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 2000;
										}
										break;
									
									case 4:
										if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
										{
											TASK::TASK_SMART_FLEE_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 200f, 200000, 0, 0);
											PED::SET_PED_KEEP_TASK(Local_754[iVar0 /*33*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[iVar0 /*33*/]));
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
								{
									if (Local_754[iVar0 /*33*/].f_5 < 8)
									{
										if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_754[iVar0 /*33*/], 0, 2))
										{
											if (!WEAPON::HAS_PED_GOT_WEAPON(Local_754[iVar0 /*33*/], 0, 2))
											{
												WEAPON::GIVE_WEAPON_TO_PED(Local_754[iVar0 /*33*/], joaat("weapon_pistol"), -1, 0, 1);
												TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												GlobalFunc_4956();
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[iVar0 /*33*/], 0);
												TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[iVar0 /*33*/], iLocal_1615);
												Local_754[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
										WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sawnoffshotgun"), 31, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[iVar0 /*33*/], 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[iVar0 /*33*/], iLocal_1615);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze") && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_sawnoffshotgun")))
										{
											if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
											{
												uLocal_2874 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2874, 1);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], iLocal_2874, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2877))
												{
													iLocal_2877 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, 1, 1065353216, 0);
													ENTITY::SET_ENTITY_ROTATION(iLocal_2877, 90f, 0f, 0f, 2, 1);
												}
												TASK::TASK_LOOK_AT_ENTITY(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_2510 == 4 || iLocal_2510 == 5) || iLocal_2510 == 6)
										{
											if (func_87(11))
											{
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_2510 > 6)
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										uLocal_2873 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], uLocal_2873, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										TASK::TASK_LOOK_AT_ENTITY(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_754[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2873) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2873) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2873))
										{
											Local_754[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2873) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2873) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2873))
										{
											iLocal_2872 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2872, 1);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], iLocal_2872, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_754[iVar0 /*33*/].f_5++;
											Local_754[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
										}
										break;
									
									case 6:
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2875) || iLocal_2875 == 0)
										{
											if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
											{
												iLocal_2875 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], iLocal_2875, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], iLocal_2875, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2872) || iLocal_2872 == 0)
										{
											if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2875) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2875) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2875))
											{
												iLocal_2872 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2872, 1);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], iLocal_2872, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_754[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
											}
										}
										if (!GlobalFunc_111() || (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0, 1, 0)))
										{
											GlobalFunc_5105();
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_754[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_2876 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_754[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2877, Local_754[iVar0 /*33*/]);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2876) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2876) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2876))
										{
											PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
											TASK::CLEAR_PED_TASKS(Local_754[iVar0 /*33*/]);
											TASK::TASK_AIM_GUN_AT_ENTITY(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 1);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!GlobalFunc_111())
										{
											if (func_35("CHI2_DALEA", 4, Local_754[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[iVar0 /*33*/], 0);
												TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												Local_754[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
												Local_754[iVar0 /*33*/].f_15 = 0;
												Local_754[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
										{
											if (Local_754[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_754[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_754[iVar0 /*33*/].f_5++;
													Local_754[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
													Local_754[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_754[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
								{
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_754[iVar0 /*33*/], 1), 2f, 1))
									{
										Local_754[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										if (GlobalFunc_663("FRMFLC", 0, 0))
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_754[iVar0 /*33*/], "oneilcook", 2, PLAYER::PLAYER_PED_ID(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_754[iVar0 /*33*/].f_5++;
											Local_754[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 1300;
										}
										break;
									
									case 2:
										if (MISC::GET_GAME_TIMER() > Local_754[iVar0 /*33*/].f_14)
										{
											TASK::TASK_HANDS_UP(Local_754[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!GlobalFunc_111())
										{
											Local_754[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!GlobalFunc_111())
										{
											func_99(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										TASK::TASK_SMART_FLEE_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 50f, 1000, 0, 0);
										Local_754[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (GlobalFunc_5664("WRK2"))
										{
											if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1 || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 5)
											{
												func_81(0);
											}
											else
											{
												func_81(1);
											}
										}
										func_99(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_754[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, 999999, 0, 0);
										TASK::TASK_COWER(0, -1);
										func_92(&(Local_754[iVar0 /*33*/]), 0);
										PED::SET_PED_KEEP_TASK(Local_754[iVar0 /*33*/], 1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[iVar0 /*33*/]));
										if (HUD::DOES_BLIP_EXIST(Local_754[iVar0 /*33*/].f_19))
										{
											HUD::REMOVE_BLIP(&(Local_754[iVar0 /*33*/].f_19));
										}
										Local_754[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_2880 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_754[iVar0 /*33*/].f_14))
									{
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_754[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_2880 = 0;
									}
								}
								if (iLocal_2881 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_754[iVar0 /*33*/].f_14))
									{
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_754[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_2881 = 0;
									}
									Local_754[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_754[iVar0 /*33*/].f_2 == 8)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_754[iVar0 /*33*/].f_14))
									{
										if (Local_754[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_2510 == 3)
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 1785177548) == 1)
												{
													if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[iVar0 /*33*/].f_14) > 0.024f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (WEAPON::GET_CURRENT_PED_WEAPON(Local_754[iVar0 /*33*/], &iVar6, 1))
															{
																PED::SET_PED_ACCURACY(Local_754[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_80(&iVar5))
																	{
																		WEAPON::SET_AMMO_IN_CLIP(Local_754[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		PED::SET_PED_SHOOTS_AT_COORD(Local_754[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(iLocal_2656[iVar5], 1), 0);
																		GlobalFunc_661(Local_754[iVar0 /*33*/], &(Local_754[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0);
																		Local_754[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		WEAPON::SET_AMMO_IN_CLIP(Local_754[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		PED::SET_PED_SHOOTS_AT_COORD(Local_754[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0);
																		GlobalFunc_661(Local_754[iVar0 /*33*/], &(Local_754[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0);
																		Local_754[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_754[iVar0 /*33*/].f_5 == 1)
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_754[iVar0 /*33*/].f_5 = 2;
												if (iLocal_2878 == 0)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_754[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_754[iVar0 /*33*/].f_5 == 2)
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_754[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_754[iVar0 /*33*/].f_5 == 3)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[iVar0 /*33*/], 2106541073) == 7)
									{
										func_99(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_1618[iVar0 /*24*/].f_20)
					{
						switch (Local_754[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[iVar0 /*33*/], 50, 1);
										Local_1618[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[iVar0 /*33*/], 50, 1);
										Local_1618[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0, 0);
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										Local_1618[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_87(18))
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 0);
											Local_1618[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[iVar0 /*33*/], 50, 1);
										if (iLocal_1613 == 0)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 0);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											iLocal_1613++;
											Local_1618[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_1618[iVar0 /*24*/].f_4 = (MISC::GET_GAME_TIMER() + iLocal_1613 * 4000);
											iLocal_1613++;
										}
										Local_754[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (GlobalFunc_713(Local_754[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 0);
											Local_1618[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (MISC::GET_GAME_TIMER() > Local_1618[iVar0 /*24*/].f_4)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 0);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											Local_1618[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0, 0);
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										Local_1618[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0, 0);
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										Local_1618[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_1618[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_754[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0, 0);
										TASK::TASK_COMBAT_PED(Local_754[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[iVar0 /*33*/], 1);
										Local_1618[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_80(int iParam0)//Position - 0xC351
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2656[*iParam0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2656[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0, 1, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_2656)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_81(bool bParam0)//Position - 0xC3EA
{
	iLocal_3490 = 0;
	if (bParam0)
	{
		GlobalFunc_5105();
	}
	else
	{
		GlobalFunc_4956();
	}
}






int func_87(int iParam0)//Position - 0xC49C
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3119[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_3119)
	{
		if (Local_3119[iVar0 /*8*/] == iParam0)
		{
			if (Local_3119[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_3119[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}




int func_91(int iParam0, int iParam1)//Position - 0xC565
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3119)
	{
		if (iParam0 == Local_3119[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_3119[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_3119[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1)//Position - 0xC5AF
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_256, 1);
	}
	TASK::CLOSE_SEQUENCE_TASK(uLocal_256);
	if (!PED::IS_PED_DEAD_OR_DYING(*iParam0, 1))
	{
		TASK::TASK_PERFORM_SEQUENCE(*iParam0, uLocal_256);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_256);
}

void func_93()//Position - 0xC5E8
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_256);
}

void func_94(int iParam0)//Position - 0xC5F7
{
	Local_754[iParam0 /*33*/].f_15 = (Local_754[iParam0 /*33*/].f_15 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
	switch (Local_754[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_754[iParam0 /*33*/].f_15 > 2000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_754[iParam0 /*33*/].f_15 > 8000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_754[iParam0 /*33*/].f_15 > 3000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 0))
			{
				if (!PED::IS_PED_INJURED(Local_754[6 /*33*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_754[iParam0 /*33*/], Local_754[6 /*33*/], 4000, 0, 2);
					MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_754[iParam0 /*33*/].f_15 > 11000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_754[iParam0 /*33*/].f_15 > 20000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 2))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_754[iParam0 /*33*/].f_15 > 3000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_754[iParam0 /*33*/].f_15 > 10000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_754[iParam0 /*33*/].f_15 > 18000 && !MISC::IS_BIT_SET(Local_754[iParam0 /*33*/].f_14, 2))
			{
				TASK::TASK_LOOK_AT_COORD(Local_754[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_754[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}





void func_99(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCACC
{
	if (!PED::IS_PED_INJURED(Local_754[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_754[iParam0 /*33*/].f_4 = Local_754[iParam0 /*33*/].f_3;
			Local_754[iParam0 /*33*/].f_3 = iParam1;
			Local_754[iParam0 /*33*/].f_5 = iParam2;
			Local_754[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_754[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_754[iParam0 /*33*/].f_12 = 0f;
			Local_754[iParam0 /*33*/].f_13 = 0f;
			Local_754[iParam0 /*33*/].f_14 = iParam3;
			Local_754[iParam0 /*33*/].f_15 = 0;
			Local_1618[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCB60
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_51)
	{
		iLocal_51 = iParam1 + 1;
	}
}

int func_101(int iParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xCB9B
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam8 = iParam8;
	if (Local_754[iParam0 /*33*/].f_1 != 1 && Local_754[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_750)
	{
		case 0:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_754[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_750 > 17)
	{
		Local_754[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_754[iParam0 /*33*/], 0);
	}
	iLocal_750++;
	if (Local_754[iParam0 /*33*/].f_1 == 5)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[iParam0 /*33*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[iParam0 /*33*/], iLocal_1616);
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_754[iParam0 /*33*/], iParam6, 3000, iParam7, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[iParam0 /*33*/], iLocal_1615);
		PED::SET_PED_AS_ENEMY(Local_754[iParam0 /*33*/], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[iParam0 /*33*/], 9, 1);
		PED::SET_PED_HEARING_RANGE(Local_754[iParam0 /*33*/], 120f);
		PED::SET_PED_SEEING_RANGE(Local_754[iParam0 /*33*/], 22f);
		PED::SET_PED_ID_RANGE(Local_754[iParam0 /*33*/], 22f);
		PED::SET_PED_CONFIG_FLAG(Local_754[iParam0 /*33*/], 118, 0);
		PED::SET_COMBAT_FLOAT(Local_754[iParam0 /*33*/], 14, 3f);
		if (Local_754[iParam0 /*33*/].f_1 == 2)
		{
			PED::SET_PED_ACCURACY(Local_754[iParam0 /*33*/], 12);
		}
		else
		{
			PED::SET_PED_ACCURACY(Local_754[iParam0 /*33*/], 45);
		}
		PED::SET_PED_DIES_WHEN_INJURED(Local_754[iParam0 /*33*/], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_754[iParam0 /*33*/], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[iParam0 /*33*/], 15, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[iParam0 /*33*/], 17, 0);
		GlobalFunc_593(Local_754[iParam0 /*33*/], 1);
	}
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_754[iParam0 /*33*/]);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_754[iParam0 /*33*/], 1);
	PED::_0xEC6935EBE0847B90(Local_754[iParam0 /*33*/], 0f, 0f, 0f);
	PED::_0x5B6010B3CBC29095(Local_754[iParam0 /*33*/], 1);
	PED::_0xCEDA60A74219D064(Local_754[iParam0 /*33*/], 1);
	ENTITY::SET_ENTITY_HEALTH(Local_754[iParam0 /*33*/], 150);
	return 1;
}


void func_103(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, struct<3> Param14, struct<3> Param17, struct<3> Param20, struct<3> Param23, struct<3> Param26, struct<3> Param29)//Position - 0xD467
{
	if (iLocal_51 > 0)
	{
		func_115(uParam0, Param20, Param23, Param14, Param17);
		func_107(uParam0, uParam1, Param2, Param5, Param8);
		func_104(uParam0, Param11, Param14, Param17, Param20, Param23, Param26, Param29);
	}
}

void func_104(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, struct<3> Param13, struct<3> Param16, struct<3> Param19)//Position - 0xD4C1
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if (bLocal_76)
		{
			if (((iLocal_59 > iLocal_67 || iLocal_68 != iLocal_60) || (iLocal_59 < iLocal_67 && iLocal_59 == 8)) || (iLocal_59 == 10 && bLocal_52 == 0))
			{
				iLocal_66 = 1;
				iLocal_67 = iLocal_59;
				iLocal_68 = iLocal_60;
			}
			switch (iLocal_66)
			{
				case 1:
					if (iLocal_60 > -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_60 /*24*/], 1))
						{
							switch (iLocal_59)
							{
								case 8:
									if (!bLocal_52)
									{
										if (!bLocal_55)
										{
											if (!iLocal_75)
											{
												if (!GlobalFunc_5664(Param13.f_1))
												{
													GlobalFunc_4956();
													if (func_105(Param13.f_1, Param13.f_2, (*uParam0)[iLocal_60 /*24*/], Param13.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_66 = 2;
													}
												}
											}
											else
											{
												iLocal_66 = 2;
											}
										}
										else if (!GlobalFunc_5664(Param10.f_1))
										{
											GlobalFunc_4956();
											if (func_105(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_60 /*24*/], Param10.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_66 = 2;
											}
										}
									}
									else
									{
										iLocal_66 = 2;
									}
									break;
								
								case 7:
									iLocal_75 = 0;
									GlobalFunc_4956();
									if (func_105(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_60 /*24*/], Param1.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_66 = 2;
									}
									break;
								
								case 5:
									iLocal_75 = 0;
									GlobalFunc_4956();
									if (func_105(Param16.f_1, Param16.f_2, (*uParam0)[iLocal_60 /*24*/], Param16.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_66 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_52 && !iLocal_75)
									{
										GlobalFunc_4956();
										if (func_105(Param19.f_1, Param19.f_2, (*uParam0)[iLocal_60 /*24*/], Param19.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_66 = 2;
										}
									}
									else
									{
										iLocal_66 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_55)
									{
										if (((!GlobalFunc_5664(Param4.f_1) && !GlobalFunc_5664(Param7.f_1)) && !GlobalFunc_5664(Param10.f_1)) && !GlobalFunc_5664(Param13.f_1))
										{
											iLocal_75 = 0;
											GlobalFunc_4956();
											if (func_105(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_60 /*24*/], Param4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_66 = 2;
											}
										}
									}
									else
									{
										iLocal_66 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_55)
									{
										if (((!GlobalFunc_5664(Param4.f_1) && !GlobalFunc_5664(Param7.f_1)) && !GlobalFunc_5664(Param10.f_1)) && !GlobalFunc_5664(Param13.f_1))
										{
											iLocal_75 = 0;
											GlobalFunc_4956();
											if (func_105(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_60 /*24*/], Param7.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_66 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_52)
										{
											if (func_105(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_60 /*24*/], Param10.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_75 = 0;
												iLocal_66 = 2;
											}
										}
										iLocal_66 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_66 = 2;
						}
					}
					else
					{
						iLocal_66 = 2;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						iLocal_66 = 0;
					}
					break;
				}
			}
	}
}

int func_105(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0xD7CE
{
	func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_106(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_106(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_106(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_106(iParam10, iParam11, sParam12);
	}
	if (!GlobalFunc_4996())
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_10618(&Local_88, cLocal_253, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_255 = 0;
				return 1;
			}
			else if (iLocal_254 != MISC::GET_GAME_TIMER())
			{
				iLocal_255++;
				iLocal_254 = MISC::GET_GAME_TIMER();
				if (iLocal_255 >= 10)
				{
					iLocal_255 = 0;
					return 1;
				}
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

void func_106(int iParam0, int iParam1, char* sParam2)//Position - 0xD87C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_77)
	{
		if (iLocal_77[iVar0] == iParam1)
		{
			GlobalFunc_200(&Local_88, iVar0);
			iLocal_77[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_77[iParam0] != 0)
	{
		GlobalFunc_200(&Local_88, iParam0);
	}
	GlobalFunc_173(&Local_88, iParam0, iParam1, sParam2, 0, 1);
	iLocal_77[iParam0] = iParam1;
}

void func_107(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8)//Position - 0xD8D9
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	bool bVar14;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1) && !PED::IS_PED_BEING_STEALTH_KILLED((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
							if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
									{
										PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									}
									if (!PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = PED::GET_VEHICLE_PED_IS_USING((*uParam0)[iVar0 /*24*/]);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar2))
												{
													Var3 = { ENTITY::GET_ENTITY_VELOCITY(iVar2) };
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar2);
													ENTITY::SET_ENTITY_VELOCITY(iVar2, Var3);
													TASK::TASK_LEAVE_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = GlobalFunc_7059((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_62;
														iLocal_62++;
														if (iLocal_62 == 2)
														{
															iLocal_62 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], 0), 1);
															func_93();
															if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 1))
															{
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 3000;
															break;
														
														case 1:
															func_93();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															iVar6 = func_112();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + iVar6);
															break;
														
														default:
															if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	ENTITY::SET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], 1);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], 1);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], 0), 1);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_61 = iVar0;
													if (func_109(iVar0, uParam0, "", Param2, Param5, Param8, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_64 == 0)
															{
																if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 1))
																{
																	Var7 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1) };
																	Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
																	fVar13 = MISC::ATAN(((Var10.f_2 - Var7.f_2) / GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0)));
																	if (fVar13 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar13 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_64++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_93();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_93();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_93();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_55)
															{
																if (MISC::ABSF(GlobalFunc_7059((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID())) < 20f)
																{
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_108(((GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_108(((GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_108(((GlobalFunc_156((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (!bVar14)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 2000;
											TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], 1);
											PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_ANY_SCENARIO((*uParam0)[iVar0 /*24*/]))
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], 0), 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], 0);
									PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 50, 1);
									PED::SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 512, 1);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_65 = iLocal_65;
										uLocal_69 = uLocal_69;
										TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_108(float fParam0, float fParam1, float fParam2)//Position - 0xE9B9
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_109(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, bool bParam12)//Position - 0xE9DD
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if (GlobalFunc_111())
				{
					if (!GlobalFunc_5664(Param3.f_1))
					{
						GlobalFunc_5105();
					}
				}
				if (func_105(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], 1) };
					(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], 1) };
				(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 5000;
			}
			break;
		
		case 2:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if ((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iParam0 /*24*/]) || iLocal_74 == 1) && GlobalFunc_713((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (MISC::GET_GAME_TIMER() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f, 20000, 0.1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_105(Param9.f_1, Param9.f_2, (*uParam1)[iParam0 /*24*/], Param9.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam12)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_ACHIEVE_HEADING((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_93();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 1193033728);
			TASK::TASK_ACHIEVE_HEADING(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_92(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1) && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam2, ""))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_61 = -1;
			}
			break;
		
		case 5:
			if (func_105(Param3.f_1, Param6.f_2, (*uParam1)[iParam0 /*24*/], Param3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (GlobalFunc_713((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!PED::IS_PED_INJURED((*uParam1)[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iParam0 /*24*/]);
					func_93();
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_92(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)//Position - 0xEE41
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!PED::IS_PED_DEAD_OR_DYING((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (PED::IS_PED_DEAD_OR_DYING((*uParam1)[iVar0 /*24*/], 1) && ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = GlobalFunc_156((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = GlobalFunc_7059((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (MISC::ABSF((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = GlobalFunc_5821((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}


int func_112()//Position - 0xEF5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}



void func_115(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, struct<2> Param7, var uParam9, struct<2> Param10, var uParam12)//Position - 0xF1B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	
	if (!bLocal_52 == 1)
	{
		bLocal_257 = false;
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_258 == 0)
			{
				iLocal_258 = iVar1;
			}
			if (iVar1 < iLocal_258)
			{
				iLocal_258 = iVar1;
				bLocal_257 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_57 /*24*/], 1))
			{
				if ((uParam0[iLocal_57 /*24*/])->f_3 > 3 && (uParam0[iLocal_57 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_57)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (GlobalFunc_156((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_57 /*24*/], 1) < 8f)
									{
										if ((INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_57 /*24*/]) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) != 0) || (INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_57 /*24*/]) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1) };
											Var6 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iLocal_57 /*24*/], 0) };
											if (MISC::ABSF((Var3.f_2 - Var6.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_57;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar9 = 10f;
					fVar10 = 11f;
					(uParam0[iLocal_57 /*24*/])->f_22 = -1;
					(uParam0[iLocal_57 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_57)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*24*/]))
							{
								fVar11 = GlobalFunc_156((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_57 /*24*/], 1);
								if (fVar11 < 10f)
								{
									fVar12 = GlobalFunc_7059((*uParam0)[iLocal_57 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar12 > -90f && fVar12 < 90f)
									{
										if (fVar11 < fVar9)
										{
											(uParam0[iLocal_57 /*24*/])->f_23 = (uParam0[iLocal_57 /*24*/])->f_22;
											(uParam0[iLocal_57 /*24*/])->f_22 = iVar0;
											fVar10 = fVar9;
											fVar9 = fVar11;
										}
										else if (fVar11 < fVar10)
										{
											fVar10 = fVar11;
											(uParam0[iLocal_57 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_57++;
			if (iLocal_57 >= *uParam0)
			{
				iLocal_57 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
		{
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13))
			{
				iVar14 = 1;
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_70, fLocal_73))
	{
		bLocal_53 = true;
	}
	if (!iLocal_54)
	{
		if (GlobalFunc_5664(Param1.f_1) || GlobalFunc_5664(Param4.f_1))
		{
			iLocal_58 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_54 = 1;
		}
		if (GlobalFunc_5664(Param7.f_1) || GlobalFunc_5664(Param10.f_1))
		{
			iLocal_58 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_54 = 1;
		}
	}
	else if (((!GlobalFunc_5664(Param1.f_1) && !GlobalFunc_5664(Param4.f_1)) && !GlobalFunc_5664(Param7.f_1)) && !GlobalFunc_5664(Param10.f_1))
	{
		iLocal_54 = 0;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_58)
	{
		if (GlobalFunc_5664(Param1.f_1) || GlobalFunc_5664(Param4.f_1))
		{
			bLocal_52 = true;
		}
		if (GlobalFunc_5664(Param7.f_1) || GlobalFunc_5664(Param10.f_1))
		{
			bLocal_55 = true;
		}
	}
	iLocal_59 = 0;
	iVar15 = -1;
	fVar16 = 13f;
	iLocal_56 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar17 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_61 == -1)
	{
		iLocal_74 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_61 == -1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, 0))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar17))
							{
								iLocal_74 = 1;
								fVar16 = 20f;
							}
							if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar17))
							{
								iLocal_74 = 1;
								fVar16 = 50f;
							}
						}
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam0)[iVar0 /*24*/]) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, 0) && VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar17)))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < fVar16)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]))
									{
										fVar16 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1);
										iVar15 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar16 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_52)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_257)
					{
					}
					if (!bLocal_257 && !PED::IS_PED_RAGDOLL((*uParam0)[iVar0 /*24*/]))
					{
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 124))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], 1), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 1) || PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)) || (PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0) && PED::CAN_PED_IN_COMBAT_SEE_TARGET((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID()))) || (func_116((*uParam0)[iVar0 /*24*/]) && PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar14 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_55)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_59)
				{
					iLocal_59 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_60 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_56 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_61 == -1)
	{
		if (iVar15 != -1)
		{
			if (1 > (uParam0[iVar15 /*24*/])->f_1)
			{
				(uParam0[iVar15 /*24*/])->f_1 = 1;
				iLocal_61 = iVar15;
			}
		}
	}
	else if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_61 /*24*/], 1))
	{
		iLocal_61 = -1;
	}
}

int func_116(var uParam0)//Position - 0xF9FC
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_117()//Position - 0xFAAD
{
	if (iLocal_3490)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_3497))
		{
			if (GlobalFunc_111())
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						cLocal_3491 = { GlobalFunc_514() };
						Local_3497 = { GlobalFunc_560() };
						StringCopy(&Local_3497, "", 24);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3491) && !MISC::ARE_STRINGS_EQUAL(&cLocal_3491, "NULL"))
						{
							Local_3497 = { GlobalFunc_560() };
							GlobalFunc_5105();
						}
						else
						{
							iLocal_3490 = 0;
							StringCopy(&Local_3497, "", 24);
							StringCopy(&cLocal_3491, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_3490 = 0;
				StringCopy(&Local_3497, "", 24);
				StringCopy(&cLocal_3491, "", 24);
			}
		}
		else
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!GlobalFunc_5664(&Local_3497))
				{
					iLocal_3490 = 0;
					StringCopy(&Local_3497, "", 24);
					StringCopy(&cLocal_3491, "", 24);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_3497))
			{
				Local_3477[0 /*3*/] = { Local_3477[0 /*3*/] };
			}
		}
	}
}


void func_119()//Position - 0xFC41
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_126();
		func_125();
		func_123();
		func_120();
	}
}

void func_120()//Position - 0xFC65
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
	if (iLocal_436 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_443[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_443)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_443[(iVar0 - 1) /*5*/], Local_443[iVar0 /*5*/], 1));
				}
				if (Local_443[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_443[iVar0 /*5*/]))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_443[iVar0 /*5*/], Var1, 1);
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
			if (fVar7 < fLocal_271)
			{
				iVar5 = iVar5;
				iLocal_436 = 1;
				iLocal_438 = MISC::GET_GAME_TIMER();
				fVar8 = fVar8;
				Local_276 = { Local_443[iVar5 /*5*/] };
				iLocal_279 = iVar5;
				iLocal_439 = iVar5 * 2;
				iLocal_441 = iLocal_439;
				iLocal_442 = iLocal_439;
				if (iLocal_442 < 0)
				{
					iLocal_442 = 0;
				}
				if (iLocal_441 >= Local_443 * 2)
				{
					iLocal_441 = (Local_443 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_436 == 1)
	{
		GRAPHICS::_0xD9454B5752C857DC();
		fVar9 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_438)) / fLocal_749);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_439 + iVar10);
		iVar12 = (iLocal_439 - iVar10);
		if (iVar11 >= 122)
		{
			iVar11 = 121;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_441)
		{
			iVar0 = iLocal_441 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_443)
				{
					if (Local_443[iVar13 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_441 = iVar11;
		}
		if (iVar12 < iLocal_442)
		{
			iVar0 = (iLocal_442 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_443)
				{
					if (Local_443[iVar13 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_442 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_280)
		{
			if ((MISC::GET_GAME_TIMER() - Local_280[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_280[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_280[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_280[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_121(int iParam0, int iParam1)//Position - 0xFEC9
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_122(Local_443[(iParam0 / 2) /*5*/] + Local_443[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_272, fLocal_272, fLocal_272), iParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_122(Local_443[(iParam0 / 2) /*5*/] + Vector(fLocal_272, fLocal_272, fLocal_272), iParam1);
		}
	}
}

void func_122(struct<3> Param0, int iParam3)//Position - 0xFF37
{
	if (iLocal_437 == 0)
	{
		iParam3 = 0;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_280[iLocal_440 /*5*/]);
	if (Local_280[iLocal_440 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_280[iLocal_440 /*5*/].f_1, 0.4f, 1f);
	}
	Local_280[iLocal_440 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_280[iLocal_440 /*5*/].f_1 = { Param0 };
	Local_280[iLocal_440 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, uLocal_269, iParam3);
	iLocal_440++;
	if (iLocal_440 >= 31)
	{
		iLocal_440 = 0;
	}
}

void func_123()//Position - 0xFFC0
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_264)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 24) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_270 == 0)
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_270 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_270)
				{
					if (!bLocal_260)
					{
						fVar4 = 9999.9f;
						Local_273 = { GlobalFunc_2573() };
						iVar0 = 0;
						while (iVar0 < Local_443)
						{
							if (HUD::DOES_BLIP_EXIST(Local_443[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_273, HUD::GET_BLIP_COORDS(Local_443[iVar0 /*5*/].f_3), 1);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_443[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_443[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_443[iVar0 /*5*/] = { Local_273 };
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
							if (iLocal_266 != -1)
							{
								if (MISC::ABSI((iLocal_267 - iVar5)) > 1)
								{
									iLocal_267 = -1;
								}
								if (iLocal_267 == -1)
								{
									iLocal_267 = iLocal_266;
								}
								if (MISC::ABSI((iLocal_267 - iVar5)) < 3 && MISC::ABSI((iLocal_267 - iVar5)) > 0)
								{
									if (iLocal_267 < iVar5)
									{
										iVar6 = iLocal_267;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_443[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_443[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_443[iVar6 /*5*/].f_3, 0);
													Local_443[iVar6 /*5*/].f_4 = 1;
													iLocal_268 = (iLocal_268 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_267)
										{
											if (HUD::DOES_BLIP_EXIST(Local_443[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_443[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_443[iVar6 /*5*/].f_3, 0);
													Local_443[iVar6 /*5*/].f_4 = 1;
													iLocal_268 = (iLocal_268 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_267 = iLocal_266;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_443[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_443[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_443[iVar5 /*5*/].f_3, 0);
											Local_443[iVar5 /*5*/].f_4 = 1;
											iLocal_268 = (iLocal_268 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (HUD::DOES_BLIP_EXIST(Local_443[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_443[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_443[iVar5 /*5*/].f_3, 0);
											Local_443[iVar5 /*5*/].f_4 = 1;
											iLocal_268 = (iLocal_268 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (GlobalFunc_105(Local_443[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_443[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_443[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_443[iVar5 /*5*/].f_3, 0);
												Local_443[iVar5 /*5*/].f_4 = 1;
												iLocal_268 = (iLocal_268 - 1);
											}
										}
									}
								}
							}
							iLocal_266 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_266 = -1;
				iLocal_267 = -1;
				iLocal_270 = 0;
			}
		}
	}
}


void func_125()//Position - 0x10342
{
	int iVar0;
	
	if (iLocal_262)
	{
		if (iLocal_436)
		{
			iVar0 = 0;
			while (iVar0 < Local_280)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_280[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_262 = 0;
		iLocal_436 = 1;
		iLocal_438 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_443)
		{
			Local_443[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_265 != -1)
		{
			iLocal_442 = iLocal_265;
			iLocal_441 = iLocal_265;
			iLocal_439 = iLocal_265;
		}
		else
		{
			iLocal_442 = -1;
			iLocal_441 = -1;
			iLocal_439 = iLocal_265;
		}
		iLocal_440 = 1;
	}
}

void func_126()//Position - 0x103D0
{
	if (!iLocal_263)
	{
		iLocal_263 = 1;
	}
}

void func_127()//Position - 0x103E3
{
	int iVar0;
	
	if (iLocal_2510 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_754)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/]))
			{
				if (!Local_754[iVar0 /*33*/].f_23)
				{
					if (PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
					{
						Local_754[iVar0 /*33*/].f_23 = 1;
						GlobalFunc_565(151, 1, 0);
					}
				}
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_754[iVar0 /*33*/]) == iLocal_1615)
				{
					GlobalFunc_661(Local_754[iVar0 /*33*/], &(Local_754[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0);
				}
			}
			else if (Local_754[iVar0 /*33*/] != 0)
			{
				GlobalFunc_589(&(Local_754[iVar0 /*33*/].f_25));
				Local_754[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}


void func_129()//Position - 0x10502
{
	int iVar0;
	
	iVar0 = iLocal_2510;
	func_343();
	switch (iLocal_2510)
	{
		case 0:
			func_262();
			break;
		
		case 1:
			func_259();
			break;
		
		case 2:
			func_215();
			break;
		
		case 3:
			func_200();
			break;
		
		case 4:
			func_199();
			break;
		
		case 5:
			func_199();
			break;
		
		case 6:
			func_199();
			break;
		
		case 7:
			func_195();
			break;
		
		case 8:
			func_175();
			break;
		
		case 9:
			func_143();
			break;
	}
	if (iLocal_2510 != iVar0)
	{
		iLocal_2511 = 0;
	}
	if (bLocal_2513)
	{
		func_130(0);
	}
}

void func_130(char* sParam0)//Position - 0x105B4
{
	while (!AUDIO::TRIGGER_MUSIC_EVENT("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sLocal_2512 = sParam0;
	}
	if (MISC::IS_STRING_NULL(sLocal_2512))
	{
		sLocal_2512 = "CHFAIL";
	}
	GlobalFunc_10835(sLocal_2512);
	while (!GlobalFunc_145())
	{
		func_28(2, 0);
	}
	func_404(1);
}













void func_143()//Position - 0x114BE
{
	func_170(46, 52);
	func_160(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_160(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 12, 0, 0, 1, 0, 1, 0);
	func_148();
	if (func_147(1, 49))
	{
		func_144();
	}
}

void func_144()//Position - 0x1154C
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_5103(0, 0);
	func_404(0);
}



int func_147(int iParam0, int iParam1)//Position - 0x11677
{
	if (Local_2916[iParam0 /*10*/] == iParam1)
	{
		if (Local_2916[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_148()//Position - 0x1169D
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0, 1, 0))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0, 1, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0, 1, 0))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0, 1, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11B27
{
	int iVar0;
	int iVar1;
	
	if (Local_3336[iParam0 /*4*/] != iParam1)
	{
		Local_3336[iParam0 /*4*/].f_1 = 0;
		Local_3336[iParam0 /*4*/] = iParam1;
	}
	if (!Local_3336[iParam0 /*4*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_3336[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(2f);
						Local_3336[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (PLAYER::IS_SPECIAL_ABILITY_METER_FULL(PLAYER::PLAYER_ID()))
					{
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							GlobalFunc_159("USESPEC_KM", -1);
						}
						else
						{
							GlobalFunc_159("USESPEC", -1);
						}
					}
					Local_3336[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_3336[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_159("FRMFLE", -1);
							Local_3336[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_527("FRMLK", 7500, 1);
						Local_3336[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					GlobalFunc_527("FRMSNP", 7500, 1);
					Local_3336[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_3336[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								Local_3336[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								Local_3336[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_3336[iParam0 /*4*/].f_3)
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									GlobalFunc_159("FRMSTLTH_KM", -1);
								}
								else
								{
									GlobalFunc_159("FRMSTLTH", -1);
								}
								Local_3336[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_3336[iParam0 /*4*/].f_2)
					{
						case 0:
							if (MISC::GET_PROFILE_SETTING(211) != 0)
							{
								Local_3336[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 4000;
								Local_3336[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_3336[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!GlobalFunc_111())
										{
											if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
											{
												GlobalFunc_159("FRMSHOT", -1);
												Local_3336[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					GlobalFunc_527("FRMFLC", 7500, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2676, "FRMBLIPB");
					Local_3336[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_3336[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_159("FRMPET2", -1);
							Local_3336[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!GlobalFunc_111())
							{
								GlobalFunc_164("FRMTRL", 7500, 1);
								Local_3336[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (PAD::IS_CONTROL_PRESSED(0, 24))
									{
										HUD::CLEAR_HELP(1);
									}
								}
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_159("FRMTRL2", -1);
								Local_3336[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!GlobalFunc_111())
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
									{
										if (!HUD::DOES_BLIP_EXIST(uLocal_2676))
										{
											HUD::CLEAR_PRINTS();
											GlobalFunc_527("FRMSHP", 7500, 1);
											uLocal_2676 = GlobalFunc_5104(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										HUD::CLEAR_PRINTS();
										if (HUD::DOES_BLIP_EXIST(uLocal_2676))
										{
											HUD::REMOVE_BLIP(&uLocal_2676);
										}
										GlobalFunc_527("FRMIGN", 7500, 1);
										AUDIO::START_AUDIO_SCENE("CHI_2_SHOOT_GAS");
										Local_3336[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_87(37))
							{
								if (GlobalFunc_663("FRMIGN", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
							{
								Local_3336[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					GlobalFunc_159("FRMMISS", -1);
					Local_3336[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_87(34))
					{
						GlobalFunc_527("FRMFRH", 7500, 1);
					}
					else
					{
						GlobalFunc_527("FRMFRG", 7500, 1);
					}
					Local_3336[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					GlobalFunc_527("FRMLEAVE", 1, 1);
					if (func_87(48))
					{
						HUD::CLEAR_PRINTS();
						Local_3336[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					GlobalFunc_527("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}



int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1206E
{
	bLocal_3117 = false;
	iLocal_3118 = 0;
	if (func_153(&bLocal_3117, &iLocal_3118, iParam0, iParam1))
	{
		if (func_153(&bLocal_3117, &iLocal_3118, iParam2, iParam3))
		{
			if (func_153(&bLocal_3117, &iLocal_3118, iParam4, iParam5))
			{
				if (func_153(&bLocal_3117, &iLocal_3118, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_3117)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x120CD
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_156(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_156(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_87(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_155(iParam3))
			{
				if (func_156(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_87(iParam3))
				{
					func_154(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_154(int iParam0)//Position - 0x12226
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3119[0 /*8*/]);
	if (Local_3119[iVar0 /*8*/] == iParam0)
	{
		Local_3119[iVar0 /*8*/].f_3 = 1;
	}
}

int func_155(int iParam0)//Position - 0x12252
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3119[0 /*8*/]);
	if (Local_3119[iVar0 /*8*/] == iParam0)
	{
		if (Local_3119[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x12285
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3119[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_3119)
	{
		if (Local_3119[iVar0 /*8*/] == iParam0)
		{
			if (!Local_3119[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_3119[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x122DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_3357[iParam0 /*7*/] != iParam1)
	{
		Local_3357[iParam0 /*7*/].f_1 = 0;
		Local_3357[iParam0 /*7*/] = iParam1;
	}
	if (!Local_3357[iParam0 /*7*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_3357[iParam0 /*7*/].f_2)
			{
				Local_3357[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_3357[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3357[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
							Local_3357[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_3357[iParam0 /*7*/].f_4)
							{
								if (GlobalFunc_111())
								{
									Local_3357[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_159(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 14000));
										}
									}
									else
									{
										Local_3357[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_3357[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3357[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3357[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3357[iParam0 /*7*/].f_4 = func_18(15);
							Local_3357[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_3357[iParam0 /*7*/].f_4 != -1 && Local_3357[iParam0 /*7*/].f_5 != -1)
							{
								Local_3357[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3357[iParam0 /*7*/].f_4 = Local_3357[iParam0 /*7*/].f_5;
								if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_159(&iVar1, 2, 1))
							{
								if (iVar1 != Local_3357[iParam0 /*7*/].f_4)
								{
									Local_3357[iParam0 /*7*/].f_4 = iVar1;
									Local_3357[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_3357[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3357[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3357[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_3357[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3357[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3357[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3357[iParam0 /*7*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3357[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3357[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_3357[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
										Local_3357[iParam0 /*7*/].f_6++;
										Local_3357[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_3357[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
										Local_3357[iParam0 /*7*/].f_6++;
										Local_3357[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3357[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3357[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3357[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_3357[iParam0 /*7*/].f_6++;
											Local_3357[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_3357[iParam0 /*7*/].f_6++;
											Local_3357[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_3357[iParam0 /*7*/].f_6++;
											Local_3357[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3357[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3357[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3357[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3357[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_3357[iParam0 /*7*/].f_6++;
											Local_3357[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_3357[iParam0 /*7*/].f_6++;
											Local_3357[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3357[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_3357[iParam0 /*7*/].f_6++;
											Local_3357[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3357[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_754)
							{
								if (Local_754[iVar2 /*33*/].f_1 == 2)
								{
									if (!PED::IS_PED_INJURED(Local_754[iVar2 /*33*/]))
									{
										if (PED::IS_PED_IN_COMBAT(Local_754[iVar2 /*33*/], 0))
										{
											if (PED::CAN_PED_IN_COMBAT_SEE_TARGET(Local_754[iVar2 /*33*/], PLAYER::PLAYER_PED_ID()))
											{
												Local_3357[iParam0 /*7*/].f_4 = iVar2;
												Local_3357[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_159(&(Local_3357[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_3357[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (GlobalFunc_5664("ONEILGUARD4") || GlobalFunc_5664("SEETREVOR"))
							{
								Local_3357[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3357[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3357[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_3357[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_754)
								{
									if (Local_754[iVar3 /*33*/].f_1 == 2)
									{
										if (!PED::IS_PED_INJURED(Local_754[iVar3 /*33*/]))
										{
											fVar5 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_3357[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_3357[iParam0 /*7*/].f_4 == -1)
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_3357[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 6000;
								Local_3357[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_754)
							{
								if (Local_754[iVar6 /*33*/].f_2 == 8)
								{
									Local_3357[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_754[iVar6 /*33*/].f_2 == 9)
								{
									Local_3357[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_3357[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!GlobalFunc_111())
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (GlobalFunc_156(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/], PLAYER::PLAYER_PED_ID(), 1) < 30f)
											{
												Local_3357[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3357[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/]))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_754[Local_3357[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_3357[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3357[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!PED::IS_PED_INJURED(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_754[Local_3357[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_3357[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_158())
					{
						if (func_35("CHI2_pourmis", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_3357[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_3357[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3357[iParam0 /*7*/].f_4 = 2500;
							Local_3357[iParam0 /*7*/].f_5 = 0;
							Local_3357[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_3357[iParam0 /*7*/].f_4 = (Local_3357[iParam0 /*7*/].f_4 - SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							if (Local_3357[iParam0 /*7*/].f_4 <= 0)
							{
								Local_3357[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_3357[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3357[iParam0 /*7*/].f_3 = 1;
									Local_3357[iParam0 /*7*/].f_4 = (12000 + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
									Local_3357[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3357[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_158()//Position - 0x13713
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_443)
	{
		if (Local_443[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2)//Position - 0x13762
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_754)
	{
		if (Local_754[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !PED::IS_PED_INJURED(Local_754[iVar0 /*33*/])))
			{
				fVar1 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x137E8
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	var uVar4;
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
	
	if (Local_2916[iParam0 /*10*/] != iParam1 || Local_2916[iParam0 /*10*/].f_1 == 0)
	{
		Local_2916[iParam0 /*10*/] = iParam1;
		Local_2916[iParam0 /*10*/].f_1 = 1;
		Local_2916[iParam0 /*10*/].f_3 = 0;
		Local_2916[iParam0 /*10*/].f_6 = 0;
		Local_2916[iParam0 /*10*/].f_4 = 0;
		Local_2916[iParam0 /*10*/].f_7 = 0;
		Local_2916[iParam0 /*10*/].f_8 = 0;
		Local_2916[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_2916[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_152(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_2916[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_2916[iParam0 /*10*/].f_3 == 0 || Local_2916[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_2916[iParam0 /*10*/].f_2)
			{
				Local_2916[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_2916[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::START_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]))
						{
							PED::DELETE_PED(&(Local_754[11 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[10 /*33*/]))
						{
							PED::DELETE_PED(&(Local_754[10 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[12 /*33*/]))
						{
							PED::DELETE_PED(&(Local_754[12 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[13 /*33*/]))
						{
							PED::DELETE_PED(&(Local_754[13 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[14 /*33*/]))
						{
							PED::DELETE_PED(&(Local_754[14 /*33*/]));
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_janet"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_janet"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man1a"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_taocheng"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_taostranslator"));
						STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmaze");
						STREAMING::REMOVE_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
						STREAMING::REMOVE_ANIM_DICT("missrampageintrooutro");
						if (iLocal_2883 != -1)
						{
							if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2883))
							{
								PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2883);
							}
						}
						PED::CLEAR_PED_NON_CREATION_AREA();
						func_31(26, 1);
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (AUDIO::LOAD_STREAM("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
						STREAMING::SET_PED_POPULATION_BUDGET(1);
						STREAMING::PREFETCH_SRL("chinese2_farmhouse_cutscene");
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!PED::IS_PED_INJURED(Local_754[12 /*33*/]) && !PED::IS_PED_INJURED(Local_754[13 /*33*/])) && !PED::IS_PED_INJURED(Local_754[14 /*33*/]))
					{
						if (func_169(6, 6) < 2)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[12 /*33*/], 150319005) == 7)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_754[13 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_754[14 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_754[12 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							uVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar4, 0))
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = ENTITY::GET_ENTITY_SPEED(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_2916[iParam0 /*10*/].f_6 = 1;
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 321, 1);
						if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("walkinterruptible")))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
							if (func_168())
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_2916[iParam0 /*10*/].f_6 == 1)
					{
						STREAMING::REMOVE_ANIM_DICT("missrampageintrooutro");
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!PED::IS_PED_INJURED(Local_754[12 /*33*/]) && !PED::IS_PED_INJURED(Local_754[13 /*33*/])) && !PED::IS_PED_INJURED(Local_754[14 /*33*/]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[12 /*33*/], uLocal_2635);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[13 /*33*/], iLocal_2635);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[14 /*33*/], iLocal_2635);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[12 /*33*/], 17, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[13 /*33*/], 17, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_754[14 /*33*/], 17, 1);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_754[12 /*33*/]);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_754[13 /*33*/]);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_754[14 /*33*/]);
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((PED::IS_PED_INJURED(Local_754[12 /*33*/]) || PED::IS_PED_INJURED(Local_754[13 /*33*/])) || PED::IS_PED_INJURED(Local_754[14 /*33*/]))
							{
								Local_2916[iParam0 /*10*/].f_6++;
							}
							if (!PED::IS_PED_INJURED(Local_754[12 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_754[12 /*33*/]))
								{
									Local_2916[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!PED::IS_PED_INJURED(Local_754[13 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_754[13 /*33*/]))
								{
									Local_2916[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!PED::IS_PED_INJURED(Local_754[14 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_754[14 /*33*/]))
								{
									Local_2916[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_754[12 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_754[12 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(Local_754[12 /*33*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[12 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_754[13 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_754[13 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(Local_754[13 /*33*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[13 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_754[14 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_754[14 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(Local_754[14 /*33*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[14 /*33*/]));
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::PREFETCH_SRL("chinese2_explosion_cutscene");
							AUDIO::STOP_STREAM();
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_2647 == 1)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_2916[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2647 == 2)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_2916[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2647 == 3)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_2916[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (STREAMING::IS_SRL_LOADED())
							{
								Local_2916[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_2916[iParam0 /*10*/].f_7)
							{
								if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
								{
									FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f)), 16, 1.5f, 1, 0, 1065353216);
									Local_2916[iParam0 /*10*/].f_9 = (Local_2916[iParam0 /*10*/].f_9 - 1f);
									Local_2916[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 520));
								}
								else
								{
									Local_2916[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							iVar5 = 0;
							while (iVar5 < Local_2888.x)
							{
								if (!MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_7, iVar5))
								{
									if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_2888[iVar5 /*3*/], 5f))
									{
										MISC::SET_BIT(&(Local_2916[iParam0 /*10*/].f_7), iVar5);
										if (Local_2916[iParam0 /*10*/].f_6 == 0)
										{
											Local_2916[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (MISC::GET_GAME_TIMER() > Local_2916[iParam0 /*10*/].f_8)
							{
								Local_2916[iParam0 /*10*/].f_8 = 0;
								iVar5 = 0;
								while (iVar5 < Local_2888.x)
								{
									if (!MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_7, iVar5 + 9) && MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_7, iVar5))
									{
										FIRE::ADD_EXPLOSION(Local_2888[iVar5 /*3*/], 16, 1.5f, 1, 0, 1065353216);
										MISC::SET_BIT(&(Local_2916[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_2916[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(150, 320));
									}
									iVar5++;
								}
							}
							if (Local_2916[iParam0 /*10*/].f_6 != 0)
							{
								if (MISC::GET_GAME_TIMER() > Local_2916[iParam0 /*10*/].f_6)
								{
									Local_2916[iParam0 /*10*/].f_6 = 1;
									Local_2916[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 300;
									Local_2916[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_99(iVar6, 20, 0, 0);
					func_99(iVar7, 20, 0, 0);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK");
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
								{
									iLocal_2505 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, 0))
									{
										if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_2505))
										{
											Local_2916[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (AUDIO::PREPARE_MUSIC_EVENT("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (AUDIO::TRIGGER_MUSIC_EVENT("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_68(iLocal_2505))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, 0))
								{
									if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_2505))
									{
										Local_2916[iParam0 /*10*/].f_7 = (Local_2916[iParam0 /*10*/].f_7 + MISC::GET_GAME_TIMER() + 7000);
										Local_2916[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_68(iLocal_2505))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, 0))
								{
									if (MISC::GET_GAME_TIMER() > Local_2916[iParam0 /*10*/].f_7)
									{
										if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 6 && AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
										{
											if (AUDIO::_0x3A48AB4445D499BE() != 0)
											{
												if (func_35("CHI2_rad", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_2916[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2916[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2916[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (GlobalFunc_5664("CHI2_rad"))
							{
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!GlobalFunc_5664("CHI2_rad"))
							{
								if (func_68(iLocal_2505))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, 0))
									{
										if (!PAD::IS_CONTROL_PRESSED(0, 85))
										{
											if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 6)
											{
												if (iLocal_2675 == -1)
												{
													iLocal_2675 = AUDIO::GET_SOUND_ID();
													AUDIO::PLAY_SOUND_FRONTEND(iLocal_2675, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_2916[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2916[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!PAD::IS_CONTROL_PRESSED(0, 85))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("CHN2_TREV_RADIO_2_FRTA"))
								{
									AUDIO::START_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
									Local_2916[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_68(iLocal_2505))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, 0))
								{
									if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 6)
									{
										if (AUDIO::_0x3A48AB4445D499BE() != 0)
										{
											if (func_35("CHI2_radb", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_2916[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2916[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!GlobalFunc_742(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_87(49))
					{
						if (iLocal_2677 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_2677);
						}
						iLocal_2677 = 0;
						GlobalFunc_7621(50, 2, 0, 1, 0);
						GlobalFunc_7621(51, 2, 0, 1, 0);
						GlobalFunc_7621(52, 2, 0, 1, 0);
						GlobalFunc_7621(53, 2, 0, 1, 0);
						GlobalFunc_7621(54, 1, 0, 1, 0);
						GlobalFunc_7621(55, 1, 0, 1, 0);
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
							{
								Local_2916[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_2916[iParam0 /*10*/].f_7)
								{
									Local_2916[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_2916[iParam0 /*10*/].f_7)
								{
									GlobalFunc_565(158, (Local_2916[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_2916[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (PAD::IS_CONTROL_PRESSED(0, 24))
									{
										if (Local_2916[iParam0 /*10*/].f_8 == 0)
										{
											GlobalFunc_574(157, 0);
											Local_2916[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_2916[iParam0 /*10*/].f_8 == 1)
									{
										GlobalFunc_571(0, 157);
										Local_2916[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_2916[iParam0 /*10*/].f_8 == 1)
								{
									GlobalFunc_571(0, 157);
									Local_2916[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_2916[iParam0 /*10*/].f_8 == 1)
							{
								GlobalFunc_571(0, 157);
								Local_2916[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2916[iParam0 /*10*/].f_7 = -1;
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (PAD::IS_CONTROL_PRESSED(0, 24))
									{
										if (Local_2916[iParam0 /*10*/].f_7 == -1)
										{
											Local_2916[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
										}
										if (iLocal_268 == 0)
										{
											Local_2916[iParam0 /*10*/].f_9 = (Local_2916[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 2f));
										}
										else if (iLocal_268 < 30 && Local_2916[iParam0 /*10*/].f_9 < 70f)
										{
											Local_2916[iParam0 /*10*/].f_9 = (Local_2916[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 1.5f));
										}
										else
										{
											Local_2916[iParam0 /*10*/].f_9 = (Local_2916[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
										}
										iVar11 = SYSTEM::FLOOR((IntToFloat(Local_2916[iParam0 /*10*/].f_7) * (1f - (Local_2916[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar10, iVar11);
										}
										else
										{
											WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar10, 0);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, GlobalFunc_648());
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					GlobalFunc_563(1);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					GlobalFunc_563(0);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					STREAMING::SET_PED_POPULATION_BUDGET(3);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[4 /*33*/].f_20))
							{
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_754[4 /*33*/].f_20));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_754[5 /*33*/].f_20))
							{
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_754[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_2656)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2656[iVar12]))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_2656[iVar12]));
								}
								iVar12++;
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (PED::IS_PED_INJURED(Local_754[23 /*33*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2877))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2877);
									WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_sawnoffshotgun"));
									Local_2916[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_754[11 /*33*/]))
						{
							if (MISC::GET_GAME_TIMER() > Local_2916[iParam0 /*10*/].f_7)
							{
								if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_754[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_2916[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_MODEL(joaat("ig_taocheng"));
							STREAMING::REQUEST_MODEL(joaat("ig_taostranslator"));
							STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
							if (iLocal_2883 == -1 || (iLocal_2883 != -1 && !PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2883)))
							{
								iLocal_2883 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze") && STREAMING::HAS_MODEL_LOADED(joaat("ig_taocheng"))) && STREAMING::HAS_MODEL_LOADED(joaat("ig_taostranslator")))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]))
								{
									Local_754[11 /*33*/] = PED::CREATE_PED(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0, 1, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[11 /*33*/], iLocal_1617);
									PED::SET_PED_CAN_BE_TARGETTED(Local_754[11 /*33*/], 0);
								}
								else if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[11 /*33*/], iLocal_1617);
									PED::SET_PED_CAN_BE_TARGETTED(Local_754[11 /*33*/], 0);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_754[10 /*33*/]))
								{
									Local_754[10 /*33*/] = PED::CREATE_PED(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0, 1, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[10 /*33*/], iLocal_1617);
									PED::SET_PED_CAN_BE_TARGETTED(Local_754[10 /*33*/], 0);
									PED::SET_PED_PROP_INDEX(Local_754[10 /*33*/], 1, 0, 1, 0);
								}
								else if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[10 /*33*/], iLocal_1617);
									PED::SET_PED_CAN_BE_TARGETTED(Local_754[10 /*33*/], 0);
								}
								if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2916[iParam0 /*10*/].f_7))
									{
										Local_2916[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2916[iParam0 /*10*/].f_7, 1);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_754[11 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2916[iParam0 /*10*/].f_7))
									{
										Local_2916[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2916[iParam0 /*10*/].f_7, 1);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_754[10 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]) && !PED::IS_PED_INJURED(Local_754[11 /*33*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_754[10 /*33*/], 0, 0, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[11 /*33*/], 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_754[10 /*33*/], 1);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2916[iParam0 /*10*/].f_7))
								{
									Local_2916[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_754[11 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_754[10 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2916[iParam0 /*10*/].f_7, 1);
								}
								PED::SET_PED_CONFIG_FLAG(Local_754[11 /*33*/], 118, 0);
								PED::SET_PED_CONFIG_FLAG(Local_754[11 /*33*/], 208, 1);
								PED::SET_PED_CONFIG_FLAG(Local_754[10 /*33*/], 118, 0);
								PED::SET_PED_CONFIG_FLAG(Local_754[10 /*33*/], 208, 1);
								Local_2916[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
							{
								if (!PED::IS_PED_RAGDOLL(Local_754[11 /*33*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2916[iParam0 /*10*/].f_7))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2916[iParam0 /*10*/].f_7) == 1f)
										{
											Local_2916[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2916[iParam0 /*10*/].f_7, 1);
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_754[11 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
												{
													if (!PED::IS_PED_RAGDOLL(Local_754[10 /*33*/]))
													{
														if (!MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_8, 0))
														{
															TASK::TASK_SYNCHRONIZED_SCENE(Local_754[10 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_754[11 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
												{
													if (!PED::IS_PED_RAGDOLL(Local_754[10 /*33*/]))
													{
														if (!MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_8, 0))
														{
															TASK::TASK_SYNCHRONIZED_SCENE(Local_754[10 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_2916[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_754[11 /*33*/], Local_2916[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2916[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
							{
								if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_754[10 /*33*/], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(Local_754[10 /*33*/])) || PED::IS_PED_INJURED(Local_754[11 /*33*/])) || (!PED::IS_PED_INJURED(Local_754[10 /*33*/]) && TASK::GET_SCRIPT_TASK_STATUS(Local_754[10 /*33*/], 1785177548) == 2))
								{
									if (!MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_8, 0))
									{
										TASK::CLEAR_PED_TASKS(Local_754[10 /*33*/]);
										func_93();
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 30f, 20000, 0, 0);
										TASK::TASK_COWER(0, -1);
										func_92(&(Local_754[10 /*33*/]), 0);
										MISC::SET_BIT(&(Local_2916[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
							{
								if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_754[11 /*33*/], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(Local_754[11 /*33*/])) || MISC::IS_BIT_SET(Local_2916[iParam0 /*10*/].f_8, 1)) || (!PED::IS_PED_INJURED(Local_754[11 /*33*/]) && TASK::GET_SCRIPT_TASK_STATUS(Local_754[11 /*33*/], 1785177548) == 2))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_754[11 /*33*/], 0);
									if (!PED::IS_PED_RAGDOLL(Local_754[11 /*33*/]))
									{
									}
								}
							}
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_754[10 /*33*/]))
								{
									PED::DELETE_PED(&(Local_754[11 /*33*/]));
									PED::DELETE_PED(&(Local_754[10 /*33*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_taocheng"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_taostranslator"));
								STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmaze");
								if (iLocal_2883 != -1)
								{
									if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2883))
									{
										PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2883);
									}
								}
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[11 /*33*/], 150319005) != 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_754[11 /*33*/], PLAYER::PLAYER_PED_ID(), 4000, 2096, 2);
							}
						}
						if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_754[10 /*33*/], 150319005) != 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_754[10 /*33*/], PLAYER::PLAYER_PED_ID(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_2886 = 0;
					iVar13 = 0;
					while (iVar13 < Local_754)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar13 /*33*/]))
						{
							if (PED::IS_PED_INJURED(Local_754[iVar13 /*33*/]))
							{
								if (Local_754[iVar13 /*33*/].f_21 == 0)
								{
									if (((PED::GET_PED_CAUSE_OF_DEATH(Local_754[iVar13 /*33*/]) == 392730790 || PED::GET_PED_CAUSE_OF_DEATH(Local_754[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || PED::GET_PED_CAUSE_OF_DEATH(Local_754[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || PED::GET_PED_CAUSE_OF_DEATH(Local_754[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_2886++;
									}
									Local_754[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_2886 > 0)
					{
					}
					if (iLocal_2886 > 1)
					{
						GlobalFunc_553(150);
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					RECORDING::_0x293220DA1B46CEBC(4f, 15f, 4);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_87(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (OBJECT::DOES_PICKUP_EXIST(uLocal_2674))
					{
						OBJECT::REMOVE_PICKUP(uLocal_2674);
					}
					iVar14 = 0;
					MISC::SET_BIT(&iVar14, 3);
					MISC::SET_BIT(&iVar14, 8);
					MISC::SET_BIT(&iVar14, 1);
					if (!OBJECT::DOES_PICKUP_EXIST(uLocal_2674))
					{
						uLocal_2674 = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, 1, 0);
						INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_2674, "V_8_BasementRm");
						uLocal_2676 = GlobalFunc_5666(uLocal_2674);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2676, "FRMBLIP");
					}
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						GlobalFunc_563(1);
						AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
					STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2916[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4000;
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_2916[iParam0 /*10*/].f_7)
							{
								Local_2916[iParam0 /*10*/].f_7 = 0;
								while (Local_2916[iParam0 /*10*/].f_7 < Local_754)
								{
									if (!PED::IS_PED_INJURED(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_1618[Local_2916[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_1618[Local_2916[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_1618[Local_2916[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_99(Local_2916[iParam0 /*10*/].f_7, 27, 0, 0);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], iLocal_1616);
											GlobalFunc_589(&(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_2916[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_2916[iParam0 /*10*/].f_7 = 0;
					while (Local_2916[iParam0 /*10*/].f_7 < Local_754)
					{
						if (!PED::IS_PED_INJURED(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, 1, 0))
							{
								PED::DELETE_PED(&(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_2916[iParam0 /*10*/].f_7++;
					}
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_754)
					{
						if (!PED::IS_PED_INJURED(Local_754[iVar15 /*33*/]))
						{
							if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_754[iVar15 /*33*/]) != MISC::GET_HASH_KEY("V_8_BasementRm"))
							{
								func_99(iVar15, 27, 0, 0);
								Local_754[iVar15 /*33*/].f_1 = 5;
								Local_1618[iVar15 /*24*/].f_3 = 7;
								Local_754[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2916[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_2916[iParam0 /*10*/].f_7 != -1)
							{
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_99(Local_2916[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || func_87(9))
					{
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_87(12))
						{
							AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_156(12))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_87(9) || (!PED::IS_PED_INJURED(Local_754[8 /*33*/]) && PED::IS_PED_IN_COMBAT(Local_754[8 /*33*/], 0))) || (!PED::IS_PED_INJURED(Local_754[9 /*33*/]) && PED::IS_PED_IN_COMBAT(Local_754[9 /*33*/], 0)))
					{
						if (!PED::IS_PED_INJURED(Local_754[8 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_754[8 /*33*/], 45);
						}
						if (!PED::IS_PED_INJURED(Local_754[9 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_754[9 /*33*/], 45);
						}
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_87(9))
					{
						Local_2916[iParam0 /*10*/].f_7 = 0;
						while (Local_2916[iParam0 /*10*/].f_7 < Local_754)
						{
							if (!PED::IS_PED_INJURED(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]))
							{
								PED::SET_PED_SEEING_RANGE(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_2916[iParam0 /*10*/].f_7++;
						}
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_2916[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_87(12))
								{
									Local_2916[iParam0 /*10*/].f_7 = 0;
									while (Local_2916[iParam0 /*10*/].f_7 < Local_754)
									{
										if (!PED::IS_PED_INJURED(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												PED::SET_PED_SEEING_RANGE(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_2916[iParam0 /*10*/].f_7++;
									}
									Local_2916[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_156(12))
								{
									Local_2916[iParam0 /*10*/].f_7 = 0;
									while (Local_2916[iParam0 /*10*/].f_7 < Local_754)
									{
										if (!PED::IS_PED_INJURED(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												PED::SET_PED_SEEING_RANGE(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_2916[iParam0 /*10*/].f_7++;
									}
									Local_2916[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
							{
								if (!PED::IS_PED_INJURED(Local_754[23 /*33*/]))
								{
									Local_2916[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2916[iParam0 /*10*/].f_7, 1);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], Local_2916[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
									Local_2916[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_MODEL(joaat("blazer"));
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
							{
								iLocal_2507 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2507);
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					func_163(0);
					func_161();
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_87(29))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_2676))
								{
									HUD::REMOVE_BLIP(&uLocal_2676);
								}
								func_12(0);
								if (GlobalFunc_663("FRMFLC", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								GlobalFunc_574(157, 0);
								RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
								if (iLocal_2648 == 0)
								{
									iLocal_2648 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
								}
								Local_2916[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_87(29))
							{
								GlobalFunc_565(158, (iLocal_2648 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"))), 1);
								iLocal_2678 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_2678 != 0)
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_2676))
									{
										HUD::REMOVE_BLIP(&uLocal_2676);
									}
									uLocal_2676 = func_13(iLocal_2678);
									func_12(1);
									GlobalFunc_571(0, 157);
								}
								Local_2916[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						GlobalFunc_571(0, 157);
						Local_2916[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							TASK::REQUEST_WAYPOINT_RECORDING("arm2_30");
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_30"))
							{
								if (func_87(29))
								{
									TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("arm2_30", 1, 1065353216, 1056964608);
									TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES("arm2_30", 2);
									Local_2916[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_87(29))
							{
								TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("arm2_30", 0, 1065353216, 1056964608);
								Local_2916[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
						{
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(0, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					AUDIO::PLAY_SOUND_FROM_COORD(uLocal_2667, "FarmhouseFire_Ignite", Local_2668, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					AUDIO::START_AUDIO_SCENE("CHI_2_POUR_GAS");
					Local_2916[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE", 0);
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE_BG", 0);
							break;
					}
					break;
				
				case 39:
					switch (Local_2916[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2916[iParam0 /*10*/].f_7 = func_18(4);
							Local_2916[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (GlobalFunc_713(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && GlobalFunc_156(Local_754[Local_2916[iParam0 /*10*/].f_7 /*33*/], PLAYER::PLAYER_PED_ID(), 1) > 100f)
							{
								iVar16 = func_18(4);
								GlobalFunc_589(&(Local_754[iVar16 /*33*/].f_25));
								if (!PED::IS_PED_INJURED(Local_754[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_754[iVar16 /*33*/], 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[iVar16 /*33*/]));
								}
								Local_754[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								GlobalFunc_589(&(Local_754[iVar16 /*33*/].f_25));
								if (!PED::IS_PED_INJURED(Local_754[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_754[iVar16 /*33*/], 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[iVar16 /*33*/]));
								}
								Local_754[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!PED::IS_PED_INJURED(Local_754[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_754[iVar16 /*33*/], 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[iVar16 /*33*/]));
								}
								GlobalFunc_589(&(Local_754[iVar16 /*33*/].f_25));
								Local_754[iVar16 /*33*/] = 0;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2506, 0))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2506);
								}
								Local_2916[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_101(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						PED::SET_PED_ACCURACY(Local_754[24 /*33*/], 100);
						if (!PED::IS_PED_INJURED(Local_754[15 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_754[15 /*33*/], 100);
						}
						if (!PED::IS_PED_INJURED(Local_754[16 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_754[16 /*33*/], 100);
						}
						if (!PED::IS_PED_INJURED(Local_754[17 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_754[17 /*33*/], 100);
						}
						TASK::TASK_COMBAT_PED(Local_754[24 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_754[24 /*33*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_754[24 /*33*/], 200);
						Local_2916[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_2916[iParam0 /*10*/].f_6 == -1)
			{
				Local_2916[iParam0 /*10*/].f_3 = 1;
				Local_2916[iParam0 /*10*/].f_6 = 0;
				Local_2916[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_161()//Position - 0x162B3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_443)
	{
		if (!GlobalFunc_100(Local_443[iVar0 /*5*/], 0f, 0f, 0f))
		{
			FIRE::STOP_FIRE_IN_RANGE(Local_443[iVar0 /*5*/], 4f);
			MISC::CLEAR_AREA(Local_443[iVar0 /*5*/], 2f, 1, 0, 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_754)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar1 /*33*/]))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_754[iVar1 /*33*/], 0) };
					if (SYSTEM::VDIST2(Var2, Local_443[iVar0 /*5*/]) < 2f && Var2.f_2 > 43.9f)
					{
						PED::DELETE_PED(&(Local_754[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}


void func_163(bool bParam0)//Position - 0x1638E
{
	int iVar0;
	
	bLocal_264 = true;
	iLocal_268 = 0;
	iLocal_266 = -1;
	iLocal_442 = 0;
	iLocal_442 = 0;
	iLocal_436 = 0;
	if (bParam0 == 0)
	{
		iLocal_261 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_443)
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_443[iVar0 /*5*/], 1f);
		if (!HUD::DOES_BLIP_EXIST(Local_443[iVar0 /*5*/].f_3))
		{
			if (!GlobalFunc_100(Local_443[iVar0 /*5*/], 0f, 0f, 0f))
			{
				iLocal_268++;
				Local_443[iVar0 /*5*/].f_3 = GlobalFunc_5104(Local_443[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_443[iVar0 /*5*/].f_3, 1);
				HUD::SET_BLIP_SCALE(Local_443[iVar0 /*5*/].f_3, 0.4f);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_443[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					HUD::SET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3, 0);
				}
				HUD::SET_BLIP_COLOUR(Local_443[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_443[iVar0 /*5*/] = { HUD::GET_BLIP_COORDS(Local_443[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				HUD::SET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				HUD::SET_BLIP_ALPHA(Local_443[iVar0 /*5*/].f_3, 255);
			}
			iLocal_268++;
		}
		Local_443[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_280)
	{
		Local_280[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_280[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}





int func_168()//Position - 0x165CA
{
	if (((((PAD::GET_CONTROL_VALUE(2, 30) != 127 || PAD::GET_CONTROL_VALUE(2, 31) != 127) || PAD::IS_CONTROL_PRESSED(2, 24)) || PAD::IS_CONTROL_PRESSED(2, 25)) || PAD::GET_CONTROL_VALUE(2, 2) != 127) || PAD::GET_CONTROL_VALUE(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)//Position - 0x1662C
{
	if (Local_2916[iParam0 /*10*/] == iParam1)
	{
		return Local_2916[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_170(int iParam0, int iParam1)//Position - 0x1664D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_3119[0 /*8*/] != iParam0 && Local_3119[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_3119)
		{
			if (iVar1 <= iVar0)
			{
				Local_3119[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_3119[iVar1 /*8*/].f_1 = 1;
				Local_3119[iVar1 /*8*/].f_2 = 0;
				Local_3119[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_3119[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_3119)
	{
		switch (Local_3119[iVar3 /*8*/])
		{
			case 2:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (Local_3119[iVar3 /*8*/].f_4 == 0)
					{
						if (GlobalFunc_663("FRMCHSE_1", 0, 0))
						{
							Local_3119[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!GlobalFunc_663("FRMCHSE_1", 0, 0))
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (func_156(7))
					{
						if (MISC::HAS_BULLET_IMPACTED_IN_AREA(2493.155f, 4970.315f, 43.88038f, 3.25f, 1, 1) || MISC::IS_BULLET_IN_AREA(2493.155f, 4970.315f, 43.88038f, 3.25f, 1))
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_3119[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					switch (Local_3119[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_3119[iVar3 /*8*/].f_5 = func_18(8);
							Local_3119[iVar3 /*8*/].f_6 = func_18(9);
							Local_3119[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_3119[iVar3 /*8*/].f_5 != -1 && Local_3119[iVar3 /*8*/].f_6 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_754[Local_3119[iVar3 /*8*/].f_5 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_754[Local_3119[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (PED::IS_PED_INJURED(Local_754[Local_3119[iVar3 /*8*/].f_5 /*33*/]) || PED::IS_PED_INJURED(Local_754[Local_3119[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_3119[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_52)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
					Local_3119[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_8_BasementRm"))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0, 1, 0))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (func_87(12))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, 1, 0))
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3119[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_3119[iVar3 /*8*/].f_5 != -1)
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(Local_754[Local_3119[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (PED::IS_PED_INJURED(Local_754[Local_3119[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (GlobalFunc_713(Local_754[Local_3119[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 1) < 3f)
								{
									Local_3119[iVar3 /*8*/].f_2 = 1;
									Local_3119[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_3119[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					switch (Local_3119[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_3119[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_754)
							{
								if (!PED::IS_PED_INJURED(Local_754[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_754[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_754;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_3119[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_3119[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_91(10, 0);
							}
							else
							{
								func_91(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (func_87(9))
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_754)
						{
							if (Local_754[iVar7 /*33*/].f_1 == 1)
							{
								if (!PED::IS_PED_INJURED(Local_754[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_3119[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_754;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar9)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar9)))
							{
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
								{
									Local_3119[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_3119[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!PED::IS_PED_INJURED(Local_754[15 /*33*/]))
					{
						if (GlobalFunc_713(Local_754[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_754[16 /*33*/]))
					{
						if (GlobalFunc_713(Local_754[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_754[17 /*33*/]))
					{
						if (GlobalFunc_713(Local_754[17 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_3119[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!PED::IS_PED_INJURED(Local_754[4 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_754[4 /*33*/]))
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						if (!PED::IS_PED_INJURED(Local_754[5 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_754[5 /*33*/]))
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						if (!PED::IS_PED_INJURED(Local_754[7 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_754[7 /*33*/]))
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						Local_3119[iVar3 /*8*/].f_5 = MISC::GET_GAME_TIMER() + 8000;
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2506, 0))
						{
							if (GlobalFunc_742(ENTITY::GET_ENTITY_COORDS(iLocal_2506, 1), 5f, 150f))
							{
								Local_3119[iVar3 /*8*/].f_6 = (Local_3119[iVar3 /*8*/].f_6 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							}
						}
						if (Local_3119[iVar3 /*8*/].f_6 > 1500)
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
						if (MISC::GET_GAME_TIMER() > Local_3119[iVar3 /*8*/].f_5)
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						if (OBJECT::DOES_PICKUP_EXIST(uLocal_2674))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_2674))
							{
								Local_3119[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (OBJECT::DOES_PICKUP_EXIST(uLocal_2674))
						{
							if (!OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_2674))
							{
								if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_3119[iVar3 /*8*/].f_2 = 1;
								}
								Local_3119[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_56 && !bLocal_52)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0, 1, 0))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0, 1, 0))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0, 1, 0))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_55)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
					Local_3119[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, 1, 0))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
						{
							Local_3119[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				switch (Local_3119[iVar3 /*8*/].f_5)
				{
					case 0:
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
						{
							Local_3119[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_3119[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_3119[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_3119[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						GlobalFunc_571(0, 157);
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_443[0 /*5*/].f_4 == 1)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (PAD::IS_CONTROL_PRESSED(0, 24))
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!FIRE::IS_EXPLOSION_IN_ANGLED_AREA(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_174())
						{
							iVar12 = func_173();
							if (iVar12 <= 17)
							{
								func_91(37, 1);
							}
							else
							{
								Local_3119[iVar3 /*8*/].f_2 = 1;
							}
							Local_3119[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (func_172(17))
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_171())
				{
					if (!func_174())
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_3119[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3119[iVar3 /*8*/].f_5 = MISC::GET_GAME_TIMER() + 30000;
						Local_3119[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (MISC::GET_GAME_TIMER() > Local_3119[iVar3 /*8*/].f_5)
						{
							Local_3119[iVar3 /*8*/].f_2 = 1;
							Local_3119[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_147(1, 49))
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (!Local_3119[iVar3 /*8*/].f_2)
				{
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_3119[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_3119[iVar3 /*8*/].f_2 = 0;
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					Local_3119[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_171()//Position - 0x175E6
{
	if (iLocal_436 == 1)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x175FA
{
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_443[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0x1761D
{
	return iLocal_279;
}

int func_174()//Position - 0x17628
{
	int iVar0;
	
	iVar0 = (Local_443 - 1);
	while (iVar0 >= 0)
	{
		if (Local_443[iVar0 /*5*/].f_4)
		{
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_443[iVar0 /*5*/], 0.6f) > 0)
			{
				Local_276 = { Local_443[iVar0 /*5*/] };
				iLocal_279 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_175()//Position - 0x17687
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::_0x27CFB1B1E078CB2D();
	if ((GlobalFunc_75() && iLocal_2511 > 0) && MISC::GET_GAME_TIMER() > iLocal_2640)
	{
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			func_28(28, 1);
		}
		iLocal_3689 = 0;
		while (!func_193())
		{
			func_28(32322, 1);
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2474.97f, 4946.047f, 44.0297f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 230.6937f);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		GlobalFunc_8380(0, 1, 1, 0);
		CAM::DESTROY_ALL_CAMS(0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		HUD::CLEAR_PRINTS();
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_2671 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_2639 = 0;
		iLocal_2644 = iLocal_2644;
		iLocal_2644 = 99;
		iLocal_2511 = 99;
		iLocal_2453 = 3;
		fLocal_2452 = 10000f;
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		AUDIO::STOP_STREAM();
		RECORDING::_0x81CBAE94390F9F89();
		bLocal_2646 = true;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_2511)
	{
		case 0:
			func_193();
			bLocal_2646 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_443[iVar0 /*5*/] = { Local_443[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_POUR_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("CHI_2_POUR_GAS");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOT_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOT_GAS");
			}
			AUDIO::START_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
			iLocal_2640 = MISC::GET_GAME_TIMER() + 1000;
			MISC::CLEAR_AREA(2570.53f, 4982.057f, 50.6819f, 100f, 1, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			func_81(0);
			iLocal_3490 = 0;
			func_81(1);
			HUD::CLEAR_PRINTS();
			GlobalFunc_10064(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2455.941f, 4952.801f, 44.112f, 1, 0, 0, 1);
			}
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
			STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
			STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_methhead_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_754)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar1 /*33*/]))
				{
					PED::DELETE_PED(&(Local_754[iVar1 /*33*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar1 /*33*/].f_20))
				{
					OBJECT::DELETE_OBJECT(&(Local_754[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_2511++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			iLocal_2511++;
			break;
	}
	if (iLocal_2341)
	{
		iLocal_2341 = 0;
		iVar2 = 0;
		while (iVar2 < Local_2379)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_2342)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_2379)
	{
		if (iLocal_2454[iVar2])
		{
			iLocal_2454[iVar2] = 0;
			Local_2379[iVar2 /*18*/] = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Local_2379[iVar2 /*18*/].f_3 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			Local_2379[iVar2 /*18*/].f_14 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
		}
		if (iLocal_2459[iVar2])
		{
			iLocal_2459[iVar2] = 0;
			Local_2379[iVar2 /*18*/].f_6 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Local_2379[iVar2 /*18*/].f_9 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			Local_2379[iVar2 /*18*/].f_15 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
		}
		iVar2++;
	}
	if (iLocal_2339)
	{
		iLocal_2339 = 0;
		bLocal_2340 = false;
		iLocal_2672 = 0;
		MISC::CLEAR_AREA(2431.097f, 4967.043f, 41.3476f, 20f, 1, 0, 0, 0);
		func_184();
	}
	if (!bLocal_2340)
	{
		if (STREAMING::IS_SRL_LOADED())
		{
			STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
			STREAMING::BEGIN_SRL();
			iLocal_2453 = -1;
			CAM::DESTROY_ALL_CAMS(0);
			GlobalFunc_8380(1, 1, 1, 0);
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			bLocal_2340 = true;
			Local_2342[0 /*6*/] = 0;
			Local_2342[1 /*6*/] = 0;
			Local_2342[2 /*6*/] = 0;
			Local_2342[3 /*6*/] = 0;
			Local_2342[0 /*6*/].f_4 = 0;
			Local_2342[0 /*6*/].f_5 = 0;
			Local_2342[1 /*6*/].f_4 = 0;
			Local_2342[1 /*6*/].f_5 = 0;
			Local_2342[2 /*6*/].f_4 = 0;
			Local_2342[2 /*6*/].f_5 = 0;
			Local_2342[3 /*6*/].f_4 = 0;
			Local_2342[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			AUDIO::PLAY_STREAM_FRONTEND();
			RECORDING::_0x48621C9FCA3EBD28(4);
			switch (iLocal_2647)
			{
				case 3:
					SYSTEM::SETTIMERA(0);
					break;
				
				case 2:
					Local_2342[0 /*6*/] = 1;
					Local_2342[1 /*6*/] = 1;
					SYSTEM::SETTIMERA(10900);
					iLocal_2453 = 2;
					fLocal_2452 = 10000f;
					break;
				
				case 1:
					Local_2342[0 /*6*/] = 1;
					SYSTEM::SETTIMERA(6400);
					iLocal_2453 = 1;
					fLocal_2452 = 10000f;
					break;
			}
			iLocal_2504 = 0;
		}
	}
	if (bLocal_2340)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	if (bLocal_2340)
	{
		fLocal_2452 = (fLocal_2452 + SYSTEM::TIMESTEP());
		if (iLocal_2453 == -1 || ((iLocal_2453 != -1 && iLocal_2453 < 4) && fLocal_2452 > (Local_2379[iLocal_2453 /*18*/].f_13 / 1000f)))
		{
			iLocal_2453++;
			if (iLocal_2453 == 3)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
				{
					uLocal_2636 = CAM::CREATE_CAMERA(964613260, 1);
					uLocal_2637 = PED::CREATE_SYNCHRONIZED_SCENE(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2636, uLocal_2637, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_2637, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					func_184();
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
					fLocal_2452 = 0f;
				}
			}
			else if (iLocal_2453 < 4)
			{
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_2636 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_2379[iLocal_2453 /*18*/], Local_2379[iLocal_2453 /*18*/].f_3, Local_2379[iLocal_2453 /*18*/].f_14, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_2636, Local_2379[iLocal_2453 /*18*/].f_6, Local_2379[iLocal_2453 /*18*/].f_9, Local_2379[iLocal_2453 /*18*/].f_15, SYSTEM::FLOOR(Local_2379[iLocal_2453 /*18*/].f_12), Local_2379[iLocal_2453 /*18*/].f_16, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (iLocal_2453 < 2)
				{
					func_183(Local_2379[iLocal_2453 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_183(Local_2379[iLocal_2453 /*18*/].f_17, 1, 0);
				}
				fLocal_2452 = 0f;
			}
			else if (!bLocal_2338)
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (GlobalFunc_1720() && !bLocal_2646)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_702(0, 0, 1);
				AUDIO::STOP_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 9);
				MISC::SET_TIME_SCALE(1f);
				STREAMING::END_SRL();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					while (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671) != 10)
					{
						func_28(29, 1);
					}
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				RECORDING::_0x81CBAE94390F9F89();
				func_176(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_2342)
		{
			if (!Local_2342[iVar3 /*6*/])
			{
				if (iLocal_2453 == Local_2342[iVar3 /*6*/].f_1 && fLocal_2452 > (Local_2342[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_2342[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_2504 = 0;
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/], 0);
										Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2342[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/] + Local_2464[iLocal_2504 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_2504++;
										if (iLocal_2504 >= 12)
										{
											Local_2342[iVar3 /*6*/].f_4 = 10;
											Local_2342[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
											Local_2342[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/], 0);
										Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										if (iLocal_2504 == 2)
										{
											Local_2342[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_2342[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/] + Local_2464[iLocal_2504 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(Local_2464[iLocal_2504 /*3*/] + Local_2464[iLocal_2504 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2342[iVar3 /*6*/].f_4 = 4;
										iLocal_2504 = 3;
									}
									break;
								
								case 4:
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/], 0);
										func_122(Local_2464[iLocal_2504 + 1 /*3*/], 0);
										Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2342[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/] + Local_2464[iLocal_2504 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(Local_2464[iLocal_2504 + 1 /*3*/] + Local_2464[iLocal_2504 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2342[iVar3 /*6*/].f_4 = 6;
										iLocal_2504 = 5;
									}
									break;
								
								case 6:
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										func_122(Local_2464[iLocal_2504 /*3*/], 0);
										func_122(Local_2464[iLocal_2504 + 1 /*3*/], 0);
										Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2342[iVar3 /*6*/].f_4 = 2;
										iLocal_2504 = 7;
									}
									break;
							}
							break;
						
						case 1:
							FIRE::ADD_EXPLOSION(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, 1, 0, 1065353216);
							Local_2342[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_2672 = 1;
							Local_2342[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (CAM::DOES_CAM_EXIST(uLocal_2636))
							{
								CAM::SHAKE_CAM(uLocal_2636, "LARGE_EXPLOSION_SHAKE", fLocal_2638);
								CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_2636, 0.1f);
								Local_2342[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_2342[iVar3 /*6*/].f_4)
							{
								case 0:
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2473.208f, 4947.625f, 44.0664f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 223.493f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
									if (GlobalFunc_1720())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 0, 0);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
									}
									Local_2342[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_2342[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_2673 = 1f;
									Local_2342[iVar3 /*6*/].f_4++;
									Local_2342[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 1300;
									AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_2673 = (fLocal_2673 - (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_2673 < 0.2f)
									{
										fLocal_2673 = 0.2f;
									}
									MISC::SET_TIME_SCALE(fLocal_2673);
									if (MISC::GET_GAME_TIMER() > Local_2342[iVar3 /*6*/].f_5)
									{
										Local_2342[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_2673 = (fLocal_2673 + (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_2673 > 1f)
									{
										fLocal_2673 = 1f;
										Local_2342[iVar3 /*6*/].f_4++;
										Local_2342[iVar3 /*6*/] = 1;
									}
									AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
									MISC::SET_TIME_SCALE(fLocal_2673);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_176(int iParam0)//Position - 0x18417
{
	func_180();
	func_179();
	func_178();
	func_177();
	if (iParam0 == 11)
	{
		iLocal_2510++;
	}
	else
	{
		iLocal_2510 = iParam0;
	}
}

void func_177()//Position - 0x18446
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3357)
	{
		Local_3357[iVar0 /*7*/] = 0;
		Local_3357[iVar0 /*7*/].f_1 = 0;
		Local_3357[iVar0 /*7*/].f_3 = 0;
		Local_3357[iVar0 /*7*/].f_2 = 0;
		Local_3357[iVar0 /*7*/].f_4 = 0;
		Local_3357[iVar0 /*7*/].f_5 = 0;
		Local_3357[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_178()//Position - 0x184A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2916)
	{
		if (Local_2916[iVar0 /*10*/].f_4)
		{
			Local_2916[iVar0 /*10*/].f_1 = 1;
			Local_2916[iVar0 /*10*/].f_6 = -1;
			func_160(iVar0, Local_2916[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_2916[iVar0 /*10*/] = 0;
		Local_2916[iVar0 /*10*/].f_1 = 0;
		Local_2916[iVar0 /*10*/].f_2 = 0;
		Local_2916[iVar0 /*10*/].f_3 = 0;
		Local_2916[iVar0 /*10*/].f_6 = 0;
		Local_2916[iVar0 /*10*/].f_4 = 0;
		Local_2916[iVar0 /*10*/].f_5 = 0;
		Local_2916[iVar0 /*10*/].f_7 = 0;
		Local_2916[iVar0 /*10*/].f_8 = 0;
		Local_2916[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_179()//Position - 0x1855A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3119)
	{
		Local_3119[iVar0 /*8*/] = 0;
		Local_3119[iVar0 /*8*/].f_1 = 0;
		Local_3119[iVar0 /*8*/].f_2 = 0;
		Local_3119[iVar0 /*8*/].f_3 = 0;
		Local_3119[iVar0 /*8*/].f_4 = 0;
		Local_3119[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_180()//Position - 0x185B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3336)
	{
		Local_3336[iVar0 /*4*/] = 0;
		Local_3336[iVar0 /*4*/].f_1 = 0;
		Local_3336[iVar0 /*4*/].f_2 = 0;
		Local_3336[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}



void func_183(int iParam0, bool bParam1, int iParam2)//Position - 0x1863C
{
	int iVar0;
	
	iLocal_437 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_436 = 1;
		iLocal_438 = MISC::GET_GAME_TIMER();
		iLocal_439 = iParam0 * 2;
		iLocal_441 = iLocal_439;
		if (bParam1)
		{
			iLocal_442 = 0;
		}
		else
		{
			iLocal_442 = iLocal_439;
		}
		iVar0 = 0;
		while (iVar0 < Local_443)
		{
			Local_443[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_280)
		{
			FIRE::REMOVE_SCRIPT_FIRE(Local_280[iVar0 /*5*/]);
			if (Local_280[iVar0 /*5*/].f_4 != 0)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_280[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_280[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_184()//Position - 0x186E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_280)
	{
		FIRE::REMOVE_SCRIPT_FIRE(Local_280[iVar0 /*5*/]);
		Local_280[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_163(0);
	iVar0 = 0;
	while (iVar0 < Local_443)
	{
		if (HUD::DOES_BLIP_EXIST(Local_443[iVar0 /*5*/].f_3))
		{
			HUD::REMOVE_BLIP(&(Local_443[iVar0 /*5*/].f_3));
		}
		Local_443[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_268 = -1;
}









int func_193()//Position - 0x1895E
{
	switch (iLocal_3689)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent001"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent002"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent003"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent004"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent005"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent006"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent007"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent008"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent009"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent010"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent011"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent012"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent013"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent014"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_3689++;
			break;
		
		case 1:
			if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent")) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent001"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent002"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent003"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent004"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent005"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent006"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent007"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent008"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent009"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent010"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent011"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent012"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent013"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent014"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}


void func_195()//Position - 0x18B2D
{
	GRAPHICS::_0x27CFB1B1E078CB2D();
	func_170(28, 45);
	func_149(0, 7, 0, 0, 1, 0, 1, 0);
	func_149(1, 8, 2, 29, 1, 0, 1, 0);
	func_149(2, 9, 2, 35, 5, 34, 1, 0);
	func_149(3, 10, 2, 42, 1, 0, 1, 0);
	func_157(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_157(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_157(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_197(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_160(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_160(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_160(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_196(0, 2, 33, 5, 34);
	func_196(4, 2, 43, 1, 0);
	func_196(2, 2, 39, 1, 0);
	if (iLocal_2647 == 0)
	{
		if (func_87(37) && !func_87(44))
		{
			iLocal_2647 = 3;
		}
		if (func_87(41) && !func_87(44))
		{
			iLocal_2645 = 1;
			iLocal_2647 = 1;
		}
		if (func_169(10, 11) == 2)
		{
			iLocal_2647 = 2;
			iLocal_2645 = 1;
		}
	}
	func_160(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_87(37) && func_87(38)) || iLocal_2645) && func_169(13, 10) == 10) && !GlobalFunc_5664("CHI2_light"))
	{
		func_196(1, 2, 40, 1, 0);
		if (HUD::DOES_BLIP_EXIST(uLocal_2676))
		{
			HUD::REMOVE_BLIP(&uLocal_2676);
		}
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		func_12(1);
		func_176(11);
	}
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18D87
{
	if (func_152(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_130("CHFAIL1");
				break;
			
			case 1:
				func_130("FRMSOON");
				break;
			
			case 2:
				func_130("FRMTRAI");
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]))
				{
					if (PED::IS_PED_INJURED(Local_754[11 /*33*/]))
					{
						func_130("FRMCHI");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_754[10 /*33*/]))
				{
					if (PED::IS_PED_INJURED(Local_754[10 /*33*/]))
					{
						func_130("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_130("CHFAIL2");
				break;
			
			case 5:
				func_130("FRMGASF");
				break;
			}
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x18E4F
{
	if (!Local_3357[iParam0 /*7*/].f_1)
	{
		if (func_198(iParam2, iParam3))
		{
			func_157(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_198(int iParam0, int iParam1)//Position - 0x18E85
{
	if (Local_3357[iParam0 /*7*/] == iParam1)
	{
		if (Local_3357[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_3357[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_199()//Position - 0x18EB8
{
	func_170(5, 31);
	func_149(0, 2, 0, 0, 1, 0, 1, 0);
	func_149(1, 3, 2, 8, 1, 0, 1, 0);
	func_149(2, 5, 2, 9, 1, 0, 1, 0);
	func_149(3, 11, 0, 0, 1, 0, 1, 0);
	func_149(4, 4, 2, 12, 1, 0, 1, 0);
	func_160(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_160(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_160(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_160(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_160(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_160(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_160(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_160(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_160(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_160(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_160(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_157(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_157(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_157(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_157(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_157(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_157(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_157(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_157(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_157(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_157(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_196(4, 2, 24, 1, 0);
	func_196(5, 2, 30, 1, 0);
	if (func_87(11) && func_87(29))
	{
		func_176(7);
	}
}

void func_200()//Position - 0x1918D
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	VEHICLE::_0x9A75585FB2E54FAD(2004.447f, 3076.807f, 46.6069f, 10f);
	CUTSCENE::_0xE36A98D8AB3D3C66(1);
	if (((GlobalFunc_75() && iLocal_2511 > 0) && iLocal_2511 < 7) && MISC::GET_GAME_TIMER() > iLocal_2640)
	{
		iLocal_2511 = 10;
		iLocal_2639 = 0;
		bLocal_2646 = true;
	}
	if (iLocal_2511 < 10)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	if (iLocal_2879)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_2511)
	{
		case 0:
			if (STREAMING::IS_SRL_LOADED())
			{
				CUTSCENE::REQUEST_CUTSCENE("CHI_2_MCS_5", 8);
				iLocal_2878 = 1;
				bLocal_2646 = false;
				STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
				STREAMING::BEGIN_SRL();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				iLocal_2882 = 0;
				iLocal_2879 = 1;
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar3 = GlobalFunc_1695(2458.223f, 4986.042f, 49.05241f, Var0, 1);
				if (fVar3 > 180f)
				{
					fVar3 = (fVar3 - 360f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0) && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4))) && ENTITY::IS_ENTITY_IN_AIR(iVar4)) || ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0) && VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4))) && ENTITY::IS_ENTITY_IN_AIR(iVar4)))
				{
					if (fVar3 < GlobalFunc_569(-2.5f) && fVar3 > GlobalFunc_569(0.5f))
					{
						iLocal_2511 = 6;
						SYSTEM::SETTIMERA(30000);
						STREAMING::SET_SRL_TIME(30000f);
						iLocal_2639 = 36000;
					}
					else
					{
						iLocal_2511 = 7;
						SYSTEM::SETTIMERA(36000);
						STREAMING::SET_SRL_TIME(36000f);
						iLocal_2639 = 42000;
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
						{
							if (!(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4)) && ENTITY::IS_ENTITY_IN_AIR(iVar4)) && !(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)) && ENTITY::IS_ENTITY_IN_AIR(iVar4)))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar4);
							}
						}
					}
					if (fVar3 < GlobalFunc_569(-1.33f) && fVar3 > GlobalFunc_569(-1.92f))
					{
						iLocal_2511 = 1;
						SYSTEM::SETTIMERA(0);
						STREAMING::SET_SRL_TIME(0f);
						iLocal_2639 = 6000;
					}
					else if (fVar3 < GlobalFunc_569(0.96f) && fVar3 > GlobalFunc_569(-1.33f))
					{
						iLocal_2511 = 2;
						SYSTEM::SETTIMERA(6000);
						STREAMING::SET_SRL_TIME(6000f);
						iLocal_2639 = 12000;
					}
					else if (fVar3 < GlobalFunc_569(2.29f) && fVar3 > GlobalFunc_569(0.96f))
					{
						iLocal_2511 = 3;
						SYSTEM::SETTIMERA(12000);
						STREAMING::SET_SRL_TIME(12000f);
						iLocal_2639 = 18000;
					}
					else if (fVar3 < GlobalFunc_569(-2.81f) || fVar3 > GlobalFunc_569(2.29f))
					{
						iLocal_2511 = 4;
						SYSTEM::SETTIMERA(18000);
						STREAMING::SET_SRL_TIME(18000f);
						iLocal_2639 = 24000;
					}
					else
					{
						SYSTEM::SETTIMERA(24000);
						STREAMING::SET_SRL_TIME(24000f);
						iLocal_2639 = 30000;
						iLocal_2511 = 5;
					}
				}
				iLocal_2880 = 1;
				CAM::DESTROY_ALL_CAMS(0);
				GlobalFunc_5652(&Local_2682, 1, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_259 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_751 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_259) };
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_259, 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_259, 0);
				}
				AUDIO::PLAY_STREAM_FRONTEND();
				if (iLocal_2511 == 1)
				{
					iLocal_2882 = 1;
					GlobalFunc_10159(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar4, 0, 1);
						}
					}
					MISC::CLEAR_AREA(2445.139f, 4978.642f, 52.1489f, 150f, 1, 1, 0, 0);
					MISC::CLEAR_AREA(2578.523f, 4982.284f, 51.4416f, 13f, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2578.419f, 4981.901f, 50.587f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 49.2184f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar5);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_ACHIEVE_HEADING(0, 88.7065f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar5);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar5);
					TASK::CLEAR_SEQUENCE_TASK(&uVar5);
					uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					CAM::SET_CAM_FOV(uLocal_2636, 34.9f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
				}
				else
				{
					switch (iLocal_2511)
					{
						case 2:
							uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							CAM::SET_CAM_FOV(uLocal_2636, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
							break;
						
						case 3:
							uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							CAM::SET_CAM_FOV(uLocal_2636, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
							break;
						
						case 4:
							uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							CAM::SET_CAM_FOV(uLocal_2636, 29.8f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
							break;
						
						case 5:
							uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							CAM::SET_CAM_FOV(uLocal_2636, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
							break;
						
						case 6:
							uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							CAM::SET_CAM_FOV(uLocal_2636, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
							break;
						
						case 7:
							uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							CAM::SET_CAM_FOV(uLocal_2636, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
							break;
						}
				}
				if (iLocal_2511 < 6)
				{
					CAM::SHAKE_CAM(uLocal_2636, "Hand_shake", 0.2f);
				}
				else
				{
					CAM::SHAKE_CAM(uLocal_2636, "Hand_shake", 0.7f);
				}
				CAM::SET_CAM_ACTIVE(uLocal_2636, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				AUDIO::START_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
				GlobalFunc_7632(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 32);
				GlobalFunc_8380(1, 1, 1, 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				iLocal_2640 = MISC::GET_GAME_TIMER() + 1000;
				iVar6 = 0;
				while (iVar6 < Local_754)
				{
					if (!PED::IS_PED_INJURED(Local_754[iVar6 /*33*/]))
					{
						AUDIO::STOP_PED_SPEAKING(Local_754[iVar6 /*33*/], 1);
					}
					iVar6++;
				}
				iLocal_2641 = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_2641, joaat("weapon_microsmg"), -1, 1, 1);
				if (!PED::IS_PED_INJURED(iLocal_2641))
				{
					func_93();
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					TASK::TASK_PAUSE(0, 500);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 1193033728);
					func_92(&iLocal_2641, 1);
				}
				iLocal_2508 = VEHICLE::CREATE_VEHICLE(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 1, 1);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_2511 = 3;
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > iLocal_2639)
			{
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				CAM::SET_CAM_FOV(uLocal_2636, 34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
				CAM::SHAKE_CAM(uLocal_2636, "Hand_shake", 0.5f);
				iLocal_2639 += 3500;
				iLocal_2511++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > iLocal_2639)
			{
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				CAM::SET_CAM_FOV(uLocal_2636, 34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
				CAM::SHAKE_CAM(uLocal_2636, "Hand_shake", 0.5f);
				iLocal_2639 += 3000;
				iLocal_2511++;
			}
			break;
		
		case 5:
			iLocal_2881 = 1;
			if (SYSTEM::TIMERA() > iLocal_2639)
			{
				iLocal_2881 = 1;
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_2636 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_2636, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				CAM::SET_CAM_FOV(uLocal_2636, 37.34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2636, 0);
				CAM::SHAKE_CAM(uLocal_2636, "Hand_shake", 0.5f);
				iLocal_2639 += 2500;
				iLocal_2511++;
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > iLocal_2639)
			{
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(6.818f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2508, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2508, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					iLocal_2878 = 0;
					iLocal_2511 = 11;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_259) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_259, 0))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_259);
			}
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING()) || (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1)))
			{
				iLocal_2511++;
			}
			break;
		
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_259) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_259, 0))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_259);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING()) || (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1)))
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (GlobalFunc_1720() && !bLocal_2646)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				RECORDING::_0x81CBAE94390F9F89();
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.3f, 1065353216);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(6.818f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_7632(0);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle")) < 15)
					{
						WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 50);
					}
				}
				GlobalFunc_8380(0, 1, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2641))
				{
					PED::DELETE_PED(&iLocal_2641);
				}
				iLocal_2884 = func_18(4);
				if (iLocal_2884 != -1)
				{
					if (!PED::IS_PED_INJURED(Local_754[iLocal_2884 /*33*/]))
					{
						PED::DELETE_PED(&(Local_754[iLocal_2884 /*33*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_754[iLocal_2884 /*33*/].f_20))
					{
						OBJECT::DELETE_OBJECT(&(Local_754[iLocal_2884 /*33*/].f_20));
					}
					Local_1618[iLocal_2884 /*24*/].f_3 = 1;
					Local_754[iLocal_2884 /*33*/].f_5 = 0;
					Local_754[iLocal_2884 /*33*/].f_14 = 0;
					Local_754[iLocal_2884 /*33*/].f_3 = 2;
				}
				iLocal_2885 = func_18(5);
				if (iLocal_2885 != -1)
				{
					if (!PED::IS_PED_INJURED(Local_754[iLocal_2885 /*33*/]))
					{
						PED::DELETE_PED(&(Local_754[iLocal_2885 /*33*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_754[iLocal_2885 /*33*/].f_20))
					{
						OBJECT::DELETE_OBJECT(&(Local_754[iLocal_2885 /*33*/].f_20));
					}
					Local_1618[iLocal_2885 /*24*/].f_3 = 1;
					Local_754[iLocal_2885 /*33*/].f_5 = 0;
					Local_754[iLocal_2885 /*33*/].f_14 = 0;
					Local_754[iLocal_2885 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!PED::IS_PED_INJURED(iLocal_2642))
				{
					PED::DELETE_PED(&iLocal_2642);
				}
				if (!PED::IS_PED_INJURED(iLocal_2643))
				{
					PED::DELETE_PED(&iLocal_2643);
				}
				if (func_68(iLocal_2508))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_2508);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2681))
				{
					OBJECT::DELETE_OBJECT(&iLocal_2681);
				}
				func_201();
				iLocal_750 = 0;
				func_27();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
				iVar7 = 0;
				while (iVar7 < Local_754)
				{
					if (!PED::IS_PED_INJURED(Local_754[iVar7 /*33*/]))
					{
						AUDIO::STOP_PED_SPEAKING(Local_754[iVar7 /*33*/], 0);
					}
					iVar7++;
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.3f, 1065353216);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_259))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_259, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_259, 0);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_259)))
						{
							ENTITY::SET_ENTITY_VELOCITY(iLocal_259, Local_751);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_259, -1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_259, 1, 1);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_259)))
						{
							ENTITY::SET_ENTITY_ROTATION(iLocal_259, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_259), 2, 1);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_259);
							ENTITY::SET_ENTITY_VELOCITY(iLocal_259, 1f, 1f, 1f);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_259, -1);
						}
						if (iLocal_2882 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_259, -1);
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_259, 1);
					}
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
				STREAMING::END_SRL();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				func_176(11);
			}
			break;
	}
}

void func_201()//Position - 0x1A20A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2506))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_2506);
	}
	iVar0 = 0;
	while (iVar0 < Local_754)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/]))
		{
			PED::DELETE_PED(&(Local_754[iVar0 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
		{
			OBJECT::DELETE_OBJECT(&(Local_754[iVar0 /*33*/].f_20));
		}
		Local_754[iVar0 /*33*/].f_3 = 0;
		Local_754[iVar0 /*33*/].f_4 = 0;
		Local_754[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_754[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_754[iVar0 /*33*/].f_2 = 25;
		Local_754[iVar0 /*33*/].f_5 = 0;
		Local_754[iVar0 /*33*/].f_12 = 0f;
		Local_754[iVar0 /*33*/].f_13 = 0f;
		Local_754[iVar0 /*33*/].f_14 = 0;
		Local_754[iVar0 /*33*/].f_15 = 0;
		Local_754[iVar0 /*33*/].f_17 = 0;
		Local_754[iVar0 /*33*/].f_16 = 0;
		Local_754[iVar0 /*33*/].f_21 = 0;
		Local_754[iVar0 /*33*/].f_22 = 0;
		Local_1618[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_2649))
	{
		OBJECT::REMOVE_PICKUP(uLocal_2649);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2650)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_2650[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_2650[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2656)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2656[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_2656[iVar0]));
		}
		iVar0++;
	}
	func_202(&Local_1618, &uLocal_2707, cLocal_2337, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_202(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam7, int iParam8)//Position - 0x1A39E
{
	int iVar0;
	
	iLocal_56 = iLocal_56;
	uLocal_69 = fParam3;
	Local_70 = { Param4 };
	fLocal_73 = fParam7;
	Local_88 = { *uParam1 };
	cLocal_253 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam8;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_54 = 0;
	bLocal_55 = false;
	iLocal_56 = 0;
	bLocal_76 = true;
	iLocal_75 = 0;
	iLocal_57 = 0;
	iLocal_59 = 0;
	iLocal_60 = -1;
	iLocal_61 = -1;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	EVENT::BLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31);
	iLocal_51 = 0;
}













void func_215()//Position - 0x1A8FE
{
	int iVar0;
	
	func_170(1, 4);
	func_160(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_160(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 1, 2, 2, 1, 0, 1, 0);
	func_196(3, 0, 0, 1, 0);
	if ((GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0, 0, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0, 0, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Local_2682.f_5))
		{
			HUD::SET_BLIP_ROUTE(Local_2682.f_6, 0);
		}
		func_176(11);
	}
	else
	{
		switch (iLocal_2511)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_258(5, -20);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				iLocal_2511++;
				break;
			
			case 1:
				if (func_218(&Local_2682, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					RECORDING::_0x293220DA1B46CEBC(6f, 6f, 3);
					iLocal_2511++;
					GlobalFunc_5652(&Local_2682, 1, 0);
					func_31(3, 1);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (GlobalFunc_530(iVar0, 10f, 2, 1056964608, 0, 1))
					{
						if (func_216(5) > 2)
						{
							iLocal_2511++;
						}
					}
				}
				else
				{
					iLocal_2511++;
				}
				break;
			
			case 3:
				if (func_218(&Local_2682, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					func_176(11);
				}
				if (HUD::DOES_BLIP_EXIST(Local_2682.f_5))
				{
					HUD::SET_BLIP_ROUTE(Local_2682.f_6, 0);
				}
				break;
			}
	}
}

int func_216(int iParam0)//Position - 0x1ABF6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if (Local_2514[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2514[iVar0 /*6*/] == iParam0)
			{
				return Local_2514[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}


bool func_218(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x1ADBA
{
	return func_219(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_219(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x1AE0B
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
	if (func_238(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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
							*uParam0 = GlobalFunc_7056(iParam18, 0, 0);
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



















int func_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x1BE0B
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
						if (GlobalFunc_643(iVar13, uParam0))
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
								uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
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
										uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
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
												GlobalFunc_5173(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
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




















int func_258(int iParam0, int iParam1)//Position - 0x1D5DB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_2514[iVar0 /*6*/] == iParam0)
		{
			if (Local_2514[iVar0 /*6*/].f_1 == 1)
			{
				Local_2514[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_259()//Position - 0x1D61F
{
	var uVar0;
	var uVar1;
	
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2511)
	{
		case 0:
			iLocal_2505 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				STREAMING::REQUEST_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
				STREAMING::REQUEST_MODEL(joaat("ig_old_man2"));
				STREAMING::REQUEST_MODEL(joaat("ig_old_man1a"));
				STREAMING::REQUEST_MODEL(joaat("ig_janet"));
				STREAMING::REQUEST_MODEL(joaat("ig_taocheng"));
				STREAMING::REQUEST_MODEL(joaat("ig_taostranslator"));
				STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
				STREAMING::REQUEST_ANIM_DICT("missrampageintrooutro");
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				GlobalFunc_8380(1, 1, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					Local_754[14 /*33*/] = Global_86864.f_9[2];
					Local_754[13 /*33*/] = Global_86864.f_9[1];
					Local_754[11 /*33*/] = Global_86864.f_9[4];
					Local_754[10 /*33*/] = Global_86864.f_9[3];
					Local_754[12 /*33*/] = Global_86864.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_754[14 /*33*/], 1, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_754[13 /*33*/], 1, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_754[11 /*33*/], 1, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_754[10 /*33*/], 1, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_754[12 /*33*/], 1, 1);
					if (!PED::IS_PED_INJURED(Local_754[13 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_754[14 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_754[12 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_754[13 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_754[14 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]))
					{
						if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_754[12 /*33*/] = PED::CREATE_PED(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_754[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				GlobalFunc_689();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				MISC::CLEAR_AREA_OF_PEDS(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_3688 = 0;
				iLocal_2511++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				iLocal_2511++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_3688 == 0)
				{
					GlobalFunc_562(13);
					iLocal_3688++;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_754[13 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Old_Man1A", 0))
				{
					Local_754[13 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Old_Man1A", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_754[14 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Old_Man2", 0))
				{
					Local_754[14 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Old_Man2", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("tao", 0))
				{
					Local_754[11 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("tao", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_754[10 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Taos_Translator", 0))
				{
					Local_754[10 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Taos_Translator", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_754[12 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Janet", 0))
				{
					Local_754[12 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Janet", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("tao", 0))
			{
				if (!PED::IS_PED_INJURED(Local_754[11 /*33*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[11 /*33*/], iLocal_1617);
					PED::SET_PED_CAN_BE_TARGETTED(Local_754[11 /*33*/], 0);
					uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_754[11 /*33*/], uVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Taos_Translator", 0))
			{
				if (!PED::IS_PED_INJURED(Local_754[10 /*33*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_754[10 /*33*/], iLocal_1617);
					PED::SET_PED_CAN_BE_TARGETTED(Local_754[10 /*33*/], 0);
					uVar1 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_754[10 /*33*/], uVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_2505 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_68(iLocal_2505) && GlobalFunc_713(iLocal_2505, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					VEHICLE::REMOVE_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_2505));
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("missrampageintrooutro"))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.135f, 3057.467f, 46.06f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 325.4678f);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.919f, 3057.906f, 46.0567f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 337.2537f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				GRAPHICS::_0xE3E2C1B4C59DBC77(6);
				GlobalFunc_8380(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					STREAMING::LOAD_SCENE(1992.135f, 3057.467f, 46.06f);
				}
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 7f, 3);
				func_176(11);
			}
			break;
	}
}



void func_262()//Position - 0x1DE69
{
	int iVar0;
	
	switch (iLocal_2511)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("FRMCHSE", 0);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				func_28(27, 1);
			}
			GlobalFunc_173(&uLocal_2707, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_2707, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_342();
			FIRE::STOP_FIRE_IN_RANGE(2442.69f, 4970.348f, 46.33f, 30f);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 120f);
			Local_2888[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			Local_2888[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			Local_2888[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			Local_2888[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			Local_2888[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			Local_2888[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			Local_2888[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			Local_2888[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			Local_2888[8 /*3*/] = { 2435.637f, 4969.699f, 42.19639f };
			Local_443[0 /*5*/] = { 2450.376f, 4955.83f, 43.9394f };
			Local_443[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_443[2 /*5*/] = { 2449.606f, 4957.675f, 44.0646f };
			Local_443[3 /*5*/] = { 2449.739f, 4958.731f, 44.1544f };
			Local_443[4 /*5*/] = { 2450.141f, 4959.745f, 44.2487f };
			Local_443[5 /*5*/] = { 2450.685f, 4960.582f, 44.3219f };
			Local_443[6 /*5*/] = { 2451.492f, 4961.333f, 44.4439f };
			Local_443[7 /*5*/] = { 2452.174f, 4962.099f, 44.5787f };
			Local_443[8 /*5*/] = { 2452.717f, 4962.906f, 44.9141f };
			Local_443[9 /*5*/] = { 2453.35f, 4963.579f, 45.3558f };
			Local_443[10 /*5*/] = { 2453.754f, 4964.565f, 45.5766f };
			Local_443[11 /*5*/] = { 2453.226f, 4965.539f, 45.5766f };
			Local_443[12 /*5*/] = { 2452.472f, 4966.293f, 45.5766f };
			Local_443[13 /*5*/] = { 2451.869f, 4967.104f, 45.5766f };
			Local_443[14 /*5*/] = { 2451.529f, 4968.083f, 45.5766f };
			Local_443[15 /*5*/] = { 2452.327f, 4968.712f, 45.5766f };
			Local_443[16 /*5*/] = { 2452.796f, 4969.643f, 45.8107f };
			Local_443[17 /*5*/] = { 2453.261f, 4970.541f, 45.8106f };
			Local_443[18 /*5*/] = { 2453.58f, 4971.548f, 45.8104f };
			Local_443[19 /*5*/] = { 2452.808f, 4972.267f, 45.8306f };
			Local_443[20 /*5*/] = { 2452.049f, 4972.928f, 45.8306f };
			Local_443[21 /*5*/] = { 2451.241f, 4973.599f, 45.8306f };
			Local_443[22 /*5*/] = { 2450.248f, 4973.889f, 45.8306f };
			Local_443[23 /*5*/] = { 2449.207f, 4973.784f, 45.8105f };
			Local_443[24 /*5*/] = { 2448.172f, 4973.814f, 45.8106f };
			Local_443[25 /*5*/] = { 2447.153f, 4973.771f, 45.8106f };
			Local_443[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_443[27 /*5*/] = { 2445.128f, 4973.689f, 45.8106f };
			Local_443[28 /*5*/] = { 2444.256f, 4973.056f, 45.8106f };
			Local_443[29 /*5*/] = { 2443.669f, 4972.194f, 45.8106f };
			Local_443[30 /*5*/] = { 2443.119f, 4971.275f, 45.8106f };
			Local_443[31 /*5*/] = { 2442.661f, 4970.359f, 45.8106f };
			Local_443[32 /*5*/] = { 2442.267f, 4969.425f, 45.8106f };
			Local_443[33 /*5*/] = { 2441.708f, 4968.502f, 45.8306f };
			Local_443[34 /*5*/] = { 2441.264f, 4967.534f, 45.8106f };
			Local_443[35 /*5*/] = { 2440.873f, 4966.538f, 45.8106f };
			Local_443[36 /*5*/] = { 2440.382f, 4965.634f, 45.8106f };
			Local_443[37 /*5*/] = { 2439.71f, 4964.882f, 45.8106f };
			Local_443[38 /*5*/] = { 2438.933f, 4964.146f, 45.8106f };
			Local_443[39 /*5*/] = { 2438.166f, 4963.502f, 45.8106f };
			Local_443[40 /*5*/] = { 2437.555f, 4962.709f, 45.8106f };
			Local_443[41 /*5*/] = { 2436.901f, 4961.95f, 45.8106f };
			Local_443[42 /*5*/] = { 2436.075f, 4961.257f, 45.8106f };
			Local_443[43 /*5*/] = { 2435.08f, 4961.004f, 45.8118f };
			Local_443[44 /*5*/] = { 2434.066f, 4960.713f, 45.8181f };
			Local_443[45 /*5*/] = { 2433.045f, 4960.594f, 45.8192f };
			Local_443[46 /*5*/] = { 2432.065f, 4960.25f, 45.813f };
			Local_443[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_443[48 /*5*/] = { 2430.575f, 4961.574f, 45.5917f };
			Local_443[49 /*5*/] = { 2429.889f, 4962.028f, 44.9345f };
			Local_443[50 /*5*/] = { 2429.26f, 4962.595f, 44.2774f };
			Local_443[51 /*5*/] = { 2428.691f, 4963.279f, 43.6202f };
			Local_443[52 /*5*/] = { 2428.073f, 4963.911f, 42.9631f };
			Local_443[53 /*5*/] = { 2428.239f, 4964.922f, 42.9631f };
			Local_443[54 /*5*/] = { 2428.961f, 4965.455f, 42.3059f };
			Local_443[55 /*5*/] = { 2429.45f, 4966.224f, 41.8679f };
			Local_443[56 /*5*/] = { 2430.073f, 4966.82f, 41.3476f };
			Local_443[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_443[58 /*5*/] = { 2431.89f, 4966.403f, 41.3476f };
			Local_443[59 /*5*/] = { 2432.768f, 4965.902f, 41.3476f };
			Local_443[60 /*5*/] = { 2433.776f, 4965.613f, 41.3476f };
			Local_2342[0 /*6*/].f_3 = "Table Flames";
			Local_2342[0 /*6*/] = 0;
			Local_2342[1 /*6*/].f_3 = "Table Explosion";
			Local_2342[1 /*6*/] = 0;
			Local_2342[2 /*6*/].f_3 = "House Explosion";
			Local_2342[2 /*6*/] = 0;
			Local_2342[3 /*6*/].f_3 = "Cam Shake";
			Local_2342[3 /*6*/] = 0;
			Local_2342[4 /*6*/].f_3 = "Position player";
			Local_2342[4 /*6*/] = 0;
			Local_2342[5 /*6*/].f_3 = "Slow mo";
			Local_2342[5 /*6*/] = 0;
			Local_2342[0 /*6*/].f_1 = 2;
			Local_2342[0 /*6*/].f_2 = 1000f;
			Local_2342[1 /*6*/].f_1 = 2;
			Local_2342[1 /*6*/].f_2 = 4200f;
			Local_2342[2 /*6*/].f_1 = 3;
			Local_2342[2 /*6*/].f_2 = 0f;
			Local_2342[3 /*6*/].f_1 = 3;
			Local_2342[3 /*6*/].f_2 = 0f;
			Local_2342[4 /*6*/].f_1 = 3;
			Local_2342[4 /*6*/].f_2 = 3200f;
			Local_2342[5 /*6*/].f_1 = 3;
			Local_2342[5 /*6*/].f_2 = 700f;
			Local_2379[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_2379[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_2379[0 /*18*/].f_14 = 39.703f;
			Local_2379[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_2379[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_2379[0 /*18*/].f_15 = 39.703f;
			Local_2379[0 /*18*/].f_12 = 2500f;
			Local_2379[0 /*18*/].f_13 = 2500f;
			Local_2379[0 /*18*/].f_16 = 0;
			Local_2379[0 /*18*/].f_17 = 18;
			Local_2379[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_2379[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_2379[1 /*18*/].f_14 = 58.9114f;
			Local_2379[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_2379[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_2379[1 /*18*/].f_15 = 58.9114f;
			Local_2379[1 /*18*/].f_12 = 3200f;
			Local_2379[1 /*18*/].f_13 = 1900f;
			Local_2379[1 /*18*/].f_16 = 0;
			Local_2379[1 /*18*/].f_17 = 34;
			Local_2379[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_2379[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_2379[2 /*18*/].f_14 = 35.1297f;
			Local_2379[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_2379[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_2379[2 /*18*/].f_15 = 35.1297f;
			Local_2379[2 /*18*/].f_12 = 3500f;
			Local_2379[2 /*18*/].f_13 = 4500f;
			Local_2379[2 /*18*/].f_16 = 3;
			Local_2379[2 /*18*/].f_17 = 49;
			Local_2379[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_2379[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_2379[3 /*18*/].f_14 = 33.1297f;
			Local_2379[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_2379[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_2379[3 /*18*/].f_15 = 33.1297f;
			Local_2379[3 /*18*/].f_12 = 3500f;
			Local_2379[3 /*18*/].f_13 = 3500f;
			Local_2379[3 /*18*/].f_16 = 0;
			Local_2379[3 /*18*/].f_17 = -1;
			fLocal_2638 = 0.06f;
			GlobalFunc_563(1);
			Local_2464[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			Local_2464[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			Local_2464[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			Local_2464[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			Local_2464[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			Local_2464[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			Local_2464[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			Local_2464[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			Local_2464[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			Local_2464[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			Local_2464[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			Local_2464[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			Local_2464[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			Local_2273[0 /*3*/] = { 2552.692f, 4978.566f, 45.32309f };
			Local_2273[1 /*3*/] = { 2562.534f, 5013.502f, 47.46302f };
			Local_2273[2 /*3*/] = { 2553.885f, 4945.661f, 47.49305f };
			Local_2273[3 /*3*/] = { 2515.545f, 4936.428f, 42.88382f };
			Local_2273[4 /*3*/] = { 2497.318f, 4967.818f, 43.59557f };
			Local_2273[5 /*3*/] = { 2481.376f, 4951.766f, 43.99859f };
			Local_2273[6 /*3*/] = { 2522.044f, 4956.372f, 43.71605f };
			Local_2273[7 /*3*/] = { 2529.048f, 4985.627f, 43.86848f };
			Local_2273[8 /*3*/] = { 2502.503f, 4987.245f, 46.62669f };
			Local_2273[9 /*3*/] = { 2464.891f, 4939.949f, 44.25646f };
			Local_2273[10 /*3*/] = { 2447.16f, 4940.272f, 44.15766f };
			Local_2273[11 /*3*/] = { 2376.537f, 4946.399f, 41.77232f };
			Local_2273[12 /*3*/] = { 2395.232f, 4995.63f, 44.68909f };
			Local_2273[13 /*3*/] = { 2419.819f, 4991.936f, 45.36976f };
			Local_2273[14 /*3*/] = { 2436.319f, 5011.725f, 45.84694f };
			Local_2273[15 /*3*/] = { 2407.765f, 5023.079f, 47.77091f };
			Local_2273[16 /*3*/] = { 2479.016f, 5028.829f, 42.98806f };
			Local_2273[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			Local_2273[18 /*3*/] = { 2513.93f, 5039.333f, 51.02121f };
			Local_2273[19 /*3*/] = { 2477.882f, 4986.437f, 44.99511f };
			Local_2273[20 /*3*/] = { 2450.058f, 5011.858f, 44.89032f };
			func_202(&Local_1618, &uLocal_2707, cLocal_2337, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_341(&Local_2243, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_341(&Local_2246, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_341(&Local_2258, "CHI2_nope", 8, "ONEILGUARD1");
			func_341(&Local_2249, "SEETREVOR", 3, "chin2goon1");
			func_341(&Local_2252, "CHI2_hear", 8, "ONEILGUARD1");
			func_341(&Local_2255, "CHI2_hear", 8, "ONEILGUARD1");
			func_341(&Local_2261, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_341(&Local_2264, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_341(&Local_2267, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_341(&Local_2270, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_2505 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 1);
			PED::ADD_RELATIONSHIP_GROUP("TAOGROUP", &iLocal_1617);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1617, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1617);
			GlobalFunc_504(0, -1);
			TASK::SET_SCENARIO_GROUP_ENABLED("Chinese2_Lunch", 0);
			TASK::SET_SCENARIO_GROUP_ENABLED("CHINESE2_HILLBILLIES", 0);
			if (GlobalFunc_Is_Mission_Retry())
			{
				iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
				if (Global_84544 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_263(2, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					
					case 1:
						if (Global_84544 == 1)
						{
							func_263(3, 1, 0);
						}
						else
						{
							func_263(4, 1, 0);
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						break;
					
					case 2:
						func_263(6, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					
					case 3:
						func_263(7, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					
					case 4:
						if (Global_84544 == 1)
						{
							func_263(8, 1, 0);
						}
						else
						{
							func_263(9, 1, 0);
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						break;
					
					case 5:
						func_263(10, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						func_144();
						break;
				}
			}
			else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				func_263(1, 0, 1);
			}
			else
			{
				func_176(11);
			}
			break;
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2)//Position - 0x1EE45
{
	int iVar0;
	
	func_334(3);
	func_32(6, 0);
	iLocal_2511 = 0;
	iLocal_2510 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("ig_old_man2"));
			STREAMING::REQUEST_MODEL(joaat("ig_old_man1a"));
			STREAMING::REQUEST_MODEL(joaat("ig_janet"));
			STREAMING::REQUEST_MODEL(joaat("ig_taocheng"));
			STREAMING::REQUEST_MODEL(joaat("ig_taostranslator"));
			CUTSCENE::REQUEST_CUTSCENE("chinese_2_int", 8);
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("ig_old_man2")) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_old_man1a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_janet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_taocheng"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_taostranslator"))) || !CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_28(323, 1);
			}
			while (!GlobalFunc_6800(&(Local_754[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 311f);
			PED::SET_PED_COMPONENT_VARIATION(Local_754[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				GlobalFunc_5116(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_68(iLocal_2505))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2505, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2505, 50.7724f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				STREAMING::LOAD_SCENE(1992.878f, 3057.846f, 46.0568f);
			}
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			PED::SET_PED_NON_CREATION_AREA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			MISC::CLEAR_AREA(1984.997f, 3052.905f, 46.8556f, 10f, 1, 0, 0, 0);
			func_275(1, 0, bParam2);
			STREAMING::REQUEST_MODEL(joaat("ig_taocheng"));
			STREAMING::REQUEST_MODEL(joaat("ig_taostranslator"));
			STREAMING::REQUEST_MODEL(joaat("ig_old_man1a"));
			STREAMING::REQUEST_MODEL(joaat("ig_old_man2"));
			STREAMING::REQUEST_MODEL(joaat("ig_janet"));
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("ig_taocheng")) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_taostranslator"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_old_man1a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_old_man2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_janet"))) || !STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_68(iLocal_2505))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, -1);
					ENTITY::SET_ENTITY_COORDS(iLocal_2505, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2505, 50.7724f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 311f);
				}
			}
			func_28(85, 1);
			func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_169(2, 41) != 900)
			{
				func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_68(iLocal_2505))
				{
					GlobalFunc_5108(iLocal_2505, -1, 1);
				}
				else
				{
					GlobalFunc_5108(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				GlobalFunc_5116(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				STREAMING::LOAD_SCENE(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_275(0, 0, 0);
			STREAMING::PREFETCH_SRL("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!GlobalFunc_552(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!STREAMING::IS_SRL_LOADED())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				GlobalFunc_5108(0, -1, 1);
			}
			func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_147(10, 5))
			{
				func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				GlobalFunc_5116(GlobalFunc_2574(), func_270(), 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				STREAMING::LOAD_SCENE(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			func_275(0, 1, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = GlobalFunc_2284(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 1);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2505) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, 0)) && func_268())
				{
					GlobalFunc_5108(iLocal_2505, -1, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2505, 1, 1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_2505)))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2505, 15f);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_2505)))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_2505);
							ENTITY::SET_ENTITY_VELOCITY(iLocal_2505, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					GlobalFunc_5108(0, -1, 1);
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_2574(), 2570.538f, 4982.031f, 50.6239f, 1) < 10f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.538f, 4982.031f, 50.6239f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98f);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			break;
		
		case 5:
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2572.01f, 4981.678f, 50.6698f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 90.3911f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_32(5, 0);
			GlobalFunc_563(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_275(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_265(0, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				GlobalFunc_5116(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2450.871f, 4960.999f, 44.3759f, 0, 1, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 351.3911f);
				STREAMING::LOAD_SCENE(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			}
			func_275(0, 0, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			SYSTEM::WAIT(1);
			func_32(5, 0);
			GlobalFunc_563(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_265(0, 1, 1);
			if (bParam1)
			{
				GlobalFunc_5108(0, -1, 1);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				GlobalFunc_5116(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2435.319f, 4966.153f, 41.3476f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 104.2964f);
				STREAMING::LOAD_SCENE(2432.982f, 4964.823f, 41.3476f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			GlobalFunc_563(1);
			func_275(0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_2677 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.982f, 4964.823f, 41.3476f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_2677))
			{
				iLocal_2677 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_2677))
			{
				func_28(15, 1);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_2677, 1);
			INTERIOR::UNPIN_INTERIOR(iLocal_2677);
			iLocal_2677 = 0;
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_petrolcan"), 31, 0);
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			while (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_petrolcan")) || !STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_264(0, 7, 1);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 4500, 1, 1);
			func_163(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				GlobalFunc_5108(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				GlobalFunc_5116(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2453.124f, 4952.071f, 45.125f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 285.8625f);
				STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			}
			func_275(0, 0, 0);
			if (!STREAMING::IS_SRL_LOADED())
			{
				STREAMING::PREFETCH_SRL("chinese2_explosion_cutscene");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_2507 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2507);
			iLocal_2677 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.982f, 4964.823f, 41.3476f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_2677))
			{
				iLocal_2677 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_2677))
			{
				func_28(22, 1);
			}
			iLocal_2647 = 3;
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_2677, 1);
			INTERIOR::UNPIN_INTERIOR(iLocal_2677);
			iLocal_2677 = 0;
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")) || !STREAMING::IS_SRL_LOADED())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				GlobalFunc_5108(0, -1, 1);
			}
			while (!AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				GlobalFunc_5116(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2472.3f, 4948.181f, 44.0937f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 220.8569f);
				STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			}
			func_31(6, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("blazer")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE", 0)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE_BG", 0))
			{
				func_28(25, 1);
			}
			iLocal_2507 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2507);
			func_275(0, 0, 0);
			STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
			GlobalFunc_7621(50, 0, 0, 1, 0);
			GlobalFunc_7621(51, 0, 0, 1, 0);
			GlobalFunc_7621(52, 0, 0, 1, 0);
			GlobalFunc_7621(53, 0, 0, 1, 0);
			GlobalFunc_7621(54, 1, 0, 1, 0);
			GlobalFunc_7621(55, 1, 0, 1, 0);
			uLocal_2671 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2671))
			{
				func_28(161, 1);
			}
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 9);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 0);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 0);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
			if (bParam1)
			{
				GlobalFunc_5108(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				GlobalFunc_5116(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2625.776f, 4802.217f, 32.5747f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 206.4254f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				STREAMING::LOAD_SCENE(2625.776f, 4802.217f, 32.5747f);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 9);
			GlobalFunc_7621(50, 2, 0, 1, 0);
			GlobalFunc_7621(51, 2, 0, 1, 0);
			GlobalFunc_7621(52, 2, 0, 1, 0);
			GlobalFunc_7621(53, 2, 0, 1, 0);
			GlobalFunc_7621(54, 1, 0, 1, 0);
			GlobalFunc_7621(55, 1, 0, 1, 0);
			if (bParam1)
			{
				GlobalFunc_5108(0, -1, 1);
			}
			break;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)//Position - 0x1FD47
{
	Local_3336[iParam0 /*4*/].f_1 = iParam2;
	Local_3336[iParam0 /*4*/] = iParam1;
}

void func_265(int iParam0, int iParam1, int iParam2)//Position - 0x1FD63
{
	Local_3357[iParam0 /*7*/].f_1 = iParam2;
	Local_3357[iParam0 /*7*/] = iParam1;
}



bool func_268()//Position - 0x1FDE0
{
	return Global_93588.f_2167.f_8;
}


float func_270()//Position - 0x1FE1B
{
	return Global_93588.f_2161.f_3;
}





void func_275(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1FF3E
{
	if (bParam0)
	{
		if (GlobalFunc_7984())
		{
			if (GlobalFunc_5667(GlobalFunc_2575(), 10f, 20f, 9f, 1))
			{
				GlobalFunc_8574();
				while (!GlobalFunc_8573())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_2505 = func_323(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_2505 = func_323(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (GlobalFunc_7698())
	{
		GlobalFunc_8368();
		while (!GlobalFunc_8367())
		{
			func_28(544, 1);
		}
		iLocal_2505 = GlobalFunc_10065(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_268())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2505, -1);
			}
		}
	}
}
















































int func_323(struct<3> Param0, float fParam3)//Position - 0x239D7
{
	return GlobalFunc_9147(&(Global_91351.f_2167), Param0, fParam3, 0);
}











void func_334(int iParam0)//Position - 0x23C52
{
	int iVar0;
	int iVar1;
	
	func_178();
	func_179();
	func_180();
	func_177();
	STREAMING::END_SRL();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_3490 = 0;
	iLocal_2648 = 0;
	iLocal_2644 = 0;
	iLocal_2511 = 0;
	iLocal_1613 = 0;
	iLocal_2645 = 0;
	iLocal_2878 = 0;
	iLocal_2879 = 0;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(1);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_28(0, 0);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_2649))
	{
		OBJECT::REMOVE_PICKUP(uLocal_2649);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2650)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_2650[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_2650[iVar0]);
		}
		iVar0++;
	}
	iLocal_3505 = 0;
	iLocal_3506 = 0;
	iLocal_3507 = 0;
	sLocal_3508 = "";
	sLocal_3509 = "";
	func_184();
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(1f);
	GlobalFunc_860();
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_8380(0, 1, 1, 0);
	func_28(32, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::CLEAR_PRINTS();
	GlobalFunc_5652(&Local_2682, 1, 0);
	GlobalFunc_4935();
	GlobalFunc_5744();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		Global_33157 = 1;
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Chinese2_Lunch", 1);
		TASK::SET_SCENARIO_GROUP_ENABLED("CHINESE2_HILLBILLIES", 0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (iLocal_2883 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2883))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2883);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		GlobalFunc_5822(PLAYER::PLAYER_PED_ID(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_754)
	{
		if (iVar0 == 14)
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/]))
		{
			if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_754[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!PED::IS_PED_INJURED(Local_754[iVar0 /*33*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_754[iVar0 /*33*/], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_754[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				PED::DELETE_PED(&(Local_754[iVar0 /*33*/]));
			}
		}
		Local_754[iVar0 /*33*/].f_3 = 0;
		Local_754[iVar0 /*33*/].f_4 = 0;
		Local_754[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_754[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_754[iVar0 /*33*/].f_2 = 25;
		Local_754[iVar0 /*33*/].f_5 = 0;
		Local_754[iVar0 /*33*/].f_12 = 0f;
		Local_754[iVar0 /*33*/].f_13 = 0f;
		Local_754[iVar0 /*33*/].f_14 = 0;
		Local_754[iVar0 /*33*/].f_15 = 0;
		Local_754[iVar0 /*33*/].f_17 = 0;
		Local_754[iVar0 /*33*/].f_16 = 0;
		Local_754[iVar0 /*33*/].f_21 = 0;
		Local_754[iVar0 /*33*/].f_22 = 0;
		Local_1618[iVar0 /*24*/].f_3 = 1;
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[iVar0 /*33*/].f_20))
		{
			OBJECT::DELETE_OBJECT(&(Local_754[iVar0 /*33*/].f_20));
		}
		PED::REMOVE_RELATIONSHIP_GROUP(Local_754[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_335();
	}
	else
	{
		func_202(&Local_1618, &uLocal_2707, cLocal_2337, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2877))
	{
		OBJECT::DELETE_OBJECT(&iLocal_2877);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		MISC::CLEAR_AREA(2438.433f, 4970.416f, 53.1778f, 450f, 1, 0, 0, 0);
		FIRE::STOP_FIRE_IN_RANGE(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_2514)
	{
		if ((Local_2514[iVar0 /*6*/].f_1 == 1 && Local_2514[iVar0 /*6*/].f_3 == 0) || Local_2514[iVar0 /*6*/].f_3 == 0)
		{
			Local_2514[iVar0 /*6*/].f_2 = -1;
			Local_2514[iVar0 /*6*/].f_4 = 0;
			Local_2514[iVar0 /*6*/].f_5 = 0;
			Local_2514[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (HUD::DOES_BLIP_EXIST(uLocal_2676))
	{
		HUD::REMOVE_BLIP(&uLocal_2676);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_2656)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2656[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_2656[iVar1]));
		}
		iVar1++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2505))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, 0))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2505, 1))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2505);
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2505);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2506))
	{
		if (iParam0 != 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2506);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2506);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2506);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2507))
	{
		if (func_68(iLocal_2507))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2507);
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_2674))
	{
		OBJECT::REMOVE_PICKUP(uLocal_2674);
	}
	if (iParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2679);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2680))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2680, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2680);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2641))
	{
		PED::DELETE_PED(&iLocal_2641);
	}
	GRAPHICS::REMOVE_DECALS_IN_RANGE(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[12 /*33*/]))
		{
			PED::DELETE_PED(&(Local_754[12 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[13 /*33*/]))
		{
			PED::DELETE_PED(&(Local_754[13 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[14 /*33*/]))
		{
			PED::DELETE_PED(&(Local_754[14 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[11 /*33*/]))
		{
			PED::DELETE_PED(&(Local_754[11 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_754[10 /*33*/]))
		{
			PED::DELETE_PED(&(Local_754[10 /*33*/]));
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_hillbilly_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_janet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man1a"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_old_man2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_taocheng"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_taostranslator"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_janet"));
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_2640 = 0;
	iLocal_750 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_STEALTH"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_POUR_GAS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_POUR_GAS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOT_GAS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOT_GAS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_GAS_TRAIL_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_RAYFIRE");
	}
	AUDIO::STOP_STREAM();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, GlobalFunc_648());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		GlobalFunc_563(0);
	}
	if (iParam0 != 0)
	{
		uLocal_2671 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_2672)
		{
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2671))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2671, 2);
			}
			iLocal_2672 = 0;
		}
	}
}

void func_335()//Position - 0x24497
{
	EVENT::UNBLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31);
}






void func_341(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x246BB
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_342()//Position - 0x246D4
{
	PED::ADD_RELATIONSHIP_GROUP("MYFRIEND", &iLocal_1614);
	PED::ADD_RELATIONSHIP_GROUP("FOE", &iLocal_1615);
	PED::ADD_RELATIONSHIP_GROUP("IGNORE", &iLocal_1616);
	PED::ADD_RELATIONSHIP_GROUP("BARpeds", &iLocal_2635);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_2635, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_1615);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1615, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1614, iLocal_1616);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1615, iLocal_1616);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1616, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1616, iLocal_1615);
}

void func_343()//Position - 0x2476A
{
	switch (iLocal_3687)
	{
		case 0:
			if (iLocal_2510 >= 4)
			{
				GlobalFunc_Checkpoint1(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_3687++;
			}
			break;
		
		case 1:
			if (iLocal_2510 >= 4 && iLocal_2510 < 7)
			{
				if (func_87(12) || iLocal_2510 == 6)
				{
					GlobalFunc_Checkpoint1(2, "Inside House", 0, 0, 0, 1);
					iLocal_3687++;
				}
			}
			else if (iLocal_2510 == 7)
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
				{
					GlobalFunc_Checkpoint1(2, "Inside House", 0, 0, 0, 1);
					iLocal_3687++;
				}
			}
			else if (iLocal_2510 > 7)
			{
				GlobalFunc_Checkpoint1(2, "Inside House", 0, 0, 0, 1);
				iLocal_3687++;
			}
			break;
		
		case 2:
			if (iLocal_2510 >= 7)
			{
				GlobalFunc_Checkpoint1(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_3687++;
			}
			break;
		
		case 3:
			if (iLocal_2510 == 9)
			{
				GlobalFunc_Checkpoint1(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_3687++;
			}
			break;
	}
}





























































void func_404(int iParam0)//Position - 0x2AF4F
{
	func_334(iParam0);
	GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	GlobalFunc_7632(0);
	GlobalFunc_4956();
	HUD::CLEAR_PRINTS();
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2509))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2509);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"));
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2463.811f, 4961.747f, 44.176f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		GlobalFunc_7621(50, 0, 0, 1, 0);
		GlobalFunc_7621(51, 0, 0, 1, 0);
		GlobalFunc_7621(52, 0, 0, 1, 0);
		GlobalFunc_7621(53, 0, 0, 1, 0);
		GlobalFunc_7621(54, 0, 0, 1, 0);
		GlobalFunc_7621(55, 0, 0, 1, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



